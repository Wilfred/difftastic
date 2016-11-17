#include "tree_sitter/parser.h"

#define STATE_COUNT 517
#define SYMBOL_COUNT 159
#define TOKEN_COUNT 88

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
    sym_params_keyword = 38,
    anon_sym_LBRACK = 39,
    anon_sym_RBRACK = 40,
    anon_sym_assembly = 41,
    anon_sym_module = 42,
    sym_const_keyword = 43,
    anon_sym_readonly = 44,
    anon_sym_volatile = 45,
    anon_sym_EQ = 46,
    anon_sym_true = 47,
    anon_sym_false = 48,
    anon_sym_SQUOTE = 49,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 50,
    sym__hexadecimal_escape_sequence = 51,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 52,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 53,
    anon_sym_BSLASH_SQUOTE = 54,
    anon_sym_BSLASH_DQUOTE = 55,
    anon_sym_BSLASH_BSLASH = 56,
    anon_sym_BSLASH0 = 57,
    anon_sym_BSLASHa = 58,
    anon_sym_BSLASHb = 59,
    anon_sym_BSLASHf = 60,
    anon_sym_BSLASHn = 61,
    anon_sym_BSLASHr = 62,
    anon_sym_BSLASHt = 63,
    anon_sym_BSLASHv = 64,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 65,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 66,
    sym__integer_type_suffix = 67,
    sym_null_literal = 68,
    anon_sym_DOT = 69,
    sym__real_type_suffix = 70,
    sym__exponent_part = 71,
    anon_sym_DQUOTE = 72,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 73,
    anon_sym_AT_DQUOTE = 74,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 75,
    anon_sym_bool = 76,
    anon_sym_decimal = 77,
    anon_sym_double = 78,
    anon_sym_float = 79,
    anon_sym_object = 80,
    anon_sym_string = 81,
    anon_sym_LT = 82,
    anon_sym_GT = 83,
    anon_sym_COLON_COLON = 84,
    sym_global = 85,
    sym_identifier_name = 86,
    sym_comment = 87,
    sym_compilation_unit = 88,
    sym__type_declaration = 89,
    sym_extern_alias_directive = 90,
    sym_using_directive = 91,
    sym_namespace_declaration = 92,
    sym_class_declaration = 93,
    sym_class_modifiers = 94,
    sym__class_modifiers = 95,
    sym_struct_declaration = 96,
    sym_struct_modifiers = 97,
    sym__struct_modifiers = 98,
    sym_enum_declaration = 99,
    sym_enum_member_declaration = 100,
    sym_enum_modifier = 101,
    sym__integral_type = 102,
    sym_delegate_declaration = 103,
    sym_delegate_modifier = 104,
    sym__return_type = 105,
    sym_parameter_list = 106,
    sym__formal_parameter_list = 107,
    sym_parameter = 108,
    sym_parameter_modifier = 109,
    sym_parameter_array = 110,
    sym_array_type = 111,
    sym_array_rank_specifier = 112,
    sym__attributes = 113,
    sym__attribute_section = 114,
    sym_attribute_list = 115,
    sym_attribute = 116,
    sym_attribute_argument_list = 117,
    sym__global_attributes = 118,
    sym_field_declaration = 119,
    sym_field_modifiers = 120,
    sym__field_modifiers = 121,
    sym_variable_declaration = 122,
    sym__type = 123,
    sym_generic_name = 124,
    sym_variable_declarator = 125,
    sym_equals_value_clause = 126,
    sym__expression = 127,
    sym__literal = 128,
    sym_boolean_literal = 129,
    sym_character_literal = 130,
    sym__unicode_escape_sequence = 131,
    sym__simple_escape_sequence = 132,
    sym_integer_literal = 133,
    sym_real_literal = 134,
    sym_string_literal = 135,
    sym__regular_string_literal = 136,
    sym__regular_string_literal_character = 137,
    sym__verbatim_string_literal = 138,
    sym_predefined_type = 139,
    sym_type_parameter_list = 140,
    sym_type_parameter = 141,
    sym_qualified_name = 142,
    sym_alias_qualified_name = 143,
    sym_name_equals = 144,
    sym_static = 145,
    aux_sym_compilation_unit_repeat1 = 146,
    aux_sym_compilation_unit_repeat2 = 147,
    aux_sym_compilation_unit_repeat3 = 148,
    aux_sym_compilation_unit_repeat4 = 149,
    aux_sym_class_declaration_repeat1 = 150,
    aux_sym_enum_declaration_repeat1 = 151,
    aux_sym__formal_parameter_list_repeat1 = 152,
    aux_sym_array_rank_specifier_repeat1 = 153,
    aux_sym__attributes_repeat1 = 154,
    aux_sym_attribute_list_repeat1 = 155,
    aux_sym_variable_declaration_repeat1 = 156,
    aux_sym__regular_string_literal_repeat1 = 157,
    aux_sym_type_parameter_list_repeat1 = 158,
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
    [sym_params_keyword] = "params_keyword",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_assembly] = "assembly",
    [anon_sym_module] = "module",
    [sym_const_keyword] = "const_keyword",
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
    [sym__formal_parameter_list] = "_formal_parameter_list",
    [sym_parameter] = "parameter",
    [sym_parameter_modifier] = "parameter_modifier",
    [sym_parameter_array] = "parameter_array",
    [sym_array_type] = "array_type",
    [sym_array_rank_specifier] = "array_rank_specifier",
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
    [sym__expression] = "_expression",
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
    [aux_sym__formal_parameter_list_repeat1] = "_formal_parameter_list_repeat1",
    [aux_sym_array_rank_specifier_repeat1] = "array_rank_specifier_repeat1",
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
    [sym_params_keyword] = {
        .visible = true,
        .named = true,
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
    [sym_const_keyword] = {
        .visible = true,
        .named = true,
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
    [sym__formal_parameter_list] = {
        .visible = false,
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
    [sym_parameter_array] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_array_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_array_rank_specifier] = {
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
    [sym__expression] = {
        .visible = false,
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
    [aux_sym__formal_parameter_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_array_rank_specifier_repeat1] = {
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
                ADVANCE(104);
            if (lookahead == 'e')
                ADVANCE(122);
            if (lookahead == 'f')
                ADVANCE(131);
            if (lookahead == 'g')
                ADVANCE(140);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(154);
            if (lookahead == 'm')
                ADVANCE(158);
            if (lookahead == 'n')
                ADVANCE(164);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'p')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 't')
                ADVANCE(245);
            if (lookahead == 'u')
                ADVANCE(252);
            if (lookahead == 'v')
                ADVANCE(273);
            if (lookahead == '{')
                ADVANCE(283);
            if (lookahead == '}')
                ADVANCE(284);
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
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            if (lookahead == 'l')
                ADVANCE(96);
            if (lookahead == 'o')
                ADVANCE(100);
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_const_keyword);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'o')
                ADVANCE(117);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(106);
            if (lookahead == 'l')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_decimal);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
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
            ACCEPT_TOKEN(anon_sym_delegate);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_double);
        case 122:
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
                ADVANCE(123);
            if (lookahead == 'x')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_enum);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_extern);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(132);
            if (lookahead == 'l')
                ADVANCE(136);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_false);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_float);
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_global);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
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
            ACCEPT_TOKEN(anon_sym_int);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_internal);
        case 154:
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
                ADVANCE(155);
            if (lookahead == 'u')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_long);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(159);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_module);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(165);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'u')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'w')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_new);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_null_literal);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(179);
            if (lookahead == 'u')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'j')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_object);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_out);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(187);
            if (lookahead == 'r')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(189);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_params_keyword);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(193);
            if (lookahead == 'o')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'v')
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_private);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(203);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_protected);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_public);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(212);
            if (lookahead == 'f')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ref);
        case 219:
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
                ADVANCE(220);
            if (lookahead == 'e')
                ADVANCE(224);
            if (lookahead == 'h')
                ADVANCE(229);
            if (lookahead == 't')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier_name);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier_name);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier_name);
        case 223:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier_name);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier_name);
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier_name);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier_name);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_short);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(234);
            if (lookahead == 'r')
                ADVANCE(238);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier_name);
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier_name);
        case 237:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_static);
        case 238:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(239);
            if (lookahead == 'u')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier_name);
        case 239:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 240:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier_name);
        case 241:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_string);
        case 242:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier_name);
        case 243:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier_name);
        case 244:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_struct);
        case 245:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(246);
            if (lookahead == 'r')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier_name);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(247);
            ACCEPT_TOKEN(sym_identifier_name);
        case 247:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier_name);
        case 248:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_this);
        case 249:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier_name);
        case 250:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier_name);
        case 251:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_true);
        case 252:
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
                ADVANCE(253);
            if (lookahead == 'l')
                ADVANCE(256);
            if (lookahead == 'n')
                ADVANCE(260);
            if (lookahead == 's')
                ADVANCE(265);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier_name);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier_name);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_uint);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(257);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier_name);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier_name);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(261);
            ACCEPT_TOKEN(sym_identifier_name);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(262);
            ACCEPT_TOKEN(sym_identifier_name);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier_name);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(264);
            ACCEPT_TOKEN(sym_identifier_name);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(266);
            if (lookahead == 'i')
                ADVANCE(270);
            ACCEPT_TOKEN(sym_identifier_name);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier_name);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier_name);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(269);
            ACCEPT_TOKEN(sym_identifier_name);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(271);
            ACCEPT_TOKEN(sym_identifier_name);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(272);
            ACCEPT_TOKEN(sym_identifier_name);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_using);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(274);
            ACCEPT_TOKEN(sym_identifier_name);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(275);
            if (lookahead == 'l')
                ADVANCE(277);
            ACCEPT_TOKEN(sym_identifier_name);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(276);
            ACCEPT_TOKEN(sym_identifier_name);
        case 276:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_void_keyword);
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(278);
            ACCEPT_TOKEN(sym_identifier_name);
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(279);
            ACCEPT_TOKEN(sym_identifier_name);
        case 279:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier_name);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(282);
            ACCEPT_TOKEN(sym_identifier_name);
        case 282:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 283:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 284:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 285:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(285);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'e')
                ADVANCE(307);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(324);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(369);
            LEX_ERROR();
        case 286:
            if (lookahead == 'b')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            if (lookahead == 's')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 't')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'r')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_abstract);
        case 294:
            if (lookahead == 'l')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            if (lookahead == 'a')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            if (lookahead == 's')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            if (lookahead == 's')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            ACCEPT_TOKEN(anon_sym_class);
        case 299:
            if (lookahead == 'e')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            if (lookahead == 'l')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            if (lookahead == 'e')
                ADVANCE(302);
            LEX_ERROR();
        case 302:
            if (lookahead == 'g')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            if (lookahead == 'a')
                ADVANCE(304);
            LEX_ERROR();
        case 304:
            if (lookahead == 't')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'e')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            ACCEPT_TOKEN(anon_sym_delegate);
        case 307:
            if (lookahead == 'n')
                ADVANCE(308);
            if (lookahead == 'x')
                ADVANCE(311);
            LEX_ERROR();
        case 308:
            if (lookahead == 'u')
                ADVANCE(309);
            LEX_ERROR();
        case 309:
            if (lookahead == 'm')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            ACCEPT_TOKEN(anon_sym_enum);
        case 311:
            if (lookahead == 't')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            if (lookahead == 'e')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 'r')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 'n')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            ACCEPT_TOKEN(anon_sym_extern);
        case 316:
            if (lookahead == 'n')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 't')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'e')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            if (lookahead == 'r')
                ADVANCE(320);
            LEX_ERROR();
        case 320:
            if (lookahead == 'n')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 'a')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 'l')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            ACCEPT_TOKEN(anon_sym_internal);
        case 324:
            if (lookahead == 'a')
                ADVANCE(325);
            if (lookahead == 'e')
                ADVANCE(333);
            LEX_ERROR();
        case 325:
            if (lookahead == 'm')
                ADVANCE(326);
            LEX_ERROR();
        case 326:
            if (lookahead == 'e')
                ADVANCE(327);
            LEX_ERROR();
        case 327:
            if (lookahead == 's')
                ADVANCE(328);
            LEX_ERROR();
        case 328:
            if (lookahead == 'p')
                ADVANCE(329);
            LEX_ERROR();
        case 329:
            if (lookahead == 'a')
                ADVANCE(330);
            LEX_ERROR();
        case 330:
            if (lookahead == 'c')
                ADVANCE(331);
            LEX_ERROR();
        case 331:
            if (lookahead == 'e')
                ADVANCE(332);
            LEX_ERROR();
        case 332:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 333:
            if (lookahead == 'w')
                ADVANCE(334);
            LEX_ERROR();
        case 334:
            ACCEPT_TOKEN(anon_sym_new);
        case 335:
            if (lookahead == 'r')
                ADVANCE(336);
            if (lookahead == 'u')
                ADVANCE(349);
            LEX_ERROR();
        case 336:
            if (lookahead == 'i')
                ADVANCE(337);
            if (lookahead == 'o')
                ADVANCE(342);
            LEX_ERROR();
        case 337:
            if (lookahead == 'v')
                ADVANCE(338);
            LEX_ERROR();
        case 338:
            if (lookahead == 'a')
                ADVANCE(339);
            LEX_ERROR();
        case 339:
            if (lookahead == 't')
                ADVANCE(340);
            LEX_ERROR();
        case 340:
            if (lookahead == 'e')
                ADVANCE(341);
            LEX_ERROR();
        case 341:
            ACCEPT_TOKEN(anon_sym_private);
        case 342:
            if (lookahead == 't')
                ADVANCE(343);
            LEX_ERROR();
        case 343:
            if (lookahead == 'e')
                ADVANCE(344);
            LEX_ERROR();
        case 344:
            if (lookahead == 'c')
                ADVANCE(345);
            LEX_ERROR();
        case 345:
            if (lookahead == 't')
                ADVANCE(346);
            LEX_ERROR();
        case 346:
            if (lookahead == 'e')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            if (lookahead == 'd')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            ACCEPT_TOKEN(anon_sym_protected);
        case 349:
            if (lookahead == 'b')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            if (lookahead == 'l')
                ADVANCE(351);
            LEX_ERROR();
        case 351:
            if (lookahead == 'i')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == 'c')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            ACCEPT_TOKEN(anon_sym_public);
        case 354:
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 't')
                ADVANCE(360);
            LEX_ERROR();
        case 355:
            if (lookahead == 'a')
                ADVANCE(356);
            LEX_ERROR();
        case 356:
            if (lookahead == 'l')
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            if (lookahead == 'e')
                ADVANCE(358);
            LEX_ERROR();
        case 358:
            if (lookahead == 'd')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 360:
            if (lookahead == 'a')
                ADVANCE(361);
            if (lookahead == 'r')
                ADVANCE(365);
            LEX_ERROR();
        case 361:
            if (lookahead == 't')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'i')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 'c')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            ACCEPT_TOKEN(anon_sym_static);
        case 365:
            if (lookahead == 'u')
                ADVANCE(366);
            LEX_ERROR();
        case 366:
            if (lookahead == 'c')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            if (lookahead == 't')
                ADVANCE(368);
            LEX_ERROR();
        case 368:
            ACCEPT_TOKEN(anon_sym_struct);
        case 369:
            if (lookahead == 'n')
                ADVANCE(370);
            if (lookahead == 's')
                ADVANCE(375);
            LEX_ERROR();
        case 370:
            if (lookahead == 's')
                ADVANCE(371);
            LEX_ERROR();
        case 371:
            if (lookahead == 'a')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 'f')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            if (lookahead == 'e')
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 375:
            if (lookahead == 'i')
                ADVANCE(376);
            LEX_ERROR();
        case 376:
            if (lookahead == 'n')
                ADVANCE(377);
            LEX_ERROR();
        case 377:
            if (lookahead == 'g')
                ADVANCE(378);
            LEX_ERROR();
        case 378:
            ACCEPT_TOKEN(anon_sym_using);
        case 379:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(379);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(380);
            LEX_ERROR();
        case 380:
            if (lookahead == 'l')
                ADVANCE(381);
            LEX_ERROR();
        case 381:
            if (lookahead == 'i')
                ADVANCE(382);
            LEX_ERROR();
        case 382:
            if (lookahead == 'a')
                ADVANCE(383);
            LEX_ERROR();
        case 383:
            if (lookahead == 's')
                ADVANCE(384);
            LEX_ERROR();
        case 384:
            ACCEPT_TOKEN(anon_sym_alias);
        case 385:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(385);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(140);
            if (lookahead == 's')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(387);
            ACCEPT_TOKEN(sym_identifier_name);
        case 387:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(140);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 390:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(390);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(391);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(392);
            LEX_ERROR();
        case 391:
            if (lookahead == 'e')
                ADVANCE(333);
            LEX_ERROR();
        case 392:
            if (lookahead == 'n')
                ADVANCE(370);
            LEX_ERROR();
        case 393:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(393);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(391);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(394);
            if (lookahead == 'u')
                ADVANCE(392);
            LEX_ERROR();
        case 394:
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 't')
                ADVANCE(395);
            LEX_ERROR();
        case 395:
            if (lookahead == 'a')
                ADVANCE(361);
            LEX_ERROR();
        case 396:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(396);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'e')
                ADVANCE(397);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(391);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(392);
            LEX_ERROR();
        case 397:
            if (lookahead == 'n')
                ADVANCE(308);
            LEX_ERROR();
        case 398:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(398);
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
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 'u')
                ADVANCE(411);
            if (lookahead == 'v')
                ADVANCE(414);
            LEX_ERROR();
        case 399:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 400:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(401);
            if (lookahead == 'o')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 401:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 402:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 403:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(404);
            ACCEPT_TOKEN(sym_identifier_name);
        case 404:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(405);
            ACCEPT_TOKEN(sym_identifier_name);
        case 405:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 406:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 407:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 408:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(220);
            if (lookahead == 'h')
                ADVANCE(229);
            if (lookahead == 't')
                ADVANCE(409);
            ACCEPT_TOKEN(sym_identifier_name);
        case 409:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(410);
            ACCEPT_TOKEN(sym_identifier_name);
        case 410:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier_name);
        case 411:
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
                ADVANCE(253);
            if (lookahead == 'l')
                ADVANCE(412);
            if (lookahead == 's')
                ADVANCE(413);
            ACCEPT_TOKEN(sym_identifier_name);
        case 412:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier_name);
        case 413:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(266);
            ACCEPT_TOKEN(sym_identifier_name);
        case 414:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(415);
            ACCEPT_TOKEN(sym_identifier_name);
        case 415:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
        case 416:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(416);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(417);
            if (lookahead == 'm')
                ADVANCE(418);
            LEX_ERROR();
        case 417:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 418:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 419:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(419);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 420:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(420);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'e')
                ADVANCE(397);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(324);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(392);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 421:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(421);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'e')
                ADVANCE(397);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(324);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(369);
            LEX_ERROR();
        case 422:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(422);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(426);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 423:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 424:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'o')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 425:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 426:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(165);
            if (lookahead == 'e')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 427:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 428:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(429);
            ACCEPT_TOKEN(sym_identifier_name);
        case 429:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 430:
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
                ADVANCE(253);
            if (lookahead == 'l')
                ADVANCE(412);
            if (lookahead == 'n')
                ADVANCE(260);
            if (lookahead == 's')
                ADVANCE(413);
            ACCEPT_TOKEN(sym_identifier_name);
        case 431:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(432);
            ACCEPT_TOKEN(sym_identifier_name);
        case 432:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(277);
            ACCEPT_TOKEN(sym_identifier_name);
        case 433:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(433);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(294);
            LEX_ERROR();
        case 434:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(434);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(435);
            LEX_ERROR();
        case 435:
            if (lookahead == 't')
                ADVANCE(436);
            LEX_ERROR();
        case 436:
            if (lookahead == 'r')
                ADVANCE(365);
            LEX_ERROR();
        case 437:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(437);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(397);
            LEX_ERROR();
        case 438:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(438);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'd')
                ADVANCE(299);
            LEX_ERROR();
        case 439:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(439);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'p')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 440:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 441:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier_name);
        case 442:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(442);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'e')
                ADVANCE(397);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(324);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(392);
            LEX_ERROR();
        case 443:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(443);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 444:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(444);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 445:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(445);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 446:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(446);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 447:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(447);
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
            if (lookahead == '[')
                ADVANCE(33);
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
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 449:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(449);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 450:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(450);
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
                (lookahead == 'q') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'p')
                ADVANCE(451);
            if (lookahead == 'r')
                ADVANCE(452);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 451:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 452:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(453);
            ACCEPT_TOKEN(sym_identifier_name);
        case 453:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 454:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(454);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 455:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(455);
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
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 456:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(456);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            LEX_ERROR();
        case 457:
            if (lookahead == 'a')
                ADVANCE(458);
            LEX_ERROR();
        case 458:
            if (lookahead == 'r')
                ADVANCE(459);
            LEX_ERROR();
        case 459:
            if (lookahead == 'a')
                ADVANCE(460);
            LEX_ERROR();
        case 460:
            if (lookahead == 'm')
                ADVANCE(461);
            LEX_ERROR();
        case 461:
            if (lookahead == 's')
                ADVANCE(462);
            LEX_ERROR();
        case 462:
            ACCEPT_TOKEN(sym_params_keyword);
        case 463:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(463);
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
                (lookahead == 'q') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'p')
                ADVANCE(451);
            if (lookahead == 'r')
                ADVANCE(452);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 464:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(464);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 465:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(465);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 466:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(466);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 467:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(467);
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
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'r')
                ADVANCE(452);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 468:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(468);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(457);
            LEX_ERROR();
        case 469:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(469);
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
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'r')
                ADVANCE(452);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 470:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(470);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(471);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 471:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 472:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(472);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 473:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(473);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(474);
            if (lookahead == 'c')
                ADVANCE(478);
            if (lookahead == 'i')
                ADVANCE(482);
            if (lookahead == 'l')
                ADVANCE(485);
            if (lookahead == 's')
                ADVANCE(489);
            if (lookahead == 'u')
                ADVANCE(498);
            LEX_ERROR();
        case 474:
            if (lookahead == 'y')
                ADVANCE(475);
            LEX_ERROR();
        case 475:
            if (lookahead == 't')
                ADVANCE(476);
            LEX_ERROR();
        case 476:
            if (lookahead == 'e')
                ADVANCE(477);
            LEX_ERROR();
        case 477:
            ACCEPT_TOKEN(anon_sym_byte);
        case 478:
            if (lookahead == 'h')
                ADVANCE(479);
            LEX_ERROR();
        case 479:
            if (lookahead == 'a')
                ADVANCE(480);
            LEX_ERROR();
        case 480:
            if (lookahead == 'r')
                ADVANCE(481);
            LEX_ERROR();
        case 481:
            ACCEPT_TOKEN(anon_sym_char);
        case 482:
            if (lookahead == 'n')
                ADVANCE(483);
            LEX_ERROR();
        case 483:
            if (lookahead == 't')
                ADVANCE(484);
            LEX_ERROR();
        case 484:
            ACCEPT_TOKEN(anon_sym_int);
        case 485:
            if (lookahead == 'o')
                ADVANCE(486);
            LEX_ERROR();
        case 486:
            if (lookahead == 'n')
                ADVANCE(487);
            LEX_ERROR();
        case 487:
            if (lookahead == 'g')
                ADVANCE(488);
            LEX_ERROR();
        case 488:
            ACCEPT_TOKEN(anon_sym_long);
        case 489:
            if (lookahead == 'b')
                ADVANCE(490);
            if (lookahead == 'h')
                ADVANCE(494);
            LEX_ERROR();
        case 490:
            if (lookahead == 'y')
                ADVANCE(491);
            LEX_ERROR();
        case 491:
            if (lookahead == 't')
                ADVANCE(492);
            LEX_ERROR();
        case 492:
            if (lookahead == 'e')
                ADVANCE(493);
            LEX_ERROR();
        case 493:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 494:
            if (lookahead == 'o')
                ADVANCE(495);
            LEX_ERROR();
        case 495:
            if (lookahead == 'r')
                ADVANCE(496);
            LEX_ERROR();
        case 496:
            if (lookahead == 't')
                ADVANCE(497);
            LEX_ERROR();
        case 497:
            ACCEPT_TOKEN(anon_sym_short);
        case 498:
            if (lookahead == 'i')
                ADVANCE(499);
            if (lookahead == 'l')
                ADVANCE(502);
            if (lookahead == 's')
                ADVANCE(506);
            LEX_ERROR();
        case 499:
            if (lookahead == 'n')
                ADVANCE(500);
            LEX_ERROR();
        case 500:
            if (lookahead == 't')
                ADVANCE(501);
            LEX_ERROR();
        case 501:
            ACCEPT_TOKEN(anon_sym_uint);
        case 502:
            if (lookahead == 'o')
                ADVANCE(503);
            LEX_ERROR();
        case 503:
            if (lookahead == 'n')
                ADVANCE(504);
            LEX_ERROR();
        case 504:
            if (lookahead == 'g')
                ADVANCE(505);
            LEX_ERROR();
        case 505:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 506:
            if (lookahead == 'h')
                ADVANCE(507);
            LEX_ERROR();
        case 507:
            if (lookahead == 'o')
                ADVANCE(508);
            LEX_ERROR();
        case 508:
            if (lookahead == 'r')
                ADVANCE(509);
            LEX_ERROR();
        case 509:
            if (lookahead == 't')
                ADVANCE(510);
            LEX_ERROR();
        case 510:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 511:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(511);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(283);
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
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 513:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(513);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 514:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(514);
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
                ADVANCE(515);
            if (lookahead == 'n')
                ADVANCE(520);
            if (lookahead == 't')
                ADVANCE(524);
            LEX_ERROR();
        case 515:
            if (lookahead == 'a')
                ADVANCE(516);
            LEX_ERROR();
        case 516:
            if (lookahead == 'l')
                ADVANCE(517);
            LEX_ERROR();
        case 517:
            if (lookahead == 's')
                ADVANCE(518);
            LEX_ERROR();
        case 518:
            if (lookahead == 'e')
                ADVANCE(519);
            LEX_ERROR();
        case 519:
            ACCEPT_TOKEN(anon_sym_false);
        case 520:
            if (lookahead == 'u')
                ADVANCE(521);
            LEX_ERROR();
        case 521:
            if (lookahead == 'l')
                ADVANCE(522);
            LEX_ERROR();
        case 522:
            if (lookahead == 'l')
                ADVANCE(523);
            LEX_ERROR();
        case 523:
            ACCEPT_TOKEN(sym_null_literal);
        case 524:
            if (lookahead == 'r')
                ADVANCE(525);
            LEX_ERROR();
        case 525:
            if (lookahead == 'u')
                ADVANCE(526);
            LEX_ERROR();
        case 526:
            if (lookahead == 'e')
                ADVANCE(527);
            LEX_ERROR();
        case 527:
            ACCEPT_TOKEN(anon_sym_true);
        case 528:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(528);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 529:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(530);
            if (lookahead == '/')
                ADVANCE(531);
            if (lookahead == '\\')
                ADVANCE(532);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(530);
            LEX_ERROR();
        case 530:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 531:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 532:
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
        case 533:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(533);
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
                ADVANCE(534);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(535);
            if (lookahead == 'L')
                ADVANCE(536);
            if (lookahead == 'U')
                ADVANCE(538);
            if (lookahead == 'l')
                ADVANCE(536);
            if (lookahead == 'u')
                ADVANCE(538);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 534:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 535:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 536:
            if (lookahead == 'U')
                ADVANCE(537);
            if (lookahead == 'u')
                ADVANCE(537);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 537:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 538:
            if (lookahead == 'L')
                ADVANCE(537);
            if (lookahead == 'l')
                ADVANCE(537);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 539:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(539);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(536);
            if (lookahead == 'U')
                ADVANCE(538);
            if (lookahead == 'l')
                ADVANCE(536);
            if (lookahead == 'u')
                ADVANCE(538);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 540:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(540);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 541:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(542);
            if (lookahead == '\n')
                SKIP(541);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(543);
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
                ADVANCE(542);
            LEX_ERROR();
        case 542:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 543:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 544:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(545);
            if (lookahead == '/')
                ADVANCE(546);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(550);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 545:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(545);
            if (lookahead == '/')
                ADVANCE(546);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(550);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 546:
            if (lookahead == '*')
                ADVANCE(547);
            if (lookahead == '/')
                ADVANCE(551);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(550);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 547:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(548);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(547);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 548:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(549);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(547);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 549:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(550);
            ACCEPT_TOKEN(sym_comment);
        case 550:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(550);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 551:
            if (lookahead == '\n')
                ADVANCE(550);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(552);
            ACCEPT_TOKEN(sym_comment);
        case 552:
            if (lookahead == '\n')
                ADVANCE(550);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(552);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 553:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(553);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 554:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(542);
            if (lookahead == '\n')
                SKIP(554);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(543);
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
                ADVANCE(542);
            LEX_ERROR();
        case 555:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(555);
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
                ADVANCE(534);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(535);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 556:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(556);
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
                ADVANCE(534);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 557:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(557);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 558:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(558);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(426);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 559:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(559);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 560:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(560);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 561:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(561);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 562:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(562);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(563);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 563:
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
                ADVANCE(220);
            if (lookahead == 'e')
                ADVANCE(224);
            if (lookahead == 'h')
                ADVANCE(229);
            if (lookahead == 't')
                ADVANCE(564);
            ACCEPT_TOKEN(sym_identifier_name);
        case 564:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(234);
            if (lookahead == 'r')
                ADVANCE(410);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
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
                ADVANCE(567);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(568);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 567:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            if (lookahead == 'o')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 568:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(220);
            if (lookahead == 'h')
                ADVANCE(229);
            if (lookahead == 't')
                ADVANCE(564);
            ACCEPT_TOKEN(sym_identifier_name);
        case 569:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(569);
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
                ADVANCE(567);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 570:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(570);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 571:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(571);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 572:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(572);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 573:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(573);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(471);
            LEX_ERROR();
        case 574:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(574);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(391);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(392);
            LEX_ERROR();
        case 575:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(575);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(576);
            LEX_ERROR();
        case 576:
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 577:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(577);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 578:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(578);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 579:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(579);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 580:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(580);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(286);
            if (lookahead == 'c')
                ADVANCE(294);
            if (lookahead == 'd')
                ADVANCE(299);
            if (lookahead == 'e')
                ADVANCE(397);
            if (lookahead == 'i')
                ADVANCE(316);
            if (lookahead == 'n')
                ADVANCE(324);
            if (lookahead == 'p')
                ADVANCE(335);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(392);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 581:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(581);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 582:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(582);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 583:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(583);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(584);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(426);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(585);
            if (lookahead == 'v')
                ADVANCE(431);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 584:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(123);
            if (lookahead == 'x')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 585:
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
                ADVANCE(253);
            if (lookahead == 'l')
                ADVANCE(412);
            if (lookahead == 'n')
                ADVANCE(260);
            if (lookahead == 's')
                ADVANCE(265);
            ACCEPT_TOKEN(sym_identifier_name);
        case 586:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(586);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(426);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 587:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(587);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'g')
                ADVANCE(140);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(407);
            if (lookahead == 'p')
                ADVANCE(427);
            if (lookahead == 'r')
                ADVANCE(428);
            if (lookahead == 's')
                ADVANCE(563);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 588:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(588);
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
                ADVANCE(589);
            if (lookahead == 'c')
                ADVANCE(399);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 's')
                ADVANCE(590);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 589:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 590:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(220);
            if (lookahead == 'h')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier_name);
        case 591:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(591);
            if (lookahead == ',')
                ADVANCE(6);
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
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(399);
            if (lookahead == 'd')
                ADVANCE(400);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'r')
                ADVANCE(452);
            if (lookahead == 's')
                ADVANCE(408);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 592:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(592);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 593:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(593);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == 'a')
                ADVANCE(417);
            if (lookahead == 'm')
                ADVANCE(418);
            LEX_ERROR();
        case 594:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(594);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(426);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'p')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 595:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(595);
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
                ADVANCE(596);
            if (lookahead == 'g')
                ADVANCE(140);
            if (lookahead == 'n')
                ADVANCE(597);
            if (lookahead == 't')
                ADVANCE(598);
            LEX_ERROR();
        case 596:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 597:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 598:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier_name);
        case 599:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(530);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(531);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(532);
            if (lookahead == '}')
                ADVANCE(284);
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
                ADVANCE(530);
            LEX_ERROR();
        case 600:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(600);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 601:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(542);
            if (lookahead == '\n')
                SKIP(601);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(543);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(284);
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
                ADVANCE(542);
            LEX_ERROR();
        case 602:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(602);
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
                ADVANCE(471);
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
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(451);
            if (lookahead == '{')
                ADVANCE(283);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 603:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(603);
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
                ADVANCE(423);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(424);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(402);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 'n')
                ADVANCE(440);
            if (lookahead == 'o')
                ADVANCE(178);
            if (lookahead == 'p')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(219);
            if (lookahead == 't')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 604:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(604);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            LEX_ERROR();
        case 605:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(605);
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
                ADVANCE(284);
            LEX_ERROR();
        case 606:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(606);
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
                ADVANCE(284);
            LEX_ERROR();
        case 607:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(607);
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
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 285,
    [2] = 379,
    [3] = 385,
    [4] = 388,
    [5] = 389,
    [6] = 390,
    [7] = 393,
    [8] = 396,
    [9] = 389,
    [10] = 389,
    [11] = 398,
    [12] = 416,
    [13] = 419,
    [14] = 420,
    [15] = 285,
    [16] = 421,
    [17] = 422,
    [18] = 433,
    [19] = 433,
    [20] = 434,
    [21] = 434,
    [22] = 437,
    [23] = 438,
    [24] = 396,
    [25] = 439,
    [26] = 442,
    [27] = 285,
    [28] = 421,
    [29] = 442,
    [30] = 442,
    [31] = 439,
    [32] = 389,
    [33] = 439,
    [34] = 443,
    [35] = 444,
    [36] = 445,
    [37] = 389,
    [38] = 445,
    [39] = 389,
    [40] = 445,
    [41] = 445,
    [42] = 439,
    [43] = 446,
    [44] = 445,
    [45] = 445,
    [46] = 420,
    [47] = 442,
    [48] = 442,
    [49] = 421,
    [50] = 442,
    [51] = 442,
    [52] = 285,
    [53] = 421,
    [54] = 442,
    [55] = 442,
    [56] = 389,
    [57] = 389,
    [58] = 389,
    [59] = 398,
    [60] = 433,
    [61] = 434,
    [62] = 437,
    [63] = 438,
    [64] = 398,
    [65] = 447,
    [66] = 389,
    [67] = 448,
    [68] = 389,
    [69] = 447,
    [70] = 449,
    [71] = 450,
    [72] = 454,
    [73] = 422,
    [74] = 454,
    [75] = 455,
    [76] = 455,
    [77] = 446,
    [78] = 456,
    [79] = 455,
    [80] = 446,
    [81] = 463,
    [82] = 389,
    [83] = 456,
    [84] = 455,
    [85] = 455,
    [86] = 389,
    [87] = 456,
    [88] = 389,
    [89] = 456,
    [90] = 389,
    [91] = 464,
    [92] = 445,
    [93] = 389,
    [94] = 445,
    [95] = 389,
    [96] = 445,
    [97] = 445,
    [98] = 389,
    [99] = 446,
    [100] = 455,
    [101] = 447,
    [102] = 465,
    [103] = 465,
    [104] = 455,
    [105] = 466,
    [106] = 465,
    [107] = 455,
    [108] = 466,
    [109] = 465,
    [110] = 465,
    [111] = 467,
    [112] = 446,
    [113] = 468,
    [114] = 456,
    [115] = 467,
    [116] = 446,
    [117] = 456,
    [118] = 469,
    [119] = 456,
    [120] = 454,
    [121] = 389,
    [122] = 446,
    [123] = 389,
    [124] = 470,
    [125] = 472,
    [126] = 473,
    [127] = 511,
    [128] = 511,
    [129] = 472,
    [130] = 512,
    [131] = 513,
    [132] = 389,
    [133] = 512,
    [134] = 514,
    [135] = 513,
    [136] = 528,
    [137] = 529,
    [138] = 533,
    [139] = 539,
    [140] = 528,
    [141] = 540,
    [142] = 541,
    [143] = 544,
    [144] = 528,
    [145] = 528,
    [146] = 528,
    [147] = 553,
    [148] = 528,
    [149] = 541,
    [150] = 554,
    [151] = 554,
    [152] = 528,
    [153] = 541,
    [154] = 541,
    [155] = 528,
    [156] = 541,
    [157] = 555,
    [158] = 528,
    [159] = 556,
    [160] = 528,
    [161] = 528,
    [162] = 540,
    [163] = 528,
    [164] = 556,
    [165] = 555,
    [166] = 556,
    [167] = 528,
    [168] = 557,
    [169] = 557,
    [170] = 557,
    [171] = 528,
    [172] = 558,
    [173] = 472,
    [174] = 513,
    [175] = 558,
    [176] = 472,
    [177] = 513,
    [178] = 422,
    [179] = 513,
    [180] = 422,
    [181] = 513,
    [182] = 513,
    [183] = 558,
    [184] = 513,
    [185] = 558,
    [186] = 422,
    [187] = 422,
    [188] = 389,
    [189] = 559,
    [190] = 560,
    [191] = 511,
    [192] = 560,
    [193] = 422,
    [194] = 561,
    [195] = 562,
    [196] = 565,
    [197] = 455,
    [198] = 566,
    [199] = 560,
    [200] = 565,
    [201] = 569,
    [202] = 569,
    [203] = 454,
    [204] = 389,
    [205] = 560,
    [206] = 422,
    [207] = 560,
    [208] = 570,
    [209] = 571,
    [210] = 389,
    [211] = 571,
    [212] = 389,
    [213] = 571,
    [214] = 571,
    [215] = 571,
    [216] = 560,
    [217] = 455,
    [218] = 454,
    [219] = 560,
    [220] = 454,
    [221] = 560,
    [222] = 569,
    [223] = 455,
    [224] = 454,
    [225] = 560,
    [226] = 422,
    [227] = 560,
    [228] = 389,
    [229] = 559,
    [230] = 560,
    [231] = 511,
    [232] = 560,
    [233] = 422,
    [234] = 560,
    [235] = 422,
    [236] = 422,
    [237] = 560,
    [238] = 389,
    [239] = 449,
    [240] = 454,
    [241] = 422,
    [242] = 470,
    [243] = 472,
    [244] = 473,
    [245] = 511,
    [246] = 472,
    [247] = 513,
    [248] = 513,
    [249] = 513,
    [250] = 558,
    [251] = 513,
    [252] = 422,
    [253] = 559,
    [254] = 560,
    [255] = 511,
    [256] = 422,
    [257] = 560,
    [258] = 559,
    [259] = 560,
    [260] = 511,
    [261] = 422,
    [262] = 560,
    [263] = 569,
    [264] = 389,
    [265] = 449,
    [266] = 454,
    [267] = 422,
    [268] = 470,
    [269] = 472,
    [270] = 473,
    [271] = 511,
    [272] = 513,
    [273] = 558,
    [274] = 513,
    [275] = 422,
    [276] = 559,
    [277] = 560,
    [278] = 511,
    [279] = 422,
    [280] = 560,
    [281] = 572,
    [282] = 433,
    [283] = 434,
    [284] = 559,
    [285] = 560,
    [286] = 511,
    [287] = 422,
    [288] = 560,
    [289] = 573,
    [290] = 389,
    [291] = 444,
    [292] = 442,
    [293] = 574,
    [294] = 575,
    [295] = 577,
    [296] = 578,
    [297] = 389,
    [298] = 579,
    [299] = 580,
    [300] = 420,
    [301] = 580,
    [302] = 420,
    [303] = 389,
    [304] = 578,
    [305] = 388,
    [306] = 581,
    [307] = 582,
    [308] = 388,
    [309] = 582,
    [310] = 421,
    [311] = 421,
    [312] = 388,
    [313] = 389,
    [314] = 454,
    [315] = 285,
    [316] = 583,
    [317] = 586,
    [318] = 558,
    [319] = 389,
    [320] = 587,
    [321] = 389,
    [322] = 389,
    [323] = 588,
    [324] = 591,
    [325] = 466,
    [326] = 398,
    [327] = 450,
    [328] = 592,
    [329] = 455,
    [330] = 593,
    [331] = 594,
    [332] = 455,
    [333] = 595,
    [334] = 599,
    [335] = 554,
    [336] = 533,
    [337] = 600,
    [338] = 528,
    [339] = 556,
    [340] = 601,
    [341] = 466,
    [342] = 602,
    [343] = 422,
    [344] = 285,
    [345] = 421,
    [346] = 420,
    [347] = 433,
    [348] = 433,
    [349] = 434,
    [350] = 434,
    [351] = 513,
    [352] = 437,
    [353] = 511,
    [354] = 438,
    [355] = 389,
    [356] = 454,
    [357] = 456,
    [358] = 455,
    [359] = 446,
    [360] = 389,
    [361] = 603,
    [362] = 439,
    [363] = 444,
    [364] = 445,
    [365] = 442,
    [366] = 560,
    [367] = 569,
    [368] = 569,
    [369] = 454,
    [370] = 447,
    [371] = 571,
    [372] = 528,
    [373] = 541,
    [374] = 466,
    [375] = 465,
    [376] = 579,
    [377] = 421,
    [378] = 442,
    [379] = 420,
    [380] = 560,
    [381] = 513,
    [382] = 558,
    [383] = 422,
    [384] = 422,
    [385] = 442,
    [386] = 442,
    [387] = 442,
    [388] = 442,
    [389] = 421,
    [390] = 560,
    [391] = 422,
    [392] = 560,
    [393] = 422,
    [394] = 604,
    [395] = 560,
    [396] = 455,
    [397] = 454,
    [398] = 560,
    [399] = 454,
    [400] = 560,
    [401] = 594,
    [402] = 605,
    [403] = 389,
    [404] = 604,
    [405] = 446,
    [406] = 389,
    [407] = 456,
    [408] = 422,
    [409] = 449,
    [410] = 398,
    [411] = 389,
    [412] = 449,
    [413] = 454,
    [414] = 422,
    [415] = 472,
    [416] = 513,
    [417] = 558,
    [418] = 513,
    [419] = 558,
    [420] = 422,
    [421] = 422,
    [422] = 389,
    [423] = 470,
    [424] = 472,
    [425] = 473,
    [426] = 511,
    [427] = 472,
    [428] = 513,
    [429] = 558,
    [430] = 513,
    [431] = 558,
    [432] = 422,
    [433] = 422,
    [434] = 513,
    [435] = 558,
    [436] = 513,
    [437] = 558,
    [438] = 422,
    [439] = 422,
    [440] = 558,
    [441] = 422,
    [442] = 389,
    [443] = 559,
    [444] = 560,
    [445] = 511,
    [446] = 560,
    [447] = 422,
    [448] = 560,
    [449] = 422,
    [450] = 422,
    [451] = 560,
    [452] = 389,
    [453] = 559,
    [454] = 560,
    [455] = 511,
    [456] = 560,
    [457] = 422,
    [458] = 560,
    [459] = 422,
    [460] = 422,
    [461] = 560,
    [462] = 285,
    [463] = 586,
    [464] = 473,
    [465] = 422,
    [466] = 605,
    [467] = 586,
    [468] = 513,
    [469] = 565,
    [470] = 560,
    [471] = 558,
    [472] = 513,
    [473] = 558,
    [474] = 422,
    [475] = 422,
    [476] = 528,
    [477] = 555,
    [478] = 528,
    [479] = 556,
    [480] = 528,
    [481] = 528,
    [482] = 454,
    [483] = 560,
    [484] = 592,
    [485] = 606,
    [486] = 513,
    [487] = 456,
    [488] = 469,
    [489] = 445,
    [490] = 607,
    [491] = 571,
    [492] = 465,
    [493] = 528,
    [494] = 470,
    [495] = 472,
    [496] = 559,
    [497] = 560,
    [498] = 511,
    [499] = 560,
    [500] = 422,
    [501] = 560,
    [502] = 422,
    [503] = 422,
    [504] = 560,
    [505] = 559,
    [506] = 560,
    [507] = 511,
    [508] = 560,
    [509] = 422,
    [510] = 560,
    [511] = 422,
    [512] = 422,
    [513] = 560,
    [514] = 422,
    [515] = 422,
    [516] = 513,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(13),
        [sym__type_declaration] = STATE(343),
        [sym_extern_alias_directive] = STATE(344),
        [sym_using_directive] = STATE(345),
        [sym_namespace_declaration] = STATE(346),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(347),
        [sym__class_modifiers] = STATE(348),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(349),
        [sym__struct_modifiers] = STATE(350),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(351),
        [sym_enum_modifier] = STATE(352),
        [sym__integral_type] = STATE(353),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(354),
        [sym__return_type] = STATE(355),
        [sym_parameter_list] = STATE(356),
        [sym__formal_parameter_list] = STATE(77),
        [sym_parameter] = STATE(357),
        [sym_parameter_modifier] = STATE(358),
        [sym_parameter_array] = STATE(359),
        [sym_array_type] = STATE(360),
        [sym_array_rank_specifier] = STATE(93),
        [sym__attributes] = STATE(361),
        [sym__attribute_section] = STATE(362),
        [sym_attribute_list] = STATE(363),
        [sym_attribute] = STATE(364),
        [sym_attribute_argument_list] = STATE(44),
        [sym__global_attributes] = STATE(365),
        [sym_field_declaration] = STATE(366),
        [sym_field_modifiers] = STATE(367),
        [sym__field_modifiers] = STATE(368),
        [sym_variable_declaration] = STATE(369),
        [sym__type] = STATE(370),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(371),
        [sym_equals_value_clause] = STATE(372),
        [sym__expression] = STATE(144),
        [sym__literal] = STATE(145),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym__unicode_escape_sequence] = STATE(335),
        [sym__simple_escape_sequence] = STATE(335),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(146),
        [sym__regular_string_literal_character] = STATE(373),
        [sym__verbatim_string_literal] = STATE(146),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter_list] = STATE(374),
        [sym_type_parameter] = STATE(375),
        [sym_qualified_name] = STATE(376),
        [sym_alias_qualified_name] = STATE(296),
        [sym_name_equals] = STATE(308),
        [sym_static] = STATE(308),
        [aux_sym_compilation_unit_repeat1] = STATE(27),
        [aux_sym_compilation_unit_repeat2] = STATE(377),
        [aux_sym_compilation_unit_repeat3] = STATE(378),
        [aux_sym_compilation_unit_repeat4] = STATE(379),
        [aux_sym_class_declaration_repeat1] = STATE(380),
        [aux_sym_enum_declaration_repeat1] = STATE(381),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [aux_sym__attributes_repeat1] = STATE(31),
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [aux_sym_variable_declaration_repeat1] = STATE(211),
        [aux_sym__regular_string_literal_repeat1] = STATE(154),
        [aux_sym_type_parameter_list_repeat1] = STATE(106),
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
        [sym_params_keyword] = ACTIONS(47),
        [anon_sym_LBRACK] = ACTIONS(49),
        [anon_sym_RBRACK] = ACTIONS(51),
        [anon_sym_assembly] = ACTIONS(53),
        [anon_sym_module] = ACTIONS(53),
        [sym_const_keyword] = ACTIONS(55),
        [anon_sym_readonly] = ACTIONS(57),
        [anon_sym_volatile] = ACTIONS(57),
        [anon_sym_EQ] = ACTIONS(59),
        [anon_sym_true] = ACTIONS(61),
        [anon_sym_false] = ACTIONS(61),
        [anon_sym_SQUOTE] = ACTIONS(63),
        [sym__hexadecimal_escape_sequence] = ACTIONS(65),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(67),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(67),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(69),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(69),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(69),
        [anon_sym_BSLASH0] = ACTIONS(69),
        [anon_sym_BSLASHa] = ACTIONS(69),
        [anon_sym_BSLASHb] = ACTIONS(69),
        [anon_sym_BSLASHf] = ACTIONS(69),
        [anon_sym_BSLASHn] = ACTIONS(69),
        [anon_sym_BSLASHr] = ACTIONS(69),
        [anon_sym_BSLASHt] = ACTIONS(69),
        [anon_sym_BSLASHv] = ACTIONS(69),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(71),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(73),
        [sym__integer_type_suffix] = ACTIONS(75),
        [sym_null_literal] = ACTIONS(77),
        [anon_sym_DOT] = ACTIONS(79),
        [sym__real_type_suffix] = ACTIONS(81),
        [sym__exponent_part] = ACTIONS(83),
        [anon_sym_DQUOTE] = ACTIONS(85),
        [anon_sym_AT_DQUOTE] = ACTIONS(87),
        [anon_sym_bool] = ACTIONS(89),
        [anon_sym_decimal] = ACTIONS(89),
        [anon_sym_double] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(89),
        [anon_sym_object] = ACTIONS(89),
        [anon_sym_string] = ACTIONS(89),
        [anon_sym_LT] = ACTIONS(91),
        [anon_sym_GT] = ACTIONS(93),
        [anon_sym_COLON_COLON] = ACTIONS(95),
        [sym_global] = ACTIONS(97),
        [sym_identifier_name] = ACTIONS(99),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_extern] = ACTIONS(105),
        [anon_sym_using] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
    },
    [2] = {
        [anon_sym_alias] = ACTIONS(127),
        [sym_comment] = ACTIONS(101),
    },
    [3] = {
        [sym_qualified_name] = STATE(307),
        [sym_alias_qualified_name] = STATE(296),
        [sym_name_equals] = STATE(308),
        [sym_static] = STATE(308),
        [anon_sym_static] = ACTIONS(129),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(101),
    },
    [4] = {
        [sym_qualified_name] = STATE(295),
        [sym_alias_qualified_name] = STATE(296),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(101),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(137),
        [sym_comment] = ACTIONS(101),
    },
    [6] = {
        [sym__class_modifiers] = STATE(282),
        [sym__struct_modifiers] = STATE(283),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(141),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_delegate] = ACTIONS(145),
        [sym_comment] = ACTIONS(101),
    },
    [7] = {
        [sym__class_modifiers] = STATE(282),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(115),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [sym_comment] = ACTIONS(101),
    },
    [8] = {
        [sym__class_modifiers] = STATE(282),
        [sym__struct_modifiers] = STATE(283),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(141),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_enum] = ACTIONS(147),
        [anon_sym_delegate] = ACTIONS(145),
        [sym_comment] = ACTIONS(101),
    },
    [9] = {
        [sym_identifier_name] = ACTIONS(149),
        [sym_comment] = ACTIONS(101),
    },
    [10] = {
        [sym_identifier_name] = ACTIONS(151),
        [sym_comment] = ACTIONS(101),
    },
    [11] = {
        [sym__return_type] = STATE(264),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_void_keyword] = ACTIONS(155),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [12] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [anon_sym_assembly] = ACTIONS(159),
        [anon_sym_module] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(101),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [sym_comment] = ACTIONS(101),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_namespace] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(165),
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
        [sym_comment] = ACTIONS(101),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(167),
        [anon_sym_extern] = ACTIONS(167),
        [anon_sym_using] = ACTIONS(167),
        [anon_sym_namespace] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(167),
        [anon_sym_sealed] = ACTIONS(167),
        [anon_sym_static] = ACTIONS(167),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_enum] = ACTIONS(167),
        [anon_sym_delegate] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_comment] = ACTIONS(101),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_using] = ACTIONS(169),
        [anon_sym_namespace] = ACTIONS(169),
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
        [anon_sym_delegate] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(169),
        [sym_comment] = ACTIONS(101),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_namespace] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(173),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_struct] = ACTIONS(173),
        [anon_sym_enum] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_delegate] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(171),
        [sym_const_keyword] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(173),
        [anon_sym_volatile] = ACTIONS(173),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(101),
    },
    [18] = {
        [anon_sym_class] = ACTIONS(177),
        [sym_comment] = ACTIONS(101),
    },
    [19] = {
        [anon_sym_class] = ACTIONS(179),
        [sym_comment] = ACTIONS(101),
    },
    [20] = {
        [anon_sym_struct] = ACTIONS(181),
        [sym_comment] = ACTIONS(101),
    },
    [21] = {
        [anon_sym_struct] = ACTIONS(183),
        [sym_comment] = ACTIONS(101),
    },
    [22] = {
        [anon_sym_enum] = ACTIONS(185),
        [sym_comment] = ACTIONS(101),
    },
    [23] = {
        [anon_sym_delegate] = ACTIONS(187),
        [sym_comment] = ACTIONS(101),
    },
    [24] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(181),
        [anon_sym_enum] = ACTIONS(185),
        [anon_sym_delegate] = ACTIONS(187),
        [sym_comment] = ACTIONS(101),
    },
    [25] = {
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_unsafe] = ACTIONS(189),
        [anon_sym_abstract] = ACTIONS(189),
        [anon_sym_sealed] = ACTIONS(189),
        [anon_sym_static] = ACTIONS(189),
        [anon_sym_new] = ACTIONS(189),
        [anon_sym_public] = ACTIONS(189),
        [anon_sym_protected] = ACTIONS(189),
        [anon_sym_internal] = ACTIONS(189),
        [anon_sym_private] = ACTIONS(189),
        [anon_sym_struct] = ACTIONS(189),
        [anon_sym_enum] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_delegate] = ACTIONS(189),
        [anon_sym_ref] = ACTIONS(189),
        [anon_sym_out] = ACTIONS(189),
        [anon_sym_this] = ACTIONS(189),
        [sym_params_keyword] = ACTIONS(189),
        [anon_sym_LBRACK] = ACTIONS(191),
        [sym_const_keyword] = ACTIONS(189),
        [anon_sym_readonly] = ACTIONS(189),
        [anon_sym_volatile] = ACTIONS(189),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(101),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_namespace] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(195),
        [anon_sym_unsafe] = ACTIONS(195),
        [anon_sym_abstract] = ACTIONS(195),
        [anon_sym_sealed] = ACTIONS(195),
        [anon_sym_static] = ACTIONS(195),
        [anon_sym_new] = ACTIONS(195),
        [anon_sym_public] = ACTIONS(195),
        [anon_sym_protected] = ACTIONS(195),
        [anon_sym_internal] = ACTIONS(195),
        [anon_sym_private] = ACTIONS(195),
        [anon_sym_struct] = ACTIONS(195),
        [anon_sym_enum] = ACTIONS(195),
        [anon_sym_delegate] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_extern] = ACTIONS(105),
        [anon_sym_using] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_using] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [31] = {
        [sym__attribute_section] = STATE(33),
        [anon_sym_class] = ACTIONS(201),
        [anon_sym_unsafe] = ACTIONS(201),
        [anon_sym_abstract] = ACTIONS(201),
        [anon_sym_sealed] = ACTIONS(201),
        [anon_sym_static] = ACTIONS(201),
        [anon_sym_new] = ACTIONS(201),
        [anon_sym_public] = ACTIONS(201),
        [anon_sym_protected] = ACTIONS(201),
        [anon_sym_internal] = ACTIONS(201),
        [anon_sym_private] = ACTIONS(201),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_enum] = ACTIONS(201),
        [anon_sym_sbyte] = ACTIONS(201),
        [anon_sym_byte] = ACTIONS(201),
        [anon_sym_short] = ACTIONS(201),
        [anon_sym_ushort] = ACTIONS(201),
        [anon_sym_int] = ACTIONS(201),
        [anon_sym_uint] = ACTIONS(201),
        [anon_sym_long] = ACTIONS(201),
        [anon_sym_ulong] = ACTIONS(201),
        [anon_sym_char] = ACTIONS(201),
        [anon_sym_delegate] = ACTIONS(201),
        [anon_sym_ref] = ACTIONS(201),
        [anon_sym_out] = ACTIONS(201),
        [anon_sym_this] = ACTIONS(201),
        [sym_params_keyword] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(201),
        [anon_sym_readonly] = ACTIONS(201),
        [anon_sym_volatile] = ACTIONS(201),
        [anon_sym_bool] = ACTIONS(201),
        [anon_sym_decimal] = ACTIONS(201),
        [anon_sym_double] = ACTIONS(201),
        [anon_sym_float] = ACTIONS(201),
        [anon_sym_object] = ACTIONS(201),
        [anon_sym_string] = ACTIONS(201),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(101),
    },
    [32] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(101),
    },
    [33] = {
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
        [anon_sym_delegate] = ACTIONS(207),
        [anon_sym_ref] = ACTIONS(207),
        [anon_sym_out] = ACTIONS(207),
        [anon_sym_this] = ACTIONS(207),
        [sym_params_keyword] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(209),
        [sym_const_keyword] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(207),
        [anon_sym_volatile] = ACTIONS(207),
        [anon_sym_bool] = ACTIONS(207),
        [anon_sym_decimal] = ACTIONS(207),
        [anon_sym_double] = ACTIONS(207),
        [anon_sym_float] = ACTIONS(207),
        [anon_sym_object] = ACTIONS(207),
        [anon_sym_string] = ACTIONS(207),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(101),
    },
    [34] = {
        [sym_attribute_argument_list] = STATE(44),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(101),
    },
    [35] = {
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(101),
    },
    [36] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(221),
        [sym_comment] = ACTIONS(101),
    },
    [37] = {
        [sym_attribute] = STATE(41),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(101),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(101),
    },
    [39] = {
        [sym_attribute] = STATE(40),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(101),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(101),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(229),
        [sym_comment] = ACTIONS(101),
    },
    [42] = {
        [anon_sym_class] = ACTIONS(231),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(231),
        [anon_sym_sealed] = ACTIONS(231),
        [anon_sym_static] = ACTIONS(231),
        [anon_sym_new] = ACTIONS(231),
        [anon_sym_public] = ACTIONS(231),
        [anon_sym_protected] = ACTIONS(231),
        [anon_sym_internal] = ACTIONS(231),
        [anon_sym_private] = ACTIONS(231),
        [anon_sym_struct] = ACTIONS(231),
        [anon_sym_enum] = ACTIONS(231),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(231),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(233),
        [sym_const_keyword] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(235),
        [sym_comment] = ACTIONS(101),
    },
    [43] = {
        [anon_sym_RPAREN] = ACTIONS(237),
        [sym_comment] = ACTIONS(101),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(101),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [46] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(243),
        [anon_sym_RBRACE] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(243),
        [anon_sym_abstract] = ACTIONS(243),
        [anon_sym_sealed] = ACTIONS(243),
        [anon_sym_static] = ACTIONS(243),
        [anon_sym_new] = ACTIONS(243),
        [anon_sym_public] = ACTIONS(243),
        [anon_sym_protected] = ACTIONS(243),
        [anon_sym_internal] = ACTIONS(243),
        [anon_sym_private] = ACTIONS(243),
        [anon_sym_struct] = ACTIONS(243),
        [anon_sym_enum] = ACTIONS(243),
        [anon_sym_delegate] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(101),
    },
    [47] = {
        [ts_builtin_sym_end] = ACTIONS(245),
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
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(249),
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
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [52] = {
        [ts_builtin_sym_end] = ACTIONS(253),
        [anon_sym_extern] = ACTIONS(253),
        [anon_sym_using] = ACTIONS(253),
        [anon_sym_namespace] = ACTIONS(253),
        [anon_sym_class] = ACTIONS(253),
        [anon_sym_unsafe] = ACTIONS(253),
        [anon_sym_abstract] = ACTIONS(253),
        [anon_sym_sealed] = ACTIONS(253),
        [anon_sym_static] = ACTIONS(253),
        [anon_sym_new] = ACTIONS(253),
        [anon_sym_public] = ACTIONS(253),
        [anon_sym_protected] = ACTIONS(253),
        [anon_sym_internal] = ACTIONS(253),
        [anon_sym_private] = ACTIONS(253),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(253),
        [anon_sym_delegate] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(253),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_using] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
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
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [56] = {
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(101),
    },
    [57] = {
        [sym_identifier_name] = ACTIONS(259),
        [sym_comment] = ACTIONS(101),
    },
    [58] = {
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(101),
    },
    [59] = {
        [sym__return_type] = STATE(238),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_void_keyword] = ACTIONS(155),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [60] = {
        [anon_sym_class] = ACTIONS(263),
        [sym_comment] = ACTIONS(101),
    },
    [61] = {
        [anon_sym_struct] = ACTIONS(265),
        [sym_comment] = ACTIONS(101),
    },
    [62] = {
        [anon_sym_enum] = ACTIONS(267),
        [sym_comment] = ACTIONS(101),
    },
    [63] = {
        [anon_sym_delegate] = ACTIONS(269),
        [sym_comment] = ACTIONS(101),
    },
    [64] = {
        [sym__return_type] = STATE(68),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_void_keyword] = ACTIONS(155),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_GT] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(101),
    },
    [66] = {
        [sym_identifier_name] = ACTIONS(275),
        [sym_comment] = ACTIONS(101),
    },
    [67] = {
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_LBRACK] = ACTIONS(277),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [68] = {
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(101),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_LBRACK] = ACTIONS(277),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [70] = {
        [sym_parameter_list] = STATE(72),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [71] = {
        [sym__formal_parameter_list] = STATE(77),
        [sym_parameter] = STATE(78),
        [sym_parameter_modifier] = STATE(79),
        [sym_parameter_array] = STATE(80),
        [sym__attributes] = STATE(81),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [sym_params_keyword] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(293),
        [sym_comment] = ACTIONS(101),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(295),
        [anon_sym_namespace] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(297),
        [anon_sym_unsafe] = ACTIONS(297),
        [anon_sym_abstract] = ACTIONS(297),
        [anon_sym_sealed] = ACTIONS(297),
        [anon_sym_static] = ACTIONS(297),
        [anon_sym_new] = ACTIONS(297),
        [anon_sym_public] = ACTIONS(297),
        [anon_sym_protected] = ACTIONS(297),
        [anon_sym_internal] = ACTIONS(297),
        [anon_sym_private] = ACTIONS(297),
        [anon_sym_struct] = ACTIONS(297),
        [anon_sym_enum] = ACTIONS(297),
        [anon_sym_sbyte] = ACTIONS(297),
        [anon_sym_byte] = ACTIONS(297),
        [anon_sym_short] = ACTIONS(297),
        [anon_sym_ushort] = ACTIONS(297),
        [anon_sym_int] = ACTIONS(297),
        [anon_sym_uint] = ACTIONS(297),
        [anon_sym_long] = ACTIONS(297),
        [anon_sym_ulong] = ACTIONS(297),
        [anon_sym_char] = ACTIONS(297),
        [anon_sym_delegate] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(295),
        [sym_const_keyword] = ACTIONS(297),
        [anon_sym_readonly] = ACTIONS(297),
        [anon_sym_volatile] = ACTIONS(297),
        [anon_sym_bool] = ACTIONS(297),
        [anon_sym_decimal] = ACTIONS(297),
        [anon_sym_double] = ACTIONS(297),
        [anon_sym_float] = ACTIONS(297),
        [anon_sym_object] = ACTIONS(297),
        [anon_sym_string] = ACTIONS(297),
        [sym_identifier_name] = ACTIONS(299),
        [sym_comment] = ACTIONS(101),
    },
    [74] = {
        [anon_sym_SEMI] = ACTIONS(301),
        [sym_comment] = ACTIONS(101),
    },
    [75] = {
        [anon_sym_sbyte] = ACTIONS(303),
        [anon_sym_byte] = ACTIONS(303),
        [anon_sym_short] = ACTIONS(303),
        [anon_sym_ushort] = ACTIONS(303),
        [anon_sym_int] = ACTIONS(303),
        [anon_sym_uint] = ACTIONS(303),
        [anon_sym_long] = ACTIONS(303),
        [anon_sym_ulong] = ACTIONS(303),
        [anon_sym_char] = ACTIONS(303),
        [anon_sym_bool] = ACTIONS(303),
        [anon_sym_decimal] = ACTIONS(303),
        [anon_sym_double] = ACTIONS(303),
        [anon_sym_float] = ACTIONS(303),
        [anon_sym_object] = ACTIONS(303),
        [anon_sym_string] = ACTIONS(303),
        [sym_identifier_name] = ACTIONS(305),
        [sym_comment] = ACTIONS(101),
    },
    [76] = {
        [sym_array_type] = STATE(121),
        [sym__type] = STATE(91),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [77] = {
        [anon_sym_RPAREN] = ACTIONS(307),
        [sym_comment] = ACTIONS(101),
    },
    [78] = {
        [sym_parameter_array] = STATE(112),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_params_keyword] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [79] = {
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [80] = {
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(101),
    },
    [81] = {
        [sym_parameter_modifier] = STATE(85),
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [sym_params_keyword] = ACTIONS(315),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [82] = {
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(101),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_params_keyword] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(319),
        [sym_comment] = ACTIONS(101),
    },
    [84] = {
        [sym_array_type] = STATE(90),
        [sym__type] = STATE(91),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [85] = {
        [sym__type] = STATE(88),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [86] = {
        [sym_identifier_name] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [sym_params_keyword] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [sym_comment] = ACTIONS(101),
    },
    [88] = {
        [sym_identifier_name] = ACTIONS(325),
        [sym_comment] = ACTIONS(101),
    },
    [89] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_RPAREN] = ACTIONS(327),
        [sym_params_keyword] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(327),
        [sym_comment] = ACTIONS(101),
    },
    [90] = {
        [sym_identifier_name] = ACTIONS(329),
        [sym_comment] = ACTIONS(101),
    },
    [91] = {
        [sym_array_rank_specifier] = STATE(93),
        [anon_sym_LBRACK] = ACTIONS(331),
        [sym_comment] = ACTIONS(101),
    },
    [92] = {
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RBRACK] = ACTIONS(335),
        [sym_comment] = ACTIONS(101),
    },
    [93] = {
        [sym_identifier_name] = ACTIONS(337),
        [sym_comment] = ACTIONS(101),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_RBRACK] = ACTIONS(339),
        [sym_comment] = ACTIONS(101),
    },
    [95] = {
        [sym_identifier_name] = ACTIONS(341),
        [sym_comment] = ACTIONS(101),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_RBRACK] = ACTIONS(345),
        [sym_comment] = ACTIONS(101),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_RBRACK] = ACTIONS(347),
        [sym_comment] = ACTIONS(101),
    },
    [98] = {
        [sym_identifier_name] = ACTIONS(349),
        [sym_comment] = ACTIONS(101),
    },
    [99] = {
        [anon_sym_RPAREN] = ACTIONS(351),
        [sym_comment] = ACTIONS(101),
    },
    [100] = {
        [sym__type] = STATE(102),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(103),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_GT] = ACTIONS(353),
        [sym_identifier_name] = ACTIONS(355),
        [sym_comment] = ACTIONS(101),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_GT] = ACTIONS(357),
        [sym_comment] = ACTIONS(101),
    },
    [103] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_GT] = ACTIONS(361),
        [sym_comment] = ACTIONS(101),
    },
    [104] = {
        [sym__type] = STATE(102),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(110),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [105] = {
        [anon_sym_LBRACE] = ACTIONS(363),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_LBRACK] = ACTIONS(363),
        [anon_sym_GT] = ACTIONS(363),
        [sym_identifier_name] = ACTIONS(365),
        [sym_comment] = ACTIONS(101),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_GT] = ACTIONS(369),
        [sym_comment] = ACTIONS(101),
    },
    [107] = {
        [sym__type] = STATE(102),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(109),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [108] = {
        [anon_sym_LBRACE] = ACTIONS(371),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_LBRACK] = ACTIONS(371),
        [anon_sym_GT] = ACTIONS(371),
        [sym_identifier_name] = ACTIONS(373),
        [sym_comment] = ACTIONS(101),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_GT] = ACTIONS(375),
        [sym_comment] = ACTIONS(101),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_GT] = ACTIONS(377),
        [sym_comment] = ACTIONS(101),
    },
    [111] = {
        [sym_parameter] = STATE(119),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(118),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [112] = {
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_comment] = ACTIONS(101),
    },
    [113] = {
        [sym_params_keyword] = ACTIONS(381),
        [sym_comment] = ACTIONS(101),
    },
    [114] = {
        [sym_parameter_array] = STATE(116),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_params_keyword] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [115] = {
        [sym_parameter] = STATE(117),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(118),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [116] = {
        [anon_sym_RPAREN] = ACTIONS(385),
        [sym_comment] = ACTIONS(101),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_RPAREN] = ACTIONS(387),
        [sym_params_keyword] = ACTIONS(387),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_comment] = ACTIONS(101),
    },
    [118] = {
        [sym_parameter_modifier] = STATE(85),
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [sym_params_keyword] = ACTIONS(389),
        [anon_sym_LBRACK] = ACTIONS(389),
        [sym_comment] = ACTIONS(101),
    },
    [120] = {
        [anon_sym_SEMI] = ACTIONS(391),
        [sym_comment] = ACTIONS(101),
    },
    [121] = {
        [sym_identifier_name] = ACTIONS(393),
        [sym_comment] = ACTIONS(101),
    },
    [122] = {
        [anon_sym_RPAREN] = ACTIONS(395),
        [sym_comment] = ACTIONS(101),
    },
    [123] = {
        [sym_identifier_name] = ACTIONS(397),
        [sym_comment] = ACTIONS(101),
    },
    [124] = {
        [anon_sym_LBRACE] = ACTIONS(399),
        [anon_sym_COLON] = ACTIONS(401),
        [sym_comment] = ACTIONS(101),
    },
    [125] = {
        [sym_enum_member_declaration] = STATE(182),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [126] = {
        [sym__integral_type] = STATE(128),
        [anon_sym_sbyte] = ACTIONS(405),
        [anon_sym_byte] = ACTIONS(405),
        [anon_sym_short] = ACTIONS(405),
        [anon_sym_ushort] = ACTIONS(405),
        [anon_sym_int] = ACTIONS(405),
        [anon_sym_uint] = ACTIONS(405),
        [anon_sym_long] = ACTIONS(405),
        [anon_sym_ulong] = ACTIONS(405),
        [anon_sym_char] = ACTIONS(405),
        [sym_comment] = ACTIONS(101),
    },
    [127] = {
        [anon_sym_LBRACE] = ACTIONS(407),
        [sym_comment] = ACTIONS(101),
    },
    [128] = {
        [anon_sym_LBRACE] = ACTIONS(409),
        [sym_comment] = ACTIONS(101),
    },
    [129] = {
        [sym_enum_member_declaration] = STATE(131),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [130] = {
        [sym_equals_value_clause] = STATE(181),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [131] = {
        [aux_sym_enum_declaration_repeat1] = STATE(174),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [132] = {
        [sym_identifier_name] = ACTIONS(419),
        [sym_comment] = ACTIONS(101),
    },
    [133] = {
        [sym_equals_value_clause] = STATE(135),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [134] = {
        [sym__expression] = STATE(144),
        [sym__literal] = STATE(145),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(146),
        [sym__verbatim_string_literal] = STATE(146),
        [anon_sym_true] = ACTIONS(423),
        [anon_sym_false] = ACTIONS(423),
        [anon_sym_SQUOTE] = ACTIONS(425),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(427),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(429),
        [sym_null_literal] = ACTIONS(431),
        [anon_sym_DOT] = ACTIONS(433),
        [anon_sym_DQUOTE] = ACTIONS(435),
        [anon_sym_AT_DQUOTE] = ACTIONS(437),
        [sym_comment] = ACTIONS(101),
    },
    [135] = {
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [sym_comment] = ACTIONS(101),
    },
    [136] = {
        [anon_sym_SEMI] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(441),
        [sym_comment] = ACTIONS(101),
    },
    [137] = {
        [sym__unicode_escape_sequence] = STATE(168),
        [sym__simple_escape_sequence] = STATE(168),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(443),
        [sym__hexadecimal_escape_sequence] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(445),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(445),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(447),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(447),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(447),
        [anon_sym_BSLASH0] = ACTIONS(447),
        [anon_sym_BSLASHa] = ACTIONS(447),
        [anon_sym_BSLASHb] = ACTIONS(447),
        [anon_sym_BSLASHf] = ACTIONS(447),
        [anon_sym_BSLASHn] = ACTIONS(447),
        [anon_sym_BSLASHr] = ACTIONS(447),
        [anon_sym_BSLASHt] = ACTIONS(447),
        [anon_sym_BSLASHv] = ACTIONS(447),
        [sym_comment] = ACTIONS(101),
    },
    [138] = {
        [anon_sym_SEMI] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [anon_sym_COMMA] = ACTIONS(449),
        [sym__integer_type_suffix] = ACTIONS(451),
        [anon_sym_DOT] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(455),
        [sym__exponent_part] = ACTIONS(457),
        [sym_comment] = ACTIONS(101),
    },
    [139] = {
        [anon_sym_SEMI] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [anon_sym_COMMA] = ACTIONS(449),
        [sym__integer_type_suffix] = ACTIONS(451),
        [sym_comment] = ACTIONS(101),
    },
    [140] = {
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_RBRACE] = ACTIONS(459),
        [anon_sym_COMMA] = ACTIONS(459),
        [sym_comment] = ACTIONS(101),
    },
    [141] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(461),
        [sym_comment] = ACTIONS(101),
    },
    [142] = {
        [sym__unicode_escape_sequence] = STATE(149),
        [sym__simple_escape_sequence] = STATE(149),
        [sym__regular_string_literal_character] = STATE(153),
        [aux_sym__regular_string_literal_repeat1] = STATE(154),
        [sym__hexadecimal_escape_sequence] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(467),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(467),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(467),
        [anon_sym_BSLASH0] = ACTIONS(467),
        [anon_sym_BSLASHa] = ACTIONS(467),
        [anon_sym_BSLASHb] = ACTIONS(467),
        [anon_sym_BSLASHf] = ACTIONS(467),
        [anon_sym_BSLASHn] = ACTIONS(467),
        [anon_sym_BSLASHr] = ACTIONS(467),
        [anon_sym_BSLASHt] = ACTIONS(467),
        [anon_sym_BSLASHv] = ACTIONS(467),
        [anon_sym_DQUOTE] = ACTIONS(469),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(463),
        [sym_comment] = ACTIONS(101),
    },
    [143] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(471),
        [sym_comment] = ACTIONS(473),
    },
    [144] = {
        [anon_sym_SEMI] = ACTIONS(475),
        [anon_sym_RBRACE] = ACTIONS(475),
        [anon_sym_COMMA] = ACTIONS(475),
        [sym_comment] = ACTIONS(101),
    },
    [145] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym_comment] = ACTIONS(101),
    },
    [146] = {
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_RBRACE] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(479),
        [sym_comment] = ACTIONS(101),
    },
    [147] = {
        [anon_sym_DQUOTE] = ACTIONS(481),
        [sym_comment] = ACTIONS(101),
    },
    [148] = {
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_RBRACE] = ACTIONS(483),
        [anon_sym_COMMA] = ACTIONS(483),
        [sym_comment] = ACTIONS(101),
    },
    [149] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(485),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(487),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(487),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(487),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(487),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(487),
        [anon_sym_BSLASH0] = ACTIONS(487),
        [anon_sym_BSLASHa] = ACTIONS(487),
        [anon_sym_BSLASHb] = ACTIONS(487),
        [anon_sym_BSLASHf] = ACTIONS(487),
        [anon_sym_BSLASHn] = ACTIONS(487),
        [anon_sym_BSLASHr] = ACTIONS(487),
        [anon_sym_BSLASHt] = ACTIONS(487),
        [anon_sym_BSLASHv] = ACTIONS(487),
        [anon_sym_DQUOTE] = ACTIONS(487),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(485),
        [sym_comment] = ACTIONS(101),
    },
    [150] = {
        [anon_sym_SQUOTE] = ACTIONS(489),
        [sym__hexadecimal_escape_sequence] = ACTIONS(491),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(489),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(489),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(489),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(489),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(489),
        [anon_sym_BSLASH0] = ACTIONS(489),
        [anon_sym_BSLASHa] = ACTIONS(489),
        [anon_sym_BSLASHb] = ACTIONS(489),
        [anon_sym_BSLASHf] = ACTIONS(489),
        [anon_sym_BSLASHn] = ACTIONS(489),
        [anon_sym_BSLASHr] = ACTIONS(489),
        [anon_sym_BSLASHt] = ACTIONS(489),
        [anon_sym_BSLASHv] = ACTIONS(489),
        [anon_sym_DQUOTE] = ACTIONS(489),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(493),
        [sym_comment] = ACTIONS(101),
    },
    [151] = {
        [anon_sym_SQUOTE] = ACTIONS(495),
        [sym__hexadecimal_escape_sequence] = ACTIONS(497),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(495),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(495),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(495),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(495),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(495),
        [anon_sym_BSLASH0] = ACTIONS(495),
        [anon_sym_BSLASHa] = ACTIONS(495),
        [anon_sym_BSLASHb] = ACTIONS(495),
        [anon_sym_BSLASHf] = ACTIONS(495),
        [anon_sym_BSLASHn] = ACTIONS(495),
        [anon_sym_BSLASHr] = ACTIONS(495),
        [anon_sym_BSLASHt] = ACTIONS(495),
        [anon_sym_BSLASHv] = ACTIONS(495),
        [anon_sym_DQUOTE] = ACTIONS(495),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(499),
        [sym_comment] = ACTIONS(101),
    },
    [152] = {
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_RBRACE] = ACTIONS(501),
        [anon_sym_COMMA] = ACTIONS(501),
        [sym_comment] = ACTIONS(101),
    },
    [153] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(503),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(505),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(505),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(505),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(505),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(505),
        [anon_sym_BSLASH0] = ACTIONS(505),
        [anon_sym_BSLASHa] = ACTIONS(505),
        [anon_sym_BSLASHb] = ACTIONS(505),
        [anon_sym_BSLASHf] = ACTIONS(505),
        [anon_sym_BSLASHn] = ACTIONS(505),
        [anon_sym_BSLASHr] = ACTIONS(505),
        [anon_sym_BSLASHt] = ACTIONS(505),
        [anon_sym_BSLASHv] = ACTIONS(505),
        [anon_sym_DQUOTE] = ACTIONS(505),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(503),
        [sym_comment] = ACTIONS(101),
    },
    [154] = {
        [sym__unicode_escape_sequence] = STATE(149),
        [sym__simple_escape_sequence] = STATE(149),
        [sym__regular_string_literal_character] = STATE(156),
        [sym__hexadecimal_escape_sequence] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(467),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(467),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(467),
        [anon_sym_BSLASH0] = ACTIONS(467),
        [anon_sym_BSLASHa] = ACTIONS(467),
        [anon_sym_BSLASHb] = ACTIONS(467),
        [anon_sym_BSLASHf] = ACTIONS(467),
        [anon_sym_BSLASHn] = ACTIONS(467),
        [anon_sym_BSLASHr] = ACTIONS(467),
        [anon_sym_BSLASHt] = ACTIONS(467),
        [anon_sym_BSLASHv] = ACTIONS(467),
        [anon_sym_DQUOTE] = ACTIONS(507),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(463),
        [sym_comment] = ACTIONS(101),
    },
    [155] = {
        [anon_sym_SEMI] = ACTIONS(509),
        [anon_sym_RBRACE] = ACTIONS(509),
        [anon_sym_COMMA] = ACTIONS(509),
        [sym_comment] = ACTIONS(101),
    },
    [156] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(511),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(513),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(513),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(513),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(513),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(513),
        [anon_sym_BSLASH0] = ACTIONS(513),
        [anon_sym_BSLASHa] = ACTIONS(513),
        [anon_sym_BSLASHb] = ACTIONS(513),
        [anon_sym_BSLASHf] = ACTIONS(513),
        [anon_sym_BSLASHn] = ACTIONS(513),
        [anon_sym_BSLASHr] = ACTIONS(513),
        [anon_sym_BSLASHt] = ACTIONS(513),
        [anon_sym_BSLASHv] = ACTIONS(513),
        [anon_sym_DQUOTE] = ACTIONS(513),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(511),
        [sym_comment] = ACTIONS(101),
    },
    [157] = {
        [anon_sym_SEMI] = ACTIONS(515),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(515),
        [sym__real_type_suffix] = ACTIONS(517),
        [sym__exponent_part] = ACTIONS(519),
        [sym_comment] = ACTIONS(101),
    },
    [158] = {
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [sym_comment] = ACTIONS(101),
    },
    [159] = {
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [sym__real_type_suffix] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [160] = {
        [anon_sym_SEMI] = ACTIONS(525),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_COMMA] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [161] = {
        [anon_sym_SEMI] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_COMMA] = ACTIONS(527),
        [sym_comment] = ACTIONS(101),
    },
    [162] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(529),
        [sym_comment] = ACTIONS(101),
    },
    [163] = {
        [anon_sym_SEMI] = ACTIONS(515),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(515),
        [sym_comment] = ACTIONS(101),
    },
    [164] = {
        [anon_sym_SEMI] = ACTIONS(515),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(515),
        [sym__real_type_suffix] = ACTIONS(517),
        [sym_comment] = ACTIONS(101),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [sym__real_type_suffix] = ACTIONS(523),
        [sym__exponent_part] = ACTIONS(531),
        [sym_comment] = ACTIONS(101),
    },
    [166] = {
        [anon_sym_SEMI] = ACTIONS(525),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_COMMA] = ACTIONS(525),
        [sym__real_type_suffix] = ACTIONS(533),
        [sym_comment] = ACTIONS(101),
    },
    [167] = {
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [168] = {
        [anon_sym_SQUOTE] = ACTIONS(537),
        [sym_comment] = ACTIONS(101),
    },
    [169] = {
        [anon_sym_SQUOTE] = ACTIONS(489),
        [sym_comment] = ACTIONS(101),
    },
    [170] = {
        [anon_sym_SQUOTE] = ACTIONS(495),
        [sym_comment] = ACTIONS(101),
    },
    [171] = {
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [sym_comment] = ACTIONS(101),
    },
    [172] = {
        [ts_builtin_sym_end] = ACTIONS(541),
        [anon_sym_SEMI] = ACTIONS(543),
        [anon_sym_namespace] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(541),
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
        [anon_sym_delegate] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(541),
        [sym_const_keyword] = ACTIONS(545),
        [anon_sym_readonly] = ACTIONS(545),
        [anon_sym_volatile] = ACTIONS(545),
        [anon_sym_bool] = ACTIONS(545),
        [anon_sym_decimal] = ACTIONS(545),
        [anon_sym_double] = ACTIONS(545),
        [anon_sym_float] = ACTIONS(545),
        [anon_sym_object] = ACTIONS(545),
        [anon_sym_string] = ACTIONS(545),
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(101),
    },
    [173] = {
        [sym_enum_member_declaration] = STATE(179),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [174] = {
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [175] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(555),
        [anon_sym_namespace] = ACTIONS(557),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(557),
        [anon_sym_unsafe] = ACTIONS(557),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(557),
        [anon_sym_new] = ACTIONS(557),
        [anon_sym_public] = ACTIONS(557),
        [anon_sym_protected] = ACTIONS(557),
        [anon_sym_internal] = ACTIONS(557),
        [anon_sym_private] = ACTIONS(557),
        [anon_sym_struct] = ACTIONS(557),
        [anon_sym_enum] = ACTIONS(557),
        [anon_sym_sbyte] = ACTIONS(557),
        [anon_sym_byte] = ACTIONS(557),
        [anon_sym_short] = ACTIONS(557),
        [anon_sym_ushort] = ACTIONS(557),
        [anon_sym_int] = ACTIONS(557),
        [anon_sym_uint] = ACTIONS(557),
        [anon_sym_long] = ACTIONS(557),
        [anon_sym_ulong] = ACTIONS(557),
        [anon_sym_char] = ACTIONS(557),
        [anon_sym_delegate] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(553),
        [sym_const_keyword] = ACTIONS(557),
        [anon_sym_readonly] = ACTIONS(557),
        [anon_sym_volatile] = ACTIONS(557),
        [anon_sym_bool] = ACTIONS(557),
        [anon_sym_decimal] = ACTIONS(557),
        [anon_sym_double] = ACTIONS(557),
        [anon_sym_float] = ACTIONS(557),
        [anon_sym_object] = ACTIONS(557),
        [anon_sym_string] = ACTIONS(557),
        [sym_identifier_name] = ACTIONS(559),
        [sym_comment] = ACTIONS(101),
    },
    [176] = {
        [sym_enum_member_declaration] = STATE(177),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [177] = {
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_COMMA] = ACTIONS(561),
        [sym_comment] = ACTIONS(101),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(563),
        [anon_sym_namespace] = ACTIONS(565),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_unsafe] = ACTIONS(565),
        [anon_sym_abstract] = ACTIONS(565),
        [anon_sym_sealed] = ACTIONS(565),
        [anon_sym_static] = ACTIONS(565),
        [anon_sym_new] = ACTIONS(565),
        [anon_sym_public] = ACTIONS(565),
        [anon_sym_protected] = ACTIONS(565),
        [anon_sym_internal] = ACTIONS(565),
        [anon_sym_private] = ACTIONS(565),
        [anon_sym_struct] = ACTIONS(565),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(565),
        [anon_sym_byte] = ACTIONS(565),
        [anon_sym_short] = ACTIONS(565),
        [anon_sym_ushort] = ACTIONS(565),
        [anon_sym_int] = ACTIONS(565),
        [anon_sym_uint] = ACTIONS(565),
        [anon_sym_long] = ACTIONS(565),
        [anon_sym_ulong] = ACTIONS(565),
        [anon_sym_char] = ACTIONS(565),
        [anon_sym_delegate] = ACTIONS(565),
        [anon_sym_LBRACK] = ACTIONS(563),
        [sym_const_keyword] = ACTIONS(565),
        [anon_sym_readonly] = ACTIONS(565),
        [anon_sym_volatile] = ACTIONS(565),
        [anon_sym_bool] = ACTIONS(565),
        [anon_sym_decimal] = ACTIONS(565),
        [anon_sym_double] = ACTIONS(565),
        [anon_sym_float] = ACTIONS(565),
        [anon_sym_object] = ACTIONS(565),
        [anon_sym_string] = ACTIONS(565),
        [sym_identifier_name] = ACTIONS(567),
        [sym_comment] = ACTIONS(101),
    },
    [179] = {
        [anon_sym_RBRACE] = ACTIONS(569),
        [anon_sym_COMMA] = ACTIONS(569),
        [sym_comment] = ACTIONS(101),
    },
    [180] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_namespace] = ACTIONS(557),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(557),
        [anon_sym_unsafe] = ACTIONS(557),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(557),
        [anon_sym_new] = ACTIONS(557),
        [anon_sym_public] = ACTIONS(557),
        [anon_sym_protected] = ACTIONS(557),
        [anon_sym_internal] = ACTIONS(557),
        [anon_sym_private] = ACTIONS(557),
        [anon_sym_struct] = ACTIONS(557),
        [anon_sym_enum] = ACTIONS(557),
        [anon_sym_sbyte] = ACTIONS(557),
        [anon_sym_byte] = ACTIONS(557),
        [anon_sym_short] = ACTIONS(557),
        [anon_sym_ushort] = ACTIONS(557),
        [anon_sym_int] = ACTIONS(557),
        [anon_sym_uint] = ACTIONS(557),
        [anon_sym_long] = ACTIONS(557),
        [anon_sym_ulong] = ACTIONS(557),
        [anon_sym_char] = ACTIONS(557),
        [anon_sym_delegate] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(553),
        [sym_const_keyword] = ACTIONS(557),
        [anon_sym_readonly] = ACTIONS(557),
        [anon_sym_volatile] = ACTIONS(557),
        [anon_sym_bool] = ACTIONS(557),
        [anon_sym_decimal] = ACTIONS(557),
        [anon_sym_double] = ACTIONS(557),
        [anon_sym_float] = ACTIONS(557),
        [anon_sym_object] = ACTIONS(557),
        [anon_sym_string] = ACTIONS(557),
        [sym_identifier_name] = ACTIONS(559),
        [sym_comment] = ACTIONS(101),
    },
    [181] = {
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [sym_comment] = ACTIONS(101),
    },
    [182] = {
        [aux_sym_enum_declaration_repeat1] = STATE(184),
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(575),
        [anon_sym_namespace] = ACTIONS(577),
        [anon_sym_RBRACE] = ACTIONS(573),
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
        [anon_sym_LBRACK] = ACTIONS(573),
        [sym_const_keyword] = ACTIONS(577),
        [anon_sym_readonly] = ACTIONS(577),
        [anon_sym_volatile] = ACTIONS(577),
        [anon_sym_bool] = ACTIONS(577),
        [anon_sym_decimal] = ACTIONS(577),
        [anon_sym_double] = ACTIONS(577),
        [anon_sym_float] = ACTIONS(577),
        [anon_sym_object] = ACTIONS(577),
        [anon_sym_string] = ACTIONS(577),
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(101),
    },
    [184] = {
        [anon_sym_RBRACE] = ACTIONS(581),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(583),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_namespace] = ACTIONS(587),
        [anon_sym_RBRACE] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(587),
        [anon_sym_unsafe] = ACTIONS(587),
        [anon_sym_abstract] = ACTIONS(587),
        [anon_sym_sealed] = ACTIONS(587),
        [anon_sym_static] = ACTIONS(587),
        [anon_sym_new] = ACTIONS(587),
        [anon_sym_public] = ACTIONS(587),
        [anon_sym_protected] = ACTIONS(587),
        [anon_sym_internal] = ACTIONS(587),
        [anon_sym_private] = ACTIONS(587),
        [anon_sym_struct] = ACTIONS(587),
        [anon_sym_enum] = ACTIONS(587),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_delegate] = ACTIONS(587),
        [anon_sym_LBRACK] = ACTIONS(583),
        [sym_const_keyword] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(587),
        [anon_sym_volatile] = ACTIONS(587),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(589),
        [sym_comment] = ACTIONS(101),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(541),
        [anon_sym_namespace] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(541),
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
        [anon_sym_delegate] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(541),
        [sym_const_keyword] = ACTIONS(545),
        [anon_sym_readonly] = ACTIONS(545),
        [anon_sym_volatile] = ACTIONS(545),
        [anon_sym_bool] = ACTIONS(545),
        [anon_sym_decimal] = ACTIONS(545),
        [anon_sym_double] = ACTIONS(545),
        [anon_sym_float] = ACTIONS(545),
        [anon_sym_object] = ACTIONS(545),
        [anon_sym_string] = ACTIONS(545),
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(101),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(583),
        [anon_sym_namespace] = ACTIONS(587),
        [anon_sym_RBRACE] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(587),
        [anon_sym_unsafe] = ACTIONS(587),
        [anon_sym_abstract] = ACTIONS(587),
        [anon_sym_sealed] = ACTIONS(587),
        [anon_sym_static] = ACTIONS(587),
        [anon_sym_new] = ACTIONS(587),
        [anon_sym_public] = ACTIONS(587),
        [anon_sym_protected] = ACTIONS(587),
        [anon_sym_internal] = ACTIONS(587),
        [anon_sym_private] = ACTIONS(587),
        [anon_sym_struct] = ACTIONS(587),
        [anon_sym_enum] = ACTIONS(587),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_delegate] = ACTIONS(587),
        [anon_sym_LBRACK] = ACTIONS(583),
        [sym_const_keyword] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(587),
        [anon_sym_volatile] = ACTIONS(587),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(589),
        [sym_comment] = ACTIONS(101),
    },
    [188] = {
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(101),
    },
    [189] = {
        [sym_type_parameter_list] = STATE(191),
        [anon_sym_LBRACE] = ACTIONS(593),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [190] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(227),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [191] = {
        [anon_sym_LBRACE] = ACTIONS(617),
        [sym_comment] = ACTIONS(101),
    },
    [192] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(205),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [193] = {
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
        [anon_sym_delegate] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(621),
        [sym_const_keyword] = ACTIONS(623),
        [anon_sym_readonly] = ACTIONS(623),
        [anon_sym_volatile] = ACTIONS(623),
        [anon_sym_bool] = ACTIONS(623),
        [anon_sym_decimal] = ACTIONS(623),
        [anon_sym_double] = ACTIONS(623),
        [anon_sym_float] = ACTIONS(623),
        [anon_sym_object] = ACTIONS(623),
        [anon_sym_string] = ACTIONS(623),
        [sym_identifier_name] = ACTIONS(625),
        [sym_comment] = ACTIONS(101),
    },
    [194] = {
        [sym__class_modifiers] = STATE(282),
        [sym__struct_modifiers] = STATE(283),
        [sym__field_modifiers] = STATE(263),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_unsafe] = ACTIONS(629),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(629),
        [anon_sym_public] = ACTIONS(629),
        [anon_sym_protected] = ACTIONS(629),
        [anon_sym_internal] = ACTIONS(629),
        [anon_sym_private] = ACTIONS(629),
        [anon_sym_struct] = ACTIONS(631),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [anon_sym_delegate] = ACTIONS(635),
        [sym_const_keyword] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(637),
        [sym_comment] = ACTIONS(101),
    },
    [195] = {
        [sym__class_modifiers] = STATE(282),
        [sym__field_modifiers] = STATE(263),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_unsafe] = ACTIONS(603),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [sym_const_keyword] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(637),
        [sym_comment] = ACTIONS(101),
    },
    [196] = {
        [sym__class_modifiers] = STATE(282),
        [sym__struct_modifiers] = STATE(283),
        [sym__field_modifiers] = STATE(263),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_unsafe] = ACTIONS(629),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(629),
        [anon_sym_public] = ACTIONS(629),
        [anon_sym_protected] = ACTIONS(629),
        [anon_sym_internal] = ACTIONS(629),
        [anon_sym_private] = ACTIONS(629),
        [anon_sym_struct] = ACTIONS(631),
        [anon_sym_enum] = ACTIONS(639),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [anon_sym_delegate] = ACTIONS(635),
        [sym_const_keyword] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(637),
        [sym_comment] = ACTIONS(101),
    },
    [197] = {
        [sym_variable_declaration] = STATE(218),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [198] = {
        [sym__field_modifiers] = STATE(263),
        [anon_sym_unsafe] = ACTIONS(615),
        [anon_sym_static] = ACTIONS(615),
        [anon_sym_new] = ACTIONS(615),
        [anon_sym_public] = ACTIONS(615),
        [anon_sym_protected] = ACTIONS(615),
        [anon_sym_internal] = ACTIONS(615),
        [anon_sym_private] = ACTIONS(615),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [sym_const_keyword] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(637),
        [sym_comment] = ACTIONS(101),
    },
    [199] = {
        [anon_sym_RBRACE] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(643),
        [anon_sym_unsafe] = ACTIONS(643),
        [anon_sym_abstract] = ACTIONS(643),
        [anon_sym_sealed] = ACTIONS(643),
        [anon_sym_static] = ACTIONS(643),
        [anon_sym_new] = ACTIONS(643),
        [anon_sym_public] = ACTIONS(643),
        [anon_sym_protected] = ACTIONS(643),
        [anon_sym_internal] = ACTIONS(643),
        [anon_sym_private] = ACTIONS(643),
        [anon_sym_struct] = ACTIONS(643),
        [anon_sym_enum] = ACTIONS(643),
        [anon_sym_sbyte] = ACTIONS(643),
        [anon_sym_byte] = ACTIONS(643),
        [anon_sym_short] = ACTIONS(643),
        [anon_sym_ushort] = ACTIONS(643),
        [anon_sym_int] = ACTIONS(643),
        [anon_sym_uint] = ACTIONS(643),
        [anon_sym_long] = ACTIONS(643),
        [anon_sym_ulong] = ACTIONS(643),
        [anon_sym_char] = ACTIONS(643),
        [anon_sym_delegate] = ACTIONS(643),
        [anon_sym_LBRACK] = ACTIONS(641),
        [sym_const_keyword] = ACTIONS(643),
        [anon_sym_readonly] = ACTIONS(643),
        [anon_sym_volatile] = ACTIONS(643),
        [anon_sym_bool] = ACTIONS(643),
        [anon_sym_decimal] = ACTIONS(643),
        [anon_sym_double] = ACTIONS(643),
        [anon_sym_float] = ACTIONS(643),
        [anon_sym_object] = ACTIONS(643),
        [anon_sym_string] = ACTIONS(643),
        [sym_identifier_name] = ACTIONS(645),
        [sym_comment] = ACTIONS(101),
    },
    [200] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(222),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(218),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(649),
        [anon_sym_enum] = ACTIONS(651),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(653),
        [sym_const_keyword] = ACTIONS(655),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [201] = {
        [sym_variable_declaration] = STATE(218),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_const_keyword] = ACTIONS(655),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [202] = {
        [anon_sym_sbyte] = ACTIONS(657),
        [anon_sym_byte] = ACTIONS(657),
        [anon_sym_short] = ACTIONS(657),
        [anon_sym_ushort] = ACTIONS(657),
        [anon_sym_int] = ACTIONS(657),
        [anon_sym_uint] = ACTIONS(657),
        [anon_sym_long] = ACTIONS(657),
        [anon_sym_ulong] = ACTIONS(657),
        [anon_sym_char] = ACTIONS(657),
        [sym_const_keyword] = ACTIONS(657),
        [anon_sym_bool] = ACTIONS(657),
        [anon_sym_decimal] = ACTIONS(657),
        [anon_sym_double] = ACTIONS(657),
        [anon_sym_float] = ACTIONS(657),
        [anon_sym_object] = ACTIONS(657),
        [anon_sym_string] = ACTIONS(657),
        [sym_identifier_name] = ACTIONS(659),
        [sym_comment] = ACTIONS(101),
    },
    [203] = {
        [anon_sym_SEMI] = ACTIONS(661),
        [sym_comment] = ACTIONS(101),
    },
    [204] = {
        [sym_variable_declarator] = STATE(209),
        [sym_identifier_name] = ACTIONS(663),
        [sym_comment] = ACTIONS(101),
    },
    [205] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [206] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_namespace] = ACTIONS(669),
        [anon_sym_RBRACE] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(669),
        [anon_sym_unsafe] = ACTIONS(669),
        [anon_sym_abstract] = ACTIONS(669),
        [anon_sym_sealed] = ACTIONS(669),
        [anon_sym_static] = ACTIONS(669),
        [anon_sym_new] = ACTIONS(669),
        [anon_sym_public] = ACTIONS(669),
        [anon_sym_protected] = ACTIONS(669),
        [anon_sym_internal] = ACTIONS(669),
        [anon_sym_private] = ACTIONS(669),
        [anon_sym_struct] = ACTIONS(669),
        [anon_sym_enum] = ACTIONS(669),
        [anon_sym_sbyte] = ACTIONS(669),
        [anon_sym_byte] = ACTIONS(669),
        [anon_sym_short] = ACTIONS(669),
        [anon_sym_ushort] = ACTIONS(669),
        [anon_sym_int] = ACTIONS(669),
        [anon_sym_uint] = ACTIONS(669),
        [anon_sym_long] = ACTIONS(669),
        [anon_sym_ulong] = ACTIONS(669),
        [anon_sym_char] = ACTIONS(669),
        [anon_sym_delegate] = ACTIONS(669),
        [anon_sym_LBRACK] = ACTIONS(667),
        [sym_const_keyword] = ACTIONS(669),
        [anon_sym_readonly] = ACTIONS(669),
        [anon_sym_volatile] = ACTIONS(669),
        [anon_sym_bool] = ACTIONS(669),
        [anon_sym_decimal] = ACTIONS(669),
        [anon_sym_double] = ACTIONS(669),
        [anon_sym_float] = ACTIONS(669),
        [anon_sym_object] = ACTIONS(669),
        [anon_sym_string] = ACTIONS(669),
        [sym_identifier_name] = ACTIONS(671),
        [sym_comment] = ACTIONS(101),
    },
    [207] = {
        [anon_sym_RBRACE] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(675),
        [anon_sym_unsafe] = ACTIONS(675),
        [anon_sym_abstract] = ACTIONS(675),
        [anon_sym_sealed] = ACTIONS(675),
        [anon_sym_static] = ACTIONS(675),
        [anon_sym_new] = ACTIONS(675),
        [anon_sym_public] = ACTIONS(675),
        [anon_sym_protected] = ACTIONS(675),
        [anon_sym_internal] = ACTIONS(675),
        [anon_sym_private] = ACTIONS(675),
        [anon_sym_struct] = ACTIONS(675),
        [anon_sym_enum] = ACTIONS(675),
        [anon_sym_sbyte] = ACTIONS(675),
        [anon_sym_byte] = ACTIONS(675),
        [anon_sym_short] = ACTIONS(675),
        [anon_sym_ushort] = ACTIONS(675),
        [anon_sym_int] = ACTIONS(675),
        [anon_sym_uint] = ACTIONS(675),
        [anon_sym_long] = ACTIONS(675),
        [anon_sym_ulong] = ACTIONS(675),
        [anon_sym_char] = ACTIONS(675),
        [anon_sym_delegate] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(673),
        [sym_const_keyword] = ACTIONS(675),
        [anon_sym_readonly] = ACTIONS(675),
        [anon_sym_volatile] = ACTIONS(675),
        [anon_sym_bool] = ACTIONS(675),
        [anon_sym_decimal] = ACTIONS(675),
        [anon_sym_double] = ACTIONS(675),
        [anon_sym_float] = ACTIONS(675),
        [anon_sym_object] = ACTIONS(675),
        [anon_sym_string] = ACTIONS(675),
        [sym_identifier_name] = ACTIONS(677),
        [sym_comment] = ACTIONS(101),
    },
    [208] = {
        [sym_equals_value_clause] = STATE(215),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_COMMA] = ACTIONS(679),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [209] = {
        [aux_sym_variable_declaration_repeat1] = STATE(211),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_COMMA] = ACTIONS(683),
        [sym_comment] = ACTIONS(101),
    },
    [210] = {
        [sym_variable_declarator] = STATE(214),
        [sym_identifier_name] = ACTIONS(663),
        [sym_comment] = ACTIONS(101),
    },
    [211] = {
        [anon_sym_SEMI] = ACTIONS(685),
        [anon_sym_COMMA] = ACTIONS(687),
        [sym_comment] = ACTIONS(101),
    },
    [212] = {
        [sym_variable_declarator] = STATE(213),
        [sym_identifier_name] = ACTIONS(663),
        [sym_comment] = ACTIONS(101),
    },
    [213] = {
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_COMMA] = ACTIONS(689),
        [sym_comment] = ACTIONS(101),
    },
    [214] = {
        [anon_sym_SEMI] = ACTIONS(691),
        [anon_sym_COMMA] = ACTIONS(691),
        [sym_comment] = ACTIONS(101),
    },
    [215] = {
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_COMMA] = ACTIONS(693),
        [sym_comment] = ACTIONS(101),
    },
    [216] = {
        [anon_sym_RBRACE] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_unsafe] = ACTIONS(697),
        [anon_sym_abstract] = ACTIONS(697),
        [anon_sym_sealed] = ACTIONS(697),
        [anon_sym_static] = ACTIONS(697),
        [anon_sym_new] = ACTIONS(697),
        [anon_sym_public] = ACTIONS(697),
        [anon_sym_protected] = ACTIONS(697),
        [anon_sym_internal] = ACTIONS(697),
        [anon_sym_private] = ACTIONS(697),
        [anon_sym_struct] = ACTIONS(697),
        [anon_sym_enum] = ACTIONS(697),
        [anon_sym_sbyte] = ACTIONS(697),
        [anon_sym_byte] = ACTIONS(697),
        [anon_sym_short] = ACTIONS(697),
        [anon_sym_ushort] = ACTIONS(697),
        [anon_sym_int] = ACTIONS(697),
        [anon_sym_uint] = ACTIONS(697),
        [anon_sym_long] = ACTIONS(697),
        [anon_sym_ulong] = ACTIONS(697),
        [anon_sym_char] = ACTIONS(697),
        [anon_sym_delegate] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_const_keyword] = ACTIONS(697),
        [anon_sym_readonly] = ACTIONS(697),
        [anon_sym_volatile] = ACTIONS(697),
        [anon_sym_bool] = ACTIONS(697),
        [anon_sym_decimal] = ACTIONS(697),
        [anon_sym_double] = ACTIONS(697),
        [anon_sym_float] = ACTIONS(697),
        [anon_sym_object] = ACTIONS(697),
        [anon_sym_string] = ACTIONS(697),
        [sym_identifier_name] = ACTIONS(699),
        [sym_comment] = ACTIONS(101),
    },
    [217] = {
        [sym_variable_declaration] = STATE(220),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [218] = {
        [anon_sym_SEMI] = ACTIONS(701),
        [sym_comment] = ACTIONS(101),
    },
    [219] = {
        [anon_sym_RBRACE] = ACTIONS(703),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_unsafe] = ACTIONS(705),
        [anon_sym_abstract] = ACTIONS(705),
        [anon_sym_sealed] = ACTIONS(705),
        [anon_sym_static] = ACTIONS(705),
        [anon_sym_new] = ACTIONS(705),
        [anon_sym_public] = ACTIONS(705),
        [anon_sym_protected] = ACTIONS(705),
        [anon_sym_internal] = ACTIONS(705),
        [anon_sym_private] = ACTIONS(705),
        [anon_sym_struct] = ACTIONS(705),
        [anon_sym_enum] = ACTIONS(705),
        [anon_sym_sbyte] = ACTIONS(705),
        [anon_sym_byte] = ACTIONS(705),
        [anon_sym_short] = ACTIONS(705),
        [anon_sym_ushort] = ACTIONS(705),
        [anon_sym_int] = ACTIONS(705),
        [anon_sym_uint] = ACTIONS(705),
        [anon_sym_long] = ACTIONS(705),
        [anon_sym_ulong] = ACTIONS(705),
        [anon_sym_char] = ACTIONS(705),
        [anon_sym_delegate] = ACTIONS(705),
        [anon_sym_LBRACK] = ACTIONS(703),
        [sym_const_keyword] = ACTIONS(705),
        [anon_sym_readonly] = ACTIONS(705),
        [anon_sym_volatile] = ACTIONS(705),
        [anon_sym_bool] = ACTIONS(705),
        [anon_sym_decimal] = ACTIONS(705),
        [anon_sym_double] = ACTIONS(705),
        [anon_sym_float] = ACTIONS(705),
        [anon_sym_object] = ACTIONS(705),
        [anon_sym_string] = ACTIONS(705),
        [sym_identifier_name] = ACTIONS(707),
        [sym_comment] = ACTIONS(101),
    },
    [220] = {
        [anon_sym_SEMI] = ACTIONS(709),
        [sym_comment] = ACTIONS(101),
    },
    [221] = {
        [anon_sym_RBRACE] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_unsafe] = ACTIONS(713),
        [anon_sym_abstract] = ACTIONS(713),
        [anon_sym_sealed] = ACTIONS(713),
        [anon_sym_static] = ACTIONS(713),
        [anon_sym_new] = ACTIONS(713),
        [anon_sym_public] = ACTIONS(713),
        [anon_sym_protected] = ACTIONS(713),
        [anon_sym_internal] = ACTIONS(713),
        [anon_sym_private] = ACTIONS(713),
        [anon_sym_struct] = ACTIONS(713),
        [anon_sym_enum] = ACTIONS(713),
        [anon_sym_sbyte] = ACTIONS(713),
        [anon_sym_byte] = ACTIONS(713),
        [anon_sym_short] = ACTIONS(713),
        [anon_sym_ushort] = ACTIONS(713),
        [anon_sym_int] = ACTIONS(713),
        [anon_sym_uint] = ACTIONS(713),
        [anon_sym_long] = ACTIONS(713),
        [anon_sym_ulong] = ACTIONS(713),
        [anon_sym_char] = ACTIONS(713),
        [anon_sym_delegate] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(711),
        [sym_const_keyword] = ACTIONS(713),
        [anon_sym_readonly] = ACTIONS(713),
        [anon_sym_volatile] = ACTIONS(713),
        [anon_sym_bool] = ACTIONS(713),
        [anon_sym_decimal] = ACTIONS(713),
        [anon_sym_double] = ACTIONS(713),
        [anon_sym_float] = ACTIONS(713),
        [anon_sym_object] = ACTIONS(713),
        [anon_sym_string] = ACTIONS(713),
        [sym_identifier_name] = ACTIONS(715),
        [sym_comment] = ACTIONS(101),
    },
    [222] = {
        [sym_variable_declaration] = STATE(220),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_const_keyword] = ACTIONS(717),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [223] = {
        [sym_variable_declaration] = STATE(224),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [224] = {
        [anon_sym_SEMI] = ACTIONS(719),
        [sym_comment] = ACTIONS(101),
    },
    [225] = {
        [anon_sym_RBRACE] = ACTIONS(721),
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
        [anon_sym_sbyte] = ACTIONS(723),
        [anon_sym_byte] = ACTIONS(723),
        [anon_sym_short] = ACTIONS(723),
        [anon_sym_ushort] = ACTIONS(723),
        [anon_sym_int] = ACTIONS(723),
        [anon_sym_uint] = ACTIONS(723),
        [anon_sym_long] = ACTIONS(723),
        [anon_sym_ulong] = ACTIONS(723),
        [anon_sym_char] = ACTIONS(723),
        [anon_sym_delegate] = ACTIONS(723),
        [anon_sym_LBRACK] = ACTIONS(721),
        [sym_const_keyword] = ACTIONS(723),
        [anon_sym_readonly] = ACTIONS(723),
        [anon_sym_volatile] = ACTIONS(723),
        [anon_sym_bool] = ACTIONS(723),
        [anon_sym_decimal] = ACTIONS(723),
        [anon_sym_double] = ACTIONS(723),
        [anon_sym_float] = ACTIONS(723),
        [anon_sym_object] = ACTIONS(723),
        [anon_sym_string] = ACTIONS(723),
        [sym_identifier_name] = ACTIONS(725),
        [sym_comment] = ACTIONS(101),
    },
    [226] = {
        [ts_builtin_sym_end] = ACTIONS(727),
        [anon_sym_namespace] = ACTIONS(729),
        [anon_sym_RBRACE] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(729),
        [anon_sym_unsafe] = ACTIONS(729),
        [anon_sym_abstract] = ACTIONS(729),
        [anon_sym_sealed] = ACTIONS(729),
        [anon_sym_static] = ACTIONS(729),
        [anon_sym_new] = ACTIONS(729),
        [anon_sym_public] = ACTIONS(729),
        [anon_sym_protected] = ACTIONS(729),
        [anon_sym_internal] = ACTIONS(729),
        [anon_sym_private] = ACTIONS(729),
        [anon_sym_struct] = ACTIONS(729),
        [anon_sym_enum] = ACTIONS(729),
        [anon_sym_sbyte] = ACTIONS(729),
        [anon_sym_byte] = ACTIONS(729),
        [anon_sym_short] = ACTIONS(729),
        [anon_sym_ushort] = ACTIONS(729),
        [anon_sym_int] = ACTIONS(729),
        [anon_sym_uint] = ACTIONS(729),
        [anon_sym_long] = ACTIONS(729),
        [anon_sym_ulong] = ACTIONS(729),
        [anon_sym_char] = ACTIONS(729),
        [anon_sym_delegate] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(727),
        [sym_const_keyword] = ACTIONS(729),
        [anon_sym_readonly] = ACTIONS(729),
        [anon_sym_volatile] = ACTIONS(729),
        [anon_sym_bool] = ACTIONS(729),
        [anon_sym_decimal] = ACTIONS(729),
        [anon_sym_double] = ACTIONS(729),
        [anon_sym_float] = ACTIONS(729),
        [anon_sym_object] = ACTIONS(729),
        [anon_sym_string] = ACTIONS(729),
        [sym_identifier_name] = ACTIONS(731),
        [sym_comment] = ACTIONS(101),
    },
    [227] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [228] = {
        [sym_identifier_name] = ACTIONS(733),
        [sym_comment] = ACTIONS(101),
    },
    [229] = {
        [sym_type_parameter_list] = STATE(231),
        [anon_sym_LBRACE] = ACTIONS(735),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [230] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(237),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [231] = {
        [anon_sym_LBRACE] = ACTIONS(739),
        [sym_comment] = ACTIONS(101),
    },
    [232] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(234),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [233] = {
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_namespace] = ACTIONS(745),
        [anon_sym_RBRACE] = ACTIONS(743),
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
        [anon_sym_sbyte] = ACTIONS(745),
        [anon_sym_byte] = ACTIONS(745),
        [anon_sym_short] = ACTIONS(745),
        [anon_sym_ushort] = ACTIONS(745),
        [anon_sym_int] = ACTIONS(745),
        [anon_sym_uint] = ACTIONS(745),
        [anon_sym_long] = ACTIONS(745),
        [anon_sym_ulong] = ACTIONS(745),
        [anon_sym_char] = ACTIONS(745),
        [anon_sym_delegate] = ACTIONS(745),
        [anon_sym_LBRACK] = ACTIONS(743),
        [sym_const_keyword] = ACTIONS(745),
        [anon_sym_readonly] = ACTIONS(745),
        [anon_sym_volatile] = ACTIONS(745),
        [anon_sym_bool] = ACTIONS(745),
        [anon_sym_decimal] = ACTIONS(745),
        [anon_sym_double] = ACTIONS(745),
        [anon_sym_float] = ACTIONS(745),
        [anon_sym_object] = ACTIONS(745),
        [anon_sym_string] = ACTIONS(745),
        [sym_identifier_name] = ACTIONS(747),
        [sym_comment] = ACTIONS(101),
    },
    [234] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_namespace] = ACTIONS(753),
        [anon_sym_RBRACE] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(753),
        [anon_sym_unsafe] = ACTIONS(753),
        [anon_sym_abstract] = ACTIONS(753),
        [anon_sym_sealed] = ACTIONS(753),
        [anon_sym_static] = ACTIONS(753),
        [anon_sym_new] = ACTIONS(753),
        [anon_sym_public] = ACTIONS(753),
        [anon_sym_protected] = ACTIONS(753),
        [anon_sym_internal] = ACTIONS(753),
        [anon_sym_private] = ACTIONS(753),
        [anon_sym_struct] = ACTIONS(753),
        [anon_sym_enum] = ACTIONS(753),
        [anon_sym_sbyte] = ACTIONS(753),
        [anon_sym_byte] = ACTIONS(753),
        [anon_sym_short] = ACTIONS(753),
        [anon_sym_ushort] = ACTIONS(753),
        [anon_sym_int] = ACTIONS(753),
        [anon_sym_uint] = ACTIONS(753),
        [anon_sym_long] = ACTIONS(753),
        [anon_sym_ulong] = ACTIONS(753),
        [anon_sym_char] = ACTIONS(753),
        [anon_sym_delegate] = ACTIONS(753),
        [anon_sym_LBRACK] = ACTIONS(751),
        [sym_const_keyword] = ACTIONS(753),
        [anon_sym_readonly] = ACTIONS(753),
        [anon_sym_volatile] = ACTIONS(753),
        [anon_sym_bool] = ACTIONS(753),
        [anon_sym_decimal] = ACTIONS(753),
        [anon_sym_double] = ACTIONS(753),
        [anon_sym_float] = ACTIONS(753),
        [anon_sym_object] = ACTIONS(753),
        [anon_sym_string] = ACTIONS(753),
        [sym_identifier_name] = ACTIONS(755),
        [sym_comment] = ACTIONS(101),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_namespace] = ACTIONS(759),
        [anon_sym_RBRACE] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_unsafe] = ACTIONS(759),
        [anon_sym_abstract] = ACTIONS(759),
        [anon_sym_sealed] = ACTIONS(759),
        [anon_sym_static] = ACTIONS(759),
        [anon_sym_new] = ACTIONS(759),
        [anon_sym_public] = ACTIONS(759),
        [anon_sym_protected] = ACTIONS(759),
        [anon_sym_internal] = ACTIONS(759),
        [anon_sym_private] = ACTIONS(759),
        [anon_sym_struct] = ACTIONS(759),
        [anon_sym_enum] = ACTIONS(759),
        [anon_sym_sbyte] = ACTIONS(759),
        [anon_sym_byte] = ACTIONS(759),
        [anon_sym_short] = ACTIONS(759),
        [anon_sym_ushort] = ACTIONS(759),
        [anon_sym_int] = ACTIONS(759),
        [anon_sym_uint] = ACTIONS(759),
        [anon_sym_long] = ACTIONS(759),
        [anon_sym_ulong] = ACTIONS(759),
        [anon_sym_char] = ACTIONS(759),
        [anon_sym_delegate] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(757),
        [sym_const_keyword] = ACTIONS(759),
        [anon_sym_readonly] = ACTIONS(759),
        [anon_sym_volatile] = ACTIONS(759),
        [anon_sym_bool] = ACTIONS(759),
        [anon_sym_decimal] = ACTIONS(759),
        [anon_sym_double] = ACTIONS(759),
        [anon_sym_float] = ACTIONS(759),
        [anon_sym_object] = ACTIONS(759),
        [anon_sym_string] = ACTIONS(759),
        [sym_identifier_name] = ACTIONS(761),
        [sym_comment] = ACTIONS(101),
    },
    [237] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [238] = {
        [sym_identifier_name] = ACTIONS(763),
        [sym_comment] = ACTIONS(101),
    },
    [239] = {
        [sym_parameter_list] = STATE(240),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [240] = {
        [anon_sym_SEMI] = ACTIONS(765),
        [sym_comment] = ACTIONS(101),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(767),
        [anon_sym_namespace] = ACTIONS(769),
        [anon_sym_RBRACE] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_unsafe] = ACTIONS(769),
        [anon_sym_abstract] = ACTIONS(769),
        [anon_sym_sealed] = ACTIONS(769),
        [anon_sym_static] = ACTIONS(769),
        [anon_sym_new] = ACTIONS(769),
        [anon_sym_public] = ACTIONS(769),
        [anon_sym_protected] = ACTIONS(769),
        [anon_sym_internal] = ACTIONS(769),
        [anon_sym_private] = ACTIONS(769),
        [anon_sym_struct] = ACTIONS(769),
        [anon_sym_enum] = ACTIONS(769),
        [anon_sym_sbyte] = ACTIONS(769),
        [anon_sym_byte] = ACTIONS(769),
        [anon_sym_short] = ACTIONS(769),
        [anon_sym_ushort] = ACTIONS(769),
        [anon_sym_int] = ACTIONS(769),
        [anon_sym_uint] = ACTIONS(769),
        [anon_sym_long] = ACTIONS(769),
        [anon_sym_ulong] = ACTIONS(769),
        [anon_sym_char] = ACTIONS(769),
        [anon_sym_delegate] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(767),
        [sym_const_keyword] = ACTIONS(769),
        [anon_sym_readonly] = ACTIONS(769),
        [anon_sym_volatile] = ACTIONS(769),
        [anon_sym_bool] = ACTIONS(769),
        [anon_sym_decimal] = ACTIONS(769),
        [anon_sym_double] = ACTIONS(769),
        [anon_sym_float] = ACTIONS(769),
        [anon_sym_object] = ACTIONS(769),
        [anon_sym_string] = ACTIONS(769),
        [sym_identifier_name] = ACTIONS(771),
        [sym_comment] = ACTIONS(101),
    },
    [242] = {
        [anon_sym_LBRACE] = ACTIONS(773),
        [anon_sym_COLON] = ACTIONS(775),
        [sym_comment] = ACTIONS(101),
    },
    [243] = {
        [sym_enum_member_declaration] = STATE(249),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [244] = {
        [sym__integral_type] = STATE(245),
        [anon_sym_sbyte] = ACTIONS(405),
        [anon_sym_byte] = ACTIONS(405),
        [anon_sym_short] = ACTIONS(405),
        [anon_sym_ushort] = ACTIONS(405),
        [anon_sym_int] = ACTIONS(405),
        [anon_sym_uint] = ACTIONS(405),
        [anon_sym_long] = ACTIONS(405),
        [anon_sym_ulong] = ACTIONS(405),
        [anon_sym_char] = ACTIONS(405),
        [sym_comment] = ACTIONS(101),
    },
    [245] = {
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_comment] = ACTIONS(101),
    },
    [246] = {
        [sym_enum_member_declaration] = STATE(247),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [247] = {
        [aux_sym_enum_declaration_repeat1] = STATE(248),
        [anon_sym_RBRACE] = ACTIONS(581),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [248] = {
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [249] = {
        [aux_sym_enum_declaration_repeat1] = STATE(251),
        [anon_sym_RBRACE] = ACTIONS(779),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(781),
        [anon_sym_SEMI] = ACTIONS(783),
        [anon_sym_namespace] = ACTIONS(785),
        [anon_sym_RBRACE] = ACTIONS(781),
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
        [anon_sym_LBRACK] = ACTIONS(781),
        [sym_const_keyword] = ACTIONS(785),
        [anon_sym_readonly] = ACTIONS(785),
        [anon_sym_volatile] = ACTIONS(785),
        [anon_sym_bool] = ACTIONS(785),
        [anon_sym_decimal] = ACTIONS(785),
        [anon_sym_double] = ACTIONS(785),
        [anon_sym_float] = ACTIONS(785),
        [anon_sym_object] = ACTIONS(785),
        [anon_sym_string] = ACTIONS(785),
        [sym_identifier_name] = ACTIONS(787),
        [sym_comment] = ACTIONS(101),
    },
    [251] = {
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [252] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_namespace] = ACTIONS(577),
        [anon_sym_RBRACE] = ACTIONS(573),
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
        [anon_sym_LBRACK] = ACTIONS(573),
        [sym_const_keyword] = ACTIONS(577),
        [anon_sym_readonly] = ACTIONS(577),
        [anon_sym_volatile] = ACTIONS(577),
        [anon_sym_bool] = ACTIONS(577),
        [anon_sym_decimal] = ACTIONS(577),
        [anon_sym_double] = ACTIONS(577),
        [anon_sym_float] = ACTIONS(577),
        [anon_sym_object] = ACTIONS(577),
        [anon_sym_string] = ACTIONS(577),
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(101),
    },
    [253] = {
        [sym_type_parameter_list] = STATE(255),
        [anon_sym_LBRACE] = ACTIONS(789),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [254] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(257),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [255] = {
        [anon_sym_LBRACE] = ACTIONS(593),
        [sym_comment] = ACTIONS(101),
    },
    [256] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_namespace] = ACTIONS(795),
        [anon_sym_RBRACE] = ACTIONS(793),
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
        [anon_sym_sbyte] = ACTIONS(795),
        [anon_sym_byte] = ACTIONS(795),
        [anon_sym_short] = ACTIONS(795),
        [anon_sym_ushort] = ACTIONS(795),
        [anon_sym_int] = ACTIONS(795),
        [anon_sym_uint] = ACTIONS(795),
        [anon_sym_long] = ACTIONS(795),
        [anon_sym_ulong] = ACTIONS(795),
        [anon_sym_char] = ACTIONS(795),
        [anon_sym_delegate] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(793),
        [sym_const_keyword] = ACTIONS(795),
        [anon_sym_readonly] = ACTIONS(795),
        [anon_sym_volatile] = ACTIONS(795),
        [anon_sym_bool] = ACTIONS(795),
        [anon_sym_decimal] = ACTIONS(795),
        [anon_sym_double] = ACTIONS(795),
        [anon_sym_float] = ACTIONS(795),
        [anon_sym_object] = ACTIONS(795),
        [anon_sym_string] = ACTIONS(795),
        [sym_identifier_name] = ACTIONS(797),
        [sym_comment] = ACTIONS(101),
    },
    [257] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [258] = {
        [sym_type_parameter_list] = STATE(260),
        [anon_sym_LBRACE] = ACTIONS(799),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [259] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(262),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [260] = {
        [anon_sym_LBRACE] = ACTIONS(735),
        [sym_comment] = ACTIONS(101),
    },
    [261] = {
        [ts_builtin_sym_end] = ACTIONS(803),
        [anon_sym_namespace] = ACTIONS(805),
        [anon_sym_RBRACE] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_unsafe] = ACTIONS(805),
        [anon_sym_abstract] = ACTIONS(805),
        [anon_sym_sealed] = ACTIONS(805),
        [anon_sym_static] = ACTIONS(805),
        [anon_sym_new] = ACTIONS(805),
        [anon_sym_public] = ACTIONS(805),
        [anon_sym_protected] = ACTIONS(805),
        [anon_sym_internal] = ACTIONS(805),
        [anon_sym_private] = ACTIONS(805),
        [anon_sym_struct] = ACTIONS(805),
        [anon_sym_enum] = ACTIONS(805),
        [anon_sym_sbyte] = ACTIONS(805),
        [anon_sym_byte] = ACTIONS(805),
        [anon_sym_short] = ACTIONS(805),
        [anon_sym_ushort] = ACTIONS(805),
        [anon_sym_int] = ACTIONS(805),
        [anon_sym_uint] = ACTIONS(805),
        [anon_sym_long] = ACTIONS(805),
        [anon_sym_ulong] = ACTIONS(805),
        [anon_sym_char] = ACTIONS(805),
        [anon_sym_delegate] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(803),
        [sym_const_keyword] = ACTIONS(805),
        [anon_sym_readonly] = ACTIONS(805),
        [anon_sym_volatile] = ACTIONS(805),
        [anon_sym_bool] = ACTIONS(805),
        [anon_sym_decimal] = ACTIONS(805),
        [anon_sym_double] = ACTIONS(805),
        [anon_sym_float] = ACTIONS(805),
        [anon_sym_object] = ACTIONS(805),
        [anon_sym_string] = ACTIONS(805),
        [sym_identifier_name] = ACTIONS(807),
        [sym_comment] = ACTIONS(101),
    },
    [262] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [263] = {
        [anon_sym_sbyte] = ACTIONS(809),
        [anon_sym_byte] = ACTIONS(809),
        [anon_sym_short] = ACTIONS(809),
        [anon_sym_ushort] = ACTIONS(809),
        [anon_sym_int] = ACTIONS(809),
        [anon_sym_uint] = ACTIONS(809),
        [anon_sym_long] = ACTIONS(809),
        [anon_sym_ulong] = ACTIONS(809),
        [anon_sym_char] = ACTIONS(809),
        [sym_const_keyword] = ACTIONS(809),
        [anon_sym_bool] = ACTIONS(809),
        [anon_sym_decimal] = ACTIONS(809),
        [anon_sym_double] = ACTIONS(809),
        [anon_sym_float] = ACTIONS(809),
        [anon_sym_object] = ACTIONS(809),
        [anon_sym_string] = ACTIONS(809),
        [sym_identifier_name] = ACTIONS(811),
        [sym_comment] = ACTIONS(101),
    },
    [264] = {
        [sym_identifier_name] = ACTIONS(813),
        [sym_comment] = ACTIONS(101),
    },
    [265] = {
        [sym_parameter_list] = STATE(266),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [266] = {
        [anon_sym_SEMI] = ACTIONS(815),
        [sym_comment] = ACTIONS(101),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(817),
        [anon_sym_namespace] = ACTIONS(819),
        [anon_sym_RBRACE] = ACTIONS(817),
        [anon_sym_class] = ACTIONS(819),
        [anon_sym_unsafe] = ACTIONS(819),
        [anon_sym_abstract] = ACTIONS(819),
        [anon_sym_sealed] = ACTIONS(819),
        [anon_sym_static] = ACTIONS(819),
        [anon_sym_new] = ACTIONS(819),
        [anon_sym_public] = ACTIONS(819),
        [anon_sym_protected] = ACTIONS(819),
        [anon_sym_internal] = ACTIONS(819),
        [anon_sym_private] = ACTIONS(819),
        [anon_sym_struct] = ACTIONS(819),
        [anon_sym_enum] = ACTIONS(819),
        [anon_sym_sbyte] = ACTIONS(819),
        [anon_sym_byte] = ACTIONS(819),
        [anon_sym_short] = ACTIONS(819),
        [anon_sym_ushort] = ACTIONS(819),
        [anon_sym_int] = ACTIONS(819),
        [anon_sym_uint] = ACTIONS(819),
        [anon_sym_long] = ACTIONS(819),
        [anon_sym_ulong] = ACTIONS(819),
        [anon_sym_char] = ACTIONS(819),
        [anon_sym_delegate] = ACTIONS(819),
        [anon_sym_LBRACK] = ACTIONS(817),
        [sym_const_keyword] = ACTIONS(819),
        [anon_sym_readonly] = ACTIONS(819),
        [anon_sym_volatile] = ACTIONS(819),
        [anon_sym_bool] = ACTIONS(819),
        [anon_sym_decimal] = ACTIONS(819),
        [anon_sym_double] = ACTIONS(819),
        [anon_sym_float] = ACTIONS(819),
        [anon_sym_object] = ACTIONS(819),
        [anon_sym_string] = ACTIONS(819),
        [sym_identifier_name] = ACTIONS(821),
        [sym_comment] = ACTIONS(101),
    },
    [268] = {
        [anon_sym_LBRACE] = ACTIONS(823),
        [anon_sym_COLON] = ACTIONS(825),
        [sym_comment] = ACTIONS(101),
    },
    [269] = {
        [sym_enum_member_declaration] = STATE(272),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [270] = {
        [sym__integral_type] = STATE(271),
        [anon_sym_sbyte] = ACTIONS(405),
        [anon_sym_byte] = ACTIONS(405),
        [anon_sym_short] = ACTIONS(405),
        [anon_sym_ushort] = ACTIONS(405),
        [anon_sym_int] = ACTIONS(405),
        [anon_sym_uint] = ACTIONS(405),
        [anon_sym_long] = ACTIONS(405),
        [anon_sym_ulong] = ACTIONS(405),
        [anon_sym_char] = ACTIONS(405),
        [sym_comment] = ACTIONS(101),
    },
    [271] = {
        [anon_sym_LBRACE] = ACTIONS(399),
        [sym_comment] = ACTIONS(101),
    },
    [272] = {
        [aux_sym_enum_declaration_repeat1] = STATE(274),
        [anon_sym_RBRACE] = ACTIONS(827),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(829),
        [anon_sym_SEMI] = ACTIONS(831),
        [anon_sym_namespace] = ACTIONS(833),
        [anon_sym_RBRACE] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(833),
        [anon_sym_unsafe] = ACTIONS(833),
        [anon_sym_abstract] = ACTIONS(833),
        [anon_sym_sealed] = ACTIONS(833),
        [anon_sym_static] = ACTIONS(833),
        [anon_sym_new] = ACTIONS(833),
        [anon_sym_public] = ACTIONS(833),
        [anon_sym_protected] = ACTIONS(833),
        [anon_sym_internal] = ACTIONS(833),
        [anon_sym_private] = ACTIONS(833),
        [anon_sym_struct] = ACTIONS(833),
        [anon_sym_enum] = ACTIONS(833),
        [anon_sym_sbyte] = ACTIONS(833),
        [anon_sym_byte] = ACTIONS(833),
        [anon_sym_short] = ACTIONS(833),
        [anon_sym_ushort] = ACTIONS(833),
        [anon_sym_int] = ACTIONS(833),
        [anon_sym_uint] = ACTIONS(833),
        [anon_sym_long] = ACTIONS(833),
        [anon_sym_ulong] = ACTIONS(833),
        [anon_sym_char] = ACTIONS(833),
        [anon_sym_delegate] = ACTIONS(833),
        [anon_sym_LBRACK] = ACTIONS(829),
        [sym_const_keyword] = ACTIONS(833),
        [anon_sym_readonly] = ACTIONS(833),
        [anon_sym_volatile] = ACTIONS(833),
        [anon_sym_bool] = ACTIONS(833),
        [anon_sym_decimal] = ACTIONS(833),
        [anon_sym_double] = ACTIONS(833),
        [anon_sym_float] = ACTIONS(833),
        [anon_sym_object] = ACTIONS(833),
        [anon_sym_string] = ACTIONS(833),
        [sym_identifier_name] = ACTIONS(835),
        [sym_comment] = ACTIONS(101),
    },
    [274] = {
        [anon_sym_RBRACE] = ACTIONS(779),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(781),
        [anon_sym_namespace] = ACTIONS(785),
        [anon_sym_RBRACE] = ACTIONS(781),
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
        [anon_sym_LBRACK] = ACTIONS(781),
        [sym_const_keyword] = ACTIONS(785),
        [anon_sym_readonly] = ACTIONS(785),
        [anon_sym_volatile] = ACTIONS(785),
        [anon_sym_bool] = ACTIONS(785),
        [anon_sym_decimal] = ACTIONS(785),
        [anon_sym_double] = ACTIONS(785),
        [anon_sym_float] = ACTIONS(785),
        [anon_sym_object] = ACTIONS(785),
        [anon_sym_string] = ACTIONS(785),
        [sym_identifier_name] = ACTIONS(787),
        [sym_comment] = ACTIONS(101),
    },
    [276] = {
        [sym_type_parameter_list] = STATE(278),
        [anon_sym_LBRACE] = ACTIONS(837),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [277] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(280),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [278] = {
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_comment] = ACTIONS(101),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(841),
        [anon_sym_namespace] = ACTIONS(843),
        [anon_sym_RBRACE] = ACTIONS(841),
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
        [anon_sym_sbyte] = ACTIONS(843),
        [anon_sym_byte] = ACTIONS(843),
        [anon_sym_short] = ACTIONS(843),
        [anon_sym_ushort] = ACTIONS(843),
        [anon_sym_int] = ACTIONS(843),
        [anon_sym_uint] = ACTIONS(843),
        [anon_sym_long] = ACTIONS(843),
        [anon_sym_ulong] = ACTIONS(843),
        [anon_sym_char] = ACTIONS(843),
        [anon_sym_delegate] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(841),
        [sym_const_keyword] = ACTIONS(843),
        [anon_sym_readonly] = ACTIONS(843),
        [anon_sym_volatile] = ACTIONS(843),
        [anon_sym_bool] = ACTIONS(843),
        [anon_sym_decimal] = ACTIONS(843),
        [anon_sym_double] = ACTIONS(843),
        [anon_sym_float] = ACTIONS(843),
        [anon_sym_object] = ACTIONS(843),
        [anon_sym_string] = ACTIONS(843),
        [sym_identifier_name] = ACTIONS(845),
        [sym_comment] = ACTIONS(101),
    },
    [280] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [281] = {
        [sym__class_modifiers] = STATE(282),
        [sym__struct_modifiers] = STATE(283),
        [sym__field_modifiers] = STATE(263),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_unsafe] = ACTIONS(629),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(629),
        [anon_sym_public] = ACTIONS(629),
        [anon_sym_protected] = ACTIONS(629),
        [anon_sym_internal] = ACTIONS(629),
        [anon_sym_private] = ACTIONS(629),
        [anon_sym_struct] = ACTIONS(631),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [sym_const_keyword] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(637),
        [sym_comment] = ACTIONS(101),
    },
    [282] = {
        [anon_sym_class] = ACTIONS(847),
        [sym_comment] = ACTIONS(101),
    },
    [283] = {
        [anon_sym_struct] = ACTIONS(849),
        [sym_comment] = ACTIONS(101),
    },
    [284] = {
        [sym_type_parameter_list] = STATE(286),
        [anon_sym_LBRACE] = ACTIONS(851),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [285] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(288),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [286] = {
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_comment] = ACTIONS(101),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(855),
        [anon_sym_namespace] = ACTIONS(857),
        [anon_sym_RBRACE] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(857),
        [anon_sym_unsafe] = ACTIONS(857),
        [anon_sym_abstract] = ACTIONS(857),
        [anon_sym_sealed] = ACTIONS(857),
        [anon_sym_static] = ACTIONS(857),
        [anon_sym_new] = ACTIONS(857),
        [anon_sym_public] = ACTIONS(857),
        [anon_sym_protected] = ACTIONS(857),
        [anon_sym_internal] = ACTIONS(857),
        [anon_sym_private] = ACTIONS(857),
        [anon_sym_struct] = ACTIONS(857),
        [anon_sym_enum] = ACTIONS(857),
        [anon_sym_sbyte] = ACTIONS(857),
        [anon_sym_byte] = ACTIONS(857),
        [anon_sym_short] = ACTIONS(857),
        [anon_sym_ushort] = ACTIONS(857),
        [anon_sym_int] = ACTIONS(857),
        [anon_sym_uint] = ACTIONS(857),
        [anon_sym_long] = ACTIONS(857),
        [anon_sym_ulong] = ACTIONS(857),
        [anon_sym_char] = ACTIONS(857),
        [anon_sym_delegate] = ACTIONS(857),
        [anon_sym_LBRACK] = ACTIONS(855),
        [sym_const_keyword] = ACTIONS(857),
        [anon_sym_readonly] = ACTIONS(857),
        [anon_sym_volatile] = ACTIONS(857),
        [anon_sym_bool] = ACTIONS(857),
        [anon_sym_decimal] = ACTIONS(857),
        [anon_sym_double] = ACTIONS(857),
        [anon_sym_float] = ACTIONS(857),
        [anon_sym_object] = ACTIONS(857),
        [anon_sym_string] = ACTIONS(857),
        [sym_identifier_name] = ACTIONS(859),
        [sym_comment] = ACTIONS(101),
    },
    [288] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [289] = {
        [anon_sym_COLON] = ACTIONS(861),
        [sym_comment] = ACTIONS(101),
    },
    [290] = {
        [sym_attribute_list] = STATE(291),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(101),
    },
    [291] = {
        [anon_sym_RBRACK] = ACTIONS(863),
        [sym_comment] = ACTIONS(101),
    },
    [292] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_namespace] = ACTIONS(865),
        [anon_sym_class] = ACTIONS(865),
        [anon_sym_unsafe] = ACTIONS(865),
        [anon_sym_abstract] = ACTIONS(865),
        [anon_sym_sealed] = ACTIONS(865),
        [anon_sym_static] = ACTIONS(865),
        [anon_sym_new] = ACTIONS(865),
        [anon_sym_public] = ACTIONS(865),
        [anon_sym_protected] = ACTIONS(865),
        [anon_sym_internal] = ACTIONS(865),
        [anon_sym_private] = ACTIONS(865),
        [anon_sym_struct] = ACTIONS(865),
        [anon_sym_enum] = ACTIONS(865),
        [anon_sym_delegate] = ACTIONS(865),
        [anon_sym_LBRACK] = ACTIONS(865),
        [sym_comment] = ACTIONS(101),
    },
    [293] = {
        [sym__class_modifiers] = STATE(282),
        [sym__struct_modifiers] = STATE(283),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(141),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [sym_comment] = ACTIONS(101),
    },
    [294] = {
        [anon_sym_COLON_COLON] = ACTIONS(867),
        [sym_comment] = ACTIONS(101),
    },
    [295] = {
        [anon_sym_LBRACE] = ACTIONS(869),
        [anon_sym_DOT] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [296] = {
        [anon_sym_DOT] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [297] = {
        [sym_identifier_name] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [298] = {
        [anon_sym_SEMI] = ACTIONS(875),
        [anon_sym_LBRACE] = ACTIONS(875),
        [anon_sym_DOT] = ACTIONS(875),
        [sym_comment] = ACTIONS(101),
    },
    [299] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(301),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(877),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(879),
        [anon_sym_namespace] = ACTIONS(879),
        [anon_sym_RBRACE] = ACTIONS(879),
        [anon_sym_class] = ACTIONS(879),
        [anon_sym_unsafe] = ACTIONS(879),
        [anon_sym_abstract] = ACTIONS(879),
        [anon_sym_sealed] = ACTIONS(879),
        [anon_sym_static] = ACTIONS(879),
        [anon_sym_new] = ACTIONS(879),
        [anon_sym_public] = ACTIONS(879),
        [anon_sym_protected] = ACTIONS(879),
        [anon_sym_internal] = ACTIONS(879),
        [anon_sym_private] = ACTIONS(879),
        [anon_sym_struct] = ACTIONS(879),
        [anon_sym_enum] = ACTIONS(879),
        [anon_sym_delegate] = ACTIONS(879),
        [anon_sym_LBRACK] = ACTIONS(879),
        [sym_comment] = ACTIONS(101),
    },
    [301] = {
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
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_namespace] = ACTIONS(883),
        [anon_sym_RBRACE] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_unsafe] = ACTIONS(883),
        [anon_sym_abstract] = ACTIONS(883),
        [anon_sym_sealed] = ACTIONS(883),
        [anon_sym_static] = ACTIONS(883),
        [anon_sym_new] = ACTIONS(883),
        [anon_sym_public] = ACTIONS(883),
        [anon_sym_protected] = ACTIONS(883),
        [anon_sym_internal] = ACTIONS(883),
        [anon_sym_private] = ACTIONS(883),
        [anon_sym_struct] = ACTIONS(883),
        [anon_sym_enum] = ACTIONS(883),
        [anon_sym_delegate] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [sym_comment] = ACTIONS(101),
    },
    [303] = {
        [sym_identifier_name] = ACTIONS(885),
        [sym_comment] = ACTIONS(101),
    },
    [304] = {
        [anon_sym_DOT] = ACTIONS(887),
        [sym_comment] = ACTIONS(101),
    },
    [305] = {
        [sym_global] = ACTIONS(889),
        [sym_identifier_name] = ACTIONS(891),
        [sym_comment] = ACTIONS(101),
    },
    [306] = {
        [anon_sym_SEMI] = ACTIONS(893),
        [anon_sym_EQ] = ACTIONS(895),
        [anon_sym_DOT] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [307] = {
        [anon_sym_SEMI] = ACTIONS(893),
        [anon_sym_DOT] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [308] = {
        [sym_qualified_name] = STATE(309),
        [sym_alias_qualified_name] = STATE(296),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(897),
        [sym_comment] = ACTIONS(101),
    },
    [309] = {
        [anon_sym_SEMI] = ACTIONS(899),
        [anon_sym_DOT] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(901),
        [anon_sym_using] = ACTIONS(901),
        [anon_sym_namespace] = ACTIONS(901),
        [anon_sym_class] = ACTIONS(901),
        [anon_sym_unsafe] = ACTIONS(901),
        [anon_sym_abstract] = ACTIONS(901),
        [anon_sym_sealed] = ACTIONS(901),
        [anon_sym_static] = ACTIONS(901),
        [anon_sym_new] = ACTIONS(901),
        [anon_sym_public] = ACTIONS(901),
        [anon_sym_protected] = ACTIONS(901),
        [anon_sym_internal] = ACTIONS(901),
        [anon_sym_private] = ACTIONS(901),
        [anon_sym_struct] = ACTIONS(901),
        [anon_sym_enum] = ACTIONS(901),
        [anon_sym_delegate] = ACTIONS(901),
        [anon_sym_LBRACK] = ACTIONS(901),
        [sym_comment] = ACTIONS(101),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(903),
        [anon_sym_using] = ACTIONS(903),
        [anon_sym_namespace] = ACTIONS(903),
        [anon_sym_class] = ACTIONS(903),
        [anon_sym_unsafe] = ACTIONS(903),
        [anon_sym_abstract] = ACTIONS(903),
        [anon_sym_sealed] = ACTIONS(903),
        [anon_sym_static] = ACTIONS(903),
        [anon_sym_new] = ACTIONS(903),
        [anon_sym_public] = ACTIONS(903),
        [anon_sym_protected] = ACTIONS(903),
        [anon_sym_internal] = ACTIONS(903),
        [anon_sym_private] = ACTIONS(903),
        [anon_sym_struct] = ACTIONS(903),
        [anon_sym_enum] = ACTIONS(903),
        [anon_sym_delegate] = ACTIONS(903),
        [anon_sym_LBRACK] = ACTIONS(903),
        [sym_comment] = ACTIONS(101),
    },
    [312] = {
        [sym_global] = ACTIONS(905),
        [sym_identifier_name] = ACTIONS(907),
        [sym_comment] = ACTIONS(101),
    },
    [313] = {
        [sym_identifier_name] = ACTIONS(909),
        [sym_comment] = ACTIONS(101),
    },
    [314] = {
        [anon_sym_SEMI] = ACTIONS(911),
        [sym_comment] = ACTIONS(101),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(913),
        [anon_sym_extern] = ACTIONS(913),
        [anon_sym_using] = ACTIONS(913),
        [anon_sym_namespace] = ACTIONS(913),
        [anon_sym_class] = ACTIONS(913),
        [anon_sym_unsafe] = ACTIONS(913),
        [anon_sym_abstract] = ACTIONS(913),
        [anon_sym_sealed] = ACTIONS(913),
        [anon_sym_static] = ACTIONS(913),
        [anon_sym_new] = ACTIONS(913),
        [anon_sym_public] = ACTIONS(913),
        [anon_sym_protected] = ACTIONS(913),
        [anon_sym_internal] = ACTIONS(913),
        [anon_sym_private] = ACTIONS(913),
        [anon_sym_struct] = ACTIONS(913),
        [anon_sym_enum] = ACTIONS(913),
        [anon_sym_delegate] = ACTIONS(913),
        [anon_sym_LBRACK] = ACTIONS(913),
        [sym_comment] = ACTIONS(101),
    },
    [316] = {
        [ts_builtin_sym_end] = ACTIONS(915),
        [anon_sym_extern] = ACTIONS(928),
        [anon_sym_using] = ACTIONS(930),
        [anon_sym_namespace] = ACTIONS(934),
        [anon_sym_RBRACE] = ACTIONS(947),
        [anon_sym_class] = ACTIONS(961),
        [anon_sym_unsafe] = ACTIONS(961),
        [anon_sym_abstract] = ACTIONS(961),
        [anon_sym_sealed] = ACTIONS(961),
        [anon_sym_static] = ACTIONS(961),
        [anon_sym_new] = ACTIONS(961),
        [anon_sym_public] = ACTIONS(961),
        [anon_sym_protected] = ACTIONS(961),
        [anon_sym_internal] = ACTIONS(961),
        [anon_sym_private] = ACTIONS(961),
        [anon_sym_struct] = ACTIONS(961),
        [anon_sym_enum] = ACTIONS(961),
        [anon_sym_sbyte] = ACTIONS(978),
        [anon_sym_byte] = ACTIONS(978),
        [anon_sym_short] = ACTIONS(978),
        [anon_sym_ushort] = ACTIONS(978),
        [anon_sym_int] = ACTIONS(978),
        [anon_sym_uint] = ACTIONS(978),
        [anon_sym_long] = ACTIONS(978),
        [anon_sym_ulong] = ACTIONS(978),
        [anon_sym_char] = ACTIONS(978),
        [anon_sym_delegate] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(992),
        [sym_const_keyword] = ACTIONS(978),
        [anon_sym_readonly] = ACTIONS(978),
        [anon_sym_volatile] = ACTIONS(978),
        [anon_sym_bool] = ACTIONS(978),
        [anon_sym_decimal] = ACTIONS(978),
        [anon_sym_double] = ACTIONS(978),
        [anon_sym_float] = ACTIONS(978),
        [anon_sym_object] = ACTIONS(978),
        [anon_sym_string] = ACTIONS(978),
        [sym_identifier_name] = ACTIONS(1009),
        [sym_comment] = ACTIONS(101),
    },
    [317] = {
        [sym__type_declaration] = STATE(467),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(516),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(469),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(301),
        [aux_sym_class_declaration_repeat1] = STATE(380),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1023),
        [anon_sym_RBRACE] = ACTIONS(1025),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1027),
        [sym_comment] = ACTIONS(101),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(1029),
        [anon_sym_SEMI] = ACTIONS(1048),
        [anon_sym_namespace] = ACTIONS(1050),
        [anon_sym_RBRACE] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1050),
        [anon_sym_unsafe] = ACTIONS(1050),
        [anon_sym_abstract] = ACTIONS(1050),
        [anon_sym_sealed] = ACTIONS(1050),
        [anon_sym_static] = ACTIONS(1050),
        [anon_sym_new] = ACTIONS(1050),
        [anon_sym_public] = ACTIONS(1050),
        [anon_sym_protected] = ACTIONS(1050),
        [anon_sym_internal] = ACTIONS(1050),
        [anon_sym_private] = ACTIONS(1050),
        [anon_sym_struct] = ACTIONS(1050),
        [anon_sym_enum] = ACTIONS(1050),
        [anon_sym_sbyte] = ACTIONS(1069),
        [anon_sym_byte] = ACTIONS(1069),
        [anon_sym_short] = ACTIONS(1069),
        [anon_sym_ushort] = ACTIONS(1069),
        [anon_sym_int] = ACTIONS(1069),
        [anon_sym_uint] = ACTIONS(1069),
        [anon_sym_long] = ACTIONS(1069),
        [anon_sym_ulong] = ACTIONS(1069),
        [anon_sym_char] = ACTIONS(1069),
        [anon_sym_delegate] = ACTIONS(1050),
        [anon_sym_LBRACK] = ACTIONS(1029),
        [sym_const_keyword] = ACTIONS(1069),
        [anon_sym_readonly] = ACTIONS(1069),
        [anon_sym_volatile] = ACTIONS(1069),
        [anon_sym_bool] = ACTIONS(1069),
        [anon_sym_decimal] = ACTIONS(1069),
        [anon_sym_double] = ACTIONS(1069),
        [anon_sym_float] = ACTIONS(1069),
        [anon_sym_object] = ACTIONS(1069),
        [anon_sym_string] = ACTIONS(1069),
        [sym_identifier_name] = ACTIONS(1086),
        [sym_comment] = ACTIONS(101),
    },
    [319] = {
        [sym_identifier_name] = ACTIONS(1103),
        [sym_comment] = ACTIONS(101),
    },
    [320] = {
        [sym__class_modifiers] = STATE(282),
        [sym__field_modifiers] = STATE(263),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_unsafe] = ACTIONS(603),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [sym_const_keyword] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_global] = ACTIONS(889),
        [sym_identifier_name] = ACTIONS(1105),
        [sym_comment] = ACTIONS(101),
    },
    [321] = {
        [sym_identifier_name] = ACTIONS(1108),
        [sym_comment] = ACTIONS(101),
    },
    [322] = {
        [sym_identifier_name] = ACTIONS(1110),
        [sym_comment] = ACTIONS(101),
    },
    [323] = {
        [sym__integral_type] = STATE(353),
        [sym_attribute_list] = STATE(291),
        [sym_attribute] = STATE(36),
        [anon_sym_sbyte] = ACTIONS(1112),
        [anon_sym_byte] = ACTIONS(1112),
        [anon_sym_short] = ACTIONS(1112),
        [anon_sym_ushort] = ACTIONS(1112),
        [anon_sym_int] = ACTIONS(1112),
        [anon_sym_uint] = ACTIONS(1112),
        [anon_sym_long] = ACTIONS(1112),
        [anon_sym_ulong] = ACTIONS(1112),
        [anon_sym_char] = ACTIONS(1112),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(101),
    },
    [324] = {
        [sym_enum_member_declaration] = STATE(486),
        [sym_parameter] = STATE(487),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(488),
        [sym__attribute_section] = STATE(25),
        [sym_attribute] = STATE(489),
        [sym__type] = STATE(490),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(491),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(492),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1114),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(1114),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1117),
        [sym_comment] = ACTIONS(101),
    },
    [325] = {
        [anon_sym_LBRACE] = ACTIONS(407),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_GT] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(101),
    },
    [326] = {
        [sym__return_type] = STATE(355),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_void_keyword] = ACTIONS(155),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [327] = {
        [sym__formal_parameter_list] = STATE(77),
        [sym_parameter] = STATE(78),
        [sym_parameter_modifier] = STATE(79),
        [sym_parameter_array] = STATE(80),
        [sym__attributes] = STATE(81),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_RPAREN] = ACTIONS(1119),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [sym_params_keyword] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [328] = {
        [anon_sym_SEMI] = ACTIONS(1121),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [329] = {
        [sym_array_type] = STATE(360),
        [sym__type] = STATE(91),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [330] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RBRACK] = ACTIONS(335),
        [anon_sym_assembly] = ACTIONS(159),
        [anon_sym_module] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(101),
    },
    [331] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_namespace] = ACTIONS(1124),
        [anon_sym_class] = ACTIONS(1126),
        [anon_sym_unsafe] = ACTIONS(1126),
        [anon_sym_abstract] = ACTIONS(1126),
        [anon_sym_sealed] = ACTIONS(1126),
        [anon_sym_static] = ACTIONS(1126),
        [anon_sym_new] = ACTIONS(1126),
        [anon_sym_public] = ACTIONS(1126),
        [anon_sym_protected] = ACTIONS(1126),
        [anon_sym_internal] = ACTIONS(1126),
        [anon_sym_private] = ACTIONS(1126),
        [anon_sym_struct] = ACTIONS(1126),
        [anon_sym_enum] = ACTIONS(1126),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(1126),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(1129),
        [sym_const_keyword] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(1132),
        [sym_comment] = ACTIONS(101),
    },
    [332] = {
        [sym_variable_declaration] = STATE(482),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [333] = {
        [sym__expression] = STATE(144),
        [sym__literal] = STATE(145),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(146),
        [sym__verbatim_string_literal] = STATE(146),
        [anon_sym_true] = ACTIONS(1136),
        [anon_sym_false] = ACTIONS(1136),
        [anon_sym_SQUOTE] = ACTIONS(425),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(427),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(429),
        [sym_null_literal] = ACTIONS(1138),
        [anon_sym_DOT] = ACTIONS(433),
        [anon_sym_DQUOTE] = ACTIONS(435),
        [anon_sym_AT_DQUOTE] = ACTIONS(437),
        [sym_global] = ACTIONS(905),
        [sym_identifier_name] = ACTIONS(907),
        [sym_comment] = ACTIONS(101),
    },
    [334] = {
        [sym__unicode_escape_sequence] = STATE(168),
        [sym__simple_escape_sequence] = STATE(168),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1140),
        [sym__hexadecimal_escape_sequence] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(445),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(445),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(447),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(447),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(447),
        [anon_sym_BSLASH0] = ACTIONS(447),
        [anon_sym_BSLASHa] = ACTIONS(447),
        [anon_sym_BSLASHb] = ACTIONS(447),
        [anon_sym_BSLASHf] = ACTIONS(447),
        [anon_sym_BSLASHn] = ACTIONS(447),
        [anon_sym_BSLASHr] = ACTIONS(447),
        [anon_sym_BSLASHt] = ACTIONS(447),
        [anon_sym_BSLASHv] = ACTIONS(447),
        [sym_comment] = ACTIONS(101),
    },
    [335] = {
        [anon_sym_SQUOTE] = ACTIONS(537),
        [sym__hexadecimal_escape_sequence] = ACTIONS(485),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(487),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(487),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(487),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(487),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(487),
        [anon_sym_BSLASH0] = ACTIONS(487),
        [anon_sym_BSLASHa] = ACTIONS(487),
        [anon_sym_BSLASHb] = ACTIONS(487),
        [anon_sym_BSLASHf] = ACTIONS(487),
        [anon_sym_BSLASHn] = ACTIONS(487),
        [anon_sym_BSLASHr] = ACTIONS(487),
        [anon_sym_BSLASHt] = ACTIONS(487),
        [anon_sym_BSLASHv] = ACTIONS(487),
        [anon_sym_DQUOTE] = ACTIONS(487),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1142),
        [sym_comment] = ACTIONS(101),
    },
    [336] = {
        [anon_sym_SEMI] = ACTIONS(1144),
        [anon_sym_RBRACE] = ACTIONS(1144),
        [anon_sym_COMMA] = ACTIONS(1144),
        [sym__integer_type_suffix] = ACTIONS(451),
        [anon_sym_DOT] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(1148),
        [sym__exponent_part] = ACTIONS(1150),
        [sym_comment] = ACTIONS(101),
    },
    [337] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1152),
        [sym_identifier_name] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [338] = {
        [anon_sym_SEMI] = ACTIONS(1154),
        [anon_sym_RBRACE] = ACTIONS(1154),
        [anon_sym_COMMA] = ACTIONS(1154),
        [sym_comment] = ACTIONS(101),
    },
    [339] = {
        [anon_sym_SEMI] = ACTIONS(1159),
        [anon_sym_RBRACE] = ACTIONS(1159),
        [anon_sym_COMMA] = ACTIONS(1159),
        [sym__real_type_suffix] = ACTIONS(1163),
        [sym_comment] = ACTIONS(101),
    },
    [340] = {
        [sym__unicode_escape_sequence] = STATE(149),
        [sym__simple_escape_sequence] = STATE(149),
        [sym__regular_string_literal_character] = STATE(153),
        [aux_sym__regular_string_literal_repeat1] = STATE(154),
        [anon_sym_SEMI] = ACTIONS(1165),
        [anon_sym_RBRACE] = ACTIONS(1165),
        [anon_sym_COMMA] = ACTIONS(1165),
        [sym__hexadecimal_escape_sequence] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(467),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(467),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(467),
        [anon_sym_BSLASH0] = ACTIONS(467),
        [anon_sym_BSLASHa] = ACTIONS(467),
        [anon_sym_BSLASHb] = ACTIONS(467),
        [anon_sym_BSLASHf] = ACTIONS(467),
        [anon_sym_BSLASHn] = ACTIONS(467),
        [anon_sym_BSLASHr] = ACTIONS(467),
        [anon_sym_BSLASHt] = ACTIONS(467),
        [anon_sym_BSLASHv] = ACTIONS(467),
        [anon_sym_DQUOTE] = ACTIONS(469),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1169),
        [sym_comment] = ACTIONS(101),
    },
    [341] = {
        [anon_sym_LBRACE] = ACTIONS(1171),
        [anon_sym_COMMA] = ACTIONS(1171),
        [anon_sym_LBRACK] = ACTIONS(1171),
        [anon_sym_GT] = ACTIONS(1171),
        [sym_identifier_name] = ACTIONS(1174),
        [sym_comment] = ACTIONS(101),
    },
    [342] = {
        [sym_parameter_list] = STATE(356),
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(372),
        [sym_type_parameter_list] = STATE(374),
        [anon_sym_SEMI] = ACTIONS(1177),
        [anon_sym_LBRACE] = ACTIONS(1181),
        [anon_sym_RBRACE] = ACTIONS(1184),
        [anon_sym_COLON] = ACTIONS(1187),
        [anon_sym_COMMA] = ACTIONS(1189),
        [anon_sym_LPAREN] = ACTIONS(1198),
        [anon_sym_RPAREN] = ACTIONS(1200),
        [sym_params_keyword] = ACTIONS(1206),
        [anon_sym_LBRACK] = ACTIONS(1210),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(1215),
        [anon_sym_DOT] = ACTIONS(1217),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(1221),
        [sym_comment] = ACTIONS(101),
    },
    [343] = {
        [ts_builtin_sym_end] = ACTIONS(1223),
        [anon_sym_namespace] = ACTIONS(1226),
        [anon_sym_RBRACE] = ACTIONS(1229),
        [anon_sym_class] = ACTIONS(1234),
        [anon_sym_unsafe] = ACTIONS(1234),
        [anon_sym_abstract] = ACTIONS(1234),
        [anon_sym_sealed] = ACTIONS(1234),
        [anon_sym_static] = ACTIONS(1234),
        [anon_sym_new] = ACTIONS(1234),
        [anon_sym_public] = ACTIONS(1234),
        [anon_sym_protected] = ACTIONS(1234),
        [anon_sym_internal] = ACTIONS(1234),
        [anon_sym_private] = ACTIONS(1234),
        [anon_sym_struct] = ACTIONS(1234),
        [anon_sym_enum] = ACTIONS(1234),
        [anon_sym_sbyte] = ACTIONS(1239),
        [anon_sym_byte] = ACTIONS(1239),
        [anon_sym_short] = ACTIONS(1239),
        [anon_sym_ushort] = ACTIONS(1239),
        [anon_sym_int] = ACTIONS(1239),
        [anon_sym_uint] = ACTIONS(1239),
        [anon_sym_long] = ACTIONS(1239),
        [anon_sym_ulong] = ACTIONS(1239),
        [anon_sym_char] = ACTIONS(1239),
        [anon_sym_delegate] = ACTIONS(1234),
        [anon_sym_LBRACK] = ACTIONS(1229),
        [sym_const_keyword] = ACTIONS(1239),
        [anon_sym_readonly] = ACTIONS(1239),
        [anon_sym_volatile] = ACTIONS(1239),
        [anon_sym_bool] = ACTIONS(1239),
        [anon_sym_decimal] = ACTIONS(1239),
        [anon_sym_double] = ACTIONS(1239),
        [anon_sym_float] = ACTIONS(1239),
        [anon_sym_object] = ACTIONS(1239),
        [anon_sym_string] = ACTIONS(1239),
        [sym_identifier_name] = ACTIONS(1242),
        [sym_comment] = ACTIONS(101),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(1245),
        [anon_sym_extern] = ACTIONS(1245),
        [anon_sym_using] = ACTIONS(1245),
        [anon_sym_namespace] = ACTIONS(1245),
        [anon_sym_class] = ACTIONS(1245),
        [anon_sym_unsafe] = ACTIONS(1245),
        [anon_sym_abstract] = ACTIONS(1245),
        [anon_sym_sealed] = ACTIONS(1245),
        [anon_sym_static] = ACTIONS(1245),
        [anon_sym_new] = ACTIONS(1245),
        [anon_sym_public] = ACTIONS(1245),
        [anon_sym_protected] = ACTIONS(1245),
        [anon_sym_internal] = ACTIONS(1245),
        [anon_sym_private] = ACTIONS(1245),
        [anon_sym_struct] = ACTIONS(1245),
        [anon_sym_enum] = ACTIONS(1245),
        [anon_sym_delegate] = ACTIONS(1245),
        [anon_sym_LBRACK] = ACTIONS(1245),
        [sym_comment] = ACTIONS(101),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(1248),
        [anon_sym_using] = ACTIONS(1248),
        [anon_sym_namespace] = ACTIONS(1248),
        [anon_sym_class] = ACTIONS(1248),
        [anon_sym_unsafe] = ACTIONS(1248),
        [anon_sym_abstract] = ACTIONS(1248),
        [anon_sym_sealed] = ACTIONS(1248),
        [anon_sym_static] = ACTIONS(1248),
        [anon_sym_new] = ACTIONS(1248),
        [anon_sym_public] = ACTIONS(1248),
        [anon_sym_protected] = ACTIONS(1248),
        [anon_sym_internal] = ACTIONS(1248),
        [anon_sym_private] = ACTIONS(1248),
        [anon_sym_struct] = ACTIONS(1248),
        [anon_sym_enum] = ACTIONS(1248),
        [anon_sym_delegate] = ACTIONS(1248),
        [anon_sym_LBRACK] = ACTIONS(1248),
        [sym_comment] = ACTIONS(101),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(1223),
        [anon_sym_namespace] = ACTIONS(1223),
        [anon_sym_RBRACE] = ACTIONS(1223),
        [anon_sym_class] = ACTIONS(1223),
        [anon_sym_unsafe] = ACTIONS(1223),
        [anon_sym_abstract] = ACTIONS(1223),
        [anon_sym_sealed] = ACTIONS(1223),
        [anon_sym_static] = ACTIONS(1223),
        [anon_sym_new] = ACTIONS(1223),
        [anon_sym_public] = ACTIONS(1223),
        [anon_sym_protected] = ACTIONS(1223),
        [anon_sym_internal] = ACTIONS(1223),
        [anon_sym_private] = ACTIONS(1223),
        [anon_sym_struct] = ACTIONS(1223),
        [anon_sym_enum] = ACTIONS(1223),
        [anon_sym_delegate] = ACTIONS(1223),
        [anon_sym_LBRACK] = ACTIONS(1223),
        [sym_comment] = ACTIONS(101),
    },
    [347] = {
        [anon_sym_class] = ACTIONS(1251),
        [sym_comment] = ACTIONS(101),
    },
    [348] = {
        [anon_sym_class] = ACTIONS(1253),
        [sym_comment] = ACTIONS(101),
    },
    [349] = {
        [anon_sym_struct] = ACTIONS(1256),
        [sym_comment] = ACTIONS(101),
    },
    [350] = {
        [anon_sym_struct] = ACTIONS(1258),
        [sym_comment] = ACTIONS(101),
    },
    [351] = {
        [aux_sym_enum_declaration_repeat1] = STATE(381),
        [anon_sym_RBRACE] = ACTIONS(1261),
        [anon_sym_COMMA] = ACTIONS(1265),
        [sym_comment] = ACTIONS(101),
    },
    [352] = {
        [anon_sym_enum] = ACTIONS(1269),
        [sym_comment] = ACTIONS(101),
    },
    [353] = {
        [anon_sym_LBRACE] = ACTIONS(1271),
        [sym_comment] = ACTIONS(101),
    },
    [354] = {
        [anon_sym_delegate] = ACTIONS(1273),
        [sym_comment] = ACTIONS(101),
    },
    [355] = {
        [sym_identifier_name] = ACTIONS(1275),
        [sym_comment] = ACTIONS(101),
    },
    [356] = {
        [anon_sym_SEMI] = ACTIONS(1277),
        [sym_comment] = ACTIONS(101),
    },
    [357] = {
        [sym_parameter_array] = STATE(112),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1279),
        [anon_sym_RPAREN] = ACTIONS(1283),
        [sym_params_keyword] = ACTIONS(1287),
        [anon_sym_LBRACK] = ACTIONS(1291),
        [sym_comment] = ACTIONS(101),
    },
    [358] = {
        [sym__type] = STATE(406),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [359] = {
        [anon_sym_RPAREN] = ACTIONS(1295),
        [sym_comment] = ACTIONS(101),
    },
    [360] = {
        [sym_identifier_name] = ACTIONS(1299),
        [sym_comment] = ACTIONS(101),
    },
    [361] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_parameter_modifier] = STATE(85),
        [sym_field_modifiers] = STATE(222),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(218),
        [sym__type] = STATE(403),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(649),
        [anon_sym_enum] = ACTIONS(651),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(653),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [sym_params_keyword] = ACTIONS(315),
        [sym_const_keyword] = ACTIONS(655),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1301),
        [sym_comment] = ACTIONS(101),
    },
    [362] = {
        [anon_sym_class] = ACTIONS(1303),
        [anon_sym_unsafe] = ACTIONS(1303),
        [anon_sym_abstract] = ACTIONS(1303),
        [anon_sym_sealed] = ACTIONS(1303),
        [anon_sym_static] = ACTIONS(1303),
        [anon_sym_new] = ACTIONS(1303),
        [anon_sym_public] = ACTIONS(1303),
        [anon_sym_protected] = ACTIONS(1303),
        [anon_sym_internal] = ACTIONS(1303),
        [anon_sym_private] = ACTIONS(1303),
        [anon_sym_struct] = ACTIONS(1303),
        [anon_sym_enum] = ACTIONS(1303),
        [anon_sym_sbyte] = ACTIONS(1303),
        [anon_sym_byte] = ACTIONS(1303),
        [anon_sym_short] = ACTIONS(1303),
        [anon_sym_ushort] = ACTIONS(1303),
        [anon_sym_int] = ACTIONS(1303),
        [anon_sym_uint] = ACTIONS(1303),
        [anon_sym_long] = ACTIONS(1303),
        [anon_sym_ulong] = ACTIONS(1303),
        [anon_sym_char] = ACTIONS(1303),
        [anon_sym_delegate] = ACTIONS(1303),
        [anon_sym_ref] = ACTIONS(1303),
        [anon_sym_out] = ACTIONS(1303),
        [anon_sym_this] = ACTIONS(1303),
        [sym_params_keyword] = ACTIONS(1303),
        [anon_sym_LBRACK] = ACTIONS(1306),
        [sym_const_keyword] = ACTIONS(1303),
        [anon_sym_readonly] = ACTIONS(1303),
        [anon_sym_volatile] = ACTIONS(1303),
        [anon_sym_bool] = ACTIONS(1303),
        [anon_sym_decimal] = ACTIONS(1303),
        [anon_sym_double] = ACTIONS(1303),
        [anon_sym_float] = ACTIONS(1303),
        [anon_sym_object] = ACTIONS(1303),
        [anon_sym_string] = ACTIONS(1303),
        [sym_identifier_name] = ACTIONS(1309),
        [sym_comment] = ACTIONS(101),
    },
    [363] = {
        [anon_sym_RBRACK] = ACTIONS(1312),
        [sym_comment] = ACTIONS(101),
    },
    [364] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(1314),
        [anon_sym_RBRACK] = ACTIONS(1318),
        [sym_comment] = ACTIONS(101),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(1322),
        [anon_sym_namespace] = ACTIONS(1322),
        [anon_sym_class] = ACTIONS(1322),
        [anon_sym_unsafe] = ACTIONS(1322),
        [anon_sym_abstract] = ACTIONS(1322),
        [anon_sym_sealed] = ACTIONS(1322),
        [anon_sym_static] = ACTIONS(1322),
        [anon_sym_new] = ACTIONS(1322),
        [anon_sym_public] = ACTIONS(1322),
        [anon_sym_protected] = ACTIONS(1322),
        [anon_sym_internal] = ACTIONS(1322),
        [anon_sym_private] = ACTIONS(1322),
        [anon_sym_struct] = ACTIONS(1322),
        [anon_sym_enum] = ACTIONS(1322),
        [anon_sym_delegate] = ACTIONS(1322),
        [anon_sym_LBRACK] = ACTIONS(1322),
        [sym_comment] = ACTIONS(101),
    },
    [366] = {
        [anon_sym_RBRACE] = ACTIONS(1325),
        [anon_sym_class] = ACTIONS(1239),
        [anon_sym_unsafe] = ACTIONS(1239),
        [anon_sym_abstract] = ACTIONS(1239),
        [anon_sym_sealed] = ACTIONS(1239),
        [anon_sym_static] = ACTIONS(1239),
        [anon_sym_new] = ACTIONS(1239),
        [anon_sym_public] = ACTIONS(1239),
        [anon_sym_protected] = ACTIONS(1239),
        [anon_sym_internal] = ACTIONS(1239),
        [anon_sym_private] = ACTIONS(1239),
        [anon_sym_struct] = ACTIONS(1239),
        [anon_sym_enum] = ACTIONS(1239),
        [anon_sym_sbyte] = ACTIONS(1239),
        [anon_sym_byte] = ACTIONS(1239),
        [anon_sym_short] = ACTIONS(1239),
        [anon_sym_ushort] = ACTIONS(1239),
        [anon_sym_int] = ACTIONS(1239),
        [anon_sym_uint] = ACTIONS(1239),
        [anon_sym_long] = ACTIONS(1239),
        [anon_sym_ulong] = ACTIONS(1239),
        [anon_sym_char] = ACTIONS(1239),
        [anon_sym_delegate] = ACTIONS(1239),
        [anon_sym_LBRACK] = ACTIONS(1325),
        [sym_const_keyword] = ACTIONS(1239),
        [anon_sym_readonly] = ACTIONS(1239),
        [anon_sym_volatile] = ACTIONS(1239),
        [anon_sym_bool] = ACTIONS(1239),
        [anon_sym_decimal] = ACTIONS(1239),
        [anon_sym_double] = ACTIONS(1239),
        [anon_sym_float] = ACTIONS(1239),
        [anon_sym_object] = ACTIONS(1239),
        [anon_sym_string] = ACTIONS(1239),
        [sym_identifier_name] = ACTIONS(1242),
        [sym_comment] = ACTIONS(101),
    },
    [367] = {
        [sym_variable_declaration] = STATE(397),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_const_keyword] = ACTIONS(1328),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [368] = {
        [anon_sym_sbyte] = ACTIONS(1330),
        [anon_sym_byte] = ACTIONS(1330),
        [anon_sym_short] = ACTIONS(1330),
        [anon_sym_ushort] = ACTIONS(1330),
        [anon_sym_int] = ACTIONS(1330),
        [anon_sym_uint] = ACTIONS(1330),
        [anon_sym_long] = ACTIONS(1330),
        [anon_sym_ulong] = ACTIONS(1330),
        [anon_sym_char] = ACTIONS(1330),
        [sym_const_keyword] = ACTIONS(1330),
        [anon_sym_bool] = ACTIONS(1330),
        [anon_sym_decimal] = ACTIONS(1330),
        [anon_sym_double] = ACTIONS(1330),
        [anon_sym_float] = ACTIONS(1330),
        [anon_sym_object] = ACTIONS(1330),
        [anon_sym_string] = ACTIONS(1330),
        [sym_identifier_name] = ACTIONS(1333),
        [sym_comment] = ACTIONS(101),
    },
    [369] = {
        [anon_sym_SEMI] = ACTIONS(1336),
        [sym_comment] = ACTIONS(101),
    },
    [370] = {
        [sym_array_rank_specifier] = STATE(93),
        [sym_variable_declarator] = STATE(209),
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(331),
        [anon_sym_GT] = ACTIONS(357),
        [sym_identifier_name] = ACTIONS(1338),
        [sym_comment] = ACTIONS(101),
    },
    [371] = {
        [aux_sym_variable_declaration_repeat1] = STATE(211),
        [anon_sym_SEMI] = ACTIONS(1341),
        [anon_sym_COMMA] = ACTIONS(1345),
        [sym_comment] = ACTIONS(101),
    },
    [372] = {
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_RBRACE] = ACTIONS(1349),
        [anon_sym_COMMA] = ACTIONS(1352),
        [sym_comment] = ACTIONS(101),
    },
    [373] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1356),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1359),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1359),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1359),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1359),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1359),
        [anon_sym_BSLASH0] = ACTIONS(1359),
        [anon_sym_BSLASHa] = ACTIONS(1359),
        [anon_sym_BSLASHb] = ACTIONS(1359),
        [anon_sym_BSLASHf] = ACTIONS(1359),
        [anon_sym_BSLASHn] = ACTIONS(1359),
        [anon_sym_BSLASHr] = ACTIONS(1359),
        [anon_sym_BSLASHt] = ACTIONS(1359),
        [anon_sym_BSLASHv] = ACTIONS(1359),
        [anon_sym_DQUOTE] = ACTIONS(1359),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1356),
        [sym_comment] = ACTIONS(101),
    },
    [374] = {
        [anon_sym_LBRACE] = ACTIONS(1362),
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_GT] = ACTIONS(353),
        [sym_identifier_name] = ACTIONS(355),
        [sym_comment] = ACTIONS(101),
    },
    [375] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(1364),
        [anon_sym_GT] = ACTIONS(1368),
        [sym_comment] = ACTIONS(101),
    },
    [376] = {
        [anon_sym_SEMI] = ACTIONS(1372),
        [anon_sym_LBRACE] = ACTIONS(869),
        [anon_sym_DOT] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [377] = {
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
        [aux_sym_compilation_unit_repeat3] = STATE(386),
        [aux_sym_compilation_unit_repeat4] = STATE(387),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1374),
        [anon_sym_using] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
    },
    [378] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(385),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1377),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
    },
    [379] = {
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
        [ts_builtin_sym_end] = ACTIONS(1381),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [380] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1386),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [381] = {
        [anon_sym_RBRACE] = ACTIONS(1388),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(1390),
        [anon_sym_SEMI] = ACTIONS(1396),
        [anon_sym_namespace] = ACTIONS(1398),
        [anon_sym_RBRACE] = ACTIONS(1390),
        [anon_sym_class] = ACTIONS(1398),
        [anon_sym_unsafe] = ACTIONS(1398),
        [anon_sym_abstract] = ACTIONS(1398),
        [anon_sym_sealed] = ACTIONS(1398),
        [anon_sym_static] = ACTIONS(1398),
        [anon_sym_new] = ACTIONS(1398),
        [anon_sym_public] = ACTIONS(1398),
        [anon_sym_protected] = ACTIONS(1398),
        [anon_sym_internal] = ACTIONS(1398),
        [anon_sym_private] = ACTIONS(1398),
        [anon_sym_struct] = ACTIONS(1398),
        [anon_sym_enum] = ACTIONS(1398),
        [anon_sym_sbyte] = ACTIONS(1398),
        [anon_sym_byte] = ACTIONS(1398),
        [anon_sym_short] = ACTIONS(1398),
        [anon_sym_ushort] = ACTIONS(1398),
        [anon_sym_int] = ACTIONS(1398),
        [anon_sym_uint] = ACTIONS(1398),
        [anon_sym_long] = ACTIONS(1398),
        [anon_sym_ulong] = ACTIONS(1398),
        [anon_sym_char] = ACTIONS(1398),
        [anon_sym_delegate] = ACTIONS(1398),
        [anon_sym_LBRACK] = ACTIONS(1390),
        [sym_const_keyword] = ACTIONS(1398),
        [anon_sym_readonly] = ACTIONS(1398),
        [anon_sym_volatile] = ACTIONS(1398),
        [anon_sym_bool] = ACTIONS(1398),
        [anon_sym_decimal] = ACTIONS(1398),
        [anon_sym_double] = ACTIONS(1398),
        [anon_sym_float] = ACTIONS(1398),
        [anon_sym_object] = ACTIONS(1398),
        [anon_sym_string] = ACTIONS(1398),
        [sym_identifier_name] = ACTIONS(1404),
        [sym_comment] = ACTIONS(101),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(1410),
        [anon_sym_namespace] = ACTIONS(1416),
        [anon_sym_RBRACE] = ACTIONS(1410),
        [anon_sym_class] = ACTIONS(1416),
        [anon_sym_unsafe] = ACTIONS(1416),
        [anon_sym_abstract] = ACTIONS(1416),
        [anon_sym_sealed] = ACTIONS(1416),
        [anon_sym_static] = ACTIONS(1416),
        [anon_sym_new] = ACTIONS(1416),
        [anon_sym_public] = ACTIONS(1416),
        [anon_sym_protected] = ACTIONS(1416),
        [anon_sym_internal] = ACTIONS(1416),
        [anon_sym_private] = ACTIONS(1416),
        [anon_sym_struct] = ACTIONS(1416),
        [anon_sym_enum] = ACTIONS(1416),
        [anon_sym_sbyte] = ACTIONS(1416),
        [anon_sym_byte] = ACTIONS(1416),
        [anon_sym_short] = ACTIONS(1416),
        [anon_sym_ushort] = ACTIONS(1416),
        [anon_sym_int] = ACTIONS(1416),
        [anon_sym_uint] = ACTIONS(1416),
        [anon_sym_long] = ACTIONS(1416),
        [anon_sym_ulong] = ACTIONS(1416),
        [anon_sym_char] = ACTIONS(1416),
        [anon_sym_delegate] = ACTIONS(1416),
        [anon_sym_LBRACK] = ACTIONS(1410),
        [sym_const_keyword] = ACTIONS(1416),
        [anon_sym_readonly] = ACTIONS(1416),
        [anon_sym_volatile] = ACTIONS(1416),
        [anon_sym_bool] = ACTIONS(1416),
        [anon_sym_decimal] = ACTIONS(1416),
        [anon_sym_double] = ACTIONS(1416),
        [anon_sym_float] = ACTIONS(1416),
        [anon_sym_object] = ACTIONS(1416),
        [anon_sym_string] = ACTIONS(1416),
        [sym_identifier_name] = ACTIONS(1422),
        [sym_comment] = ACTIONS(101),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(1428),
        [anon_sym_namespace] = ACTIONS(1437),
        [anon_sym_RBRACE] = ACTIONS(1428),
        [anon_sym_class] = ACTIONS(1437),
        [anon_sym_unsafe] = ACTIONS(1437),
        [anon_sym_abstract] = ACTIONS(1437),
        [anon_sym_sealed] = ACTIONS(1437),
        [anon_sym_static] = ACTIONS(1437),
        [anon_sym_new] = ACTIONS(1437),
        [anon_sym_public] = ACTIONS(1437),
        [anon_sym_protected] = ACTIONS(1437),
        [anon_sym_internal] = ACTIONS(1437),
        [anon_sym_private] = ACTIONS(1437),
        [anon_sym_struct] = ACTIONS(1437),
        [anon_sym_enum] = ACTIONS(1437),
        [anon_sym_sbyte] = ACTIONS(1437),
        [anon_sym_byte] = ACTIONS(1437),
        [anon_sym_short] = ACTIONS(1437),
        [anon_sym_ushort] = ACTIONS(1437),
        [anon_sym_int] = ACTIONS(1437),
        [anon_sym_uint] = ACTIONS(1437),
        [anon_sym_long] = ACTIONS(1437),
        [anon_sym_ulong] = ACTIONS(1437),
        [anon_sym_char] = ACTIONS(1437),
        [anon_sym_delegate] = ACTIONS(1437),
        [anon_sym_LBRACK] = ACTIONS(1428),
        [sym_const_keyword] = ACTIONS(1437),
        [anon_sym_readonly] = ACTIONS(1437),
        [anon_sym_volatile] = ACTIONS(1437),
        [anon_sym_bool] = ACTIONS(1437),
        [anon_sym_decimal] = ACTIONS(1437),
        [anon_sym_double] = ACTIONS(1437),
        [anon_sym_float] = ACTIONS(1437),
        [anon_sym_object] = ACTIONS(1437),
        [anon_sym_string] = ACTIONS(1437),
        [sym_identifier_name] = ACTIONS(1446),
        [sym_comment] = ACTIONS(101),
    },
    [385] = {
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
        [ts_builtin_sym_end] = ACTIONS(1455),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [386] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(388),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1459),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(101),
    },
    [387] = {
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
        [ts_builtin_sym_end] = ACTIONS(1459),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [388] = {
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
        [ts_builtin_sym_end] = ACTIONS(1462),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_enum] = ACTIONS(121),
        [anon_sym_delegate] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(1465),
        [anon_sym_using] = ACTIONS(1465),
        [anon_sym_namespace] = ACTIONS(1465),
        [anon_sym_class] = ACTIONS(1465),
        [anon_sym_unsafe] = ACTIONS(1465),
        [anon_sym_abstract] = ACTIONS(1465),
        [anon_sym_sealed] = ACTIONS(1465),
        [anon_sym_static] = ACTIONS(1465),
        [anon_sym_new] = ACTIONS(1465),
        [anon_sym_public] = ACTIONS(1465),
        [anon_sym_protected] = ACTIONS(1465),
        [anon_sym_internal] = ACTIONS(1465),
        [anon_sym_private] = ACTIONS(1465),
        [anon_sym_struct] = ACTIONS(1465),
        [anon_sym_enum] = ACTIONS(1465),
        [anon_sym_delegate] = ACTIONS(1465),
        [anon_sym_LBRACK] = ACTIONS(1465),
        [sym_comment] = ACTIONS(101),
    },
    [390] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(392),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1468),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(1470),
        [anon_sym_namespace] = ACTIONS(1477),
        [anon_sym_RBRACE] = ACTIONS(1470),
        [anon_sym_class] = ACTIONS(1477),
        [anon_sym_unsafe] = ACTIONS(1477),
        [anon_sym_abstract] = ACTIONS(1477),
        [anon_sym_sealed] = ACTIONS(1477),
        [anon_sym_static] = ACTIONS(1477),
        [anon_sym_new] = ACTIONS(1477),
        [anon_sym_public] = ACTIONS(1477),
        [anon_sym_protected] = ACTIONS(1477),
        [anon_sym_internal] = ACTIONS(1477),
        [anon_sym_private] = ACTIONS(1477),
        [anon_sym_struct] = ACTIONS(1477),
        [anon_sym_enum] = ACTIONS(1477),
        [anon_sym_sbyte] = ACTIONS(1477),
        [anon_sym_byte] = ACTIONS(1477),
        [anon_sym_short] = ACTIONS(1477),
        [anon_sym_ushort] = ACTIONS(1477),
        [anon_sym_int] = ACTIONS(1477),
        [anon_sym_uint] = ACTIONS(1477),
        [anon_sym_long] = ACTIONS(1477),
        [anon_sym_ulong] = ACTIONS(1477),
        [anon_sym_char] = ACTIONS(1477),
        [anon_sym_delegate] = ACTIONS(1477),
        [anon_sym_LBRACK] = ACTIONS(1470),
        [sym_const_keyword] = ACTIONS(1477),
        [anon_sym_readonly] = ACTIONS(1477),
        [anon_sym_volatile] = ACTIONS(1477),
        [anon_sym_bool] = ACTIONS(1477),
        [anon_sym_decimal] = ACTIONS(1477),
        [anon_sym_double] = ACTIONS(1477),
        [anon_sym_float] = ACTIONS(1477),
        [anon_sym_object] = ACTIONS(1477),
        [anon_sym_string] = ACTIONS(1477),
        [sym_identifier_name] = ACTIONS(1484),
        [sym_comment] = ACTIONS(101),
    },
    [392] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1491),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [393] = {
        [ts_builtin_sym_end] = ACTIONS(1493),
        [anon_sym_namespace] = ACTIONS(1500),
        [anon_sym_RBRACE] = ACTIONS(1493),
        [anon_sym_class] = ACTIONS(1500),
        [anon_sym_unsafe] = ACTIONS(1500),
        [anon_sym_abstract] = ACTIONS(1500),
        [anon_sym_sealed] = ACTIONS(1500),
        [anon_sym_static] = ACTIONS(1500),
        [anon_sym_new] = ACTIONS(1500),
        [anon_sym_public] = ACTIONS(1500),
        [anon_sym_protected] = ACTIONS(1500),
        [anon_sym_internal] = ACTIONS(1500),
        [anon_sym_private] = ACTIONS(1500),
        [anon_sym_struct] = ACTIONS(1500),
        [anon_sym_enum] = ACTIONS(1500),
        [anon_sym_sbyte] = ACTIONS(1500),
        [anon_sym_byte] = ACTIONS(1500),
        [anon_sym_short] = ACTIONS(1500),
        [anon_sym_ushort] = ACTIONS(1500),
        [anon_sym_int] = ACTIONS(1500),
        [anon_sym_uint] = ACTIONS(1500),
        [anon_sym_long] = ACTIONS(1500),
        [anon_sym_ulong] = ACTIONS(1500),
        [anon_sym_char] = ACTIONS(1500),
        [anon_sym_delegate] = ACTIONS(1500),
        [anon_sym_LBRACK] = ACTIONS(1493),
        [sym_const_keyword] = ACTIONS(1500),
        [anon_sym_readonly] = ACTIONS(1500),
        [anon_sym_volatile] = ACTIONS(1500),
        [anon_sym_bool] = ACTIONS(1500),
        [anon_sym_decimal] = ACTIONS(1500),
        [anon_sym_double] = ACTIONS(1500),
        [anon_sym_float] = ACTIONS(1500),
        [anon_sym_object] = ACTIONS(1500),
        [anon_sym_string] = ACTIONS(1500),
        [sym_identifier_name] = ACTIONS(1507),
        [sym_comment] = ACTIONS(101),
    },
    [394] = {
        [sym_equals_value_clause] = STATE(215),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_COMMA] = ACTIONS(1514),
        [anon_sym_RPAREN] = ACTIONS(1519),
        [sym_params_keyword] = ACTIONS(1519),
        [anon_sym_LBRACK] = ACTIONS(1519),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [395] = {
        [anon_sym_RBRACE] = ACTIONS(1523),
        [anon_sym_class] = ACTIONS(1528),
        [anon_sym_unsafe] = ACTIONS(1528),
        [anon_sym_abstract] = ACTIONS(1528),
        [anon_sym_sealed] = ACTIONS(1528),
        [anon_sym_static] = ACTIONS(1528),
        [anon_sym_new] = ACTIONS(1528),
        [anon_sym_public] = ACTIONS(1528),
        [anon_sym_protected] = ACTIONS(1528),
        [anon_sym_internal] = ACTIONS(1528),
        [anon_sym_private] = ACTIONS(1528),
        [anon_sym_struct] = ACTIONS(1528),
        [anon_sym_enum] = ACTIONS(1528),
        [anon_sym_sbyte] = ACTIONS(1528),
        [anon_sym_byte] = ACTIONS(1528),
        [anon_sym_short] = ACTIONS(1528),
        [anon_sym_ushort] = ACTIONS(1528),
        [anon_sym_int] = ACTIONS(1528),
        [anon_sym_uint] = ACTIONS(1528),
        [anon_sym_long] = ACTIONS(1528),
        [anon_sym_ulong] = ACTIONS(1528),
        [anon_sym_char] = ACTIONS(1528),
        [anon_sym_delegate] = ACTIONS(1528),
        [anon_sym_LBRACK] = ACTIONS(1523),
        [sym_const_keyword] = ACTIONS(1528),
        [anon_sym_readonly] = ACTIONS(1528),
        [anon_sym_volatile] = ACTIONS(1528),
        [anon_sym_bool] = ACTIONS(1528),
        [anon_sym_decimal] = ACTIONS(1528),
        [anon_sym_double] = ACTIONS(1528),
        [anon_sym_float] = ACTIONS(1528),
        [anon_sym_object] = ACTIONS(1528),
        [anon_sym_string] = ACTIONS(1528),
        [sym_identifier_name] = ACTIONS(1533),
        [sym_comment] = ACTIONS(101),
    },
    [396] = {
        [sym_variable_declaration] = STATE(399),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [397] = {
        [anon_sym_SEMI] = ACTIONS(1538),
        [sym_comment] = ACTIONS(101),
    },
    [398] = {
        [anon_sym_RBRACE] = ACTIONS(1540),
        [anon_sym_class] = ACTIONS(1543),
        [anon_sym_unsafe] = ACTIONS(1543),
        [anon_sym_abstract] = ACTIONS(1543),
        [anon_sym_sealed] = ACTIONS(1543),
        [anon_sym_static] = ACTIONS(1543),
        [anon_sym_new] = ACTIONS(1543),
        [anon_sym_public] = ACTIONS(1543),
        [anon_sym_protected] = ACTIONS(1543),
        [anon_sym_internal] = ACTIONS(1543),
        [anon_sym_private] = ACTIONS(1543),
        [anon_sym_struct] = ACTIONS(1543),
        [anon_sym_enum] = ACTIONS(1543),
        [anon_sym_sbyte] = ACTIONS(1543),
        [anon_sym_byte] = ACTIONS(1543),
        [anon_sym_short] = ACTIONS(1543),
        [anon_sym_ushort] = ACTIONS(1543),
        [anon_sym_int] = ACTIONS(1543),
        [anon_sym_uint] = ACTIONS(1543),
        [anon_sym_long] = ACTIONS(1543),
        [anon_sym_ulong] = ACTIONS(1543),
        [anon_sym_char] = ACTIONS(1543),
        [anon_sym_delegate] = ACTIONS(1543),
        [anon_sym_LBRACK] = ACTIONS(1540),
        [sym_const_keyword] = ACTIONS(1543),
        [anon_sym_readonly] = ACTIONS(1543),
        [anon_sym_volatile] = ACTIONS(1543),
        [anon_sym_bool] = ACTIONS(1543),
        [anon_sym_decimal] = ACTIONS(1543),
        [anon_sym_double] = ACTIONS(1543),
        [anon_sym_float] = ACTIONS(1543),
        [anon_sym_object] = ACTIONS(1543),
        [anon_sym_string] = ACTIONS(1543),
        [sym_identifier_name] = ACTIONS(1546),
        [sym_comment] = ACTIONS(101),
    },
    [399] = {
        [anon_sym_SEMI] = ACTIONS(1549),
        [sym_comment] = ACTIONS(101),
    },
    [400] = {
        [anon_sym_RBRACE] = ACTIONS(1551),
        [anon_sym_class] = ACTIONS(1554),
        [anon_sym_unsafe] = ACTIONS(1554),
        [anon_sym_abstract] = ACTIONS(1554),
        [anon_sym_sealed] = ACTIONS(1554),
        [anon_sym_static] = ACTIONS(1554),
        [anon_sym_new] = ACTIONS(1554),
        [anon_sym_public] = ACTIONS(1554),
        [anon_sym_protected] = ACTIONS(1554),
        [anon_sym_internal] = ACTIONS(1554),
        [anon_sym_private] = ACTIONS(1554),
        [anon_sym_struct] = ACTIONS(1554),
        [anon_sym_enum] = ACTIONS(1554),
        [anon_sym_sbyte] = ACTIONS(1554),
        [anon_sym_byte] = ACTIONS(1554),
        [anon_sym_short] = ACTIONS(1554),
        [anon_sym_ushort] = ACTIONS(1554),
        [anon_sym_int] = ACTIONS(1554),
        [anon_sym_uint] = ACTIONS(1554),
        [anon_sym_long] = ACTIONS(1554),
        [anon_sym_ulong] = ACTIONS(1554),
        [anon_sym_char] = ACTIONS(1554),
        [anon_sym_delegate] = ACTIONS(1554),
        [anon_sym_LBRACK] = ACTIONS(1551),
        [sym_const_keyword] = ACTIONS(1554),
        [anon_sym_readonly] = ACTIONS(1554),
        [anon_sym_volatile] = ACTIONS(1554),
        [anon_sym_bool] = ACTIONS(1554),
        [anon_sym_decimal] = ACTIONS(1554),
        [anon_sym_double] = ACTIONS(1554),
        [anon_sym_float] = ACTIONS(1554),
        [anon_sym_object] = ACTIONS(1554),
        [anon_sym_string] = ACTIONS(1554),
        [sym_identifier_name] = ACTIONS(1557),
        [sym_comment] = ACTIONS(101),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_namespace] = ACTIONS(1124),
        [anon_sym_class] = ACTIONS(1126),
        [anon_sym_unsafe] = ACTIONS(1126),
        [anon_sym_abstract] = ACTIONS(1126),
        [anon_sym_sealed] = ACTIONS(1126),
        [anon_sym_static] = ACTIONS(1126),
        [anon_sym_new] = ACTIONS(1126),
        [anon_sym_public] = ACTIONS(1126),
        [anon_sym_protected] = ACTIONS(1126),
        [anon_sym_internal] = ACTIONS(1126),
        [anon_sym_private] = ACTIONS(1126),
        [anon_sym_struct] = ACTIONS(1126),
        [anon_sym_enum] = ACTIONS(1126),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(1126),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(1129),
        [sym_const_keyword] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(235),
        [sym_comment] = ACTIONS(101),
    },
    [402] = {
        [sym_equals_value_clause] = STATE(135),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_EQ] = ACTIONS(413),
        [anon_sym_LT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [403] = {
        [sym_variable_declarator] = STATE(209),
        [sym_identifier_name] = ACTIONS(1560),
        [sym_comment] = ACTIONS(101),
    },
    [404] = {
        [sym_equals_value_clause] = STATE(215),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_COMMA] = ACTIONS(1562),
        [anon_sym_RPAREN] = ACTIONS(323),
        [sym_params_keyword] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [405] = {
        [anon_sym_RPAREN] = ACTIONS(1565),
        [sym_comment] = ACTIONS(101),
    },
    [406] = {
        [sym_identifier_name] = ACTIONS(1568),
        [sym_comment] = ACTIONS(101),
    },
    [407] = {
        [anon_sym_COMMA] = ACTIONS(1570),
        [anon_sym_RPAREN] = ACTIONS(1570),
        [sym_params_keyword] = ACTIONS(1570),
        [anon_sym_LBRACK] = ACTIONS(1570),
        [sym_comment] = ACTIONS(101),
    },
    [408] = {
        [ts_builtin_sym_end] = ACTIONS(1573),
        [anon_sym_namespace] = ACTIONS(1577),
        [anon_sym_RBRACE] = ACTIONS(1573),
        [anon_sym_class] = ACTIONS(1577),
        [anon_sym_unsafe] = ACTIONS(1577),
        [anon_sym_abstract] = ACTIONS(1577),
        [anon_sym_sealed] = ACTIONS(1577),
        [anon_sym_static] = ACTIONS(1577),
        [anon_sym_new] = ACTIONS(1577),
        [anon_sym_public] = ACTIONS(1577),
        [anon_sym_protected] = ACTIONS(1577),
        [anon_sym_internal] = ACTIONS(1577),
        [anon_sym_private] = ACTIONS(1577),
        [anon_sym_struct] = ACTIONS(1577),
        [anon_sym_enum] = ACTIONS(1577),
        [anon_sym_sbyte] = ACTIONS(1577),
        [anon_sym_byte] = ACTIONS(1577),
        [anon_sym_short] = ACTIONS(1577),
        [anon_sym_ushort] = ACTIONS(1577),
        [anon_sym_int] = ACTIONS(1577),
        [anon_sym_uint] = ACTIONS(1577),
        [anon_sym_long] = ACTIONS(1577),
        [anon_sym_ulong] = ACTIONS(1577),
        [anon_sym_char] = ACTIONS(1577),
        [anon_sym_delegate] = ACTIONS(1577),
        [anon_sym_LBRACK] = ACTIONS(1573),
        [sym_const_keyword] = ACTIONS(1577),
        [anon_sym_readonly] = ACTIONS(1577),
        [anon_sym_volatile] = ACTIONS(1577),
        [anon_sym_bool] = ACTIONS(1577),
        [anon_sym_decimal] = ACTIONS(1577),
        [anon_sym_double] = ACTIONS(1577),
        [anon_sym_float] = ACTIONS(1577),
        [anon_sym_object] = ACTIONS(1577),
        [anon_sym_string] = ACTIONS(1577),
        [sym_identifier_name] = ACTIONS(1581),
        [sym_comment] = ACTIONS(101),
    },
    [409] = {
        [sym_parameter_list] = STATE(356),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [410] = {
        [sym__return_type] = STATE(411),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [sym_void_keyword] = ACTIONS(155),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [411] = {
        [sym_identifier_name] = ACTIONS(1585),
        [sym_comment] = ACTIONS(101),
    },
    [412] = {
        [sym_parameter_list] = STATE(413),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [413] = {
        [anon_sym_SEMI] = ACTIONS(1587),
        [sym_comment] = ACTIONS(101),
    },
    [414] = {
        [ts_builtin_sym_end] = ACTIONS(1589),
        [anon_sym_namespace] = ACTIONS(1592),
        [anon_sym_RBRACE] = ACTIONS(1589),
        [anon_sym_class] = ACTIONS(1592),
        [anon_sym_unsafe] = ACTIONS(1592),
        [anon_sym_abstract] = ACTIONS(1592),
        [anon_sym_sealed] = ACTIONS(1592),
        [anon_sym_static] = ACTIONS(1592),
        [anon_sym_new] = ACTIONS(1592),
        [anon_sym_public] = ACTIONS(1592),
        [anon_sym_protected] = ACTIONS(1592),
        [anon_sym_internal] = ACTIONS(1592),
        [anon_sym_private] = ACTIONS(1592),
        [anon_sym_struct] = ACTIONS(1592),
        [anon_sym_enum] = ACTIONS(1592),
        [anon_sym_sbyte] = ACTIONS(1592),
        [anon_sym_byte] = ACTIONS(1592),
        [anon_sym_short] = ACTIONS(1592),
        [anon_sym_ushort] = ACTIONS(1592),
        [anon_sym_int] = ACTIONS(1592),
        [anon_sym_uint] = ACTIONS(1592),
        [anon_sym_long] = ACTIONS(1592),
        [anon_sym_ulong] = ACTIONS(1592),
        [anon_sym_char] = ACTIONS(1592),
        [anon_sym_delegate] = ACTIONS(1592),
        [anon_sym_LBRACK] = ACTIONS(1589),
        [sym_const_keyword] = ACTIONS(1592),
        [anon_sym_readonly] = ACTIONS(1592),
        [anon_sym_volatile] = ACTIONS(1592),
        [anon_sym_bool] = ACTIONS(1592),
        [anon_sym_decimal] = ACTIONS(1592),
        [anon_sym_double] = ACTIONS(1592),
        [anon_sym_float] = ACTIONS(1592),
        [anon_sym_object] = ACTIONS(1592),
        [anon_sym_string] = ACTIONS(1592),
        [sym_identifier_name] = ACTIONS(1595),
        [sym_comment] = ACTIONS(101),
    },
    [415] = {
        [sym_enum_member_declaration] = STATE(416),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [416] = {
        [aux_sym_enum_declaration_repeat1] = STATE(418),
        [anon_sym_RBRACE] = ACTIONS(1598),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [417] = {
        [ts_builtin_sym_end] = ACTIONS(1600),
        [anon_sym_SEMI] = ACTIONS(1604),
        [anon_sym_namespace] = ACTIONS(1606),
        [anon_sym_RBRACE] = ACTIONS(1600),
        [anon_sym_class] = ACTIONS(1606),
        [anon_sym_unsafe] = ACTIONS(1606),
        [anon_sym_abstract] = ACTIONS(1606),
        [anon_sym_sealed] = ACTIONS(1606),
        [anon_sym_static] = ACTIONS(1606),
        [anon_sym_new] = ACTIONS(1606),
        [anon_sym_public] = ACTIONS(1606),
        [anon_sym_protected] = ACTIONS(1606),
        [anon_sym_internal] = ACTIONS(1606),
        [anon_sym_private] = ACTIONS(1606),
        [anon_sym_struct] = ACTIONS(1606),
        [anon_sym_enum] = ACTIONS(1606),
        [anon_sym_sbyte] = ACTIONS(1606),
        [anon_sym_byte] = ACTIONS(1606),
        [anon_sym_short] = ACTIONS(1606),
        [anon_sym_ushort] = ACTIONS(1606),
        [anon_sym_int] = ACTIONS(1606),
        [anon_sym_uint] = ACTIONS(1606),
        [anon_sym_long] = ACTIONS(1606),
        [anon_sym_ulong] = ACTIONS(1606),
        [anon_sym_char] = ACTIONS(1606),
        [anon_sym_delegate] = ACTIONS(1606),
        [anon_sym_LBRACK] = ACTIONS(1600),
        [sym_const_keyword] = ACTIONS(1606),
        [anon_sym_readonly] = ACTIONS(1606),
        [anon_sym_volatile] = ACTIONS(1606),
        [anon_sym_bool] = ACTIONS(1606),
        [anon_sym_decimal] = ACTIONS(1606),
        [anon_sym_double] = ACTIONS(1606),
        [anon_sym_float] = ACTIONS(1606),
        [anon_sym_object] = ACTIONS(1606),
        [anon_sym_string] = ACTIONS(1606),
        [sym_identifier_name] = ACTIONS(1610),
        [sym_comment] = ACTIONS(101),
    },
    [418] = {
        [anon_sym_RBRACE] = ACTIONS(1614),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [419] = {
        [ts_builtin_sym_end] = ACTIONS(1616),
        [anon_sym_SEMI] = ACTIONS(1620),
        [anon_sym_namespace] = ACTIONS(1622),
        [anon_sym_RBRACE] = ACTIONS(1616),
        [anon_sym_class] = ACTIONS(1622),
        [anon_sym_unsafe] = ACTIONS(1622),
        [anon_sym_abstract] = ACTIONS(1622),
        [anon_sym_sealed] = ACTIONS(1622),
        [anon_sym_static] = ACTIONS(1622),
        [anon_sym_new] = ACTIONS(1622),
        [anon_sym_public] = ACTIONS(1622),
        [anon_sym_protected] = ACTIONS(1622),
        [anon_sym_internal] = ACTIONS(1622),
        [anon_sym_private] = ACTIONS(1622),
        [anon_sym_struct] = ACTIONS(1622),
        [anon_sym_enum] = ACTIONS(1622),
        [anon_sym_sbyte] = ACTIONS(1622),
        [anon_sym_byte] = ACTIONS(1622),
        [anon_sym_short] = ACTIONS(1622),
        [anon_sym_ushort] = ACTIONS(1622),
        [anon_sym_int] = ACTIONS(1622),
        [anon_sym_uint] = ACTIONS(1622),
        [anon_sym_long] = ACTIONS(1622),
        [anon_sym_ulong] = ACTIONS(1622),
        [anon_sym_char] = ACTIONS(1622),
        [anon_sym_delegate] = ACTIONS(1622),
        [anon_sym_LBRACK] = ACTIONS(1616),
        [sym_const_keyword] = ACTIONS(1622),
        [anon_sym_readonly] = ACTIONS(1622),
        [anon_sym_volatile] = ACTIONS(1622),
        [anon_sym_bool] = ACTIONS(1622),
        [anon_sym_decimal] = ACTIONS(1622),
        [anon_sym_double] = ACTIONS(1622),
        [anon_sym_float] = ACTIONS(1622),
        [anon_sym_object] = ACTIONS(1622),
        [anon_sym_string] = ACTIONS(1622),
        [sym_identifier_name] = ACTIONS(1626),
        [sym_comment] = ACTIONS(101),
    },
    [420] = {
        [ts_builtin_sym_end] = ACTIONS(1630),
        [anon_sym_namespace] = ACTIONS(1634),
        [anon_sym_RBRACE] = ACTIONS(1630),
        [anon_sym_class] = ACTIONS(1634),
        [anon_sym_unsafe] = ACTIONS(1634),
        [anon_sym_abstract] = ACTIONS(1634),
        [anon_sym_sealed] = ACTIONS(1634),
        [anon_sym_static] = ACTIONS(1634),
        [anon_sym_new] = ACTIONS(1634),
        [anon_sym_public] = ACTIONS(1634),
        [anon_sym_protected] = ACTIONS(1634),
        [anon_sym_internal] = ACTIONS(1634),
        [anon_sym_private] = ACTIONS(1634),
        [anon_sym_struct] = ACTIONS(1634),
        [anon_sym_enum] = ACTIONS(1634),
        [anon_sym_sbyte] = ACTIONS(1634),
        [anon_sym_byte] = ACTIONS(1634),
        [anon_sym_short] = ACTIONS(1634),
        [anon_sym_ushort] = ACTIONS(1634),
        [anon_sym_int] = ACTIONS(1634),
        [anon_sym_uint] = ACTIONS(1634),
        [anon_sym_long] = ACTIONS(1634),
        [anon_sym_ulong] = ACTIONS(1634),
        [anon_sym_char] = ACTIONS(1634),
        [anon_sym_delegate] = ACTIONS(1634),
        [anon_sym_LBRACK] = ACTIONS(1630),
        [sym_const_keyword] = ACTIONS(1634),
        [anon_sym_readonly] = ACTIONS(1634),
        [anon_sym_volatile] = ACTIONS(1634),
        [anon_sym_bool] = ACTIONS(1634),
        [anon_sym_decimal] = ACTIONS(1634),
        [anon_sym_double] = ACTIONS(1634),
        [anon_sym_float] = ACTIONS(1634),
        [anon_sym_object] = ACTIONS(1634),
        [anon_sym_string] = ACTIONS(1634),
        [sym_identifier_name] = ACTIONS(1638),
        [sym_comment] = ACTIONS(101),
    },
    [421] = {
        [ts_builtin_sym_end] = ACTIONS(1616),
        [anon_sym_namespace] = ACTIONS(1622),
        [anon_sym_RBRACE] = ACTIONS(1616),
        [anon_sym_class] = ACTIONS(1622),
        [anon_sym_unsafe] = ACTIONS(1622),
        [anon_sym_abstract] = ACTIONS(1622),
        [anon_sym_sealed] = ACTIONS(1622),
        [anon_sym_static] = ACTIONS(1622),
        [anon_sym_new] = ACTIONS(1622),
        [anon_sym_public] = ACTIONS(1622),
        [anon_sym_protected] = ACTIONS(1622),
        [anon_sym_internal] = ACTIONS(1622),
        [anon_sym_private] = ACTIONS(1622),
        [anon_sym_struct] = ACTIONS(1622),
        [anon_sym_enum] = ACTIONS(1622),
        [anon_sym_sbyte] = ACTIONS(1622),
        [anon_sym_byte] = ACTIONS(1622),
        [anon_sym_short] = ACTIONS(1622),
        [anon_sym_ushort] = ACTIONS(1622),
        [anon_sym_int] = ACTIONS(1622),
        [anon_sym_uint] = ACTIONS(1622),
        [anon_sym_long] = ACTIONS(1622),
        [anon_sym_ulong] = ACTIONS(1622),
        [anon_sym_char] = ACTIONS(1622),
        [anon_sym_delegate] = ACTIONS(1622),
        [anon_sym_LBRACK] = ACTIONS(1616),
        [sym_const_keyword] = ACTIONS(1622),
        [anon_sym_readonly] = ACTIONS(1622),
        [anon_sym_volatile] = ACTIONS(1622),
        [anon_sym_bool] = ACTIONS(1622),
        [anon_sym_decimal] = ACTIONS(1622),
        [anon_sym_double] = ACTIONS(1622),
        [anon_sym_float] = ACTIONS(1622),
        [anon_sym_object] = ACTIONS(1622),
        [anon_sym_string] = ACTIONS(1622),
        [sym_identifier_name] = ACTIONS(1626),
        [sym_comment] = ACTIONS(101),
    },
    [422] = {
        [sym_identifier_name] = ACTIONS(1642),
        [sym_comment] = ACTIONS(101),
    },
    [423] = {
        [anon_sym_LBRACE] = ACTIONS(1644),
        [anon_sym_COLON] = ACTIONS(1646),
        [sym_comment] = ACTIONS(101),
    },
    [424] = {
        [sym_enum_member_declaration] = STATE(434),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [425] = {
        [sym__integral_type] = STATE(426),
        [anon_sym_sbyte] = ACTIONS(405),
        [anon_sym_byte] = ACTIONS(405),
        [anon_sym_short] = ACTIONS(405),
        [anon_sym_ushort] = ACTIONS(405),
        [anon_sym_int] = ACTIONS(405),
        [anon_sym_uint] = ACTIONS(405),
        [anon_sym_long] = ACTIONS(405),
        [anon_sym_ulong] = ACTIONS(405),
        [anon_sym_char] = ACTIONS(405),
        [sym_comment] = ACTIONS(101),
    },
    [426] = {
        [anon_sym_LBRACE] = ACTIONS(1648),
        [sym_comment] = ACTIONS(101),
    },
    [427] = {
        [sym_enum_member_declaration] = STATE(428),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [428] = {
        [aux_sym_enum_declaration_repeat1] = STATE(430),
        [anon_sym_RBRACE] = ACTIONS(1650),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [429] = {
        [ts_builtin_sym_end] = ACTIONS(1652),
        [anon_sym_SEMI] = ACTIONS(1655),
        [anon_sym_namespace] = ACTIONS(1657),
        [anon_sym_RBRACE] = ACTIONS(1652),
        [anon_sym_class] = ACTIONS(1657),
        [anon_sym_unsafe] = ACTIONS(1657),
        [anon_sym_abstract] = ACTIONS(1657),
        [anon_sym_sealed] = ACTIONS(1657),
        [anon_sym_static] = ACTIONS(1657),
        [anon_sym_new] = ACTIONS(1657),
        [anon_sym_public] = ACTIONS(1657),
        [anon_sym_protected] = ACTIONS(1657),
        [anon_sym_internal] = ACTIONS(1657),
        [anon_sym_private] = ACTIONS(1657),
        [anon_sym_struct] = ACTIONS(1657),
        [anon_sym_enum] = ACTIONS(1657),
        [anon_sym_sbyte] = ACTIONS(1657),
        [anon_sym_byte] = ACTIONS(1657),
        [anon_sym_short] = ACTIONS(1657),
        [anon_sym_ushort] = ACTIONS(1657),
        [anon_sym_int] = ACTIONS(1657),
        [anon_sym_uint] = ACTIONS(1657),
        [anon_sym_long] = ACTIONS(1657),
        [anon_sym_ulong] = ACTIONS(1657),
        [anon_sym_char] = ACTIONS(1657),
        [anon_sym_delegate] = ACTIONS(1657),
        [anon_sym_LBRACK] = ACTIONS(1652),
        [sym_const_keyword] = ACTIONS(1657),
        [anon_sym_readonly] = ACTIONS(1657),
        [anon_sym_volatile] = ACTIONS(1657),
        [anon_sym_bool] = ACTIONS(1657),
        [anon_sym_decimal] = ACTIONS(1657),
        [anon_sym_double] = ACTIONS(1657),
        [anon_sym_float] = ACTIONS(1657),
        [anon_sym_object] = ACTIONS(1657),
        [anon_sym_string] = ACTIONS(1657),
        [sym_identifier_name] = ACTIONS(1660),
        [sym_comment] = ACTIONS(101),
    },
    [430] = {
        [anon_sym_RBRACE] = ACTIONS(1663),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(1665),
        [anon_sym_SEMI] = ACTIONS(1668),
        [anon_sym_namespace] = ACTIONS(1670),
        [anon_sym_RBRACE] = ACTIONS(1665),
        [anon_sym_class] = ACTIONS(1670),
        [anon_sym_unsafe] = ACTIONS(1670),
        [anon_sym_abstract] = ACTIONS(1670),
        [anon_sym_sealed] = ACTIONS(1670),
        [anon_sym_static] = ACTIONS(1670),
        [anon_sym_new] = ACTIONS(1670),
        [anon_sym_public] = ACTIONS(1670),
        [anon_sym_protected] = ACTIONS(1670),
        [anon_sym_internal] = ACTIONS(1670),
        [anon_sym_private] = ACTIONS(1670),
        [anon_sym_struct] = ACTIONS(1670),
        [anon_sym_enum] = ACTIONS(1670),
        [anon_sym_sbyte] = ACTIONS(1670),
        [anon_sym_byte] = ACTIONS(1670),
        [anon_sym_short] = ACTIONS(1670),
        [anon_sym_ushort] = ACTIONS(1670),
        [anon_sym_int] = ACTIONS(1670),
        [anon_sym_uint] = ACTIONS(1670),
        [anon_sym_long] = ACTIONS(1670),
        [anon_sym_ulong] = ACTIONS(1670),
        [anon_sym_char] = ACTIONS(1670),
        [anon_sym_delegate] = ACTIONS(1670),
        [anon_sym_LBRACK] = ACTIONS(1665),
        [sym_const_keyword] = ACTIONS(1670),
        [anon_sym_readonly] = ACTIONS(1670),
        [anon_sym_volatile] = ACTIONS(1670),
        [anon_sym_bool] = ACTIONS(1670),
        [anon_sym_decimal] = ACTIONS(1670),
        [anon_sym_double] = ACTIONS(1670),
        [anon_sym_float] = ACTIONS(1670),
        [anon_sym_object] = ACTIONS(1670),
        [anon_sym_string] = ACTIONS(1670),
        [sym_identifier_name] = ACTIONS(1673),
        [sym_comment] = ACTIONS(101),
    },
    [432] = {
        [ts_builtin_sym_end] = ACTIONS(1676),
        [anon_sym_namespace] = ACTIONS(1679),
        [anon_sym_RBRACE] = ACTIONS(1676),
        [anon_sym_class] = ACTIONS(1679),
        [anon_sym_unsafe] = ACTIONS(1679),
        [anon_sym_abstract] = ACTIONS(1679),
        [anon_sym_sealed] = ACTIONS(1679),
        [anon_sym_static] = ACTIONS(1679),
        [anon_sym_new] = ACTIONS(1679),
        [anon_sym_public] = ACTIONS(1679),
        [anon_sym_protected] = ACTIONS(1679),
        [anon_sym_internal] = ACTIONS(1679),
        [anon_sym_private] = ACTIONS(1679),
        [anon_sym_struct] = ACTIONS(1679),
        [anon_sym_enum] = ACTIONS(1679),
        [anon_sym_sbyte] = ACTIONS(1679),
        [anon_sym_byte] = ACTIONS(1679),
        [anon_sym_short] = ACTIONS(1679),
        [anon_sym_ushort] = ACTIONS(1679),
        [anon_sym_int] = ACTIONS(1679),
        [anon_sym_uint] = ACTIONS(1679),
        [anon_sym_long] = ACTIONS(1679),
        [anon_sym_ulong] = ACTIONS(1679),
        [anon_sym_char] = ACTIONS(1679),
        [anon_sym_delegate] = ACTIONS(1679),
        [anon_sym_LBRACK] = ACTIONS(1676),
        [sym_const_keyword] = ACTIONS(1679),
        [anon_sym_readonly] = ACTIONS(1679),
        [anon_sym_volatile] = ACTIONS(1679),
        [anon_sym_bool] = ACTIONS(1679),
        [anon_sym_decimal] = ACTIONS(1679),
        [anon_sym_double] = ACTIONS(1679),
        [anon_sym_float] = ACTIONS(1679),
        [anon_sym_object] = ACTIONS(1679),
        [anon_sym_string] = ACTIONS(1679),
        [sym_identifier_name] = ACTIONS(1682),
        [sym_comment] = ACTIONS(101),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(1665),
        [anon_sym_namespace] = ACTIONS(1670),
        [anon_sym_RBRACE] = ACTIONS(1665),
        [anon_sym_class] = ACTIONS(1670),
        [anon_sym_unsafe] = ACTIONS(1670),
        [anon_sym_abstract] = ACTIONS(1670),
        [anon_sym_sealed] = ACTIONS(1670),
        [anon_sym_static] = ACTIONS(1670),
        [anon_sym_new] = ACTIONS(1670),
        [anon_sym_public] = ACTIONS(1670),
        [anon_sym_protected] = ACTIONS(1670),
        [anon_sym_internal] = ACTIONS(1670),
        [anon_sym_private] = ACTIONS(1670),
        [anon_sym_struct] = ACTIONS(1670),
        [anon_sym_enum] = ACTIONS(1670),
        [anon_sym_sbyte] = ACTIONS(1670),
        [anon_sym_byte] = ACTIONS(1670),
        [anon_sym_short] = ACTIONS(1670),
        [anon_sym_ushort] = ACTIONS(1670),
        [anon_sym_int] = ACTIONS(1670),
        [anon_sym_uint] = ACTIONS(1670),
        [anon_sym_long] = ACTIONS(1670),
        [anon_sym_ulong] = ACTIONS(1670),
        [anon_sym_char] = ACTIONS(1670),
        [anon_sym_delegate] = ACTIONS(1670),
        [anon_sym_LBRACK] = ACTIONS(1665),
        [sym_const_keyword] = ACTIONS(1670),
        [anon_sym_readonly] = ACTIONS(1670),
        [anon_sym_volatile] = ACTIONS(1670),
        [anon_sym_bool] = ACTIONS(1670),
        [anon_sym_decimal] = ACTIONS(1670),
        [anon_sym_double] = ACTIONS(1670),
        [anon_sym_float] = ACTIONS(1670),
        [anon_sym_object] = ACTIONS(1670),
        [anon_sym_string] = ACTIONS(1670),
        [sym_identifier_name] = ACTIONS(1673),
        [sym_comment] = ACTIONS(101),
    },
    [434] = {
        [aux_sym_enum_declaration_repeat1] = STATE(436),
        [anon_sym_RBRACE] = ACTIONS(1685),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(1687),
        [anon_sym_SEMI] = ACTIONS(1690),
        [anon_sym_namespace] = ACTIONS(1692),
        [anon_sym_RBRACE] = ACTIONS(1687),
        [anon_sym_class] = ACTIONS(1692),
        [anon_sym_unsafe] = ACTIONS(1692),
        [anon_sym_abstract] = ACTIONS(1692),
        [anon_sym_sealed] = ACTIONS(1692),
        [anon_sym_static] = ACTIONS(1692),
        [anon_sym_new] = ACTIONS(1692),
        [anon_sym_public] = ACTIONS(1692),
        [anon_sym_protected] = ACTIONS(1692),
        [anon_sym_internal] = ACTIONS(1692),
        [anon_sym_private] = ACTIONS(1692),
        [anon_sym_struct] = ACTIONS(1692),
        [anon_sym_enum] = ACTIONS(1692),
        [anon_sym_sbyte] = ACTIONS(1692),
        [anon_sym_byte] = ACTIONS(1692),
        [anon_sym_short] = ACTIONS(1692),
        [anon_sym_ushort] = ACTIONS(1692),
        [anon_sym_int] = ACTIONS(1692),
        [anon_sym_uint] = ACTIONS(1692),
        [anon_sym_long] = ACTIONS(1692),
        [anon_sym_ulong] = ACTIONS(1692),
        [anon_sym_char] = ACTIONS(1692),
        [anon_sym_delegate] = ACTIONS(1692),
        [anon_sym_LBRACK] = ACTIONS(1687),
        [sym_const_keyword] = ACTIONS(1692),
        [anon_sym_readonly] = ACTIONS(1692),
        [anon_sym_volatile] = ACTIONS(1692),
        [anon_sym_bool] = ACTIONS(1692),
        [anon_sym_decimal] = ACTIONS(1692),
        [anon_sym_double] = ACTIONS(1692),
        [anon_sym_float] = ACTIONS(1692),
        [anon_sym_object] = ACTIONS(1692),
        [anon_sym_string] = ACTIONS(1692),
        [sym_identifier_name] = ACTIONS(1695),
        [sym_comment] = ACTIONS(101),
    },
    [436] = {
        [anon_sym_RBRACE] = ACTIONS(1698),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(1700),
        [anon_sym_SEMI] = ACTIONS(1703),
        [anon_sym_namespace] = ACTIONS(1705),
        [anon_sym_RBRACE] = ACTIONS(1700),
        [anon_sym_class] = ACTIONS(1705),
        [anon_sym_unsafe] = ACTIONS(1705),
        [anon_sym_abstract] = ACTIONS(1705),
        [anon_sym_sealed] = ACTIONS(1705),
        [anon_sym_static] = ACTIONS(1705),
        [anon_sym_new] = ACTIONS(1705),
        [anon_sym_public] = ACTIONS(1705),
        [anon_sym_protected] = ACTIONS(1705),
        [anon_sym_internal] = ACTIONS(1705),
        [anon_sym_private] = ACTIONS(1705),
        [anon_sym_struct] = ACTIONS(1705),
        [anon_sym_enum] = ACTIONS(1705),
        [anon_sym_sbyte] = ACTIONS(1705),
        [anon_sym_byte] = ACTIONS(1705),
        [anon_sym_short] = ACTIONS(1705),
        [anon_sym_ushort] = ACTIONS(1705),
        [anon_sym_int] = ACTIONS(1705),
        [anon_sym_uint] = ACTIONS(1705),
        [anon_sym_long] = ACTIONS(1705),
        [anon_sym_ulong] = ACTIONS(1705),
        [anon_sym_char] = ACTIONS(1705),
        [anon_sym_delegate] = ACTIONS(1705),
        [anon_sym_LBRACK] = ACTIONS(1700),
        [sym_const_keyword] = ACTIONS(1705),
        [anon_sym_readonly] = ACTIONS(1705),
        [anon_sym_volatile] = ACTIONS(1705),
        [anon_sym_bool] = ACTIONS(1705),
        [anon_sym_decimal] = ACTIONS(1705),
        [anon_sym_double] = ACTIONS(1705),
        [anon_sym_float] = ACTIONS(1705),
        [anon_sym_object] = ACTIONS(1705),
        [anon_sym_string] = ACTIONS(1705),
        [sym_identifier_name] = ACTIONS(1708),
        [sym_comment] = ACTIONS(101),
    },
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(1652),
        [anon_sym_namespace] = ACTIONS(1657),
        [anon_sym_RBRACE] = ACTIONS(1652),
        [anon_sym_class] = ACTIONS(1657),
        [anon_sym_unsafe] = ACTIONS(1657),
        [anon_sym_abstract] = ACTIONS(1657),
        [anon_sym_sealed] = ACTIONS(1657),
        [anon_sym_static] = ACTIONS(1657),
        [anon_sym_new] = ACTIONS(1657),
        [anon_sym_public] = ACTIONS(1657),
        [anon_sym_protected] = ACTIONS(1657),
        [anon_sym_internal] = ACTIONS(1657),
        [anon_sym_private] = ACTIONS(1657),
        [anon_sym_struct] = ACTIONS(1657),
        [anon_sym_enum] = ACTIONS(1657),
        [anon_sym_sbyte] = ACTIONS(1657),
        [anon_sym_byte] = ACTIONS(1657),
        [anon_sym_short] = ACTIONS(1657),
        [anon_sym_ushort] = ACTIONS(1657),
        [anon_sym_int] = ACTIONS(1657),
        [anon_sym_uint] = ACTIONS(1657),
        [anon_sym_long] = ACTIONS(1657),
        [anon_sym_ulong] = ACTIONS(1657),
        [anon_sym_char] = ACTIONS(1657),
        [anon_sym_delegate] = ACTIONS(1657),
        [anon_sym_LBRACK] = ACTIONS(1652),
        [sym_const_keyword] = ACTIONS(1657),
        [anon_sym_readonly] = ACTIONS(1657),
        [anon_sym_volatile] = ACTIONS(1657),
        [anon_sym_bool] = ACTIONS(1657),
        [anon_sym_decimal] = ACTIONS(1657),
        [anon_sym_double] = ACTIONS(1657),
        [anon_sym_float] = ACTIONS(1657),
        [anon_sym_object] = ACTIONS(1657),
        [anon_sym_string] = ACTIONS(1657),
        [sym_identifier_name] = ACTIONS(1660),
        [sym_comment] = ACTIONS(101),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(1700),
        [anon_sym_namespace] = ACTIONS(1705),
        [anon_sym_RBRACE] = ACTIONS(1700),
        [anon_sym_class] = ACTIONS(1705),
        [anon_sym_unsafe] = ACTIONS(1705),
        [anon_sym_abstract] = ACTIONS(1705),
        [anon_sym_sealed] = ACTIONS(1705),
        [anon_sym_static] = ACTIONS(1705),
        [anon_sym_new] = ACTIONS(1705),
        [anon_sym_public] = ACTIONS(1705),
        [anon_sym_protected] = ACTIONS(1705),
        [anon_sym_internal] = ACTIONS(1705),
        [anon_sym_private] = ACTIONS(1705),
        [anon_sym_struct] = ACTIONS(1705),
        [anon_sym_enum] = ACTIONS(1705),
        [anon_sym_sbyte] = ACTIONS(1705),
        [anon_sym_byte] = ACTIONS(1705),
        [anon_sym_short] = ACTIONS(1705),
        [anon_sym_ushort] = ACTIONS(1705),
        [anon_sym_int] = ACTIONS(1705),
        [anon_sym_uint] = ACTIONS(1705),
        [anon_sym_long] = ACTIONS(1705),
        [anon_sym_ulong] = ACTIONS(1705),
        [anon_sym_char] = ACTIONS(1705),
        [anon_sym_delegate] = ACTIONS(1705),
        [anon_sym_LBRACK] = ACTIONS(1700),
        [sym_const_keyword] = ACTIONS(1705),
        [anon_sym_readonly] = ACTIONS(1705),
        [anon_sym_volatile] = ACTIONS(1705),
        [anon_sym_bool] = ACTIONS(1705),
        [anon_sym_decimal] = ACTIONS(1705),
        [anon_sym_double] = ACTIONS(1705),
        [anon_sym_float] = ACTIONS(1705),
        [anon_sym_object] = ACTIONS(1705),
        [anon_sym_string] = ACTIONS(1705),
        [sym_identifier_name] = ACTIONS(1708),
        [sym_comment] = ACTIONS(101),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(1711),
        [anon_sym_SEMI] = ACTIONS(1717),
        [anon_sym_namespace] = ACTIONS(1719),
        [anon_sym_RBRACE] = ACTIONS(1711),
        [anon_sym_class] = ACTIONS(1719),
        [anon_sym_unsafe] = ACTIONS(1719),
        [anon_sym_abstract] = ACTIONS(1719),
        [anon_sym_sealed] = ACTIONS(1719),
        [anon_sym_static] = ACTIONS(1719),
        [anon_sym_new] = ACTIONS(1719),
        [anon_sym_public] = ACTIONS(1719),
        [anon_sym_protected] = ACTIONS(1719),
        [anon_sym_internal] = ACTIONS(1719),
        [anon_sym_private] = ACTIONS(1719),
        [anon_sym_struct] = ACTIONS(1719),
        [anon_sym_enum] = ACTIONS(1719),
        [anon_sym_sbyte] = ACTIONS(1719),
        [anon_sym_byte] = ACTIONS(1719),
        [anon_sym_short] = ACTIONS(1719),
        [anon_sym_ushort] = ACTIONS(1719),
        [anon_sym_int] = ACTIONS(1719),
        [anon_sym_uint] = ACTIONS(1719),
        [anon_sym_long] = ACTIONS(1719),
        [anon_sym_ulong] = ACTIONS(1719),
        [anon_sym_char] = ACTIONS(1719),
        [anon_sym_delegate] = ACTIONS(1719),
        [anon_sym_LBRACK] = ACTIONS(1711),
        [sym_const_keyword] = ACTIONS(1719),
        [anon_sym_readonly] = ACTIONS(1719),
        [anon_sym_volatile] = ACTIONS(1719),
        [anon_sym_bool] = ACTIONS(1719),
        [anon_sym_decimal] = ACTIONS(1719),
        [anon_sym_double] = ACTIONS(1719),
        [anon_sym_float] = ACTIONS(1719),
        [anon_sym_object] = ACTIONS(1719),
        [anon_sym_string] = ACTIONS(1719),
        [sym_identifier_name] = ACTIONS(1725),
        [sym_comment] = ACTIONS(101),
    },
    [441] = {
        [ts_builtin_sym_end] = ACTIONS(1390),
        [anon_sym_namespace] = ACTIONS(1398),
        [anon_sym_RBRACE] = ACTIONS(1390),
        [anon_sym_class] = ACTIONS(1398),
        [anon_sym_unsafe] = ACTIONS(1398),
        [anon_sym_abstract] = ACTIONS(1398),
        [anon_sym_sealed] = ACTIONS(1398),
        [anon_sym_static] = ACTIONS(1398),
        [anon_sym_new] = ACTIONS(1398),
        [anon_sym_public] = ACTIONS(1398),
        [anon_sym_protected] = ACTIONS(1398),
        [anon_sym_internal] = ACTIONS(1398),
        [anon_sym_private] = ACTIONS(1398),
        [anon_sym_struct] = ACTIONS(1398),
        [anon_sym_enum] = ACTIONS(1398),
        [anon_sym_sbyte] = ACTIONS(1398),
        [anon_sym_byte] = ACTIONS(1398),
        [anon_sym_short] = ACTIONS(1398),
        [anon_sym_ushort] = ACTIONS(1398),
        [anon_sym_int] = ACTIONS(1398),
        [anon_sym_uint] = ACTIONS(1398),
        [anon_sym_long] = ACTIONS(1398),
        [anon_sym_ulong] = ACTIONS(1398),
        [anon_sym_char] = ACTIONS(1398),
        [anon_sym_delegate] = ACTIONS(1398),
        [anon_sym_LBRACK] = ACTIONS(1390),
        [sym_const_keyword] = ACTIONS(1398),
        [anon_sym_readonly] = ACTIONS(1398),
        [anon_sym_volatile] = ACTIONS(1398),
        [anon_sym_bool] = ACTIONS(1398),
        [anon_sym_decimal] = ACTIONS(1398),
        [anon_sym_double] = ACTIONS(1398),
        [anon_sym_float] = ACTIONS(1398),
        [anon_sym_object] = ACTIONS(1398),
        [anon_sym_string] = ACTIONS(1398),
        [sym_identifier_name] = ACTIONS(1404),
        [sym_comment] = ACTIONS(101),
    },
    [442] = {
        [sym_identifier_name] = ACTIONS(1731),
        [sym_comment] = ACTIONS(101),
    },
    [443] = {
        [sym_type_parameter_list] = STATE(445),
        [anon_sym_LBRACE] = ACTIONS(1733),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [444] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(451),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1735),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [445] = {
        [anon_sym_LBRACE] = ACTIONS(1737),
        [sym_comment] = ACTIONS(101),
    },
    [446] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(448),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1739),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [447] = {
        [ts_builtin_sym_end] = ACTIONS(1741),
        [anon_sym_namespace] = ACTIONS(1744),
        [anon_sym_RBRACE] = ACTIONS(1741),
        [anon_sym_class] = ACTIONS(1744),
        [anon_sym_unsafe] = ACTIONS(1744),
        [anon_sym_abstract] = ACTIONS(1744),
        [anon_sym_sealed] = ACTIONS(1744),
        [anon_sym_static] = ACTIONS(1744),
        [anon_sym_new] = ACTIONS(1744),
        [anon_sym_public] = ACTIONS(1744),
        [anon_sym_protected] = ACTIONS(1744),
        [anon_sym_internal] = ACTIONS(1744),
        [anon_sym_private] = ACTIONS(1744),
        [anon_sym_struct] = ACTIONS(1744),
        [anon_sym_enum] = ACTIONS(1744),
        [anon_sym_sbyte] = ACTIONS(1744),
        [anon_sym_byte] = ACTIONS(1744),
        [anon_sym_short] = ACTIONS(1744),
        [anon_sym_ushort] = ACTIONS(1744),
        [anon_sym_int] = ACTIONS(1744),
        [anon_sym_uint] = ACTIONS(1744),
        [anon_sym_long] = ACTIONS(1744),
        [anon_sym_ulong] = ACTIONS(1744),
        [anon_sym_char] = ACTIONS(1744),
        [anon_sym_delegate] = ACTIONS(1744),
        [anon_sym_LBRACK] = ACTIONS(1741),
        [sym_const_keyword] = ACTIONS(1744),
        [anon_sym_readonly] = ACTIONS(1744),
        [anon_sym_volatile] = ACTIONS(1744),
        [anon_sym_bool] = ACTIONS(1744),
        [anon_sym_decimal] = ACTIONS(1744),
        [anon_sym_double] = ACTIONS(1744),
        [anon_sym_float] = ACTIONS(1744),
        [anon_sym_object] = ACTIONS(1744),
        [anon_sym_string] = ACTIONS(1744),
        [sym_identifier_name] = ACTIONS(1747),
        [sym_comment] = ACTIONS(101),
    },
    [448] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1750),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [449] = {
        [ts_builtin_sym_end] = ACTIONS(1752),
        [anon_sym_namespace] = ACTIONS(1755),
        [anon_sym_RBRACE] = ACTIONS(1752),
        [anon_sym_class] = ACTIONS(1755),
        [anon_sym_unsafe] = ACTIONS(1755),
        [anon_sym_abstract] = ACTIONS(1755),
        [anon_sym_sealed] = ACTIONS(1755),
        [anon_sym_static] = ACTIONS(1755),
        [anon_sym_new] = ACTIONS(1755),
        [anon_sym_public] = ACTIONS(1755),
        [anon_sym_protected] = ACTIONS(1755),
        [anon_sym_internal] = ACTIONS(1755),
        [anon_sym_private] = ACTIONS(1755),
        [anon_sym_struct] = ACTIONS(1755),
        [anon_sym_enum] = ACTIONS(1755),
        [anon_sym_sbyte] = ACTIONS(1755),
        [anon_sym_byte] = ACTIONS(1755),
        [anon_sym_short] = ACTIONS(1755),
        [anon_sym_ushort] = ACTIONS(1755),
        [anon_sym_int] = ACTIONS(1755),
        [anon_sym_uint] = ACTIONS(1755),
        [anon_sym_long] = ACTIONS(1755),
        [anon_sym_ulong] = ACTIONS(1755),
        [anon_sym_char] = ACTIONS(1755),
        [anon_sym_delegate] = ACTIONS(1755),
        [anon_sym_LBRACK] = ACTIONS(1752),
        [sym_const_keyword] = ACTIONS(1755),
        [anon_sym_readonly] = ACTIONS(1755),
        [anon_sym_volatile] = ACTIONS(1755),
        [anon_sym_bool] = ACTIONS(1755),
        [anon_sym_decimal] = ACTIONS(1755),
        [anon_sym_double] = ACTIONS(1755),
        [anon_sym_float] = ACTIONS(1755),
        [anon_sym_object] = ACTIONS(1755),
        [anon_sym_string] = ACTIONS(1755),
        [sym_identifier_name] = ACTIONS(1758),
        [sym_comment] = ACTIONS(101),
    },
    [450] = {
        [ts_builtin_sym_end] = ACTIONS(1761),
        [anon_sym_namespace] = ACTIONS(1764),
        [anon_sym_RBRACE] = ACTIONS(1761),
        [anon_sym_class] = ACTIONS(1764),
        [anon_sym_unsafe] = ACTIONS(1764),
        [anon_sym_abstract] = ACTIONS(1764),
        [anon_sym_sealed] = ACTIONS(1764),
        [anon_sym_static] = ACTIONS(1764),
        [anon_sym_new] = ACTIONS(1764),
        [anon_sym_public] = ACTIONS(1764),
        [anon_sym_protected] = ACTIONS(1764),
        [anon_sym_internal] = ACTIONS(1764),
        [anon_sym_private] = ACTIONS(1764),
        [anon_sym_struct] = ACTIONS(1764),
        [anon_sym_enum] = ACTIONS(1764),
        [anon_sym_sbyte] = ACTIONS(1764),
        [anon_sym_byte] = ACTIONS(1764),
        [anon_sym_short] = ACTIONS(1764),
        [anon_sym_ushort] = ACTIONS(1764),
        [anon_sym_int] = ACTIONS(1764),
        [anon_sym_uint] = ACTIONS(1764),
        [anon_sym_long] = ACTIONS(1764),
        [anon_sym_ulong] = ACTIONS(1764),
        [anon_sym_char] = ACTIONS(1764),
        [anon_sym_delegate] = ACTIONS(1764),
        [anon_sym_LBRACK] = ACTIONS(1761),
        [sym_const_keyword] = ACTIONS(1764),
        [anon_sym_readonly] = ACTIONS(1764),
        [anon_sym_volatile] = ACTIONS(1764),
        [anon_sym_bool] = ACTIONS(1764),
        [anon_sym_decimal] = ACTIONS(1764),
        [anon_sym_double] = ACTIONS(1764),
        [anon_sym_float] = ACTIONS(1764),
        [anon_sym_object] = ACTIONS(1764),
        [anon_sym_string] = ACTIONS(1764),
        [sym_identifier_name] = ACTIONS(1767),
        [sym_comment] = ACTIONS(101),
    },
    [451] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1739),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [452] = {
        [sym_identifier_name] = ACTIONS(1770),
        [sym_comment] = ACTIONS(101),
    },
    [453] = {
        [sym_type_parameter_list] = STATE(455),
        [anon_sym_LBRACE] = ACTIONS(1772),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [454] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(461),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1774),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [455] = {
        [anon_sym_LBRACE] = ACTIONS(1776),
        [sym_comment] = ACTIONS(101),
    },
    [456] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(458),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1778),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [457] = {
        [ts_builtin_sym_end] = ACTIONS(1780),
        [anon_sym_namespace] = ACTIONS(1783),
        [anon_sym_RBRACE] = ACTIONS(1780),
        [anon_sym_class] = ACTIONS(1783),
        [anon_sym_unsafe] = ACTIONS(1783),
        [anon_sym_abstract] = ACTIONS(1783),
        [anon_sym_sealed] = ACTIONS(1783),
        [anon_sym_static] = ACTIONS(1783),
        [anon_sym_new] = ACTIONS(1783),
        [anon_sym_public] = ACTIONS(1783),
        [anon_sym_protected] = ACTIONS(1783),
        [anon_sym_internal] = ACTIONS(1783),
        [anon_sym_private] = ACTIONS(1783),
        [anon_sym_struct] = ACTIONS(1783),
        [anon_sym_enum] = ACTIONS(1783),
        [anon_sym_sbyte] = ACTIONS(1783),
        [anon_sym_byte] = ACTIONS(1783),
        [anon_sym_short] = ACTIONS(1783),
        [anon_sym_ushort] = ACTIONS(1783),
        [anon_sym_int] = ACTIONS(1783),
        [anon_sym_uint] = ACTIONS(1783),
        [anon_sym_long] = ACTIONS(1783),
        [anon_sym_ulong] = ACTIONS(1783),
        [anon_sym_char] = ACTIONS(1783),
        [anon_sym_delegate] = ACTIONS(1783),
        [anon_sym_LBRACK] = ACTIONS(1780),
        [sym_const_keyword] = ACTIONS(1783),
        [anon_sym_readonly] = ACTIONS(1783),
        [anon_sym_volatile] = ACTIONS(1783),
        [anon_sym_bool] = ACTIONS(1783),
        [anon_sym_decimal] = ACTIONS(1783),
        [anon_sym_double] = ACTIONS(1783),
        [anon_sym_float] = ACTIONS(1783),
        [anon_sym_object] = ACTIONS(1783),
        [anon_sym_string] = ACTIONS(1783),
        [sym_identifier_name] = ACTIONS(1786),
        [sym_comment] = ACTIONS(101),
    },
    [458] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1789),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [459] = {
        [ts_builtin_sym_end] = ACTIONS(1791),
        [anon_sym_namespace] = ACTIONS(1794),
        [anon_sym_RBRACE] = ACTIONS(1791),
        [anon_sym_class] = ACTIONS(1794),
        [anon_sym_unsafe] = ACTIONS(1794),
        [anon_sym_abstract] = ACTIONS(1794),
        [anon_sym_sealed] = ACTIONS(1794),
        [anon_sym_static] = ACTIONS(1794),
        [anon_sym_new] = ACTIONS(1794),
        [anon_sym_public] = ACTIONS(1794),
        [anon_sym_protected] = ACTIONS(1794),
        [anon_sym_internal] = ACTIONS(1794),
        [anon_sym_private] = ACTIONS(1794),
        [anon_sym_struct] = ACTIONS(1794),
        [anon_sym_enum] = ACTIONS(1794),
        [anon_sym_sbyte] = ACTIONS(1794),
        [anon_sym_byte] = ACTIONS(1794),
        [anon_sym_short] = ACTIONS(1794),
        [anon_sym_ushort] = ACTIONS(1794),
        [anon_sym_int] = ACTIONS(1794),
        [anon_sym_uint] = ACTIONS(1794),
        [anon_sym_long] = ACTIONS(1794),
        [anon_sym_ulong] = ACTIONS(1794),
        [anon_sym_char] = ACTIONS(1794),
        [anon_sym_delegate] = ACTIONS(1794),
        [anon_sym_LBRACK] = ACTIONS(1791),
        [sym_const_keyword] = ACTIONS(1794),
        [anon_sym_readonly] = ACTIONS(1794),
        [anon_sym_volatile] = ACTIONS(1794),
        [anon_sym_bool] = ACTIONS(1794),
        [anon_sym_decimal] = ACTIONS(1794),
        [anon_sym_double] = ACTIONS(1794),
        [anon_sym_float] = ACTIONS(1794),
        [anon_sym_object] = ACTIONS(1794),
        [anon_sym_string] = ACTIONS(1794),
        [sym_identifier_name] = ACTIONS(1797),
        [sym_comment] = ACTIONS(101),
    },
    [460] = {
        [ts_builtin_sym_end] = ACTIONS(1800),
        [anon_sym_namespace] = ACTIONS(1803),
        [anon_sym_RBRACE] = ACTIONS(1800),
        [anon_sym_class] = ACTIONS(1803),
        [anon_sym_unsafe] = ACTIONS(1803),
        [anon_sym_abstract] = ACTIONS(1803),
        [anon_sym_sealed] = ACTIONS(1803),
        [anon_sym_static] = ACTIONS(1803),
        [anon_sym_new] = ACTIONS(1803),
        [anon_sym_public] = ACTIONS(1803),
        [anon_sym_protected] = ACTIONS(1803),
        [anon_sym_internal] = ACTIONS(1803),
        [anon_sym_private] = ACTIONS(1803),
        [anon_sym_struct] = ACTIONS(1803),
        [anon_sym_enum] = ACTIONS(1803),
        [anon_sym_sbyte] = ACTIONS(1803),
        [anon_sym_byte] = ACTIONS(1803),
        [anon_sym_short] = ACTIONS(1803),
        [anon_sym_ushort] = ACTIONS(1803),
        [anon_sym_int] = ACTIONS(1803),
        [anon_sym_uint] = ACTIONS(1803),
        [anon_sym_long] = ACTIONS(1803),
        [anon_sym_ulong] = ACTIONS(1803),
        [anon_sym_char] = ACTIONS(1803),
        [anon_sym_delegate] = ACTIONS(1803),
        [anon_sym_LBRACK] = ACTIONS(1800),
        [sym_const_keyword] = ACTIONS(1803),
        [anon_sym_readonly] = ACTIONS(1803),
        [anon_sym_volatile] = ACTIONS(1803),
        [anon_sym_bool] = ACTIONS(1803),
        [anon_sym_decimal] = ACTIONS(1803),
        [anon_sym_double] = ACTIONS(1803),
        [anon_sym_float] = ACTIONS(1803),
        [anon_sym_object] = ACTIONS(1803),
        [anon_sym_string] = ACTIONS(1803),
        [sym_identifier_name] = ACTIONS(1806),
        [sym_comment] = ACTIONS(101),
    },
    [461] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1778),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [462] = {
        [ts_builtin_sym_end] = ACTIONS(1809),
        [anon_sym_extern] = ACTIONS(913),
        [anon_sym_using] = ACTIONS(1809),
        [anon_sym_namespace] = ACTIONS(1809),
        [anon_sym_class] = ACTIONS(1809),
        [anon_sym_unsafe] = ACTIONS(1809),
        [anon_sym_abstract] = ACTIONS(1809),
        [anon_sym_sealed] = ACTIONS(1809),
        [anon_sym_static] = ACTIONS(1809),
        [anon_sym_new] = ACTIONS(1809),
        [anon_sym_public] = ACTIONS(1809),
        [anon_sym_protected] = ACTIONS(1809),
        [anon_sym_internal] = ACTIONS(1809),
        [anon_sym_private] = ACTIONS(1809),
        [anon_sym_struct] = ACTIONS(1809),
        [anon_sym_enum] = ACTIONS(1809),
        [anon_sym_delegate] = ACTIONS(1809),
        [anon_sym_LBRACK] = ACTIONS(1809),
        [sym_comment] = ACTIONS(101),
    },
    [463] = {
        [sym__type_declaration] = STATE(467),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(468),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(469),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(301),
        [aux_sym_class_declaration_repeat1] = STATE(470),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1023),
        [anon_sym_RBRACE] = ACTIONS(1813),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1027),
        [sym_comment] = ACTIONS(101),
    },
    [464] = {
        [sym__integral_type] = STATE(353),
        [anon_sym_sbyte] = ACTIONS(405),
        [anon_sym_byte] = ACTIONS(405),
        [anon_sym_short] = ACTIONS(405),
        [anon_sym_ushort] = ACTIONS(405),
        [anon_sym_int] = ACTIONS(405),
        [anon_sym_uint] = ACTIONS(405),
        [anon_sym_long] = ACTIONS(405),
        [anon_sym_ulong] = ACTIONS(405),
        [anon_sym_char] = ACTIONS(405),
        [sym_comment] = ACTIONS(101),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(1815),
        [anon_sym_namespace] = ACTIONS(1823),
        [anon_sym_RBRACE] = ACTIONS(1815),
        [anon_sym_class] = ACTIONS(1823),
        [anon_sym_unsafe] = ACTIONS(1823),
        [anon_sym_abstract] = ACTIONS(1823),
        [anon_sym_sealed] = ACTIONS(1823),
        [anon_sym_static] = ACTIONS(1823),
        [anon_sym_new] = ACTIONS(1823),
        [anon_sym_public] = ACTIONS(1823),
        [anon_sym_protected] = ACTIONS(1823),
        [anon_sym_internal] = ACTIONS(1823),
        [anon_sym_private] = ACTIONS(1823),
        [anon_sym_struct] = ACTIONS(1823),
        [anon_sym_enum] = ACTIONS(1823),
        [anon_sym_sbyte] = ACTIONS(1831),
        [anon_sym_byte] = ACTIONS(1831),
        [anon_sym_short] = ACTIONS(1831),
        [anon_sym_ushort] = ACTIONS(1831),
        [anon_sym_int] = ACTIONS(1831),
        [anon_sym_uint] = ACTIONS(1831),
        [anon_sym_long] = ACTIONS(1831),
        [anon_sym_ulong] = ACTIONS(1831),
        [anon_sym_char] = ACTIONS(1831),
        [anon_sym_delegate] = ACTIONS(1823),
        [anon_sym_LBRACK] = ACTIONS(1815),
        [sym_const_keyword] = ACTIONS(1831),
        [anon_sym_readonly] = ACTIONS(1831),
        [anon_sym_volatile] = ACTIONS(1831),
        [anon_sym_bool] = ACTIONS(1831),
        [anon_sym_decimal] = ACTIONS(1831),
        [anon_sym_double] = ACTIONS(1831),
        [anon_sym_float] = ACTIONS(1831),
        [anon_sym_object] = ACTIONS(1831),
        [anon_sym_string] = ACTIONS(1831),
        [sym_identifier_name] = ACTIONS(1838),
        [sym_comment] = ACTIONS(101),
    },
    [466] = {
        [sym_equals_value_clause] = STATE(181),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_EQ] = ACTIONS(413),
        [anon_sym_LT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [467] = {
        [anon_sym_namespace] = ACTIONS(1845),
        [anon_sym_RBRACE] = ACTIONS(1847),
        [anon_sym_class] = ACTIONS(1850),
        [anon_sym_unsafe] = ACTIONS(1850),
        [anon_sym_abstract] = ACTIONS(1850),
        [anon_sym_sealed] = ACTIONS(1850),
        [anon_sym_static] = ACTIONS(1850),
        [anon_sym_new] = ACTIONS(1850),
        [anon_sym_public] = ACTIONS(1850),
        [anon_sym_protected] = ACTIONS(1850),
        [anon_sym_internal] = ACTIONS(1850),
        [anon_sym_private] = ACTIONS(1850),
        [anon_sym_struct] = ACTIONS(1850),
        [anon_sym_enum] = ACTIONS(1850),
        [anon_sym_sbyte] = ACTIONS(643),
        [anon_sym_byte] = ACTIONS(643),
        [anon_sym_short] = ACTIONS(643),
        [anon_sym_ushort] = ACTIONS(643),
        [anon_sym_int] = ACTIONS(643),
        [anon_sym_uint] = ACTIONS(643),
        [anon_sym_long] = ACTIONS(643),
        [anon_sym_ulong] = ACTIONS(643),
        [anon_sym_char] = ACTIONS(643),
        [anon_sym_delegate] = ACTIONS(1850),
        [anon_sym_LBRACK] = ACTIONS(1847),
        [sym_const_keyword] = ACTIONS(643),
        [anon_sym_readonly] = ACTIONS(643),
        [anon_sym_volatile] = ACTIONS(643),
        [anon_sym_bool] = ACTIONS(643),
        [anon_sym_decimal] = ACTIONS(643),
        [anon_sym_double] = ACTIONS(643),
        [anon_sym_float] = ACTIONS(643),
        [anon_sym_object] = ACTIONS(643),
        [anon_sym_string] = ACTIONS(643),
        [sym_identifier_name] = ACTIONS(645),
        [sym_comment] = ACTIONS(101),
    },
    [468] = {
        [aux_sym_enum_declaration_repeat1] = STATE(472),
        [anon_sym_RBRACE] = ACTIONS(1853),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [469] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(222),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(218),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(649),
        [anon_sym_enum] = ACTIONS(651),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(653),
        [sym_const_keyword] = ACTIONS(655),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1301),
        [sym_comment] = ACTIONS(101),
    },
    [470] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1468),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(1855),
        [anon_sym_SEMI] = ACTIONS(1859),
        [anon_sym_namespace] = ACTIONS(1861),
        [anon_sym_RBRACE] = ACTIONS(1855),
        [anon_sym_class] = ACTIONS(1861),
        [anon_sym_unsafe] = ACTIONS(1861),
        [anon_sym_abstract] = ACTIONS(1861),
        [anon_sym_sealed] = ACTIONS(1861),
        [anon_sym_static] = ACTIONS(1861),
        [anon_sym_new] = ACTIONS(1861),
        [anon_sym_public] = ACTIONS(1861),
        [anon_sym_protected] = ACTIONS(1861),
        [anon_sym_internal] = ACTIONS(1861),
        [anon_sym_private] = ACTIONS(1861),
        [anon_sym_struct] = ACTIONS(1861),
        [anon_sym_enum] = ACTIONS(1861),
        [anon_sym_sbyte] = ACTIONS(1861),
        [anon_sym_byte] = ACTIONS(1861),
        [anon_sym_short] = ACTIONS(1861),
        [anon_sym_ushort] = ACTIONS(1861),
        [anon_sym_int] = ACTIONS(1861),
        [anon_sym_uint] = ACTIONS(1861),
        [anon_sym_long] = ACTIONS(1861),
        [anon_sym_ulong] = ACTIONS(1861),
        [anon_sym_char] = ACTIONS(1861),
        [anon_sym_delegate] = ACTIONS(1861),
        [anon_sym_LBRACK] = ACTIONS(1855),
        [sym_const_keyword] = ACTIONS(1861),
        [anon_sym_readonly] = ACTIONS(1861),
        [anon_sym_volatile] = ACTIONS(1861),
        [anon_sym_bool] = ACTIONS(1861),
        [anon_sym_decimal] = ACTIONS(1861),
        [anon_sym_double] = ACTIONS(1861),
        [anon_sym_float] = ACTIONS(1861),
        [anon_sym_object] = ACTIONS(1861),
        [anon_sym_string] = ACTIONS(1861),
        [sym_identifier_name] = ACTIONS(1865),
        [sym_comment] = ACTIONS(101),
    },
    [472] = {
        [anon_sym_RBRACE] = ACTIONS(1869),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(101),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(1871),
        [anon_sym_SEMI] = ACTIONS(1875),
        [anon_sym_namespace] = ACTIONS(1877),
        [anon_sym_RBRACE] = ACTIONS(1871),
        [anon_sym_class] = ACTIONS(1877),
        [anon_sym_unsafe] = ACTIONS(1877),
        [anon_sym_abstract] = ACTIONS(1877),
        [anon_sym_sealed] = ACTIONS(1877),
        [anon_sym_static] = ACTIONS(1877),
        [anon_sym_new] = ACTIONS(1877),
        [anon_sym_public] = ACTIONS(1877),
        [anon_sym_protected] = ACTIONS(1877),
        [anon_sym_internal] = ACTIONS(1877),
        [anon_sym_private] = ACTIONS(1877),
        [anon_sym_struct] = ACTIONS(1877),
        [anon_sym_enum] = ACTIONS(1877),
        [anon_sym_sbyte] = ACTIONS(1877),
        [anon_sym_byte] = ACTIONS(1877),
        [anon_sym_short] = ACTIONS(1877),
        [anon_sym_ushort] = ACTIONS(1877),
        [anon_sym_int] = ACTIONS(1877),
        [anon_sym_uint] = ACTIONS(1877),
        [anon_sym_long] = ACTIONS(1877),
        [anon_sym_ulong] = ACTIONS(1877),
        [anon_sym_char] = ACTIONS(1877),
        [anon_sym_delegate] = ACTIONS(1877),
        [anon_sym_LBRACK] = ACTIONS(1871),
        [sym_const_keyword] = ACTIONS(1877),
        [anon_sym_readonly] = ACTIONS(1877),
        [anon_sym_volatile] = ACTIONS(1877),
        [anon_sym_bool] = ACTIONS(1877),
        [anon_sym_decimal] = ACTIONS(1877),
        [anon_sym_double] = ACTIONS(1877),
        [anon_sym_float] = ACTIONS(1877),
        [anon_sym_object] = ACTIONS(1877),
        [anon_sym_string] = ACTIONS(1877),
        [sym_identifier_name] = ACTIONS(1881),
        [sym_comment] = ACTIONS(101),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(1600),
        [anon_sym_namespace] = ACTIONS(1606),
        [anon_sym_RBRACE] = ACTIONS(1600),
        [anon_sym_class] = ACTIONS(1606),
        [anon_sym_unsafe] = ACTIONS(1606),
        [anon_sym_abstract] = ACTIONS(1606),
        [anon_sym_sealed] = ACTIONS(1606),
        [anon_sym_static] = ACTIONS(1606),
        [anon_sym_new] = ACTIONS(1606),
        [anon_sym_public] = ACTIONS(1606),
        [anon_sym_protected] = ACTIONS(1606),
        [anon_sym_internal] = ACTIONS(1606),
        [anon_sym_private] = ACTIONS(1606),
        [anon_sym_struct] = ACTIONS(1606),
        [anon_sym_enum] = ACTIONS(1606),
        [anon_sym_sbyte] = ACTIONS(1606),
        [anon_sym_byte] = ACTIONS(1606),
        [anon_sym_short] = ACTIONS(1606),
        [anon_sym_ushort] = ACTIONS(1606),
        [anon_sym_int] = ACTIONS(1606),
        [anon_sym_uint] = ACTIONS(1606),
        [anon_sym_long] = ACTIONS(1606),
        [anon_sym_ulong] = ACTIONS(1606),
        [anon_sym_char] = ACTIONS(1606),
        [anon_sym_delegate] = ACTIONS(1606),
        [anon_sym_LBRACK] = ACTIONS(1600),
        [sym_const_keyword] = ACTIONS(1606),
        [anon_sym_readonly] = ACTIONS(1606),
        [anon_sym_volatile] = ACTIONS(1606),
        [anon_sym_bool] = ACTIONS(1606),
        [anon_sym_decimal] = ACTIONS(1606),
        [anon_sym_double] = ACTIONS(1606),
        [anon_sym_float] = ACTIONS(1606),
        [anon_sym_object] = ACTIONS(1606),
        [anon_sym_string] = ACTIONS(1606),
        [sym_identifier_name] = ACTIONS(1610),
        [sym_comment] = ACTIONS(101),
    },
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(1871),
        [anon_sym_namespace] = ACTIONS(1877),
        [anon_sym_RBRACE] = ACTIONS(1871),
        [anon_sym_class] = ACTIONS(1877),
        [anon_sym_unsafe] = ACTIONS(1877),
        [anon_sym_abstract] = ACTIONS(1877),
        [anon_sym_sealed] = ACTIONS(1877),
        [anon_sym_static] = ACTIONS(1877),
        [anon_sym_new] = ACTIONS(1877),
        [anon_sym_public] = ACTIONS(1877),
        [anon_sym_protected] = ACTIONS(1877),
        [anon_sym_internal] = ACTIONS(1877),
        [anon_sym_private] = ACTIONS(1877),
        [anon_sym_struct] = ACTIONS(1877),
        [anon_sym_enum] = ACTIONS(1877),
        [anon_sym_sbyte] = ACTIONS(1877),
        [anon_sym_byte] = ACTIONS(1877),
        [anon_sym_short] = ACTIONS(1877),
        [anon_sym_ushort] = ACTIONS(1877),
        [anon_sym_int] = ACTIONS(1877),
        [anon_sym_uint] = ACTIONS(1877),
        [anon_sym_long] = ACTIONS(1877),
        [anon_sym_ulong] = ACTIONS(1877),
        [anon_sym_char] = ACTIONS(1877),
        [anon_sym_delegate] = ACTIONS(1877),
        [anon_sym_LBRACK] = ACTIONS(1871),
        [sym_const_keyword] = ACTIONS(1877),
        [anon_sym_readonly] = ACTIONS(1877),
        [anon_sym_volatile] = ACTIONS(1877),
        [anon_sym_bool] = ACTIONS(1877),
        [anon_sym_decimal] = ACTIONS(1877),
        [anon_sym_double] = ACTIONS(1877),
        [anon_sym_float] = ACTIONS(1877),
        [anon_sym_object] = ACTIONS(1877),
        [anon_sym_string] = ACTIONS(1877),
        [sym_identifier_name] = ACTIONS(1881),
        [sym_comment] = ACTIONS(101),
    },
    [476] = {
        [anon_sym_SEMI] = ACTIONS(1885),
        [anon_sym_RBRACE] = ACTIONS(1885),
        [anon_sym_COMMA] = ACTIONS(1885),
        [sym_comment] = ACTIONS(101),
    },
    [477] = {
        [anon_sym_SEMI] = ACTIONS(1889),
        [anon_sym_RBRACE] = ACTIONS(1889),
        [anon_sym_COMMA] = ACTIONS(1889),
        [sym__real_type_suffix] = ACTIONS(1892),
        [sym__exponent_part] = ACTIONS(1894),
        [sym_comment] = ACTIONS(101),
    },
    [478] = {
        [anon_sym_SEMI] = ACTIONS(1896),
        [anon_sym_RBRACE] = ACTIONS(1896),
        [anon_sym_COMMA] = ACTIONS(1896),
        [sym_comment] = ACTIONS(101),
    },
    [479] = {
        [anon_sym_SEMI] = ACTIONS(1896),
        [anon_sym_RBRACE] = ACTIONS(1896),
        [anon_sym_COMMA] = ACTIONS(1896),
        [sym__real_type_suffix] = ACTIONS(1899),
        [sym_comment] = ACTIONS(101),
    },
    [480] = {
        [anon_sym_SEMI] = ACTIONS(1901),
        [anon_sym_RBRACE] = ACTIONS(1901),
        [anon_sym_COMMA] = ACTIONS(1901),
        [sym_comment] = ACTIONS(101),
    },
    [481] = {
        [anon_sym_SEMI] = ACTIONS(1159),
        [anon_sym_RBRACE] = ACTIONS(1159),
        [anon_sym_COMMA] = ACTIONS(1159),
        [sym_comment] = ACTIONS(101),
    },
    [482] = {
        [anon_sym_SEMI] = ACTIONS(1904),
        [sym_comment] = ACTIONS(101),
    },
    [483] = {
        [anon_sym_RBRACE] = ACTIONS(1906),
        [anon_sym_class] = ACTIONS(1910),
        [anon_sym_unsafe] = ACTIONS(1910),
        [anon_sym_abstract] = ACTIONS(1910),
        [anon_sym_sealed] = ACTIONS(1910),
        [anon_sym_static] = ACTIONS(1910),
        [anon_sym_new] = ACTIONS(1910),
        [anon_sym_public] = ACTIONS(1910),
        [anon_sym_protected] = ACTIONS(1910),
        [anon_sym_internal] = ACTIONS(1910),
        [anon_sym_private] = ACTIONS(1910),
        [anon_sym_struct] = ACTIONS(1910),
        [anon_sym_enum] = ACTIONS(1910),
        [anon_sym_sbyte] = ACTIONS(1910),
        [anon_sym_byte] = ACTIONS(1910),
        [anon_sym_short] = ACTIONS(1910),
        [anon_sym_ushort] = ACTIONS(1910),
        [anon_sym_int] = ACTIONS(1910),
        [anon_sym_uint] = ACTIONS(1910),
        [anon_sym_long] = ACTIONS(1910),
        [anon_sym_ulong] = ACTIONS(1910),
        [anon_sym_char] = ACTIONS(1910),
        [anon_sym_delegate] = ACTIONS(1910),
        [anon_sym_LBRACK] = ACTIONS(1906),
        [sym_const_keyword] = ACTIONS(1910),
        [anon_sym_readonly] = ACTIONS(1910),
        [anon_sym_volatile] = ACTIONS(1910),
        [anon_sym_bool] = ACTIONS(1910),
        [anon_sym_decimal] = ACTIONS(1910),
        [anon_sym_double] = ACTIONS(1910),
        [anon_sym_float] = ACTIONS(1910),
        [anon_sym_object] = ACTIONS(1910),
        [anon_sym_string] = ACTIONS(1910),
        [sym_identifier_name] = ACTIONS(1914),
        [sym_comment] = ACTIONS(101),
    },
    [484] = {
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [485] = {
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(493),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(1918),
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(413),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [486] = {
        [anon_sym_RBRACE] = ACTIONS(1923),
        [anon_sym_COMMA] = ACTIONS(1923),
        [sym_comment] = ACTIONS(101),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(1926),
        [anon_sym_RPAREN] = ACTIONS(1926),
        [sym_params_keyword] = ACTIONS(1926),
        [anon_sym_LBRACK] = ACTIONS(1926),
        [sym_comment] = ACTIONS(101),
    },
    [488] = {
        [sym_parameter_modifier] = STATE(85),
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1301),
        [sym_comment] = ACTIONS(101),
    },
    [489] = {
        [anon_sym_COMMA] = ACTIONS(1929),
        [anon_sym_RBRACK] = ACTIONS(1929),
        [sym_comment] = ACTIONS(101),
    },
    [490] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_GT] = ACTIONS(357),
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(101),
    },
    [491] = {
        [anon_sym_SEMI] = ACTIONS(1932),
        [anon_sym_COMMA] = ACTIONS(1932),
        [sym_comment] = ACTIONS(101),
    },
    [492] = {
        [anon_sym_COMMA] = ACTIONS(1935),
        [anon_sym_GT] = ACTIONS(1935),
        [sym_comment] = ACTIONS(101),
    },
    [493] = {
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(1938),
        [sym_comment] = ACTIONS(101),
    },
    [494] = {
        [anon_sym_LBRACE] = ACTIONS(1941),
        [anon_sym_COLON] = ACTIONS(1187),
        [sym_comment] = ACTIONS(101),
    },
    [495] = {
        [sym_enum_member_declaration] = STATE(468),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [496] = {
        [sym_type_parameter_list] = STATE(498),
        [anon_sym_LBRACE] = ACTIONS(1943),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [497] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(504),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1945),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [498] = {
        [anon_sym_LBRACE] = ACTIONS(1947),
        [sym_comment] = ACTIONS(101),
    },
    [499] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(501),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1949),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(1951),
        [anon_sym_namespace] = ACTIONS(1955),
        [anon_sym_RBRACE] = ACTIONS(1951),
        [anon_sym_class] = ACTIONS(1955),
        [anon_sym_unsafe] = ACTIONS(1955),
        [anon_sym_abstract] = ACTIONS(1955),
        [anon_sym_sealed] = ACTIONS(1955),
        [anon_sym_static] = ACTIONS(1955),
        [anon_sym_new] = ACTIONS(1955),
        [anon_sym_public] = ACTIONS(1955),
        [anon_sym_protected] = ACTIONS(1955),
        [anon_sym_internal] = ACTIONS(1955),
        [anon_sym_private] = ACTIONS(1955),
        [anon_sym_struct] = ACTIONS(1955),
        [anon_sym_enum] = ACTIONS(1955),
        [anon_sym_sbyte] = ACTIONS(1955),
        [anon_sym_byte] = ACTIONS(1955),
        [anon_sym_short] = ACTIONS(1955),
        [anon_sym_ushort] = ACTIONS(1955),
        [anon_sym_int] = ACTIONS(1955),
        [anon_sym_uint] = ACTIONS(1955),
        [anon_sym_long] = ACTIONS(1955),
        [anon_sym_ulong] = ACTIONS(1955),
        [anon_sym_char] = ACTIONS(1955),
        [anon_sym_delegate] = ACTIONS(1955),
        [anon_sym_LBRACK] = ACTIONS(1951),
        [sym_const_keyword] = ACTIONS(1955),
        [anon_sym_readonly] = ACTIONS(1955),
        [anon_sym_volatile] = ACTIONS(1955),
        [anon_sym_bool] = ACTIONS(1955),
        [anon_sym_decimal] = ACTIONS(1955),
        [anon_sym_double] = ACTIONS(1955),
        [anon_sym_float] = ACTIONS(1955),
        [anon_sym_object] = ACTIONS(1955),
        [anon_sym_string] = ACTIONS(1955),
        [sym_identifier_name] = ACTIONS(1959),
        [sym_comment] = ACTIONS(101),
    },
    [501] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1963),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [502] = {
        [ts_builtin_sym_end] = ACTIONS(1965),
        [anon_sym_namespace] = ACTIONS(1969),
        [anon_sym_RBRACE] = ACTIONS(1965),
        [anon_sym_class] = ACTIONS(1969),
        [anon_sym_unsafe] = ACTIONS(1969),
        [anon_sym_abstract] = ACTIONS(1969),
        [anon_sym_sealed] = ACTIONS(1969),
        [anon_sym_static] = ACTIONS(1969),
        [anon_sym_new] = ACTIONS(1969),
        [anon_sym_public] = ACTIONS(1969),
        [anon_sym_protected] = ACTIONS(1969),
        [anon_sym_internal] = ACTIONS(1969),
        [anon_sym_private] = ACTIONS(1969),
        [anon_sym_struct] = ACTIONS(1969),
        [anon_sym_enum] = ACTIONS(1969),
        [anon_sym_sbyte] = ACTIONS(1969),
        [anon_sym_byte] = ACTIONS(1969),
        [anon_sym_short] = ACTIONS(1969),
        [anon_sym_ushort] = ACTIONS(1969),
        [anon_sym_int] = ACTIONS(1969),
        [anon_sym_uint] = ACTIONS(1969),
        [anon_sym_long] = ACTIONS(1969),
        [anon_sym_ulong] = ACTIONS(1969),
        [anon_sym_char] = ACTIONS(1969),
        [anon_sym_delegate] = ACTIONS(1969),
        [anon_sym_LBRACK] = ACTIONS(1965),
        [sym_const_keyword] = ACTIONS(1969),
        [anon_sym_readonly] = ACTIONS(1969),
        [anon_sym_volatile] = ACTIONS(1969),
        [anon_sym_bool] = ACTIONS(1969),
        [anon_sym_decimal] = ACTIONS(1969),
        [anon_sym_double] = ACTIONS(1969),
        [anon_sym_float] = ACTIONS(1969),
        [anon_sym_object] = ACTIONS(1969),
        [anon_sym_string] = ACTIONS(1969),
        [sym_identifier_name] = ACTIONS(1973),
        [sym_comment] = ACTIONS(101),
    },
    [503] = {
        [ts_builtin_sym_end] = ACTIONS(1977),
        [anon_sym_namespace] = ACTIONS(1981),
        [anon_sym_RBRACE] = ACTIONS(1977),
        [anon_sym_class] = ACTIONS(1981),
        [anon_sym_unsafe] = ACTIONS(1981),
        [anon_sym_abstract] = ACTIONS(1981),
        [anon_sym_sealed] = ACTIONS(1981),
        [anon_sym_static] = ACTIONS(1981),
        [anon_sym_new] = ACTIONS(1981),
        [anon_sym_public] = ACTIONS(1981),
        [anon_sym_protected] = ACTIONS(1981),
        [anon_sym_internal] = ACTIONS(1981),
        [anon_sym_private] = ACTIONS(1981),
        [anon_sym_struct] = ACTIONS(1981),
        [anon_sym_enum] = ACTIONS(1981),
        [anon_sym_sbyte] = ACTIONS(1981),
        [anon_sym_byte] = ACTIONS(1981),
        [anon_sym_short] = ACTIONS(1981),
        [anon_sym_ushort] = ACTIONS(1981),
        [anon_sym_int] = ACTIONS(1981),
        [anon_sym_uint] = ACTIONS(1981),
        [anon_sym_long] = ACTIONS(1981),
        [anon_sym_ulong] = ACTIONS(1981),
        [anon_sym_char] = ACTIONS(1981),
        [anon_sym_delegate] = ACTIONS(1981),
        [anon_sym_LBRACK] = ACTIONS(1977),
        [sym_const_keyword] = ACTIONS(1981),
        [anon_sym_readonly] = ACTIONS(1981),
        [anon_sym_volatile] = ACTIONS(1981),
        [anon_sym_bool] = ACTIONS(1981),
        [anon_sym_decimal] = ACTIONS(1981),
        [anon_sym_double] = ACTIONS(1981),
        [anon_sym_float] = ACTIONS(1981),
        [anon_sym_object] = ACTIONS(1981),
        [anon_sym_string] = ACTIONS(1981),
        [sym_identifier_name] = ACTIONS(1985),
        [sym_comment] = ACTIONS(101),
    },
    [504] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1949),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [505] = {
        [sym_type_parameter_list] = STATE(507),
        [anon_sym_LBRACE] = ACTIONS(1989),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [506] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(513),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1991),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [507] = {
        [anon_sym_LBRACE] = ACTIONS(1993),
        [sym_comment] = ACTIONS(101),
    },
    [508] = {
        [sym__type_declaration] = STATE(199),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(199),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(510),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1995),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [509] = {
        [ts_builtin_sym_end] = ACTIONS(1997),
        [anon_sym_namespace] = ACTIONS(2001),
        [anon_sym_RBRACE] = ACTIONS(1997),
        [anon_sym_class] = ACTIONS(2001),
        [anon_sym_unsafe] = ACTIONS(2001),
        [anon_sym_abstract] = ACTIONS(2001),
        [anon_sym_sealed] = ACTIONS(2001),
        [anon_sym_static] = ACTIONS(2001),
        [anon_sym_new] = ACTIONS(2001),
        [anon_sym_public] = ACTIONS(2001),
        [anon_sym_protected] = ACTIONS(2001),
        [anon_sym_internal] = ACTIONS(2001),
        [anon_sym_private] = ACTIONS(2001),
        [anon_sym_struct] = ACTIONS(2001),
        [anon_sym_enum] = ACTIONS(2001),
        [anon_sym_sbyte] = ACTIONS(2001),
        [anon_sym_byte] = ACTIONS(2001),
        [anon_sym_short] = ACTIONS(2001),
        [anon_sym_ushort] = ACTIONS(2001),
        [anon_sym_int] = ACTIONS(2001),
        [anon_sym_uint] = ACTIONS(2001),
        [anon_sym_long] = ACTIONS(2001),
        [anon_sym_ulong] = ACTIONS(2001),
        [anon_sym_char] = ACTIONS(2001),
        [anon_sym_delegate] = ACTIONS(2001),
        [anon_sym_LBRACK] = ACTIONS(1997),
        [sym_const_keyword] = ACTIONS(2001),
        [anon_sym_readonly] = ACTIONS(2001),
        [anon_sym_volatile] = ACTIONS(2001),
        [anon_sym_bool] = ACTIONS(2001),
        [anon_sym_decimal] = ACTIONS(2001),
        [anon_sym_double] = ACTIONS(2001),
        [anon_sym_float] = ACTIONS(2001),
        [anon_sym_object] = ACTIONS(2001),
        [anon_sym_string] = ACTIONS(2001),
        [sym_identifier_name] = ACTIONS(2005),
        [sym_comment] = ACTIONS(101),
    },
    [510] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(2009),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [511] = {
        [ts_builtin_sym_end] = ACTIONS(2011),
        [anon_sym_namespace] = ACTIONS(2015),
        [anon_sym_RBRACE] = ACTIONS(2011),
        [anon_sym_class] = ACTIONS(2015),
        [anon_sym_unsafe] = ACTIONS(2015),
        [anon_sym_abstract] = ACTIONS(2015),
        [anon_sym_sealed] = ACTIONS(2015),
        [anon_sym_static] = ACTIONS(2015),
        [anon_sym_new] = ACTIONS(2015),
        [anon_sym_public] = ACTIONS(2015),
        [anon_sym_protected] = ACTIONS(2015),
        [anon_sym_internal] = ACTIONS(2015),
        [anon_sym_private] = ACTIONS(2015),
        [anon_sym_struct] = ACTIONS(2015),
        [anon_sym_enum] = ACTIONS(2015),
        [anon_sym_sbyte] = ACTIONS(2015),
        [anon_sym_byte] = ACTIONS(2015),
        [anon_sym_short] = ACTIONS(2015),
        [anon_sym_ushort] = ACTIONS(2015),
        [anon_sym_int] = ACTIONS(2015),
        [anon_sym_uint] = ACTIONS(2015),
        [anon_sym_long] = ACTIONS(2015),
        [anon_sym_ulong] = ACTIONS(2015),
        [anon_sym_char] = ACTIONS(2015),
        [anon_sym_delegate] = ACTIONS(2015),
        [anon_sym_LBRACK] = ACTIONS(2011),
        [sym_const_keyword] = ACTIONS(2015),
        [anon_sym_readonly] = ACTIONS(2015),
        [anon_sym_volatile] = ACTIONS(2015),
        [anon_sym_bool] = ACTIONS(2015),
        [anon_sym_decimal] = ACTIONS(2015),
        [anon_sym_double] = ACTIONS(2015),
        [anon_sym_float] = ACTIONS(2015),
        [anon_sym_object] = ACTIONS(2015),
        [anon_sym_string] = ACTIONS(2015),
        [sym_identifier_name] = ACTIONS(2019),
        [sym_comment] = ACTIONS(101),
    },
    [512] = {
        [ts_builtin_sym_end] = ACTIONS(2023),
        [anon_sym_namespace] = ACTIONS(2027),
        [anon_sym_RBRACE] = ACTIONS(2023),
        [anon_sym_class] = ACTIONS(2027),
        [anon_sym_unsafe] = ACTIONS(2027),
        [anon_sym_abstract] = ACTIONS(2027),
        [anon_sym_sealed] = ACTIONS(2027),
        [anon_sym_static] = ACTIONS(2027),
        [anon_sym_new] = ACTIONS(2027),
        [anon_sym_public] = ACTIONS(2027),
        [anon_sym_protected] = ACTIONS(2027),
        [anon_sym_internal] = ACTIONS(2027),
        [anon_sym_private] = ACTIONS(2027),
        [anon_sym_struct] = ACTIONS(2027),
        [anon_sym_enum] = ACTIONS(2027),
        [anon_sym_sbyte] = ACTIONS(2027),
        [anon_sym_byte] = ACTIONS(2027),
        [anon_sym_short] = ACTIONS(2027),
        [anon_sym_ushort] = ACTIONS(2027),
        [anon_sym_int] = ACTIONS(2027),
        [anon_sym_uint] = ACTIONS(2027),
        [anon_sym_long] = ACTIONS(2027),
        [anon_sym_ulong] = ACTIONS(2027),
        [anon_sym_char] = ACTIONS(2027),
        [anon_sym_delegate] = ACTIONS(2027),
        [anon_sym_LBRACK] = ACTIONS(2023),
        [sym_const_keyword] = ACTIONS(2027),
        [anon_sym_readonly] = ACTIONS(2027),
        [anon_sym_volatile] = ACTIONS(2027),
        [anon_sym_bool] = ACTIONS(2027),
        [anon_sym_decimal] = ACTIONS(2027),
        [anon_sym_double] = ACTIONS(2027),
        [anon_sym_float] = ACTIONS(2027),
        [anon_sym_object] = ACTIONS(2027),
        [anon_sym_string] = ACTIONS(2027),
        [sym_identifier_name] = ACTIONS(2031),
        [sym_comment] = ACTIONS(101),
    },
    [513] = {
        [sym__type_declaration] = STATE(207),
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
        [sym__attributes] = STATE(200),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(207),
        [sym_field_modifiers] = STATE(201),
        [sym__field_modifiers] = STATE(202),
        [sym_variable_declaration] = STATE(203),
        [sym__type] = STATE(204),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1995),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(603),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(607),
        [anon_sym_enum] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(613),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [514] = {
        [ts_builtin_sym_end] = ACTIONS(2035),
        [anon_sym_namespace] = ACTIONS(2042),
        [anon_sym_RBRACE] = ACTIONS(2035),
        [anon_sym_class] = ACTIONS(2042),
        [anon_sym_unsafe] = ACTIONS(2042),
        [anon_sym_abstract] = ACTIONS(2042),
        [anon_sym_sealed] = ACTIONS(2042),
        [anon_sym_static] = ACTIONS(2042),
        [anon_sym_new] = ACTIONS(2042),
        [anon_sym_public] = ACTIONS(2042),
        [anon_sym_protected] = ACTIONS(2042),
        [anon_sym_internal] = ACTIONS(2042),
        [anon_sym_private] = ACTIONS(2042),
        [anon_sym_struct] = ACTIONS(2042),
        [anon_sym_enum] = ACTIONS(2042),
        [anon_sym_sbyte] = ACTIONS(2042),
        [anon_sym_byte] = ACTIONS(2042),
        [anon_sym_short] = ACTIONS(2042),
        [anon_sym_ushort] = ACTIONS(2042),
        [anon_sym_int] = ACTIONS(2042),
        [anon_sym_uint] = ACTIONS(2042),
        [anon_sym_long] = ACTIONS(2042),
        [anon_sym_ulong] = ACTIONS(2042),
        [anon_sym_char] = ACTIONS(2042),
        [anon_sym_delegate] = ACTIONS(2042),
        [anon_sym_LBRACK] = ACTIONS(2035),
        [sym_const_keyword] = ACTIONS(2042),
        [anon_sym_readonly] = ACTIONS(2042),
        [anon_sym_volatile] = ACTIONS(2042),
        [anon_sym_bool] = ACTIONS(2042),
        [anon_sym_decimal] = ACTIONS(2042),
        [anon_sym_double] = ACTIONS(2042),
        [anon_sym_float] = ACTIONS(2042),
        [anon_sym_object] = ACTIONS(2042),
        [anon_sym_string] = ACTIONS(2042),
        [sym_identifier_name] = ACTIONS(2049),
        [sym_comment] = ACTIONS(101),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(2056),
        [anon_sym_namespace] = ACTIONS(2066),
        [anon_sym_RBRACE] = ACTIONS(2056),
        [anon_sym_class] = ACTIONS(2066),
        [anon_sym_unsafe] = ACTIONS(2066),
        [anon_sym_abstract] = ACTIONS(2066),
        [anon_sym_sealed] = ACTIONS(2066),
        [anon_sym_static] = ACTIONS(2066),
        [anon_sym_new] = ACTIONS(2066),
        [anon_sym_public] = ACTIONS(2066),
        [anon_sym_protected] = ACTIONS(2066),
        [anon_sym_internal] = ACTIONS(2066),
        [anon_sym_private] = ACTIONS(2066),
        [anon_sym_struct] = ACTIONS(2066),
        [anon_sym_enum] = ACTIONS(2066),
        [anon_sym_sbyte] = ACTIONS(2076),
        [anon_sym_byte] = ACTIONS(2076),
        [anon_sym_short] = ACTIONS(2076),
        [anon_sym_ushort] = ACTIONS(2076),
        [anon_sym_int] = ACTIONS(2076),
        [anon_sym_uint] = ACTIONS(2076),
        [anon_sym_long] = ACTIONS(2076),
        [anon_sym_ulong] = ACTIONS(2076),
        [anon_sym_char] = ACTIONS(2076),
        [anon_sym_delegate] = ACTIONS(2066),
        [anon_sym_LBRACK] = ACTIONS(2056),
        [sym_const_keyword] = ACTIONS(2076),
        [anon_sym_readonly] = ACTIONS(2076),
        [anon_sym_volatile] = ACTIONS(2076),
        [anon_sym_bool] = ACTIONS(2076),
        [anon_sym_decimal] = ACTIONS(2076),
        [anon_sym_double] = ACTIONS(2076),
        [anon_sym_float] = ACTIONS(2076),
        [anon_sym_object] = ACTIONS(2076),
        [anon_sym_string] = ACTIONS(2076),
        [sym_identifier_name] = ACTIONS(2085),
        [sym_comment] = ACTIONS(101),
    },
    [516] = {
        [aux_sym_enum_declaration_repeat1] = STATE(381),
        [anon_sym_RBRACE] = ACTIONS(2094),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(313),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(316),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(317),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(318),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(319),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(194),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(320),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(196),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(321),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(322),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(323),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(324),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(325),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(326),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(327),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(328),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(329),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(330),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(331),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(289),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(332),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(198),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(136),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(334),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(335),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(151),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(336),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(139),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(161),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(140),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(337),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(338),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(339),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(340),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(143),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(65),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(341),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(303),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(294),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(342),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(295),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
    [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
    [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
    [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
    [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
    [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
    [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
    [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
    [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
    [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
    [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
    [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
    [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
    [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [915] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [930] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [934] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [947] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [961] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [978] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [992] = {.count = 16, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1009] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
    [1027] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(466),
    [1029] = {.count = 18, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1050] = {.count = 18, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1069] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1086] = {.count = 16, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
    [1105] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
    [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
    [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
    [1114] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1), REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [1117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
    [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1121] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2), REDUCE(sym_parameter_list, 3),
    [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 5),
    [1126] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1132] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_rank_specifier, 2), REDUCE(sym_array_rank_specifier, 3), REDUCE(sym__attribute_section, 3),
    [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
    [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
    [1140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
    [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [1144] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
    [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
    [1154] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1159] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1165] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [1169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
    [1171] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1174] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1177] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(462),
    [1181] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(463),
    [1184] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1189] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [1200] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter_array, 4),
    [1206] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1210] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [1217] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(297),
    [1221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [1223] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1226] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1229] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1234] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1239] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1242] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1245] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [1248] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
    [1253] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1258] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1261] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(440),
    [1265] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(173),
    [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
    [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [1279] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(111),
    [1283] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1287] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(76),
    [1291] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(32),
    [1295] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(sym__formal_parameter_list, 2), REDUCE(sym__formal_parameter_list, 3),
    [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [1301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(402),
    [1303] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1306] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1309] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [1314] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(37),
    [1318] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1322] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [1325] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
    [1330] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1333] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [1338] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1), SHIFT(394),
    [1341] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1345] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(210),
    [1349] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1352] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1356] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1359] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [1364] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(104),
    [1368] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(105),
    [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
    [1374] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1377] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1381] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1390] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [1398] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1404] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1410] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1416] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1422] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1428] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1437] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1446] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1455] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1459] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1465] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [1470] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1477] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1484] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [1493] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1500] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1507] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1514] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1519] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1523] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1528] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1533] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [1540] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1543] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1546] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [1551] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1554] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1557] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
    [1562] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 3),
    [1565] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter_array, 4),
    [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
    [1570] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1573] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1577] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1581] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
    [1587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1589] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1592] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1595] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [1600] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [1606] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1610] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [1616] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1622] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1626] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1630] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1634] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1638] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
    [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1652] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
    [1657] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1660] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
    [1665] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1670] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1673] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1676] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1679] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1682] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
    [1687] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1692] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1695] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [1700] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [1705] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1708] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1711] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1719] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1725] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
    [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [1739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [1741] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1744] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1747] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [1752] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1755] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1758] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1761] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1764] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1767] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
    [1774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [1778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [1780] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1783] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1786] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1791] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1794] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1797] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1800] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1803] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1806] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1809] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
    [1815] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1823] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1831] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1838] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [1847] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1850] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1855] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1861] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1865] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [1871] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [1877] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1881] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1885] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1889] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
    [1896] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [1901] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1906] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1910] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1914] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1918] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1923] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [1926] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1929] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1932] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1935] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1938] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
    [1945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
    [1951] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1955] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1959] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1965] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1969] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1973] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1977] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1981] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1985] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [1991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1997] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2001] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2005] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [2011] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2015] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2019] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2023] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2027] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2031] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2035] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2042] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2049] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2056] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2066] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2076] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2085] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
