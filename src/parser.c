#include "tree_sitter/parser.h"

#define STATE_COUNT 505
#define SYMBOL_COUNT 157
#define TOKEN_COUNT 87

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
    anon_sym_readonly = 43,
    anon_sym_volatile = 44,
    anon_sym_EQ = 45,
    anon_sym_true = 46,
    anon_sym_false = 47,
    anon_sym_SQUOTE = 48,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 49,
    sym__hexadecimal_escape_sequence = 50,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 51,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 52,
    anon_sym_BSLASH_SQUOTE = 53,
    anon_sym_BSLASH_DQUOTE = 54,
    anon_sym_BSLASH_BSLASH = 55,
    anon_sym_BSLASH0 = 56,
    anon_sym_BSLASHa = 57,
    anon_sym_BSLASHb = 58,
    anon_sym_BSLASHf = 59,
    anon_sym_BSLASHn = 60,
    anon_sym_BSLASHr = 61,
    anon_sym_BSLASHt = 62,
    anon_sym_BSLASHv = 63,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 64,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 65,
    sym__integer_type_suffix = 66,
    sym_null_literal = 67,
    anon_sym_DOT = 68,
    sym__real_type_suffix = 69,
    sym__exponent_part = 70,
    anon_sym_DQUOTE = 71,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 72,
    anon_sym_AT_DQUOTE = 73,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 74,
    anon_sym_bool = 75,
    anon_sym_decimal = 76,
    anon_sym_double = 77,
    anon_sym_float = 78,
    anon_sym_object = 79,
    anon_sym_string = 80,
    anon_sym_LT = 81,
    anon_sym_GT = 82,
    anon_sym_COLON_COLON = 83,
    sym_global = 84,
    sym_identifier_name = 85,
    sym_comment = 86,
    sym_compilation_unit = 87,
    sym__type_declaration = 88,
    sym_extern_alias_directive = 89,
    sym_using_directive = 90,
    sym_namespace_declaration = 91,
    sym_class_declaration = 92,
    sym_class_modifiers = 93,
    sym__class_modifiers = 94,
    sym_struct_declaration = 95,
    sym_struct_modifiers = 96,
    sym__struct_modifiers = 97,
    sym_enum_declaration = 98,
    sym_enum_member_declaration = 99,
    sym_enum_modifier = 100,
    sym__integral_type = 101,
    sym_delegate_declaration = 102,
    sym_delegate_modifier = 103,
    sym__return_type = 104,
    sym_parameter_list = 105,
    sym__formal_parameter_list = 106,
    sym_parameter = 107,
    sym_parameter_modifier = 108,
    sym_parameter_array = 109,
    sym_array_type = 110,
    sym_array_rank_specifier = 111,
    sym__attributes = 112,
    sym__attribute_section = 113,
    sym_attribute_list = 114,
    sym_attribute = 115,
    sym_attribute_argument_list = 116,
    sym__global_attributes = 117,
    sym_field_declaration = 118,
    sym_field_modifiers = 119,
    sym__field_modifiers = 120,
    sym_variable_declaration = 121,
    sym__type = 122,
    sym_generic_name = 123,
    sym_variable_declarator = 124,
    sym_equals_value_clause = 125,
    sym__literal = 126,
    sym_boolean_literal = 127,
    sym_character_literal = 128,
    sym__unicode_escape_sequence = 129,
    sym__simple_escape_sequence = 130,
    sym_integer_literal = 131,
    sym_real_literal = 132,
    sym_string_literal = 133,
    sym__regular_string_literal = 134,
    sym__regular_string_literal_character = 135,
    sym__verbatim_string_literal = 136,
    sym_predefined_type = 137,
    sym_type_parameter_list = 138,
    sym_type_parameter = 139,
    sym_qualified_name = 140,
    sym_alias_qualified_name = 141,
    sym_name_equals = 142,
    sym_static = 143,
    aux_sym_compilation_unit_repeat1 = 144,
    aux_sym_compilation_unit_repeat2 = 145,
    aux_sym_compilation_unit_repeat3 = 146,
    aux_sym_compilation_unit_repeat4 = 147,
    aux_sym_class_declaration_repeat1 = 148,
    aux_sym_enum_declaration_repeat1 = 149,
    aux_sym__formal_parameter_list_repeat1 = 150,
    aux_sym_array_rank_specifier_repeat1 = 151,
    aux_sym__attributes_repeat1 = 152,
    aux_sym_attribute_list_repeat1 = 153,
    aux_sym_variable_declaration_repeat1 = 154,
    aux_sym__regular_string_literal_repeat1 = 155,
    aux_sym_type_parameter_list_repeat1 = 156,
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
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 't')
                ADVANCE(241);
            if (lookahead == 'u')
                ADVANCE(248);
            if (lookahead == 'v')
                ADVANCE(269);
            if (lookahead == '{')
                ADVANCE(279);
            if (lookahead == '}')
                ADVANCE(280);
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
                ('b' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(183);
            if (lookahead == 'r')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier_name);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_params_keyword);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'o')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'v')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(192);
            ACCEPT_TOKEN(sym_identifier_name);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(193);
            ACCEPT_TOKEN(sym_identifier_name);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_private);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_protected);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_public);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(208);
            if (lookahead == 'f')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ref);
        case 215:
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
                ADVANCE(216);
            if (lookahead == 'e')
                ADVANCE(220);
            if (lookahead == 'h')
                ADVANCE(225);
            if (lookahead == 't')
                ADVANCE(229);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier_name);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier_name);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier_name);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_short);
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'r')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier_name);
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier_name);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier_name);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier_name);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_static);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(235);
            if (lookahead == 'u')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier_name);
        case 235:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier_name);
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier_name);
        case 237:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_string);
        case 238:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier_name);
        case 239:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 240:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_struct);
        case 241:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(242);
            if (lookahead == 'r')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier_name);
        case 242:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier_name);
        case 243:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier_name);
        case 244:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_this);
        case 245:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier_name);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(247);
            ACCEPT_TOKEN(sym_identifier_name);
        case 247:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_true);
        case 248:
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
                ADVANCE(249);
            if (lookahead == 'l')
                ADVANCE(252);
            if (lookahead == 'n')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(261);
            ACCEPT_TOKEN(sym__integer_type_suffix);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier_name);
        case 251:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_uint);
        case 252:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(253);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier_name);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier_name);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier_name);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier_name);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(260);
            ACCEPT_TOKEN(sym_identifier_name);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(262);
            if (lookahead == 'i')
                ADVANCE(266);
            ACCEPT_TOKEN(sym_identifier_name);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier_name);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(264);
            ACCEPT_TOKEN(sym_identifier_name);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(265);
            ACCEPT_TOKEN(sym_identifier_name);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier_name);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier_name);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_using);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(270);
            ACCEPT_TOKEN(sym_identifier_name);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'l')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier_name);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(272);
            ACCEPT_TOKEN(sym_identifier_name);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_void_keyword);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(274);
            ACCEPT_TOKEN(sym_identifier_name);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(276);
            ACCEPT_TOKEN(sym_identifier_name);
        case 276:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(277);
            ACCEPT_TOKEN(sym_identifier_name);
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(278);
            ACCEPT_TOKEN(sym_identifier_name);
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 279:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 280:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 281:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(281);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'e')
                ADVANCE(303);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(320);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(365);
            LEX_ERROR();
        case 282:
            if (lookahead == 'b')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 's')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 't')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            if (lookahead == 'r')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_abstract);
        case 290:
            if (lookahead == 'l')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            if (lookahead == 'a')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            if (lookahead == 's')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 's')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            ACCEPT_TOKEN(anon_sym_class);
        case 295:
            if (lookahead == 'e')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            if (lookahead == 'l')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            if (lookahead == 'e')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (lookahead == 'g')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_delegate);
        case 303:
            if (lookahead == 'n')
                ADVANCE(304);
            if (lookahead == 'x')
                ADVANCE(307);
            LEX_ERROR();
        case 304:
            if (lookahead == 'u')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'm')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            ACCEPT_TOKEN(anon_sym_enum);
        case 307:
            if (lookahead == 't')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            if (lookahead == 'e')
                ADVANCE(309);
            LEX_ERROR();
        case 309:
            if (lookahead == 'r')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (lookahead == 'n')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            ACCEPT_TOKEN(anon_sym_extern);
        case 312:
            if (lookahead == 'n')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 't')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 'e')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 'r')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'n')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'a')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'l')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            ACCEPT_TOKEN(anon_sym_internal);
        case 320:
            if (lookahead == 'a')
                ADVANCE(321);
            if (lookahead == 'e')
                ADVANCE(329);
            LEX_ERROR();
        case 321:
            if (lookahead == 'm')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 'e')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            if (lookahead == 's')
                ADVANCE(324);
            LEX_ERROR();
        case 324:
            if (lookahead == 'p')
                ADVANCE(325);
            LEX_ERROR();
        case 325:
            if (lookahead == 'a')
                ADVANCE(326);
            LEX_ERROR();
        case 326:
            if (lookahead == 'c')
                ADVANCE(327);
            LEX_ERROR();
        case 327:
            if (lookahead == 'e')
                ADVANCE(328);
            LEX_ERROR();
        case 328:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 329:
            if (lookahead == 'w')
                ADVANCE(330);
            LEX_ERROR();
        case 330:
            ACCEPT_TOKEN(anon_sym_new);
        case 331:
            if (lookahead == 'r')
                ADVANCE(332);
            if (lookahead == 'u')
                ADVANCE(345);
            LEX_ERROR();
        case 332:
            if (lookahead == 'i')
                ADVANCE(333);
            if (lookahead == 'o')
                ADVANCE(338);
            LEX_ERROR();
        case 333:
            if (lookahead == 'v')
                ADVANCE(334);
            LEX_ERROR();
        case 334:
            if (lookahead == 'a')
                ADVANCE(335);
            LEX_ERROR();
        case 335:
            if (lookahead == 't')
                ADVANCE(336);
            LEX_ERROR();
        case 336:
            if (lookahead == 'e')
                ADVANCE(337);
            LEX_ERROR();
        case 337:
            ACCEPT_TOKEN(anon_sym_private);
        case 338:
            if (lookahead == 't')
                ADVANCE(339);
            LEX_ERROR();
        case 339:
            if (lookahead == 'e')
                ADVANCE(340);
            LEX_ERROR();
        case 340:
            if (lookahead == 'c')
                ADVANCE(341);
            LEX_ERROR();
        case 341:
            if (lookahead == 't')
                ADVANCE(342);
            LEX_ERROR();
        case 342:
            if (lookahead == 'e')
                ADVANCE(343);
            LEX_ERROR();
        case 343:
            if (lookahead == 'd')
                ADVANCE(344);
            LEX_ERROR();
        case 344:
            ACCEPT_TOKEN(anon_sym_protected);
        case 345:
            if (lookahead == 'b')
                ADVANCE(346);
            LEX_ERROR();
        case 346:
            if (lookahead == 'l')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            if (lookahead == 'i')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            if (lookahead == 'c')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            ACCEPT_TOKEN(anon_sym_public);
        case 350:
            if (lookahead == 'e')
                ADVANCE(351);
            if (lookahead == 't')
                ADVANCE(356);
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
            if (lookahead == 'e')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 'd')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 356:
            if (lookahead == 'a')
                ADVANCE(357);
            if (lookahead == 'r')
                ADVANCE(361);
            LEX_ERROR();
        case 357:
            if (lookahead == 't')
                ADVANCE(358);
            LEX_ERROR();
        case 358:
            if (lookahead == 'i')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            if (lookahead == 'c')
                ADVANCE(360);
            LEX_ERROR();
        case 360:
            ACCEPT_TOKEN(anon_sym_static);
        case 361:
            if (lookahead == 'u')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'c')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 't')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            ACCEPT_TOKEN(anon_sym_struct);
        case 365:
            if (lookahead == 'n')
                ADVANCE(366);
            if (lookahead == 's')
                ADVANCE(371);
            LEX_ERROR();
        case 366:
            if (lookahead == 's')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            if (lookahead == 'a')
                ADVANCE(368);
            LEX_ERROR();
        case 368:
            if (lookahead == 'f')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            if (lookahead == 'e')
                ADVANCE(370);
            LEX_ERROR();
        case 370:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 371:
            if (lookahead == 'i')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 'n')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            if (lookahead == 'g')
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            ACCEPT_TOKEN(anon_sym_using);
        case 375:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(375);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(376);
            LEX_ERROR();
        case 376:
            if (lookahead == 'l')
                ADVANCE(377);
            LEX_ERROR();
        case 377:
            if (lookahead == 'i')
                ADVANCE(378);
            LEX_ERROR();
        case 378:
            if (lookahead == 'a')
                ADVANCE(379);
            LEX_ERROR();
        case 379:
            if (lookahead == 's')
                ADVANCE(380);
            LEX_ERROR();
        case 380:
            ACCEPT_TOKEN(anon_sym_alias);
        case 381:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(381);
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
                ADVANCE(382);
            LEX_ERROR();
        case 382:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(383);
            ACCEPT_TOKEN(sym_identifier_name);
        case 383:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(136);
            LEX_ERROR();
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
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(387);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(388);
            LEX_ERROR();
        case 387:
            if (lookahead == 'e')
                ADVANCE(329);
            LEX_ERROR();
        case 388:
            if (lookahead == 'n')
                ADVANCE(366);
            LEX_ERROR();
        case 389:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(389);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(387);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(390);
            if (lookahead == 'u')
                ADVANCE(388);
            LEX_ERROR();
        case 390:
            if (lookahead == 'e')
                ADVANCE(351);
            if (lookahead == 't')
                ADVANCE(391);
            LEX_ERROR();
        case 391:
            if (lookahead == 'a')
                ADVANCE(357);
            LEX_ERROR();
        case 392:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(392);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'e')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(387);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(388);
            LEX_ERROR();
        case 393:
            if (lookahead == 'n')
                ADVANCE(304);
            LEX_ERROR();
        case 394:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(394);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 'u')
                ADVANCE(407);
            if (lookahead == 'v')
                ADVANCE(410);
            LEX_ERROR();
        case 395:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 396:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(397);
            if (lookahead == 'o')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 397:
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
        case 398:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 399:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(400);
            ACCEPT_TOKEN(sym_identifier_name);
        case 400:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(401);
            ACCEPT_TOKEN(sym_identifier_name);
        case 401:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 402:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 403:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 404:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(216);
            if (lookahead == 'h')
                ADVANCE(225);
            if (lookahead == 't')
                ADVANCE(405);
            ACCEPT_TOKEN(sym_identifier_name);
        case 405:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
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
                ADVANCE(235);
            ACCEPT_TOKEN(sym_identifier_name);
        case 407:
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
                ADVANCE(249);
            if (lookahead == 'l')
                ADVANCE(408);
            if (lookahead == 's')
                ADVANCE(409);
            ACCEPT_TOKEN(sym_identifier_name);
        case 408:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(253);
            ACCEPT_TOKEN(sym_identifier_name);
        case 409:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(262);
            ACCEPT_TOKEN(sym_identifier_name);
        case 410:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(411);
            ACCEPT_TOKEN(sym_identifier_name);
        case 411:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(271);
            ACCEPT_TOKEN(sym_identifier_name);
        case 412:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(412);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(413);
            if (lookahead == 'm')
                ADVANCE(414);
            LEX_ERROR();
        case 413:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 414:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 415:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(415);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 416:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(416);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'e')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(320);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(388);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 417:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(417);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'e')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(320);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(365);
            LEX_ERROR();
        case 418:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(418);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(422);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 419:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 420:
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
        case 421:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 422:
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
        case 423:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 424:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(425);
            ACCEPT_TOKEN(sym_identifier_name);
        case 425:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 426:
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
                ADVANCE(249);
            if (lookahead == 'l')
                ADVANCE(408);
            if (lookahead == 'n')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(409);
            ACCEPT_TOKEN(sym_identifier_name);
        case 427:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(428);
            ACCEPT_TOKEN(sym_identifier_name);
        case 428:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier_name);
        case 429:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(429);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(290);
            LEX_ERROR();
        case 430:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(430);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(431);
            LEX_ERROR();
        case 431:
            if (lookahead == 't')
                ADVANCE(432);
            LEX_ERROR();
        case 432:
            if (lookahead == 'r')
                ADVANCE(361);
            LEX_ERROR();
        case 433:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(433);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(393);
            LEX_ERROR();
        case 434:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(434);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'd')
                ADVANCE(295);
            LEX_ERROR();
        case 435:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(435);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 436:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 437:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier_name);
        case 438:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(438);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'e')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(320);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(388);
            LEX_ERROR();
        case 439:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(439);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 440:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(440);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 441:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(441);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 442:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(442);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 443:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(443);
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
        case 444:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(444);
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
        case 445:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(445);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(8);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(447);
            if (lookahead == 'r')
                ADVANCE(448);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 447:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 448:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(449);
            ACCEPT_TOKEN(sym_identifier_name);
        case 449:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 450:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(450);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 451:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(451);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 452:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(452);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(453);
            LEX_ERROR();
        case 453:
            if (lookahead == 'a')
                ADVANCE(454);
            LEX_ERROR();
        case 454:
            if (lookahead == 'r')
                ADVANCE(455);
            LEX_ERROR();
        case 455:
            if (lookahead == 'a')
                ADVANCE(456);
            LEX_ERROR();
        case 456:
            if (lookahead == 'm')
                ADVANCE(457);
            LEX_ERROR();
        case 457:
            if (lookahead == 's')
                ADVANCE(458);
            LEX_ERROR();
        case 458:
            ACCEPT_TOKEN(sym_params_keyword);
        case 459:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(459);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(447);
            if (lookahead == 'r')
                ADVANCE(448);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 460:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(460);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 461:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(461);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 462:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(462);
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
                ADVANCE(279);
            LEX_ERROR();
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
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(448);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 464:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(464);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(453);
            LEX_ERROR();
        case 465:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(465);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(448);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 466:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(466);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(467);
            if (lookahead == '{')
                ADVANCE(279);
            LEX_ERROR();
        case 467:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 468:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(468);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 469:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(469);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(470);
            if (lookahead == 'c')
                ADVANCE(474);
            if (lookahead == 'i')
                ADVANCE(478);
            if (lookahead == 'l')
                ADVANCE(481);
            if (lookahead == 's')
                ADVANCE(485);
            if (lookahead == 'u')
                ADVANCE(494);
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
            ACCEPT_TOKEN(anon_sym_byte);
        case 474:
            if (lookahead == 'h')
                ADVANCE(475);
            LEX_ERROR();
        case 475:
            if (lookahead == 'a')
                ADVANCE(476);
            LEX_ERROR();
        case 476:
            if (lookahead == 'r')
                ADVANCE(477);
            LEX_ERROR();
        case 477:
            ACCEPT_TOKEN(anon_sym_char);
        case 478:
            if (lookahead == 'n')
                ADVANCE(479);
            LEX_ERROR();
        case 479:
            if (lookahead == 't')
                ADVANCE(480);
            LEX_ERROR();
        case 480:
            ACCEPT_TOKEN(anon_sym_int);
        case 481:
            if (lookahead == 'o')
                ADVANCE(482);
            LEX_ERROR();
        case 482:
            if (lookahead == 'n')
                ADVANCE(483);
            LEX_ERROR();
        case 483:
            if (lookahead == 'g')
                ADVANCE(484);
            LEX_ERROR();
        case 484:
            ACCEPT_TOKEN(anon_sym_long);
        case 485:
            if (lookahead == 'b')
                ADVANCE(486);
            if (lookahead == 'h')
                ADVANCE(490);
            LEX_ERROR();
        case 486:
            if (lookahead == 'y')
                ADVANCE(487);
            LEX_ERROR();
        case 487:
            if (lookahead == 't')
                ADVANCE(488);
            LEX_ERROR();
        case 488:
            if (lookahead == 'e')
                ADVANCE(489);
            LEX_ERROR();
        case 489:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 490:
            if (lookahead == 'o')
                ADVANCE(491);
            LEX_ERROR();
        case 491:
            if (lookahead == 'r')
                ADVANCE(492);
            LEX_ERROR();
        case 492:
            if (lookahead == 't')
                ADVANCE(493);
            LEX_ERROR();
        case 493:
            ACCEPT_TOKEN(anon_sym_short);
        case 494:
            if (lookahead == 'i')
                ADVANCE(495);
            if (lookahead == 'l')
                ADVANCE(498);
            if (lookahead == 's')
                ADVANCE(502);
            LEX_ERROR();
        case 495:
            if (lookahead == 'n')
                ADVANCE(496);
            LEX_ERROR();
        case 496:
            if (lookahead == 't')
                ADVANCE(497);
            LEX_ERROR();
        case 497:
            ACCEPT_TOKEN(anon_sym_uint);
        case 498:
            if (lookahead == 'o')
                ADVANCE(499);
            LEX_ERROR();
        case 499:
            if (lookahead == 'n')
                ADVANCE(500);
            LEX_ERROR();
        case 500:
            if (lookahead == 'g')
                ADVANCE(501);
            LEX_ERROR();
        case 501:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 502:
            if (lookahead == 'h')
                ADVANCE(503);
            LEX_ERROR();
        case 503:
            if (lookahead == 'o')
                ADVANCE(504);
            LEX_ERROR();
        case 504:
            if (lookahead == 'r')
                ADVANCE(505);
            LEX_ERROR();
        case 505:
            if (lookahead == 't')
                ADVANCE(506);
            LEX_ERROR();
        case 506:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 507:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(507);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(279);
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
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 509:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(509);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 510:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(510);
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
                ADVANCE(511);
            if (lookahead == 'n')
                ADVANCE(516);
            if (lookahead == 't')
                ADVANCE(520);
            LEX_ERROR();
        case 511:
            if (lookahead == 'a')
                ADVANCE(512);
            LEX_ERROR();
        case 512:
            if (lookahead == 'l')
                ADVANCE(513);
            LEX_ERROR();
        case 513:
            if (lookahead == 's')
                ADVANCE(514);
            LEX_ERROR();
        case 514:
            if (lookahead == 'e')
                ADVANCE(515);
            LEX_ERROR();
        case 515:
            ACCEPT_TOKEN(anon_sym_false);
        case 516:
            if (lookahead == 'u')
                ADVANCE(517);
            LEX_ERROR();
        case 517:
            if (lookahead == 'l')
                ADVANCE(518);
            LEX_ERROR();
        case 518:
            if (lookahead == 'l')
                ADVANCE(519);
            LEX_ERROR();
        case 519:
            ACCEPT_TOKEN(sym_null_literal);
        case 520:
            if (lookahead == 'r')
                ADVANCE(521);
            LEX_ERROR();
        case 521:
            if (lookahead == 'u')
                ADVANCE(522);
            LEX_ERROR();
        case 522:
            if (lookahead == 'e')
                ADVANCE(523);
            LEX_ERROR();
        case 523:
            ACCEPT_TOKEN(anon_sym_true);
        case 524:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(524);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 525:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(526);
            if (lookahead == '/')
                ADVANCE(527);
            if (lookahead == '\\')
                ADVANCE(528);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(526);
            LEX_ERROR();
        case 526:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 527:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 528:
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
        case 529:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(529);
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
                ADVANCE(530);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(531);
            if (lookahead == 'L')
                ADVANCE(532);
            if (lookahead == 'U')
                ADVANCE(534);
            if (lookahead == 'l')
                ADVANCE(532);
            if (lookahead == 'u')
                ADVANCE(534);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 530:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 531:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 532:
            if (lookahead == 'U')
                ADVANCE(533);
            if (lookahead == 'u')
                ADVANCE(533);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 533:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 534:
            if (lookahead == 'L')
                ADVANCE(533);
            if (lookahead == 'l')
                ADVANCE(533);
            ACCEPT_TOKEN(sym__integer_type_suffix);
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
            if (lookahead == 'L')
                ADVANCE(532);
            if (lookahead == 'U')
                ADVANCE(534);
            if (lookahead == 'l')
                ADVANCE(532);
            if (lookahead == 'u')
                ADVANCE(534);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 536:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(536);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 537:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(538);
            if (lookahead == '\n')
                SKIP(537);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(539);
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
                ADVANCE(538);
            LEX_ERROR();
        case 538:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 539:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 540:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(541);
            if (lookahead == '/')
                ADVANCE(542);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(546);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 541:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(541);
            if (lookahead == '/')
                ADVANCE(542);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(546);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 542:
            if (lookahead == '*')
                ADVANCE(543);
            if (lookahead == '/')
                ADVANCE(547);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(546);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 543:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(544);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(543);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 544:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(545);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(543);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 545:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(546);
            ACCEPT_TOKEN(sym_comment);
        case 546:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(546);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 547:
            if (lookahead == '\n')
                ADVANCE(546);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(548);
            ACCEPT_TOKEN(sym_comment);
        case 548:
            if (lookahead == '\n')
                ADVANCE(546);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(548);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 549:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(549);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 550:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(538);
            if (lookahead == '\n')
                SKIP(550);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(539);
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
                ADVANCE(538);
            LEX_ERROR();
        case 551:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(551);
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
                ADVANCE(530);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(531);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 552:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(552);
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
                ADVANCE(530);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 553:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(553);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 554:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(554);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(422);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 555:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(555);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(279);
            LEX_ERROR();
        case 556:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(556);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 557:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(557);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 558:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(558);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(559);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 559:
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
                ADVANCE(216);
            if (lookahead == 'e')
                ADVANCE(220);
            if (lookahead == 'h')
                ADVANCE(225);
            if (lookahead == 't')
                ADVANCE(560);
            ACCEPT_TOKEN(sym_identifier_name);
        case 560:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'r')
                ADVANCE(406);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(563);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 563:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(216);
            if (lookahead == 'h')
                ADVANCE(225);
            if (lookahead == 't')
                ADVANCE(560);
            ACCEPT_TOKEN(sym_identifier_name);
        case 564:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(564);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 565:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(565);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 567:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(567);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(467);
            LEX_ERROR();
        case 568:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(568);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(387);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(388);
            LEX_ERROR();
        case 569:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(569);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(570);
            LEX_ERROR();
        case 570:
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 571:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(571);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(279);
            LEX_ERROR();
        case 572:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(572);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 573:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(573);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(279);
            LEX_ERROR();
        case 574:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(574);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'c')
                ADVANCE(290);
            if (lookahead == 'd')
                ADVANCE(295);
            if (lookahead == 'e')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(312);
            if (lookahead == 'n')
                ADVANCE(320);
            if (lookahead == 'p')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(388);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 575:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(575);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 576:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(576);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 577:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(577);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(578);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(422);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(579);
            if (lookahead == 'v')
                ADVANCE(427);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 578:
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
        case 579:
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
                ADVANCE(249);
            if (lookahead == 'l')
                ADVANCE(408);
            if (lookahead == 'n')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(261);
            ACCEPT_TOKEN(sym_identifier_name);
        case 580:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(580);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(422);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 581:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(581);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'g')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(403);
            if (lookahead == 'p')
                ADVANCE(423);
            if (lookahead == 'r')
                ADVANCE(424);
            if (lookahead == 's')
                ADVANCE(559);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 582:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(582);
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
                ADVANCE(583);
            if (lookahead == 'c')
                ADVANCE(395);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 's')
                ADVANCE(584);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 583:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 584:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(216);
            if (lookahead == 'h')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 585:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(585);
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
                ADVANCE(395);
            if (lookahead == 'd')
                ADVANCE(396);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(399);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(448);
            if (lookahead == 's')
                ADVANCE(404);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 586:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(586);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 587:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(587);
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
                ADVANCE(413);
            if (lookahead == 'm')
                ADVANCE(414);
            LEX_ERROR();
        case 588:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(588);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(422);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 589:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(589);
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
                ADVANCE(590);
            if (lookahead == 'g')
                ADVANCE(136);
            if (lookahead == 'n')
                ADVANCE(591);
            if (lookahead == 't')
                ADVANCE(592);
            LEX_ERROR();
        case 590:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 591:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 592:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier_name);
        case 593:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(526);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(527);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(528);
            if (lookahead == '}')
                ADVANCE(280);
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
                ADVANCE(526);
            LEX_ERROR();
        case 594:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(594);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 595:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(538);
            if (lookahead == '\n')
                SKIP(595);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(539);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(280);
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
                ADVANCE(538);
            LEX_ERROR();
        case 596:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(596);
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
                ADVANCE(467);
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
                ADVANCE(447);
            if (lookahead == '{')
                ADVANCE(279);
            if (lookahead == '}')
                ADVANCE(280);
            LEX_ERROR();
        case 597:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(597);
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
                ADVANCE(419);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(420);
            if (lookahead == 'e')
                ADVANCE(421);
            if (lookahead == 'f')
                ADVANCE(398);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(402);
            if (lookahead == 'n')
                ADVANCE(436);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(215);
            if (lookahead == 't')
                ADVANCE(437);
            if (lookahead == 'u')
                ADVANCE(426);
            if (lookahead == 'v')
                ADVANCE(427);
            LEX_ERROR();
        case 598:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(598);
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
                ADVANCE(453);
            LEX_ERROR();
        case 599:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(599);
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
                ADVANCE(280);
            LEX_ERROR();
        case 600:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(600);
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
                ADVANCE(280);
            LEX_ERROR();
        case 601:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(601);
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
    [1] = 281,
    [2] = 375,
    [3] = 381,
    [4] = 384,
    [5] = 385,
    [6] = 386,
    [7] = 389,
    [8] = 392,
    [9] = 385,
    [10] = 385,
    [11] = 394,
    [12] = 412,
    [13] = 415,
    [14] = 416,
    [15] = 281,
    [16] = 417,
    [17] = 418,
    [18] = 429,
    [19] = 429,
    [20] = 430,
    [21] = 430,
    [22] = 433,
    [23] = 434,
    [24] = 392,
    [25] = 435,
    [26] = 438,
    [27] = 281,
    [28] = 417,
    [29] = 438,
    [30] = 438,
    [31] = 435,
    [32] = 385,
    [33] = 435,
    [34] = 439,
    [35] = 440,
    [36] = 441,
    [37] = 385,
    [38] = 441,
    [39] = 385,
    [40] = 441,
    [41] = 441,
    [42] = 435,
    [43] = 442,
    [44] = 441,
    [45] = 441,
    [46] = 416,
    [47] = 438,
    [48] = 438,
    [49] = 417,
    [50] = 438,
    [51] = 438,
    [52] = 281,
    [53] = 417,
    [54] = 438,
    [55] = 438,
    [56] = 385,
    [57] = 385,
    [58] = 385,
    [59] = 394,
    [60] = 429,
    [61] = 430,
    [62] = 433,
    [63] = 434,
    [64] = 394,
    [65] = 443,
    [66] = 385,
    [67] = 444,
    [68] = 385,
    [69] = 443,
    [70] = 445,
    [71] = 446,
    [72] = 450,
    [73] = 418,
    [74] = 450,
    [75] = 451,
    [76] = 451,
    [77] = 442,
    [78] = 452,
    [79] = 451,
    [80] = 442,
    [81] = 459,
    [82] = 385,
    [83] = 452,
    [84] = 451,
    [85] = 451,
    [86] = 385,
    [87] = 452,
    [88] = 385,
    [89] = 452,
    [90] = 385,
    [91] = 460,
    [92] = 441,
    [93] = 385,
    [94] = 441,
    [95] = 385,
    [96] = 441,
    [97] = 441,
    [98] = 385,
    [99] = 442,
    [100] = 451,
    [101] = 443,
    [102] = 461,
    [103] = 461,
    [104] = 451,
    [105] = 462,
    [106] = 461,
    [107] = 451,
    [108] = 462,
    [109] = 461,
    [110] = 461,
    [111] = 463,
    [112] = 442,
    [113] = 464,
    [114] = 452,
    [115] = 463,
    [116] = 442,
    [117] = 452,
    [118] = 465,
    [119] = 452,
    [120] = 450,
    [121] = 385,
    [122] = 442,
    [123] = 385,
    [124] = 466,
    [125] = 468,
    [126] = 469,
    [127] = 507,
    [128] = 507,
    [129] = 468,
    [130] = 508,
    [131] = 509,
    [132] = 385,
    [133] = 508,
    [134] = 510,
    [135] = 509,
    [136] = 524,
    [137] = 525,
    [138] = 529,
    [139] = 535,
    [140] = 524,
    [141] = 536,
    [142] = 537,
    [143] = 540,
    [144] = 524,
    [145] = 524,
    [146] = 549,
    [147] = 524,
    [148] = 537,
    [149] = 550,
    [150] = 550,
    [151] = 524,
    [152] = 537,
    [153] = 537,
    [154] = 524,
    [155] = 537,
    [156] = 551,
    [157] = 524,
    [158] = 552,
    [159] = 524,
    [160] = 524,
    [161] = 536,
    [162] = 524,
    [163] = 552,
    [164] = 551,
    [165] = 552,
    [166] = 524,
    [167] = 553,
    [168] = 553,
    [169] = 553,
    [170] = 524,
    [171] = 554,
    [172] = 468,
    [173] = 509,
    [174] = 554,
    [175] = 468,
    [176] = 509,
    [177] = 418,
    [178] = 509,
    [179] = 418,
    [180] = 509,
    [181] = 509,
    [182] = 554,
    [183] = 509,
    [184] = 554,
    [185] = 418,
    [186] = 418,
    [187] = 385,
    [188] = 555,
    [189] = 556,
    [190] = 507,
    [191] = 556,
    [192] = 418,
    [193] = 557,
    [194] = 558,
    [195] = 561,
    [196] = 562,
    [197] = 556,
    [198] = 561,
    [199] = 451,
    [200] = 451,
    [201] = 450,
    [202] = 385,
    [203] = 556,
    [204] = 418,
    [205] = 556,
    [206] = 564,
    [207] = 565,
    [208] = 385,
    [209] = 565,
    [210] = 385,
    [211] = 565,
    [212] = 565,
    [213] = 565,
    [214] = 556,
    [215] = 450,
    [216] = 556,
    [217] = 451,
    [218] = 450,
    [219] = 556,
    [220] = 418,
    [221] = 556,
    [222] = 385,
    [223] = 555,
    [224] = 556,
    [225] = 507,
    [226] = 556,
    [227] = 418,
    [228] = 556,
    [229] = 418,
    [230] = 418,
    [231] = 556,
    [232] = 385,
    [233] = 445,
    [234] = 450,
    [235] = 418,
    [236] = 466,
    [237] = 468,
    [238] = 469,
    [239] = 507,
    [240] = 468,
    [241] = 509,
    [242] = 509,
    [243] = 509,
    [244] = 554,
    [245] = 509,
    [246] = 418,
    [247] = 555,
    [248] = 556,
    [249] = 507,
    [250] = 418,
    [251] = 556,
    [252] = 555,
    [253] = 556,
    [254] = 507,
    [255] = 418,
    [256] = 556,
    [257] = 451,
    [258] = 385,
    [259] = 445,
    [260] = 450,
    [261] = 418,
    [262] = 466,
    [263] = 468,
    [264] = 469,
    [265] = 507,
    [266] = 509,
    [267] = 554,
    [268] = 509,
    [269] = 418,
    [270] = 555,
    [271] = 556,
    [272] = 507,
    [273] = 418,
    [274] = 556,
    [275] = 566,
    [276] = 429,
    [277] = 430,
    [278] = 555,
    [279] = 556,
    [280] = 507,
    [281] = 418,
    [282] = 556,
    [283] = 567,
    [284] = 385,
    [285] = 440,
    [286] = 438,
    [287] = 568,
    [288] = 569,
    [289] = 571,
    [290] = 572,
    [291] = 385,
    [292] = 573,
    [293] = 574,
    [294] = 416,
    [295] = 574,
    [296] = 416,
    [297] = 385,
    [298] = 572,
    [299] = 384,
    [300] = 575,
    [301] = 576,
    [302] = 384,
    [303] = 576,
    [304] = 417,
    [305] = 417,
    [306] = 384,
    [307] = 385,
    [308] = 450,
    [309] = 281,
    [310] = 577,
    [311] = 580,
    [312] = 554,
    [313] = 385,
    [314] = 581,
    [315] = 385,
    [316] = 385,
    [317] = 582,
    [318] = 585,
    [319] = 462,
    [320] = 394,
    [321] = 446,
    [322] = 586,
    [323] = 451,
    [324] = 587,
    [325] = 588,
    [326] = 589,
    [327] = 593,
    [328] = 550,
    [329] = 529,
    [330] = 594,
    [331] = 524,
    [332] = 552,
    [333] = 595,
    [334] = 462,
    [335] = 596,
    [336] = 418,
    [337] = 281,
    [338] = 417,
    [339] = 416,
    [340] = 429,
    [341] = 429,
    [342] = 430,
    [343] = 430,
    [344] = 509,
    [345] = 433,
    [346] = 507,
    [347] = 434,
    [348] = 385,
    [349] = 450,
    [350] = 452,
    [351] = 451,
    [352] = 442,
    [353] = 385,
    [354] = 597,
    [355] = 435,
    [356] = 440,
    [357] = 441,
    [358] = 438,
    [359] = 556,
    [360] = 451,
    [361] = 451,
    [362] = 450,
    [363] = 443,
    [364] = 565,
    [365] = 524,
    [366] = 537,
    [367] = 462,
    [368] = 461,
    [369] = 573,
    [370] = 417,
    [371] = 438,
    [372] = 416,
    [373] = 556,
    [374] = 509,
    [375] = 554,
    [376] = 418,
    [377] = 418,
    [378] = 438,
    [379] = 438,
    [380] = 438,
    [381] = 438,
    [382] = 417,
    [383] = 556,
    [384] = 418,
    [385] = 556,
    [386] = 418,
    [387] = 598,
    [388] = 556,
    [389] = 450,
    [390] = 556,
    [391] = 588,
    [392] = 599,
    [393] = 385,
    [394] = 598,
    [395] = 442,
    [396] = 385,
    [397] = 452,
    [398] = 418,
    [399] = 445,
    [400] = 394,
    [401] = 385,
    [402] = 445,
    [403] = 450,
    [404] = 418,
    [405] = 468,
    [406] = 509,
    [407] = 554,
    [408] = 509,
    [409] = 554,
    [410] = 418,
    [411] = 418,
    [412] = 385,
    [413] = 466,
    [414] = 468,
    [415] = 469,
    [416] = 507,
    [417] = 468,
    [418] = 509,
    [419] = 554,
    [420] = 509,
    [421] = 554,
    [422] = 418,
    [423] = 418,
    [424] = 509,
    [425] = 554,
    [426] = 509,
    [427] = 554,
    [428] = 418,
    [429] = 418,
    [430] = 554,
    [431] = 418,
    [432] = 385,
    [433] = 555,
    [434] = 556,
    [435] = 507,
    [436] = 556,
    [437] = 418,
    [438] = 556,
    [439] = 418,
    [440] = 418,
    [441] = 556,
    [442] = 385,
    [443] = 555,
    [444] = 556,
    [445] = 507,
    [446] = 556,
    [447] = 418,
    [448] = 556,
    [449] = 418,
    [450] = 418,
    [451] = 556,
    [452] = 281,
    [453] = 580,
    [454] = 469,
    [455] = 418,
    [456] = 599,
    [457] = 580,
    [458] = 509,
    [459] = 561,
    [460] = 556,
    [461] = 554,
    [462] = 509,
    [463] = 554,
    [464] = 418,
    [465] = 418,
    [466] = 524,
    [467] = 551,
    [468] = 524,
    [469] = 552,
    [470] = 524,
    [471] = 524,
    [472] = 586,
    [473] = 600,
    [474] = 509,
    [475] = 452,
    [476] = 465,
    [477] = 441,
    [478] = 601,
    [479] = 565,
    [480] = 461,
    [481] = 524,
    [482] = 466,
    [483] = 468,
    [484] = 555,
    [485] = 556,
    [486] = 507,
    [487] = 556,
    [488] = 418,
    [489] = 556,
    [490] = 418,
    [491] = 418,
    [492] = 556,
    [493] = 555,
    [494] = 556,
    [495] = 507,
    [496] = 556,
    [497] = 418,
    [498] = 556,
    [499] = 418,
    [500] = 418,
    [501] = 556,
    [502] = 418,
    [503] = 418,
    [504] = 509,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(13),
        [sym__type_declaration] = STATE(336),
        [sym_extern_alias_directive] = STATE(337),
        [sym_using_directive] = STATE(338),
        [sym_namespace_declaration] = STATE(339),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(340),
        [sym__class_modifiers] = STATE(341),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(342),
        [sym__struct_modifiers] = STATE(343),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(344),
        [sym_enum_modifier] = STATE(345),
        [sym__integral_type] = STATE(346),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(347),
        [sym__return_type] = STATE(348),
        [sym_parameter_list] = STATE(349),
        [sym__formal_parameter_list] = STATE(77),
        [sym_parameter] = STATE(350),
        [sym_parameter_modifier] = STATE(351),
        [sym_parameter_array] = STATE(352),
        [sym_array_type] = STATE(353),
        [sym_array_rank_specifier] = STATE(93),
        [sym__attributes] = STATE(354),
        [sym__attribute_section] = STATE(355),
        [sym_attribute_list] = STATE(356),
        [sym_attribute] = STATE(357),
        [sym_attribute_argument_list] = STATE(44),
        [sym__global_attributes] = STATE(358),
        [sym_field_declaration] = STATE(359),
        [sym_field_modifiers] = STATE(360),
        [sym__field_modifiers] = STATE(361),
        [sym_variable_declaration] = STATE(362),
        [sym__type] = STATE(363),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(364),
        [sym_equals_value_clause] = STATE(365),
        [sym__literal] = STATE(144),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym__unicode_escape_sequence] = STATE(328),
        [sym__simple_escape_sequence] = STATE(328),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(145),
        [sym__regular_string_literal_character] = STATE(366),
        [sym__verbatim_string_literal] = STATE(145),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter_list] = STATE(367),
        [sym_type_parameter] = STATE(368),
        [sym_qualified_name] = STATE(369),
        [sym_alias_qualified_name] = STATE(290),
        [sym_name_equals] = STATE(302),
        [sym_static] = STATE(302),
        [aux_sym_compilation_unit_repeat1] = STATE(27),
        [aux_sym_compilation_unit_repeat2] = STATE(370),
        [aux_sym_compilation_unit_repeat3] = STATE(371),
        [aux_sym_compilation_unit_repeat4] = STATE(372),
        [aux_sym_class_declaration_repeat1] = STATE(373),
        [aux_sym_enum_declaration_repeat1] = STATE(374),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [aux_sym__attributes_repeat1] = STATE(31),
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [aux_sym_variable_declaration_repeat1] = STATE(209),
        [aux_sym__regular_string_literal_repeat1] = STATE(153),
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
        [anon_sym_readonly] = ACTIONS(55),
        [anon_sym_volatile] = ACTIONS(55),
        [anon_sym_EQ] = ACTIONS(57),
        [anon_sym_true] = ACTIONS(59),
        [anon_sym_false] = ACTIONS(59),
        [anon_sym_SQUOTE] = ACTIONS(61),
        [sym__hexadecimal_escape_sequence] = ACTIONS(63),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(65),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(65),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(67),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(67),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(67),
        [anon_sym_BSLASH0] = ACTIONS(67),
        [anon_sym_BSLASHa] = ACTIONS(67),
        [anon_sym_BSLASHb] = ACTIONS(67),
        [anon_sym_BSLASHf] = ACTIONS(67),
        [anon_sym_BSLASHn] = ACTIONS(67),
        [anon_sym_BSLASHr] = ACTIONS(67),
        [anon_sym_BSLASHt] = ACTIONS(67),
        [anon_sym_BSLASHv] = ACTIONS(67),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(69),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(71),
        [sym__integer_type_suffix] = ACTIONS(73),
        [sym_null_literal] = ACTIONS(75),
        [anon_sym_DOT] = ACTIONS(77),
        [sym__real_type_suffix] = ACTIONS(79),
        [sym__exponent_part] = ACTIONS(81),
        [anon_sym_DQUOTE] = ACTIONS(83),
        [anon_sym_AT_DQUOTE] = ACTIONS(85),
        [anon_sym_bool] = ACTIONS(87),
        [anon_sym_decimal] = ACTIONS(87),
        [anon_sym_double] = ACTIONS(87),
        [anon_sym_float] = ACTIONS(87),
        [anon_sym_object] = ACTIONS(87),
        [anon_sym_string] = ACTIONS(87),
        [anon_sym_LT] = ACTIONS(89),
        [anon_sym_GT] = ACTIONS(91),
        [anon_sym_COLON_COLON] = ACTIONS(93),
        [sym_global] = ACTIONS(95),
        [sym_identifier_name] = ACTIONS(97),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_extern] = ACTIONS(103),
        [anon_sym_using] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
    },
    [2] = {
        [anon_sym_alias] = ACTIONS(125),
        [sym_comment] = ACTIONS(99),
    },
    [3] = {
        [sym_qualified_name] = STATE(301),
        [sym_alias_qualified_name] = STATE(290),
        [sym_name_equals] = STATE(302),
        [sym_static] = STATE(302),
        [anon_sym_static] = ACTIONS(127),
        [sym_global] = ACTIONS(129),
        [sym_identifier_name] = ACTIONS(131),
        [sym_comment] = ACTIONS(99),
    },
    [4] = {
        [sym_qualified_name] = STATE(289),
        [sym_alias_qualified_name] = STATE(290),
        [sym_global] = ACTIONS(129),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(99),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(99),
    },
    [6] = {
        [sym__class_modifiers] = STATE(276),
        [sym__struct_modifiers] = STATE(277),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_struct] = ACTIONS(141),
        [anon_sym_delegate] = ACTIONS(143),
        [sym_comment] = ACTIONS(99),
    },
    [7] = {
        [sym__class_modifiers] = STATE(276),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [sym_comment] = ACTIONS(99),
    },
    [8] = {
        [sym__class_modifiers] = STATE(276),
        [sym__struct_modifiers] = STATE(277),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_struct] = ACTIONS(141),
        [anon_sym_enum] = ACTIONS(145),
        [anon_sym_delegate] = ACTIONS(143),
        [sym_comment] = ACTIONS(99),
    },
    [9] = {
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(99),
    },
    [10] = {
        [sym_identifier_name] = ACTIONS(149),
        [sym_comment] = ACTIONS(99),
    },
    [11] = {
        [sym__return_type] = STATE(258),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [sym_void_keyword] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [12] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [anon_sym_assembly] = ACTIONS(157),
        [anon_sym_module] = ACTIONS(157),
        [sym_identifier_name] = ACTIONS(159),
        [sym_comment] = ACTIONS(99),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [sym_comment] = ACTIONS(99),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_namespace] = ACTIONS(163),
        [anon_sym_RBRACE] = ACTIONS(163),
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
        [sym_comment] = ACTIONS(99),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_extern] = ACTIONS(165),
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
        [sym_comment] = ACTIONS(99),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(167),
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
        [sym_comment] = ACTIONS(99),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_namespace] = ACTIONS(171),
        [anon_sym_RBRACE] = ACTIONS(169),
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
        [anon_sym_sbyte] = ACTIONS(171),
        [anon_sym_byte] = ACTIONS(171),
        [anon_sym_short] = ACTIONS(171),
        [anon_sym_ushort] = ACTIONS(171),
        [anon_sym_int] = ACTIONS(171),
        [anon_sym_uint] = ACTIONS(171),
        [anon_sym_long] = ACTIONS(171),
        [anon_sym_ulong] = ACTIONS(171),
        [anon_sym_char] = ACTIONS(171),
        [anon_sym_delegate] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(169),
        [anon_sym_readonly] = ACTIONS(171),
        [anon_sym_volatile] = ACTIONS(171),
        [anon_sym_bool] = ACTIONS(171),
        [anon_sym_decimal] = ACTIONS(171),
        [anon_sym_double] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(171),
        [anon_sym_object] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(171),
        [sym_identifier_name] = ACTIONS(173),
        [sym_comment] = ACTIONS(99),
    },
    [18] = {
        [anon_sym_class] = ACTIONS(175),
        [sym_comment] = ACTIONS(99),
    },
    [19] = {
        [anon_sym_class] = ACTIONS(177),
        [sym_comment] = ACTIONS(99),
    },
    [20] = {
        [anon_sym_struct] = ACTIONS(179),
        [sym_comment] = ACTIONS(99),
    },
    [21] = {
        [anon_sym_struct] = ACTIONS(181),
        [sym_comment] = ACTIONS(99),
    },
    [22] = {
        [anon_sym_enum] = ACTIONS(183),
        [sym_comment] = ACTIONS(99),
    },
    [23] = {
        [anon_sym_delegate] = ACTIONS(185),
        [sym_comment] = ACTIONS(99),
    },
    [24] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(179),
        [anon_sym_enum] = ACTIONS(183),
        [anon_sym_delegate] = ACTIONS(185),
        [sym_comment] = ACTIONS(99),
    },
    [25] = {
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_unsafe] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(187),
        [anon_sym_sealed] = ACTIONS(187),
        [anon_sym_static] = ACTIONS(187),
        [anon_sym_new] = ACTIONS(187),
        [anon_sym_public] = ACTIONS(187),
        [anon_sym_protected] = ACTIONS(187),
        [anon_sym_internal] = ACTIONS(187),
        [anon_sym_private] = ACTIONS(187),
        [anon_sym_struct] = ACTIONS(187),
        [anon_sym_enum] = ACTIONS(187),
        [anon_sym_sbyte] = ACTIONS(187),
        [anon_sym_byte] = ACTIONS(187),
        [anon_sym_short] = ACTIONS(187),
        [anon_sym_ushort] = ACTIONS(187),
        [anon_sym_int] = ACTIONS(187),
        [anon_sym_uint] = ACTIONS(187),
        [anon_sym_long] = ACTIONS(187),
        [anon_sym_ulong] = ACTIONS(187),
        [anon_sym_char] = ACTIONS(187),
        [anon_sym_delegate] = ACTIONS(187),
        [anon_sym_ref] = ACTIONS(187),
        [anon_sym_out] = ACTIONS(187),
        [anon_sym_this] = ACTIONS(187),
        [sym_params_keyword] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(189),
        [anon_sym_readonly] = ACTIONS(187),
        [anon_sym_volatile] = ACTIONS(187),
        [anon_sym_bool] = ACTIONS(187),
        [anon_sym_decimal] = ACTIONS(187),
        [anon_sym_double] = ACTIONS(187),
        [anon_sym_float] = ACTIONS(187),
        [anon_sym_object] = ACTIONS(187),
        [anon_sym_string] = ACTIONS(187),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(99),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_namespace] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(193),
        [anon_sym_unsafe] = ACTIONS(193),
        [anon_sym_abstract] = ACTIONS(193),
        [anon_sym_sealed] = ACTIONS(193),
        [anon_sym_static] = ACTIONS(193),
        [anon_sym_new] = ACTIONS(193),
        [anon_sym_public] = ACTIONS(193),
        [anon_sym_protected] = ACTIONS(193),
        [anon_sym_internal] = ACTIONS(193),
        [anon_sym_private] = ACTIONS(193),
        [anon_sym_struct] = ACTIONS(193),
        [anon_sym_enum] = ACTIONS(193),
        [anon_sym_delegate] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_extern] = ACTIONS(103),
        [anon_sym_using] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_using] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [31] = {
        [sym__attribute_section] = STATE(33),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_unsafe] = ACTIONS(199),
        [anon_sym_abstract] = ACTIONS(199),
        [anon_sym_sealed] = ACTIONS(199),
        [anon_sym_static] = ACTIONS(199),
        [anon_sym_new] = ACTIONS(199),
        [anon_sym_public] = ACTIONS(199),
        [anon_sym_protected] = ACTIONS(199),
        [anon_sym_internal] = ACTIONS(199),
        [anon_sym_private] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(199),
        [anon_sym_enum] = ACTIONS(199),
        [anon_sym_sbyte] = ACTIONS(199),
        [anon_sym_byte] = ACTIONS(199),
        [anon_sym_short] = ACTIONS(199),
        [anon_sym_ushort] = ACTIONS(199),
        [anon_sym_int] = ACTIONS(199),
        [anon_sym_uint] = ACTIONS(199),
        [anon_sym_long] = ACTIONS(199),
        [anon_sym_ulong] = ACTIONS(199),
        [anon_sym_char] = ACTIONS(199),
        [anon_sym_delegate] = ACTIONS(199),
        [anon_sym_ref] = ACTIONS(199),
        [anon_sym_out] = ACTIONS(199),
        [anon_sym_this] = ACTIONS(199),
        [sym_params_keyword] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(199),
        [anon_sym_volatile] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(199),
        [anon_sym_decimal] = ACTIONS(199),
        [anon_sym_double] = ACTIONS(199),
        [anon_sym_float] = ACTIONS(199),
        [anon_sym_object] = ACTIONS(199),
        [anon_sym_string] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(99),
    },
    [32] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(99),
    },
    [33] = {
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [anon_sym_abstract] = ACTIONS(205),
        [anon_sym_sealed] = ACTIONS(205),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(205),
        [anon_sym_enum] = ACTIONS(205),
        [anon_sym_sbyte] = ACTIONS(205),
        [anon_sym_byte] = ACTIONS(205),
        [anon_sym_short] = ACTIONS(205),
        [anon_sym_ushort] = ACTIONS(205),
        [anon_sym_int] = ACTIONS(205),
        [anon_sym_uint] = ACTIONS(205),
        [anon_sym_long] = ACTIONS(205),
        [anon_sym_ulong] = ACTIONS(205),
        [anon_sym_char] = ACTIONS(205),
        [anon_sym_delegate] = ACTIONS(205),
        [anon_sym_ref] = ACTIONS(205),
        [anon_sym_out] = ACTIONS(205),
        [anon_sym_this] = ACTIONS(205),
        [sym_params_keyword] = ACTIONS(205),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(205),
        [anon_sym_volatile] = ACTIONS(205),
        [anon_sym_bool] = ACTIONS(205),
        [anon_sym_decimal] = ACTIONS(205),
        [anon_sym_double] = ACTIONS(205),
        [anon_sym_float] = ACTIONS(205),
        [anon_sym_object] = ACTIONS(205),
        [anon_sym_string] = ACTIONS(205),
        [sym_identifier_name] = ACTIONS(209),
        [sym_comment] = ACTIONS(99),
    },
    [34] = {
        [sym_attribute_argument_list] = STATE(44),
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(211),
        [sym_comment] = ACTIONS(99),
    },
    [35] = {
        [anon_sym_RBRACK] = ACTIONS(215),
        [sym_comment] = ACTIONS(99),
    },
    [36] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(99),
    },
    [37] = {
        [sym_attribute] = STATE(41),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(99),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(223),
        [sym_comment] = ACTIONS(99),
    },
    [39] = {
        [sym_attribute] = STATE(40),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(99),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(99),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(99),
    },
    [42] = {
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
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_delegate] = ACTIONS(229),
        [anon_sym_ref] = ACTIONS(229),
        [anon_sym_out] = ACTIONS(229),
        [anon_sym_this] = ACTIONS(229),
        [sym_params_keyword] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(229),
        [anon_sym_volatile] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(99),
    },
    [43] = {
        [anon_sym_RPAREN] = ACTIONS(235),
        [sym_comment] = ACTIONS(99),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(99),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(99),
    },
    [46] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_namespace] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(241),
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
        [sym_comment] = ACTIONS(99),
    },
    [47] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(243),
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
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_using] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(247),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_unsafe] = ACTIONS(247),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(247),
        [anon_sym_new] = ACTIONS(247),
        [anon_sym_public] = ACTIONS(247),
        [anon_sym_protected] = ACTIONS(247),
        [anon_sym_internal] = ACTIONS(247),
        [anon_sym_private] = ACTIONS(247),
        [anon_sym_struct] = ACTIONS(247),
        [anon_sym_enum] = ACTIONS(247),
        [anon_sym_delegate] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(249),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [52] = {
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_extern] = ACTIONS(251),
        [anon_sym_using] = ACTIONS(251),
        [anon_sym_namespace] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_unsafe] = ACTIONS(251),
        [anon_sym_abstract] = ACTIONS(251),
        [anon_sym_sealed] = ACTIONS(251),
        [anon_sym_static] = ACTIONS(251),
        [anon_sym_new] = ACTIONS(251),
        [anon_sym_public] = ACTIONS(251),
        [anon_sym_protected] = ACTIONS(251),
        [anon_sym_internal] = ACTIONS(251),
        [anon_sym_private] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_enum] = ACTIONS(251),
        [anon_sym_delegate] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_using] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(249),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
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
        [ts_builtin_sym_end] = ACTIONS(253),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [56] = {
        [sym_identifier_name] = ACTIONS(255),
        [sym_comment] = ACTIONS(99),
    },
    [57] = {
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(99),
    },
    [58] = {
        [sym_identifier_name] = ACTIONS(259),
        [sym_comment] = ACTIONS(99),
    },
    [59] = {
        [sym__return_type] = STATE(232),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [sym_void_keyword] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [60] = {
        [anon_sym_class] = ACTIONS(261),
        [sym_comment] = ACTIONS(99),
    },
    [61] = {
        [anon_sym_struct] = ACTIONS(263),
        [sym_comment] = ACTIONS(99),
    },
    [62] = {
        [anon_sym_enum] = ACTIONS(265),
        [sym_comment] = ACTIONS(99),
    },
    [63] = {
        [anon_sym_delegate] = ACTIONS(267),
        [sym_comment] = ACTIONS(99),
    },
    [64] = {
        [sym__return_type] = STATE(68),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [sym_void_keyword] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_GT] = ACTIONS(269),
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(99),
    },
    [66] = {
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(99),
    },
    [67] = {
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_LT] = ACTIONS(277),
        [anon_sym_GT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(99),
    },
    [68] = {
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(99),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(99),
    },
    [70] = {
        [sym_parameter_list] = STATE(72),
        [anon_sym_LPAREN] = ACTIONS(283),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [sym_params_keyword] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(291),
        [sym_comment] = ACTIONS(99),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_namespace] = ACTIONS(295),
        [anon_sym_RBRACE] = ACTIONS(293),
        [anon_sym_class] = ACTIONS(295),
        [anon_sym_unsafe] = ACTIONS(295),
        [anon_sym_abstract] = ACTIONS(295),
        [anon_sym_sealed] = ACTIONS(295),
        [anon_sym_static] = ACTIONS(295),
        [anon_sym_new] = ACTIONS(295),
        [anon_sym_public] = ACTIONS(295),
        [anon_sym_protected] = ACTIONS(295),
        [anon_sym_internal] = ACTIONS(295),
        [anon_sym_private] = ACTIONS(295),
        [anon_sym_struct] = ACTIONS(295),
        [anon_sym_enum] = ACTIONS(295),
        [anon_sym_sbyte] = ACTIONS(295),
        [anon_sym_byte] = ACTIONS(295),
        [anon_sym_short] = ACTIONS(295),
        [anon_sym_ushort] = ACTIONS(295),
        [anon_sym_int] = ACTIONS(295),
        [anon_sym_uint] = ACTIONS(295),
        [anon_sym_long] = ACTIONS(295),
        [anon_sym_ulong] = ACTIONS(295),
        [anon_sym_char] = ACTIONS(295),
        [anon_sym_delegate] = ACTIONS(295),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_readonly] = ACTIONS(295),
        [anon_sym_volatile] = ACTIONS(295),
        [anon_sym_bool] = ACTIONS(295),
        [anon_sym_decimal] = ACTIONS(295),
        [anon_sym_double] = ACTIONS(295),
        [anon_sym_float] = ACTIONS(295),
        [anon_sym_object] = ACTIONS(295),
        [anon_sym_string] = ACTIONS(295),
        [sym_identifier_name] = ACTIONS(297),
        [sym_comment] = ACTIONS(99),
    },
    [74] = {
        [anon_sym_SEMI] = ACTIONS(299),
        [sym_comment] = ACTIONS(99),
    },
    [75] = {
        [anon_sym_sbyte] = ACTIONS(301),
        [anon_sym_byte] = ACTIONS(301),
        [anon_sym_short] = ACTIONS(301),
        [anon_sym_ushort] = ACTIONS(301),
        [anon_sym_int] = ACTIONS(301),
        [anon_sym_uint] = ACTIONS(301),
        [anon_sym_long] = ACTIONS(301),
        [anon_sym_ulong] = ACTIONS(301),
        [anon_sym_char] = ACTIONS(301),
        [anon_sym_bool] = ACTIONS(301),
        [anon_sym_decimal] = ACTIONS(301),
        [anon_sym_double] = ACTIONS(301),
        [anon_sym_float] = ACTIONS(301),
        [anon_sym_object] = ACTIONS(301),
        [anon_sym_string] = ACTIONS(301),
        [sym_identifier_name] = ACTIONS(303),
        [sym_comment] = ACTIONS(99),
    },
    [76] = {
        [sym_array_type] = STATE(121),
        [sym__type] = STATE(91),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [77] = {
        [anon_sym_RPAREN] = ACTIONS(305),
        [sym_comment] = ACTIONS(99),
    },
    [78] = {
        [sym_parameter_array] = STATE(112),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_RPAREN] = ACTIONS(309),
        [sym_params_keyword] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [79] = {
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [80] = {
        [anon_sym_RPAREN] = ACTIONS(309),
        [sym_comment] = ACTIONS(99),
    },
    [81] = {
        [sym_parameter_modifier] = STATE(85),
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [sym_params_keyword] = ACTIONS(313),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [82] = {
        [sym_identifier_name] = ACTIONS(315),
        [sym_comment] = ACTIONS(99),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_params_keyword] = ACTIONS(317),
        [anon_sym_LBRACK] = ACTIONS(317),
        [sym_comment] = ACTIONS(99),
    },
    [84] = {
        [sym_array_type] = STATE(90),
        [sym__type] = STATE(91),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [85] = {
        [sym__type] = STATE(88),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [86] = {
        [sym_identifier_name] = ACTIONS(319),
        [sym_comment] = ACTIONS(99),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(321),
        [sym_params_keyword] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(99),
    },
    [88] = {
        [sym_identifier_name] = ACTIONS(323),
        [sym_comment] = ACTIONS(99),
    },
    [89] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_params_keyword] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(325),
        [sym_comment] = ACTIONS(99),
    },
    [90] = {
        [sym_identifier_name] = ACTIONS(327),
        [sym_comment] = ACTIONS(99),
    },
    [91] = {
        [sym_array_rank_specifier] = STATE(93),
        [anon_sym_LBRACK] = ACTIONS(329),
        [sym_comment] = ACTIONS(99),
    },
    [92] = {
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_RBRACK] = ACTIONS(333),
        [sym_comment] = ACTIONS(99),
    },
    [93] = {
        [sym_identifier_name] = ACTIONS(335),
        [sym_comment] = ACTIONS(99),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_RBRACK] = ACTIONS(337),
        [sym_comment] = ACTIONS(99),
    },
    [95] = {
        [sym_identifier_name] = ACTIONS(339),
        [sym_comment] = ACTIONS(99),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(343),
        [sym_comment] = ACTIONS(99),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_RBRACK] = ACTIONS(345),
        [sym_comment] = ACTIONS(99),
    },
    [98] = {
        [sym_identifier_name] = ACTIONS(347),
        [sym_comment] = ACTIONS(99),
    },
    [99] = {
        [anon_sym_RPAREN] = ACTIONS(349),
        [sym_comment] = ACTIONS(99),
    },
    [100] = {
        [sym__type] = STATE(102),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(103),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_LBRACK] = ACTIONS(351),
        [anon_sym_GT] = ACTIONS(351),
        [sym_identifier_name] = ACTIONS(353),
        [sym_comment] = ACTIONS(99),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_GT] = ACTIONS(355),
        [sym_comment] = ACTIONS(99),
    },
    [103] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_GT] = ACTIONS(359),
        [sym_comment] = ACTIONS(99),
    },
    [104] = {
        [sym__type] = STATE(102),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(110),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [105] = {
        [anon_sym_LBRACE] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_GT] = ACTIONS(361),
        [sym_identifier_name] = ACTIONS(363),
        [sym_comment] = ACTIONS(99),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_GT] = ACTIONS(367),
        [sym_comment] = ACTIONS(99),
    },
    [107] = {
        [sym__type] = STATE(102),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(109),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [108] = {
        [anon_sym_LBRACE] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(369),
        [anon_sym_GT] = ACTIONS(369),
        [sym_identifier_name] = ACTIONS(371),
        [sym_comment] = ACTIONS(99),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_GT] = ACTIONS(373),
        [sym_comment] = ACTIONS(99),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_GT] = ACTIONS(375),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [112] = {
        [anon_sym_RPAREN] = ACTIONS(377),
        [sym_comment] = ACTIONS(99),
    },
    [113] = {
        [sym_params_keyword] = ACTIONS(379),
        [sym_comment] = ACTIONS(99),
    },
    [114] = {
        [sym_parameter_array] = STATE(116),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(381),
        [anon_sym_RPAREN] = ACTIONS(377),
        [sym_params_keyword] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [116] = {
        [anon_sym_RPAREN] = ACTIONS(383),
        [sym_comment] = ACTIONS(99),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [sym_params_keyword] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [sym_comment] = ACTIONS(99),
    },
    [118] = {
        [sym_parameter_modifier] = STATE(85),
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_RPAREN] = ACTIONS(387),
        [sym_params_keyword] = ACTIONS(387),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_comment] = ACTIONS(99),
    },
    [120] = {
        [anon_sym_SEMI] = ACTIONS(389),
        [sym_comment] = ACTIONS(99),
    },
    [121] = {
        [sym_identifier_name] = ACTIONS(391),
        [sym_comment] = ACTIONS(99),
    },
    [122] = {
        [anon_sym_RPAREN] = ACTIONS(393),
        [sym_comment] = ACTIONS(99),
    },
    [123] = {
        [sym_identifier_name] = ACTIONS(395),
        [sym_comment] = ACTIONS(99),
    },
    [124] = {
        [anon_sym_LBRACE] = ACTIONS(397),
        [anon_sym_COLON] = ACTIONS(399),
        [sym_comment] = ACTIONS(99),
    },
    [125] = {
        [sym_enum_member_declaration] = STATE(181),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [126] = {
        [sym__integral_type] = STATE(128),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [sym_comment] = ACTIONS(99),
    },
    [127] = {
        [anon_sym_LBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(99),
    },
    [128] = {
        [anon_sym_LBRACE] = ACTIONS(407),
        [sym_comment] = ACTIONS(99),
    },
    [129] = {
        [sym_enum_member_declaration] = STATE(131),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [130] = {
        [sym_equals_value_clause] = STATE(180),
        [anon_sym_RBRACE] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_EQ] = ACTIONS(411),
        [sym_comment] = ACTIONS(99),
    },
    [131] = {
        [aux_sym_enum_declaration_repeat1] = STATE(173),
        [anon_sym_RBRACE] = ACTIONS(413),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [132] = {
        [sym_identifier_name] = ACTIONS(417),
        [sym_comment] = ACTIONS(99),
    },
    [133] = {
        [sym_equals_value_clause] = STATE(135),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(419),
        [anon_sym_EQ] = ACTIONS(411),
        [sym_comment] = ACTIONS(99),
    },
    [134] = {
        [sym__literal] = STATE(144),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(145),
        [sym__verbatim_string_literal] = STATE(145),
        [anon_sym_true] = ACTIONS(421),
        [anon_sym_false] = ACTIONS(421),
        [anon_sym_SQUOTE] = ACTIONS(423),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(425),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(427),
        [sym_null_literal] = ACTIONS(429),
        [anon_sym_DOT] = ACTIONS(431),
        [anon_sym_DQUOTE] = ACTIONS(433),
        [anon_sym_AT_DQUOTE] = ACTIONS(435),
        [sym_comment] = ACTIONS(99),
    },
    [135] = {
        [anon_sym_RBRACE] = ACTIONS(437),
        [anon_sym_COMMA] = ACTIONS(437),
        [sym_comment] = ACTIONS(99),
    },
    [136] = {
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [sym_comment] = ACTIONS(99),
    },
    [137] = {
        [sym__unicode_escape_sequence] = STATE(167),
        [sym__simple_escape_sequence] = STATE(167),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(441),
        [sym__hexadecimal_escape_sequence] = ACTIONS(441),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(443),
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
        [sym_comment] = ACTIONS(99),
    },
    [138] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym__integer_type_suffix] = ACTIONS(449),
        [anon_sym_DOT] = ACTIONS(451),
        [sym__real_type_suffix] = ACTIONS(453),
        [sym__exponent_part] = ACTIONS(455),
        [sym_comment] = ACTIONS(99),
    },
    [139] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym__integer_type_suffix] = ACTIONS(449),
        [sym_comment] = ACTIONS(99),
    },
    [140] = {
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(457),
        [anon_sym_COMMA] = ACTIONS(457),
        [sym_comment] = ACTIONS(99),
    },
    [141] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(459),
        [sym_comment] = ACTIONS(99),
    },
    [142] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [sym__regular_string_literal_character] = STATE(152),
        [aux_sym__regular_string_literal_repeat1] = STATE(153),
        [sym__hexadecimal_escape_sequence] = ACTIONS(461),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(463),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(465),
        [anon_sym_BSLASH0] = ACTIONS(465),
        [anon_sym_BSLASHa] = ACTIONS(465),
        [anon_sym_BSLASHb] = ACTIONS(465),
        [anon_sym_BSLASHf] = ACTIONS(465),
        [anon_sym_BSLASHn] = ACTIONS(465),
        [anon_sym_BSLASHr] = ACTIONS(465),
        [anon_sym_BSLASHt] = ACTIONS(465),
        [anon_sym_BSLASHv] = ACTIONS(465),
        [anon_sym_DQUOTE] = ACTIONS(467),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(461),
        [sym_comment] = ACTIONS(99),
    },
    [143] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(469),
        [sym_comment] = ACTIONS(471),
    },
    [144] = {
        [anon_sym_SEMI] = ACTIONS(473),
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(473),
        [sym_comment] = ACTIONS(99),
    },
    [145] = {
        [anon_sym_SEMI] = ACTIONS(475),
        [anon_sym_RBRACE] = ACTIONS(475),
        [anon_sym_COMMA] = ACTIONS(475),
        [sym_comment] = ACTIONS(99),
    },
    [146] = {
        [anon_sym_DQUOTE] = ACTIONS(477),
        [sym_comment] = ACTIONS(99),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_RBRACE] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(479),
        [sym_comment] = ACTIONS(99),
    },
    [148] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(481),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(483),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(483),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(483),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(483),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(483),
        [anon_sym_BSLASH0] = ACTIONS(483),
        [anon_sym_BSLASHa] = ACTIONS(483),
        [anon_sym_BSLASHb] = ACTIONS(483),
        [anon_sym_BSLASHf] = ACTIONS(483),
        [anon_sym_BSLASHn] = ACTIONS(483),
        [anon_sym_BSLASHr] = ACTIONS(483),
        [anon_sym_BSLASHt] = ACTIONS(483),
        [anon_sym_BSLASHv] = ACTIONS(483),
        [anon_sym_DQUOTE] = ACTIONS(483),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(481),
        [sym_comment] = ACTIONS(99),
    },
    [149] = {
        [anon_sym_SQUOTE] = ACTIONS(485),
        [sym__hexadecimal_escape_sequence] = ACTIONS(487),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(485),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(485),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(485),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(485),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(485),
        [anon_sym_BSLASH0] = ACTIONS(485),
        [anon_sym_BSLASHa] = ACTIONS(485),
        [anon_sym_BSLASHb] = ACTIONS(485),
        [anon_sym_BSLASHf] = ACTIONS(485),
        [anon_sym_BSLASHn] = ACTIONS(485),
        [anon_sym_BSLASHr] = ACTIONS(485),
        [anon_sym_BSLASHt] = ACTIONS(485),
        [anon_sym_BSLASHv] = ACTIONS(485),
        [anon_sym_DQUOTE] = ACTIONS(485),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(489),
        [sym_comment] = ACTIONS(99),
    },
    [150] = {
        [anon_sym_SQUOTE] = ACTIONS(491),
        [sym__hexadecimal_escape_sequence] = ACTIONS(493),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(491),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(491),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(491),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(491),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(491),
        [anon_sym_BSLASH0] = ACTIONS(491),
        [anon_sym_BSLASHa] = ACTIONS(491),
        [anon_sym_BSLASHb] = ACTIONS(491),
        [anon_sym_BSLASHf] = ACTIONS(491),
        [anon_sym_BSLASHn] = ACTIONS(491),
        [anon_sym_BSLASHr] = ACTIONS(491),
        [anon_sym_BSLASHt] = ACTIONS(491),
        [anon_sym_BSLASHv] = ACTIONS(491),
        [anon_sym_DQUOTE] = ACTIONS(491),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(495),
        [sym_comment] = ACTIONS(99),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_RBRACE] = ACTIONS(497),
        [anon_sym_COMMA] = ACTIONS(497),
        [sym_comment] = ACTIONS(99),
    },
    [152] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(499),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(501),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(501),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(501),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(501),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(501),
        [anon_sym_BSLASH0] = ACTIONS(501),
        [anon_sym_BSLASHa] = ACTIONS(501),
        [anon_sym_BSLASHb] = ACTIONS(501),
        [anon_sym_BSLASHf] = ACTIONS(501),
        [anon_sym_BSLASHn] = ACTIONS(501),
        [anon_sym_BSLASHr] = ACTIONS(501),
        [anon_sym_BSLASHt] = ACTIONS(501),
        [anon_sym_BSLASHv] = ACTIONS(501),
        [anon_sym_DQUOTE] = ACTIONS(501),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(499),
        [sym_comment] = ACTIONS(99),
    },
    [153] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [sym__regular_string_literal_character] = STATE(155),
        [sym__hexadecimal_escape_sequence] = ACTIONS(461),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(463),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(465),
        [anon_sym_BSLASH0] = ACTIONS(465),
        [anon_sym_BSLASHa] = ACTIONS(465),
        [anon_sym_BSLASHb] = ACTIONS(465),
        [anon_sym_BSLASHf] = ACTIONS(465),
        [anon_sym_BSLASHn] = ACTIONS(465),
        [anon_sym_BSLASHr] = ACTIONS(465),
        [anon_sym_BSLASHt] = ACTIONS(465),
        [anon_sym_BSLASHv] = ACTIONS(465),
        [anon_sym_DQUOTE] = ACTIONS(503),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(461),
        [sym_comment] = ACTIONS(99),
    },
    [154] = {
        [anon_sym_SEMI] = ACTIONS(505),
        [anon_sym_RBRACE] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(505),
        [sym_comment] = ACTIONS(99),
    },
    [155] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(507),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(509),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(509),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(509),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(509),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(509),
        [anon_sym_BSLASH0] = ACTIONS(509),
        [anon_sym_BSLASHa] = ACTIONS(509),
        [anon_sym_BSLASHb] = ACTIONS(509),
        [anon_sym_BSLASHf] = ACTIONS(509),
        [anon_sym_BSLASHn] = ACTIONS(509),
        [anon_sym_BSLASHr] = ACTIONS(509),
        [anon_sym_BSLASHt] = ACTIONS(509),
        [anon_sym_BSLASHv] = ACTIONS(509),
        [anon_sym_DQUOTE] = ACTIONS(509),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(507),
        [sym_comment] = ACTIONS(99),
    },
    [156] = {
        [anon_sym_SEMI] = ACTIONS(511),
        [anon_sym_RBRACE] = ACTIONS(511),
        [anon_sym_COMMA] = ACTIONS(511),
        [sym__real_type_suffix] = ACTIONS(513),
        [sym__exponent_part] = ACTIONS(515),
        [sym_comment] = ACTIONS(99),
    },
    [157] = {
        [anon_sym_SEMI] = ACTIONS(517),
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_COMMA] = ACTIONS(517),
        [sym_comment] = ACTIONS(99),
    },
    [158] = {
        [anon_sym_SEMI] = ACTIONS(517),
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_COMMA] = ACTIONS(517),
        [sym__real_type_suffix] = ACTIONS(519),
        [sym_comment] = ACTIONS(99),
    },
    [159] = {
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [sym_comment] = ACTIONS(99),
    },
    [160] = {
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_COMMA] = ACTIONS(523),
        [sym_comment] = ACTIONS(99),
    },
    [161] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(525),
        [sym_comment] = ACTIONS(99),
    },
    [162] = {
        [anon_sym_SEMI] = ACTIONS(511),
        [anon_sym_RBRACE] = ACTIONS(511),
        [anon_sym_COMMA] = ACTIONS(511),
        [sym_comment] = ACTIONS(99),
    },
    [163] = {
        [anon_sym_SEMI] = ACTIONS(511),
        [anon_sym_RBRACE] = ACTIONS(511),
        [anon_sym_COMMA] = ACTIONS(511),
        [sym__real_type_suffix] = ACTIONS(513),
        [sym_comment] = ACTIONS(99),
    },
    [164] = {
        [anon_sym_SEMI] = ACTIONS(517),
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_COMMA] = ACTIONS(517),
        [sym__real_type_suffix] = ACTIONS(519),
        [sym__exponent_part] = ACTIONS(527),
        [sym_comment] = ACTIONS(99),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [sym__real_type_suffix] = ACTIONS(529),
        [sym_comment] = ACTIONS(99),
    },
    [166] = {
        [anon_sym_SEMI] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_COMMA] = ACTIONS(531),
        [sym_comment] = ACTIONS(99),
    },
    [167] = {
        [anon_sym_SQUOTE] = ACTIONS(533),
        [sym_comment] = ACTIONS(99),
    },
    [168] = {
        [anon_sym_SQUOTE] = ACTIONS(485),
        [sym_comment] = ACTIONS(99),
    },
    [169] = {
        [anon_sym_SQUOTE] = ACTIONS(491),
        [sym_comment] = ACTIONS(99),
    },
    [170] = {
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(99),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(537),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_namespace] = ACTIONS(541),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_unsafe] = ACTIONS(541),
        [anon_sym_abstract] = ACTIONS(541),
        [anon_sym_sealed] = ACTIONS(541),
        [anon_sym_static] = ACTIONS(541),
        [anon_sym_new] = ACTIONS(541),
        [anon_sym_public] = ACTIONS(541),
        [anon_sym_protected] = ACTIONS(541),
        [anon_sym_internal] = ACTIONS(541),
        [anon_sym_private] = ACTIONS(541),
        [anon_sym_struct] = ACTIONS(541),
        [anon_sym_enum] = ACTIONS(541),
        [anon_sym_sbyte] = ACTIONS(541),
        [anon_sym_byte] = ACTIONS(541),
        [anon_sym_short] = ACTIONS(541),
        [anon_sym_ushort] = ACTIONS(541),
        [anon_sym_int] = ACTIONS(541),
        [anon_sym_uint] = ACTIONS(541),
        [anon_sym_long] = ACTIONS(541),
        [anon_sym_ulong] = ACTIONS(541),
        [anon_sym_char] = ACTIONS(541),
        [anon_sym_delegate] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(537),
        [anon_sym_readonly] = ACTIONS(541),
        [anon_sym_volatile] = ACTIONS(541),
        [anon_sym_bool] = ACTIONS(541),
        [anon_sym_decimal] = ACTIONS(541),
        [anon_sym_double] = ACTIONS(541),
        [anon_sym_float] = ACTIONS(541),
        [anon_sym_object] = ACTIONS(541),
        [anon_sym_string] = ACTIONS(541),
        [sym_identifier_name] = ACTIONS(543),
        [sym_comment] = ACTIONS(99),
    },
    [172] = {
        [sym_enum_member_declaration] = STATE(178),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [173] = {
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [174] = {
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(551),
        [anon_sym_namespace] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(549),
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
        [anon_sym_delegate] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(549),
        [anon_sym_readonly] = ACTIONS(553),
        [anon_sym_volatile] = ACTIONS(553),
        [anon_sym_bool] = ACTIONS(553),
        [anon_sym_decimal] = ACTIONS(553),
        [anon_sym_double] = ACTIONS(553),
        [anon_sym_float] = ACTIONS(553),
        [anon_sym_object] = ACTIONS(553),
        [anon_sym_string] = ACTIONS(553),
        [sym_identifier_name] = ACTIONS(555),
        [sym_comment] = ACTIONS(99),
    },
    [175] = {
        [sym_enum_member_declaration] = STATE(176),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [176] = {
        [anon_sym_RBRACE] = ACTIONS(557),
        [anon_sym_COMMA] = ACTIONS(557),
        [sym_comment] = ACTIONS(99),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(559),
        [anon_sym_namespace] = ACTIONS(561),
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
        [anon_sym_delegate] = ACTIONS(561),
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
        [sym_comment] = ACTIONS(99),
    },
    [178] = {
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(565),
        [sym_comment] = ACTIONS(99),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_namespace] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(549),
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
        [anon_sym_delegate] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(549),
        [anon_sym_readonly] = ACTIONS(553),
        [anon_sym_volatile] = ACTIONS(553),
        [anon_sym_bool] = ACTIONS(553),
        [anon_sym_decimal] = ACTIONS(553),
        [anon_sym_double] = ACTIONS(553),
        [anon_sym_float] = ACTIONS(553),
        [anon_sym_object] = ACTIONS(553),
        [anon_sym_string] = ACTIONS(553),
        [sym_identifier_name] = ACTIONS(555),
        [sym_comment] = ACTIONS(99),
    },
    [180] = {
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(419),
        [sym_comment] = ACTIONS(99),
    },
    [181] = {
        [aux_sym_enum_declaration_repeat1] = STATE(183),
        [anon_sym_RBRACE] = ACTIONS(567),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(569),
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_namespace] = ACTIONS(573),
        [anon_sym_RBRACE] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(573),
        [anon_sym_unsafe] = ACTIONS(573),
        [anon_sym_abstract] = ACTIONS(573),
        [anon_sym_sealed] = ACTIONS(573),
        [anon_sym_static] = ACTIONS(573),
        [anon_sym_new] = ACTIONS(573),
        [anon_sym_public] = ACTIONS(573),
        [anon_sym_protected] = ACTIONS(573),
        [anon_sym_internal] = ACTIONS(573),
        [anon_sym_private] = ACTIONS(573),
        [anon_sym_struct] = ACTIONS(573),
        [anon_sym_enum] = ACTIONS(573),
        [anon_sym_sbyte] = ACTIONS(573),
        [anon_sym_byte] = ACTIONS(573),
        [anon_sym_short] = ACTIONS(573),
        [anon_sym_ushort] = ACTIONS(573),
        [anon_sym_int] = ACTIONS(573),
        [anon_sym_uint] = ACTIONS(573),
        [anon_sym_long] = ACTIONS(573),
        [anon_sym_ulong] = ACTIONS(573),
        [anon_sym_char] = ACTIONS(573),
        [anon_sym_delegate] = ACTIONS(573),
        [anon_sym_LBRACK] = ACTIONS(569),
        [anon_sym_readonly] = ACTIONS(573),
        [anon_sym_volatile] = ACTIONS(573),
        [anon_sym_bool] = ACTIONS(573),
        [anon_sym_decimal] = ACTIONS(573),
        [anon_sym_double] = ACTIONS(573),
        [anon_sym_float] = ACTIONS(573),
        [anon_sym_object] = ACTIONS(573),
        [anon_sym_string] = ACTIONS(573),
        [sym_identifier_name] = ACTIONS(575),
        [sym_comment] = ACTIONS(99),
    },
    [183] = {
        [anon_sym_RBRACE] = ACTIONS(577),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [184] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(581),
        [anon_sym_namespace] = ACTIONS(583),
        [anon_sym_RBRACE] = ACTIONS(579),
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
        [anon_sym_delegate] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(579),
        [anon_sym_readonly] = ACTIONS(583),
        [anon_sym_volatile] = ACTIONS(583),
        [anon_sym_bool] = ACTIONS(583),
        [anon_sym_decimal] = ACTIONS(583),
        [anon_sym_double] = ACTIONS(583),
        [anon_sym_float] = ACTIONS(583),
        [anon_sym_object] = ACTIONS(583),
        [anon_sym_string] = ACTIONS(583),
        [sym_identifier_name] = ACTIONS(585),
        [sym_comment] = ACTIONS(99),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(537),
        [anon_sym_namespace] = ACTIONS(541),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_unsafe] = ACTIONS(541),
        [anon_sym_abstract] = ACTIONS(541),
        [anon_sym_sealed] = ACTIONS(541),
        [anon_sym_static] = ACTIONS(541),
        [anon_sym_new] = ACTIONS(541),
        [anon_sym_public] = ACTIONS(541),
        [anon_sym_protected] = ACTIONS(541),
        [anon_sym_internal] = ACTIONS(541),
        [anon_sym_private] = ACTIONS(541),
        [anon_sym_struct] = ACTIONS(541),
        [anon_sym_enum] = ACTIONS(541),
        [anon_sym_sbyte] = ACTIONS(541),
        [anon_sym_byte] = ACTIONS(541),
        [anon_sym_short] = ACTIONS(541),
        [anon_sym_ushort] = ACTIONS(541),
        [anon_sym_int] = ACTIONS(541),
        [anon_sym_uint] = ACTIONS(541),
        [anon_sym_long] = ACTIONS(541),
        [anon_sym_ulong] = ACTIONS(541),
        [anon_sym_char] = ACTIONS(541),
        [anon_sym_delegate] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(537),
        [anon_sym_readonly] = ACTIONS(541),
        [anon_sym_volatile] = ACTIONS(541),
        [anon_sym_bool] = ACTIONS(541),
        [anon_sym_decimal] = ACTIONS(541),
        [anon_sym_double] = ACTIONS(541),
        [anon_sym_float] = ACTIONS(541),
        [anon_sym_object] = ACTIONS(541),
        [anon_sym_string] = ACTIONS(541),
        [sym_identifier_name] = ACTIONS(543),
        [sym_comment] = ACTIONS(99),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_namespace] = ACTIONS(583),
        [anon_sym_RBRACE] = ACTIONS(579),
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
        [anon_sym_delegate] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(579),
        [anon_sym_readonly] = ACTIONS(583),
        [anon_sym_volatile] = ACTIONS(583),
        [anon_sym_bool] = ACTIONS(583),
        [anon_sym_decimal] = ACTIONS(583),
        [anon_sym_double] = ACTIONS(583),
        [anon_sym_float] = ACTIONS(583),
        [anon_sym_object] = ACTIONS(583),
        [anon_sym_string] = ACTIONS(583),
        [sym_identifier_name] = ACTIONS(585),
        [sym_comment] = ACTIONS(99),
    },
    [187] = {
        [sym_identifier_name] = ACTIONS(587),
        [sym_comment] = ACTIONS(99),
    },
    [188] = {
        [sym_type_parameter_list] = STATE(190),
        [anon_sym_LBRACE] = ACTIONS(589),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [189] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(221),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [190] = {
        [anon_sym_LBRACE] = ACTIONS(611),
        [sym_comment] = ACTIONS(99),
    },
    [191] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(203),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [192] = {
        [ts_builtin_sym_end] = ACTIONS(615),
        [anon_sym_namespace] = ACTIONS(617),
        [anon_sym_RBRACE] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(617),
        [anon_sym_unsafe] = ACTIONS(617),
        [anon_sym_abstract] = ACTIONS(617),
        [anon_sym_sealed] = ACTIONS(617),
        [anon_sym_static] = ACTIONS(617),
        [anon_sym_new] = ACTIONS(617),
        [anon_sym_public] = ACTIONS(617),
        [anon_sym_protected] = ACTIONS(617),
        [anon_sym_internal] = ACTIONS(617),
        [anon_sym_private] = ACTIONS(617),
        [anon_sym_struct] = ACTIONS(617),
        [anon_sym_enum] = ACTIONS(617),
        [anon_sym_sbyte] = ACTIONS(617),
        [anon_sym_byte] = ACTIONS(617),
        [anon_sym_short] = ACTIONS(617),
        [anon_sym_ushort] = ACTIONS(617),
        [anon_sym_int] = ACTIONS(617),
        [anon_sym_uint] = ACTIONS(617),
        [anon_sym_long] = ACTIONS(617),
        [anon_sym_ulong] = ACTIONS(617),
        [anon_sym_char] = ACTIONS(617),
        [anon_sym_delegate] = ACTIONS(617),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(617),
        [anon_sym_decimal] = ACTIONS(617),
        [anon_sym_double] = ACTIONS(617),
        [anon_sym_float] = ACTIONS(617),
        [anon_sym_object] = ACTIONS(617),
        [anon_sym_string] = ACTIONS(617),
        [sym_identifier_name] = ACTIONS(619),
        [sym_comment] = ACTIONS(99),
    },
    [193] = {
        [sym__class_modifiers] = STATE(276),
        [sym__struct_modifiers] = STATE(277),
        [sym__field_modifiers] = STATE(257),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(623),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(623),
        [anon_sym_public] = ACTIONS(623),
        [anon_sym_protected] = ACTIONS(623),
        [anon_sym_internal] = ACTIONS(623),
        [anon_sym_private] = ACTIONS(623),
        [anon_sym_struct] = ACTIONS(625),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_delegate] = ACTIONS(629),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(99),
    },
    [194] = {
        [sym__class_modifiers] = STATE(276),
        [sym__field_modifiers] = STATE(257),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(599),
        [anon_sym_public] = ACTIONS(599),
        [anon_sym_protected] = ACTIONS(599),
        [anon_sym_internal] = ACTIONS(599),
        [anon_sym_private] = ACTIONS(599),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(99),
    },
    [195] = {
        [sym__class_modifiers] = STATE(276),
        [sym__struct_modifiers] = STATE(277),
        [sym__field_modifiers] = STATE(257),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(623),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(623),
        [anon_sym_public] = ACTIONS(623),
        [anon_sym_protected] = ACTIONS(623),
        [anon_sym_internal] = ACTIONS(623),
        [anon_sym_private] = ACTIONS(623),
        [anon_sym_struct] = ACTIONS(625),
        [anon_sym_enum] = ACTIONS(633),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_delegate] = ACTIONS(629),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(99),
    },
    [196] = {
        [sym__field_modifiers] = STATE(257),
        [anon_sym_unsafe] = ACTIONS(609),
        [anon_sym_static] = ACTIONS(609),
        [anon_sym_new] = ACTIONS(609),
        [anon_sym_public] = ACTIONS(609),
        [anon_sym_protected] = ACTIONS(609),
        [anon_sym_internal] = ACTIONS(609),
        [anon_sym_private] = ACTIONS(609),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(99),
    },
    [197] = {
        [anon_sym_RBRACE] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(637),
        [anon_sym_unsafe] = ACTIONS(637),
        [anon_sym_abstract] = ACTIONS(637),
        [anon_sym_sealed] = ACTIONS(637),
        [anon_sym_static] = ACTIONS(637),
        [anon_sym_new] = ACTIONS(637),
        [anon_sym_public] = ACTIONS(637),
        [anon_sym_protected] = ACTIONS(637),
        [anon_sym_internal] = ACTIONS(637),
        [anon_sym_private] = ACTIONS(637),
        [anon_sym_struct] = ACTIONS(637),
        [anon_sym_enum] = ACTIONS(637),
        [anon_sym_sbyte] = ACTIONS(637),
        [anon_sym_byte] = ACTIONS(637),
        [anon_sym_short] = ACTIONS(637),
        [anon_sym_ushort] = ACTIONS(637),
        [anon_sym_int] = ACTIONS(637),
        [anon_sym_uint] = ACTIONS(637),
        [anon_sym_long] = ACTIONS(637),
        [anon_sym_ulong] = ACTIONS(637),
        [anon_sym_char] = ACTIONS(637),
        [anon_sym_delegate] = ACTIONS(637),
        [anon_sym_LBRACK] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(637),
        [anon_sym_volatile] = ACTIONS(637),
        [anon_sym_bool] = ACTIONS(637),
        [anon_sym_decimal] = ACTIONS(637),
        [anon_sym_double] = ACTIONS(637),
        [anon_sym_float] = ACTIONS(637),
        [anon_sym_object] = ACTIONS(637),
        [anon_sym_string] = ACTIONS(637),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(99),
    },
    [198] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(217),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(215),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(643),
        [anon_sym_enum] = ACTIONS(645),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(647),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [199] = {
        [sym_variable_declaration] = STATE(215),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [200] = {
        [anon_sym_sbyte] = ACTIONS(649),
        [anon_sym_byte] = ACTIONS(649),
        [anon_sym_short] = ACTIONS(649),
        [anon_sym_ushort] = ACTIONS(649),
        [anon_sym_int] = ACTIONS(649),
        [anon_sym_uint] = ACTIONS(649),
        [anon_sym_long] = ACTIONS(649),
        [anon_sym_ulong] = ACTIONS(649),
        [anon_sym_char] = ACTIONS(649),
        [anon_sym_bool] = ACTIONS(649),
        [anon_sym_decimal] = ACTIONS(649),
        [anon_sym_double] = ACTIONS(649),
        [anon_sym_float] = ACTIONS(649),
        [anon_sym_object] = ACTIONS(649),
        [anon_sym_string] = ACTIONS(649),
        [sym_identifier_name] = ACTIONS(651),
        [sym_comment] = ACTIONS(99),
    },
    [201] = {
        [anon_sym_SEMI] = ACTIONS(653),
        [sym_comment] = ACTIONS(99),
    },
    [202] = {
        [sym_variable_declarator] = STATE(207),
        [sym_identifier_name] = ACTIONS(655),
        [sym_comment] = ACTIONS(99),
    },
    [203] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(657),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [204] = {
        [ts_builtin_sym_end] = ACTIONS(659),
        [anon_sym_namespace] = ACTIONS(661),
        [anon_sym_RBRACE] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_unsafe] = ACTIONS(661),
        [anon_sym_abstract] = ACTIONS(661),
        [anon_sym_sealed] = ACTIONS(661),
        [anon_sym_static] = ACTIONS(661),
        [anon_sym_new] = ACTIONS(661),
        [anon_sym_public] = ACTIONS(661),
        [anon_sym_protected] = ACTIONS(661),
        [anon_sym_internal] = ACTIONS(661),
        [anon_sym_private] = ACTIONS(661),
        [anon_sym_struct] = ACTIONS(661),
        [anon_sym_enum] = ACTIONS(661),
        [anon_sym_sbyte] = ACTIONS(661),
        [anon_sym_byte] = ACTIONS(661),
        [anon_sym_short] = ACTIONS(661),
        [anon_sym_ushort] = ACTIONS(661),
        [anon_sym_int] = ACTIONS(661),
        [anon_sym_uint] = ACTIONS(661),
        [anon_sym_long] = ACTIONS(661),
        [anon_sym_ulong] = ACTIONS(661),
        [anon_sym_char] = ACTIONS(661),
        [anon_sym_delegate] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(659),
        [anon_sym_readonly] = ACTIONS(661),
        [anon_sym_volatile] = ACTIONS(661),
        [anon_sym_bool] = ACTIONS(661),
        [anon_sym_decimal] = ACTIONS(661),
        [anon_sym_double] = ACTIONS(661),
        [anon_sym_float] = ACTIONS(661),
        [anon_sym_object] = ACTIONS(661),
        [anon_sym_string] = ACTIONS(661),
        [sym_identifier_name] = ACTIONS(663),
        [sym_comment] = ACTIONS(99),
    },
    [205] = {
        [anon_sym_RBRACE] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(667),
        [anon_sym_unsafe] = ACTIONS(667),
        [anon_sym_abstract] = ACTIONS(667),
        [anon_sym_sealed] = ACTIONS(667),
        [anon_sym_static] = ACTIONS(667),
        [anon_sym_new] = ACTIONS(667),
        [anon_sym_public] = ACTIONS(667),
        [anon_sym_protected] = ACTIONS(667),
        [anon_sym_internal] = ACTIONS(667),
        [anon_sym_private] = ACTIONS(667),
        [anon_sym_struct] = ACTIONS(667),
        [anon_sym_enum] = ACTIONS(667),
        [anon_sym_sbyte] = ACTIONS(667),
        [anon_sym_byte] = ACTIONS(667),
        [anon_sym_short] = ACTIONS(667),
        [anon_sym_ushort] = ACTIONS(667),
        [anon_sym_int] = ACTIONS(667),
        [anon_sym_uint] = ACTIONS(667),
        [anon_sym_long] = ACTIONS(667),
        [anon_sym_ulong] = ACTIONS(667),
        [anon_sym_char] = ACTIONS(667),
        [anon_sym_delegate] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(665),
        [anon_sym_readonly] = ACTIONS(667),
        [anon_sym_volatile] = ACTIONS(667),
        [anon_sym_bool] = ACTIONS(667),
        [anon_sym_decimal] = ACTIONS(667),
        [anon_sym_double] = ACTIONS(667),
        [anon_sym_float] = ACTIONS(667),
        [anon_sym_object] = ACTIONS(667),
        [anon_sym_string] = ACTIONS(667),
        [sym_identifier_name] = ACTIONS(669),
        [sym_comment] = ACTIONS(99),
    },
    [206] = {
        [sym_equals_value_clause] = STATE(213),
        [anon_sym_SEMI] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(671),
        [anon_sym_EQ] = ACTIONS(411),
        [sym_comment] = ACTIONS(99),
    },
    [207] = {
        [aux_sym_variable_declaration_repeat1] = STATE(209),
        [anon_sym_SEMI] = ACTIONS(673),
        [anon_sym_COMMA] = ACTIONS(675),
        [sym_comment] = ACTIONS(99),
    },
    [208] = {
        [sym_variable_declarator] = STATE(212),
        [sym_identifier_name] = ACTIONS(655),
        [sym_comment] = ACTIONS(99),
    },
    [209] = {
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(679),
        [sym_comment] = ACTIONS(99),
    },
    [210] = {
        [sym_variable_declarator] = STATE(211),
        [sym_identifier_name] = ACTIONS(655),
        [sym_comment] = ACTIONS(99),
    },
    [211] = {
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_COMMA] = ACTIONS(681),
        [sym_comment] = ACTIONS(99),
    },
    [212] = {
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_COMMA] = ACTIONS(683),
        [sym_comment] = ACTIONS(99),
    },
    [213] = {
        [anon_sym_SEMI] = ACTIONS(685),
        [anon_sym_COMMA] = ACTIONS(685),
        [sym_comment] = ACTIONS(99),
    },
    [214] = {
        [anon_sym_RBRACE] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(689),
        [anon_sym_unsafe] = ACTIONS(689),
        [anon_sym_abstract] = ACTIONS(689),
        [anon_sym_sealed] = ACTIONS(689),
        [anon_sym_static] = ACTIONS(689),
        [anon_sym_new] = ACTIONS(689),
        [anon_sym_public] = ACTIONS(689),
        [anon_sym_protected] = ACTIONS(689),
        [anon_sym_internal] = ACTIONS(689),
        [anon_sym_private] = ACTIONS(689),
        [anon_sym_struct] = ACTIONS(689),
        [anon_sym_enum] = ACTIONS(689),
        [anon_sym_sbyte] = ACTIONS(689),
        [anon_sym_byte] = ACTIONS(689),
        [anon_sym_short] = ACTIONS(689),
        [anon_sym_ushort] = ACTIONS(689),
        [anon_sym_int] = ACTIONS(689),
        [anon_sym_uint] = ACTIONS(689),
        [anon_sym_long] = ACTIONS(689),
        [anon_sym_ulong] = ACTIONS(689),
        [anon_sym_char] = ACTIONS(689),
        [anon_sym_delegate] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_readonly] = ACTIONS(689),
        [anon_sym_volatile] = ACTIONS(689),
        [anon_sym_bool] = ACTIONS(689),
        [anon_sym_decimal] = ACTIONS(689),
        [anon_sym_double] = ACTIONS(689),
        [anon_sym_float] = ACTIONS(689),
        [anon_sym_object] = ACTIONS(689),
        [anon_sym_string] = ACTIONS(689),
        [sym_identifier_name] = ACTIONS(691),
        [sym_comment] = ACTIONS(99),
    },
    [215] = {
        [anon_sym_SEMI] = ACTIONS(693),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_readonly] = ACTIONS(697),
        [anon_sym_volatile] = ACTIONS(697),
        [anon_sym_bool] = ACTIONS(697),
        [anon_sym_decimal] = ACTIONS(697),
        [anon_sym_double] = ACTIONS(697),
        [anon_sym_float] = ACTIONS(697),
        [anon_sym_object] = ACTIONS(697),
        [anon_sym_string] = ACTIONS(697),
        [sym_identifier_name] = ACTIONS(699),
        [sym_comment] = ACTIONS(99),
    },
    [217] = {
        [sym_variable_declaration] = STATE(218),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [218] = {
        [anon_sym_SEMI] = ACTIONS(701),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_readonly] = ACTIONS(705),
        [anon_sym_volatile] = ACTIONS(705),
        [anon_sym_bool] = ACTIONS(705),
        [anon_sym_decimal] = ACTIONS(705),
        [anon_sym_double] = ACTIONS(705),
        [anon_sym_float] = ACTIONS(705),
        [anon_sym_object] = ACTIONS(705),
        [anon_sym_string] = ACTIONS(705),
        [sym_identifier_name] = ACTIONS(707),
        [sym_comment] = ACTIONS(99),
    },
    [220] = {
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
        [sym_comment] = ACTIONS(99),
    },
    [221] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [222] = {
        [sym_identifier_name] = ACTIONS(715),
        [sym_comment] = ACTIONS(99),
    },
    [223] = {
        [sym_type_parameter_list] = STATE(225),
        [anon_sym_LBRACE] = ACTIONS(717),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [224] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(231),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [225] = {
        [anon_sym_LBRACE] = ACTIONS(721),
        [sym_comment] = ACTIONS(99),
    },
    [226] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(228),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [227] = {
        [ts_builtin_sym_end] = ACTIONS(725),
        [anon_sym_namespace] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(725),
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
        [anon_sym_LBRACK] = ACTIONS(725),
        [anon_sym_readonly] = ACTIONS(727),
        [anon_sym_volatile] = ACTIONS(727),
        [anon_sym_bool] = ACTIONS(727),
        [anon_sym_decimal] = ACTIONS(727),
        [anon_sym_double] = ACTIONS(727),
        [anon_sym_float] = ACTIONS(727),
        [anon_sym_object] = ACTIONS(727),
        [anon_sym_string] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(99),
    },
    [228] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(731),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [229] = {
        [ts_builtin_sym_end] = ACTIONS(733),
        [anon_sym_namespace] = ACTIONS(735),
        [anon_sym_RBRACE] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_unsafe] = ACTIONS(735),
        [anon_sym_abstract] = ACTIONS(735),
        [anon_sym_sealed] = ACTIONS(735),
        [anon_sym_static] = ACTIONS(735),
        [anon_sym_new] = ACTIONS(735),
        [anon_sym_public] = ACTIONS(735),
        [anon_sym_protected] = ACTIONS(735),
        [anon_sym_internal] = ACTIONS(735),
        [anon_sym_private] = ACTIONS(735),
        [anon_sym_struct] = ACTIONS(735),
        [anon_sym_enum] = ACTIONS(735),
        [anon_sym_sbyte] = ACTIONS(735),
        [anon_sym_byte] = ACTIONS(735),
        [anon_sym_short] = ACTIONS(735),
        [anon_sym_ushort] = ACTIONS(735),
        [anon_sym_int] = ACTIONS(735),
        [anon_sym_uint] = ACTIONS(735),
        [anon_sym_long] = ACTIONS(735),
        [anon_sym_ulong] = ACTIONS(735),
        [anon_sym_char] = ACTIONS(735),
        [anon_sym_delegate] = ACTIONS(735),
        [anon_sym_LBRACK] = ACTIONS(733),
        [anon_sym_readonly] = ACTIONS(735),
        [anon_sym_volatile] = ACTIONS(735),
        [anon_sym_bool] = ACTIONS(735),
        [anon_sym_decimal] = ACTIONS(735),
        [anon_sym_double] = ACTIONS(735),
        [anon_sym_float] = ACTIONS(735),
        [anon_sym_object] = ACTIONS(735),
        [anon_sym_string] = ACTIONS(735),
        [sym_identifier_name] = ACTIONS(737),
        [sym_comment] = ACTIONS(99),
    },
    [230] = {
        [ts_builtin_sym_end] = ACTIONS(739),
        [anon_sym_namespace] = ACTIONS(741),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_unsafe] = ACTIONS(741),
        [anon_sym_abstract] = ACTIONS(741),
        [anon_sym_sealed] = ACTIONS(741),
        [anon_sym_static] = ACTIONS(741),
        [anon_sym_new] = ACTIONS(741),
        [anon_sym_public] = ACTIONS(741),
        [anon_sym_protected] = ACTIONS(741),
        [anon_sym_internal] = ACTIONS(741),
        [anon_sym_private] = ACTIONS(741),
        [anon_sym_struct] = ACTIONS(741),
        [anon_sym_enum] = ACTIONS(741),
        [anon_sym_sbyte] = ACTIONS(741),
        [anon_sym_byte] = ACTIONS(741),
        [anon_sym_short] = ACTIONS(741),
        [anon_sym_ushort] = ACTIONS(741),
        [anon_sym_int] = ACTIONS(741),
        [anon_sym_uint] = ACTIONS(741),
        [anon_sym_long] = ACTIONS(741),
        [anon_sym_ulong] = ACTIONS(741),
        [anon_sym_char] = ACTIONS(741),
        [anon_sym_delegate] = ACTIONS(741),
        [anon_sym_LBRACK] = ACTIONS(739),
        [anon_sym_readonly] = ACTIONS(741),
        [anon_sym_volatile] = ACTIONS(741),
        [anon_sym_bool] = ACTIONS(741),
        [anon_sym_decimal] = ACTIONS(741),
        [anon_sym_double] = ACTIONS(741),
        [anon_sym_float] = ACTIONS(741),
        [anon_sym_object] = ACTIONS(741),
        [anon_sym_string] = ACTIONS(741),
        [sym_identifier_name] = ACTIONS(743),
        [sym_comment] = ACTIONS(99),
    },
    [231] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [232] = {
        [sym_identifier_name] = ACTIONS(745),
        [sym_comment] = ACTIONS(99),
    },
    [233] = {
        [sym_parameter_list] = STATE(234),
        [anon_sym_LPAREN] = ACTIONS(283),
        [sym_comment] = ACTIONS(99),
    },
    [234] = {
        [anon_sym_SEMI] = ACTIONS(747),
        [sym_comment] = ACTIONS(99),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(749),
        [anon_sym_namespace] = ACTIONS(751),
        [anon_sym_RBRACE] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_unsafe] = ACTIONS(751),
        [anon_sym_abstract] = ACTIONS(751),
        [anon_sym_sealed] = ACTIONS(751),
        [anon_sym_static] = ACTIONS(751),
        [anon_sym_new] = ACTIONS(751),
        [anon_sym_public] = ACTIONS(751),
        [anon_sym_protected] = ACTIONS(751),
        [anon_sym_internal] = ACTIONS(751),
        [anon_sym_private] = ACTIONS(751),
        [anon_sym_struct] = ACTIONS(751),
        [anon_sym_enum] = ACTIONS(751),
        [anon_sym_sbyte] = ACTIONS(751),
        [anon_sym_byte] = ACTIONS(751),
        [anon_sym_short] = ACTIONS(751),
        [anon_sym_ushort] = ACTIONS(751),
        [anon_sym_int] = ACTIONS(751),
        [anon_sym_uint] = ACTIONS(751),
        [anon_sym_long] = ACTIONS(751),
        [anon_sym_ulong] = ACTIONS(751),
        [anon_sym_char] = ACTIONS(751),
        [anon_sym_delegate] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(749),
        [anon_sym_readonly] = ACTIONS(751),
        [anon_sym_volatile] = ACTIONS(751),
        [anon_sym_bool] = ACTIONS(751),
        [anon_sym_decimal] = ACTIONS(751),
        [anon_sym_double] = ACTIONS(751),
        [anon_sym_float] = ACTIONS(751),
        [anon_sym_object] = ACTIONS(751),
        [anon_sym_string] = ACTIONS(751),
        [sym_identifier_name] = ACTIONS(753),
        [sym_comment] = ACTIONS(99),
    },
    [236] = {
        [anon_sym_LBRACE] = ACTIONS(755),
        [anon_sym_COLON] = ACTIONS(757),
        [sym_comment] = ACTIONS(99),
    },
    [237] = {
        [sym_enum_member_declaration] = STATE(243),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [238] = {
        [sym__integral_type] = STATE(239),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [sym_comment] = ACTIONS(99),
    },
    [239] = {
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_comment] = ACTIONS(99),
    },
    [240] = {
        [sym_enum_member_declaration] = STATE(241),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [241] = {
        [aux_sym_enum_declaration_repeat1] = STATE(242),
        [anon_sym_RBRACE] = ACTIONS(577),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [242] = {
        [anon_sym_RBRACE] = ACTIONS(413),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [243] = {
        [aux_sym_enum_declaration_repeat1] = STATE(245),
        [anon_sym_RBRACE] = ACTIONS(761),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [244] = {
        [ts_builtin_sym_end] = ACTIONS(763),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_namespace] = ACTIONS(767),
        [anon_sym_RBRACE] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_unsafe] = ACTIONS(767),
        [anon_sym_abstract] = ACTIONS(767),
        [anon_sym_sealed] = ACTIONS(767),
        [anon_sym_static] = ACTIONS(767),
        [anon_sym_new] = ACTIONS(767),
        [anon_sym_public] = ACTIONS(767),
        [anon_sym_protected] = ACTIONS(767),
        [anon_sym_internal] = ACTIONS(767),
        [anon_sym_private] = ACTIONS(767),
        [anon_sym_struct] = ACTIONS(767),
        [anon_sym_enum] = ACTIONS(767),
        [anon_sym_sbyte] = ACTIONS(767),
        [anon_sym_byte] = ACTIONS(767),
        [anon_sym_short] = ACTIONS(767),
        [anon_sym_ushort] = ACTIONS(767),
        [anon_sym_int] = ACTIONS(767),
        [anon_sym_uint] = ACTIONS(767),
        [anon_sym_long] = ACTIONS(767),
        [anon_sym_ulong] = ACTIONS(767),
        [anon_sym_char] = ACTIONS(767),
        [anon_sym_delegate] = ACTIONS(767),
        [anon_sym_LBRACK] = ACTIONS(763),
        [anon_sym_readonly] = ACTIONS(767),
        [anon_sym_volatile] = ACTIONS(767),
        [anon_sym_bool] = ACTIONS(767),
        [anon_sym_decimal] = ACTIONS(767),
        [anon_sym_double] = ACTIONS(767),
        [anon_sym_float] = ACTIONS(767),
        [anon_sym_object] = ACTIONS(767),
        [anon_sym_string] = ACTIONS(767),
        [sym_identifier_name] = ACTIONS(769),
        [sym_comment] = ACTIONS(99),
    },
    [245] = {
        [anon_sym_RBRACE] = ACTIONS(567),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(569),
        [anon_sym_namespace] = ACTIONS(573),
        [anon_sym_RBRACE] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(573),
        [anon_sym_unsafe] = ACTIONS(573),
        [anon_sym_abstract] = ACTIONS(573),
        [anon_sym_sealed] = ACTIONS(573),
        [anon_sym_static] = ACTIONS(573),
        [anon_sym_new] = ACTIONS(573),
        [anon_sym_public] = ACTIONS(573),
        [anon_sym_protected] = ACTIONS(573),
        [anon_sym_internal] = ACTIONS(573),
        [anon_sym_private] = ACTIONS(573),
        [anon_sym_struct] = ACTIONS(573),
        [anon_sym_enum] = ACTIONS(573),
        [anon_sym_sbyte] = ACTIONS(573),
        [anon_sym_byte] = ACTIONS(573),
        [anon_sym_short] = ACTIONS(573),
        [anon_sym_ushort] = ACTIONS(573),
        [anon_sym_int] = ACTIONS(573),
        [anon_sym_uint] = ACTIONS(573),
        [anon_sym_long] = ACTIONS(573),
        [anon_sym_ulong] = ACTIONS(573),
        [anon_sym_char] = ACTIONS(573),
        [anon_sym_delegate] = ACTIONS(573),
        [anon_sym_LBRACK] = ACTIONS(569),
        [anon_sym_readonly] = ACTIONS(573),
        [anon_sym_volatile] = ACTIONS(573),
        [anon_sym_bool] = ACTIONS(573),
        [anon_sym_decimal] = ACTIONS(573),
        [anon_sym_double] = ACTIONS(573),
        [anon_sym_float] = ACTIONS(573),
        [anon_sym_object] = ACTIONS(573),
        [anon_sym_string] = ACTIONS(573),
        [sym_identifier_name] = ACTIONS(575),
        [sym_comment] = ACTIONS(99),
    },
    [247] = {
        [sym_type_parameter_list] = STATE(249),
        [anon_sym_LBRACE] = ACTIONS(771),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [248] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(251),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [249] = {
        [anon_sym_LBRACE] = ACTIONS(589),
        [sym_comment] = ACTIONS(99),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_namespace] = ACTIONS(777),
        [anon_sym_RBRACE] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(777),
        [anon_sym_unsafe] = ACTIONS(777),
        [anon_sym_abstract] = ACTIONS(777),
        [anon_sym_sealed] = ACTIONS(777),
        [anon_sym_static] = ACTIONS(777),
        [anon_sym_new] = ACTIONS(777),
        [anon_sym_public] = ACTIONS(777),
        [anon_sym_protected] = ACTIONS(777),
        [anon_sym_internal] = ACTIONS(777),
        [anon_sym_private] = ACTIONS(777),
        [anon_sym_struct] = ACTIONS(777),
        [anon_sym_enum] = ACTIONS(777),
        [anon_sym_sbyte] = ACTIONS(777),
        [anon_sym_byte] = ACTIONS(777),
        [anon_sym_short] = ACTIONS(777),
        [anon_sym_ushort] = ACTIONS(777),
        [anon_sym_int] = ACTIONS(777),
        [anon_sym_uint] = ACTIONS(777),
        [anon_sym_long] = ACTIONS(777),
        [anon_sym_ulong] = ACTIONS(777),
        [anon_sym_char] = ACTIONS(777),
        [anon_sym_delegate] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_readonly] = ACTIONS(777),
        [anon_sym_volatile] = ACTIONS(777),
        [anon_sym_bool] = ACTIONS(777),
        [anon_sym_decimal] = ACTIONS(777),
        [anon_sym_double] = ACTIONS(777),
        [anon_sym_float] = ACTIONS(777),
        [anon_sym_object] = ACTIONS(777),
        [anon_sym_string] = ACTIONS(777),
        [sym_identifier_name] = ACTIONS(779),
        [sym_comment] = ACTIONS(99),
    },
    [251] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [252] = {
        [sym_type_parameter_list] = STATE(254),
        [anon_sym_LBRACE] = ACTIONS(781),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [253] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(256),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(783),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [254] = {
        [anon_sym_LBRACE] = ACTIONS(717),
        [sym_comment] = ACTIONS(99),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(785),
        [anon_sym_namespace] = ACTIONS(787),
        [anon_sym_RBRACE] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_unsafe] = ACTIONS(787),
        [anon_sym_abstract] = ACTIONS(787),
        [anon_sym_sealed] = ACTIONS(787),
        [anon_sym_static] = ACTIONS(787),
        [anon_sym_new] = ACTIONS(787),
        [anon_sym_public] = ACTIONS(787),
        [anon_sym_protected] = ACTIONS(787),
        [anon_sym_internal] = ACTIONS(787),
        [anon_sym_private] = ACTIONS(787),
        [anon_sym_struct] = ACTIONS(787),
        [anon_sym_enum] = ACTIONS(787),
        [anon_sym_sbyte] = ACTIONS(787),
        [anon_sym_byte] = ACTIONS(787),
        [anon_sym_short] = ACTIONS(787),
        [anon_sym_ushort] = ACTIONS(787),
        [anon_sym_int] = ACTIONS(787),
        [anon_sym_uint] = ACTIONS(787),
        [anon_sym_long] = ACTIONS(787),
        [anon_sym_ulong] = ACTIONS(787),
        [anon_sym_char] = ACTIONS(787),
        [anon_sym_delegate] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(785),
        [anon_sym_readonly] = ACTIONS(787),
        [anon_sym_volatile] = ACTIONS(787),
        [anon_sym_bool] = ACTIONS(787),
        [anon_sym_decimal] = ACTIONS(787),
        [anon_sym_double] = ACTIONS(787),
        [anon_sym_float] = ACTIONS(787),
        [anon_sym_object] = ACTIONS(787),
        [anon_sym_string] = ACTIONS(787),
        [sym_identifier_name] = ACTIONS(789),
        [sym_comment] = ACTIONS(99),
    },
    [256] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [257] = {
        [anon_sym_sbyte] = ACTIONS(791),
        [anon_sym_byte] = ACTIONS(791),
        [anon_sym_short] = ACTIONS(791),
        [anon_sym_ushort] = ACTIONS(791),
        [anon_sym_int] = ACTIONS(791),
        [anon_sym_uint] = ACTIONS(791),
        [anon_sym_long] = ACTIONS(791),
        [anon_sym_ulong] = ACTIONS(791),
        [anon_sym_char] = ACTIONS(791),
        [anon_sym_bool] = ACTIONS(791),
        [anon_sym_decimal] = ACTIONS(791),
        [anon_sym_double] = ACTIONS(791),
        [anon_sym_float] = ACTIONS(791),
        [anon_sym_object] = ACTIONS(791),
        [anon_sym_string] = ACTIONS(791),
        [sym_identifier_name] = ACTIONS(793),
        [sym_comment] = ACTIONS(99),
    },
    [258] = {
        [sym_identifier_name] = ACTIONS(795),
        [sym_comment] = ACTIONS(99),
    },
    [259] = {
        [sym_parameter_list] = STATE(260),
        [anon_sym_LPAREN] = ACTIONS(283),
        [sym_comment] = ACTIONS(99),
    },
    [260] = {
        [anon_sym_SEMI] = ACTIONS(797),
        [sym_comment] = ACTIONS(99),
    },
    [261] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_namespace] = ACTIONS(801),
        [anon_sym_RBRACE] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_unsafe] = ACTIONS(801),
        [anon_sym_abstract] = ACTIONS(801),
        [anon_sym_sealed] = ACTIONS(801),
        [anon_sym_static] = ACTIONS(801),
        [anon_sym_new] = ACTIONS(801),
        [anon_sym_public] = ACTIONS(801),
        [anon_sym_protected] = ACTIONS(801),
        [anon_sym_internal] = ACTIONS(801),
        [anon_sym_private] = ACTIONS(801),
        [anon_sym_struct] = ACTIONS(801),
        [anon_sym_enum] = ACTIONS(801),
        [anon_sym_sbyte] = ACTIONS(801),
        [anon_sym_byte] = ACTIONS(801),
        [anon_sym_short] = ACTIONS(801),
        [anon_sym_ushort] = ACTIONS(801),
        [anon_sym_int] = ACTIONS(801),
        [anon_sym_uint] = ACTIONS(801),
        [anon_sym_long] = ACTIONS(801),
        [anon_sym_ulong] = ACTIONS(801),
        [anon_sym_char] = ACTIONS(801),
        [anon_sym_delegate] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_readonly] = ACTIONS(801),
        [anon_sym_volatile] = ACTIONS(801),
        [anon_sym_bool] = ACTIONS(801),
        [anon_sym_decimal] = ACTIONS(801),
        [anon_sym_double] = ACTIONS(801),
        [anon_sym_float] = ACTIONS(801),
        [anon_sym_object] = ACTIONS(801),
        [anon_sym_string] = ACTIONS(801),
        [sym_identifier_name] = ACTIONS(803),
        [sym_comment] = ACTIONS(99),
    },
    [262] = {
        [anon_sym_LBRACE] = ACTIONS(805),
        [anon_sym_COLON] = ACTIONS(807),
        [sym_comment] = ACTIONS(99),
    },
    [263] = {
        [sym_enum_member_declaration] = STATE(266),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [264] = {
        [sym__integral_type] = STATE(265),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [sym_comment] = ACTIONS(99),
    },
    [265] = {
        [anon_sym_LBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(99),
    },
    [266] = {
        [aux_sym_enum_declaration_repeat1] = STATE(268),
        [anon_sym_RBRACE] = ACTIONS(809),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_namespace] = ACTIONS(815),
        [anon_sym_RBRACE] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_unsafe] = ACTIONS(815),
        [anon_sym_abstract] = ACTIONS(815),
        [anon_sym_sealed] = ACTIONS(815),
        [anon_sym_static] = ACTIONS(815),
        [anon_sym_new] = ACTIONS(815),
        [anon_sym_public] = ACTIONS(815),
        [anon_sym_protected] = ACTIONS(815),
        [anon_sym_internal] = ACTIONS(815),
        [anon_sym_private] = ACTIONS(815),
        [anon_sym_struct] = ACTIONS(815),
        [anon_sym_enum] = ACTIONS(815),
        [anon_sym_sbyte] = ACTIONS(815),
        [anon_sym_byte] = ACTIONS(815),
        [anon_sym_short] = ACTIONS(815),
        [anon_sym_ushort] = ACTIONS(815),
        [anon_sym_int] = ACTIONS(815),
        [anon_sym_uint] = ACTIONS(815),
        [anon_sym_long] = ACTIONS(815),
        [anon_sym_ulong] = ACTIONS(815),
        [anon_sym_char] = ACTIONS(815),
        [anon_sym_delegate] = ACTIONS(815),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_readonly] = ACTIONS(815),
        [anon_sym_volatile] = ACTIONS(815),
        [anon_sym_bool] = ACTIONS(815),
        [anon_sym_decimal] = ACTIONS(815),
        [anon_sym_double] = ACTIONS(815),
        [anon_sym_float] = ACTIONS(815),
        [anon_sym_object] = ACTIONS(815),
        [anon_sym_string] = ACTIONS(815),
        [sym_identifier_name] = ACTIONS(817),
        [sym_comment] = ACTIONS(99),
    },
    [268] = {
        [anon_sym_RBRACE] = ACTIONS(761),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [269] = {
        [ts_builtin_sym_end] = ACTIONS(763),
        [anon_sym_namespace] = ACTIONS(767),
        [anon_sym_RBRACE] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_unsafe] = ACTIONS(767),
        [anon_sym_abstract] = ACTIONS(767),
        [anon_sym_sealed] = ACTIONS(767),
        [anon_sym_static] = ACTIONS(767),
        [anon_sym_new] = ACTIONS(767),
        [anon_sym_public] = ACTIONS(767),
        [anon_sym_protected] = ACTIONS(767),
        [anon_sym_internal] = ACTIONS(767),
        [anon_sym_private] = ACTIONS(767),
        [anon_sym_struct] = ACTIONS(767),
        [anon_sym_enum] = ACTIONS(767),
        [anon_sym_sbyte] = ACTIONS(767),
        [anon_sym_byte] = ACTIONS(767),
        [anon_sym_short] = ACTIONS(767),
        [anon_sym_ushort] = ACTIONS(767),
        [anon_sym_int] = ACTIONS(767),
        [anon_sym_uint] = ACTIONS(767),
        [anon_sym_long] = ACTIONS(767),
        [anon_sym_ulong] = ACTIONS(767),
        [anon_sym_char] = ACTIONS(767),
        [anon_sym_delegate] = ACTIONS(767),
        [anon_sym_LBRACK] = ACTIONS(763),
        [anon_sym_readonly] = ACTIONS(767),
        [anon_sym_volatile] = ACTIONS(767),
        [anon_sym_bool] = ACTIONS(767),
        [anon_sym_decimal] = ACTIONS(767),
        [anon_sym_double] = ACTIONS(767),
        [anon_sym_float] = ACTIONS(767),
        [anon_sym_object] = ACTIONS(767),
        [anon_sym_string] = ACTIONS(767),
        [sym_identifier_name] = ACTIONS(769),
        [sym_comment] = ACTIONS(99),
    },
    [270] = {
        [sym_type_parameter_list] = STATE(272),
        [anon_sym_LBRACE] = ACTIONS(819),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [271] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(274),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [272] = {
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_comment] = ACTIONS(99),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_namespace] = ACTIONS(825),
        [anon_sym_RBRACE] = ACTIONS(823),
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
        [anon_sym_sbyte] = ACTIONS(825),
        [anon_sym_byte] = ACTIONS(825),
        [anon_sym_short] = ACTIONS(825),
        [anon_sym_ushort] = ACTIONS(825),
        [anon_sym_int] = ACTIONS(825),
        [anon_sym_uint] = ACTIONS(825),
        [anon_sym_long] = ACTIONS(825),
        [anon_sym_ulong] = ACTIONS(825),
        [anon_sym_char] = ACTIONS(825),
        [anon_sym_delegate] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_readonly] = ACTIONS(825),
        [anon_sym_volatile] = ACTIONS(825),
        [anon_sym_bool] = ACTIONS(825),
        [anon_sym_decimal] = ACTIONS(825),
        [anon_sym_double] = ACTIONS(825),
        [anon_sym_float] = ACTIONS(825),
        [anon_sym_object] = ACTIONS(825),
        [anon_sym_string] = ACTIONS(825),
        [sym_identifier_name] = ACTIONS(827),
        [sym_comment] = ACTIONS(99),
    },
    [274] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [275] = {
        [sym__class_modifiers] = STATE(276),
        [sym__struct_modifiers] = STATE(277),
        [sym__field_modifiers] = STATE(257),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(623),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(623),
        [anon_sym_public] = ACTIONS(623),
        [anon_sym_protected] = ACTIONS(623),
        [anon_sym_internal] = ACTIONS(623),
        [anon_sym_private] = ACTIONS(623),
        [anon_sym_struct] = ACTIONS(625),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(99),
    },
    [276] = {
        [anon_sym_class] = ACTIONS(829),
        [sym_comment] = ACTIONS(99),
    },
    [277] = {
        [anon_sym_struct] = ACTIONS(831),
        [sym_comment] = ACTIONS(99),
    },
    [278] = {
        [sym_type_parameter_list] = STATE(280),
        [anon_sym_LBRACE] = ACTIONS(833),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [279] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(282),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(835),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [280] = {
        [anon_sym_LBRACE] = ACTIONS(781),
        [sym_comment] = ACTIONS(99),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(837),
        [anon_sym_namespace] = ACTIONS(839),
        [anon_sym_RBRACE] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_unsafe] = ACTIONS(839),
        [anon_sym_abstract] = ACTIONS(839),
        [anon_sym_sealed] = ACTIONS(839),
        [anon_sym_static] = ACTIONS(839),
        [anon_sym_new] = ACTIONS(839),
        [anon_sym_public] = ACTIONS(839),
        [anon_sym_protected] = ACTIONS(839),
        [anon_sym_internal] = ACTIONS(839),
        [anon_sym_private] = ACTIONS(839),
        [anon_sym_struct] = ACTIONS(839),
        [anon_sym_enum] = ACTIONS(839),
        [anon_sym_sbyte] = ACTIONS(839),
        [anon_sym_byte] = ACTIONS(839),
        [anon_sym_short] = ACTIONS(839),
        [anon_sym_ushort] = ACTIONS(839),
        [anon_sym_int] = ACTIONS(839),
        [anon_sym_uint] = ACTIONS(839),
        [anon_sym_long] = ACTIONS(839),
        [anon_sym_ulong] = ACTIONS(839),
        [anon_sym_char] = ACTIONS(839),
        [anon_sym_delegate] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(837),
        [anon_sym_readonly] = ACTIONS(839),
        [anon_sym_volatile] = ACTIONS(839),
        [anon_sym_bool] = ACTIONS(839),
        [anon_sym_decimal] = ACTIONS(839),
        [anon_sym_double] = ACTIONS(839),
        [anon_sym_float] = ACTIONS(839),
        [anon_sym_object] = ACTIONS(839),
        [anon_sym_string] = ACTIONS(839),
        [sym_identifier_name] = ACTIONS(841),
        [sym_comment] = ACTIONS(99),
    },
    [282] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(783),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [283] = {
        [anon_sym_COLON] = ACTIONS(843),
        [sym_comment] = ACTIONS(99),
    },
    [284] = {
        [sym_attribute_list] = STATE(285),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(99),
    },
    [285] = {
        [anon_sym_RBRACK] = ACTIONS(845),
        [sym_comment] = ACTIONS(99),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_namespace] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_unsafe] = ACTIONS(847),
        [anon_sym_abstract] = ACTIONS(847),
        [anon_sym_sealed] = ACTIONS(847),
        [anon_sym_static] = ACTIONS(847),
        [anon_sym_new] = ACTIONS(847),
        [anon_sym_public] = ACTIONS(847),
        [anon_sym_protected] = ACTIONS(847),
        [anon_sym_internal] = ACTIONS(847),
        [anon_sym_private] = ACTIONS(847),
        [anon_sym_struct] = ACTIONS(847),
        [anon_sym_enum] = ACTIONS(847),
        [anon_sym_delegate] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(847),
        [sym_comment] = ACTIONS(99),
    },
    [287] = {
        [sym__class_modifiers] = STATE(276),
        [sym__struct_modifiers] = STATE(277),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_struct] = ACTIONS(141),
        [sym_comment] = ACTIONS(99),
    },
    [288] = {
        [anon_sym_COLON_COLON] = ACTIONS(849),
        [sym_comment] = ACTIONS(99),
    },
    [289] = {
        [anon_sym_LBRACE] = ACTIONS(851),
        [anon_sym_DOT] = ACTIONS(853),
        [sym_comment] = ACTIONS(99),
    },
    [290] = {
        [anon_sym_DOT] = ACTIONS(853),
        [sym_comment] = ACTIONS(99),
    },
    [291] = {
        [sym_identifier_name] = ACTIONS(855),
        [sym_comment] = ACTIONS(99),
    },
    [292] = {
        [anon_sym_SEMI] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [anon_sym_DOT] = ACTIONS(857),
        [sym_comment] = ACTIONS(99),
    },
    [293] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(295),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [294] = {
        [ts_builtin_sym_end] = ACTIONS(861),
        [anon_sym_namespace] = ACTIONS(861),
        [anon_sym_RBRACE] = ACTIONS(861),
        [anon_sym_class] = ACTIONS(861),
        [anon_sym_unsafe] = ACTIONS(861),
        [anon_sym_abstract] = ACTIONS(861),
        [anon_sym_sealed] = ACTIONS(861),
        [anon_sym_static] = ACTIONS(861),
        [anon_sym_new] = ACTIONS(861),
        [anon_sym_public] = ACTIONS(861),
        [anon_sym_protected] = ACTIONS(861),
        [anon_sym_internal] = ACTIONS(861),
        [anon_sym_private] = ACTIONS(861),
        [anon_sym_struct] = ACTIONS(861),
        [anon_sym_enum] = ACTIONS(861),
        [anon_sym_delegate] = ACTIONS(861),
        [anon_sym_LBRACK] = ACTIONS(861),
        [sym_comment] = ACTIONS(99),
    },
    [295] = {
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
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_namespace] = ACTIONS(865),
        [anon_sym_RBRACE] = ACTIONS(865),
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
        [sym_comment] = ACTIONS(99),
    },
    [297] = {
        [sym_identifier_name] = ACTIONS(867),
        [sym_comment] = ACTIONS(99),
    },
    [298] = {
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(99),
    },
    [299] = {
        [sym_global] = ACTIONS(871),
        [sym_identifier_name] = ACTIONS(873),
        [sym_comment] = ACTIONS(99),
    },
    [300] = {
        [anon_sym_SEMI] = ACTIONS(875),
        [anon_sym_EQ] = ACTIONS(877),
        [anon_sym_DOT] = ACTIONS(853),
        [sym_comment] = ACTIONS(99),
    },
    [301] = {
        [anon_sym_SEMI] = ACTIONS(875),
        [anon_sym_DOT] = ACTIONS(853),
        [sym_comment] = ACTIONS(99),
    },
    [302] = {
        [sym_qualified_name] = STATE(303),
        [sym_alias_qualified_name] = STATE(290),
        [sym_global] = ACTIONS(129),
        [sym_identifier_name] = ACTIONS(879),
        [sym_comment] = ACTIONS(99),
    },
    [303] = {
        [anon_sym_SEMI] = ACTIONS(881),
        [anon_sym_DOT] = ACTIONS(853),
        [sym_comment] = ACTIONS(99),
    },
    [304] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_using] = ACTIONS(883),
        [anon_sym_namespace] = ACTIONS(883),
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
        [sym_comment] = ACTIONS(99),
    },
    [305] = {
        [ts_builtin_sym_end] = ACTIONS(885),
        [anon_sym_using] = ACTIONS(885),
        [anon_sym_namespace] = ACTIONS(885),
        [anon_sym_class] = ACTIONS(885),
        [anon_sym_unsafe] = ACTIONS(885),
        [anon_sym_abstract] = ACTIONS(885),
        [anon_sym_sealed] = ACTIONS(885),
        [anon_sym_static] = ACTIONS(885),
        [anon_sym_new] = ACTIONS(885),
        [anon_sym_public] = ACTIONS(885),
        [anon_sym_protected] = ACTIONS(885),
        [anon_sym_internal] = ACTIONS(885),
        [anon_sym_private] = ACTIONS(885),
        [anon_sym_struct] = ACTIONS(885),
        [anon_sym_enum] = ACTIONS(885),
        [anon_sym_delegate] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [sym_comment] = ACTIONS(99),
    },
    [306] = {
        [sym_global] = ACTIONS(887),
        [sym_identifier_name] = ACTIONS(889),
        [sym_comment] = ACTIONS(99),
    },
    [307] = {
        [sym_identifier_name] = ACTIONS(891),
        [sym_comment] = ACTIONS(99),
    },
    [308] = {
        [anon_sym_SEMI] = ACTIONS(893),
        [sym_comment] = ACTIONS(99),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(895),
        [anon_sym_extern] = ACTIONS(895),
        [anon_sym_using] = ACTIONS(895),
        [anon_sym_namespace] = ACTIONS(895),
        [anon_sym_class] = ACTIONS(895),
        [anon_sym_unsafe] = ACTIONS(895),
        [anon_sym_abstract] = ACTIONS(895),
        [anon_sym_sealed] = ACTIONS(895),
        [anon_sym_static] = ACTIONS(895),
        [anon_sym_new] = ACTIONS(895),
        [anon_sym_public] = ACTIONS(895),
        [anon_sym_protected] = ACTIONS(895),
        [anon_sym_internal] = ACTIONS(895),
        [anon_sym_private] = ACTIONS(895),
        [anon_sym_struct] = ACTIONS(895),
        [anon_sym_enum] = ACTIONS(895),
        [anon_sym_delegate] = ACTIONS(895),
        [anon_sym_LBRACK] = ACTIONS(895),
        [sym_comment] = ACTIONS(99),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(897),
        [anon_sym_extern] = ACTIONS(910),
        [anon_sym_using] = ACTIONS(912),
        [anon_sym_namespace] = ACTIONS(916),
        [anon_sym_RBRACE] = ACTIONS(929),
        [anon_sym_class] = ACTIONS(942),
        [anon_sym_unsafe] = ACTIONS(942),
        [anon_sym_abstract] = ACTIONS(942),
        [anon_sym_sealed] = ACTIONS(942),
        [anon_sym_static] = ACTIONS(942),
        [anon_sym_new] = ACTIONS(942),
        [anon_sym_public] = ACTIONS(942),
        [anon_sym_protected] = ACTIONS(942),
        [anon_sym_internal] = ACTIONS(942),
        [anon_sym_private] = ACTIONS(942),
        [anon_sym_struct] = ACTIONS(942),
        [anon_sym_enum] = ACTIONS(942),
        [anon_sym_sbyte] = ACTIONS(958),
        [anon_sym_byte] = ACTIONS(958),
        [anon_sym_short] = ACTIONS(958),
        [anon_sym_ushort] = ACTIONS(958),
        [anon_sym_int] = ACTIONS(958),
        [anon_sym_uint] = ACTIONS(958),
        [anon_sym_long] = ACTIONS(958),
        [anon_sym_ulong] = ACTIONS(958),
        [anon_sym_char] = ACTIONS(958),
        [anon_sym_delegate] = ACTIONS(942),
        [anon_sym_LBRACK] = ACTIONS(971),
        [anon_sym_readonly] = ACTIONS(958),
        [anon_sym_volatile] = ACTIONS(958),
        [anon_sym_bool] = ACTIONS(958),
        [anon_sym_decimal] = ACTIONS(958),
        [anon_sym_double] = ACTIONS(958),
        [anon_sym_float] = ACTIONS(958),
        [anon_sym_object] = ACTIONS(958),
        [anon_sym_string] = ACTIONS(958),
        [sym_identifier_name] = ACTIONS(987),
        [sym_comment] = ACTIONS(99),
    },
    [311] = {
        [sym__type_declaration] = STATE(457),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(504),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(459),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(295),
        [aux_sym_class_declaration_repeat1] = STATE(373),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1000),
        [anon_sym_RBRACE] = ACTIONS(1002),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(1004),
        [sym_comment] = ACTIONS(99),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(1006),
        [anon_sym_SEMI] = ACTIONS(1025),
        [anon_sym_namespace] = ACTIONS(1027),
        [anon_sym_RBRACE] = ACTIONS(1006),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_unsafe] = ACTIONS(1027),
        [anon_sym_abstract] = ACTIONS(1027),
        [anon_sym_sealed] = ACTIONS(1027),
        [anon_sym_static] = ACTIONS(1027),
        [anon_sym_new] = ACTIONS(1027),
        [anon_sym_public] = ACTIONS(1027),
        [anon_sym_protected] = ACTIONS(1027),
        [anon_sym_internal] = ACTIONS(1027),
        [anon_sym_private] = ACTIONS(1027),
        [anon_sym_struct] = ACTIONS(1027),
        [anon_sym_enum] = ACTIONS(1027),
        [anon_sym_sbyte] = ACTIONS(1046),
        [anon_sym_byte] = ACTIONS(1046),
        [anon_sym_short] = ACTIONS(1046),
        [anon_sym_ushort] = ACTIONS(1046),
        [anon_sym_int] = ACTIONS(1046),
        [anon_sym_uint] = ACTIONS(1046),
        [anon_sym_long] = ACTIONS(1046),
        [anon_sym_ulong] = ACTIONS(1046),
        [anon_sym_char] = ACTIONS(1046),
        [anon_sym_delegate] = ACTIONS(1027),
        [anon_sym_LBRACK] = ACTIONS(1006),
        [anon_sym_readonly] = ACTIONS(1046),
        [anon_sym_volatile] = ACTIONS(1046),
        [anon_sym_bool] = ACTIONS(1046),
        [anon_sym_decimal] = ACTIONS(1046),
        [anon_sym_double] = ACTIONS(1046),
        [anon_sym_float] = ACTIONS(1046),
        [anon_sym_object] = ACTIONS(1046),
        [anon_sym_string] = ACTIONS(1046),
        [sym_identifier_name] = ACTIONS(1063),
        [sym_comment] = ACTIONS(99),
    },
    [313] = {
        [sym_identifier_name] = ACTIONS(1080),
        [sym_comment] = ACTIONS(99),
    },
    [314] = {
        [sym__class_modifiers] = STATE(276),
        [sym__field_modifiers] = STATE(257),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(599),
        [anon_sym_public] = ACTIONS(599),
        [anon_sym_protected] = ACTIONS(599),
        [anon_sym_internal] = ACTIONS(599),
        [anon_sym_private] = ACTIONS(599),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_global] = ACTIONS(871),
        [sym_identifier_name] = ACTIONS(1082),
        [sym_comment] = ACTIONS(99),
    },
    [315] = {
        [sym_identifier_name] = ACTIONS(1085),
        [sym_comment] = ACTIONS(99),
    },
    [316] = {
        [sym_identifier_name] = ACTIONS(1087),
        [sym_comment] = ACTIONS(99),
    },
    [317] = {
        [sym__integral_type] = STATE(346),
        [sym_attribute_list] = STATE(285),
        [sym_attribute] = STATE(36),
        [anon_sym_sbyte] = ACTIONS(1089),
        [anon_sym_byte] = ACTIONS(1089),
        [anon_sym_short] = ACTIONS(1089),
        [anon_sym_ushort] = ACTIONS(1089),
        [anon_sym_int] = ACTIONS(1089),
        [anon_sym_uint] = ACTIONS(1089),
        [anon_sym_long] = ACTIONS(1089),
        [anon_sym_ulong] = ACTIONS(1089),
        [anon_sym_char] = ACTIONS(1089),
        [sym_identifier_name] = ACTIONS(159),
        [sym_comment] = ACTIONS(99),
    },
    [318] = {
        [sym_enum_member_declaration] = STATE(474),
        [sym_parameter] = STATE(475),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(476),
        [sym__attribute_section] = STATE(25),
        [sym_attribute] = STATE(477),
        [sym__type] = STATE(478),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(479),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(480),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1091),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_RBRACK] = ACTIONS(1091),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(1094),
        [sym_comment] = ACTIONS(99),
    },
    [319] = {
        [anon_sym_LBRACE] = ACTIONS(405),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_GT] = ACTIONS(269),
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(99),
    },
    [320] = {
        [sym__return_type] = STATE(348),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [sym_void_keyword] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [321] = {
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
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(1096),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [sym_params_keyword] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [322] = {
        [anon_sym_SEMI] = ACTIONS(1098),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(99),
    },
    [323] = {
        [sym_array_type] = STATE(353),
        [sym__type] = STATE(91),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [324] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_RBRACK] = ACTIONS(333),
        [anon_sym_assembly] = ACTIONS(157),
        [anon_sym_module] = ACTIONS(157),
        [sym_identifier_name] = ACTIONS(159),
        [sym_comment] = ACTIONS(99),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_namespace] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_unsafe] = ACTIONS(1103),
        [anon_sym_abstract] = ACTIONS(1103),
        [anon_sym_sealed] = ACTIONS(1103),
        [anon_sym_static] = ACTIONS(1103),
        [anon_sym_new] = ACTIONS(1103),
        [anon_sym_public] = ACTIONS(1103),
        [anon_sym_protected] = ACTIONS(1103),
        [anon_sym_internal] = ACTIONS(1103),
        [anon_sym_private] = ACTIONS(1103),
        [anon_sym_struct] = ACTIONS(1103),
        [anon_sym_enum] = ACTIONS(1103),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_delegate] = ACTIONS(1103),
        [anon_sym_ref] = ACTIONS(229),
        [anon_sym_out] = ACTIONS(229),
        [anon_sym_this] = ACTIONS(229),
        [sym_params_keyword] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(1106),
        [anon_sym_readonly] = ACTIONS(229),
        [anon_sym_volatile] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(1109),
        [sym_comment] = ACTIONS(99),
    },
    [326] = {
        [sym__literal] = STATE(144),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(145),
        [sym__verbatim_string_literal] = STATE(145),
        [anon_sym_true] = ACTIONS(1113),
        [anon_sym_false] = ACTIONS(1113),
        [anon_sym_SQUOTE] = ACTIONS(423),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(425),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(427),
        [sym_null_literal] = ACTIONS(1115),
        [anon_sym_DOT] = ACTIONS(431),
        [anon_sym_DQUOTE] = ACTIONS(433),
        [anon_sym_AT_DQUOTE] = ACTIONS(435),
        [sym_global] = ACTIONS(887),
        [sym_identifier_name] = ACTIONS(889),
        [sym_comment] = ACTIONS(99),
    },
    [327] = {
        [sym__unicode_escape_sequence] = STATE(167),
        [sym__simple_escape_sequence] = STATE(167),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1117),
        [sym__hexadecimal_escape_sequence] = ACTIONS(441),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(443),
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
        [sym_comment] = ACTIONS(99),
    },
    [328] = {
        [anon_sym_SQUOTE] = ACTIONS(533),
        [sym__hexadecimal_escape_sequence] = ACTIONS(481),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(483),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(483),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(483),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(483),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(483),
        [anon_sym_BSLASH0] = ACTIONS(483),
        [anon_sym_BSLASHa] = ACTIONS(483),
        [anon_sym_BSLASHb] = ACTIONS(483),
        [anon_sym_BSLASHf] = ACTIONS(483),
        [anon_sym_BSLASHn] = ACTIONS(483),
        [anon_sym_BSLASHr] = ACTIONS(483),
        [anon_sym_BSLASHt] = ACTIONS(483),
        [anon_sym_BSLASHv] = ACTIONS(483),
        [anon_sym_DQUOTE] = ACTIONS(483),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1119),
        [sym_comment] = ACTIONS(99),
    },
    [329] = {
        [anon_sym_SEMI] = ACTIONS(1121),
        [anon_sym_RBRACE] = ACTIONS(1121),
        [anon_sym_COMMA] = ACTIONS(1121),
        [sym__integer_type_suffix] = ACTIONS(449),
        [anon_sym_DOT] = ACTIONS(451),
        [sym__real_type_suffix] = ACTIONS(1125),
        [sym__exponent_part] = ACTIONS(1127),
        [sym_comment] = ACTIONS(99),
    },
    [330] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1129),
        [sym_identifier_name] = ACTIONS(855),
        [sym_comment] = ACTIONS(99),
    },
    [331] = {
        [anon_sym_SEMI] = ACTIONS(1131),
        [anon_sym_RBRACE] = ACTIONS(1131),
        [anon_sym_COMMA] = ACTIONS(1131),
        [sym_comment] = ACTIONS(99),
    },
    [332] = {
        [anon_sym_SEMI] = ACTIONS(1136),
        [anon_sym_RBRACE] = ACTIONS(1136),
        [anon_sym_COMMA] = ACTIONS(1136),
        [sym__real_type_suffix] = ACTIONS(1140),
        [sym_comment] = ACTIONS(99),
    },
    [333] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [sym__regular_string_literal_character] = STATE(152),
        [aux_sym__regular_string_literal_repeat1] = STATE(153),
        [anon_sym_SEMI] = ACTIONS(1142),
        [anon_sym_RBRACE] = ACTIONS(1142),
        [anon_sym_COMMA] = ACTIONS(1142),
        [sym__hexadecimal_escape_sequence] = ACTIONS(461),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(463),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(465),
        [anon_sym_BSLASH0] = ACTIONS(465),
        [anon_sym_BSLASHa] = ACTIONS(465),
        [anon_sym_BSLASHb] = ACTIONS(465),
        [anon_sym_BSLASHf] = ACTIONS(465),
        [anon_sym_BSLASHn] = ACTIONS(465),
        [anon_sym_BSLASHr] = ACTIONS(465),
        [anon_sym_BSLASHt] = ACTIONS(465),
        [anon_sym_BSLASHv] = ACTIONS(465),
        [anon_sym_DQUOTE] = ACTIONS(467),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1146),
        [sym_comment] = ACTIONS(99),
    },
    [334] = {
        [anon_sym_LBRACE] = ACTIONS(1148),
        [anon_sym_COMMA] = ACTIONS(1148),
        [anon_sym_LBRACK] = ACTIONS(1148),
        [anon_sym_GT] = ACTIONS(1148),
        [sym_identifier_name] = ACTIONS(1151),
        [sym_comment] = ACTIONS(99),
    },
    [335] = {
        [sym_parameter_list] = STATE(349),
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(365),
        [sym_type_parameter_list] = STATE(367),
        [anon_sym_SEMI] = ACTIONS(1154),
        [anon_sym_LBRACE] = ACTIONS(1158),
        [anon_sym_RBRACE] = ACTIONS(1161),
        [anon_sym_COLON] = ACTIONS(1164),
        [anon_sym_COMMA] = ACTIONS(1166),
        [anon_sym_LPAREN] = ACTIONS(1175),
        [anon_sym_RPAREN] = ACTIONS(1177),
        [sym_params_keyword] = ACTIONS(1183),
        [anon_sym_LBRACK] = ACTIONS(1187),
        [anon_sym_RBRACK] = ACTIONS(211),
        [anon_sym_EQ] = ACTIONS(1192),
        [anon_sym_DOT] = ACTIONS(1194),
        [anon_sym_LT] = ACTIONS(277),
        [anon_sym_GT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(1198),
        [sym_comment] = ACTIONS(99),
    },
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(1200),
        [anon_sym_namespace] = ACTIONS(1203),
        [anon_sym_RBRACE] = ACTIONS(1206),
        [anon_sym_class] = ACTIONS(1211),
        [anon_sym_unsafe] = ACTIONS(1211),
        [anon_sym_abstract] = ACTIONS(1211),
        [anon_sym_sealed] = ACTIONS(1211),
        [anon_sym_static] = ACTIONS(1211),
        [anon_sym_new] = ACTIONS(1211),
        [anon_sym_public] = ACTIONS(1211),
        [anon_sym_protected] = ACTIONS(1211),
        [anon_sym_internal] = ACTIONS(1211),
        [anon_sym_private] = ACTIONS(1211),
        [anon_sym_struct] = ACTIONS(1211),
        [anon_sym_enum] = ACTIONS(1211),
        [anon_sym_sbyte] = ACTIONS(1216),
        [anon_sym_byte] = ACTIONS(1216),
        [anon_sym_short] = ACTIONS(1216),
        [anon_sym_ushort] = ACTIONS(1216),
        [anon_sym_int] = ACTIONS(1216),
        [anon_sym_uint] = ACTIONS(1216),
        [anon_sym_long] = ACTIONS(1216),
        [anon_sym_ulong] = ACTIONS(1216),
        [anon_sym_char] = ACTIONS(1216),
        [anon_sym_delegate] = ACTIONS(1211),
        [anon_sym_LBRACK] = ACTIONS(1206),
        [anon_sym_readonly] = ACTIONS(1216),
        [anon_sym_volatile] = ACTIONS(1216),
        [anon_sym_bool] = ACTIONS(1216),
        [anon_sym_decimal] = ACTIONS(1216),
        [anon_sym_double] = ACTIONS(1216),
        [anon_sym_float] = ACTIONS(1216),
        [anon_sym_object] = ACTIONS(1216),
        [anon_sym_string] = ACTIONS(1216),
        [sym_identifier_name] = ACTIONS(1219),
        [sym_comment] = ACTIONS(99),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(1222),
        [anon_sym_extern] = ACTIONS(1222),
        [anon_sym_using] = ACTIONS(1222),
        [anon_sym_namespace] = ACTIONS(1222),
        [anon_sym_class] = ACTIONS(1222),
        [anon_sym_unsafe] = ACTIONS(1222),
        [anon_sym_abstract] = ACTIONS(1222),
        [anon_sym_sealed] = ACTIONS(1222),
        [anon_sym_static] = ACTIONS(1222),
        [anon_sym_new] = ACTIONS(1222),
        [anon_sym_public] = ACTIONS(1222),
        [anon_sym_protected] = ACTIONS(1222),
        [anon_sym_internal] = ACTIONS(1222),
        [anon_sym_private] = ACTIONS(1222),
        [anon_sym_struct] = ACTIONS(1222),
        [anon_sym_enum] = ACTIONS(1222),
        [anon_sym_delegate] = ACTIONS(1222),
        [anon_sym_LBRACK] = ACTIONS(1222),
        [sym_comment] = ACTIONS(99),
    },
    [338] = {
        [ts_builtin_sym_end] = ACTIONS(1225),
        [anon_sym_using] = ACTIONS(1225),
        [anon_sym_namespace] = ACTIONS(1225),
        [anon_sym_class] = ACTIONS(1225),
        [anon_sym_unsafe] = ACTIONS(1225),
        [anon_sym_abstract] = ACTIONS(1225),
        [anon_sym_sealed] = ACTIONS(1225),
        [anon_sym_static] = ACTIONS(1225),
        [anon_sym_new] = ACTIONS(1225),
        [anon_sym_public] = ACTIONS(1225),
        [anon_sym_protected] = ACTIONS(1225),
        [anon_sym_internal] = ACTIONS(1225),
        [anon_sym_private] = ACTIONS(1225),
        [anon_sym_struct] = ACTIONS(1225),
        [anon_sym_enum] = ACTIONS(1225),
        [anon_sym_delegate] = ACTIONS(1225),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [sym_comment] = ACTIONS(99),
    },
    [339] = {
        [ts_builtin_sym_end] = ACTIONS(1200),
        [anon_sym_namespace] = ACTIONS(1200),
        [anon_sym_RBRACE] = ACTIONS(1200),
        [anon_sym_class] = ACTIONS(1200),
        [anon_sym_unsafe] = ACTIONS(1200),
        [anon_sym_abstract] = ACTIONS(1200),
        [anon_sym_sealed] = ACTIONS(1200),
        [anon_sym_static] = ACTIONS(1200),
        [anon_sym_new] = ACTIONS(1200),
        [anon_sym_public] = ACTIONS(1200),
        [anon_sym_protected] = ACTIONS(1200),
        [anon_sym_internal] = ACTIONS(1200),
        [anon_sym_private] = ACTIONS(1200),
        [anon_sym_struct] = ACTIONS(1200),
        [anon_sym_enum] = ACTIONS(1200),
        [anon_sym_delegate] = ACTIONS(1200),
        [anon_sym_LBRACK] = ACTIONS(1200),
        [sym_comment] = ACTIONS(99),
    },
    [340] = {
        [anon_sym_class] = ACTIONS(1228),
        [sym_comment] = ACTIONS(99),
    },
    [341] = {
        [anon_sym_class] = ACTIONS(1230),
        [sym_comment] = ACTIONS(99),
    },
    [342] = {
        [anon_sym_struct] = ACTIONS(1233),
        [sym_comment] = ACTIONS(99),
    },
    [343] = {
        [anon_sym_struct] = ACTIONS(1235),
        [sym_comment] = ACTIONS(99),
    },
    [344] = {
        [aux_sym_enum_declaration_repeat1] = STATE(374),
        [anon_sym_RBRACE] = ACTIONS(1238),
        [anon_sym_COMMA] = ACTIONS(1242),
        [sym_comment] = ACTIONS(99),
    },
    [345] = {
        [anon_sym_enum] = ACTIONS(1246),
        [sym_comment] = ACTIONS(99),
    },
    [346] = {
        [anon_sym_LBRACE] = ACTIONS(1248),
        [sym_comment] = ACTIONS(99),
    },
    [347] = {
        [anon_sym_delegate] = ACTIONS(1250),
        [sym_comment] = ACTIONS(99),
    },
    [348] = {
        [sym_identifier_name] = ACTIONS(1252),
        [sym_comment] = ACTIONS(99),
    },
    [349] = {
        [anon_sym_SEMI] = ACTIONS(1254),
        [sym_comment] = ACTIONS(99),
    },
    [350] = {
        [sym_parameter_array] = STATE(112),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1256),
        [anon_sym_RPAREN] = ACTIONS(1260),
        [sym_params_keyword] = ACTIONS(1264),
        [anon_sym_LBRACK] = ACTIONS(1268),
        [sym_comment] = ACTIONS(99),
    },
    [351] = {
        [sym__type] = STATE(396),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [352] = {
        [anon_sym_RPAREN] = ACTIONS(1272),
        [sym_comment] = ACTIONS(99),
    },
    [353] = {
        [sym_identifier_name] = ACTIONS(1276),
        [sym_comment] = ACTIONS(99),
    },
    [354] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_parameter_modifier] = STATE(85),
        [sym_field_modifiers] = STATE(217),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(215),
        [sym__type] = STATE(393),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(643),
        [anon_sym_enum] = ACTIONS(645),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(647),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [sym_params_keyword] = ACTIONS(313),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(1278),
        [sym_comment] = ACTIONS(99),
    },
    [355] = {
        [anon_sym_class] = ACTIONS(1280),
        [anon_sym_unsafe] = ACTIONS(1280),
        [anon_sym_abstract] = ACTIONS(1280),
        [anon_sym_sealed] = ACTIONS(1280),
        [anon_sym_static] = ACTIONS(1280),
        [anon_sym_new] = ACTIONS(1280),
        [anon_sym_public] = ACTIONS(1280),
        [anon_sym_protected] = ACTIONS(1280),
        [anon_sym_internal] = ACTIONS(1280),
        [anon_sym_private] = ACTIONS(1280),
        [anon_sym_struct] = ACTIONS(1280),
        [anon_sym_enum] = ACTIONS(1280),
        [anon_sym_sbyte] = ACTIONS(1280),
        [anon_sym_byte] = ACTIONS(1280),
        [anon_sym_short] = ACTIONS(1280),
        [anon_sym_ushort] = ACTIONS(1280),
        [anon_sym_int] = ACTIONS(1280),
        [anon_sym_uint] = ACTIONS(1280),
        [anon_sym_long] = ACTIONS(1280),
        [anon_sym_ulong] = ACTIONS(1280),
        [anon_sym_char] = ACTIONS(1280),
        [anon_sym_delegate] = ACTIONS(1280),
        [anon_sym_ref] = ACTIONS(1280),
        [anon_sym_out] = ACTIONS(1280),
        [anon_sym_this] = ACTIONS(1280),
        [sym_params_keyword] = ACTIONS(1280),
        [anon_sym_LBRACK] = ACTIONS(1283),
        [anon_sym_readonly] = ACTIONS(1280),
        [anon_sym_volatile] = ACTIONS(1280),
        [anon_sym_bool] = ACTIONS(1280),
        [anon_sym_decimal] = ACTIONS(1280),
        [anon_sym_double] = ACTIONS(1280),
        [anon_sym_float] = ACTIONS(1280),
        [anon_sym_object] = ACTIONS(1280),
        [anon_sym_string] = ACTIONS(1280),
        [sym_identifier_name] = ACTIONS(1286),
        [sym_comment] = ACTIONS(99),
    },
    [356] = {
        [anon_sym_RBRACK] = ACTIONS(1289),
        [sym_comment] = ACTIONS(99),
    },
    [357] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_RBRACK] = ACTIONS(1295),
        [sym_comment] = ACTIONS(99),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(1299),
        [anon_sym_namespace] = ACTIONS(1299),
        [anon_sym_class] = ACTIONS(1299),
        [anon_sym_unsafe] = ACTIONS(1299),
        [anon_sym_abstract] = ACTIONS(1299),
        [anon_sym_sealed] = ACTIONS(1299),
        [anon_sym_static] = ACTIONS(1299),
        [anon_sym_new] = ACTIONS(1299),
        [anon_sym_public] = ACTIONS(1299),
        [anon_sym_protected] = ACTIONS(1299),
        [anon_sym_internal] = ACTIONS(1299),
        [anon_sym_private] = ACTIONS(1299),
        [anon_sym_struct] = ACTIONS(1299),
        [anon_sym_enum] = ACTIONS(1299),
        [anon_sym_delegate] = ACTIONS(1299),
        [anon_sym_LBRACK] = ACTIONS(1299),
        [sym_comment] = ACTIONS(99),
    },
    [359] = {
        [anon_sym_RBRACE] = ACTIONS(1302),
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
        [anon_sym_sbyte] = ACTIONS(1216),
        [anon_sym_byte] = ACTIONS(1216),
        [anon_sym_short] = ACTIONS(1216),
        [anon_sym_ushort] = ACTIONS(1216),
        [anon_sym_int] = ACTIONS(1216),
        [anon_sym_uint] = ACTIONS(1216),
        [anon_sym_long] = ACTIONS(1216),
        [anon_sym_ulong] = ACTIONS(1216),
        [anon_sym_char] = ACTIONS(1216),
        [anon_sym_delegate] = ACTIONS(1216),
        [anon_sym_LBRACK] = ACTIONS(1302),
        [anon_sym_readonly] = ACTIONS(1216),
        [anon_sym_volatile] = ACTIONS(1216),
        [anon_sym_bool] = ACTIONS(1216),
        [anon_sym_decimal] = ACTIONS(1216),
        [anon_sym_double] = ACTIONS(1216),
        [anon_sym_float] = ACTIONS(1216),
        [anon_sym_object] = ACTIONS(1216),
        [anon_sym_string] = ACTIONS(1216),
        [sym_identifier_name] = ACTIONS(1219),
        [sym_comment] = ACTIONS(99),
    },
    [360] = {
        [sym_variable_declaration] = STATE(389),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [361] = {
        [anon_sym_sbyte] = ACTIONS(1305),
        [anon_sym_byte] = ACTIONS(1305),
        [anon_sym_short] = ACTIONS(1305),
        [anon_sym_ushort] = ACTIONS(1305),
        [anon_sym_int] = ACTIONS(1305),
        [anon_sym_uint] = ACTIONS(1305),
        [anon_sym_long] = ACTIONS(1305),
        [anon_sym_ulong] = ACTIONS(1305),
        [anon_sym_char] = ACTIONS(1305),
        [anon_sym_bool] = ACTIONS(1305),
        [anon_sym_decimal] = ACTIONS(1305),
        [anon_sym_double] = ACTIONS(1305),
        [anon_sym_float] = ACTIONS(1305),
        [anon_sym_object] = ACTIONS(1305),
        [anon_sym_string] = ACTIONS(1305),
        [sym_identifier_name] = ACTIONS(1308),
        [sym_comment] = ACTIONS(99),
    },
    [362] = {
        [anon_sym_SEMI] = ACTIONS(1311),
        [sym_comment] = ACTIONS(99),
    },
    [363] = {
        [sym_array_rank_specifier] = STATE(93),
        [sym_variable_declarator] = STATE(207),
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_GT] = ACTIONS(355),
        [sym_identifier_name] = ACTIONS(1313),
        [sym_comment] = ACTIONS(99),
    },
    [364] = {
        [aux_sym_variable_declaration_repeat1] = STATE(209),
        [anon_sym_SEMI] = ACTIONS(1316),
        [anon_sym_COMMA] = ACTIONS(1320),
        [sym_comment] = ACTIONS(99),
    },
    [365] = {
        [anon_sym_SEMI] = ACTIONS(685),
        [anon_sym_RBRACE] = ACTIONS(1324),
        [anon_sym_COMMA] = ACTIONS(1327),
        [sym_comment] = ACTIONS(99),
    },
    [366] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1331),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1334),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1334),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1334),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1334),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1334),
        [anon_sym_BSLASH0] = ACTIONS(1334),
        [anon_sym_BSLASHa] = ACTIONS(1334),
        [anon_sym_BSLASHb] = ACTIONS(1334),
        [anon_sym_BSLASHf] = ACTIONS(1334),
        [anon_sym_BSLASHn] = ACTIONS(1334),
        [anon_sym_BSLASHr] = ACTIONS(1334),
        [anon_sym_BSLASHt] = ACTIONS(1334),
        [anon_sym_BSLASHv] = ACTIONS(1334),
        [anon_sym_DQUOTE] = ACTIONS(1334),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1331),
        [sym_comment] = ACTIONS(99),
    },
    [367] = {
        [anon_sym_LBRACE] = ACTIONS(1337),
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_LBRACK] = ACTIONS(351),
        [anon_sym_GT] = ACTIONS(351),
        [sym_identifier_name] = ACTIONS(353),
        [sym_comment] = ACTIONS(99),
    },
    [368] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(1339),
        [anon_sym_GT] = ACTIONS(1343),
        [sym_comment] = ACTIONS(99),
    },
    [369] = {
        [anon_sym_SEMI] = ACTIONS(1347),
        [anon_sym_LBRACE] = ACTIONS(851),
        [anon_sym_DOT] = ACTIONS(853),
        [sym_comment] = ACTIONS(99),
    },
    [370] = {
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
        [aux_sym_compilation_unit_repeat3] = STATE(379),
        [aux_sym_compilation_unit_repeat4] = STATE(380),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1349),
        [anon_sym_using] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
    },
    [371] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(378),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1352),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
    },
    [372] = {
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
        [ts_builtin_sym_end] = ACTIONS(1356),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [373] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1361),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [374] = {
        [anon_sym_RBRACE] = ACTIONS(1363),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(1365),
        [anon_sym_SEMI] = ACTIONS(1371),
        [anon_sym_namespace] = ACTIONS(1373),
        [anon_sym_RBRACE] = ACTIONS(1365),
        [anon_sym_class] = ACTIONS(1373),
        [anon_sym_unsafe] = ACTIONS(1373),
        [anon_sym_abstract] = ACTIONS(1373),
        [anon_sym_sealed] = ACTIONS(1373),
        [anon_sym_static] = ACTIONS(1373),
        [anon_sym_new] = ACTIONS(1373),
        [anon_sym_public] = ACTIONS(1373),
        [anon_sym_protected] = ACTIONS(1373),
        [anon_sym_internal] = ACTIONS(1373),
        [anon_sym_private] = ACTIONS(1373),
        [anon_sym_struct] = ACTIONS(1373),
        [anon_sym_enum] = ACTIONS(1373),
        [anon_sym_sbyte] = ACTIONS(1373),
        [anon_sym_byte] = ACTIONS(1373),
        [anon_sym_short] = ACTIONS(1373),
        [anon_sym_ushort] = ACTIONS(1373),
        [anon_sym_int] = ACTIONS(1373),
        [anon_sym_uint] = ACTIONS(1373),
        [anon_sym_long] = ACTIONS(1373),
        [anon_sym_ulong] = ACTIONS(1373),
        [anon_sym_char] = ACTIONS(1373),
        [anon_sym_delegate] = ACTIONS(1373),
        [anon_sym_LBRACK] = ACTIONS(1365),
        [anon_sym_readonly] = ACTIONS(1373),
        [anon_sym_volatile] = ACTIONS(1373),
        [anon_sym_bool] = ACTIONS(1373),
        [anon_sym_decimal] = ACTIONS(1373),
        [anon_sym_double] = ACTIONS(1373),
        [anon_sym_float] = ACTIONS(1373),
        [anon_sym_object] = ACTIONS(1373),
        [anon_sym_string] = ACTIONS(1373),
        [sym_identifier_name] = ACTIONS(1379),
        [sym_comment] = ACTIONS(99),
    },
    [376] = {
        [ts_builtin_sym_end] = ACTIONS(1385),
        [anon_sym_namespace] = ACTIONS(1391),
        [anon_sym_RBRACE] = ACTIONS(1385),
        [anon_sym_class] = ACTIONS(1391),
        [anon_sym_unsafe] = ACTIONS(1391),
        [anon_sym_abstract] = ACTIONS(1391),
        [anon_sym_sealed] = ACTIONS(1391),
        [anon_sym_static] = ACTIONS(1391),
        [anon_sym_new] = ACTIONS(1391),
        [anon_sym_public] = ACTIONS(1391),
        [anon_sym_protected] = ACTIONS(1391),
        [anon_sym_internal] = ACTIONS(1391),
        [anon_sym_private] = ACTIONS(1391),
        [anon_sym_struct] = ACTIONS(1391),
        [anon_sym_enum] = ACTIONS(1391),
        [anon_sym_sbyte] = ACTIONS(1391),
        [anon_sym_byte] = ACTIONS(1391),
        [anon_sym_short] = ACTIONS(1391),
        [anon_sym_ushort] = ACTIONS(1391),
        [anon_sym_int] = ACTIONS(1391),
        [anon_sym_uint] = ACTIONS(1391),
        [anon_sym_long] = ACTIONS(1391),
        [anon_sym_ulong] = ACTIONS(1391),
        [anon_sym_char] = ACTIONS(1391),
        [anon_sym_delegate] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1385),
        [anon_sym_readonly] = ACTIONS(1391),
        [anon_sym_volatile] = ACTIONS(1391),
        [anon_sym_bool] = ACTIONS(1391),
        [anon_sym_decimal] = ACTIONS(1391),
        [anon_sym_double] = ACTIONS(1391),
        [anon_sym_float] = ACTIONS(1391),
        [anon_sym_object] = ACTIONS(1391),
        [anon_sym_string] = ACTIONS(1391),
        [sym_identifier_name] = ACTIONS(1397),
        [sym_comment] = ACTIONS(99),
    },
    [377] = {
        [ts_builtin_sym_end] = ACTIONS(1403),
        [anon_sym_namespace] = ACTIONS(1412),
        [anon_sym_RBRACE] = ACTIONS(1403),
        [anon_sym_class] = ACTIONS(1412),
        [anon_sym_unsafe] = ACTIONS(1412),
        [anon_sym_abstract] = ACTIONS(1412),
        [anon_sym_sealed] = ACTIONS(1412),
        [anon_sym_static] = ACTIONS(1412),
        [anon_sym_new] = ACTIONS(1412),
        [anon_sym_public] = ACTIONS(1412),
        [anon_sym_protected] = ACTIONS(1412),
        [anon_sym_internal] = ACTIONS(1412),
        [anon_sym_private] = ACTIONS(1412),
        [anon_sym_struct] = ACTIONS(1412),
        [anon_sym_enum] = ACTIONS(1412),
        [anon_sym_sbyte] = ACTIONS(1412),
        [anon_sym_byte] = ACTIONS(1412),
        [anon_sym_short] = ACTIONS(1412),
        [anon_sym_ushort] = ACTIONS(1412),
        [anon_sym_int] = ACTIONS(1412),
        [anon_sym_uint] = ACTIONS(1412),
        [anon_sym_long] = ACTIONS(1412),
        [anon_sym_ulong] = ACTIONS(1412),
        [anon_sym_char] = ACTIONS(1412),
        [anon_sym_delegate] = ACTIONS(1412),
        [anon_sym_LBRACK] = ACTIONS(1403),
        [anon_sym_readonly] = ACTIONS(1412),
        [anon_sym_volatile] = ACTIONS(1412),
        [anon_sym_bool] = ACTIONS(1412),
        [anon_sym_decimal] = ACTIONS(1412),
        [anon_sym_double] = ACTIONS(1412),
        [anon_sym_float] = ACTIONS(1412),
        [anon_sym_object] = ACTIONS(1412),
        [anon_sym_string] = ACTIONS(1412),
        [sym_identifier_name] = ACTIONS(1421),
        [sym_comment] = ACTIONS(99),
    },
    [378] = {
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
        [ts_builtin_sym_end] = ACTIONS(1430),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [379] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(381),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1434),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [sym_comment] = ACTIONS(99),
    },
    [380] = {
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
        [ts_builtin_sym_end] = ACTIONS(1434),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [381] = {
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
        [ts_builtin_sym_end] = ACTIONS(1437),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_enum] = ACTIONS(119),
        [anon_sym_delegate] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(99),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(1440),
        [anon_sym_using] = ACTIONS(1440),
        [anon_sym_namespace] = ACTIONS(1440),
        [anon_sym_class] = ACTIONS(1440),
        [anon_sym_unsafe] = ACTIONS(1440),
        [anon_sym_abstract] = ACTIONS(1440),
        [anon_sym_sealed] = ACTIONS(1440),
        [anon_sym_static] = ACTIONS(1440),
        [anon_sym_new] = ACTIONS(1440),
        [anon_sym_public] = ACTIONS(1440),
        [anon_sym_protected] = ACTIONS(1440),
        [anon_sym_internal] = ACTIONS(1440),
        [anon_sym_private] = ACTIONS(1440),
        [anon_sym_struct] = ACTIONS(1440),
        [anon_sym_enum] = ACTIONS(1440),
        [anon_sym_delegate] = ACTIONS(1440),
        [anon_sym_LBRACK] = ACTIONS(1440),
        [sym_comment] = ACTIONS(99),
    },
    [383] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(385),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1443),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(1445),
        [anon_sym_namespace] = ACTIONS(1452),
        [anon_sym_RBRACE] = ACTIONS(1445),
        [anon_sym_class] = ACTIONS(1452),
        [anon_sym_unsafe] = ACTIONS(1452),
        [anon_sym_abstract] = ACTIONS(1452),
        [anon_sym_sealed] = ACTIONS(1452),
        [anon_sym_static] = ACTIONS(1452),
        [anon_sym_new] = ACTIONS(1452),
        [anon_sym_public] = ACTIONS(1452),
        [anon_sym_protected] = ACTIONS(1452),
        [anon_sym_internal] = ACTIONS(1452),
        [anon_sym_private] = ACTIONS(1452),
        [anon_sym_struct] = ACTIONS(1452),
        [anon_sym_enum] = ACTIONS(1452),
        [anon_sym_sbyte] = ACTIONS(1452),
        [anon_sym_byte] = ACTIONS(1452),
        [anon_sym_short] = ACTIONS(1452),
        [anon_sym_ushort] = ACTIONS(1452),
        [anon_sym_int] = ACTIONS(1452),
        [anon_sym_uint] = ACTIONS(1452),
        [anon_sym_long] = ACTIONS(1452),
        [anon_sym_ulong] = ACTIONS(1452),
        [anon_sym_char] = ACTIONS(1452),
        [anon_sym_delegate] = ACTIONS(1452),
        [anon_sym_LBRACK] = ACTIONS(1445),
        [anon_sym_readonly] = ACTIONS(1452),
        [anon_sym_volatile] = ACTIONS(1452),
        [anon_sym_bool] = ACTIONS(1452),
        [anon_sym_decimal] = ACTIONS(1452),
        [anon_sym_double] = ACTIONS(1452),
        [anon_sym_float] = ACTIONS(1452),
        [anon_sym_object] = ACTIONS(1452),
        [anon_sym_string] = ACTIONS(1452),
        [sym_identifier_name] = ACTIONS(1459),
        [sym_comment] = ACTIONS(99),
    },
    [385] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1466),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(1468),
        [anon_sym_namespace] = ACTIONS(1475),
        [anon_sym_RBRACE] = ACTIONS(1468),
        [anon_sym_class] = ACTIONS(1475),
        [anon_sym_unsafe] = ACTIONS(1475),
        [anon_sym_abstract] = ACTIONS(1475),
        [anon_sym_sealed] = ACTIONS(1475),
        [anon_sym_static] = ACTIONS(1475),
        [anon_sym_new] = ACTIONS(1475),
        [anon_sym_public] = ACTIONS(1475),
        [anon_sym_protected] = ACTIONS(1475),
        [anon_sym_internal] = ACTIONS(1475),
        [anon_sym_private] = ACTIONS(1475),
        [anon_sym_struct] = ACTIONS(1475),
        [anon_sym_enum] = ACTIONS(1475),
        [anon_sym_sbyte] = ACTIONS(1475),
        [anon_sym_byte] = ACTIONS(1475),
        [anon_sym_short] = ACTIONS(1475),
        [anon_sym_ushort] = ACTIONS(1475),
        [anon_sym_int] = ACTIONS(1475),
        [anon_sym_uint] = ACTIONS(1475),
        [anon_sym_long] = ACTIONS(1475),
        [anon_sym_ulong] = ACTIONS(1475),
        [anon_sym_char] = ACTIONS(1475),
        [anon_sym_delegate] = ACTIONS(1475),
        [anon_sym_LBRACK] = ACTIONS(1468),
        [anon_sym_readonly] = ACTIONS(1475),
        [anon_sym_volatile] = ACTIONS(1475),
        [anon_sym_bool] = ACTIONS(1475),
        [anon_sym_decimal] = ACTIONS(1475),
        [anon_sym_double] = ACTIONS(1475),
        [anon_sym_float] = ACTIONS(1475),
        [anon_sym_object] = ACTIONS(1475),
        [anon_sym_string] = ACTIONS(1475),
        [sym_identifier_name] = ACTIONS(1482),
        [sym_comment] = ACTIONS(99),
    },
    [387] = {
        [sym_equals_value_clause] = STATE(213),
        [anon_sym_SEMI] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(1489),
        [anon_sym_RPAREN] = ACTIONS(1494),
        [sym_params_keyword] = ACTIONS(1494),
        [anon_sym_LBRACK] = ACTIONS(1494),
        [anon_sym_EQ] = ACTIONS(411),
        [sym_comment] = ACTIONS(99),
    },
    [388] = {
        [anon_sym_RBRACE] = ACTIONS(1498),
        [anon_sym_class] = ACTIONS(1502),
        [anon_sym_unsafe] = ACTIONS(1502),
        [anon_sym_abstract] = ACTIONS(1502),
        [anon_sym_sealed] = ACTIONS(1502),
        [anon_sym_static] = ACTIONS(1502),
        [anon_sym_new] = ACTIONS(1502),
        [anon_sym_public] = ACTIONS(1502),
        [anon_sym_protected] = ACTIONS(1502),
        [anon_sym_internal] = ACTIONS(1502),
        [anon_sym_private] = ACTIONS(1502),
        [anon_sym_struct] = ACTIONS(1502),
        [anon_sym_enum] = ACTIONS(1502),
        [anon_sym_sbyte] = ACTIONS(1502),
        [anon_sym_byte] = ACTIONS(1502),
        [anon_sym_short] = ACTIONS(1502),
        [anon_sym_ushort] = ACTIONS(1502),
        [anon_sym_int] = ACTIONS(1502),
        [anon_sym_uint] = ACTIONS(1502),
        [anon_sym_long] = ACTIONS(1502),
        [anon_sym_ulong] = ACTIONS(1502),
        [anon_sym_char] = ACTIONS(1502),
        [anon_sym_delegate] = ACTIONS(1502),
        [anon_sym_LBRACK] = ACTIONS(1498),
        [anon_sym_readonly] = ACTIONS(1502),
        [anon_sym_volatile] = ACTIONS(1502),
        [anon_sym_bool] = ACTIONS(1502),
        [anon_sym_decimal] = ACTIONS(1502),
        [anon_sym_double] = ACTIONS(1502),
        [anon_sym_float] = ACTIONS(1502),
        [anon_sym_object] = ACTIONS(1502),
        [anon_sym_string] = ACTIONS(1502),
        [sym_identifier_name] = ACTIONS(1506),
        [sym_comment] = ACTIONS(99),
    },
    [389] = {
        [anon_sym_SEMI] = ACTIONS(1510),
        [sym_comment] = ACTIONS(99),
    },
    [390] = {
        [anon_sym_RBRACE] = ACTIONS(1512),
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
        [anon_sym_LBRACK] = ACTIONS(1512),
        [anon_sym_readonly] = ACTIONS(1515),
        [anon_sym_volatile] = ACTIONS(1515),
        [anon_sym_bool] = ACTIONS(1515),
        [anon_sym_decimal] = ACTIONS(1515),
        [anon_sym_double] = ACTIONS(1515),
        [anon_sym_float] = ACTIONS(1515),
        [anon_sym_object] = ACTIONS(1515),
        [anon_sym_string] = ACTIONS(1515),
        [sym_identifier_name] = ACTIONS(1518),
        [sym_comment] = ACTIONS(99),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_namespace] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_unsafe] = ACTIONS(1103),
        [anon_sym_abstract] = ACTIONS(1103),
        [anon_sym_sealed] = ACTIONS(1103),
        [anon_sym_static] = ACTIONS(1103),
        [anon_sym_new] = ACTIONS(1103),
        [anon_sym_public] = ACTIONS(1103),
        [anon_sym_protected] = ACTIONS(1103),
        [anon_sym_internal] = ACTIONS(1103),
        [anon_sym_private] = ACTIONS(1103),
        [anon_sym_struct] = ACTIONS(1103),
        [anon_sym_enum] = ACTIONS(1103),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_delegate] = ACTIONS(1103),
        [anon_sym_ref] = ACTIONS(229),
        [anon_sym_out] = ACTIONS(229),
        [anon_sym_this] = ACTIONS(229),
        [sym_params_keyword] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(1106),
        [anon_sym_readonly] = ACTIONS(229),
        [anon_sym_volatile] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(99),
    },
    [392] = {
        [sym_equals_value_clause] = STATE(135),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(419),
        [anon_sym_EQ] = ACTIONS(411),
        [anon_sym_LT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(99),
    },
    [393] = {
        [sym_variable_declarator] = STATE(207),
        [sym_identifier_name] = ACTIONS(1521),
        [sym_comment] = ACTIONS(99),
    },
    [394] = {
        [sym_equals_value_clause] = STATE(213),
        [anon_sym_SEMI] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(1523),
        [anon_sym_RPAREN] = ACTIONS(321),
        [sym_params_keyword] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_EQ] = ACTIONS(411),
        [sym_comment] = ACTIONS(99),
    },
    [395] = {
        [anon_sym_RPAREN] = ACTIONS(1526),
        [sym_comment] = ACTIONS(99),
    },
    [396] = {
        [sym_identifier_name] = ACTIONS(1529),
        [sym_comment] = ACTIONS(99),
    },
    [397] = {
        [anon_sym_COMMA] = ACTIONS(1531),
        [anon_sym_RPAREN] = ACTIONS(1531),
        [sym_params_keyword] = ACTIONS(1531),
        [anon_sym_LBRACK] = ACTIONS(1531),
        [sym_comment] = ACTIONS(99),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(1534),
        [anon_sym_namespace] = ACTIONS(1538),
        [anon_sym_RBRACE] = ACTIONS(1534),
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
        [anon_sym_LBRACK] = ACTIONS(1534),
        [anon_sym_readonly] = ACTIONS(1538),
        [anon_sym_volatile] = ACTIONS(1538),
        [anon_sym_bool] = ACTIONS(1538),
        [anon_sym_decimal] = ACTIONS(1538),
        [anon_sym_double] = ACTIONS(1538),
        [anon_sym_float] = ACTIONS(1538),
        [anon_sym_object] = ACTIONS(1538),
        [anon_sym_string] = ACTIONS(1538),
        [sym_identifier_name] = ACTIONS(1542),
        [sym_comment] = ACTIONS(99),
    },
    [399] = {
        [sym_parameter_list] = STATE(349),
        [anon_sym_LPAREN] = ACTIONS(283),
        [sym_comment] = ACTIONS(99),
    },
    [400] = {
        [sym__return_type] = STATE(401),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [sym_void_keyword] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [401] = {
        [sym_identifier_name] = ACTIONS(1546),
        [sym_comment] = ACTIONS(99),
    },
    [402] = {
        [sym_parameter_list] = STATE(403),
        [anon_sym_LPAREN] = ACTIONS(283),
        [sym_comment] = ACTIONS(99),
    },
    [403] = {
        [anon_sym_SEMI] = ACTIONS(1548),
        [sym_comment] = ACTIONS(99),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(1550),
        [anon_sym_namespace] = ACTIONS(1553),
        [anon_sym_RBRACE] = ACTIONS(1550),
        [anon_sym_class] = ACTIONS(1553),
        [anon_sym_unsafe] = ACTIONS(1553),
        [anon_sym_abstract] = ACTIONS(1553),
        [anon_sym_sealed] = ACTIONS(1553),
        [anon_sym_static] = ACTIONS(1553),
        [anon_sym_new] = ACTIONS(1553),
        [anon_sym_public] = ACTIONS(1553),
        [anon_sym_protected] = ACTIONS(1553),
        [anon_sym_internal] = ACTIONS(1553),
        [anon_sym_private] = ACTIONS(1553),
        [anon_sym_struct] = ACTIONS(1553),
        [anon_sym_enum] = ACTIONS(1553),
        [anon_sym_sbyte] = ACTIONS(1553),
        [anon_sym_byte] = ACTIONS(1553),
        [anon_sym_short] = ACTIONS(1553),
        [anon_sym_ushort] = ACTIONS(1553),
        [anon_sym_int] = ACTIONS(1553),
        [anon_sym_uint] = ACTIONS(1553),
        [anon_sym_long] = ACTIONS(1553),
        [anon_sym_ulong] = ACTIONS(1553),
        [anon_sym_char] = ACTIONS(1553),
        [anon_sym_delegate] = ACTIONS(1553),
        [anon_sym_LBRACK] = ACTIONS(1550),
        [anon_sym_readonly] = ACTIONS(1553),
        [anon_sym_volatile] = ACTIONS(1553),
        [anon_sym_bool] = ACTIONS(1553),
        [anon_sym_decimal] = ACTIONS(1553),
        [anon_sym_double] = ACTIONS(1553),
        [anon_sym_float] = ACTIONS(1553),
        [anon_sym_object] = ACTIONS(1553),
        [anon_sym_string] = ACTIONS(1553),
        [sym_identifier_name] = ACTIONS(1556),
        [sym_comment] = ACTIONS(99),
    },
    [405] = {
        [sym_enum_member_declaration] = STATE(406),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [406] = {
        [aux_sym_enum_declaration_repeat1] = STATE(408),
        [anon_sym_RBRACE] = ACTIONS(1559),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [407] = {
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
        [anon_sym_delegate] = ACTIONS(1567),
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
        [sym_comment] = ACTIONS(99),
    },
    [408] = {
        [anon_sym_RBRACE] = ACTIONS(1575),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [409] = {
        [ts_builtin_sym_end] = ACTIONS(1577),
        [anon_sym_SEMI] = ACTIONS(1581),
        [anon_sym_namespace] = ACTIONS(1583),
        [anon_sym_RBRACE] = ACTIONS(1577),
        [anon_sym_class] = ACTIONS(1583),
        [anon_sym_unsafe] = ACTIONS(1583),
        [anon_sym_abstract] = ACTIONS(1583),
        [anon_sym_sealed] = ACTIONS(1583),
        [anon_sym_static] = ACTIONS(1583),
        [anon_sym_new] = ACTIONS(1583),
        [anon_sym_public] = ACTIONS(1583),
        [anon_sym_protected] = ACTIONS(1583),
        [anon_sym_internal] = ACTIONS(1583),
        [anon_sym_private] = ACTIONS(1583),
        [anon_sym_struct] = ACTIONS(1583),
        [anon_sym_enum] = ACTIONS(1583),
        [anon_sym_sbyte] = ACTIONS(1583),
        [anon_sym_byte] = ACTIONS(1583),
        [anon_sym_short] = ACTIONS(1583),
        [anon_sym_ushort] = ACTIONS(1583),
        [anon_sym_int] = ACTIONS(1583),
        [anon_sym_uint] = ACTIONS(1583),
        [anon_sym_long] = ACTIONS(1583),
        [anon_sym_ulong] = ACTIONS(1583),
        [anon_sym_char] = ACTIONS(1583),
        [anon_sym_delegate] = ACTIONS(1583),
        [anon_sym_LBRACK] = ACTIONS(1577),
        [anon_sym_readonly] = ACTIONS(1583),
        [anon_sym_volatile] = ACTIONS(1583),
        [anon_sym_bool] = ACTIONS(1583),
        [anon_sym_decimal] = ACTIONS(1583),
        [anon_sym_double] = ACTIONS(1583),
        [anon_sym_float] = ACTIONS(1583),
        [anon_sym_object] = ACTIONS(1583),
        [anon_sym_string] = ACTIONS(1583),
        [sym_identifier_name] = ACTIONS(1587),
        [sym_comment] = ACTIONS(99),
    },
    [410] = {
        [ts_builtin_sym_end] = ACTIONS(1591),
        [anon_sym_namespace] = ACTIONS(1595),
        [anon_sym_RBRACE] = ACTIONS(1591),
        [anon_sym_class] = ACTIONS(1595),
        [anon_sym_unsafe] = ACTIONS(1595),
        [anon_sym_abstract] = ACTIONS(1595),
        [anon_sym_sealed] = ACTIONS(1595),
        [anon_sym_static] = ACTIONS(1595),
        [anon_sym_new] = ACTIONS(1595),
        [anon_sym_public] = ACTIONS(1595),
        [anon_sym_protected] = ACTIONS(1595),
        [anon_sym_internal] = ACTIONS(1595),
        [anon_sym_private] = ACTIONS(1595),
        [anon_sym_struct] = ACTIONS(1595),
        [anon_sym_enum] = ACTIONS(1595),
        [anon_sym_sbyte] = ACTIONS(1595),
        [anon_sym_byte] = ACTIONS(1595),
        [anon_sym_short] = ACTIONS(1595),
        [anon_sym_ushort] = ACTIONS(1595),
        [anon_sym_int] = ACTIONS(1595),
        [anon_sym_uint] = ACTIONS(1595),
        [anon_sym_long] = ACTIONS(1595),
        [anon_sym_ulong] = ACTIONS(1595),
        [anon_sym_char] = ACTIONS(1595),
        [anon_sym_delegate] = ACTIONS(1595),
        [anon_sym_LBRACK] = ACTIONS(1591),
        [anon_sym_readonly] = ACTIONS(1595),
        [anon_sym_volatile] = ACTIONS(1595),
        [anon_sym_bool] = ACTIONS(1595),
        [anon_sym_decimal] = ACTIONS(1595),
        [anon_sym_double] = ACTIONS(1595),
        [anon_sym_float] = ACTIONS(1595),
        [anon_sym_object] = ACTIONS(1595),
        [anon_sym_string] = ACTIONS(1595),
        [sym_identifier_name] = ACTIONS(1599),
        [sym_comment] = ACTIONS(99),
    },
    [411] = {
        [ts_builtin_sym_end] = ACTIONS(1577),
        [anon_sym_namespace] = ACTIONS(1583),
        [anon_sym_RBRACE] = ACTIONS(1577),
        [anon_sym_class] = ACTIONS(1583),
        [anon_sym_unsafe] = ACTIONS(1583),
        [anon_sym_abstract] = ACTIONS(1583),
        [anon_sym_sealed] = ACTIONS(1583),
        [anon_sym_static] = ACTIONS(1583),
        [anon_sym_new] = ACTIONS(1583),
        [anon_sym_public] = ACTIONS(1583),
        [anon_sym_protected] = ACTIONS(1583),
        [anon_sym_internal] = ACTIONS(1583),
        [anon_sym_private] = ACTIONS(1583),
        [anon_sym_struct] = ACTIONS(1583),
        [anon_sym_enum] = ACTIONS(1583),
        [anon_sym_sbyte] = ACTIONS(1583),
        [anon_sym_byte] = ACTIONS(1583),
        [anon_sym_short] = ACTIONS(1583),
        [anon_sym_ushort] = ACTIONS(1583),
        [anon_sym_int] = ACTIONS(1583),
        [anon_sym_uint] = ACTIONS(1583),
        [anon_sym_long] = ACTIONS(1583),
        [anon_sym_ulong] = ACTIONS(1583),
        [anon_sym_char] = ACTIONS(1583),
        [anon_sym_delegate] = ACTIONS(1583),
        [anon_sym_LBRACK] = ACTIONS(1577),
        [anon_sym_readonly] = ACTIONS(1583),
        [anon_sym_volatile] = ACTIONS(1583),
        [anon_sym_bool] = ACTIONS(1583),
        [anon_sym_decimal] = ACTIONS(1583),
        [anon_sym_double] = ACTIONS(1583),
        [anon_sym_float] = ACTIONS(1583),
        [anon_sym_object] = ACTIONS(1583),
        [anon_sym_string] = ACTIONS(1583),
        [sym_identifier_name] = ACTIONS(1587),
        [sym_comment] = ACTIONS(99),
    },
    [412] = {
        [sym_identifier_name] = ACTIONS(1603),
        [sym_comment] = ACTIONS(99),
    },
    [413] = {
        [anon_sym_LBRACE] = ACTIONS(1605),
        [anon_sym_COLON] = ACTIONS(1607),
        [sym_comment] = ACTIONS(99),
    },
    [414] = {
        [sym_enum_member_declaration] = STATE(424),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [415] = {
        [sym__integral_type] = STATE(416),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [sym_comment] = ACTIONS(99),
    },
    [416] = {
        [anon_sym_LBRACE] = ACTIONS(1609),
        [sym_comment] = ACTIONS(99),
    },
    [417] = {
        [sym_enum_member_declaration] = STATE(418),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [418] = {
        [aux_sym_enum_declaration_repeat1] = STATE(420),
        [anon_sym_RBRACE] = ACTIONS(1611),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [419] = {
        [ts_builtin_sym_end] = ACTIONS(1613),
        [anon_sym_SEMI] = ACTIONS(1616),
        [anon_sym_namespace] = ACTIONS(1618),
        [anon_sym_RBRACE] = ACTIONS(1613),
        [anon_sym_class] = ACTIONS(1618),
        [anon_sym_unsafe] = ACTIONS(1618),
        [anon_sym_abstract] = ACTIONS(1618),
        [anon_sym_sealed] = ACTIONS(1618),
        [anon_sym_static] = ACTIONS(1618),
        [anon_sym_new] = ACTIONS(1618),
        [anon_sym_public] = ACTIONS(1618),
        [anon_sym_protected] = ACTIONS(1618),
        [anon_sym_internal] = ACTIONS(1618),
        [anon_sym_private] = ACTIONS(1618),
        [anon_sym_struct] = ACTIONS(1618),
        [anon_sym_enum] = ACTIONS(1618),
        [anon_sym_sbyte] = ACTIONS(1618),
        [anon_sym_byte] = ACTIONS(1618),
        [anon_sym_short] = ACTIONS(1618),
        [anon_sym_ushort] = ACTIONS(1618),
        [anon_sym_int] = ACTIONS(1618),
        [anon_sym_uint] = ACTIONS(1618),
        [anon_sym_long] = ACTIONS(1618),
        [anon_sym_ulong] = ACTIONS(1618),
        [anon_sym_char] = ACTIONS(1618),
        [anon_sym_delegate] = ACTIONS(1618),
        [anon_sym_LBRACK] = ACTIONS(1613),
        [anon_sym_readonly] = ACTIONS(1618),
        [anon_sym_volatile] = ACTIONS(1618),
        [anon_sym_bool] = ACTIONS(1618),
        [anon_sym_decimal] = ACTIONS(1618),
        [anon_sym_double] = ACTIONS(1618),
        [anon_sym_float] = ACTIONS(1618),
        [anon_sym_object] = ACTIONS(1618),
        [anon_sym_string] = ACTIONS(1618),
        [sym_identifier_name] = ACTIONS(1621),
        [sym_comment] = ACTIONS(99),
    },
    [420] = {
        [anon_sym_RBRACE] = ACTIONS(1624),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [421] = {
        [ts_builtin_sym_end] = ACTIONS(1626),
        [anon_sym_SEMI] = ACTIONS(1629),
        [anon_sym_namespace] = ACTIONS(1631),
        [anon_sym_RBRACE] = ACTIONS(1626),
        [anon_sym_class] = ACTIONS(1631),
        [anon_sym_unsafe] = ACTIONS(1631),
        [anon_sym_abstract] = ACTIONS(1631),
        [anon_sym_sealed] = ACTIONS(1631),
        [anon_sym_static] = ACTIONS(1631),
        [anon_sym_new] = ACTIONS(1631),
        [anon_sym_public] = ACTIONS(1631),
        [anon_sym_protected] = ACTIONS(1631),
        [anon_sym_internal] = ACTIONS(1631),
        [anon_sym_private] = ACTIONS(1631),
        [anon_sym_struct] = ACTIONS(1631),
        [anon_sym_enum] = ACTIONS(1631),
        [anon_sym_sbyte] = ACTIONS(1631),
        [anon_sym_byte] = ACTIONS(1631),
        [anon_sym_short] = ACTIONS(1631),
        [anon_sym_ushort] = ACTIONS(1631),
        [anon_sym_int] = ACTIONS(1631),
        [anon_sym_uint] = ACTIONS(1631),
        [anon_sym_long] = ACTIONS(1631),
        [anon_sym_ulong] = ACTIONS(1631),
        [anon_sym_char] = ACTIONS(1631),
        [anon_sym_delegate] = ACTIONS(1631),
        [anon_sym_LBRACK] = ACTIONS(1626),
        [anon_sym_readonly] = ACTIONS(1631),
        [anon_sym_volatile] = ACTIONS(1631),
        [anon_sym_bool] = ACTIONS(1631),
        [anon_sym_decimal] = ACTIONS(1631),
        [anon_sym_double] = ACTIONS(1631),
        [anon_sym_float] = ACTIONS(1631),
        [anon_sym_object] = ACTIONS(1631),
        [anon_sym_string] = ACTIONS(1631),
        [sym_identifier_name] = ACTIONS(1634),
        [sym_comment] = ACTIONS(99),
    },
    [422] = {
        [ts_builtin_sym_end] = ACTIONS(1637),
        [anon_sym_namespace] = ACTIONS(1640),
        [anon_sym_RBRACE] = ACTIONS(1637),
        [anon_sym_class] = ACTIONS(1640),
        [anon_sym_unsafe] = ACTIONS(1640),
        [anon_sym_abstract] = ACTIONS(1640),
        [anon_sym_sealed] = ACTIONS(1640),
        [anon_sym_static] = ACTIONS(1640),
        [anon_sym_new] = ACTIONS(1640),
        [anon_sym_public] = ACTIONS(1640),
        [anon_sym_protected] = ACTIONS(1640),
        [anon_sym_internal] = ACTIONS(1640),
        [anon_sym_private] = ACTIONS(1640),
        [anon_sym_struct] = ACTIONS(1640),
        [anon_sym_enum] = ACTIONS(1640),
        [anon_sym_sbyte] = ACTIONS(1640),
        [anon_sym_byte] = ACTIONS(1640),
        [anon_sym_short] = ACTIONS(1640),
        [anon_sym_ushort] = ACTIONS(1640),
        [anon_sym_int] = ACTIONS(1640),
        [anon_sym_uint] = ACTIONS(1640),
        [anon_sym_long] = ACTIONS(1640),
        [anon_sym_ulong] = ACTIONS(1640),
        [anon_sym_char] = ACTIONS(1640),
        [anon_sym_delegate] = ACTIONS(1640),
        [anon_sym_LBRACK] = ACTIONS(1637),
        [anon_sym_readonly] = ACTIONS(1640),
        [anon_sym_volatile] = ACTIONS(1640),
        [anon_sym_bool] = ACTIONS(1640),
        [anon_sym_decimal] = ACTIONS(1640),
        [anon_sym_double] = ACTIONS(1640),
        [anon_sym_float] = ACTIONS(1640),
        [anon_sym_object] = ACTIONS(1640),
        [anon_sym_string] = ACTIONS(1640),
        [sym_identifier_name] = ACTIONS(1643),
        [sym_comment] = ACTIONS(99),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(1626),
        [anon_sym_namespace] = ACTIONS(1631),
        [anon_sym_RBRACE] = ACTIONS(1626),
        [anon_sym_class] = ACTIONS(1631),
        [anon_sym_unsafe] = ACTIONS(1631),
        [anon_sym_abstract] = ACTIONS(1631),
        [anon_sym_sealed] = ACTIONS(1631),
        [anon_sym_static] = ACTIONS(1631),
        [anon_sym_new] = ACTIONS(1631),
        [anon_sym_public] = ACTIONS(1631),
        [anon_sym_protected] = ACTIONS(1631),
        [anon_sym_internal] = ACTIONS(1631),
        [anon_sym_private] = ACTIONS(1631),
        [anon_sym_struct] = ACTIONS(1631),
        [anon_sym_enum] = ACTIONS(1631),
        [anon_sym_sbyte] = ACTIONS(1631),
        [anon_sym_byte] = ACTIONS(1631),
        [anon_sym_short] = ACTIONS(1631),
        [anon_sym_ushort] = ACTIONS(1631),
        [anon_sym_int] = ACTIONS(1631),
        [anon_sym_uint] = ACTIONS(1631),
        [anon_sym_long] = ACTIONS(1631),
        [anon_sym_ulong] = ACTIONS(1631),
        [anon_sym_char] = ACTIONS(1631),
        [anon_sym_delegate] = ACTIONS(1631),
        [anon_sym_LBRACK] = ACTIONS(1626),
        [anon_sym_readonly] = ACTIONS(1631),
        [anon_sym_volatile] = ACTIONS(1631),
        [anon_sym_bool] = ACTIONS(1631),
        [anon_sym_decimal] = ACTIONS(1631),
        [anon_sym_double] = ACTIONS(1631),
        [anon_sym_float] = ACTIONS(1631),
        [anon_sym_object] = ACTIONS(1631),
        [anon_sym_string] = ACTIONS(1631),
        [sym_identifier_name] = ACTIONS(1634),
        [sym_comment] = ACTIONS(99),
    },
    [424] = {
        [aux_sym_enum_declaration_repeat1] = STATE(426),
        [anon_sym_RBRACE] = ACTIONS(1646),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(1648),
        [anon_sym_SEMI] = ACTIONS(1651),
        [anon_sym_namespace] = ACTIONS(1653),
        [anon_sym_RBRACE] = ACTIONS(1648),
        [anon_sym_class] = ACTIONS(1653),
        [anon_sym_unsafe] = ACTIONS(1653),
        [anon_sym_abstract] = ACTIONS(1653),
        [anon_sym_sealed] = ACTIONS(1653),
        [anon_sym_static] = ACTIONS(1653),
        [anon_sym_new] = ACTIONS(1653),
        [anon_sym_public] = ACTIONS(1653),
        [anon_sym_protected] = ACTIONS(1653),
        [anon_sym_internal] = ACTIONS(1653),
        [anon_sym_private] = ACTIONS(1653),
        [anon_sym_struct] = ACTIONS(1653),
        [anon_sym_enum] = ACTIONS(1653),
        [anon_sym_sbyte] = ACTIONS(1653),
        [anon_sym_byte] = ACTIONS(1653),
        [anon_sym_short] = ACTIONS(1653),
        [anon_sym_ushort] = ACTIONS(1653),
        [anon_sym_int] = ACTIONS(1653),
        [anon_sym_uint] = ACTIONS(1653),
        [anon_sym_long] = ACTIONS(1653),
        [anon_sym_ulong] = ACTIONS(1653),
        [anon_sym_char] = ACTIONS(1653),
        [anon_sym_delegate] = ACTIONS(1653),
        [anon_sym_LBRACK] = ACTIONS(1648),
        [anon_sym_readonly] = ACTIONS(1653),
        [anon_sym_volatile] = ACTIONS(1653),
        [anon_sym_bool] = ACTIONS(1653),
        [anon_sym_decimal] = ACTIONS(1653),
        [anon_sym_double] = ACTIONS(1653),
        [anon_sym_float] = ACTIONS(1653),
        [anon_sym_object] = ACTIONS(1653),
        [anon_sym_string] = ACTIONS(1653),
        [sym_identifier_name] = ACTIONS(1656),
        [sym_comment] = ACTIONS(99),
    },
    [426] = {
        [anon_sym_RBRACE] = ACTIONS(1659),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(1661),
        [anon_sym_SEMI] = ACTIONS(1664),
        [anon_sym_namespace] = ACTIONS(1666),
        [anon_sym_RBRACE] = ACTIONS(1661),
        [anon_sym_class] = ACTIONS(1666),
        [anon_sym_unsafe] = ACTIONS(1666),
        [anon_sym_abstract] = ACTIONS(1666),
        [anon_sym_sealed] = ACTIONS(1666),
        [anon_sym_static] = ACTIONS(1666),
        [anon_sym_new] = ACTIONS(1666),
        [anon_sym_public] = ACTIONS(1666),
        [anon_sym_protected] = ACTIONS(1666),
        [anon_sym_internal] = ACTIONS(1666),
        [anon_sym_private] = ACTIONS(1666),
        [anon_sym_struct] = ACTIONS(1666),
        [anon_sym_enum] = ACTIONS(1666),
        [anon_sym_sbyte] = ACTIONS(1666),
        [anon_sym_byte] = ACTIONS(1666),
        [anon_sym_short] = ACTIONS(1666),
        [anon_sym_ushort] = ACTIONS(1666),
        [anon_sym_int] = ACTIONS(1666),
        [anon_sym_uint] = ACTIONS(1666),
        [anon_sym_long] = ACTIONS(1666),
        [anon_sym_ulong] = ACTIONS(1666),
        [anon_sym_char] = ACTIONS(1666),
        [anon_sym_delegate] = ACTIONS(1666),
        [anon_sym_LBRACK] = ACTIONS(1661),
        [anon_sym_readonly] = ACTIONS(1666),
        [anon_sym_volatile] = ACTIONS(1666),
        [anon_sym_bool] = ACTIONS(1666),
        [anon_sym_decimal] = ACTIONS(1666),
        [anon_sym_double] = ACTIONS(1666),
        [anon_sym_float] = ACTIONS(1666),
        [anon_sym_object] = ACTIONS(1666),
        [anon_sym_string] = ACTIONS(1666),
        [sym_identifier_name] = ACTIONS(1669),
        [sym_comment] = ACTIONS(99),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(1613),
        [anon_sym_namespace] = ACTIONS(1618),
        [anon_sym_RBRACE] = ACTIONS(1613),
        [anon_sym_class] = ACTIONS(1618),
        [anon_sym_unsafe] = ACTIONS(1618),
        [anon_sym_abstract] = ACTIONS(1618),
        [anon_sym_sealed] = ACTIONS(1618),
        [anon_sym_static] = ACTIONS(1618),
        [anon_sym_new] = ACTIONS(1618),
        [anon_sym_public] = ACTIONS(1618),
        [anon_sym_protected] = ACTIONS(1618),
        [anon_sym_internal] = ACTIONS(1618),
        [anon_sym_private] = ACTIONS(1618),
        [anon_sym_struct] = ACTIONS(1618),
        [anon_sym_enum] = ACTIONS(1618),
        [anon_sym_sbyte] = ACTIONS(1618),
        [anon_sym_byte] = ACTIONS(1618),
        [anon_sym_short] = ACTIONS(1618),
        [anon_sym_ushort] = ACTIONS(1618),
        [anon_sym_int] = ACTIONS(1618),
        [anon_sym_uint] = ACTIONS(1618),
        [anon_sym_long] = ACTIONS(1618),
        [anon_sym_ulong] = ACTIONS(1618),
        [anon_sym_char] = ACTIONS(1618),
        [anon_sym_delegate] = ACTIONS(1618),
        [anon_sym_LBRACK] = ACTIONS(1613),
        [anon_sym_readonly] = ACTIONS(1618),
        [anon_sym_volatile] = ACTIONS(1618),
        [anon_sym_bool] = ACTIONS(1618),
        [anon_sym_decimal] = ACTIONS(1618),
        [anon_sym_double] = ACTIONS(1618),
        [anon_sym_float] = ACTIONS(1618),
        [anon_sym_object] = ACTIONS(1618),
        [anon_sym_string] = ACTIONS(1618),
        [sym_identifier_name] = ACTIONS(1621),
        [sym_comment] = ACTIONS(99),
    },
    [429] = {
        [ts_builtin_sym_end] = ACTIONS(1661),
        [anon_sym_namespace] = ACTIONS(1666),
        [anon_sym_RBRACE] = ACTIONS(1661),
        [anon_sym_class] = ACTIONS(1666),
        [anon_sym_unsafe] = ACTIONS(1666),
        [anon_sym_abstract] = ACTIONS(1666),
        [anon_sym_sealed] = ACTIONS(1666),
        [anon_sym_static] = ACTIONS(1666),
        [anon_sym_new] = ACTIONS(1666),
        [anon_sym_public] = ACTIONS(1666),
        [anon_sym_protected] = ACTIONS(1666),
        [anon_sym_internal] = ACTIONS(1666),
        [anon_sym_private] = ACTIONS(1666),
        [anon_sym_struct] = ACTIONS(1666),
        [anon_sym_enum] = ACTIONS(1666),
        [anon_sym_sbyte] = ACTIONS(1666),
        [anon_sym_byte] = ACTIONS(1666),
        [anon_sym_short] = ACTIONS(1666),
        [anon_sym_ushort] = ACTIONS(1666),
        [anon_sym_int] = ACTIONS(1666),
        [anon_sym_uint] = ACTIONS(1666),
        [anon_sym_long] = ACTIONS(1666),
        [anon_sym_ulong] = ACTIONS(1666),
        [anon_sym_char] = ACTIONS(1666),
        [anon_sym_delegate] = ACTIONS(1666),
        [anon_sym_LBRACK] = ACTIONS(1661),
        [anon_sym_readonly] = ACTIONS(1666),
        [anon_sym_volatile] = ACTIONS(1666),
        [anon_sym_bool] = ACTIONS(1666),
        [anon_sym_decimal] = ACTIONS(1666),
        [anon_sym_double] = ACTIONS(1666),
        [anon_sym_float] = ACTIONS(1666),
        [anon_sym_object] = ACTIONS(1666),
        [anon_sym_string] = ACTIONS(1666),
        [sym_identifier_name] = ACTIONS(1669),
        [sym_comment] = ACTIONS(99),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(1672),
        [anon_sym_SEMI] = ACTIONS(1678),
        [anon_sym_namespace] = ACTIONS(1680),
        [anon_sym_RBRACE] = ACTIONS(1672),
        [anon_sym_class] = ACTIONS(1680),
        [anon_sym_unsafe] = ACTIONS(1680),
        [anon_sym_abstract] = ACTIONS(1680),
        [anon_sym_sealed] = ACTIONS(1680),
        [anon_sym_static] = ACTIONS(1680),
        [anon_sym_new] = ACTIONS(1680),
        [anon_sym_public] = ACTIONS(1680),
        [anon_sym_protected] = ACTIONS(1680),
        [anon_sym_internal] = ACTIONS(1680),
        [anon_sym_private] = ACTIONS(1680),
        [anon_sym_struct] = ACTIONS(1680),
        [anon_sym_enum] = ACTIONS(1680),
        [anon_sym_sbyte] = ACTIONS(1680),
        [anon_sym_byte] = ACTIONS(1680),
        [anon_sym_short] = ACTIONS(1680),
        [anon_sym_ushort] = ACTIONS(1680),
        [anon_sym_int] = ACTIONS(1680),
        [anon_sym_uint] = ACTIONS(1680),
        [anon_sym_long] = ACTIONS(1680),
        [anon_sym_ulong] = ACTIONS(1680),
        [anon_sym_char] = ACTIONS(1680),
        [anon_sym_delegate] = ACTIONS(1680),
        [anon_sym_LBRACK] = ACTIONS(1672),
        [anon_sym_readonly] = ACTIONS(1680),
        [anon_sym_volatile] = ACTIONS(1680),
        [anon_sym_bool] = ACTIONS(1680),
        [anon_sym_decimal] = ACTIONS(1680),
        [anon_sym_double] = ACTIONS(1680),
        [anon_sym_float] = ACTIONS(1680),
        [anon_sym_object] = ACTIONS(1680),
        [anon_sym_string] = ACTIONS(1680),
        [sym_identifier_name] = ACTIONS(1686),
        [sym_comment] = ACTIONS(99),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(1365),
        [anon_sym_namespace] = ACTIONS(1373),
        [anon_sym_RBRACE] = ACTIONS(1365),
        [anon_sym_class] = ACTIONS(1373),
        [anon_sym_unsafe] = ACTIONS(1373),
        [anon_sym_abstract] = ACTIONS(1373),
        [anon_sym_sealed] = ACTIONS(1373),
        [anon_sym_static] = ACTIONS(1373),
        [anon_sym_new] = ACTIONS(1373),
        [anon_sym_public] = ACTIONS(1373),
        [anon_sym_protected] = ACTIONS(1373),
        [anon_sym_internal] = ACTIONS(1373),
        [anon_sym_private] = ACTIONS(1373),
        [anon_sym_struct] = ACTIONS(1373),
        [anon_sym_enum] = ACTIONS(1373),
        [anon_sym_sbyte] = ACTIONS(1373),
        [anon_sym_byte] = ACTIONS(1373),
        [anon_sym_short] = ACTIONS(1373),
        [anon_sym_ushort] = ACTIONS(1373),
        [anon_sym_int] = ACTIONS(1373),
        [anon_sym_uint] = ACTIONS(1373),
        [anon_sym_long] = ACTIONS(1373),
        [anon_sym_ulong] = ACTIONS(1373),
        [anon_sym_char] = ACTIONS(1373),
        [anon_sym_delegate] = ACTIONS(1373),
        [anon_sym_LBRACK] = ACTIONS(1365),
        [anon_sym_readonly] = ACTIONS(1373),
        [anon_sym_volatile] = ACTIONS(1373),
        [anon_sym_bool] = ACTIONS(1373),
        [anon_sym_decimal] = ACTIONS(1373),
        [anon_sym_double] = ACTIONS(1373),
        [anon_sym_float] = ACTIONS(1373),
        [anon_sym_object] = ACTIONS(1373),
        [anon_sym_string] = ACTIONS(1373),
        [sym_identifier_name] = ACTIONS(1379),
        [sym_comment] = ACTIONS(99),
    },
    [432] = {
        [sym_identifier_name] = ACTIONS(1692),
        [sym_comment] = ACTIONS(99),
    },
    [433] = {
        [sym_type_parameter_list] = STATE(435),
        [anon_sym_LBRACE] = ACTIONS(1694),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [434] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(441),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1696),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [435] = {
        [anon_sym_LBRACE] = ACTIONS(1698),
        [sym_comment] = ACTIONS(99),
    },
    [436] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(438),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1700),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(1702),
        [anon_sym_namespace] = ACTIONS(1705),
        [anon_sym_RBRACE] = ACTIONS(1702),
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
        [anon_sym_LBRACK] = ACTIONS(1702),
        [anon_sym_readonly] = ACTIONS(1705),
        [anon_sym_volatile] = ACTIONS(1705),
        [anon_sym_bool] = ACTIONS(1705),
        [anon_sym_decimal] = ACTIONS(1705),
        [anon_sym_double] = ACTIONS(1705),
        [anon_sym_float] = ACTIONS(1705),
        [anon_sym_object] = ACTIONS(1705),
        [anon_sym_string] = ACTIONS(1705),
        [sym_identifier_name] = ACTIONS(1708),
        [sym_comment] = ACTIONS(99),
    },
    [438] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1711),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(1713),
        [anon_sym_namespace] = ACTIONS(1716),
        [anon_sym_RBRACE] = ACTIONS(1713),
        [anon_sym_class] = ACTIONS(1716),
        [anon_sym_unsafe] = ACTIONS(1716),
        [anon_sym_abstract] = ACTIONS(1716),
        [anon_sym_sealed] = ACTIONS(1716),
        [anon_sym_static] = ACTIONS(1716),
        [anon_sym_new] = ACTIONS(1716),
        [anon_sym_public] = ACTIONS(1716),
        [anon_sym_protected] = ACTIONS(1716),
        [anon_sym_internal] = ACTIONS(1716),
        [anon_sym_private] = ACTIONS(1716),
        [anon_sym_struct] = ACTIONS(1716),
        [anon_sym_enum] = ACTIONS(1716),
        [anon_sym_sbyte] = ACTIONS(1716),
        [anon_sym_byte] = ACTIONS(1716),
        [anon_sym_short] = ACTIONS(1716),
        [anon_sym_ushort] = ACTIONS(1716),
        [anon_sym_int] = ACTIONS(1716),
        [anon_sym_uint] = ACTIONS(1716),
        [anon_sym_long] = ACTIONS(1716),
        [anon_sym_ulong] = ACTIONS(1716),
        [anon_sym_char] = ACTIONS(1716),
        [anon_sym_delegate] = ACTIONS(1716),
        [anon_sym_LBRACK] = ACTIONS(1713),
        [anon_sym_readonly] = ACTIONS(1716),
        [anon_sym_volatile] = ACTIONS(1716),
        [anon_sym_bool] = ACTIONS(1716),
        [anon_sym_decimal] = ACTIONS(1716),
        [anon_sym_double] = ACTIONS(1716),
        [anon_sym_float] = ACTIONS(1716),
        [anon_sym_object] = ACTIONS(1716),
        [anon_sym_string] = ACTIONS(1716),
        [sym_identifier_name] = ACTIONS(1719),
        [sym_comment] = ACTIONS(99),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(1722),
        [anon_sym_namespace] = ACTIONS(1725),
        [anon_sym_RBRACE] = ACTIONS(1722),
        [anon_sym_class] = ACTIONS(1725),
        [anon_sym_unsafe] = ACTIONS(1725),
        [anon_sym_abstract] = ACTIONS(1725),
        [anon_sym_sealed] = ACTIONS(1725),
        [anon_sym_static] = ACTIONS(1725),
        [anon_sym_new] = ACTIONS(1725),
        [anon_sym_public] = ACTIONS(1725),
        [anon_sym_protected] = ACTIONS(1725),
        [anon_sym_internal] = ACTIONS(1725),
        [anon_sym_private] = ACTIONS(1725),
        [anon_sym_struct] = ACTIONS(1725),
        [anon_sym_enum] = ACTIONS(1725),
        [anon_sym_sbyte] = ACTIONS(1725),
        [anon_sym_byte] = ACTIONS(1725),
        [anon_sym_short] = ACTIONS(1725),
        [anon_sym_ushort] = ACTIONS(1725),
        [anon_sym_int] = ACTIONS(1725),
        [anon_sym_uint] = ACTIONS(1725),
        [anon_sym_long] = ACTIONS(1725),
        [anon_sym_ulong] = ACTIONS(1725),
        [anon_sym_char] = ACTIONS(1725),
        [anon_sym_delegate] = ACTIONS(1725),
        [anon_sym_LBRACK] = ACTIONS(1722),
        [anon_sym_readonly] = ACTIONS(1725),
        [anon_sym_volatile] = ACTIONS(1725),
        [anon_sym_bool] = ACTIONS(1725),
        [anon_sym_decimal] = ACTIONS(1725),
        [anon_sym_double] = ACTIONS(1725),
        [anon_sym_float] = ACTIONS(1725),
        [anon_sym_object] = ACTIONS(1725),
        [anon_sym_string] = ACTIONS(1725),
        [sym_identifier_name] = ACTIONS(1728),
        [sym_comment] = ACTIONS(99),
    },
    [441] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1700),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [442] = {
        [sym_identifier_name] = ACTIONS(1731),
        [sym_comment] = ACTIONS(99),
    },
    [443] = {
        [sym_type_parameter_list] = STATE(445),
        [anon_sym_LBRACE] = ACTIONS(1733),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [444] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(451),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1735),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [445] = {
        [anon_sym_LBRACE] = ACTIONS(1737),
        [sym_comment] = ACTIONS(99),
    },
    [446] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(448),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1739),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_readonly] = ACTIONS(1744),
        [anon_sym_volatile] = ACTIONS(1744),
        [anon_sym_bool] = ACTIONS(1744),
        [anon_sym_decimal] = ACTIONS(1744),
        [anon_sym_double] = ACTIONS(1744),
        [anon_sym_float] = ACTIONS(1744),
        [anon_sym_object] = ACTIONS(1744),
        [anon_sym_string] = ACTIONS(1744),
        [sym_identifier_name] = ACTIONS(1747),
        [sym_comment] = ACTIONS(99),
    },
    [448] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1750),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_readonly] = ACTIONS(1755),
        [anon_sym_volatile] = ACTIONS(1755),
        [anon_sym_bool] = ACTIONS(1755),
        [anon_sym_decimal] = ACTIONS(1755),
        [anon_sym_double] = ACTIONS(1755),
        [anon_sym_float] = ACTIONS(1755),
        [anon_sym_object] = ACTIONS(1755),
        [anon_sym_string] = ACTIONS(1755),
        [sym_identifier_name] = ACTIONS(1758),
        [sym_comment] = ACTIONS(99),
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
        [anon_sym_readonly] = ACTIONS(1764),
        [anon_sym_volatile] = ACTIONS(1764),
        [anon_sym_bool] = ACTIONS(1764),
        [anon_sym_decimal] = ACTIONS(1764),
        [anon_sym_double] = ACTIONS(1764),
        [anon_sym_float] = ACTIONS(1764),
        [anon_sym_object] = ACTIONS(1764),
        [anon_sym_string] = ACTIONS(1764),
        [sym_identifier_name] = ACTIONS(1767),
        [sym_comment] = ACTIONS(99),
    },
    [451] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1739),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [452] = {
        [ts_builtin_sym_end] = ACTIONS(1770),
        [anon_sym_extern] = ACTIONS(895),
        [anon_sym_using] = ACTIONS(1770),
        [anon_sym_namespace] = ACTIONS(1770),
        [anon_sym_class] = ACTIONS(1770),
        [anon_sym_unsafe] = ACTIONS(1770),
        [anon_sym_abstract] = ACTIONS(1770),
        [anon_sym_sealed] = ACTIONS(1770),
        [anon_sym_static] = ACTIONS(1770),
        [anon_sym_new] = ACTIONS(1770),
        [anon_sym_public] = ACTIONS(1770),
        [anon_sym_protected] = ACTIONS(1770),
        [anon_sym_internal] = ACTIONS(1770),
        [anon_sym_private] = ACTIONS(1770),
        [anon_sym_struct] = ACTIONS(1770),
        [anon_sym_enum] = ACTIONS(1770),
        [anon_sym_delegate] = ACTIONS(1770),
        [anon_sym_LBRACK] = ACTIONS(1770),
        [sym_comment] = ACTIONS(99),
    },
    [453] = {
        [sym__type_declaration] = STATE(457),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(458),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(459),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(295),
        [aux_sym_class_declaration_repeat1] = STATE(460),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1000),
        [anon_sym_RBRACE] = ACTIONS(1774),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(1004),
        [sym_comment] = ACTIONS(99),
    },
    [454] = {
        [sym__integral_type] = STATE(346),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [sym_comment] = ACTIONS(99),
    },
    [455] = {
        [ts_builtin_sym_end] = ACTIONS(1776),
        [anon_sym_namespace] = ACTIONS(1784),
        [anon_sym_RBRACE] = ACTIONS(1776),
        [anon_sym_class] = ACTIONS(1784),
        [anon_sym_unsafe] = ACTIONS(1784),
        [anon_sym_abstract] = ACTIONS(1784),
        [anon_sym_sealed] = ACTIONS(1784),
        [anon_sym_static] = ACTIONS(1784),
        [anon_sym_new] = ACTIONS(1784),
        [anon_sym_public] = ACTIONS(1784),
        [anon_sym_protected] = ACTIONS(1784),
        [anon_sym_internal] = ACTIONS(1784),
        [anon_sym_private] = ACTIONS(1784),
        [anon_sym_struct] = ACTIONS(1784),
        [anon_sym_enum] = ACTIONS(1784),
        [anon_sym_sbyte] = ACTIONS(1792),
        [anon_sym_byte] = ACTIONS(1792),
        [anon_sym_short] = ACTIONS(1792),
        [anon_sym_ushort] = ACTIONS(1792),
        [anon_sym_int] = ACTIONS(1792),
        [anon_sym_uint] = ACTIONS(1792),
        [anon_sym_long] = ACTIONS(1792),
        [anon_sym_ulong] = ACTIONS(1792),
        [anon_sym_char] = ACTIONS(1792),
        [anon_sym_delegate] = ACTIONS(1784),
        [anon_sym_LBRACK] = ACTIONS(1776),
        [anon_sym_readonly] = ACTIONS(1792),
        [anon_sym_volatile] = ACTIONS(1792),
        [anon_sym_bool] = ACTIONS(1792),
        [anon_sym_decimal] = ACTIONS(1792),
        [anon_sym_double] = ACTIONS(1792),
        [anon_sym_float] = ACTIONS(1792),
        [anon_sym_object] = ACTIONS(1792),
        [anon_sym_string] = ACTIONS(1792),
        [sym_identifier_name] = ACTIONS(1799),
        [sym_comment] = ACTIONS(99),
    },
    [456] = {
        [sym_equals_value_clause] = STATE(180),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_RBRACE] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_EQ] = ACTIONS(411),
        [anon_sym_LT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(99),
    },
    [457] = {
        [anon_sym_namespace] = ACTIONS(1806),
        [anon_sym_RBRACE] = ACTIONS(1808),
        [anon_sym_class] = ACTIONS(1811),
        [anon_sym_unsafe] = ACTIONS(1811),
        [anon_sym_abstract] = ACTIONS(1811),
        [anon_sym_sealed] = ACTIONS(1811),
        [anon_sym_static] = ACTIONS(1811),
        [anon_sym_new] = ACTIONS(1811),
        [anon_sym_public] = ACTIONS(1811),
        [anon_sym_protected] = ACTIONS(1811),
        [anon_sym_internal] = ACTIONS(1811),
        [anon_sym_private] = ACTIONS(1811),
        [anon_sym_struct] = ACTIONS(1811),
        [anon_sym_enum] = ACTIONS(1811),
        [anon_sym_sbyte] = ACTIONS(637),
        [anon_sym_byte] = ACTIONS(637),
        [anon_sym_short] = ACTIONS(637),
        [anon_sym_ushort] = ACTIONS(637),
        [anon_sym_int] = ACTIONS(637),
        [anon_sym_uint] = ACTIONS(637),
        [anon_sym_long] = ACTIONS(637),
        [anon_sym_ulong] = ACTIONS(637),
        [anon_sym_char] = ACTIONS(637),
        [anon_sym_delegate] = ACTIONS(1811),
        [anon_sym_LBRACK] = ACTIONS(1808),
        [anon_sym_readonly] = ACTIONS(637),
        [anon_sym_volatile] = ACTIONS(637),
        [anon_sym_bool] = ACTIONS(637),
        [anon_sym_decimal] = ACTIONS(637),
        [anon_sym_double] = ACTIONS(637),
        [anon_sym_float] = ACTIONS(637),
        [anon_sym_object] = ACTIONS(637),
        [anon_sym_string] = ACTIONS(637),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(99),
    },
    [458] = {
        [aux_sym_enum_declaration_repeat1] = STATE(462),
        [anon_sym_RBRACE] = ACTIONS(1814),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
    [459] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(217),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(215),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(643),
        [anon_sym_enum] = ACTIONS(645),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(647),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(1278),
        [sym_comment] = ACTIONS(99),
    },
    [460] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1443),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [461] = {
        [ts_builtin_sym_end] = ACTIONS(1816),
        [anon_sym_SEMI] = ACTIONS(1820),
        [anon_sym_namespace] = ACTIONS(1822),
        [anon_sym_RBRACE] = ACTIONS(1816),
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
        [anon_sym_LBRACK] = ACTIONS(1816),
        [anon_sym_readonly] = ACTIONS(1822),
        [anon_sym_volatile] = ACTIONS(1822),
        [anon_sym_bool] = ACTIONS(1822),
        [anon_sym_decimal] = ACTIONS(1822),
        [anon_sym_double] = ACTIONS(1822),
        [anon_sym_float] = ACTIONS(1822),
        [anon_sym_object] = ACTIONS(1822),
        [anon_sym_string] = ACTIONS(1822),
        [sym_identifier_name] = ACTIONS(1826),
        [sym_comment] = ACTIONS(99),
    },
    [462] = {
        [anon_sym_RBRACE] = ACTIONS(1830),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(99),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(1832),
        [anon_sym_SEMI] = ACTIONS(1836),
        [anon_sym_namespace] = ACTIONS(1838),
        [anon_sym_RBRACE] = ACTIONS(1832),
        [anon_sym_class] = ACTIONS(1838),
        [anon_sym_unsafe] = ACTIONS(1838),
        [anon_sym_abstract] = ACTIONS(1838),
        [anon_sym_sealed] = ACTIONS(1838),
        [anon_sym_static] = ACTIONS(1838),
        [anon_sym_new] = ACTIONS(1838),
        [anon_sym_public] = ACTIONS(1838),
        [anon_sym_protected] = ACTIONS(1838),
        [anon_sym_internal] = ACTIONS(1838),
        [anon_sym_private] = ACTIONS(1838),
        [anon_sym_struct] = ACTIONS(1838),
        [anon_sym_enum] = ACTIONS(1838),
        [anon_sym_sbyte] = ACTIONS(1838),
        [anon_sym_byte] = ACTIONS(1838),
        [anon_sym_short] = ACTIONS(1838),
        [anon_sym_ushort] = ACTIONS(1838),
        [anon_sym_int] = ACTIONS(1838),
        [anon_sym_uint] = ACTIONS(1838),
        [anon_sym_long] = ACTIONS(1838),
        [anon_sym_ulong] = ACTIONS(1838),
        [anon_sym_char] = ACTIONS(1838),
        [anon_sym_delegate] = ACTIONS(1838),
        [anon_sym_LBRACK] = ACTIONS(1832),
        [anon_sym_readonly] = ACTIONS(1838),
        [anon_sym_volatile] = ACTIONS(1838),
        [anon_sym_bool] = ACTIONS(1838),
        [anon_sym_decimal] = ACTIONS(1838),
        [anon_sym_double] = ACTIONS(1838),
        [anon_sym_float] = ACTIONS(1838),
        [anon_sym_object] = ACTIONS(1838),
        [anon_sym_string] = ACTIONS(1838),
        [sym_identifier_name] = ACTIONS(1842),
        [sym_comment] = ACTIONS(99),
    },
    [464] = {
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
        [anon_sym_delegate] = ACTIONS(1567),
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
        [sym_comment] = ACTIONS(99),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(1832),
        [anon_sym_namespace] = ACTIONS(1838),
        [anon_sym_RBRACE] = ACTIONS(1832),
        [anon_sym_class] = ACTIONS(1838),
        [anon_sym_unsafe] = ACTIONS(1838),
        [anon_sym_abstract] = ACTIONS(1838),
        [anon_sym_sealed] = ACTIONS(1838),
        [anon_sym_static] = ACTIONS(1838),
        [anon_sym_new] = ACTIONS(1838),
        [anon_sym_public] = ACTIONS(1838),
        [anon_sym_protected] = ACTIONS(1838),
        [anon_sym_internal] = ACTIONS(1838),
        [anon_sym_private] = ACTIONS(1838),
        [anon_sym_struct] = ACTIONS(1838),
        [anon_sym_enum] = ACTIONS(1838),
        [anon_sym_sbyte] = ACTIONS(1838),
        [anon_sym_byte] = ACTIONS(1838),
        [anon_sym_short] = ACTIONS(1838),
        [anon_sym_ushort] = ACTIONS(1838),
        [anon_sym_int] = ACTIONS(1838),
        [anon_sym_uint] = ACTIONS(1838),
        [anon_sym_long] = ACTIONS(1838),
        [anon_sym_ulong] = ACTIONS(1838),
        [anon_sym_char] = ACTIONS(1838),
        [anon_sym_delegate] = ACTIONS(1838),
        [anon_sym_LBRACK] = ACTIONS(1832),
        [anon_sym_readonly] = ACTIONS(1838),
        [anon_sym_volatile] = ACTIONS(1838),
        [anon_sym_bool] = ACTIONS(1838),
        [anon_sym_decimal] = ACTIONS(1838),
        [anon_sym_double] = ACTIONS(1838),
        [anon_sym_float] = ACTIONS(1838),
        [anon_sym_object] = ACTIONS(1838),
        [anon_sym_string] = ACTIONS(1838),
        [sym_identifier_name] = ACTIONS(1842),
        [sym_comment] = ACTIONS(99),
    },
    [466] = {
        [anon_sym_SEMI] = ACTIONS(1846),
        [anon_sym_RBRACE] = ACTIONS(1846),
        [anon_sym_COMMA] = ACTIONS(1846),
        [sym_comment] = ACTIONS(99),
    },
    [467] = {
        [anon_sym_SEMI] = ACTIONS(1850),
        [anon_sym_RBRACE] = ACTIONS(1850),
        [anon_sym_COMMA] = ACTIONS(1850),
        [sym__real_type_suffix] = ACTIONS(1853),
        [sym__exponent_part] = ACTIONS(1855),
        [sym_comment] = ACTIONS(99),
    },
    [468] = {
        [anon_sym_SEMI] = ACTIONS(1857),
        [anon_sym_RBRACE] = ACTIONS(1857),
        [anon_sym_COMMA] = ACTIONS(1857),
        [sym_comment] = ACTIONS(99),
    },
    [469] = {
        [anon_sym_SEMI] = ACTIONS(1857),
        [anon_sym_RBRACE] = ACTIONS(1857),
        [anon_sym_COMMA] = ACTIONS(1857),
        [sym__real_type_suffix] = ACTIONS(1860),
        [sym_comment] = ACTIONS(99),
    },
    [470] = {
        [anon_sym_SEMI] = ACTIONS(1862),
        [anon_sym_RBRACE] = ACTIONS(1862),
        [anon_sym_COMMA] = ACTIONS(1862),
        [sym_comment] = ACTIONS(99),
    },
    [471] = {
        [anon_sym_SEMI] = ACTIONS(1136),
        [anon_sym_RBRACE] = ACTIONS(1136),
        [anon_sym_COMMA] = ACTIONS(1136),
        [sym_comment] = ACTIONS(99),
    },
    [472] = {
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(99),
    },
    [473] = {
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(481),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_SEMI] = ACTIONS(671),
        [anon_sym_RBRACE] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1865),
        [anon_sym_LPAREN] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(211),
        [anon_sym_EQ] = ACTIONS(411),
        [anon_sym_LT] = ACTIONS(277),
        [anon_sym_GT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(99),
    },
    [474] = {
        [anon_sym_RBRACE] = ACTIONS(1870),
        [anon_sym_COMMA] = ACTIONS(1870),
        [sym_comment] = ACTIONS(99),
    },
    [475] = {
        [anon_sym_COMMA] = ACTIONS(1873),
        [anon_sym_RPAREN] = ACTIONS(1873),
        [sym_params_keyword] = ACTIONS(1873),
        [anon_sym_LBRACK] = ACTIONS(1873),
        [sym_comment] = ACTIONS(99),
    },
    [476] = {
        [sym_parameter_modifier] = STATE(85),
        [sym__type] = STATE(86),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_ref] = ACTIONS(287),
        [anon_sym_out] = ACTIONS(287),
        [anon_sym_this] = ACTIONS(287),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(1278),
        [sym_comment] = ACTIONS(99),
    },
    [477] = {
        [anon_sym_COMMA] = ACTIONS(1876),
        [anon_sym_RBRACK] = ACTIONS(1876),
        [sym_comment] = ACTIONS(99),
    },
    [478] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_GT] = ACTIONS(355),
        [sym_identifier_name] = ACTIONS(315),
        [sym_comment] = ACTIONS(99),
    },
    [479] = {
        [anon_sym_SEMI] = ACTIONS(1879),
        [anon_sym_COMMA] = ACTIONS(1879),
        [sym_comment] = ACTIONS(99),
    },
    [480] = {
        [anon_sym_COMMA] = ACTIONS(1882),
        [anon_sym_GT] = ACTIONS(1882),
        [sym_comment] = ACTIONS(99),
    },
    [481] = {
        [anon_sym_SEMI] = ACTIONS(685),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_COMMA] = ACTIONS(1885),
        [sym_comment] = ACTIONS(99),
    },
    [482] = {
        [anon_sym_LBRACE] = ACTIONS(1888),
        [anon_sym_COLON] = ACTIONS(1164),
        [sym_comment] = ACTIONS(99),
    },
    [483] = {
        [sym_enum_member_declaration] = STATE(458),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(401),
        [sym_comment] = ACTIONS(99),
    },
    [484] = {
        [sym_type_parameter_list] = STATE(486),
        [anon_sym_LBRACE] = ACTIONS(1890),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [485] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(492),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1892),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [486] = {
        [anon_sym_LBRACE] = ACTIONS(1894),
        [sym_comment] = ACTIONS(99),
    },
    [487] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(489),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1896),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(1898),
        [anon_sym_namespace] = ACTIONS(1902),
        [anon_sym_RBRACE] = ACTIONS(1898),
        [anon_sym_class] = ACTIONS(1902),
        [anon_sym_unsafe] = ACTIONS(1902),
        [anon_sym_abstract] = ACTIONS(1902),
        [anon_sym_sealed] = ACTIONS(1902),
        [anon_sym_static] = ACTIONS(1902),
        [anon_sym_new] = ACTIONS(1902),
        [anon_sym_public] = ACTIONS(1902),
        [anon_sym_protected] = ACTIONS(1902),
        [anon_sym_internal] = ACTIONS(1902),
        [anon_sym_private] = ACTIONS(1902),
        [anon_sym_struct] = ACTIONS(1902),
        [anon_sym_enum] = ACTIONS(1902),
        [anon_sym_sbyte] = ACTIONS(1902),
        [anon_sym_byte] = ACTIONS(1902),
        [anon_sym_short] = ACTIONS(1902),
        [anon_sym_ushort] = ACTIONS(1902),
        [anon_sym_int] = ACTIONS(1902),
        [anon_sym_uint] = ACTIONS(1902),
        [anon_sym_long] = ACTIONS(1902),
        [anon_sym_ulong] = ACTIONS(1902),
        [anon_sym_char] = ACTIONS(1902),
        [anon_sym_delegate] = ACTIONS(1902),
        [anon_sym_LBRACK] = ACTIONS(1898),
        [anon_sym_readonly] = ACTIONS(1902),
        [anon_sym_volatile] = ACTIONS(1902),
        [anon_sym_bool] = ACTIONS(1902),
        [anon_sym_decimal] = ACTIONS(1902),
        [anon_sym_double] = ACTIONS(1902),
        [anon_sym_float] = ACTIONS(1902),
        [anon_sym_object] = ACTIONS(1902),
        [anon_sym_string] = ACTIONS(1902),
        [sym_identifier_name] = ACTIONS(1906),
        [sym_comment] = ACTIONS(99),
    },
    [489] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1910),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [490] = {
        [ts_builtin_sym_end] = ACTIONS(1912),
        [anon_sym_namespace] = ACTIONS(1916),
        [anon_sym_RBRACE] = ACTIONS(1912),
        [anon_sym_class] = ACTIONS(1916),
        [anon_sym_unsafe] = ACTIONS(1916),
        [anon_sym_abstract] = ACTIONS(1916),
        [anon_sym_sealed] = ACTIONS(1916),
        [anon_sym_static] = ACTIONS(1916),
        [anon_sym_new] = ACTIONS(1916),
        [anon_sym_public] = ACTIONS(1916),
        [anon_sym_protected] = ACTIONS(1916),
        [anon_sym_internal] = ACTIONS(1916),
        [anon_sym_private] = ACTIONS(1916),
        [anon_sym_struct] = ACTIONS(1916),
        [anon_sym_enum] = ACTIONS(1916),
        [anon_sym_sbyte] = ACTIONS(1916),
        [anon_sym_byte] = ACTIONS(1916),
        [anon_sym_short] = ACTIONS(1916),
        [anon_sym_ushort] = ACTIONS(1916),
        [anon_sym_int] = ACTIONS(1916),
        [anon_sym_uint] = ACTIONS(1916),
        [anon_sym_long] = ACTIONS(1916),
        [anon_sym_ulong] = ACTIONS(1916),
        [anon_sym_char] = ACTIONS(1916),
        [anon_sym_delegate] = ACTIONS(1916),
        [anon_sym_LBRACK] = ACTIONS(1912),
        [anon_sym_readonly] = ACTIONS(1916),
        [anon_sym_volatile] = ACTIONS(1916),
        [anon_sym_bool] = ACTIONS(1916),
        [anon_sym_decimal] = ACTIONS(1916),
        [anon_sym_double] = ACTIONS(1916),
        [anon_sym_float] = ACTIONS(1916),
        [anon_sym_object] = ACTIONS(1916),
        [anon_sym_string] = ACTIONS(1916),
        [sym_identifier_name] = ACTIONS(1920),
        [sym_comment] = ACTIONS(99),
    },
    [491] = {
        [ts_builtin_sym_end] = ACTIONS(1924),
        [anon_sym_namespace] = ACTIONS(1928),
        [anon_sym_RBRACE] = ACTIONS(1924),
        [anon_sym_class] = ACTIONS(1928),
        [anon_sym_unsafe] = ACTIONS(1928),
        [anon_sym_abstract] = ACTIONS(1928),
        [anon_sym_sealed] = ACTIONS(1928),
        [anon_sym_static] = ACTIONS(1928),
        [anon_sym_new] = ACTIONS(1928),
        [anon_sym_public] = ACTIONS(1928),
        [anon_sym_protected] = ACTIONS(1928),
        [anon_sym_internal] = ACTIONS(1928),
        [anon_sym_private] = ACTIONS(1928),
        [anon_sym_struct] = ACTIONS(1928),
        [anon_sym_enum] = ACTIONS(1928),
        [anon_sym_sbyte] = ACTIONS(1928),
        [anon_sym_byte] = ACTIONS(1928),
        [anon_sym_short] = ACTIONS(1928),
        [anon_sym_ushort] = ACTIONS(1928),
        [anon_sym_int] = ACTIONS(1928),
        [anon_sym_uint] = ACTIONS(1928),
        [anon_sym_long] = ACTIONS(1928),
        [anon_sym_ulong] = ACTIONS(1928),
        [anon_sym_char] = ACTIONS(1928),
        [anon_sym_delegate] = ACTIONS(1928),
        [anon_sym_LBRACK] = ACTIONS(1924),
        [anon_sym_readonly] = ACTIONS(1928),
        [anon_sym_volatile] = ACTIONS(1928),
        [anon_sym_bool] = ACTIONS(1928),
        [anon_sym_decimal] = ACTIONS(1928),
        [anon_sym_double] = ACTIONS(1928),
        [anon_sym_float] = ACTIONS(1928),
        [anon_sym_object] = ACTIONS(1928),
        [anon_sym_string] = ACTIONS(1928),
        [sym_identifier_name] = ACTIONS(1932),
        [sym_comment] = ACTIONS(99),
    },
    [492] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1896),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [493] = {
        [sym_type_parameter_list] = STATE(495),
        [anon_sym_LBRACE] = ACTIONS(1936),
        [anon_sym_LT] = ACTIONS(277),
        [sym_comment] = ACTIONS(99),
    },
    [494] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(501),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1938),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [495] = {
        [anon_sym_LBRACE] = ACTIONS(1940),
        [sym_comment] = ACTIONS(99),
    },
    [496] = {
        [sym__type_declaration] = STATE(197),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(197),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(498),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1942),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [497] = {
        [ts_builtin_sym_end] = ACTIONS(1944),
        [anon_sym_namespace] = ACTIONS(1948),
        [anon_sym_RBRACE] = ACTIONS(1944),
        [anon_sym_class] = ACTIONS(1948),
        [anon_sym_unsafe] = ACTIONS(1948),
        [anon_sym_abstract] = ACTIONS(1948),
        [anon_sym_sealed] = ACTIONS(1948),
        [anon_sym_static] = ACTIONS(1948),
        [anon_sym_new] = ACTIONS(1948),
        [anon_sym_public] = ACTIONS(1948),
        [anon_sym_protected] = ACTIONS(1948),
        [anon_sym_internal] = ACTIONS(1948),
        [anon_sym_private] = ACTIONS(1948),
        [anon_sym_struct] = ACTIONS(1948),
        [anon_sym_enum] = ACTIONS(1948),
        [anon_sym_sbyte] = ACTIONS(1948),
        [anon_sym_byte] = ACTIONS(1948),
        [anon_sym_short] = ACTIONS(1948),
        [anon_sym_ushort] = ACTIONS(1948),
        [anon_sym_int] = ACTIONS(1948),
        [anon_sym_uint] = ACTIONS(1948),
        [anon_sym_long] = ACTIONS(1948),
        [anon_sym_ulong] = ACTIONS(1948),
        [anon_sym_char] = ACTIONS(1948),
        [anon_sym_delegate] = ACTIONS(1948),
        [anon_sym_LBRACK] = ACTIONS(1944),
        [anon_sym_readonly] = ACTIONS(1948),
        [anon_sym_volatile] = ACTIONS(1948),
        [anon_sym_bool] = ACTIONS(1948),
        [anon_sym_decimal] = ACTIONS(1948),
        [anon_sym_double] = ACTIONS(1948),
        [anon_sym_float] = ACTIONS(1948),
        [anon_sym_object] = ACTIONS(1948),
        [anon_sym_string] = ACTIONS(1948),
        [sym_identifier_name] = ACTIONS(1952),
        [sym_comment] = ACTIONS(99),
    },
    [498] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1956),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [499] = {
        [ts_builtin_sym_end] = ACTIONS(1958),
        [anon_sym_namespace] = ACTIONS(1962),
        [anon_sym_RBRACE] = ACTIONS(1958),
        [anon_sym_class] = ACTIONS(1962),
        [anon_sym_unsafe] = ACTIONS(1962),
        [anon_sym_abstract] = ACTIONS(1962),
        [anon_sym_sealed] = ACTIONS(1962),
        [anon_sym_static] = ACTIONS(1962),
        [anon_sym_new] = ACTIONS(1962),
        [anon_sym_public] = ACTIONS(1962),
        [anon_sym_protected] = ACTIONS(1962),
        [anon_sym_internal] = ACTIONS(1962),
        [anon_sym_private] = ACTIONS(1962),
        [anon_sym_struct] = ACTIONS(1962),
        [anon_sym_enum] = ACTIONS(1962),
        [anon_sym_sbyte] = ACTIONS(1962),
        [anon_sym_byte] = ACTIONS(1962),
        [anon_sym_short] = ACTIONS(1962),
        [anon_sym_ushort] = ACTIONS(1962),
        [anon_sym_int] = ACTIONS(1962),
        [anon_sym_uint] = ACTIONS(1962),
        [anon_sym_long] = ACTIONS(1962),
        [anon_sym_ulong] = ACTIONS(1962),
        [anon_sym_char] = ACTIONS(1962),
        [anon_sym_delegate] = ACTIONS(1962),
        [anon_sym_LBRACK] = ACTIONS(1958),
        [anon_sym_readonly] = ACTIONS(1962),
        [anon_sym_volatile] = ACTIONS(1962),
        [anon_sym_bool] = ACTIONS(1962),
        [anon_sym_decimal] = ACTIONS(1962),
        [anon_sym_double] = ACTIONS(1962),
        [anon_sym_float] = ACTIONS(1962),
        [anon_sym_object] = ACTIONS(1962),
        [anon_sym_string] = ACTIONS(1962),
        [sym_identifier_name] = ACTIONS(1966),
        [sym_comment] = ACTIONS(99),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(1970),
        [anon_sym_namespace] = ACTIONS(1974),
        [anon_sym_RBRACE] = ACTIONS(1970),
        [anon_sym_class] = ACTIONS(1974),
        [anon_sym_unsafe] = ACTIONS(1974),
        [anon_sym_abstract] = ACTIONS(1974),
        [anon_sym_sealed] = ACTIONS(1974),
        [anon_sym_static] = ACTIONS(1974),
        [anon_sym_new] = ACTIONS(1974),
        [anon_sym_public] = ACTIONS(1974),
        [anon_sym_protected] = ACTIONS(1974),
        [anon_sym_internal] = ACTIONS(1974),
        [anon_sym_private] = ACTIONS(1974),
        [anon_sym_struct] = ACTIONS(1974),
        [anon_sym_enum] = ACTIONS(1974),
        [anon_sym_sbyte] = ACTIONS(1974),
        [anon_sym_byte] = ACTIONS(1974),
        [anon_sym_short] = ACTIONS(1974),
        [anon_sym_ushort] = ACTIONS(1974),
        [anon_sym_int] = ACTIONS(1974),
        [anon_sym_uint] = ACTIONS(1974),
        [anon_sym_long] = ACTIONS(1974),
        [anon_sym_ulong] = ACTIONS(1974),
        [anon_sym_char] = ACTIONS(1974),
        [anon_sym_delegate] = ACTIONS(1974),
        [anon_sym_LBRACK] = ACTIONS(1970),
        [anon_sym_readonly] = ACTIONS(1974),
        [anon_sym_volatile] = ACTIONS(1974),
        [anon_sym_bool] = ACTIONS(1974),
        [anon_sym_decimal] = ACTIONS(1974),
        [anon_sym_double] = ACTIONS(1974),
        [anon_sym_float] = ACTIONS(1974),
        [anon_sym_object] = ACTIONS(1974),
        [anon_sym_string] = ACTIONS(1974),
        [sym_identifier_name] = ACTIONS(1978),
        [sym_comment] = ACTIONS(99),
    },
    [501] = {
        [sym__type_declaration] = STATE(205),
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
        [sym__attributes] = STATE(198),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(205),
        [sym_field_modifiers] = STATE(199),
        [sym__field_modifiers] = STATE(200),
        [sym_variable_declaration] = STATE(201),
        [sym__type] = STATE(202),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1942),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(595),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(609),
        [anon_sym_volatile] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(99),
    },
    [502] = {
        [ts_builtin_sym_end] = ACTIONS(1982),
        [anon_sym_namespace] = ACTIONS(1989),
        [anon_sym_RBRACE] = ACTIONS(1982),
        [anon_sym_class] = ACTIONS(1989),
        [anon_sym_unsafe] = ACTIONS(1989),
        [anon_sym_abstract] = ACTIONS(1989),
        [anon_sym_sealed] = ACTIONS(1989),
        [anon_sym_static] = ACTIONS(1989),
        [anon_sym_new] = ACTIONS(1989),
        [anon_sym_public] = ACTIONS(1989),
        [anon_sym_protected] = ACTIONS(1989),
        [anon_sym_internal] = ACTIONS(1989),
        [anon_sym_private] = ACTIONS(1989),
        [anon_sym_struct] = ACTIONS(1989),
        [anon_sym_enum] = ACTIONS(1989),
        [anon_sym_sbyte] = ACTIONS(1989),
        [anon_sym_byte] = ACTIONS(1989),
        [anon_sym_short] = ACTIONS(1989),
        [anon_sym_ushort] = ACTIONS(1989),
        [anon_sym_int] = ACTIONS(1989),
        [anon_sym_uint] = ACTIONS(1989),
        [anon_sym_long] = ACTIONS(1989),
        [anon_sym_ulong] = ACTIONS(1989),
        [anon_sym_char] = ACTIONS(1989),
        [anon_sym_delegate] = ACTIONS(1989),
        [anon_sym_LBRACK] = ACTIONS(1982),
        [anon_sym_readonly] = ACTIONS(1989),
        [anon_sym_volatile] = ACTIONS(1989),
        [anon_sym_bool] = ACTIONS(1989),
        [anon_sym_decimal] = ACTIONS(1989),
        [anon_sym_double] = ACTIONS(1989),
        [anon_sym_float] = ACTIONS(1989),
        [anon_sym_object] = ACTIONS(1989),
        [anon_sym_string] = ACTIONS(1989),
        [sym_identifier_name] = ACTIONS(1996),
        [sym_comment] = ACTIONS(99),
    },
    [503] = {
        [ts_builtin_sym_end] = ACTIONS(2003),
        [anon_sym_namespace] = ACTIONS(2013),
        [anon_sym_RBRACE] = ACTIONS(2003),
        [anon_sym_class] = ACTIONS(2013),
        [anon_sym_unsafe] = ACTIONS(2013),
        [anon_sym_abstract] = ACTIONS(2013),
        [anon_sym_sealed] = ACTIONS(2013),
        [anon_sym_static] = ACTIONS(2013),
        [anon_sym_new] = ACTIONS(2013),
        [anon_sym_public] = ACTIONS(2013),
        [anon_sym_protected] = ACTIONS(2013),
        [anon_sym_internal] = ACTIONS(2013),
        [anon_sym_private] = ACTIONS(2013),
        [anon_sym_struct] = ACTIONS(2013),
        [anon_sym_enum] = ACTIONS(2013),
        [anon_sym_sbyte] = ACTIONS(2023),
        [anon_sym_byte] = ACTIONS(2023),
        [anon_sym_short] = ACTIONS(2023),
        [anon_sym_ushort] = ACTIONS(2023),
        [anon_sym_int] = ACTIONS(2023),
        [anon_sym_uint] = ACTIONS(2023),
        [anon_sym_long] = ACTIONS(2023),
        [anon_sym_ulong] = ACTIONS(2023),
        [anon_sym_char] = ACTIONS(2023),
        [anon_sym_delegate] = ACTIONS(2013),
        [anon_sym_LBRACK] = ACTIONS(2003),
        [anon_sym_readonly] = ACTIONS(2023),
        [anon_sym_volatile] = ACTIONS(2023),
        [anon_sym_bool] = ACTIONS(2023),
        [anon_sym_decimal] = ACTIONS(2023),
        [anon_sym_double] = ACTIONS(2023),
        [anon_sym_float] = ACTIONS(2023),
        [anon_sym_object] = ACTIONS(2023),
        [anon_sym_string] = ACTIONS(2023),
        [sym_identifier_name] = ACTIONS(2032),
        [sym_comment] = ACTIONS(99),
    },
    [504] = {
        [aux_sym_enum_declaration_repeat1] = STATE(374),
        [anon_sym_RBRACE] = ACTIONS(2041),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(99),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(307),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(310),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(311),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(312),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(313),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(193),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(314),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(195),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(315),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(316),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(317),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(318),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(319),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(320),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(321),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(322),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(323),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(324),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(325),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(283),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(196),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(326),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(136),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(327),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(328),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(149),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(329),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(139),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(160),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(140),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(330),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(331),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(332),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(143),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(65),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(334),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(297),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(288),
    [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(335),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(300),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
    [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
    [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
    [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
    [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
    [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
    [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
    [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
    [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
    [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
    [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
    [803] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(303),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [889] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [897] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [912] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [916] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [929] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [942] = {.count = 15, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [958] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [971] = {.count = 15, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [987] = {.count = 12, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1004] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(456),
    [1006] = {.count = 18, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1027] = {.count = 18, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1046] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1063] = {.count = 16, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [1082] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(484),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
    [1091] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1), REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(473),
    [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [1098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2), REDUCE(sym_parameter_list, 3),
    [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 5),
    [1103] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1106] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1109] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_rank_specifier, 2), REDUCE(sym_array_rank_specifier, 3), REDUCE(sym__attribute_section, 3),
    [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
    [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
    [1117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
    [1119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [1121] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
    [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
    [1131] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1136] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
    [1142] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
    [1148] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1151] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1154] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(452),
    [1158] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(453),
    [1161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
    [1166] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [1177] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter_array, 4),
    [1183] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1187] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [1194] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(291),
    [1198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [1200] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1203] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1206] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1211] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1216] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1219] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1222] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1235] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1238] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(430),
    [1242] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(172),
    [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
    [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [1256] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(111),
    [1260] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1264] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(76),
    [1268] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(32),
    [1272] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(sym__formal_parameter_list, 2), REDUCE(sym__formal_parameter_list, 3),
    [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
    [1278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(392),
    [1280] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1283] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1286] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [1291] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(37),
    [1295] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1299] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [1302] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1305] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1308] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [1313] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1), SHIFT(387),
    [1316] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1320] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(208),
    [1324] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1327] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1331] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1334] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [1339] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(104),
    [1343] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(105),
    [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1349] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1352] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1356] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [1365] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [1373] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1379] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1385] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1391] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1397] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1403] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1412] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1421] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1430] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1434] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1440] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [1445] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1452] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1459] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [1468] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1475] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1482] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1489] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1494] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1498] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1502] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1506] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [1512] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1515] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1518] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [1523] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 3),
    [1526] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter_array, 4),
    [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
    [1531] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1534] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1538] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1542] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
    [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [1550] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1553] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1556] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [1561] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [1567] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1571] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [1577] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1583] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1587] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1591] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1595] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1599] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
    [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [1611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [1613] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1618] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1621] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [1626] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1631] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1634] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1637] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1640] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1643] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1648] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1653] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1656] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1661] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1666] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1669] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1672] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
    [1680] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1686] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
    [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [1702] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1705] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1708] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1713] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1716] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1719] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1722] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1725] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1728] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
    [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [1739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [1741] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1744] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1747] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [1752] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1755] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1758] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1761] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1764] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1767] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1770] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1776] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1784] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1792] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1799] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [1808] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1811] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [1816] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
    [1822] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1826] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1832] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1838] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1842] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1846] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1850] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
    [1855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
    [1857] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [1862] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1865] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1870] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [1873] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1876] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1879] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1882] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1885] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
    [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
    [1898] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1902] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1906] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [1912] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1916] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1920] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1924] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1928] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1932] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [1938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
    [1940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
    [1944] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1948] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1952] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1958] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1962] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1966] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1970] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1974] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1978] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1982] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1989] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1996] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2003] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2013] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2023] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2032] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
