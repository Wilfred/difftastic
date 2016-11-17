#include "tree_sitter/parser.h"

#define STATE_COUNT 523
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            LEX_ERROR();
        case 465:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(465);
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
                ADVANCE(466);
            if (lookahead == 'n')
                ADVANCE(471);
            if (lookahead == 't')
                ADVANCE(475);
            LEX_ERROR();
        case 466:
            if (lookahead == 'a')
                ADVANCE(467);
            LEX_ERROR();
        case 467:
            if (lookahead == 'l')
                ADVANCE(468);
            LEX_ERROR();
        case 468:
            if (lookahead == 's')
                ADVANCE(469);
            LEX_ERROR();
        case 469:
            if (lookahead == 'e')
                ADVANCE(470);
            LEX_ERROR();
        case 470:
            ACCEPT_TOKEN(anon_sym_false);
        case 471:
            if (lookahead == 'u')
                ADVANCE(472);
            LEX_ERROR();
        case 472:
            if (lookahead == 'l')
                ADVANCE(473);
            LEX_ERROR();
        case 473:
            if (lookahead == 'l')
                ADVANCE(474);
            LEX_ERROR();
        case 474:
            ACCEPT_TOKEN(sym_null_literal);
        case 475:
            if (lookahead == 'r')
                ADVANCE(476);
            LEX_ERROR();
        case 476:
            if (lookahead == 'u')
                ADVANCE(477);
            LEX_ERROR();
        case 477:
            if (lookahead == 'e')
                ADVANCE(478);
            LEX_ERROR();
        case 478:
            ACCEPT_TOKEN(anon_sym_true);
        case 479:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(479);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 480:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(481);
            if (lookahead == '/')
                ADVANCE(482);
            if (lookahead == '\\')
                ADVANCE(483);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(481);
            LEX_ERROR();
        case 481:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 482:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 483:
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
        case 484:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(484);
            if (lookahead == ')')
                ADVANCE(5);
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
                ADVANCE(485);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(486);
            if (lookahead == 'L')
                ADVANCE(487);
            if (lookahead == 'U')
                ADVANCE(489);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'l')
                ADVANCE(487);
            if (lookahead == 'p')
                ADVANCE(457);
            if (lookahead == 'u')
                ADVANCE(489);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 485:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 486:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 487:
            if (lookahead == 'U')
                ADVANCE(488);
            if (lookahead == 'u')
                ADVANCE(488);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 488:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 489:
            if (lookahead == 'L')
                ADVANCE(488);
            if (lookahead == 'l')
                ADVANCE(488);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 490:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(490);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(487);
            if (lookahead == 'U')
                ADVANCE(489);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'l')
                ADVANCE(487);
            if (lookahead == 'p')
                ADVANCE(457);
            if (lookahead == 'u')
                ADVANCE(489);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 491:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(491);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 492:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(493);
            if (lookahead == '\n')
                SKIP(492);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(494);
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
                ADVANCE(493);
            LEX_ERROR();
        case 493:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 494:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 495:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(496);
            if (lookahead == '/')
                ADVANCE(497);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(501);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 496:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(496);
            if (lookahead == '/')
                ADVANCE(497);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(501);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 497:
            if (lookahead == '*')
                ADVANCE(498);
            if (lookahead == '/')
                ADVANCE(502);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(501);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 498:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(499);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(498);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 499:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(500);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(498);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 500:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(501);
            ACCEPT_TOKEN(sym_comment);
        case 501:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(501);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 502:
            if (lookahead == '\n')
                ADVANCE(501);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(503);
            ACCEPT_TOKEN(sym_comment);
        case 503:
            if (lookahead == '\n')
                ADVANCE(501);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(503);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 504:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(504);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 505:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(493);
            if (lookahead == '\n')
                SKIP(505);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(494);
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
                ADVANCE(493);
            LEX_ERROR();
        case 506:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(506);
            if (lookahead == ')')
                ADVANCE(5);
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
                ADVANCE(485);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(486);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 507:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(507);
            if (lookahead == ')')
                ADVANCE(5);
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
                ADVANCE(485);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 508:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(508);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 509:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(509);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 510:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(510);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 511:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(511);
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
        case 512:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(512);
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
        case 513:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(513);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'p')
                ADVANCE(457);
            LEX_ERROR();
        case 514:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(514);
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
        case 515:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(515);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(516);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 516:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 517:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(517);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 518:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(518);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(519);
            if (lookahead == 'c')
                ADVANCE(523);
            if (lookahead == 'i')
                ADVANCE(527);
            if (lookahead == 'l')
                ADVANCE(530);
            if (lookahead == 's')
                ADVANCE(534);
            if (lookahead == 'u')
                ADVANCE(543);
            LEX_ERROR();
        case 519:
            if (lookahead == 'y')
                ADVANCE(520);
            LEX_ERROR();
        case 520:
            if (lookahead == 't')
                ADVANCE(521);
            LEX_ERROR();
        case 521:
            if (lookahead == 'e')
                ADVANCE(522);
            LEX_ERROR();
        case 522:
            ACCEPT_TOKEN(anon_sym_byte);
        case 523:
            if (lookahead == 'h')
                ADVANCE(524);
            LEX_ERROR();
        case 524:
            if (lookahead == 'a')
                ADVANCE(525);
            LEX_ERROR();
        case 525:
            if (lookahead == 'r')
                ADVANCE(526);
            LEX_ERROR();
        case 526:
            ACCEPT_TOKEN(anon_sym_char);
        case 527:
            if (lookahead == 'n')
                ADVANCE(528);
            LEX_ERROR();
        case 528:
            if (lookahead == 't')
                ADVANCE(529);
            LEX_ERROR();
        case 529:
            ACCEPT_TOKEN(anon_sym_int);
        case 530:
            if (lookahead == 'o')
                ADVANCE(531);
            LEX_ERROR();
        case 531:
            if (lookahead == 'n')
                ADVANCE(532);
            LEX_ERROR();
        case 532:
            if (lookahead == 'g')
                ADVANCE(533);
            LEX_ERROR();
        case 533:
            ACCEPT_TOKEN(anon_sym_long);
        case 534:
            if (lookahead == 'b')
                ADVANCE(535);
            if (lookahead == 'h')
                ADVANCE(539);
            LEX_ERROR();
        case 535:
            if (lookahead == 'y')
                ADVANCE(536);
            LEX_ERROR();
        case 536:
            if (lookahead == 't')
                ADVANCE(537);
            LEX_ERROR();
        case 537:
            if (lookahead == 'e')
                ADVANCE(538);
            LEX_ERROR();
        case 538:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 539:
            if (lookahead == 'o')
                ADVANCE(540);
            LEX_ERROR();
        case 540:
            if (lookahead == 'r')
                ADVANCE(541);
            LEX_ERROR();
        case 541:
            if (lookahead == 't')
                ADVANCE(542);
            LEX_ERROR();
        case 542:
            ACCEPT_TOKEN(anon_sym_short);
        case 543:
            if (lookahead == 'i')
                ADVANCE(544);
            if (lookahead == 'l')
                ADVANCE(547);
            if (lookahead == 's')
                ADVANCE(551);
            LEX_ERROR();
        case 544:
            if (lookahead == 'n')
                ADVANCE(545);
            LEX_ERROR();
        case 545:
            if (lookahead == 't')
                ADVANCE(546);
            LEX_ERROR();
        case 546:
            ACCEPT_TOKEN(anon_sym_uint);
        case 547:
            if (lookahead == 'o')
                ADVANCE(548);
            LEX_ERROR();
        case 548:
            if (lookahead == 'n')
                ADVANCE(549);
            LEX_ERROR();
        case 549:
            if (lookahead == 'g')
                ADVANCE(550);
            LEX_ERROR();
        case 550:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 551:
            if (lookahead == 'h')
                ADVANCE(552);
            LEX_ERROR();
        case 552:
            if (lookahead == 'o')
                ADVANCE(553);
            LEX_ERROR();
        case 553:
            if (lookahead == 'r')
                ADVANCE(554);
            LEX_ERROR();
        case 554:
            if (lookahead == 't')
                ADVANCE(555);
            LEX_ERROR();
        case 555:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 556:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(556);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 557:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(557);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 558:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(558);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 559:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(559);
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
        case 560:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(560);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(283);
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
        case 563:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(563);
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
                ADVANCE(564);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 564:
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
                ADVANCE(565);
            ACCEPT_TOKEN(sym_identifier_name);
        case 565:
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
        case 567:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(567);
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
                ADVANCE(568);
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
                ADVANCE(569);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 568:
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
        case 569:
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
                ADVANCE(565);
            ACCEPT_TOKEN(sym_identifier_name);
        case 570:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(570);
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
                ADVANCE(568);
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
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 572:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(572);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 573:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(573);
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
        case 574:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(574);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(516);
            LEX_ERROR();
        case 575:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(575);
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
        case 576:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(576);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(577);
            LEX_ERROR();
        case 577:
            if (lookahead == ':')
                ADVANCE(18);
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
            if (lookahead == '{')
                ADVANCE(283);
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
            LEX_ERROR();
        case 580:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(580);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(283);
            LEX_ERROR();
        case 581:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(581);
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
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 583:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(583);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 584:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(584);
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
                ADVANCE(585);
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
                ADVANCE(586);
            if (lookahead == 'v')
                ADVANCE(431);
            if (lookahead == '}')
                ADVANCE(284);
            LEX_ERROR();
        case 585:
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
        case 586:
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
                ADVANCE(564);
            if (lookahead == 'u')
                ADVANCE(430);
            if (lookahead == 'v')
                ADVANCE(431);
            LEX_ERROR();
        case 589:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(589);
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
                ADVANCE(590);
            if (lookahead == 'c')
                ADVANCE(399);
            if (lookahead == 'i')
                ADVANCE(403);
            if (lookahead == 'l')
                ADVANCE(406);
            if (lookahead == 's')
                ADVANCE(591);
            if (lookahead == 'u')
                ADVANCE(411);
            LEX_ERROR();
        case 590:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 591:
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
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 594:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(594);
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
        case 595:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(595);
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
        case 596:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(596);
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
                ADVANCE(597);
            if (lookahead == 'g')
                ADVANCE(140);
            if (lookahead == 'n')
                ADVANCE(598);
            if (lookahead == 't')
                ADVANCE(599);
            LEX_ERROR();
        case 597:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 598:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 599:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier_name);
        case 600:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(481);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(482);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == '\\')
                ADVANCE(483);
            if (lookahead == 'p')
                ADVANCE(601);
            if (lookahead == '}')
                ADVANCE(284);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == ')') ||
                (lookahead == ',') ||
                (lookahead == '/') ||
                (lookahead == ';') ||
                (lookahead == '[') ||
                (lookahead == '\\') ||
                (lookahead == 'p') ||
                (lookahead == '}')))
                ADVANCE(481);
            LEX_ERROR();
        case 601:
            if (lookahead == 'a')
                ADVANCE(458);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 602:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(602);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 603:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(493);
            if (lookahead == '\n')
                SKIP(603);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(494);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(604);
            if (lookahead == '}')
                ADVANCE(284);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == ')') ||
                (lookahead == ',') ||
                (lookahead == '/') ||
                (lookahead == ';') ||
                (lookahead == '[') ||
                (lookahead == '\\') ||
                (lookahead == 'p') ||
                (lookahead == '}')))
                ADVANCE(493);
            LEX_ERROR();
        case 604:
            if (lookahead == 'a')
                ADVANCE(458);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 605:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(605);
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
                ADVANCE(516);
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
        case 606:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(606);
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
        case 607:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(607);
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
        case 608:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(608);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(457);
            LEX_ERROR();
        case 609:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(609);
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
        case 610:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(610);
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
        case 611:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(611);
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
        case 612:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(612);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(284);
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
    [83] = 464,
    [84] = 465,
    [85] = 456,
    [86] = 479,
    [87] = 480,
    [88] = 484,
    [89] = 490,
    [90] = 479,
    [91] = 491,
    [92] = 492,
    [93] = 495,
    [94] = 479,
    [95] = 479,
    [96] = 479,
    [97] = 504,
    [98] = 479,
    [99] = 492,
    [100] = 505,
    [101] = 505,
    [102] = 479,
    [103] = 492,
    [104] = 492,
    [105] = 479,
    [106] = 492,
    [107] = 506,
    [108] = 479,
    [109] = 507,
    [110] = 479,
    [111] = 479,
    [112] = 491,
    [113] = 479,
    [114] = 507,
    [115] = 506,
    [116] = 507,
    [117] = 479,
    [118] = 508,
    [119] = 508,
    [120] = 508,
    [121] = 479,
    [122] = 455,
    [123] = 455,
    [124] = 389,
    [125] = 464,
    [126] = 456,
    [127] = 389,
    [128] = 464,
    [129] = 456,
    [130] = 389,
    [131] = 509,
    [132] = 445,
    [133] = 389,
    [134] = 445,
    [135] = 389,
    [136] = 445,
    [137] = 445,
    [138] = 389,
    [139] = 446,
    [140] = 455,
    [141] = 447,
    [142] = 510,
    [143] = 510,
    [144] = 455,
    [145] = 511,
    [146] = 510,
    [147] = 455,
    [148] = 511,
    [149] = 510,
    [150] = 510,
    [151] = 512,
    [152] = 446,
    [153] = 513,
    [154] = 456,
    [155] = 512,
    [156] = 446,
    [157] = 456,
    [158] = 514,
    [159] = 456,
    [160] = 454,
    [161] = 389,
    [162] = 446,
    [163] = 389,
    [164] = 515,
    [165] = 517,
    [166] = 518,
    [167] = 556,
    [168] = 556,
    [169] = 517,
    [170] = 557,
    [171] = 558,
    [172] = 389,
    [173] = 557,
    [174] = 558,
    [175] = 559,
    [176] = 517,
    [177] = 558,
    [178] = 559,
    [179] = 517,
    [180] = 558,
    [181] = 422,
    [182] = 558,
    [183] = 422,
    [184] = 558,
    [185] = 558,
    [186] = 559,
    [187] = 558,
    [188] = 559,
    [189] = 422,
    [190] = 422,
    [191] = 389,
    [192] = 560,
    [193] = 561,
    [194] = 556,
    [195] = 561,
    [196] = 422,
    [197] = 562,
    [198] = 563,
    [199] = 566,
    [200] = 455,
    [201] = 567,
    [202] = 561,
    [203] = 566,
    [204] = 570,
    [205] = 570,
    [206] = 454,
    [207] = 389,
    [208] = 561,
    [209] = 422,
    [210] = 561,
    [211] = 571,
    [212] = 572,
    [213] = 389,
    [214] = 572,
    [215] = 389,
    [216] = 572,
    [217] = 572,
    [218] = 572,
    [219] = 561,
    [220] = 455,
    [221] = 454,
    [222] = 561,
    [223] = 454,
    [224] = 561,
    [225] = 570,
    [226] = 455,
    [227] = 454,
    [228] = 561,
    [229] = 422,
    [230] = 561,
    [231] = 389,
    [232] = 560,
    [233] = 561,
    [234] = 556,
    [235] = 561,
    [236] = 422,
    [237] = 561,
    [238] = 422,
    [239] = 422,
    [240] = 561,
    [241] = 389,
    [242] = 449,
    [243] = 454,
    [244] = 422,
    [245] = 515,
    [246] = 517,
    [247] = 518,
    [248] = 556,
    [249] = 517,
    [250] = 558,
    [251] = 558,
    [252] = 558,
    [253] = 559,
    [254] = 558,
    [255] = 422,
    [256] = 560,
    [257] = 561,
    [258] = 556,
    [259] = 422,
    [260] = 561,
    [261] = 560,
    [262] = 561,
    [263] = 556,
    [264] = 422,
    [265] = 561,
    [266] = 570,
    [267] = 389,
    [268] = 449,
    [269] = 454,
    [270] = 422,
    [271] = 515,
    [272] = 517,
    [273] = 518,
    [274] = 556,
    [275] = 558,
    [276] = 559,
    [277] = 558,
    [278] = 422,
    [279] = 560,
    [280] = 561,
    [281] = 556,
    [282] = 422,
    [283] = 561,
    [284] = 573,
    [285] = 433,
    [286] = 434,
    [287] = 560,
    [288] = 561,
    [289] = 556,
    [290] = 422,
    [291] = 561,
    [292] = 574,
    [293] = 389,
    [294] = 444,
    [295] = 442,
    [296] = 575,
    [297] = 576,
    [298] = 578,
    [299] = 579,
    [300] = 389,
    [301] = 580,
    [302] = 581,
    [303] = 420,
    [304] = 581,
    [305] = 420,
    [306] = 389,
    [307] = 579,
    [308] = 388,
    [309] = 582,
    [310] = 583,
    [311] = 388,
    [312] = 583,
    [313] = 421,
    [314] = 421,
    [315] = 388,
    [316] = 389,
    [317] = 454,
    [318] = 285,
    [319] = 584,
    [320] = 587,
    [321] = 559,
    [322] = 389,
    [323] = 588,
    [324] = 389,
    [325] = 389,
    [326] = 589,
    [327] = 592,
    [328] = 511,
    [329] = 398,
    [330] = 450,
    [331] = 593,
    [332] = 455,
    [333] = 594,
    [334] = 595,
    [335] = 455,
    [336] = 596,
    [337] = 600,
    [338] = 505,
    [339] = 484,
    [340] = 602,
    [341] = 479,
    [342] = 507,
    [343] = 603,
    [344] = 511,
    [345] = 605,
    [346] = 422,
    [347] = 285,
    [348] = 421,
    [349] = 420,
    [350] = 433,
    [351] = 433,
    [352] = 434,
    [353] = 434,
    [354] = 558,
    [355] = 437,
    [356] = 556,
    [357] = 438,
    [358] = 389,
    [359] = 454,
    [360] = 456,
    [361] = 455,
    [362] = 446,
    [363] = 389,
    [364] = 606,
    [365] = 439,
    [366] = 444,
    [367] = 445,
    [368] = 442,
    [369] = 561,
    [370] = 570,
    [371] = 570,
    [372] = 454,
    [373] = 447,
    [374] = 572,
    [375] = 479,
    [376] = 492,
    [377] = 511,
    [378] = 510,
    [379] = 580,
    [380] = 421,
    [381] = 442,
    [382] = 420,
    [383] = 561,
    [384] = 558,
    [385] = 559,
    [386] = 422,
    [387] = 422,
    [388] = 442,
    [389] = 442,
    [390] = 442,
    [391] = 442,
    [392] = 421,
    [393] = 561,
    [394] = 422,
    [395] = 561,
    [396] = 422,
    [397] = 607,
    [398] = 608,
    [399] = 561,
    [400] = 455,
    [401] = 454,
    [402] = 561,
    [403] = 454,
    [404] = 561,
    [405] = 595,
    [406] = 609,
    [407] = 389,
    [408] = 607,
    [409] = 608,
    [410] = 446,
    [411] = 389,
    [412] = 464,
    [413] = 456,
    [414] = 422,
    [415] = 449,
    [416] = 398,
    [417] = 389,
    [418] = 449,
    [419] = 454,
    [420] = 422,
    [421] = 517,
    [422] = 558,
    [423] = 559,
    [424] = 558,
    [425] = 559,
    [426] = 422,
    [427] = 422,
    [428] = 389,
    [429] = 515,
    [430] = 517,
    [431] = 518,
    [432] = 556,
    [433] = 517,
    [434] = 558,
    [435] = 559,
    [436] = 558,
    [437] = 559,
    [438] = 422,
    [439] = 422,
    [440] = 558,
    [441] = 559,
    [442] = 558,
    [443] = 559,
    [444] = 422,
    [445] = 422,
    [446] = 559,
    [447] = 422,
    [448] = 389,
    [449] = 560,
    [450] = 561,
    [451] = 556,
    [452] = 561,
    [453] = 422,
    [454] = 561,
    [455] = 422,
    [456] = 422,
    [457] = 561,
    [458] = 389,
    [459] = 560,
    [460] = 561,
    [461] = 556,
    [462] = 561,
    [463] = 422,
    [464] = 561,
    [465] = 422,
    [466] = 422,
    [467] = 561,
    [468] = 285,
    [469] = 587,
    [470] = 518,
    [471] = 422,
    [472] = 609,
    [473] = 587,
    [474] = 558,
    [475] = 566,
    [476] = 561,
    [477] = 559,
    [478] = 558,
    [479] = 559,
    [480] = 422,
    [481] = 422,
    [482] = 479,
    [483] = 506,
    [484] = 479,
    [485] = 507,
    [486] = 479,
    [487] = 479,
    [488] = 454,
    [489] = 561,
    [490] = 593,
    [491] = 610,
    [492] = 558,
    [493] = 456,
    [494] = 514,
    [495] = 445,
    [496] = 611,
    [497] = 572,
    [498] = 510,
    [499] = 612,
    [500] = 515,
    [501] = 517,
    [502] = 560,
    [503] = 561,
    [504] = 556,
    [505] = 561,
    [506] = 422,
    [507] = 561,
    [508] = 422,
    [509] = 422,
    [510] = 561,
    [511] = 560,
    [512] = 561,
    [513] = 556,
    [514] = 561,
    [515] = 422,
    [516] = 561,
    [517] = 422,
    [518] = 422,
    [519] = 561,
    [520] = 422,
    [521] = 422,
    [522] = 558,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(13),
        [sym__type_declaration] = STATE(346),
        [sym_extern_alias_directive] = STATE(347),
        [sym_using_directive] = STATE(348),
        [sym_namespace_declaration] = STATE(349),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(350),
        [sym__class_modifiers] = STATE(351),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(352),
        [sym__struct_modifiers] = STATE(353),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(354),
        [sym_enum_modifier] = STATE(355),
        [sym__integral_type] = STATE(356),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(357),
        [sym__return_type] = STATE(358),
        [sym_parameter_list] = STATE(359),
        [sym__formal_parameter_list] = STATE(77),
        [sym_parameter] = STATE(360),
        [sym_parameter_modifier] = STATE(361),
        [sym_parameter_array] = STATE(362),
        [sym_array_type] = STATE(363),
        [sym_array_rank_specifier] = STATE(133),
        [sym__attributes] = STATE(364),
        [sym__attribute_section] = STATE(365),
        [sym_attribute_list] = STATE(366),
        [sym_attribute] = STATE(367),
        [sym_attribute_argument_list] = STATE(44),
        [sym__global_attributes] = STATE(368),
        [sym_field_declaration] = STATE(369),
        [sym_field_modifiers] = STATE(370),
        [sym__field_modifiers] = STATE(371),
        [sym_variable_declaration] = STATE(372),
        [sym__type] = STATE(373),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(374),
        [sym_equals_value_clause] = STATE(375),
        [sym__expression] = STATE(94),
        [sym__literal] = STATE(95),
        [sym_boolean_literal] = STATE(90),
        [sym_character_literal] = STATE(90),
        [sym__unicode_escape_sequence] = STATE(338),
        [sym__simple_escape_sequence] = STATE(338),
        [sym_integer_literal] = STATE(90),
        [sym_real_literal] = STATE(90),
        [sym_string_literal] = STATE(90),
        [sym__regular_string_literal] = STATE(96),
        [sym__regular_string_literal_character] = STATE(376),
        [sym__verbatim_string_literal] = STATE(96),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter_list] = STATE(377),
        [sym_type_parameter] = STATE(378),
        [sym_qualified_name] = STATE(379),
        [sym_alias_qualified_name] = STATE(299),
        [sym_name_equals] = STATE(311),
        [sym_static] = STATE(311),
        [aux_sym_compilation_unit_repeat1] = STATE(27),
        [aux_sym_compilation_unit_repeat2] = STATE(380),
        [aux_sym_compilation_unit_repeat3] = STATE(381),
        [aux_sym_compilation_unit_repeat4] = STATE(382),
        [aux_sym_class_declaration_repeat1] = STATE(383),
        [aux_sym_enum_declaration_repeat1] = STATE(384),
        [aux_sym__formal_parameter_list_repeat1] = STATE(154),
        [aux_sym_array_rank_specifier_repeat1] = STATE(136),
        [aux_sym__attributes_repeat1] = STATE(31),
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [aux_sym_variable_declaration_repeat1] = STATE(214),
        [aux_sym__regular_string_literal_repeat1] = STATE(104),
        [aux_sym_type_parameter_list_repeat1] = STATE(146),
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
        [sym_qualified_name] = STATE(310),
        [sym_alias_qualified_name] = STATE(299),
        [sym_name_equals] = STATE(311),
        [sym_static] = STATE(311),
        [anon_sym_static] = ACTIONS(129),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(101),
    },
    [4] = {
        [sym_qualified_name] = STATE(298),
        [sym_alias_qualified_name] = STATE(299),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(101),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(137),
        [sym_comment] = ACTIONS(101),
    },
    [6] = {
        [sym__class_modifiers] = STATE(285),
        [sym__struct_modifiers] = STATE(286),
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
        [sym__class_modifiers] = STATE(285),
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
        [sym__class_modifiers] = STATE(285),
        [sym__struct_modifiers] = STATE(286),
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
        [sym__return_type] = STATE(267),
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
        [sym__return_type] = STATE(241),
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
        [sym_type_parameter_list] = STATE(141),
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
        [sym_array_type] = STATE(161),
        [sym__type] = STATE(131),
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
        [sym_parameter_array] = STATE(152),
        [sym__attributes] = STATE(153),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(154),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_params_keyword] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [79] = {
        [sym__type] = STATE(124),
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
        [sym_parameter_modifier] = STATE(123),
        [sym__type] = STATE(124),
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
        [sym_equals_value_clause] = STATE(85),
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_params_keyword] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(319),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [84] = {
        [sym__expression] = STATE(94),
        [sym__literal] = STATE(95),
        [sym_boolean_literal] = STATE(90),
        [sym_character_literal] = STATE(90),
        [sym_integer_literal] = STATE(90),
        [sym_real_literal] = STATE(90),
        [sym_string_literal] = STATE(90),
        [sym__regular_string_literal] = STATE(96),
        [sym__verbatim_string_literal] = STATE(96),
        [anon_sym_true] = ACTIONS(323),
        [anon_sym_false] = ACTIONS(323),
        [anon_sym_SQUOTE] = ACTIONS(325),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(327),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(329),
        [sym_null_literal] = ACTIONS(331),
        [anon_sym_DOT] = ACTIONS(333),
        [anon_sym_DQUOTE] = ACTIONS(335),
        [anon_sym_AT_DQUOTE] = ACTIONS(337),
        [sym_comment] = ACTIONS(101),
    },
    [85] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(339),
        [sym_params_keyword] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [sym_comment] = ACTIONS(101),
    },
    [86] = {
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_RPAREN] = ACTIONS(341),
        [sym_params_keyword] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(341),
        [sym_comment] = ACTIONS(101),
    },
    [87] = {
        [sym__unicode_escape_sequence] = STATE(118),
        [sym__simple_escape_sequence] = STATE(118),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(343),
        [sym__hexadecimal_escape_sequence] = ACTIONS(343),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(345),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(345),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(347),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(347),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(347),
        [anon_sym_BSLASH0] = ACTIONS(347),
        [anon_sym_BSLASHa] = ACTIONS(347),
        [anon_sym_BSLASHb] = ACTIONS(347),
        [anon_sym_BSLASHf] = ACTIONS(347),
        [anon_sym_BSLASHn] = ACTIONS(347),
        [anon_sym_BSLASHr] = ACTIONS(347),
        [anon_sym_BSLASHt] = ACTIONS(347),
        [anon_sym_BSLASHv] = ACTIONS(347),
        [sym_comment] = ACTIONS(101),
    },
    [88] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [sym_params_keyword] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [sym__integer_type_suffix] = ACTIONS(351),
        [anon_sym_DOT] = ACTIONS(353),
        [sym__real_type_suffix] = ACTIONS(355),
        [sym__exponent_part] = ACTIONS(357),
        [sym_comment] = ACTIONS(101),
    },
    [89] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [sym_params_keyword] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [sym__integer_type_suffix] = ACTIONS(351),
        [sym_comment] = ACTIONS(101),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(359),
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_RPAREN] = ACTIONS(359),
        [sym_params_keyword] = ACTIONS(359),
        [anon_sym_LBRACK] = ACTIONS(359),
        [sym_comment] = ACTIONS(101),
    },
    [91] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(361),
        [sym_comment] = ACTIONS(101),
    },
    [92] = {
        [sym__unicode_escape_sequence] = STATE(99),
        [sym__simple_escape_sequence] = STATE(99),
        [sym__regular_string_literal_character] = STATE(103),
        [aux_sym__regular_string_literal_repeat1] = STATE(104),
        [sym__hexadecimal_escape_sequence] = ACTIONS(363),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(365),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(365),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(367),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(367),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(367),
        [anon_sym_BSLASH0] = ACTIONS(367),
        [anon_sym_BSLASHa] = ACTIONS(367),
        [anon_sym_BSLASHb] = ACTIONS(367),
        [anon_sym_BSLASHf] = ACTIONS(367),
        [anon_sym_BSLASHn] = ACTIONS(367),
        [anon_sym_BSLASHr] = ACTIONS(367),
        [anon_sym_BSLASHt] = ACTIONS(367),
        [anon_sym_BSLASHv] = ACTIONS(367),
        [anon_sym_DQUOTE] = ACTIONS(369),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(363),
        [sym_comment] = ACTIONS(101),
    },
    [93] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(371),
        [sym_comment] = ACTIONS(373),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(375),
        [sym_params_keyword] = ACTIONS(375),
        [anon_sym_LBRACK] = ACTIONS(375),
        [sym_comment] = ACTIONS(101),
    },
    [95] = {
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_RBRACE] = ACTIONS(377),
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(377),
        [sym_params_keyword] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(377),
        [sym_comment] = ACTIONS(101),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_params_keyword] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(379),
        [sym_comment] = ACTIONS(101),
    },
    [97] = {
        [anon_sym_DQUOTE] = ACTIONS(381),
        [sym_comment] = ACTIONS(101),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(383),
        [sym_params_keyword] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(383),
        [sym_comment] = ACTIONS(101),
    },
    [99] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(385),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(387),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(387),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(387),
        [anon_sym_BSLASH0] = ACTIONS(387),
        [anon_sym_BSLASHa] = ACTIONS(387),
        [anon_sym_BSLASHb] = ACTIONS(387),
        [anon_sym_BSLASHf] = ACTIONS(387),
        [anon_sym_BSLASHn] = ACTIONS(387),
        [anon_sym_BSLASHr] = ACTIONS(387),
        [anon_sym_BSLASHt] = ACTIONS(387),
        [anon_sym_BSLASHv] = ACTIONS(387),
        [anon_sym_DQUOTE] = ACTIONS(387),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(385),
        [sym_comment] = ACTIONS(101),
    },
    [100] = {
        [anon_sym_SQUOTE] = ACTIONS(389),
        [sym__hexadecimal_escape_sequence] = ACTIONS(391),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(389),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(389),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(389),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(389),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(389),
        [anon_sym_BSLASH0] = ACTIONS(389),
        [anon_sym_BSLASHa] = ACTIONS(389),
        [anon_sym_BSLASHb] = ACTIONS(389),
        [anon_sym_BSLASHf] = ACTIONS(389),
        [anon_sym_BSLASHn] = ACTIONS(389),
        [anon_sym_BSLASHr] = ACTIONS(389),
        [anon_sym_BSLASHt] = ACTIONS(389),
        [anon_sym_BSLASHv] = ACTIONS(389),
        [anon_sym_DQUOTE] = ACTIONS(389),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(393),
        [sym_comment] = ACTIONS(101),
    },
    [101] = {
        [anon_sym_SQUOTE] = ACTIONS(395),
        [sym__hexadecimal_escape_sequence] = ACTIONS(397),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(399),
        [sym_comment] = ACTIONS(101),
    },
    [102] = {
        [anon_sym_SEMI] = ACTIONS(401),
        [anon_sym_RBRACE] = ACTIONS(401),
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_RPAREN] = ACTIONS(401),
        [sym_params_keyword] = ACTIONS(401),
        [anon_sym_LBRACK] = ACTIONS(401),
        [sym_comment] = ACTIONS(101),
    },
    [103] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
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
        [anon_sym_DQUOTE] = ACTIONS(405),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [104] = {
        [sym__unicode_escape_sequence] = STATE(99),
        [sym__simple_escape_sequence] = STATE(99),
        [sym__regular_string_literal_character] = STATE(106),
        [sym__hexadecimal_escape_sequence] = ACTIONS(363),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(365),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(365),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(367),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(367),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(367),
        [anon_sym_BSLASH0] = ACTIONS(367),
        [anon_sym_BSLASHa] = ACTIONS(367),
        [anon_sym_BSLASHb] = ACTIONS(367),
        [anon_sym_BSLASHf] = ACTIONS(367),
        [anon_sym_BSLASHn] = ACTIONS(367),
        [anon_sym_BSLASHr] = ACTIONS(367),
        [anon_sym_BSLASHt] = ACTIONS(367),
        [anon_sym_BSLASHv] = ACTIONS(367),
        [anon_sym_DQUOTE] = ACTIONS(407),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(363),
        [sym_comment] = ACTIONS(101),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_RBRACE] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_RPAREN] = ACTIONS(409),
        [sym_params_keyword] = ACTIONS(409),
        [anon_sym_LBRACK] = ACTIONS(409),
        [sym_comment] = ACTIONS(101),
    },
    [106] = {
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
        [sym_comment] = ACTIONS(101),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_RPAREN] = ACTIONS(415),
        [sym_params_keyword] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(415),
        [sym__real_type_suffix] = ACTIONS(417),
        [sym__exponent_part] = ACTIONS(419),
        [sym_comment] = ACTIONS(101),
    },
    [108] = {
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_RPAREN] = ACTIONS(421),
        [sym_params_keyword] = ACTIONS(421),
        [anon_sym_LBRACK] = ACTIONS(421),
        [sym_comment] = ACTIONS(101),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_RPAREN] = ACTIONS(421),
        [sym_params_keyword] = ACTIONS(421),
        [anon_sym_LBRACK] = ACTIONS(421),
        [sym__real_type_suffix] = ACTIONS(423),
        [sym_comment] = ACTIONS(101),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_RBRACE] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_RPAREN] = ACTIONS(425),
        [sym_params_keyword] = ACTIONS(425),
        [anon_sym_LBRACK] = ACTIONS(425),
        [sym_comment] = ACTIONS(101),
    },
    [111] = {
        [anon_sym_SEMI] = ACTIONS(427),
        [anon_sym_RBRACE] = ACTIONS(427),
        [anon_sym_COMMA] = ACTIONS(427),
        [anon_sym_RPAREN] = ACTIONS(427),
        [sym_params_keyword] = ACTIONS(427),
        [anon_sym_LBRACK] = ACTIONS(427),
        [sym_comment] = ACTIONS(101),
    },
    [112] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(429),
        [sym_comment] = ACTIONS(101),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_RPAREN] = ACTIONS(415),
        [sym_params_keyword] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(415),
        [sym_comment] = ACTIONS(101),
    },
    [114] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_RPAREN] = ACTIONS(415),
        [sym_params_keyword] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(415),
        [sym__real_type_suffix] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [115] = {
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_RPAREN] = ACTIONS(421),
        [sym_params_keyword] = ACTIONS(421),
        [anon_sym_LBRACK] = ACTIONS(421),
        [sym__real_type_suffix] = ACTIONS(423),
        [sym__exponent_part] = ACTIONS(431),
        [sym_comment] = ACTIONS(101),
    },
    [116] = {
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_RBRACE] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_RPAREN] = ACTIONS(425),
        [sym_params_keyword] = ACTIONS(425),
        [anon_sym_LBRACK] = ACTIONS(425),
        [sym__real_type_suffix] = ACTIONS(433),
        [sym_comment] = ACTIONS(101),
    },
    [117] = {
        [anon_sym_SEMI] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(435),
        [anon_sym_RPAREN] = ACTIONS(435),
        [sym_params_keyword] = ACTIONS(435),
        [anon_sym_LBRACK] = ACTIONS(435),
        [sym_comment] = ACTIONS(101),
    },
    [118] = {
        [anon_sym_SQUOTE] = ACTIONS(437),
        [sym_comment] = ACTIONS(101),
    },
    [119] = {
        [anon_sym_SQUOTE] = ACTIONS(389),
        [sym_comment] = ACTIONS(101),
    },
    [120] = {
        [anon_sym_SQUOTE] = ACTIONS(395),
        [sym_comment] = ACTIONS(101),
    },
    [121] = {
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_RPAREN] = ACTIONS(439),
        [sym_params_keyword] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(439),
        [sym_comment] = ACTIONS(101),
    },
    [122] = {
        [sym_array_type] = STATE(130),
        [sym__type] = STATE(131),
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
    [123] = {
        [sym__type] = STATE(127),
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
    [124] = {
        [sym_identifier_name] = ACTIONS(441),
        [sym_comment] = ACTIONS(101),
    },
    [125] = {
        [sym_equals_value_clause] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(339),
        [sym_params_keyword] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [126] = {
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_RPAREN] = ACTIONS(443),
        [sym_params_keyword] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [sym_comment] = ACTIONS(101),
    },
    [127] = {
        [sym_identifier_name] = ACTIONS(445),
        [sym_comment] = ACTIONS(101),
    },
    [128] = {
        [sym_equals_value_clause] = STATE(129),
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_RPAREN] = ACTIONS(443),
        [sym_params_keyword] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(447),
        [anon_sym_RPAREN] = ACTIONS(447),
        [sym_params_keyword] = ACTIONS(447),
        [anon_sym_LBRACK] = ACTIONS(447),
        [sym_comment] = ACTIONS(101),
    },
    [130] = {
        [sym_identifier_name] = ACTIONS(449),
        [sym_comment] = ACTIONS(101),
    },
    [131] = {
        [sym_array_rank_specifier] = STATE(133),
        [anon_sym_LBRACK] = ACTIONS(451),
        [sym_comment] = ACTIONS(101),
    },
    [132] = {
        [aux_sym_array_rank_specifier_repeat1] = STATE(136),
        [anon_sym_COMMA] = ACTIONS(453),
        [anon_sym_RBRACK] = ACTIONS(455),
        [sym_comment] = ACTIONS(101),
    },
    [133] = {
        [sym_identifier_name] = ACTIONS(457),
        [sym_comment] = ACTIONS(101),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(459),
        [anon_sym_RBRACK] = ACTIONS(459),
        [sym_comment] = ACTIONS(101),
    },
    [135] = {
        [sym_identifier_name] = ACTIONS(461),
        [sym_comment] = ACTIONS(101),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_RBRACK] = ACTIONS(465),
        [sym_comment] = ACTIONS(101),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_RBRACK] = ACTIONS(467),
        [sym_comment] = ACTIONS(101),
    },
    [138] = {
        [sym_identifier_name] = ACTIONS(469),
        [sym_comment] = ACTIONS(101),
    },
    [139] = {
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(101),
    },
    [140] = {
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(143),
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
    [141] = {
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_LBRACK] = ACTIONS(473),
        [anon_sym_GT] = ACTIONS(473),
        [sym_identifier_name] = ACTIONS(475),
        [sym_comment] = ACTIONS(101),
    },
    [142] = {
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_GT] = ACTIONS(477),
        [sym_comment] = ACTIONS(101),
    },
    [143] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(146),
        [anon_sym_COMMA] = ACTIONS(479),
        [anon_sym_GT] = ACTIONS(481),
        [sym_comment] = ACTIONS(101),
    },
    [144] = {
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(150),
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
    [145] = {
        [anon_sym_LBRACE] = ACTIONS(483),
        [anon_sym_COMMA] = ACTIONS(483),
        [anon_sym_LBRACK] = ACTIONS(483),
        [anon_sym_GT] = ACTIONS(483),
        [sym_identifier_name] = ACTIONS(485),
        [sym_comment] = ACTIONS(101),
    },
    [146] = {
        [anon_sym_COMMA] = ACTIONS(487),
        [anon_sym_GT] = ACTIONS(489),
        [sym_comment] = ACTIONS(101),
    },
    [147] = {
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(149),
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
    [148] = {
        [anon_sym_LBRACE] = ACTIONS(491),
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_LBRACK] = ACTIONS(491),
        [anon_sym_GT] = ACTIONS(491),
        [sym_identifier_name] = ACTIONS(493),
        [sym_comment] = ACTIONS(101),
    },
    [149] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_GT] = ACTIONS(495),
        [sym_comment] = ACTIONS(101),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_GT] = ACTIONS(497),
        [sym_comment] = ACTIONS(101),
    },
    [151] = {
        [sym_parameter] = STATE(159),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(158),
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
    [152] = {
        [anon_sym_RPAREN] = ACTIONS(499),
        [sym_comment] = ACTIONS(101),
    },
    [153] = {
        [sym_params_keyword] = ACTIONS(501),
        [sym_comment] = ACTIONS(101),
    },
    [154] = {
        [sym_parameter_array] = STATE(156),
        [sym__attributes] = STATE(153),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(503),
        [anon_sym_RPAREN] = ACTIONS(499),
        [sym_params_keyword] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(101),
    },
    [155] = {
        [sym_parameter] = STATE(157),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(158),
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
    [156] = {
        [anon_sym_RPAREN] = ACTIONS(505),
        [sym_comment] = ACTIONS(101),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_RPAREN] = ACTIONS(507),
        [sym_params_keyword] = ACTIONS(507),
        [anon_sym_LBRACK] = ACTIONS(507),
        [sym_comment] = ACTIONS(101),
    },
    [158] = {
        [sym_parameter_modifier] = STATE(123),
        [sym__type] = STATE(124),
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
    [159] = {
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_RPAREN] = ACTIONS(509),
        [sym_params_keyword] = ACTIONS(509),
        [anon_sym_LBRACK] = ACTIONS(509),
        [sym_comment] = ACTIONS(101),
    },
    [160] = {
        [anon_sym_SEMI] = ACTIONS(511),
        [sym_comment] = ACTIONS(101),
    },
    [161] = {
        [sym_identifier_name] = ACTIONS(513),
        [sym_comment] = ACTIONS(101),
    },
    [162] = {
        [anon_sym_RPAREN] = ACTIONS(515),
        [sym_comment] = ACTIONS(101),
    },
    [163] = {
        [sym_identifier_name] = ACTIONS(517),
        [sym_comment] = ACTIONS(101),
    },
    [164] = {
        [anon_sym_LBRACE] = ACTIONS(519),
        [anon_sym_COLON] = ACTIONS(521),
        [sym_comment] = ACTIONS(101),
    },
    [165] = {
        [sym_enum_member_declaration] = STATE(185),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [166] = {
        [sym__integral_type] = STATE(168),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [167] = {
        [anon_sym_LBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(101),
    },
    [168] = {
        [anon_sym_LBRACE] = ACTIONS(529),
        [sym_comment] = ACTIONS(101),
    },
    [169] = {
        [sym_enum_member_declaration] = STATE(171),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [170] = {
        [sym_equals_value_clause] = STATE(184),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [171] = {
        [aux_sym_enum_declaration_repeat1] = STATE(177),
        [anon_sym_RBRACE] = ACTIONS(533),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [172] = {
        [sym_identifier_name] = ACTIONS(537),
        [sym_comment] = ACTIONS(101),
    },
    [173] = {
        [sym_equals_value_clause] = STATE(174),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [174] = {
        [anon_sym_RBRACE] = ACTIONS(541),
        [anon_sym_COMMA] = ACTIONS(541),
        [sym_comment] = ACTIONS(101),
    },
    [175] = {
        [ts_builtin_sym_end] = ACTIONS(543),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_namespace] = ACTIONS(547),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_unsafe] = ACTIONS(547),
        [anon_sym_abstract] = ACTIONS(547),
        [anon_sym_sealed] = ACTIONS(547),
        [anon_sym_static] = ACTIONS(547),
        [anon_sym_new] = ACTIONS(547),
        [anon_sym_public] = ACTIONS(547),
        [anon_sym_protected] = ACTIONS(547),
        [anon_sym_internal] = ACTIONS(547),
        [anon_sym_private] = ACTIONS(547),
        [anon_sym_struct] = ACTIONS(547),
        [anon_sym_enum] = ACTIONS(547),
        [anon_sym_sbyte] = ACTIONS(547),
        [anon_sym_byte] = ACTIONS(547),
        [anon_sym_short] = ACTIONS(547),
        [anon_sym_ushort] = ACTIONS(547),
        [anon_sym_int] = ACTIONS(547),
        [anon_sym_uint] = ACTIONS(547),
        [anon_sym_long] = ACTIONS(547),
        [anon_sym_ulong] = ACTIONS(547),
        [anon_sym_char] = ACTIONS(547),
        [anon_sym_delegate] = ACTIONS(547),
        [anon_sym_LBRACK] = ACTIONS(543),
        [sym_const_keyword] = ACTIONS(547),
        [anon_sym_readonly] = ACTIONS(547),
        [anon_sym_volatile] = ACTIONS(547),
        [anon_sym_bool] = ACTIONS(547),
        [anon_sym_decimal] = ACTIONS(547),
        [anon_sym_double] = ACTIONS(547),
        [anon_sym_float] = ACTIONS(547),
        [anon_sym_object] = ACTIONS(547),
        [anon_sym_string] = ACTIONS(547),
        [sym_identifier_name] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [176] = {
        [sym_enum_member_declaration] = STATE(182),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [177] = {
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(555),
        [anon_sym_SEMI] = ACTIONS(557),
        [anon_sym_namespace] = ACTIONS(559),
        [anon_sym_RBRACE] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_unsafe] = ACTIONS(559),
        [anon_sym_abstract] = ACTIONS(559),
        [anon_sym_sealed] = ACTIONS(559),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(559),
        [anon_sym_public] = ACTIONS(559),
        [anon_sym_protected] = ACTIONS(559),
        [anon_sym_internal] = ACTIONS(559),
        [anon_sym_private] = ACTIONS(559),
        [anon_sym_struct] = ACTIONS(559),
        [anon_sym_enum] = ACTIONS(559),
        [anon_sym_sbyte] = ACTIONS(559),
        [anon_sym_byte] = ACTIONS(559),
        [anon_sym_short] = ACTIONS(559),
        [anon_sym_ushort] = ACTIONS(559),
        [anon_sym_int] = ACTIONS(559),
        [anon_sym_uint] = ACTIONS(559),
        [anon_sym_long] = ACTIONS(559),
        [anon_sym_ulong] = ACTIONS(559),
        [anon_sym_char] = ACTIONS(559),
        [anon_sym_delegate] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(555),
        [sym_const_keyword] = ACTIONS(559),
        [anon_sym_readonly] = ACTIONS(559),
        [anon_sym_volatile] = ACTIONS(559),
        [anon_sym_bool] = ACTIONS(559),
        [anon_sym_decimal] = ACTIONS(559),
        [anon_sym_double] = ACTIONS(559),
        [anon_sym_float] = ACTIONS(559),
        [anon_sym_object] = ACTIONS(559),
        [anon_sym_string] = ACTIONS(559),
        [sym_identifier_name] = ACTIONS(561),
        [sym_comment] = ACTIONS(101),
    },
    [179] = {
        [sym_enum_member_declaration] = STATE(180),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [180] = {
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_COMMA] = ACTIONS(563),
        [sym_comment] = ACTIONS(101),
    },
    [181] = {
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
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(565),
        [sym_const_keyword] = ACTIONS(567),
        [anon_sym_readonly] = ACTIONS(567),
        [anon_sym_volatile] = ACTIONS(567),
        [anon_sym_bool] = ACTIONS(567),
        [anon_sym_decimal] = ACTIONS(567),
        [anon_sym_double] = ACTIONS(567),
        [anon_sym_float] = ACTIONS(567),
        [anon_sym_object] = ACTIONS(567),
        [anon_sym_string] = ACTIONS(567),
        [sym_identifier_name] = ACTIONS(569),
        [sym_comment] = ACTIONS(101),
    },
    [182] = {
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(571),
        [sym_comment] = ACTIONS(101),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(555),
        [anon_sym_namespace] = ACTIONS(559),
        [anon_sym_RBRACE] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_unsafe] = ACTIONS(559),
        [anon_sym_abstract] = ACTIONS(559),
        [anon_sym_sealed] = ACTIONS(559),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(559),
        [anon_sym_public] = ACTIONS(559),
        [anon_sym_protected] = ACTIONS(559),
        [anon_sym_internal] = ACTIONS(559),
        [anon_sym_private] = ACTIONS(559),
        [anon_sym_struct] = ACTIONS(559),
        [anon_sym_enum] = ACTIONS(559),
        [anon_sym_sbyte] = ACTIONS(559),
        [anon_sym_byte] = ACTIONS(559),
        [anon_sym_short] = ACTIONS(559),
        [anon_sym_ushort] = ACTIONS(559),
        [anon_sym_int] = ACTIONS(559),
        [anon_sym_uint] = ACTIONS(559),
        [anon_sym_long] = ACTIONS(559),
        [anon_sym_ulong] = ACTIONS(559),
        [anon_sym_char] = ACTIONS(559),
        [anon_sym_delegate] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(555),
        [sym_const_keyword] = ACTIONS(559),
        [anon_sym_readonly] = ACTIONS(559),
        [anon_sym_volatile] = ACTIONS(559),
        [anon_sym_bool] = ACTIONS(559),
        [anon_sym_decimal] = ACTIONS(559),
        [anon_sym_double] = ACTIONS(559),
        [anon_sym_float] = ACTIONS(559),
        [anon_sym_object] = ACTIONS(559),
        [anon_sym_string] = ACTIONS(559),
        [sym_identifier_name] = ACTIONS(561),
        [sym_comment] = ACTIONS(101),
    },
    [184] = {
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [sym_comment] = ACTIONS(101),
    },
    [185] = {
        [aux_sym_enum_declaration_repeat1] = STATE(187),
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(575),
        [anon_sym_SEMI] = ACTIONS(577),
        [anon_sym_namespace] = ACTIONS(579),
        [anon_sym_RBRACE] = ACTIONS(575),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_unsafe] = ACTIONS(579),
        [anon_sym_abstract] = ACTIONS(579),
        [anon_sym_sealed] = ACTIONS(579),
        [anon_sym_static] = ACTIONS(579),
        [anon_sym_new] = ACTIONS(579),
        [anon_sym_public] = ACTIONS(579),
        [anon_sym_protected] = ACTIONS(579),
        [anon_sym_internal] = ACTIONS(579),
        [anon_sym_private] = ACTIONS(579),
        [anon_sym_struct] = ACTIONS(579),
        [anon_sym_enum] = ACTIONS(579),
        [anon_sym_sbyte] = ACTIONS(579),
        [anon_sym_byte] = ACTIONS(579),
        [anon_sym_short] = ACTIONS(579),
        [anon_sym_ushort] = ACTIONS(579),
        [anon_sym_int] = ACTIONS(579),
        [anon_sym_uint] = ACTIONS(579),
        [anon_sym_long] = ACTIONS(579),
        [anon_sym_ulong] = ACTIONS(579),
        [anon_sym_char] = ACTIONS(579),
        [anon_sym_delegate] = ACTIONS(579),
        [anon_sym_LBRACK] = ACTIONS(575),
        [sym_const_keyword] = ACTIONS(579),
        [anon_sym_readonly] = ACTIONS(579),
        [anon_sym_volatile] = ACTIONS(579),
        [anon_sym_bool] = ACTIONS(579),
        [anon_sym_decimal] = ACTIONS(579),
        [anon_sym_double] = ACTIONS(579),
        [anon_sym_float] = ACTIONS(579),
        [anon_sym_object] = ACTIONS(579),
        [anon_sym_string] = ACTIONS(579),
        [sym_identifier_name] = ACTIONS(581),
        [sym_comment] = ACTIONS(101),
    },
    [187] = {
        [anon_sym_RBRACE] = ACTIONS(583),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [188] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(587),
        [anon_sym_namespace] = ACTIONS(589),
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_unsafe] = ACTIONS(589),
        [anon_sym_abstract] = ACTIONS(589),
        [anon_sym_sealed] = ACTIONS(589),
        [anon_sym_static] = ACTIONS(589),
        [anon_sym_new] = ACTIONS(589),
        [anon_sym_public] = ACTIONS(589),
        [anon_sym_protected] = ACTIONS(589),
        [anon_sym_internal] = ACTIONS(589),
        [anon_sym_private] = ACTIONS(589),
        [anon_sym_struct] = ACTIONS(589),
        [anon_sym_enum] = ACTIONS(589),
        [anon_sym_sbyte] = ACTIONS(589),
        [anon_sym_byte] = ACTIONS(589),
        [anon_sym_short] = ACTIONS(589),
        [anon_sym_ushort] = ACTIONS(589),
        [anon_sym_int] = ACTIONS(589),
        [anon_sym_uint] = ACTIONS(589),
        [anon_sym_long] = ACTIONS(589),
        [anon_sym_ulong] = ACTIONS(589),
        [anon_sym_char] = ACTIONS(589),
        [anon_sym_delegate] = ACTIONS(589),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_const_keyword] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(589),
        [anon_sym_volatile] = ACTIONS(589),
        [anon_sym_bool] = ACTIONS(589),
        [anon_sym_decimal] = ACTIONS(589),
        [anon_sym_double] = ACTIONS(589),
        [anon_sym_float] = ACTIONS(589),
        [anon_sym_object] = ACTIONS(589),
        [anon_sym_string] = ACTIONS(589),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(101),
    },
    [189] = {
        [ts_builtin_sym_end] = ACTIONS(543),
        [anon_sym_namespace] = ACTIONS(547),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_unsafe] = ACTIONS(547),
        [anon_sym_abstract] = ACTIONS(547),
        [anon_sym_sealed] = ACTIONS(547),
        [anon_sym_static] = ACTIONS(547),
        [anon_sym_new] = ACTIONS(547),
        [anon_sym_public] = ACTIONS(547),
        [anon_sym_protected] = ACTIONS(547),
        [anon_sym_internal] = ACTIONS(547),
        [anon_sym_private] = ACTIONS(547),
        [anon_sym_struct] = ACTIONS(547),
        [anon_sym_enum] = ACTIONS(547),
        [anon_sym_sbyte] = ACTIONS(547),
        [anon_sym_byte] = ACTIONS(547),
        [anon_sym_short] = ACTIONS(547),
        [anon_sym_ushort] = ACTIONS(547),
        [anon_sym_int] = ACTIONS(547),
        [anon_sym_uint] = ACTIONS(547),
        [anon_sym_long] = ACTIONS(547),
        [anon_sym_ulong] = ACTIONS(547),
        [anon_sym_char] = ACTIONS(547),
        [anon_sym_delegate] = ACTIONS(547),
        [anon_sym_LBRACK] = ACTIONS(543),
        [sym_const_keyword] = ACTIONS(547),
        [anon_sym_readonly] = ACTIONS(547),
        [anon_sym_volatile] = ACTIONS(547),
        [anon_sym_bool] = ACTIONS(547),
        [anon_sym_decimal] = ACTIONS(547),
        [anon_sym_double] = ACTIONS(547),
        [anon_sym_float] = ACTIONS(547),
        [anon_sym_object] = ACTIONS(547),
        [anon_sym_string] = ACTIONS(547),
        [sym_identifier_name] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_namespace] = ACTIONS(589),
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_unsafe] = ACTIONS(589),
        [anon_sym_abstract] = ACTIONS(589),
        [anon_sym_sealed] = ACTIONS(589),
        [anon_sym_static] = ACTIONS(589),
        [anon_sym_new] = ACTIONS(589),
        [anon_sym_public] = ACTIONS(589),
        [anon_sym_protected] = ACTIONS(589),
        [anon_sym_internal] = ACTIONS(589),
        [anon_sym_private] = ACTIONS(589),
        [anon_sym_struct] = ACTIONS(589),
        [anon_sym_enum] = ACTIONS(589),
        [anon_sym_sbyte] = ACTIONS(589),
        [anon_sym_byte] = ACTIONS(589),
        [anon_sym_short] = ACTIONS(589),
        [anon_sym_ushort] = ACTIONS(589),
        [anon_sym_int] = ACTIONS(589),
        [anon_sym_uint] = ACTIONS(589),
        [anon_sym_long] = ACTIONS(589),
        [anon_sym_ulong] = ACTIONS(589),
        [anon_sym_char] = ACTIONS(589),
        [anon_sym_delegate] = ACTIONS(589),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_const_keyword] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(589),
        [anon_sym_volatile] = ACTIONS(589),
        [anon_sym_bool] = ACTIONS(589),
        [anon_sym_decimal] = ACTIONS(589),
        [anon_sym_double] = ACTIONS(589),
        [anon_sym_float] = ACTIONS(589),
        [anon_sym_object] = ACTIONS(589),
        [anon_sym_string] = ACTIONS(589),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(101),
    },
    [191] = {
        [sym_identifier_name] = ACTIONS(593),
        [sym_comment] = ACTIONS(101),
    },
    [192] = {
        [sym_type_parameter_list] = STATE(194),
        [anon_sym_LBRACE] = ACTIONS(595),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [193] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(230),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [194] = {
        [anon_sym_LBRACE] = ACTIONS(619),
        [sym_comment] = ACTIONS(101),
    },
    [195] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(208),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [196] = {
        [ts_builtin_sym_end] = ACTIONS(623),
        [anon_sym_namespace] = ACTIONS(625),
        [anon_sym_RBRACE] = ACTIONS(623),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_unsafe] = ACTIONS(625),
        [anon_sym_abstract] = ACTIONS(625),
        [anon_sym_sealed] = ACTIONS(625),
        [anon_sym_static] = ACTIONS(625),
        [anon_sym_new] = ACTIONS(625),
        [anon_sym_public] = ACTIONS(625),
        [anon_sym_protected] = ACTIONS(625),
        [anon_sym_internal] = ACTIONS(625),
        [anon_sym_private] = ACTIONS(625),
        [anon_sym_struct] = ACTIONS(625),
        [anon_sym_enum] = ACTIONS(625),
        [anon_sym_sbyte] = ACTIONS(625),
        [anon_sym_byte] = ACTIONS(625),
        [anon_sym_short] = ACTIONS(625),
        [anon_sym_ushort] = ACTIONS(625),
        [anon_sym_int] = ACTIONS(625),
        [anon_sym_uint] = ACTIONS(625),
        [anon_sym_long] = ACTIONS(625),
        [anon_sym_ulong] = ACTIONS(625),
        [anon_sym_char] = ACTIONS(625),
        [anon_sym_delegate] = ACTIONS(625),
        [anon_sym_LBRACK] = ACTIONS(623),
        [sym_const_keyword] = ACTIONS(625),
        [anon_sym_readonly] = ACTIONS(625),
        [anon_sym_volatile] = ACTIONS(625),
        [anon_sym_bool] = ACTIONS(625),
        [anon_sym_decimal] = ACTIONS(625),
        [anon_sym_double] = ACTIONS(625),
        [anon_sym_float] = ACTIONS(625),
        [anon_sym_object] = ACTIONS(625),
        [anon_sym_string] = ACTIONS(625),
        [sym_identifier_name] = ACTIONS(627),
        [sym_comment] = ACTIONS(101),
    },
    [197] = {
        [sym__class_modifiers] = STATE(285),
        [sym__struct_modifiers] = STATE(286),
        [sym__field_modifiers] = STATE(266),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_unsafe] = ACTIONS(631),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(631),
        [anon_sym_public] = ACTIONS(631),
        [anon_sym_protected] = ACTIONS(631),
        [anon_sym_internal] = ACTIONS(631),
        [anon_sym_private] = ACTIONS(631),
        [anon_sym_struct] = ACTIONS(633),
        [anon_sym_sbyte] = ACTIONS(635),
        [anon_sym_byte] = ACTIONS(635),
        [anon_sym_short] = ACTIONS(635),
        [anon_sym_ushort] = ACTIONS(635),
        [anon_sym_int] = ACTIONS(635),
        [anon_sym_uint] = ACTIONS(635),
        [anon_sym_long] = ACTIONS(635),
        [anon_sym_ulong] = ACTIONS(635),
        [anon_sym_char] = ACTIONS(635),
        [anon_sym_delegate] = ACTIONS(637),
        [sym_const_keyword] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(635),
        [anon_sym_decimal] = ACTIONS(635),
        [anon_sym_double] = ACTIONS(635),
        [anon_sym_float] = ACTIONS(635),
        [anon_sym_object] = ACTIONS(635),
        [anon_sym_string] = ACTIONS(635),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(101),
    },
    [198] = {
        [sym__class_modifiers] = STATE(285),
        [sym__field_modifiers] = STATE(266),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_unsafe] = ACTIONS(605),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(635),
        [anon_sym_byte] = ACTIONS(635),
        [anon_sym_short] = ACTIONS(635),
        [anon_sym_ushort] = ACTIONS(635),
        [anon_sym_int] = ACTIONS(635),
        [anon_sym_uint] = ACTIONS(635),
        [anon_sym_long] = ACTIONS(635),
        [anon_sym_ulong] = ACTIONS(635),
        [anon_sym_char] = ACTIONS(635),
        [sym_const_keyword] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(635),
        [anon_sym_decimal] = ACTIONS(635),
        [anon_sym_double] = ACTIONS(635),
        [anon_sym_float] = ACTIONS(635),
        [anon_sym_object] = ACTIONS(635),
        [anon_sym_string] = ACTIONS(635),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(101),
    },
    [199] = {
        [sym__class_modifiers] = STATE(285),
        [sym__struct_modifiers] = STATE(286),
        [sym__field_modifiers] = STATE(266),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_unsafe] = ACTIONS(631),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(631),
        [anon_sym_public] = ACTIONS(631),
        [anon_sym_protected] = ACTIONS(631),
        [anon_sym_internal] = ACTIONS(631),
        [anon_sym_private] = ACTIONS(631),
        [anon_sym_struct] = ACTIONS(633),
        [anon_sym_enum] = ACTIONS(641),
        [anon_sym_sbyte] = ACTIONS(635),
        [anon_sym_byte] = ACTIONS(635),
        [anon_sym_short] = ACTIONS(635),
        [anon_sym_ushort] = ACTIONS(635),
        [anon_sym_int] = ACTIONS(635),
        [anon_sym_uint] = ACTIONS(635),
        [anon_sym_long] = ACTIONS(635),
        [anon_sym_ulong] = ACTIONS(635),
        [anon_sym_char] = ACTIONS(635),
        [anon_sym_delegate] = ACTIONS(637),
        [sym_const_keyword] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(635),
        [anon_sym_decimal] = ACTIONS(635),
        [anon_sym_double] = ACTIONS(635),
        [anon_sym_float] = ACTIONS(635),
        [anon_sym_object] = ACTIONS(635),
        [anon_sym_string] = ACTIONS(635),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(101),
    },
    [200] = {
        [sym_variable_declaration] = STATE(221),
        [sym__type] = STATE(207),
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
    [201] = {
        [sym__field_modifiers] = STATE(266),
        [anon_sym_unsafe] = ACTIONS(617),
        [anon_sym_static] = ACTIONS(617),
        [anon_sym_new] = ACTIONS(617),
        [anon_sym_public] = ACTIONS(617),
        [anon_sym_protected] = ACTIONS(617),
        [anon_sym_internal] = ACTIONS(617),
        [anon_sym_private] = ACTIONS(617),
        [anon_sym_sbyte] = ACTIONS(635),
        [anon_sym_byte] = ACTIONS(635),
        [anon_sym_short] = ACTIONS(635),
        [anon_sym_ushort] = ACTIONS(635),
        [anon_sym_int] = ACTIONS(635),
        [anon_sym_uint] = ACTIONS(635),
        [anon_sym_long] = ACTIONS(635),
        [anon_sym_ulong] = ACTIONS(635),
        [anon_sym_char] = ACTIONS(635),
        [sym_const_keyword] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(635),
        [anon_sym_decimal] = ACTIONS(635),
        [anon_sym_double] = ACTIONS(635),
        [anon_sym_float] = ACTIONS(635),
        [anon_sym_object] = ACTIONS(635),
        [anon_sym_string] = ACTIONS(635),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(101),
    },
    [202] = {
        [anon_sym_RBRACE] = ACTIONS(643),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_unsafe] = ACTIONS(645),
        [anon_sym_abstract] = ACTIONS(645),
        [anon_sym_sealed] = ACTIONS(645),
        [anon_sym_static] = ACTIONS(645),
        [anon_sym_new] = ACTIONS(645),
        [anon_sym_public] = ACTIONS(645),
        [anon_sym_protected] = ACTIONS(645),
        [anon_sym_internal] = ACTIONS(645),
        [anon_sym_private] = ACTIONS(645),
        [anon_sym_struct] = ACTIONS(645),
        [anon_sym_enum] = ACTIONS(645),
        [anon_sym_sbyte] = ACTIONS(645),
        [anon_sym_byte] = ACTIONS(645),
        [anon_sym_short] = ACTIONS(645),
        [anon_sym_ushort] = ACTIONS(645),
        [anon_sym_int] = ACTIONS(645),
        [anon_sym_uint] = ACTIONS(645),
        [anon_sym_long] = ACTIONS(645),
        [anon_sym_ulong] = ACTIONS(645),
        [anon_sym_char] = ACTIONS(645),
        [anon_sym_delegate] = ACTIONS(645),
        [anon_sym_LBRACK] = ACTIONS(643),
        [sym_const_keyword] = ACTIONS(645),
        [anon_sym_readonly] = ACTIONS(645),
        [anon_sym_volatile] = ACTIONS(645),
        [anon_sym_bool] = ACTIONS(645),
        [anon_sym_decimal] = ACTIONS(645),
        [anon_sym_double] = ACTIONS(645),
        [anon_sym_float] = ACTIONS(645),
        [anon_sym_object] = ACTIONS(645),
        [anon_sym_string] = ACTIONS(645),
        [sym_identifier_name] = ACTIONS(647),
        [sym_comment] = ACTIONS(101),
    },
    [203] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(225),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(221),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(651),
        [anon_sym_enum] = ACTIONS(653),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(655),
        [sym_const_keyword] = ACTIONS(657),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [204] = {
        [sym_variable_declaration] = STATE(221),
        [sym__type] = STATE(207),
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
        [sym_const_keyword] = ACTIONS(657),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [205] = {
        [anon_sym_sbyte] = ACTIONS(659),
        [anon_sym_byte] = ACTIONS(659),
        [anon_sym_short] = ACTIONS(659),
        [anon_sym_ushort] = ACTIONS(659),
        [anon_sym_int] = ACTIONS(659),
        [anon_sym_uint] = ACTIONS(659),
        [anon_sym_long] = ACTIONS(659),
        [anon_sym_ulong] = ACTIONS(659),
        [anon_sym_char] = ACTIONS(659),
        [sym_const_keyword] = ACTIONS(659),
        [anon_sym_bool] = ACTIONS(659),
        [anon_sym_decimal] = ACTIONS(659),
        [anon_sym_double] = ACTIONS(659),
        [anon_sym_float] = ACTIONS(659),
        [anon_sym_object] = ACTIONS(659),
        [anon_sym_string] = ACTIONS(659),
        [sym_identifier_name] = ACTIONS(661),
        [sym_comment] = ACTIONS(101),
    },
    [206] = {
        [anon_sym_SEMI] = ACTIONS(663),
        [sym_comment] = ACTIONS(101),
    },
    [207] = {
        [sym_variable_declarator] = STATE(212),
        [sym_identifier_name] = ACTIONS(665),
        [sym_comment] = ACTIONS(101),
    },
    [208] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [209] = {
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
        [sym_const_keyword] = ACTIONS(671),
        [anon_sym_readonly] = ACTIONS(671),
        [anon_sym_volatile] = ACTIONS(671),
        [anon_sym_bool] = ACTIONS(671),
        [anon_sym_decimal] = ACTIONS(671),
        [anon_sym_double] = ACTIONS(671),
        [anon_sym_float] = ACTIONS(671),
        [anon_sym_object] = ACTIONS(671),
        [anon_sym_string] = ACTIONS(671),
        [sym_identifier_name] = ACTIONS(673),
        [sym_comment] = ACTIONS(101),
    },
    [210] = {
        [anon_sym_RBRACE] = ACTIONS(675),
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
        [anon_sym_delegate] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(675),
        [sym_const_keyword] = ACTIONS(677),
        [anon_sym_readonly] = ACTIONS(677),
        [anon_sym_volatile] = ACTIONS(677),
        [anon_sym_bool] = ACTIONS(677),
        [anon_sym_decimal] = ACTIONS(677),
        [anon_sym_double] = ACTIONS(677),
        [anon_sym_float] = ACTIONS(677),
        [anon_sym_object] = ACTIONS(677),
        [anon_sym_string] = ACTIONS(677),
        [sym_identifier_name] = ACTIONS(679),
        [sym_comment] = ACTIONS(101),
    },
    [211] = {
        [sym_equals_value_clause] = STATE(218),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_COMMA] = ACTIONS(681),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [212] = {
        [aux_sym_variable_declaration_repeat1] = STATE(214),
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_COMMA] = ACTIONS(685),
        [sym_comment] = ACTIONS(101),
    },
    [213] = {
        [sym_variable_declarator] = STATE(217),
        [sym_identifier_name] = ACTIONS(665),
        [sym_comment] = ACTIONS(101),
    },
    [214] = {
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_COMMA] = ACTIONS(689),
        [sym_comment] = ACTIONS(101),
    },
    [215] = {
        [sym_variable_declarator] = STATE(216),
        [sym_identifier_name] = ACTIONS(665),
        [sym_comment] = ACTIONS(101),
    },
    [216] = {
        [anon_sym_SEMI] = ACTIONS(691),
        [anon_sym_COMMA] = ACTIONS(691),
        [sym_comment] = ACTIONS(101),
    },
    [217] = {
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_COMMA] = ACTIONS(693),
        [sym_comment] = ACTIONS(101),
    },
    [218] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_COMMA] = ACTIONS(695),
        [sym_comment] = ACTIONS(101),
    },
    [219] = {
        [anon_sym_RBRACE] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_unsafe] = ACTIONS(699),
        [anon_sym_abstract] = ACTIONS(699),
        [anon_sym_sealed] = ACTIONS(699),
        [anon_sym_static] = ACTIONS(699),
        [anon_sym_new] = ACTIONS(699),
        [anon_sym_public] = ACTIONS(699),
        [anon_sym_protected] = ACTIONS(699),
        [anon_sym_internal] = ACTIONS(699),
        [anon_sym_private] = ACTIONS(699),
        [anon_sym_struct] = ACTIONS(699),
        [anon_sym_enum] = ACTIONS(699),
        [anon_sym_sbyte] = ACTIONS(699),
        [anon_sym_byte] = ACTIONS(699),
        [anon_sym_short] = ACTIONS(699),
        [anon_sym_ushort] = ACTIONS(699),
        [anon_sym_int] = ACTIONS(699),
        [anon_sym_uint] = ACTIONS(699),
        [anon_sym_long] = ACTIONS(699),
        [anon_sym_ulong] = ACTIONS(699),
        [anon_sym_char] = ACTIONS(699),
        [anon_sym_delegate] = ACTIONS(699),
        [anon_sym_LBRACK] = ACTIONS(697),
        [sym_const_keyword] = ACTIONS(699),
        [anon_sym_readonly] = ACTIONS(699),
        [anon_sym_volatile] = ACTIONS(699),
        [anon_sym_bool] = ACTIONS(699),
        [anon_sym_decimal] = ACTIONS(699),
        [anon_sym_double] = ACTIONS(699),
        [anon_sym_float] = ACTIONS(699),
        [anon_sym_object] = ACTIONS(699),
        [anon_sym_string] = ACTIONS(699),
        [sym_identifier_name] = ACTIONS(701),
        [sym_comment] = ACTIONS(101),
    },
    [220] = {
        [sym_variable_declaration] = STATE(223),
        [sym__type] = STATE(207),
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
    [221] = {
        [anon_sym_SEMI] = ACTIONS(703),
        [sym_comment] = ACTIONS(101),
    },
    [222] = {
        [anon_sym_RBRACE] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_unsafe] = ACTIONS(707),
        [anon_sym_abstract] = ACTIONS(707),
        [anon_sym_sealed] = ACTIONS(707),
        [anon_sym_static] = ACTIONS(707),
        [anon_sym_new] = ACTIONS(707),
        [anon_sym_public] = ACTIONS(707),
        [anon_sym_protected] = ACTIONS(707),
        [anon_sym_internal] = ACTIONS(707),
        [anon_sym_private] = ACTIONS(707),
        [anon_sym_struct] = ACTIONS(707),
        [anon_sym_enum] = ACTIONS(707),
        [anon_sym_sbyte] = ACTIONS(707),
        [anon_sym_byte] = ACTIONS(707),
        [anon_sym_short] = ACTIONS(707),
        [anon_sym_ushort] = ACTIONS(707),
        [anon_sym_int] = ACTIONS(707),
        [anon_sym_uint] = ACTIONS(707),
        [anon_sym_long] = ACTIONS(707),
        [anon_sym_ulong] = ACTIONS(707),
        [anon_sym_char] = ACTIONS(707),
        [anon_sym_delegate] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(705),
        [sym_const_keyword] = ACTIONS(707),
        [anon_sym_readonly] = ACTIONS(707),
        [anon_sym_volatile] = ACTIONS(707),
        [anon_sym_bool] = ACTIONS(707),
        [anon_sym_decimal] = ACTIONS(707),
        [anon_sym_double] = ACTIONS(707),
        [anon_sym_float] = ACTIONS(707),
        [anon_sym_object] = ACTIONS(707),
        [anon_sym_string] = ACTIONS(707),
        [sym_identifier_name] = ACTIONS(709),
        [sym_comment] = ACTIONS(101),
    },
    [223] = {
        [anon_sym_SEMI] = ACTIONS(711),
        [sym_comment] = ACTIONS(101),
    },
    [224] = {
        [anon_sym_RBRACE] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(715),
        [anon_sym_unsafe] = ACTIONS(715),
        [anon_sym_abstract] = ACTIONS(715),
        [anon_sym_sealed] = ACTIONS(715),
        [anon_sym_static] = ACTIONS(715),
        [anon_sym_new] = ACTIONS(715),
        [anon_sym_public] = ACTIONS(715),
        [anon_sym_protected] = ACTIONS(715),
        [anon_sym_internal] = ACTIONS(715),
        [anon_sym_private] = ACTIONS(715),
        [anon_sym_struct] = ACTIONS(715),
        [anon_sym_enum] = ACTIONS(715),
        [anon_sym_sbyte] = ACTIONS(715),
        [anon_sym_byte] = ACTIONS(715),
        [anon_sym_short] = ACTIONS(715),
        [anon_sym_ushort] = ACTIONS(715),
        [anon_sym_int] = ACTIONS(715),
        [anon_sym_uint] = ACTIONS(715),
        [anon_sym_long] = ACTIONS(715),
        [anon_sym_ulong] = ACTIONS(715),
        [anon_sym_char] = ACTIONS(715),
        [anon_sym_delegate] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(713),
        [sym_const_keyword] = ACTIONS(715),
        [anon_sym_readonly] = ACTIONS(715),
        [anon_sym_volatile] = ACTIONS(715),
        [anon_sym_bool] = ACTIONS(715),
        [anon_sym_decimal] = ACTIONS(715),
        [anon_sym_double] = ACTIONS(715),
        [anon_sym_float] = ACTIONS(715),
        [anon_sym_object] = ACTIONS(715),
        [anon_sym_string] = ACTIONS(715),
        [sym_identifier_name] = ACTIONS(717),
        [sym_comment] = ACTIONS(101),
    },
    [225] = {
        [sym_variable_declaration] = STATE(223),
        [sym__type] = STATE(207),
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
        [sym_const_keyword] = ACTIONS(719),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [226] = {
        [sym_variable_declaration] = STATE(227),
        [sym__type] = STATE(207),
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
    [227] = {
        [anon_sym_SEMI] = ACTIONS(721),
        [sym_comment] = ACTIONS(101),
    },
    [228] = {
        [anon_sym_RBRACE] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(725),
        [anon_sym_unsafe] = ACTIONS(725),
        [anon_sym_abstract] = ACTIONS(725),
        [anon_sym_sealed] = ACTIONS(725),
        [anon_sym_static] = ACTIONS(725),
        [anon_sym_new] = ACTIONS(725),
        [anon_sym_public] = ACTIONS(725),
        [anon_sym_protected] = ACTIONS(725),
        [anon_sym_internal] = ACTIONS(725),
        [anon_sym_private] = ACTIONS(725),
        [anon_sym_struct] = ACTIONS(725),
        [anon_sym_enum] = ACTIONS(725),
        [anon_sym_sbyte] = ACTIONS(725),
        [anon_sym_byte] = ACTIONS(725),
        [anon_sym_short] = ACTIONS(725),
        [anon_sym_ushort] = ACTIONS(725),
        [anon_sym_int] = ACTIONS(725),
        [anon_sym_uint] = ACTIONS(725),
        [anon_sym_long] = ACTIONS(725),
        [anon_sym_ulong] = ACTIONS(725),
        [anon_sym_char] = ACTIONS(725),
        [anon_sym_delegate] = ACTIONS(725),
        [anon_sym_LBRACK] = ACTIONS(723),
        [sym_const_keyword] = ACTIONS(725),
        [anon_sym_readonly] = ACTIONS(725),
        [anon_sym_volatile] = ACTIONS(725),
        [anon_sym_bool] = ACTIONS(725),
        [anon_sym_decimal] = ACTIONS(725),
        [anon_sym_double] = ACTIONS(725),
        [anon_sym_float] = ACTIONS(725),
        [anon_sym_object] = ACTIONS(725),
        [anon_sym_string] = ACTIONS(725),
        [sym_identifier_name] = ACTIONS(727),
        [sym_comment] = ACTIONS(101),
    },
    [229] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_namespace] = ACTIONS(731),
        [anon_sym_RBRACE] = ACTIONS(729),
        [anon_sym_class] = ACTIONS(731),
        [anon_sym_unsafe] = ACTIONS(731),
        [anon_sym_abstract] = ACTIONS(731),
        [anon_sym_sealed] = ACTIONS(731),
        [anon_sym_static] = ACTIONS(731),
        [anon_sym_new] = ACTIONS(731),
        [anon_sym_public] = ACTIONS(731),
        [anon_sym_protected] = ACTIONS(731),
        [anon_sym_internal] = ACTIONS(731),
        [anon_sym_private] = ACTIONS(731),
        [anon_sym_struct] = ACTIONS(731),
        [anon_sym_enum] = ACTIONS(731),
        [anon_sym_sbyte] = ACTIONS(731),
        [anon_sym_byte] = ACTIONS(731),
        [anon_sym_short] = ACTIONS(731),
        [anon_sym_ushort] = ACTIONS(731),
        [anon_sym_int] = ACTIONS(731),
        [anon_sym_uint] = ACTIONS(731),
        [anon_sym_long] = ACTIONS(731),
        [anon_sym_ulong] = ACTIONS(731),
        [anon_sym_char] = ACTIONS(731),
        [anon_sym_delegate] = ACTIONS(731),
        [anon_sym_LBRACK] = ACTIONS(729),
        [sym_const_keyword] = ACTIONS(731),
        [anon_sym_readonly] = ACTIONS(731),
        [anon_sym_volatile] = ACTIONS(731),
        [anon_sym_bool] = ACTIONS(731),
        [anon_sym_decimal] = ACTIONS(731),
        [anon_sym_double] = ACTIONS(731),
        [anon_sym_float] = ACTIONS(731),
        [anon_sym_object] = ACTIONS(731),
        [anon_sym_string] = ACTIONS(731),
        [sym_identifier_name] = ACTIONS(733),
        [sym_comment] = ACTIONS(101),
    },
    [230] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [sym_identifier_name] = ACTIONS(735),
        [sym_comment] = ACTIONS(101),
    },
    [232] = {
        [sym_type_parameter_list] = STATE(234),
        [anon_sym_LBRACE] = ACTIONS(737),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [233] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(240),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [234] = {
        [anon_sym_LBRACE] = ACTIONS(741),
        [sym_comment] = ACTIONS(101),
    },
    [235] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(237),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(743),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
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
        [sym_const_keyword] = ACTIONS(747),
        [anon_sym_readonly] = ACTIONS(747),
        [anon_sym_volatile] = ACTIONS(747),
        [anon_sym_bool] = ACTIONS(747),
        [anon_sym_decimal] = ACTIONS(747),
        [anon_sym_double] = ACTIONS(747),
        [anon_sym_float] = ACTIONS(747),
        [anon_sym_object] = ACTIONS(747),
        [anon_sym_string] = ACTIONS(747),
        [sym_identifier_name] = ACTIONS(749),
        [sym_comment] = ACTIONS(101),
    },
    [237] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_namespace] = ACTIONS(755),
        [anon_sym_RBRACE] = ACTIONS(753),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_unsafe] = ACTIONS(755),
        [anon_sym_abstract] = ACTIONS(755),
        [anon_sym_sealed] = ACTIONS(755),
        [anon_sym_static] = ACTIONS(755),
        [anon_sym_new] = ACTIONS(755),
        [anon_sym_public] = ACTIONS(755),
        [anon_sym_protected] = ACTIONS(755),
        [anon_sym_internal] = ACTIONS(755),
        [anon_sym_private] = ACTIONS(755),
        [anon_sym_struct] = ACTIONS(755),
        [anon_sym_enum] = ACTIONS(755),
        [anon_sym_sbyte] = ACTIONS(755),
        [anon_sym_byte] = ACTIONS(755),
        [anon_sym_short] = ACTIONS(755),
        [anon_sym_ushort] = ACTIONS(755),
        [anon_sym_int] = ACTIONS(755),
        [anon_sym_uint] = ACTIONS(755),
        [anon_sym_long] = ACTIONS(755),
        [anon_sym_ulong] = ACTIONS(755),
        [anon_sym_char] = ACTIONS(755),
        [anon_sym_delegate] = ACTIONS(755),
        [anon_sym_LBRACK] = ACTIONS(753),
        [sym_const_keyword] = ACTIONS(755),
        [anon_sym_readonly] = ACTIONS(755),
        [anon_sym_volatile] = ACTIONS(755),
        [anon_sym_bool] = ACTIONS(755),
        [anon_sym_decimal] = ACTIONS(755),
        [anon_sym_double] = ACTIONS(755),
        [anon_sym_float] = ACTIONS(755),
        [anon_sym_object] = ACTIONS(755),
        [anon_sym_string] = ACTIONS(755),
        [sym_identifier_name] = ACTIONS(757),
        [sym_comment] = ACTIONS(101),
    },
    [239] = {
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
        [sym_const_keyword] = ACTIONS(761),
        [anon_sym_readonly] = ACTIONS(761),
        [anon_sym_volatile] = ACTIONS(761),
        [anon_sym_bool] = ACTIONS(761),
        [anon_sym_decimal] = ACTIONS(761),
        [anon_sym_double] = ACTIONS(761),
        [anon_sym_float] = ACTIONS(761),
        [anon_sym_object] = ACTIONS(761),
        [anon_sym_string] = ACTIONS(761),
        [sym_identifier_name] = ACTIONS(763),
        [sym_comment] = ACTIONS(101),
    },
    [240] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(743),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [241] = {
        [sym_identifier_name] = ACTIONS(765),
        [sym_comment] = ACTIONS(101),
    },
    [242] = {
        [sym_parameter_list] = STATE(243),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [243] = {
        [anon_sym_SEMI] = ACTIONS(767),
        [sym_comment] = ACTIONS(101),
    },
    [244] = {
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_namespace] = ACTIONS(771),
        [anon_sym_RBRACE] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_unsafe] = ACTIONS(771),
        [anon_sym_abstract] = ACTIONS(771),
        [anon_sym_sealed] = ACTIONS(771),
        [anon_sym_static] = ACTIONS(771),
        [anon_sym_new] = ACTIONS(771),
        [anon_sym_public] = ACTIONS(771),
        [anon_sym_protected] = ACTIONS(771),
        [anon_sym_internal] = ACTIONS(771),
        [anon_sym_private] = ACTIONS(771),
        [anon_sym_struct] = ACTIONS(771),
        [anon_sym_enum] = ACTIONS(771),
        [anon_sym_sbyte] = ACTIONS(771),
        [anon_sym_byte] = ACTIONS(771),
        [anon_sym_short] = ACTIONS(771),
        [anon_sym_ushort] = ACTIONS(771),
        [anon_sym_int] = ACTIONS(771),
        [anon_sym_uint] = ACTIONS(771),
        [anon_sym_long] = ACTIONS(771),
        [anon_sym_ulong] = ACTIONS(771),
        [anon_sym_char] = ACTIONS(771),
        [anon_sym_delegate] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(769),
        [sym_const_keyword] = ACTIONS(771),
        [anon_sym_readonly] = ACTIONS(771),
        [anon_sym_volatile] = ACTIONS(771),
        [anon_sym_bool] = ACTIONS(771),
        [anon_sym_decimal] = ACTIONS(771),
        [anon_sym_double] = ACTIONS(771),
        [anon_sym_float] = ACTIONS(771),
        [anon_sym_object] = ACTIONS(771),
        [anon_sym_string] = ACTIONS(771),
        [sym_identifier_name] = ACTIONS(773),
        [sym_comment] = ACTIONS(101),
    },
    [245] = {
        [anon_sym_LBRACE] = ACTIONS(775),
        [anon_sym_COLON] = ACTIONS(777),
        [sym_comment] = ACTIONS(101),
    },
    [246] = {
        [sym_enum_member_declaration] = STATE(252),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [247] = {
        [sym__integral_type] = STATE(248),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [248] = {
        [anon_sym_LBRACE] = ACTIONS(779),
        [sym_comment] = ACTIONS(101),
    },
    [249] = {
        [sym_enum_member_declaration] = STATE(250),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [250] = {
        [aux_sym_enum_declaration_repeat1] = STATE(251),
        [anon_sym_RBRACE] = ACTIONS(583),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [251] = {
        [anon_sym_RBRACE] = ACTIONS(533),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [252] = {
        [aux_sym_enum_declaration_repeat1] = STATE(254),
        [anon_sym_RBRACE] = ACTIONS(781),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_SEMI] = ACTIONS(785),
        [anon_sym_namespace] = ACTIONS(787),
        [anon_sym_RBRACE] = ACTIONS(783),
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
        [anon_sym_LBRACK] = ACTIONS(783),
        [sym_const_keyword] = ACTIONS(787),
        [anon_sym_readonly] = ACTIONS(787),
        [anon_sym_volatile] = ACTIONS(787),
        [anon_sym_bool] = ACTIONS(787),
        [anon_sym_decimal] = ACTIONS(787),
        [anon_sym_double] = ACTIONS(787),
        [anon_sym_float] = ACTIONS(787),
        [anon_sym_object] = ACTIONS(787),
        [anon_sym_string] = ACTIONS(787),
        [sym_identifier_name] = ACTIONS(789),
        [sym_comment] = ACTIONS(101),
    },
    [254] = {
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(575),
        [anon_sym_namespace] = ACTIONS(579),
        [anon_sym_RBRACE] = ACTIONS(575),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_unsafe] = ACTIONS(579),
        [anon_sym_abstract] = ACTIONS(579),
        [anon_sym_sealed] = ACTIONS(579),
        [anon_sym_static] = ACTIONS(579),
        [anon_sym_new] = ACTIONS(579),
        [anon_sym_public] = ACTIONS(579),
        [anon_sym_protected] = ACTIONS(579),
        [anon_sym_internal] = ACTIONS(579),
        [anon_sym_private] = ACTIONS(579),
        [anon_sym_struct] = ACTIONS(579),
        [anon_sym_enum] = ACTIONS(579),
        [anon_sym_sbyte] = ACTIONS(579),
        [anon_sym_byte] = ACTIONS(579),
        [anon_sym_short] = ACTIONS(579),
        [anon_sym_ushort] = ACTIONS(579),
        [anon_sym_int] = ACTIONS(579),
        [anon_sym_uint] = ACTIONS(579),
        [anon_sym_long] = ACTIONS(579),
        [anon_sym_ulong] = ACTIONS(579),
        [anon_sym_char] = ACTIONS(579),
        [anon_sym_delegate] = ACTIONS(579),
        [anon_sym_LBRACK] = ACTIONS(575),
        [sym_const_keyword] = ACTIONS(579),
        [anon_sym_readonly] = ACTIONS(579),
        [anon_sym_volatile] = ACTIONS(579),
        [anon_sym_bool] = ACTIONS(579),
        [anon_sym_decimal] = ACTIONS(579),
        [anon_sym_double] = ACTIONS(579),
        [anon_sym_float] = ACTIONS(579),
        [anon_sym_object] = ACTIONS(579),
        [anon_sym_string] = ACTIONS(579),
        [sym_identifier_name] = ACTIONS(581),
        [sym_comment] = ACTIONS(101),
    },
    [256] = {
        [sym_type_parameter_list] = STATE(258),
        [anon_sym_LBRACE] = ACTIONS(791),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [257] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(260),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(793),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [anon_sym_LBRACE] = ACTIONS(595),
        [sym_comment] = ACTIONS(101),
    },
    [259] = {
        [ts_builtin_sym_end] = ACTIONS(795),
        [anon_sym_namespace] = ACTIONS(797),
        [anon_sym_RBRACE] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_unsafe] = ACTIONS(797),
        [anon_sym_abstract] = ACTIONS(797),
        [anon_sym_sealed] = ACTIONS(797),
        [anon_sym_static] = ACTIONS(797),
        [anon_sym_new] = ACTIONS(797),
        [anon_sym_public] = ACTIONS(797),
        [anon_sym_protected] = ACTIONS(797),
        [anon_sym_internal] = ACTIONS(797),
        [anon_sym_private] = ACTIONS(797),
        [anon_sym_struct] = ACTIONS(797),
        [anon_sym_enum] = ACTIONS(797),
        [anon_sym_sbyte] = ACTIONS(797),
        [anon_sym_byte] = ACTIONS(797),
        [anon_sym_short] = ACTIONS(797),
        [anon_sym_ushort] = ACTIONS(797),
        [anon_sym_int] = ACTIONS(797),
        [anon_sym_uint] = ACTIONS(797),
        [anon_sym_long] = ACTIONS(797),
        [anon_sym_ulong] = ACTIONS(797),
        [anon_sym_char] = ACTIONS(797),
        [anon_sym_delegate] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(795),
        [sym_const_keyword] = ACTIONS(797),
        [anon_sym_readonly] = ACTIONS(797),
        [anon_sym_volatile] = ACTIONS(797),
        [anon_sym_bool] = ACTIONS(797),
        [anon_sym_decimal] = ACTIONS(797),
        [anon_sym_double] = ACTIONS(797),
        [anon_sym_float] = ACTIONS(797),
        [anon_sym_object] = ACTIONS(797),
        [anon_sym_string] = ACTIONS(797),
        [sym_identifier_name] = ACTIONS(799),
        [sym_comment] = ACTIONS(101),
    },
    [260] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [261] = {
        [sym_type_parameter_list] = STATE(263),
        [anon_sym_LBRACE] = ACTIONS(801),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [262] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(265),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_comment] = ACTIONS(101),
    },
    [264] = {
        [ts_builtin_sym_end] = ACTIONS(805),
        [anon_sym_namespace] = ACTIONS(807),
        [anon_sym_RBRACE] = ACTIONS(805),
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
        [anon_sym_sbyte] = ACTIONS(807),
        [anon_sym_byte] = ACTIONS(807),
        [anon_sym_short] = ACTIONS(807),
        [anon_sym_ushort] = ACTIONS(807),
        [anon_sym_int] = ACTIONS(807),
        [anon_sym_uint] = ACTIONS(807),
        [anon_sym_long] = ACTIONS(807),
        [anon_sym_ulong] = ACTIONS(807),
        [anon_sym_char] = ACTIONS(807),
        [anon_sym_delegate] = ACTIONS(807),
        [anon_sym_LBRACK] = ACTIONS(805),
        [sym_const_keyword] = ACTIONS(807),
        [anon_sym_readonly] = ACTIONS(807),
        [anon_sym_volatile] = ACTIONS(807),
        [anon_sym_bool] = ACTIONS(807),
        [anon_sym_decimal] = ACTIONS(807),
        [anon_sym_double] = ACTIONS(807),
        [anon_sym_float] = ACTIONS(807),
        [anon_sym_object] = ACTIONS(807),
        [anon_sym_string] = ACTIONS(807),
        [sym_identifier_name] = ACTIONS(809),
        [sym_comment] = ACTIONS(101),
    },
    [265] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [266] = {
        [anon_sym_sbyte] = ACTIONS(811),
        [anon_sym_byte] = ACTIONS(811),
        [anon_sym_short] = ACTIONS(811),
        [anon_sym_ushort] = ACTIONS(811),
        [anon_sym_int] = ACTIONS(811),
        [anon_sym_uint] = ACTIONS(811),
        [anon_sym_long] = ACTIONS(811),
        [anon_sym_ulong] = ACTIONS(811),
        [anon_sym_char] = ACTIONS(811),
        [sym_const_keyword] = ACTIONS(811),
        [anon_sym_bool] = ACTIONS(811),
        [anon_sym_decimal] = ACTIONS(811),
        [anon_sym_double] = ACTIONS(811),
        [anon_sym_float] = ACTIONS(811),
        [anon_sym_object] = ACTIONS(811),
        [anon_sym_string] = ACTIONS(811),
        [sym_identifier_name] = ACTIONS(813),
        [sym_comment] = ACTIONS(101),
    },
    [267] = {
        [sym_identifier_name] = ACTIONS(815),
        [sym_comment] = ACTIONS(101),
    },
    [268] = {
        [sym_parameter_list] = STATE(269),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [269] = {
        [anon_sym_SEMI] = ACTIONS(817),
        [sym_comment] = ACTIONS(101),
    },
    [270] = {
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_namespace] = ACTIONS(821),
        [anon_sym_RBRACE] = ACTIONS(819),
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
        [anon_sym_sbyte] = ACTIONS(821),
        [anon_sym_byte] = ACTIONS(821),
        [anon_sym_short] = ACTIONS(821),
        [anon_sym_ushort] = ACTIONS(821),
        [anon_sym_int] = ACTIONS(821),
        [anon_sym_uint] = ACTIONS(821),
        [anon_sym_long] = ACTIONS(821),
        [anon_sym_ulong] = ACTIONS(821),
        [anon_sym_char] = ACTIONS(821),
        [anon_sym_delegate] = ACTIONS(821),
        [anon_sym_LBRACK] = ACTIONS(819),
        [sym_const_keyword] = ACTIONS(821),
        [anon_sym_readonly] = ACTIONS(821),
        [anon_sym_volatile] = ACTIONS(821),
        [anon_sym_bool] = ACTIONS(821),
        [anon_sym_decimal] = ACTIONS(821),
        [anon_sym_double] = ACTIONS(821),
        [anon_sym_float] = ACTIONS(821),
        [anon_sym_object] = ACTIONS(821),
        [anon_sym_string] = ACTIONS(821),
        [sym_identifier_name] = ACTIONS(823),
        [sym_comment] = ACTIONS(101),
    },
    [271] = {
        [anon_sym_LBRACE] = ACTIONS(825),
        [anon_sym_COLON] = ACTIONS(827),
        [sym_comment] = ACTIONS(101),
    },
    [272] = {
        [sym_enum_member_declaration] = STATE(275),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [273] = {
        [sym__integral_type] = STATE(274),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [274] = {
        [anon_sym_LBRACE] = ACTIONS(519),
        [sym_comment] = ACTIONS(101),
    },
    [275] = {
        [aux_sym_enum_declaration_repeat1] = STATE(277),
        [anon_sym_RBRACE] = ACTIONS(829),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(833),
        [anon_sym_namespace] = ACTIONS(835),
        [anon_sym_RBRACE] = ACTIONS(831),
        [anon_sym_class] = ACTIONS(835),
        [anon_sym_unsafe] = ACTIONS(835),
        [anon_sym_abstract] = ACTIONS(835),
        [anon_sym_sealed] = ACTIONS(835),
        [anon_sym_static] = ACTIONS(835),
        [anon_sym_new] = ACTIONS(835),
        [anon_sym_public] = ACTIONS(835),
        [anon_sym_protected] = ACTIONS(835),
        [anon_sym_internal] = ACTIONS(835),
        [anon_sym_private] = ACTIONS(835),
        [anon_sym_struct] = ACTIONS(835),
        [anon_sym_enum] = ACTIONS(835),
        [anon_sym_sbyte] = ACTIONS(835),
        [anon_sym_byte] = ACTIONS(835),
        [anon_sym_short] = ACTIONS(835),
        [anon_sym_ushort] = ACTIONS(835),
        [anon_sym_int] = ACTIONS(835),
        [anon_sym_uint] = ACTIONS(835),
        [anon_sym_long] = ACTIONS(835),
        [anon_sym_ulong] = ACTIONS(835),
        [anon_sym_char] = ACTIONS(835),
        [anon_sym_delegate] = ACTIONS(835),
        [anon_sym_LBRACK] = ACTIONS(831),
        [sym_const_keyword] = ACTIONS(835),
        [anon_sym_readonly] = ACTIONS(835),
        [anon_sym_volatile] = ACTIONS(835),
        [anon_sym_bool] = ACTIONS(835),
        [anon_sym_decimal] = ACTIONS(835),
        [anon_sym_double] = ACTIONS(835),
        [anon_sym_float] = ACTIONS(835),
        [anon_sym_object] = ACTIONS(835),
        [anon_sym_string] = ACTIONS(835),
        [sym_identifier_name] = ACTIONS(837),
        [sym_comment] = ACTIONS(101),
    },
    [277] = {
        [anon_sym_RBRACE] = ACTIONS(781),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_namespace] = ACTIONS(787),
        [anon_sym_RBRACE] = ACTIONS(783),
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
        [anon_sym_LBRACK] = ACTIONS(783),
        [sym_const_keyword] = ACTIONS(787),
        [anon_sym_readonly] = ACTIONS(787),
        [anon_sym_volatile] = ACTIONS(787),
        [anon_sym_bool] = ACTIONS(787),
        [anon_sym_decimal] = ACTIONS(787),
        [anon_sym_double] = ACTIONS(787),
        [anon_sym_float] = ACTIONS(787),
        [anon_sym_object] = ACTIONS(787),
        [anon_sym_string] = ACTIONS(787),
        [sym_identifier_name] = ACTIONS(789),
        [sym_comment] = ACTIONS(101),
    },
    [279] = {
        [sym_type_parameter_list] = STATE(281),
        [anon_sym_LBRACE] = ACTIONS(839),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [280] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(283),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(841),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [anon_sym_LBRACE] = ACTIONS(791),
        [sym_comment] = ACTIONS(101),
    },
    [282] = {
        [ts_builtin_sym_end] = ACTIONS(843),
        [anon_sym_namespace] = ACTIONS(845),
        [anon_sym_RBRACE] = ACTIONS(843),
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
        [anon_sym_sbyte] = ACTIONS(845),
        [anon_sym_byte] = ACTIONS(845),
        [anon_sym_short] = ACTIONS(845),
        [anon_sym_ushort] = ACTIONS(845),
        [anon_sym_int] = ACTIONS(845),
        [anon_sym_uint] = ACTIONS(845),
        [anon_sym_long] = ACTIONS(845),
        [anon_sym_ulong] = ACTIONS(845),
        [anon_sym_char] = ACTIONS(845),
        [anon_sym_delegate] = ACTIONS(845),
        [anon_sym_LBRACK] = ACTIONS(843),
        [sym_const_keyword] = ACTIONS(845),
        [anon_sym_readonly] = ACTIONS(845),
        [anon_sym_volatile] = ACTIONS(845),
        [anon_sym_bool] = ACTIONS(845),
        [anon_sym_decimal] = ACTIONS(845),
        [anon_sym_double] = ACTIONS(845),
        [anon_sym_float] = ACTIONS(845),
        [anon_sym_object] = ACTIONS(845),
        [anon_sym_string] = ACTIONS(845),
        [sym_identifier_name] = ACTIONS(847),
        [sym_comment] = ACTIONS(101),
    },
    [283] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(793),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [284] = {
        [sym__class_modifiers] = STATE(285),
        [sym__struct_modifiers] = STATE(286),
        [sym__field_modifiers] = STATE(266),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_unsafe] = ACTIONS(631),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(631),
        [anon_sym_public] = ACTIONS(631),
        [anon_sym_protected] = ACTIONS(631),
        [anon_sym_internal] = ACTIONS(631),
        [anon_sym_private] = ACTIONS(631),
        [anon_sym_struct] = ACTIONS(633),
        [anon_sym_sbyte] = ACTIONS(635),
        [anon_sym_byte] = ACTIONS(635),
        [anon_sym_short] = ACTIONS(635),
        [anon_sym_ushort] = ACTIONS(635),
        [anon_sym_int] = ACTIONS(635),
        [anon_sym_uint] = ACTIONS(635),
        [anon_sym_long] = ACTIONS(635),
        [anon_sym_ulong] = ACTIONS(635),
        [anon_sym_char] = ACTIONS(635),
        [sym_const_keyword] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(635),
        [anon_sym_decimal] = ACTIONS(635),
        [anon_sym_double] = ACTIONS(635),
        [anon_sym_float] = ACTIONS(635),
        [anon_sym_object] = ACTIONS(635),
        [anon_sym_string] = ACTIONS(635),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(101),
    },
    [285] = {
        [anon_sym_class] = ACTIONS(849),
        [sym_comment] = ACTIONS(101),
    },
    [286] = {
        [anon_sym_struct] = ACTIONS(851),
        [sym_comment] = ACTIONS(101),
    },
    [287] = {
        [sym_type_parameter_list] = STATE(289),
        [anon_sym_LBRACE] = ACTIONS(853),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [288] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(291),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_comment] = ACTIONS(101),
    },
    [290] = {
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_namespace] = ACTIONS(859),
        [anon_sym_RBRACE] = ACTIONS(857),
        [anon_sym_class] = ACTIONS(859),
        [anon_sym_unsafe] = ACTIONS(859),
        [anon_sym_abstract] = ACTIONS(859),
        [anon_sym_sealed] = ACTIONS(859),
        [anon_sym_static] = ACTIONS(859),
        [anon_sym_new] = ACTIONS(859),
        [anon_sym_public] = ACTIONS(859),
        [anon_sym_protected] = ACTIONS(859),
        [anon_sym_internal] = ACTIONS(859),
        [anon_sym_private] = ACTIONS(859),
        [anon_sym_struct] = ACTIONS(859),
        [anon_sym_enum] = ACTIONS(859),
        [anon_sym_sbyte] = ACTIONS(859),
        [anon_sym_byte] = ACTIONS(859),
        [anon_sym_short] = ACTIONS(859),
        [anon_sym_ushort] = ACTIONS(859),
        [anon_sym_int] = ACTIONS(859),
        [anon_sym_uint] = ACTIONS(859),
        [anon_sym_long] = ACTIONS(859),
        [anon_sym_ulong] = ACTIONS(859),
        [anon_sym_char] = ACTIONS(859),
        [anon_sym_delegate] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(857),
        [sym_const_keyword] = ACTIONS(859),
        [anon_sym_readonly] = ACTIONS(859),
        [anon_sym_volatile] = ACTIONS(859),
        [anon_sym_bool] = ACTIONS(859),
        [anon_sym_decimal] = ACTIONS(859),
        [anon_sym_double] = ACTIONS(859),
        [anon_sym_float] = ACTIONS(859),
        [anon_sym_object] = ACTIONS(859),
        [anon_sym_string] = ACTIONS(859),
        [sym_identifier_name] = ACTIONS(861),
        [sym_comment] = ACTIONS(101),
    },
    [291] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [292] = {
        [anon_sym_COLON] = ACTIONS(863),
        [sym_comment] = ACTIONS(101),
    },
    [293] = {
        [sym_attribute_list] = STATE(294),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(101),
    },
    [294] = {
        [anon_sym_RBRACK] = ACTIONS(865),
        [sym_comment] = ACTIONS(101),
    },
    [295] = {
        [ts_builtin_sym_end] = ACTIONS(867),
        [anon_sym_namespace] = ACTIONS(867),
        [anon_sym_class] = ACTIONS(867),
        [anon_sym_unsafe] = ACTIONS(867),
        [anon_sym_abstract] = ACTIONS(867),
        [anon_sym_sealed] = ACTIONS(867),
        [anon_sym_static] = ACTIONS(867),
        [anon_sym_new] = ACTIONS(867),
        [anon_sym_public] = ACTIONS(867),
        [anon_sym_protected] = ACTIONS(867),
        [anon_sym_internal] = ACTIONS(867),
        [anon_sym_private] = ACTIONS(867),
        [anon_sym_struct] = ACTIONS(867),
        [anon_sym_enum] = ACTIONS(867),
        [anon_sym_delegate] = ACTIONS(867),
        [anon_sym_LBRACK] = ACTIONS(867),
        [sym_comment] = ACTIONS(101),
    },
    [296] = {
        [sym__class_modifiers] = STATE(285),
        [sym__struct_modifiers] = STATE(286),
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
    [297] = {
        [anon_sym_COLON_COLON] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [298] = {
        [anon_sym_LBRACE] = ACTIONS(871),
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [299] = {
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [300] = {
        [sym_identifier_name] = ACTIONS(875),
        [sym_comment] = ACTIONS(101),
    },
    [301] = {
        [anon_sym_SEMI] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [anon_sym_DOT] = ACTIONS(877),
        [sym_comment] = ACTIONS(101),
    },
    [302] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(304),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(879),
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
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(881),
        [anon_sym_namespace] = ACTIONS(881),
        [anon_sym_RBRACE] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_unsafe] = ACTIONS(881),
        [anon_sym_abstract] = ACTIONS(881),
        [anon_sym_sealed] = ACTIONS(881),
        [anon_sym_static] = ACTIONS(881),
        [anon_sym_new] = ACTIONS(881),
        [anon_sym_public] = ACTIONS(881),
        [anon_sym_protected] = ACTIONS(881),
        [anon_sym_internal] = ACTIONS(881),
        [anon_sym_private] = ACTIONS(881),
        [anon_sym_struct] = ACTIONS(881),
        [anon_sym_enum] = ACTIONS(881),
        [anon_sym_delegate] = ACTIONS(881),
        [anon_sym_LBRACK] = ACTIONS(881),
        [sym_comment] = ACTIONS(101),
    },
    [304] = {
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
        [anon_sym_RBRACE] = ACTIONS(883),
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
    [305] = {
        [ts_builtin_sym_end] = ACTIONS(885),
        [anon_sym_namespace] = ACTIONS(885),
        [anon_sym_RBRACE] = ACTIONS(885),
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
        [sym_comment] = ACTIONS(101),
    },
    [306] = {
        [sym_identifier_name] = ACTIONS(887),
        [sym_comment] = ACTIONS(101),
    },
    [307] = {
        [anon_sym_DOT] = ACTIONS(889),
        [sym_comment] = ACTIONS(101),
    },
    [308] = {
        [sym_global] = ACTIONS(891),
        [sym_identifier_name] = ACTIONS(893),
        [sym_comment] = ACTIONS(101),
    },
    [309] = {
        [anon_sym_SEMI] = ACTIONS(895),
        [anon_sym_EQ] = ACTIONS(897),
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [310] = {
        [anon_sym_SEMI] = ACTIONS(895),
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [311] = {
        [sym_qualified_name] = STATE(312),
        [sym_alias_qualified_name] = STATE(299),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(899),
        [sym_comment] = ACTIONS(101),
    },
    [312] = {
        [anon_sym_SEMI] = ACTIONS(901),
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [313] = {
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
    [314] = {
        [ts_builtin_sym_end] = ACTIONS(905),
        [anon_sym_using] = ACTIONS(905),
        [anon_sym_namespace] = ACTIONS(905),
        [anon_sym_class] = ACTIONS(905),
        [anon_sym_unsafe] = ACTIONS(905),
        [anon_sym_abstract] = ACTIONS(905),
        [anon_sym_sealed] = ACTIONS(905),
        [anon_sym_static] = ACTIONS(905),
        [anon_sym_new] = ACTIONS(905),
        [anon_sym_public] = ACTIONS(905),
        [anon_sym_protected] = ACTIONS(905),
        [anon_sym_internal] = ACTIONS(905),
        [anon_sym_private] = ACTIONS(905),
        [anon_sym_struct] = ACTIONS(905),
        [anon_sym_enum] = ACTIONS(905),
        [anon_sym_delegate] = ACTIONS(905),
        [anon_sym_LBRACK] = ACTIONS(905),
        [sym_comment] = ACTIONS(101),
    },
    [315] = {
        [sym_global] = ACTIONS(907),
        [sym_identifier_name] = ACTIONS(909),
        [sym_comment] = ACTIONS(101),
    },
    [316] = {
        [sym_identifier_name] = ACTIONS(911),
        [sym_comment] = ACTIONS(101),
    },
    [317] = {
        [anon_sym_SEMI] = ACTIONS(913),
        [sym_comment] = ACTIONS(101),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(915),
        [anon_sym_extern] = ACTIONS(915),
        [anon_sym_using] = ACTIONS(915),
        [anon_sym_namespace] = ACTIONS(915),
        [anon_sym_class] = ACTIONS(915),
        [anon_sym_unsafe] = ACTIONS(915),
        [anon_sym_abstract] = ACTIONS(915),
        [anon_sym_sealed] = ACTIONS(915),
        [anon_sym_static] = ACTIONS(915),
        [anon_sym_new] = ACTIONS(915),
        [anon_sym_public] = ACTIONS(915),
        [anon_sym_protected] = ACTIONS(915),
        [anon_sym_internal] = ACTIONS(915),
        [anon_sym_private] = ACTIONS(915),
        [anon_sym_struct] = ACTIONS(915),
        [anon_sym_enum] = ACTIONS(915),
        [anon_sym_delegate] = ACTIONS(915),
        [anon_sym_LBRACK] = ACTIONS(915),
        [sym_comment] = ACTIONS(101),
    },
    [319] = {
        [ts_builtin_sym_end] = ACTIONS(917),
        [anon_sym_extern] = ACTIONS(930),
        [anon_sym_using] = ACTIONS(932),
        [anon_sym_namespace] = ACTIONS(936),
        [anon_sym_RBRACE] = ACTIONS(949),
        [anon_sym_class] = ACTIONS(963),
        [anon_sym_unsafe] = ACTIONS(963),
        [anon_sym_abstract] = ACTIONS(963),
        [anon_sym_sealed] = ACTIONS(963),
        [anon_sym_static] = ACTIONS(963),
        [anon_sym_new] = ACTIONS(963),
        [anon_sym_public] = ACTIONS(963),
        [anon_sym_protected] = ACTIONS(963),
        [anon_sym_internal] = ACTIONS(963),
        [anon_sym_private] = ACTIONS(963),
        [anon_sym_struct] = ACTIONS(963),
        [anon_sym_enum] = ACTIONS(963),
        [anon_sym_sbyte] = ACTIONS(980),
        [anon_sym_byte] = ACTIONS(980),
        [anon_sym_short] = ACTIONS(980),
        [anon_sym_ushort] = ACTIONS(980),
        [anon_sym_int] = ACTIONS(980),
        [anon_sym_uint] = ACTIONS(980),
        [anon_sym_long] = ACTIONS(980),
        [anon_sym_ulong] = ACTIONS(980),
        [anon_sym_char] = ACTIONS(980),
        [anon_sym_delegate] = ACTIONS(963),
        [anon_sym_LBRACK] = ACTIONS(994),
        [sym_const_keyword] = ACTIONS(980),
        [anon_sym_readonly] = ACTIONS(980),
        [anon_sym_volatile] = ACTIONS(980),
        [anon_sym_bool] = ACTIONS(980),
        [anon_sym_decimal] = ACTIONS(980),
        [anon_sym_double] = ACTIONS(980),
        [anon_sym_float] = ACTIONS(980),
        [anon_sym_object] = ACTIONS(980),
        [anon_sym_string] = ACTIONS(980),
        [sym_identifier_name] = ACTIONS(1011),
        [sym_comment] = ACTIONS(101),
    },
    [320] = {
        [sym__type_declaration] = STATE(473),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(522),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(475),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(304),
        [aux_sym_class_declaration_repeat1] = STATE(383),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1025),
        [anon_sym_RBRACE] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1029),
        [sym_comment] = ACTIONS(101),
    },
    [321] = {
        [ts_builtin_sym_end] = ACTIONS(1031),
        [anon_sym_SEMI] = ACTIONS(1050),
        [anon_sym_namespace] = ACTIONS(1052),
        [anon_sym_RBRACE] = ACTIONS(1031),
        [anon_sym_class] = ACTIONS(1052),
        [anon_sym_unsafe] = ACTIONS(1052),
        [anon_sym_abstract] = ACTIONS(1052),
        [anon_sym_sealed] = ACTIONS(1052),
        [anon_sym_static] = ACTIONS(1052),
        [anon_sym_new] = ACTIONS(1052),
        [anon_sym_public] = ACTIONS(1052),
        [anon_sym_protected] = ACTIONS(1052),
        [anon_sym_internal] = ACTIONS(1052),
        [anon_sym_private] = ACTIONS(1052),
        [anon_sym_struct] = ACTIONS(1052),
        [anon_sym_enum] = ACTIONS(1052),
        [anon_sym_sbyte] = ACTIONS(1071),
        [anon_sym_byte] = ACTIONS(1071),
        [anon_sym_short] = ACTIONS(1071),
        [anon_sym_ushort] = ACTIONS(1071),
        [anon_sym_int] = ACTIONS(1071),
        [anon_sym_uint] = ACTIONS(1071),
        [anon_sym_long] = ACTIONS(1071),
        [anon_sym_ulong] = ACTIONS(1071),
        [anon_sym_char] = ACTIONS(1071),
        [anon_sym_delegate] = ACTIONS(1052),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [sym_const_keyword] = ACTIONS(1071),
        [anon_sym_readonly] = ACTIONS(1071),
        [anon_sym_volatile] = ACTIONS(1071),
        [anon_sym_bool] = ACTIONS(1071),
        [anon_sym_decimal] = ACTIONS(1071),
        [anon_sym_double] = ACTIONS(1071),
        [anon_sym_float] = ACTIONS(1071),
        [anon_sym_object] = ACTIONS(1071),
        [anon_sym_string] = ACTIONS(1071),
        [sym_identifier_name] = ACTIONS(1088),
        [sym_comment] = ACTIONS(101),
    },
    [322] = {
        [sym_identifier_name] = ACTIONS(1105),
        [sym_comment] = ACTIONS(101),
    },
    [323] = {
        [sym__class_modifiers] = STATE(285),
        [sym__field_modifiers] = STATE(266),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_unsafe] = ACTIONS(605),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(635),
        [anon_sym_byte] = ACTIONS(635),
        [anon_sym_short] = ACTIONS(635),
        [anon_sym_ushort] = ACTIONS(635),
        [anon_sym_int] = ACTIONS(635),
        [anon_sym_uint] = ACTIONS(635),
        [anon_sym_long] = ACTIONS(635),
        [anon_sym_ulong] = ACTIONS(635),
        [anon_sym_char] = ACTIONS(635),
        [sym_const_keyword] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(635),
        [anon_sym_decimal] = ACTIONS(635),
        [anon_sym_double] = ACTIONS(635),
        [anon_sym_float] = ACTIONS(635),
        [anon_sym_object] = ACTIONS(635),
        [anon_sym_string] = ACTIONS(635),
        [sym_global] = ACTIONS(891),
        [sym_identifier_name] = ACTIONS(1107),
        [sym_comment] = ACTIONS(101),
    },
    [324] = {
        [sym_identifier_name] = ACTIONS(1110),
        [sym_comment] = ACTIONS(101),
    },
    [325] = {
        [sym_identifier_name] = ACTIONS(1112),
        [sym_comment] = ACTIONS(101),
    },
    [326] = {
        [sym__integral_type] = STATE(356),
        [sym_attribute_list] = STATE(294),
        [sym_attribute] = STATE(36),
        [anon_sym_sbyte] = ACTIONS(1114),
        [anon_sym_byte] = ACTIONS(1114),
        [anon_sym_short] = ACTIONS(1114),
        [anon_sym_ushort] = ACTIONS(1114),
        [anon_sym_int] = ACTIONS(1114),
        [anon_sym_uint] = ACTIONS(1114),
        [anon_sym_long] = ACTIONS(1114),
        [anon_sym_ulong] = ACTIONS(1114),
        [anon_sym_char] = ACTIONS(1114),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(101),
    },
    [327] = {
        [sym_enum_member_declaration] = STATE(492),
        [sym_parameter] = STATE(493),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(494),
        [sym__attribute_section] = STATE(25),
        [sym_attribute] = STATE(495),
        [sym__type] = STATE(496),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(497),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(498),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1116),
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
        [anon_sym_RBRACK] = ACTIONS(1116),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1119),
        [sym_comment] = ACTIONS(101),
    },
    [328] = {
        [anon_sym_LBRACE] = ACTIONS(527),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_GT] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(101),
    },
    [329] = {
        [sym__return_type] = STATE(358),
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
    [330] = {
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
        [anon_sym_RPAREN] = ACTIONS(1121),
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
    [331] = {
        [anon_sym_SEMI] = ACTIONS(1123),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [332] = {
        [sym_array_type] = STATE(363),
        [sym__type] = STATE(131),
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
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [aux_sym_array_rank_specifier_repeat1] = STATE(136),
        [anon_sym_COMMA] = ACTIONS(453),
        [anon_sym_RBRACK] = ACTIONS(455),
        [anon_sym_assembly] = ACTIONS(159),
        [anon_sym_module] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(101),
    },
    [334] = {
        [ts_builtin_sym_end] = ACTIONS(867),
        [anon_sym_namespace] = ACTIONS(1126),
        [anon_sym_class] = ACTIONS(1128),
        [anon_sym_unsafe] = ACTIONS(1128),
        [anon_sym_abstract] = ACTIONS(1128),
        [anon_sym_sealed] = ACTIONS(1128),
        [anon_sym_static] = ACTIONS(1128),
        [anon_sym_new] = ACTIONS(1128),
        [anon_sym_public] = ACTIONS(1128),
        [anon_sym_protected] = ACTIONS(1128),
        [anon_sym_internal] = ACTIONS(1128),
        [anon_sym_private] = ACTIONS(1128),
        [anon_sym_struct] = ACTIONS(1128),
        [anon_sym_enum] = ACTIONS(1128),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(1128),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [sym_const_keyword] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(1134),
        [sym_comment] = ACTIONS(101),
    },
    [335] = {
        [sym_variable_declaration] = STATE(488),
        [sym__type] = STATE(207),
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
    [336] = {
        [sym__expression] = STATE(94),
        [sym__literal] = STATE(95),
        [sym_boolean_literal] = STATE(90),
        [sym_character_literal] = STATE(90),
        [sym_integer_literal] = STATE(90),
        [sym_real_literal] = STATE(90),
        [sym_string_literal] = STATE(90),
        [sym__regular_string_literal] = STATE(96),
        [sym__verbatim_string_literal] = STATE(96),
        [anon_sym_true] = ACTIONS(1138),
        [anon_sym_false] = ACTIONS(1138),
        [anon_sym_SQUOTE] = ACTIONS(325),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(327),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(329),
        [sym_null_literal] = ACTIONS(1140),
        [anon_sym_DOT] = ACTIONS(333),
        [anon_sym_DQUOTE] = ACTIONS(335),
        [anon_sym_AT_DQUOTE] = ACTIONS(337),
        [sym_global] = ACTIONS(907),
        [sym_identifier_name] = ACTIONS(909),
        [sym_comment] = ACTIONS(101),
    },
    [337] = {
        [sym__unicode_escape_sequence] = STATE(118),
        [sym__simple_escape_sequence] = STATE(118),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_RPAREN] = ACTIONS(439),
        [sym_params_keyword] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(439),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1142),
        [sym__hexadecimal_escape_sequence] = ACTIONS(343),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(345),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(345),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(347),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(347),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(347),
        [anon_sym_BSLASH0] = ACTIONS(347),
        [anon_sym_BSLASHa] = ACTIONS(347),
        [anon_sym_BSLASHb] = ACTIONS(347),
        [anon_sym_BSLASHf] = ACTIONS(347),
        [anon_sym_BSLASHn] = ACTIONS(347),
        [anon_sym_BSLASHr] = ACTIONS(347),
        [anon_sym_BSLASHt] = ACTIONS(347),
        [anon_sym_BSLASHv] = ACTIONS(347),
        [sym_comment] = ACTIONS(101),
    },
    [338] = {
        [anon_sym_SQUOTE] = ACTIONS(437),
        [sym__hexadecimal_escape_sequence] = ACTIONS(385),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(387),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(387),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(387),
        [anon_sym_BSLASH0] = ACTIONS(387),
        [anon_sym_BSLASHa] = ACTIONS(387),
        [anon_sym_BSLASHb] = ACTIONS(387),
        [anon_sym_BSLASHf] = ACTIONS(387),
        [anon_sym_BSLASHn] = ACTIONS(387),
        [anon_sym_BSLASHr] = ACTIONS(387),
        [anon_sym_BSLASHt] = ACTIONS(387),
        [anon_sym_BSLASHv] = ACTIONS(387),
        [anon_sym_DQUOTE] = ACTIONS(387),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1144),
        [sym_comment] = ACTIONS(101),
    },
    [339] = {
        [anon_sym_SEMI] = ACTIONS(1146),
        [anon_sym_RBRACE] = ACTIONS(1146),
        [anon_sym_COMMA] = ACTIONS(1146),
        [anon_sym_RPAREN] = ACTIONS(1146),
        [sym_params_keyword] = ACTIONS(1146),
        [anon_sym_LBRACK] = ACTIONS(1146),
        [sym__integer_type_suffix] = ACTIONS(351),
        [anon_sym_DOT] = ACTIONS(353),
        [sym__real_type_suffix] = ACTIONS(1150),
        [sym__exponent_part] = ACTIONS(1152),
        [sym_comment] = ACTIONS(101),
    },
    [340] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1154),
        [sym_identifier_name] = ACTIONS(875),
        [sym_comment] = ACTIONS(101),
    },
    [341] = {
        [anon_sym_SEMI] = ACTIONS(1156),
        [anon_sym_RBRACE] = ACTIONS(1156),
        [anon_sym_COMMA] = ACTIONS(1156),
        [anon_sym_RPAREN] = ACTIONS(1156),
        [sym_params_keyword] = ACTIONS(1156),
        [anon_sym_LBRACK] = ACTIONS(1156),
        [sym_comment] = ACTIONS(101),
    },
    [342] = {
        [anon_sym_SEMI] = ACTIONS(1161),
        [anon_sym_RBRACE] = ACTIONS(1161),
        [anon_sym_COMMA] = ACTIONS(1161),
        [anon_sym_RPAREN] = ACTIONS(1161),
        [sym_params_keyword] = ACTIONS(1161),
        [anon_sym_LBRACK] = ACTIONS(1161),
        [sym__real_type_suffix] = ACTIONS(1165),
        [sym_comment] = ACTIONS(101),
    },
    [343] = {
        [sym__unicode_escape_sequence] = STATE(99),
        [sym__simple_escape_sequence] = STATE(99),
        [sym__regular_string_literal_character] = STATE(103),
        [aux_sym__regular_string_literal_repeat1] = STATE(104),
        [anon_sym_SEMI] = ACTIONS(1167),
        [anon_sym_RBRACE] = ACTIONS(1167),
        [anon_sym_COMMA] = ACTIONS(1167),
        [anon_sym_RPAREN] = ACTIONS(1167),
        [sym_params_keyword] = ACTIONS(1167),
        [anon_sym_LBRACK] = ACTIONS(1167),
        [sym__hexadecimal_escape_sequence] = ACTIONS(363),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(365),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(365),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(367),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(367),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(367),
        [anon_sym_BSLASH0] = ACTIONS(367),
        [anon_sym_BSLASHa] = ACTIONS(367),
        [anon_sym_BSLASHb] = ACTIONS(367),
        [anon_sym_BSLASHf] = ACTIONS(367),
        [anon_sym_BSLASHn] = ACTIONS(367),
        [anon_sym_BSLASHr] = ACTIONS(367),
        [anon_sym_BSLASHt] = ACTIONS(367),
        [anon_sym_BSLASHv] = ACTIONS(367),
        [anon_sym_DQUOTE] = ACTIONS(369),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1171),
        [sym_comment] = ACTIONS(101),
    },
    [344] = {
        [anon_sym_LBRACE] = ACTIONS(1173),
        [anon_sym_COMMA] = ACTIONS(1173),
        [anon_sym_LBRACK] = ACTIONS(1173),
        [anon_sym_GT] = ACTIONS(1173),
        [sym_identifier_name] = ACTIONS(1176),
        [sym_comment] = ACTIONS(101),
    },
    [345] = {
        [sym_parameter_list] = STATE(359),
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(375),
        [sym_type_parameter_list] = STATE(377),
        [anon_sym_SEMI] = ACTIONS(1179),
        [anon_sym_LBRACE] = ACTIONS(1183),
        [anon_sym_RBRACE] = ACTIONS(1186),
        [anon_sym_COLON] = ACTIONS(1189),
        [anon_sym_COMMA] = ACTIONS(1191),
        [anon_sym_LPAREN] = ACTIONS(1200),
        [anon_sym_RPAREN] = ACTIONS(1202),
        [sym_params_keyword] = ACTIONS(1208),
        [anon_sym_LBRACK] = ACTIONS(1212),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(1217),
        [anon_sym_DOT] = ACTIONS(1219),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(1223),
        [sym_comment] = ACTIONS(101),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(1225),
        [anon_sym_namespace] = ACTIONS(1228),
        [anon_sym_RBRACE] = ACTIONS(1231),
        [anon_sym_class] = ACTIONS(1236),
        [anon_sym_unsafe] = ACTIONS(1236),
        [anon_sym_abstract] = ACTIONS(1236),
        [anon_sym_sealed] = ACTIONS(1236),
        [anon_sym_static] = ACTIONS(1236),
        [anon_sym_new] = ACTIONS(1236),
        [anon_sym_public] = ACTIONS(1236),
        [anon_sym_protected] = ACTIONS(1236),
        [anon_sym_internal] = ACTIONS(1236),
        [anon_sym_private] = ACTIONS(1236),
        [anon_sym_struct] = ACTIONS(1236),
        [anon_sym_enum] = ACTIONS(1236),
        [anon_sym_sbyte] = ACTIONS(1241),
        [anon_sym_byte] = ACTIONS(1241),
        [anon_sym_short] = ACTIONS(1241),
        [anon_sym_ushort] = ACTIONS(1241),
        [anon_sym_int] = ACTIONS(1241),
        [anon_sym_uint] = ACTIONS(1241),
        [anon_sym_long] = ACTIONS(1241),
        [anon_sym_ulong] = ACTIONS(1241),
        [anon_sym_char] = ACTIONS(1241),
        [anon_sym_delegate] = ACTIONS(1236),
        [anon_sym_LBRACK] = ACTIONS(1231),
        [sym_const_keyword] = ACTIONS(1241),
        [anon_sym_readonly] = ACTIONS(1241),
        [anon_sym_volatile] = ACTIONS(1241),
        [anon_sym_bool] = ACTIONS(1241),
        [anon_sym_decimal] = ACTIONS(1241),
        [anon_sym_double] = ACTIONS(1241),
        [anon_sym_float] = ACTIONS(1241),
        [anon_sym_object] = ACTIONS(1241),
        [anon_sym_string] = ACTIONS(1241),
        [sym_identifier_name] = ACTIONS(1244),
        [sym_comment] = ACTIONS(101),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(1247),
        [anon_sym_extern] = ACTIONS(1247),
        [anon_sym_using] = ACTIONS(1247),
        [anon_sym_namespace] = ACTIONS(1247),
        [anon_sym_class] = ACTIONS(1247),
        [anon_sym_unsafe] = ACTIONS(1247),
        [anon_sym_abstract] = ACTIONS(1247),
        [anon_sym_sealed] = ACTIONS(1247),
        [anon_sym_static] = ACTIONS(1247),
        [anon_sym_new] = ACTIONS(1247),
        [anon_sym_public] = ACTIONS(1247),
        [anon_sym_protected] = ACTIONS(1247),
        [anon_sym_internal] = ACTIONS(1247),
        [anon_sym_private] = ACTIONS(1247),
        [anon_sym_struct] = ACTIONS(1247),
        [anon_sym_enum] = ACTIONS(1247),
        [anon_sym_delegate] = ACTIONS(1247),
        [anon_sym_LBRACK] = ACTIONS(1247),
        [sym_comment] = ACTIONS(101),
    },
    [348] = {
        [ts_builtin_sym_end] = ACTIONS(1250),
        [anon_sym_using] = ACTIONS(1250),
        [anon_sym_namespace] = ACTIONS(1250),
        [anon_sym_class] = ACTIONS(1250),
        [anon_sym_unsafe] = ACTIONS(1250),
        [anon_sym_abstract] = ACTIONS(1250),
        [anon_sym_sealed] = ACTIONS(1250),
        [anon_sym_static] = ACTIONS(1250),
        [anon_sym_new] = ACTIONS(1250),
        [anon_sym_public] = ACTIONS(1250),
        [anon_sym_protected] = ACTIONS(1250),
        [anon_sym_internal] = ACTIONS(1250),
        [anon_sym_private] = ACTIONS(1250),
        [anon_sym_struct] = ACTIONS(1250),
        [anon_sym_enum] = ACTIONS(1250),
        [anon_sym_delegate] = ACTIONS(1250),
        [anon_sym_LBRACK] = ACTIONS(1250),
        [sym_comment] = ACTIONS(101),
    },
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(1225),
        [anon_sym_namespace] = ACTIONS(1225),
        [anon_sym_RBRACE] = ACTIONS(1225),
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
        [sym_comment] = ACTIONS(101),
    },
    [350] = {
        [anon_sym_class] = ACTIONS(1253),
        [sym_comment] = ACTIONS(101),
    },
    [351] = {
        [anon_sym_class] = ACTIONS(1255),
        [sym_comment] = ACTIONS(101),
    },
    [352] = {
        [anon_sym_struct] = ACTIONS(1258),
        [sym_comment] = ACTIONS(101),
    },
    [353] = {
        [anon_sym_struct] = ACTIONS(1260),
        [sym_comment] = ACTIONS(101),
    },
    [354] = {
        [aux_sym_enum_declaration_repeat1] = STATE(384),
        [anon_sym_RBRACE] = ACTIONS(1263),
        [anon_sym_COMMA] = ACTIONS(1267),
        [sym_comment] = ACTIONS(101),
    },
    [355] = {
        [anon_sym_enum] = ACTIONS(1271),
        [sym_comment] = ACTIONS(101),
    },
    [356] = {
        [anon_sym_LBRACE] = ACTIONS(1273),
        [sym_comment] = ACTIONS(101),
    },
    [357] = {
        [anon_sym_delegate] = ACTIONS(1275),
        [sym_comment] = ACTIONS(101),
    },
    [358] = {
        [sym_identifier_name] = ACTIONS(1277),
        [sym_comment] = ACTIONS(101),
    },
    [359] = {
        [anon_sym_SEMI] = ACTIONS(1279),
        [sym_comment] = ACTIONS(101),
    },
    [360] = {
        [sym_parameter_array] = STATE(152),
        [sym__attributes] = STATE(153),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(154),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1281),
        [anon_sym_RPAREN] = ACTIONS(1285),
        [sym_params_keyword] = ACTIONS(1289),
        [anon_sym_LBRACK] = ACTIONS(1293),
        [sym_comment] = ACTIONS(101),
    },
    [361] = {
        [sym__type] = STATE(411),
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
    [362] = {
        [anon_sym_RPAREN] = ACTIONS(1297),
        [sym_comment] = ACTIONS(101),
    },
    [363] = {
        [sym_identifier_name] = ACTIONS(1301),
        [sym_comment] = ACTIONS(101),
    },
    [364] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_parameter_modifier] = STATE(123),
        [sym_field_modifiers] = STATE(225),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(221),
        [sym__type] = STATE(407),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(651),
        [anon_sym_enum] = ACTIONS(653),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(655),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [sym_params_keyword] = ACTIONS(315),
        [sym_const_keyword] = ACTIONS(657),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1303),
        [sym_comment] = ACTIONS(101),
    },
    [365] = {
        [anon_sym_class] = ACTIONS(1305),
        [anon_sym_unsafe] = ACTIONS(1305),
        [anon_sym_abstract] = ACTIONS(1305),
        [anon_sym_sealed] = ACTIONS(1305),
        [anon_sym_static] = ACTIONS(1305),
        [anon_sym_new] = ACTIONS(1305),
        [anon_sym_public] = ACTIONS(1305),
        [anon_sym_protected] = ACTIONS(1305),
        [anon_sym_internal] = ACTIONS(1305),
        [anon_sym_private] = ACTIONS(1305),
        [anon_sym_struct] = ACTIONS(1305),
        [anon_sym_enum] = ACTIONS(1305),
        [anon_sym_sbyte] = ACTIONS(1305),
        [anon_sym_byte] = ACTIONS(1305),
        [anon_sym_short] = ACTIONS(1305),
        [anon_sym_ushort] = ACTIONS(1305),
        [anon_sym_int] = ACTIONS(1305),
        [anon_sym_uint] = ACTIONS(1305),
        [anon_sym_long] = ACTIONS(1305),
        [anon_sym_ulong] = ACTIONS(1305),
        [anon_sym_char] = ACTIONS(1305),
        [anon_sym_delegate] = ACTIONS(1305),
        [anon_sym_ref] = ACTIONS(1305),
        [anon_sym_out] = ACTIONS(1305),
        [anon_sym_this] = ACTIONS(1305),
        [sym_params_keyword] = ACTIONS(1305),
        [anon_sym_LBRACK] = ACTIONS(1308),
        [sym_const_keyword] = ACTIONS(1305),
        [anon_sym_readonly] = ACTIONS(1305),
        [anon_sym_volatile] = ACTIONS(1305),
        [anon_sym_bool] = ACTIONS(1305),
        [anon_sym_decimal] = ACTIONS(1305),
        [anon_sym_double] = ACTIONS(1305),
        [anon_sym_float] = ACTIONS(1305),
        [anon_sym_object] = ACTIONS(1305),
        [anon_sym_string] = ACTIONS(1305),
        [sym_identifier_name] = ACTIONS(1311),
        [sym_comment] = ACTIONS(101),
    },
    [366] = {
        [anon_sym_RBRACK] = ACTIONS(1314),
        [sym_comment] = ACTIONS(101),
    },
    [367] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(1316),
        [anon_sym_RBRACK] = ACTIONS(1320),
        [sym_comment] = ACTIONS(101),
    },
    [368] = {
        [ts_builtin_sym_end] = ACTIONS(1324),
        [anon_sym_namespace] = ACTIONS(1324),
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
        [anon_sym_delegate] = ACTIONS(1324),
        [anon_sym_LBRACK] = ACTIONS(1324),
        [sym_comment] = ACTIONS(101),
    },
    [369] = {
        [anon_sym_RBRACE] = ACTIONS(1327),
        [anon_sym_class] = ACTIONS(1241),
        [anon_sym_unsafe] = ACTIONS(1241),
        [anon_sym_abstract] = ACTIONS(1241),
        [anon_sym_sealed] = ACTIONS(1241),
        [anon_sym_static] = ACTIONS(1241),
        [anon_sym_new] = ACTIONS(1241),
        [anon_sym_public] = ACTIONS(1241),
        [anon_sym_protected] = ACTIONS(1241),
        [anon_sym_internal] = ACTIONS(1241),
        [anon_sym_private] = ACTIONS(1241),
        [anon_sym_struct] = ACTIONS(1241),
        [anon_sym_enum] = ACTIONS(1241),
        [anon_sym_sbyte] = ACTIONS(1241),
        [anon_sym_byte] = ACTIONS(1241),
        [anon_sym_short] = ACTIONS(1241),
        [anon_sym_ushort] = ACTIONS(1241),
        [anon_sym_int] = ACTIONS(1241),
        [anon_sym_uint] = ACTIONS(1241),
        [anon_sym_long] = ACTIONS(1241),
        [anon_sym_ulong] = ACTIONS(1241),
        [anon_sym_char] = ACTIONS(1241),
        [anon_sym_delegate] = ACTIONS(1241),
        [anon_sym_LBRACK] = ACTIONS(1327),
        [sym_const_keyword] = ACTIONS(1241),
        [anon_sym_readonly] = ACTIONS(1241),
        [anon_sym_volatile] = ACTIONS(1241),
        [anon_sym_bool] = ACTIONS(1241),
        [anon_sym_decimal] = ACTIONS(1241),
        [anon_sym_double] = ACTIONS(1241),
        [anon_sym_float] = ACTIONS(1241),
        [anon_sym_object] = ACTIONS(1241),
        [anon_sym_string] = ACTIONS(1241),
        [sym_identifier_name] = ACTIONS(1244),
        [sym_comment] = ACTIONS(101),
    },
    [370] = {
        [sym_variable_declaration] = STATE(401),
        [sym__type] = STATE(207),
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
        [sym_const_keyword] = ACTIONS(1330),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [371] = {
        [anon_sym_sbyte] = ACTIONS(1332),
        [anon_sym_byte] = ACTIONS(1332),
        [anon_sym_short] = ACTIONS(1332),
        [anon_sym_ushort] = ACTIONS(1332),
        [anon_sym_int] = ACTIONS(1332),
        [anon_sym_uint] = ACTIONS(1332),
        [anon_sym_long] = ACTIONS(1332),
        [anon_sym_ulong] = ACTIONS(1332),
        [anon_sym_char] = ACTIONS(1332),
        [sym_const_keyword] = ACTIONS(1332),
        [anon_sym_bool] = ACTIONS(1332),
        [anon_sym_decimal] = ACTIONS(1332),
        [anon_sym_double] = ACTIONS(1332),
        [anon_sym_float] = ACTIONS(1332),
        [anon_sym_object] = ACTIONS(1332),
        [anon_sym_string] = ACTIONS(1332),
        [sym_identifier_name] = ACTIONS(1335),
        [sym_comment] = ACTIONS(101),
    },
    [372] = {
        [anon_sym_SEMI] = ACTIONS(1338),
        [sym_comment] = ACTIONS(101),
    },
    [373] = {
        [sym_array_rank_specifier] = STATE(133),
        [sym_variable_declarator] = STATE(212),
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_LBRACK] = ACTIONS(451),
        [anon_sym_GT] = ACTIONS(477),
        [sym_identifier_name] = ACTIONS(1340),
        [sym_comment] = ACTIONS(101),
    },
    [374] = {
        [aux_sym_variable_declaration_repeat1] = STATE(214),
        [anon_sym_SEMI] = ACTIONS(1343),
        [anon_sym_COMMA] = ACTIONS(1347),
        [sym_comment] = ACTIONS(101),
    },
    [375] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_RBRACE] = ACTIONS(1351),
        [anon_sym_COMMA] = ACTIONS(1354),
        [anon_sym_RPAREN] = ACTIONS(1361),
        [sym_params_keyword] = ACTIONS(1361),
        [anon_sym_LBRACK] = ACTIONS(1361),
        [sym_comment] = ACTIONS(101),
    },
    [376] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1365),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1368),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1368),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1368),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1368),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1368),
        [anon_sym_BSLASH0] = ACTIONS(1368),
        [anon_sym_BSLASHa] = ACTIONS(1368),
        [anon_sym_BSLASHb] = ACTIONS(1368),
        [anon_sym_BSLASHf] = ACTIONS(1368),
        [anon_sym_BSLASHn] = ACTIONS(1368),
        [anon_sym_BSLASHr] = ACTIONS(1368),
        [anon_sym_BSLASHt] = ACTIONS(1368),
        [anon_sym_BSLASHv] = ACTIONS(1368),
        [anon_sym_DQUOTE] = ACTIONS(1368),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1365),
        [sym_comment] = ACTIONS(101),
    },
    [377] = {
        [anon_sym_LBRACE] = ACTIONS(1371),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_LBRACK] = ACTIONS(473),
        [anon_sym_GT] = ACTIONS(473),
        [sym_identifier_name] = ACTIONS(475),
        [sym_comment] = ACTIONS(101),
    },
    [378] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(146),
        [anon_sym_COMMA] = ACTIONS(1373),
        [anon_sym_GT] = ACTIONS(1377),
        [sym_comment] = ACTIONS(101),
    },
    [379] = {
        [anon_sym_SEMI] = ACTIONS(1381),
        [anon_sym_LBRACE] = ACTIONS(871),
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [380] = {
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
        [aux_sym_compilation_unit_repeat3] = STATE(389),
        [aux_sym_compilation_unit_repeat4] = STATE(390),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1383),
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
    [381] = {
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
        [ts_builtin_sym_end] = ACTIONS(1386),
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
    [382] = {
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
        [ts_builtin_sym_end] = ACTIONS(1390),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(883),
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
    [383] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1395),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [384] = {
        [anon_sym_RBRACE] = ACTIONS(1397),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [385] = {
        [ts_builtin_sym_end] = ACTIONS(1399),
        [anon_sym_SEMI] = ACTIONS(1405),
        [anon_sym_namespace] = ACTIONS(1407),
        [anon_sym_RBRACE] = ACTIONS(1399),
        [anon_sym_class] = ACTIONS(1407),
        [anon_sym_unsafe] = ACTIONS(1407),
        [anon_sym_abstract] = ACTIONS(1407),
        [anon_sym_sealed] = ACTIONS(1407),
        [anon_sym_static] = ACTIONS(1407),
        [anon_sym_new] = ACTIONS(1407),
        [anon_sym_public] = ACTIONS(1407),
        [anon_sym_protected] = ACTIONS(1407),
        [anon_sym_internal] = ACTIONS(1407),
        [anon_sym_private] = ACTIONS(1407),
        [anon_sym_struct] = ACTIONS(1407),
        [anon_sym_enum] = ACTIONS(1407),
        [anon_sym_sbyte] = ACTIONS(1407),
        [anon_sym_byte] = ACTIONS(1407),
        [anon_sym_short] = ACTIONS(1407),
        [anon_sym_ushort] = ACTIONS(1407),
        [anon_sym_int] = ACTIONS(1407),
        [anon_sym_uint] = ACTIONS(1407),
        [anon_sym_long] = ACTIONS(1407),
        [anon_sym_ulong] = ACTIONS(1407),
        [anon_sym_char] = ACTIONS(1407),
        [anon_sym_delegate] = ACTIONS(1407),
        [anon_sym_LBRACK] = ACTIONS(1399),
        [sym_const_keyword] = ACTIONS(1407),
        [anon_sym_readonly] = ACTIONS(1407),
        [anon_sym_volatile] = ACTIONS(1407),
        [anon_sym_bool] = ACTIONS(1407),
        [anon_sym_decimal] = ACTIONS(1407),
        [anon_sym_double] = ACTIONS(1407),
        [anon_sym_float] = ACTIONS(1407),
        [anon_sym_object] = ACTIONS(1407),
        [anon_sym_string] = ACTIONS(1407),
        [sym_identifier_name] = ACTIONS(1413),
        [sym_comment] = ACTIONS(101),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(1419),
        [anon_sym_namespace] = ACTIONS(1425),
        [anon_sym_RBRACE] = ACTIONS(1419),
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
        [anon_sym_LBRACK] = ACTIONS(1419),
        [sym_const_keyword] = ACTIONS(1425),
        [anon_sym_readonly] = ACTIONS(1425),
        [anon_sym_volatile] = ACTIONS(1425),
        [anon_sym_bool] = ACTIONS(1425),
        [anon_sym_decimal] = ACTIONS(1425),
        [anon_sym_double] = ACTIONS(1425),
        [anon_sym_float] = ACTIONS(1425),
        [anon_sym_object] = ACTIONS(1425),
        [anon_sym_string] = ACTIONS(1425),
        [sym_identifier_name] = ACTIONS(1431),
        [sym_comment] = ACTIONS(101),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(1437),
        [anon_sym_namespace] = ACTIONS(1446),
        [anon_sym_RBRACE] = ACTIONS(1437),
        [anon_sym_class] = ACTIONS(1446),
        [anon_sym_unsafe] = ACTIONS(1446),
        [anon_sym_abstract] = ACTIONS(1446),
        [anon_sym_sealed] = ACTIONS(1446),
        [anon_sym_static] = ACTIONS(1446),
        [anon_sym_new] = ACTIONS(1446),
        [anon_sym_public] = ACTIONS(1446),
        [anon_sym_protected] = ACTIONS(1446),
        [anon_sym_internal] = ACTIONS(1446),
        [anon_sym_private] = ACTIONS(1446),
        [anon_sym_struct] = ACTIONS(1446),
        [anon_sym_enum] = ACTIONS(1446),
        [anon_sym_sbyte] = ACTIONS(1446),
        [anon_sym_byte] = ACTIONS(1446),
        [anon_sym_short] = ACTIONS(1446),
        [anon_sym_ushort] = ACTIONS(1446),
        [anon_sym_int] = ACTIONS(1446),
        [anon_sym_uint] = ACTIONS(1446),
        [anon_sym_long] = ACTIONS(1446),
        [anon_sym_ulong] = ACTIONS(1446),
        [anon_sym_char] = ACTIONS(1446),
        [anon_sym_delegate] = ACTIONS(1446),
        [anon_sym_LBRACK] = ACTIONS(1437),
        [sym_const_keyword] = ACTIONS(1446),
        [anon_sym_readonly] = ACTIONS(1446),
        [anon_sym_volatile] = ACTIONS(1446),
        [anon_sym_bool] = ACTIONS(1446),
        [anon_sym_decimal] = ACTIONS(1446),
        [anon_sym_double] = ACTIONS(1446),
        [anon_sym_float] = ACTIONS(1446),
        [anon_sym_object] = ACTIONS(1446),
        [anon_sym_string] = ACTIONS(1446),
        [sym_identifier_name] = ACTIONS(1455),
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
        [ts_builtin_sym_end] = ACTIONS(1464),
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
        [aux_sym_compilation_unit_repeat4] = STATE(391),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1468),
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
    [390] = {
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
        [ts_builtin_sym_end] = ACTIONS(1468),
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
    [391] = {
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
        [ts_builtin_sym_end] = ACTIONS(1471),
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
    [392] = {
        [ts_builtin_sym_end] = ACTIONS(1474),
        [anon_sym_using] = ACTIONS(1474),
        [anon_sym_namespace] = ACTIONS(1474),
        [anon_sym_class] = ACTIONS(1474),
        [anon_sym_unsafe] = ACTIONS(1474),
        [anon_sym_abstract] = ACTIONS(1474),
        [anon_sym_sealed] = ACTIONS(1474),
        [anon_sym_static] = ACTIONS(1474),
        [anon_sym_new] = ACTIONS(1474),
        [anon_sym_public] = ACTIONS(1474),
        [anon_sym_protected] = ACTIONS(1474),
        [anon_sym_internal] = ACTIONS(1474),
        [anon_sym_private] = ACTIONS(1474),
        [anon_sym_struct] = ACTIONS(1474),
        [anon_sym_enum] = ACTIONS(1474),
        [anon_sym_delegate] = ACTIONS(1474),
        [anon_sym_LBRACK] = ACTIONS(1474),
        [sym_comment] = ACTIONS(101),
    },
    [393] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(395),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1477),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [394] = {
        [ts_builtin_sym_end] = ACTIONS(1479),
        [anon_sym_namespace] = ACTIONS(1486),
        [anon_sym_RBRACE] = ACTIONS(1479),
        [anon_sym_class] = ACTIONS(1486),
        [anon_sym_unsafe] = ACTIONS(1486),
        [anon_sym_abstract] = ACTIONS(1486),
        [anon_sym_sealed] = ACTIONS(1486),
        [anon_sym_static] = ACTIONS(1486),
        [anon_sym_new] = ACTIONS(1486),
        [anon_sym_public] = ACTIONS(1486),
        [anon_sym_protected] = ACTIONS(1486),
        [anon_sym_internal] = ACTIONS(1486),
        [anon_sym_private] = ACTIONS(1486),
        [anon_sym_struct] = ACTIONS(1486),
        [anon_sym_enum] = ACTIONS(1486),
        [anon_sym_sbyte] = ACTIONS(1486),
        [anon_sym_byte] = ACTIONS(1486),
        [anon_sym_short] = ACTIONS(1486),
        [anon_sym_ushort] = ACTIONS(1486),
        [anon_sym_int] = ACTIONS(1486),
        [anon_sym_uint] = ACTIONS(1486),
        [anon_sym_long] = ACTIONS(1486),
        [anon_sym_ulong] = ACTIONS(1486),
        [anon_sym_char] = ACTIONS(1486),
        [anon_sym_delegate] = ACTIONS(1486),
        [anon_sym_LBRACK] = ACTIONS(1479),
        [sym_const_keyword] = ACTIONS(1486),
        [anon_sym_readonly] = ACTIONS(1486),
        [anon_sym_volatile] = ACTIONS(1486),
        [anon_sym_bool] = ACTIONS(1486),
        [anon_sym_decimal] = ACTIONS(1486),
        [anon_sym_double] = ACTIONS(1486),
        [anon_sym_float] = ACTIONS(1486),
        [anon_sym_object] = ACTIONS(1486),
        [anon_sym_string] = ACTIONS(1486),
        [sym_identifier_name] = ACTIONS(1493),
        [sym_comment] = ACTIONS(101),
    },
    [395] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1500),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(1502),
        [anon_sym_namespace] = ACTIONS(1509),
        [anon_sym_RBRACE] = ACTIONS(1502),
        [anon_sym_class] = ACTIONS(1509),
        [anon_sym_unsafe] = ACTIONS(1509),
        [anon_sym_abstract] = ACTIONS(1509),
        [anon_sym_sealed] = ACTIONS(1509),
        [anon_sym_static] = ACTIONS(1509),
        [anon_sym_new] = ACTIONS(1509),
        [anon_sym_public] = ACTIONS(1509),
        [anon_sym_protected] = ACTIONS(1509),
        [anon_sym_internal] = ACTIONS(1509),
        [anon_sym_private] = ACTIONS(1509),
        [anon_sym_struct] = ACTIONS(1509),
        [anon_sym_enum] = ACTIONS(1509),
        [anon_sym_sbyte] = ACTIONS(1509),
        [anon_sym_byte] = ACTIONS(1509),
        [anon_sym_short] = ACTIONS(1509),
        [anon_sym_ushort] = ACTIONS(1509),
        [anon_sym_int] = ACTIONS(1509),
        [anon_sym_uint] = ACTIONS(1509),
        [anon_sym_long] = ACTIONS(1509),
        [anon_sym_ulong] = ACTIONS(1509),
        [anon_sym_char] = ACTIONS(1509),
        [anon_sym_delegate] = ACTIONS(1509),
        [anon_sym_LBRACK] = ACTIONS(1502),
        [sym_const_keyword] = ACTIONS(1509),
        [anon_sym_readonly] = ACTIONS(1509),
        [anon_sym_volatile] = ACTIONS(1509),
        [anon_sym_bool] = ACTIONS(1509),
        [anon_sym_decimal] = ACTIONS(1509),
        [anon_sym_double] = ACTIONS(1509),
        [anon_sym_float] = ACTIONS(1509),
        [anon_sym_object] = ACTIONS(1509),
        [anon_sym_string] = ACTIONS(1509),
        [sym_identifier_name] = ACTIONS(1516),
        [sym_comment] = ACTIONS(101),
    },
    [397] = {
        [sym_equals_value_clause] = STATE(398),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_COMMA] = ACTIONS(1523),
        [anon_sym_RPAREN] = ACTIONS(1528),
        [sym_params_keyword] = ACTIONS(1528),
        [anon_sym_LBRACK] = ACTIONS(1528),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [398] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_COMMA] = ACTIONS(1532),
        [anon_sym_RPAREN] = ACTIONS(1361),
        [sym_params_keyword] = ACTIONS(1361),
        [anon_sym_LBRACK] = ACTIONS(1361),
        [sym_comment] = ACTIONS(101),
    },
    [399] = {
        [anon_sym_RBRACE] = ACTIONS(1537),
        [anon_sym_class] = ACTIONS(1542),
        [anon_sym_unsafe] = ACTIONS(1542),
        [anon_sym_abstract] = ACTIONS(1542),
        [anon_sym_sealed] = ACTIONS(1542),
        [anon_sym_static] = ACTIONS(1542),
        [anon_sym_new] = ACTIONS(1542),
        [anon_sym_public] = ACTIONS(1542),
        [anon_sym_protected] = ACTIONS(1542),
        [anon_sym_internal] = ACTIONS(1542),
        [anon_sym_private] = ACTIONS(1542),
        [anon_sym_struct] = ACTIONS(1542),
        [anon_sym_enum] = ACTIONS(1542),
        [anon_sym_sbyte] = ACTIONS(1542),
        [anon_sym_byte] = ACTIONS(1542),
        [anon_sym_short] = ACTIONS(1542),
        [anon_sym_ushort] = ACTIONS(1542),
        [anon_sym_int] = ACTIONS(1542),
        [anon_sym_uint] = ACTIONS(1542),
        [anon_sym_long] = ACTIONS(1542),
        [anon_sym_ulong] = ACTIONS(1542),
        [anon_sym_char] = ACTIONS(1542),
        [anon_sym_delegate] = ACTIONS(1542),
        [anon_sym_LBRACK] = ACTIONS(1537),
        [sym_const_keyword] = ACTIONS(1542),
        [anon_sym_readonly] = ACTIONS(1542),
        [anon_sym_volatile] = ACTIONS(1542),
        [anon_sym_bool] = ACTIONS(1542),
        [anon_sym_decimal] = ACTIONS(1542),
        [anon_sym_double] = ACTIONS(1542),
        [anon_sym_float] = ACTIONS(1542),
        [anon_sym_object] = ACTIONS(1542),
        [anon_sym_string] = ACTIONS(1542),
        [sym_identifier_name] = ACTIONS(1547),
        [sym_comment] = ACTIONS(101),
    },
    [400] = {
        [sym_variable_declaration] = STATE(403),
        [sym__type] = STATE(207),
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
    [401] = {
        [anon_sym_SEMI] = ACTIONS(1552),
        [sym_comment] = ACTIONS(101),
    },
    [402] = {
        [anon_sym_RBRACE] = ACTIONS(1554),
        [anon_sym_class] = ACTIONS(1557),
        [anon_sym_unsafe] = ACTIONS(1557),
        [anon_sym_abstract] = ACTIONS(1557),
        [anon_sym_sealed] = ACTIONS(1557),
        [anon_sym_static] = ACTIONS(1557),
        [anon_sym_new] = ACTIONS(1557),
        [anon_sym_public] = ACTIONS(1557),
        [anon_sym_protected] = ACTIONS(1557),
        [anon_sym_internal] = ACTIONS(1557),
        [anon_sym_private] = ACTIONS(1557),
        [anon_sym_struct] = ACTIONS(1557),
        [anon_sym_enum] = ACTIONS(1557),
        [anon_sym_sbyte] = ACTIONS(1557),
        [anon_sym_byte] = ACTIONS(1557),
        [anon_sym_short] = ACTIONS(1557),
        [anon_sym_ushort] = ACTIONS(1557),
        [anon_sym_int] = ACTIONS(1557),
        [anon_sym_uint] = ACTIONS(1557),
        [anon_sym_long] = ACTIONS(1557),
        [anon_sym_ulong] = ACTIONS(1557),
        [anon_sym_char] = ACTIONS(1557),
        [anon_sym_delegate] = ACTIONS(1557),
        [anon_sym_LBRACK] = ACTIONS(1554),
        [sym_const_keyword] = ACTIONS(1557),
        [anon_sym_readonly] = ACTIONS(1557),
        [anon_sym_volatile] = ACTIONS(1557),
        [anon_sym_bool] = ACTIONS(1557),
        [anon_sym_decimal] = ACTIONS(1557),
        [anon_sym_double] = ACTIONS(1557),
        [anon_sym_float] = ACTIONS(1557),
        [anon_sym_object] = ACTIONS(1557),
        [anon_sym_string] = ACTIONS(1557),
        [sym_identifier_name] = ACTIONS(1560),
        [sym_comment] = ACTIONS(101),
    },
    [403] = {
        [anon_sym_SEMI] = ACTIONS(1563),
        [sym_comment] = ACTIONS(101),
    },
    [404] = {
        [anon_sym_RBRACE] = ACTIONS(1565),
        [anon_sym_class] = ACTIONS(1568),
        [anon_sym_unsafe] = ACTIONS(1568),
        [anon_sym_abstract] = ACTIONS(1568),
        [anon_sym_sealed] = ACTIONS(1568),
        [anon_sym_static] = ACTIONS(1568),
        [anon_sym_new] = ACTIONS(1568),
        [anon_sym_public] = ACTIONS(1568),
        [anon_sym_protected] = ACTIONS(1568),
        [anon_sym_internal] = ACTIONS(1568),
        [anon_sym_private] = ACTIONS(1568),
        [anon_sym_struct] = ACTIONS(1568),
        [anon_sym_enum] = ACTIONS(1568),
        [anon_sym_sbyte] = ACTIONS(1568),
        [anon_sym_byte] = ACTIONS(1568),
        [anon_sym_short] = ACTIONS(1568),
        [anon_sym_ushort] = ACTIONS(1568),
        [anon_sym_int] = ACTIONS(1568),
        [anon_sym_uint] = ACTIONS(1568),
        [anon_sym_long] = ACTIONS(1568),
        [anon_sym_ulong] = ACTIONS(1568),
        [anon_sym_char] = ACTIONS(1568),
        [anon_sym_delegate] = ACTIONS(1568),
        [anon_sym_LBRACK] = ACTIONS(1565),
        [sym_const_keyword] = ACTIONS(1568),
        [anon_sym_readonly] = ACTIONS(1568),
        [anon_sym_volatile] = ACTIONS(1568),
        [anon_sym_bool] = ACTIONS(1568),
        [anon_sym_decimal] = ACTIONS(1568),
        [anon_sym_double] = ACTIONS(1568),
        [anon_sym_float] = ACTIONS(1568),
        [anon_sym_object] = ACTIONS(1568),
        [anon_sym_string] = ACTIONS(1568),
        [sym_identifier_name] = ACTIONS(1571),
        [sym_comment] = ACTIONS(101),
    },
    [405] = {
        [ts_builtin_sym_end] = ACTIONS(867),
        [anon_sym_namespace] = ACTIONS(1126),
        [anon_sym_class] = ACTIONS(1128),
        [anon_sym_unsafe] = ACTIONS(1128),
        [anon_sym_abstract] = ACTIONS(1128),
        [anon_sym_sealed] = ACTIONS(1128),
        [anon_sym_static] = ACTIONS(1128),
        [anon_sym_new] = ACTIONS(1128),
        [anon_sym_public] = ACTIONS(1128),
        [anon_sym_protected] = ACTIONS(1128),
        [anon_sym_internal] = ACTIONS(1128),
        [anon_sym_private] = ACTIONS(1128),
        [anon_sym_struct] = ACTIONS(1128),
        [anon_sym_enum] = ACTIONS(1128),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(1128),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(1131),
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
    [406] = {
        [sym_equals_value_clause] = STATE(174),
        [sym_type_parameter_list] = STATE(141),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_EQ] = ACTIONS(321),
        [anon_sym_LT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [407] = {
        [sym_variable_declarator] = STATE(212),
        [sym_identifier_name] = ACTIONS(1574),
        [sym_comment] = ACTIONS(101),
    },
    [408] = {
        [sym_equals_value_clause] = STATE(409),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_COMMA] = ACTIONS(1576),
        [anon_sym_RPAREN] = ACTIONS(339),
        [sym_params_keyword] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [409] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_COMMA] = ACTIONS(1579),
        [anon_sym_RPAREN] = ACTIONS(443),
        [sym_params_keyword] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [sym_comment] = ACTIONS(101),
    },
    [410] = {
        [anon_sym_RPAREN] = ACTIONS(1582),
        [sym_comment] = ACTIONS(101),
    },
    [411] = {
        [sym_identifier_name] = ACTIONS(1585),
        [sym_comment] = ACTIONS(101),
    },
    [412] = {
        [sym_equals_value_clause] = STATE(413),
        [anon_sym_COMMA] = ACTIONS(1587),
        [anon_sym_RPAREN] = ACTIONS(1587),
        [sym_params_keyword] = ACTIONS(1587),
        [anon_sym_LBRACK] = ACTIONS(1587),
        [anon_sym_EQ] = ACTIONS(321),
        [sym_comment] = ACTIONS(101),
    },
    [413] = {
        [anon_sym_COMMA] = ACTIONS(1590),
        [anon_sym_RPAREN] = ACTIONS(1590),
        [sym_params_keyword] = ACTIONS(1590),
        [anon_sym_LBRACK] = ACTIONS(1590),
        [sym_comment] = ACTIONS(101),
    },
    [414] = {
        [ts_builtin_sym_end] = ACTIONS(1593),
        [anon_sym_namespace] = ACTIONS(1597),
        [anon_sym_RBRACE] = ACTIONS(1593),
        [anon_sym_class] = ACTIONS(1597),
        [anon_sym_unsafe] = ACTIONS(1597),
        [anon_sym_abstract] = ACTIONS(1597),
        [anon_sym_sealed] = ACTIONS(1597),
        [anon_sym_static] = ACTIONS(1597),
        [anon_sym_new] = ACTIONS(1597),
        [anon_sym_public] = ACTIONS(1597),
        [anon_sym_protected] = ACTIONS(1597),
        [anon_sym_internal] = ACTIONS(1597),
        [anon_sym_private] = ACTIONS(1597),
        [anon_sym_struct] = ACTIONS(1597),
        [anon_sym_enum] = ACTIONS(1597),
        [anon_sym_sbyte] = ACTIONS(1597),
        [anon_sym_byte] = ACTIONS(1597),
        [anon_sym_short] = ACTIONS(1597),
        [anon_sym_ushort] = ACTIONS(1597),
        [anon_sym_int] = ACTIONS(1597),
        [anon_sym_uint] = ACTIONS(1597),
        [anon_sym_long] = ACTIONS(1597),
        [anon_sym_ulong] = ACTIONS(1597),
        [anon_sym_char] = ACTIONS(1597),
        [anon_sym_delegate] = ACTIONS(1597),
        [anon_sym_LBRACK] = ACTIONS(1593),
        [sym_const_keyword] = ACTIONS(1597),
        [anon_sym_readonly] = ACTIONS(1597),
        [anon_sym_volatile] = ACTIONS(1597),
        [anon_sym_bool] = ACTIONS(1597),
        [anon_sym_decimal] = ACTIONS(1597),
        [anon_sym_double] = ACTIONS(1597),
        [anon_sym_float] = ACTIONS(1597),
        [anon_sym_object] = ACTIONS(1597),
        [anon_sym_string] = ACTIONS(1597),
        [sym_identifier_name] = ACTIONS(1601),
        [sym_comment] = ACTIONS(101),
    },
    [415] = {
        [sym_parameter_list] = STATE(359),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [416] = {
        [sym__return_type] = STATE(417),
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
    [417] = {
        [sym_identifier_name] = ACTIONS(1605),
        [sym_comment] = ACTIONS(101),
    },
    [418] = {
        [sym_parameter_list] = STATE(419),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [419] = {
        [anon_sym_SEMI] = ACTIONS(1607),
        [sym_comment] = ACTIONS(101),
    },
    [420] = {
        [ts_builtin_sym_end] = ACTIONS(1609),
        [anon_sym_namespace] = ACTIONS(1612),
        [anon_sym_RBRACE] = ACTIONS(1609),
        [anon_sym_class] = ACTIONS(1612),
        [anon_sym_unsafe] = ACTIONS(1612),
        [anon_sym_abstract] = ACTIONS(1612),
        [anon_sym_sealed] = ACTIONS(1612),
        [anon_sym_static] = ACTIONS(1612),
        [anon_sym_new] = ACTIONS(1612),
        [anon_sym_public] = ACTIONS(1612),
        [anon_sym_protected] = ACTIONS(1612),
        [anon_sym_internal] = ACTIONS(1612),
        [anon_sym_private] = ACTIONS(1612),
        [anon_sym_struct] = ACTIONS(1612),
        [anon_sym_enum] = ACTIONS(1612),
        [anon_sym_sbyte] = ACTIONS(1612),
        [anon_sym_byte] = ACTIONS(1612),
        [anon_sym_short] = ACTIONS(1612),
        [anon_sym_ushort] = ACTIONS(1612),
        [anon_sym_int] = ACTIONS(1612),
        [anon_sym_uint] = ACTIONS(1612),
        [anon_sym_long] = ACTIONS(1612),
        [anon_sym_ulong] = ACTIONS(1612),
        [anon_sym_char] = ACTIONS(1612),
        [anon_sym_delegate] = ACTIONS(1612),
        [anon_sym_LBRACK] = ACTIONS(1609),
        [sym_const_keyword] = ACTIONS(1612),
        [anon_sym_readonly] = ACTIONS(1612),
        [anon_sym_volatile] = ACTIONS(1612),
        [anon_sym_bool] = ACTIONS(1612),
        [anon_sym_decimal] = ACTIONS(1612),
        [anon_sym_double] = ACTIONS(1612),
        [anon_sym_float] = ACTIONS(1612),
        [anon_sym_object] = ACTIONS(1612),
        [anon_sym_string] = ACTIONS(1612),
        [sym_identifier_name] = ACTIONS(1615),
        [sym_comment] = ACTIONS(101),
    },
    [421] = {
        [sym_enum_member_declaration] = STATE(422),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [422] = {
        [aux_sym_enum_declaration_repeat1] = STATE(424),
        [anon_sym_RBRACE] = ACTIONS(1618),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(1620),
        [anon_sym_SEMI] = ACTIONS(1624),
        [anon_sym_namespace] = ACTIONS(1626),
        [anon_sym_RBRACE] = ACTIONS(1620),
        [anon_sym_class] = ACTIONS(1626),
        [anon_sym_unsafe] = ACTIONS(1626),
        [anon_sym_abstract] = ACTIONS(1626),
        [anon_sym_sealed] = ACTIONS(1626),
        [anon_sym_static] = ACTIONS(1626),
        [anon_sym_new] = ACTIONS(1626),
        [anon_sym_public] = ACTIONS(1626),
        [anon_sym_protected] = ACTIONS(1626),
        [anon_sym_internal] = ACTIONS(1626),
        [anon_sym_private] = ACTIONS(1626),
        [anon_sym_struct] = ACTIONS(1626),
        [anon_sym_enum] = ACTIONS(1626),
        [anon_sym_sbyte] = ACTIONS(1626),
        [anon_sym_byte] = ACTIONS(1626),
        [anon_sym_short] = ACTIONS(1626),
        [anon_sym_ushort] = ACTIONS(1626),
        [anon_sym_int] = ACTIONS(1626),
        [anon_sym_uint] = ACTIONS(1626),
        [anon_sym_long] = ACTIONS(1626),
        [anon_sym_ulong] = ACTIONS(1626),
        [anon_sym_char] = ACTIONS(1626),
        [anon_sym_delegate] = ACTIONS(1626),
        [anon_sym_LBRACK] = ACTIONS(1620),
        [sym_const_keyword] = ACTIONS(1626),
        [anon_sym_readonly] = ACTIONS(1626),
        [anon_sym_volatile] = ACTIONS(1626),
        [anon_sym_bool] = ACTIONS(1626),
        [anon_sym_decimal] = ACTIONS(1626),
        [anon_sym_double] = ACTIONS(1626),
        [anon_sym_float] = ACTIONS(1626),
        [anon_sym_object] = ACTIONS(1626),
        [anon_sym_string] = ACTIONS(1626),
        [sym_identifier_name] = ACTIONS(1630),
        [sym_comment] = ACTIONS(101),
    },
    [424] = {
        [anon_sym_RBRACE] = ACTIONS(1634),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(1636),
        [anon_sym_SEMI] = ACTIONS(1640),
        [anon_sym_namespace] = ACTIONS(1642),
        [anon_sym_RBRACE] = ACTIONS(1636),
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
        [anon_sym_delegate] = ACTIONS(1642),
        [anon_sym_LBRACK] = ACTIONS(1636),
        [sym_const_keyword] = ACTIONS(1642),
        [anon_sym_readonly] = ACTIONS(1642),
        [anon_sym_volatile] = ACTIONS(1642),
        [anon_sym_bool] = ACTIONS(1642),
        [anon_sym_decimal] = ACTIONS(1642),
        [anon_sym_double] = ACTIONS(1642),
        [anon_sym_float] = ACTIONS(1642),
        [anon_sym_object] = ACTIONS(1642),
        [anon_sym_string] = ACTIONS(1642),
        [sym_identifier_name] = ACTIONS(1646),
        [sym_comment] = ACTIONS(101),
    },
    [426] = {
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
        [anon_sym_delegate] = ACTIONS(1654),
        [anon_sym_LBRACK] = ACTIONS(1650),
        [sym_const_keyword] = ACTIONS(1654),
        [anon_sym_readonly] = ACTIONS(1654),
        [anon_sym_volatile] = ACTIONS(1654),
        [anon_sym_bool] = ACTIONS(1654),
        [anon_sym_decimal] = ACTIONS(1654),
        [anon_sym_double] = ACTIONS(1654),
        [anon_sym_float] = ACTIONS(1654),
        [anon_sym_object] = ACTIONS(1654),
        [anon_sym_string] = ACTIONS(1654),
        [sym_identifier_name] = ACTIONS(1658),
        [sym_comment] = ACTIONS(101),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(1636),
        [anon_sym_namespace] = ACTIONS(1642),
        [anon_sym_RBRACE] = ACTIONS(1636),
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
        [anon_sym_delegate] = ACTIONS(1642),
        [anon_sym_LBRACK] = ACTIONS(1636),
        [sym_const_keyword] = ACTIONS(1642),
        [anon_sym_readonly] = ACTIONS(1642),
        [anon_sym_volatile] = ACTIONS(1642),
        [anon_sym_bool] = ACTIONS(1642),
        [anon_sym_decimal] = ACTIONS(1642),
        [anon_sym_double] = ACTIONS(1642),
        [anon_sym_float] = ACTIONS(1642),
        [anon_sym_object] = ACTIONS(1642),
        [anon_sym_string] = ACTIONS(1642),
        [sym_identifier_name] = ACTIONS(1646),
        [sym_comment] = ACTIONS(101),
    },
    [428] = {
        [sym_identifier_name] = ACTIONS(1662),
        [sym_comment] = ACTIONS(101),
    },
    [429] = {
        [anon_sym_LBRACE] = ACTIONS(1664),
        [anon_sym_COLON] = ACTIONS(1666),
        [sym_comment] = ACTIONS(101),
    },
    [430] = {
        [sym_enum_member_declaration] = STATE(440),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [431] = {
        [sym__integral_type] = STATE(432),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [432] = {
        [anon_sym_LBRACE] = ACTIONS(1668),
        [sym_comment] = ACTIONS(101),
    },
    [433] = {
        [sym_enum_member_declaration] = STATE(434),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [434] = {
        [aux_sym_enum_declaration_repeat1] = STATE(436),
        [anon_sym_RBRACE] = ACTIONS(1670),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(1672),
        [anon_sym_SEMI] = ACTIONS(1675),
        [anon_sym_namespace] = ACTIONS(1677),
        [anon_sym_RBRACE] = ACTIONS(1672),
        [anon_sym_class] = ACTIONS(1677),
        [anon_sym_unsafe] = ACTIONS(1677),
        [anon_sym_abstract] = ACTIONS(1677),
        [anon_sym_sealed] = ACTIONS(1677),
        [anon_sym_static] = ACTIONS(1677),
        [anon_sym_new] = ACTIONS(1677),
        [anon_sym_public] = ACTIONS(1677),
        [anon_sym_protected] = ACTIONS(1677),
        [anon_sym_internal] = ACTIONS(1677),
        [anon_sym_private] = ACTIONS(1677),
        [anon_sym_struct] = ACTIONS(1677),
        [anon_sym_enum] = ACTIONS(1677),
        [anon_sym_sbyte] = ACTIONS(1677),
        [anon_sym_byte] = ACTIONS(1677),
        [anon_sym_short] = ACTIONS(1677),
        [anon_sym_ushort] = ACTIONS(1677),
        [anon_sym_int] = ACTIONS(1677),
        [anon_sym_uint] = ACTIONS(1677),
        [anon_sym_long] = ACTIONS(1677),
        [anon_sym_ulong] = ACTIONS(1677),
        [anon_sym_char] = ACTIONS(1677),
        [anon_sym_delegate] = ACTIONS(1677),
        [anon_sym_LBRACK] = ACTIONS(1672),
        [sym_const_keyword] = ACTIONS(1677),
        [anon_sym_readonly] = ACTIONS(1677),
        [anon_sym_volatile] = ACTIONS(1677),
        [anon_sym_bool] = ACTIONS(1677),
        [anon_sym_decimal] = ACTIONS(1677),
        [anon_sym_double] = ACTIONS(1677),
        [anon_sym_float] = ACTIONS(1677),
        [anon_sym_object] = ACTIONS(1677),
        [anon_sym_string] = ACTIONS(1677),
        [sym_identifier_name] = ACTIONS(1680),
        [sym_comment] = ACTIONS(101),
    },
    [436] = {
        [anon_sym_RBRACE] = ACTIONS(1683),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(1685),
        [anon_sym_SEMI] = ACTIONS(1688),
        [anon_sym_namespace] = ACTIONS(1690),
        [anon_sym_RBRACE] = ACTIONS(1685),
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
        [anon_sym_sbyte] = ACTIONS(1690),
        [anon_sym_byte] = ACTIONS(1690),
        [anon_sym_short] = ACTIONS(1690),
        [anon_sym_ushort] = ACTIONS(1690),
        [anon_sym_int] = ACTIONS(1690),
        [anon_sym_uint] = ACTIONS(1690),
        [anon_sym_long] = ACTIONS(1690),
        [anon_sym_ulong] = ACTIONS(1690),
        [anon_sym_char] = ACTIONS(1690),
        [anon_sym_delegate] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1685),
        [sym_const_keyword] = ACTIONS(1690),
        [anon_sym_readonly] = ACTIONS(1690),
        [anon_sym_volatile] = ACTIONS(1690),
        [anon_sym_bool] = ACTIONS(1690),
        [anon_sym_decimal] = ACTIONS(1690),
        [anon_sym_double] = ACTIONS(1690),
        [anon_sym_float] = ACTIONS(1690),
        [anon_sym_object] = ACTIONS(1690),
        [anon_sym_string] = ACTIONS(1690),
        [sym_identifier_name] = ACTIONS(1693),
        [sym_comment] = ACTIONS(101),
    },
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(1696),
        [anon_sym_namespace] = ACTIONS(1699),
        [anon_sym_RBRACE] = ACTIONS(1696),
        [anon_sym_class] = ACTIONS(1699),
        [anon_sym_unsafe] = ACTIONS(1699),
        [anon_sym_abstract] = ACTIONS(1699),
        [anon_sym_sealed] = ACTIONS(1699),
        [anon_sym_static] = ACTIONS(1699),
        [anon_sym_new] = ACTIONS(1699),
        [anon_sym_public] = ACTIONS(1699),
        [anon_sym_protected] = ACTIONS(1699),
        [anon_sym_internal] = ACTIONS(1699),
        [anon_sym_private] = ACTIONS(1699),
        [anon_sym_struct] = ACTIONS(1699),
        [anon_sym_enum] = ACTIONS(1699),
        [anon_sym_sbyte] = ACTIONS(1699),
        [anon_sym_byte] = ACTIONS(1699),
        [anon_sym_short] = ACTIONS(1699),
        [anon_sym_ushort] = ACTIONS(1699),
        [anon_sym_int] = ACTIONS(1699),
        [anon_sym_uint] = ACTIONS(1699),
        [anon_sym_long] = ACTIONS(1699),
        [anon_sym_ulong] = ACTIONS(1699),
        [anon_sym_char] = ACTIONS(1699),
        [anon_sym_delegate] = ACTIONS(1699),
        [anon_sym_LBRACK] = ACTIONS(1696),
        [sym_const_keyword] = ACTIONS(1699),
        [anon_sym_readonly] = ACTIONS(1699),
        [anon_sym_volatile] = ACTIONS(1699),
        [anon_sym_bool] = ACTIONS(1699),
        [anon_sym_decimal] = ACTIONS(1699),
        [anon_sym_double] = ACTIONS(1699),
        [anon_sym_float] = ACTIONS(1699),
        [anon_sym_object] = ACTIONS(1699),
        [anon_sym_string] = ACTIONS(1699),
        [sym_identifier_name] = ACTIONS(1702),
        [sym_comment] = ACTIONS(101),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(1685),
        [anon_sym_namespace] = ACTIONS(1690),
        [anon_sym_RBRACE] = ACTIONS(1685),
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
        [anon_sym_sbyte] = ACTIONS(1690),
        [anon_sym_byte] = ACTIONS(1690),
        [anon_sym_short] = ACTIONS(1690),
        [anon_sym_ushort] = ACTIONS(1690),
        [anon_sym_int] = ACTIONS(1690),
        [anon_sym_uint] = ACTIONS(1690),
        [anon_sym_long] = ACTIONS(1690),
        [anon_sym_ulong] = ACTIONS(1690),
        [anon_sym_char] = ACTIONS(1690),
        [anon_sym_delegate] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1685),
        [sym_const_keyword] = ACTIONS(1690),
        [anon_sym_readonly] = ACTIONS(1690),
        [anon_sym_volatile] = ACTIONS(1690),
        [anon_sym_bool] = ACTIONS(1690),
        [anon_sym_decimal] = ACTIONS(1690),
        [anon_sym_double] = ACTIONS(1690),
        [anon_sym_float] = ACTIONS(1690),
        [anon_sym_object] = ACTIONS(1690),
        [anon_sym_string] = ACTIONS(1690),
        [sym_identifier_name] = ACTIONS(1693),
        [sym_comment] = ACTIONS(101),
    },
    [440] = {
        [aux_sym_enum_declaration_repeat1] = STATE(442),
        [anon_sym_RBRACE] = ACTIONS(1705),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [441] = {
        [ts_builtin_sym_end] = ACTIONS(1707),
        [anon_sym_SEMI] = ACTIONS(1710),
        [anon_sym_namespace] = ACTIONS(1712),
        [anon_sym_RBRACE] = ACTIONS(1707),
        [anon_sym_class] = ACTIONS(1712),
        [anon_sym_unsafe] = ACTIONS(1712),
        [anon_sym_abstract] = ACTIONS(1712),
        [anon_sym_sealed] = ACTIONS(1712),
        [anon_sym_static] = ACTIONS(1712),
        [anon_sym_new] = ACTIONS(1712),
        [anon_sym_public] = ACTIONS(1712),
        [anon_sym_protected] = ACTIONS(1712),
        [anon_sym_internal] = ACTIONS(1712),
        [anon_sym_private] = ACTIONS(1712),
        [anon_sym_struct] = ACTIONS(1712),
        [anon_sym_enum] = ACTIONS(1712),
        [anon_sym_sbyte] = ACTIONS(1712),
        [anon_sym_byte] = ACTIONS(1712),
        [anon_sym_short] = ACTIONS(1712),
        [anon_sym_ushort] = ACTIONS(1712),
        [anon_sym_int] = ACTIONS(1712),
        [anon_sym_uint] = ACTIONS(1712),
        [anon_sym_long] = ACTIONS(1712),
        [anon_sym_ulong] = ACTIONS(1712),
        [anon_sym_char] = ACTIONS(1712),
        [anon_sym_delegate] = ACTIONS(1712),
        [anon_sym_LBRACK] = ACTIONS(1707),
        [sym_const_keyword] = ACTIONS(1712),
        [anon_sym_readonly] = ACTIONS(1712),
        [anon_sym_volatile] = ACTIONS(1712),
        [anon_sym_bool] = ACTIONS(1712),
        [anon_sym_decimal] = ACTIONS(1712),
        [anon_sym_double] = ACTIONS(1712),
        [anon_sym_float] = ACTIONS(1712),
        [anon_sym_object] = ACTIONS(1712),
        [anon_sym_string] = ACTIONS(1712),
        [sym_identifier_name] = ACTIONS(1715),
        [sym_comment] = ACTIONS(101),
    },
    [442] = {
        [anon_sym_RBRACE] = ACTIONS(1718),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(1720),
        [anon_sym_SEMI] = ACTIONS(1723),
        [anon_sym_namespace] = ACTIONS(1725),
        [anon_sym_RBRACE] = ACTIONS(1720),
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
        [anon_sym_LBRACK] = ACTIONS(1720),
        [sym_const_keyword] = ACTIONS(1725),
        [anon_sym_readonly] = ACTIONS(1725),
        [anon_sym_volatile] = ACTIONS(1725),
        [anon_sym_bool] = ACTIONS(1725),
        [anon_sym_decimal] = ACTIONS(1725),
        [anon_sym_double] = ACTIONS(1725),
        [anon_sym_float] = ACTIONS(1725),
        [anon_sym_object] = ACTIONS(1725),
        [anon_sym_string] = ACTIONS(1725),
        [sym_identifier_name] = ACTIONS(1728),
        [sym_comment] = ACTIONS(101),
    },
    [444] = {
        [ts_builtin_sym_end] = ACTIONS(1672),
        [anon_sym_namespace] = ACTIONS(1677),
        [anon_sym_RBRACE] = ACTIONS(1672),
        [anon_sym_class] = ACTIONS(1677),
        [anon_sym_unsafe] = ACTIONS(1677),
        [anon_sym_abstract] = ACTIONS(1677),
        [anon_sym_sealed] = ACTIONS(1677),
        [anon_sym_static] = ACTIONS(1677),
        [anon_sym_new] = ACTIONS(1677),
        [anon_sym_public] = ACTIONS(1677),
        [anon_sym_protected] = ACTIONS(1677),
        [anon_sym_internal] = ACTIONS(1677),
        [anon_sym_private] = ACTIONS(1677),
        [anon_sym_struct] = ACTIONS(1677),
        [anon_sym_enum] = ACTIONS(1677),
        [anon_sym_sbyte] = ACTIONS(1677),
        [anon_sym_byte] = ACTIONS(1677),
        [anon_sym_short] = ACTIONS(1677),
        [anon_sym_ushort] = ACTIONS(1677),
        [anon_sym_int] = ACTIONS(1677),
        [anon_sym_uint] = ACTIONS(1677),
        [anon_sym_long] = ACTIONS(1677),
        [anon_sym_ulong] = ACTIONS(1677),
        [anon_sym_char] = ACTIONS(1677),
        [anon_sym_delegate] = ACTIONS(1677),
        [anon_sym_LBRACK] = ACTIONS(1672),
        [sym_const_keyword] = ACTIONS(1677),
        [anon_sym_readonly] = ACTIONS(1677),
        [anon_sym_volatile] = ACTIONS(1677),
        [anon_sym_bool] = ACTIONS(1677),
        [anon_sym_decimal] = ACTIONS(1677),
        [anon_sym_double] = ACTIONS(1677),
        [anon_sym_float] = ACTIONS(1677),
        [anon_sym_object] = ACTIONS(1677),
        [anon_sym_string] = ACTIONS(1677),
        [sym_identifier_name] = ACTIONS(1680),
        [sym_comment] = ACTIONS(101),
    },
    [445] = {
        [ts_builtin_sym_end] = ACTIONS(1720),
        [anon_sym_namespace] = ACTIONS(1725),
        [anon_sym_RBRACE] = ACTIONS(1720),
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
        [anon_sym_LBRACK] = ACTIONS(1720),
        [sym_const_keyword] = ACTIONS(1725),
        [anon_sym_readonly] = ACTIONS(1725),
        [anon_sym_volatile] = ACTIONS(1725),
        [anon_sym_bool] = ACTIONS(1725),
        [anon_sym_decimal] = ACTIONS(1725),
        [anon_sym_double] = ACTIONS(1725),
        [anon_sym_float] = ACTIONS(1725),
        [anon_sym_object] = ACTIONS(1725),
        [anon_sym_string] = ACTIONS(1725),
        [sym_identifier_name] = ACTIONS(1728),
        [sym_comment] = ACTIONS(101),
    },
    [446] = {
        [ts_builtin_sym_end] = ACTIONS(1731),
        [anon_sym_SEMI] = ACTIONS(1737),
        [anon_sym_namespace] = ACTIONS(1739),
        [anon_sym_RBRACE] = ACTIONS(1731),
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
        [anon_sym_sbyte] = ACTIONS(1739),
        [anon_sym_byte] = ACTIONS(1739),
        [anon_sym_short] = ACTIONS(1739),
        [anon_sym_ushort] = ACTIONS(1739),
        [anon_sym_int] = ACTIONS(1739),
        [anon_sym_uint] = ACTIONS(1739),
        [anon_sym_long] = ACTIONS(1739),
        [anon_sym_ulong] = ACTIONS(1739),
        [anon_sym_char] = ACTIONS(1739),
        [anon_sym_delegate] = ACTIONS(1739),
        [anon_sym_LBRACK] = ACTIONS(1731),
        [sym_const_keyword] = ACTIONS(1739),
        [anon_sym_readonly] = ACTIONS(1739),
        [anon_sym_volatile] = ACTIONS(1739),
        [anon_sym_bool] = ACTIONS(1739),
        [anon_sym_decimal] = ACTIONS(1739),
        [anon_sym_double] = ACTIONS(1739),
        [anon_sym_float] = ACTIONS(1739),
        [anon_sym_object] = ACTIONS(1739),
        [anon_sym_string] = ACTIONS(1739),
        [sym_identifier_name] = ACTIONS(1745),
        [sym_comment] = ACTIONS(101),
    },
    [447] = {
        [ts_builtin_sym_end] = ACTIONS(1399),
        [anon_sym_namespace] = ACTIONS(1407),
        [anon_sym_RBRACE] = ACTIONS(1399),
        [anon_sym_class] = ACTIONS(1407),
        [anon_sym_unsafe] = ACTIONS(1407),
        [anon_sym_abstract] = ACTIONS(1407),
        [anon_sym_sealed] = ACTIONS(1407),
        [anon_sym_static] = ACTIONS(1407),
        [anon_sym_new] = ACTIONS(1407),
        [anon_sym_public] = ACTIONS(1407),
        [anon_sym_protected] = ACTIONS(1407),
        [anon_sym_internal] = ACTIONS(1407),
        [anon_sym_private] = ACTIONS(1407),
        [anon_sym_struct] = ACTIONS(1407),
        [anon_sym_enum] = ACTIONS(1407),
        [anon_sym_sbyte] = ACTIONS(1407),
        [anon_sym_byte] = ACTIONS(1407),
        [anon_sym_short] = ACTIONS(1407),
        [anon_sym_ushort] = ACTIONS(1407),
        [anon_sym_int] = ACTIONS(1407),
        [anon_sym_uint] = ACTIONS(1407),
        [anon_sym_long] = ACTIONS(1407),
        [anon_sym_ulong] = ACTIONS(1407),
        [anon_sym_char] = ACTIONS(1407),
        [anon_sym_delegate] = ACTIONS(1407),
        [anon_sym_LBRACK] = ACTIONS(1399),
        [sym_const_keyword] = ACTIONS(1407),
        [anon_sym_readonly] = ACTIONS(1407),
        [anon_sym_volatile] = ACTIONS(1407),
        [anon_sym_bool] = ACTIONS(1407),
        [anon_sym_decimal] = ACTIONS(1407),
        [anon_sym_double] = ACTIONS(1407),
        [anon_sym_float] = ACTIONS(1407),
        [anon_sym_object] = ACTIONS(1407),
        [anon_sym_string] = ACTIONS(1407),
        [sym_identifier_name] = ACTIONS(1413),
        [sym_comment] = ACTIONS(101),
    },
    [448] = {
        [sym_identifier_name] = ACTIONS(1751),
        [sym_comment] = ACTIONS(101),
    },
    [449] = {
        [sym_type_parameter_list] = STATE(451),
        [anon_sym_LBRACE] = ACTIONS(1753),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [450] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(457),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1755),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [451] = {
        [anon_sym_LBRACE] = ACTIONS(1757),
        [sym_comment] = ACTIONS(101),
    },
    [452] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(454),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1759),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [453] = {
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
    [454] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1770),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [ts_builtin_sym_end] = ACTIONS(1772),
        [anon_sym_namespace] = ACTIONS(1775),
        [anon_sym_RBRACE] = ACTIONS(1772),
        [anon_sym_class] = ACTIONS(1775),
        [anon_sym_unsafe] = ACTIONS(1775),
        [anon_sym_abstract] = ACTIONS(1775),
        [anon_sym_sealed] = ACTIONS(1775),
        [anon_sym_static] = ACTIONS(1775),
        [anon_sym_new] = ACTIONS(1775),
        [anon_sym_public] = ACTIONS(1775),
        [anon_sym_protected] = ACTIONS(1775),
        [anon_sym_internal] = ACTIONS(1775),
        [anon_sym_private] = ACTIONS(1775),
        [anon_sym_struct] = ACTIONS(1775),
        [anon_sym_enum] = ACTIONS(1775),
        [anon_sym_sbyte] = ACTIONS(1775),
        [anon_sym_byte] = ACTIONS(1775),
        [anon_sym_short] = ACTIONS(1775),
        [anon_sym_ushort] = ACTIONS(1775),
        [anon_sym_int] = ACTIONS(1775),
        [anon_sym_uint] = ACTIONS(1775),
        [anon_sym_long] = ACTIONS(1775),
        [anon_sym_ulong] = ACTIONS(1775),
        [anon_sym_char] = ACTIONS(1775),
        [anon_sym_delegate] = ACTIONS(1775),
        [anon_sym_LBRACK] = ACTIONS(1772),
        [sym_const_keyword] = ACTIONS(1775),
        [anon_sym_readonly] = ACTIONS(1775),
        [anon_sym_volatile] = ACTIONS(1775),
        [anon_sym_bool] = ACTIONS(1775),
        [anon_sym_decimal] = ACTIONS(1775),
        [anon_sym_double] = ACTIONS(1775),
        [anon_sym_float] = ACTIONS(1775),
        [anon_sym_object] = ACTIONS(1775),
        [anon_sym_string] = ACTIONS(1775),
        [sym_identifier_name] = ACTIONS(1778),
        [sym_comment] = ACTIONS(101),
    },
    [456] = {
        [ts_builtin_sym_end] = ACTIONS(1781),
        [anon_sym_namespace] = ACTIONS(1784),
        [anon_sym_RBRACE] = ACTIONS(1781),
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
        [anon_sym_sbyte] = ACTIONS(1784),
        [anon_sym_byte] = ACTIONS(1784),
        [anon_sym_short] = ACTIONS(1784),
        [anon_sym_ushort] = ACTIONS(1784),
        [anon_sym_int] = ACTIONS(1784),
        [anon_sym_uint] = ACTIONS(1784),
        [anon_sym_long] = ACTIONS(1784),
        [anon_sym_ulong] = ACTIONS(1784),
        [anon_sym_char] = ACTIONS(1784),
        [anon_sym_delegate] = ACTIONS(1784),
        [anon_sym_LBRACK] = ACTIONS(1781),
        [sym_const_keyword] = ACTIONS(1784),
        [anon_sym_readonly] = ACTIONS(1784),
        [anon_sym_volatile] = ACTIONS(1784),
        [anon_sym_bool] = ACTIONS(1784),
        [anon_sym_decimal] = ACTIONS(1784),
        [anon_sym_double] = ACTIONS(1784),
        [anon_sym_float] = ACTIONS(1784),
        [anon_sym_object] = ACTIONS(1784),
        [anon_sym_string] = ACTIONS(1784),
        [sym_identifier_name] = ACTIONS(1787),
        [sym_comment] = ACTIONS(101),
    },
    [457] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1759),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [458] = {
        [sym_identifier_name] = ACTIONS(1790),
        [sym_comment] = ACTIONS(101),
    },
    [459] = {
        [sym_type_parameter_list] = STATE(461),
        [anon_sym_LBRACE] = ACTIONS(1792),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [460] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(467),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1794),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [461] = {
        [anon_sym_LBRACE] = ACTIONS(1796),
        [sym_comment] = ACTIONS(101),
    },
    [462] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(464),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1798),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [463] = {
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
    [464] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1809),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(1811),
        [anon_sym_namespace] = ACTIONS(1814),
        [anon_sym_RBRACE] = ACTIONS(1811),
        [anon_sym_class] = ACTIONS(1814),
        [anon_sym_unsafe] = ACTIONS(1814),
        [anon_sym_abstract] = ACTIONS(1814),
        [anon_sym_sealed] = ACTIONS(1814),
        [anon_sym_static] = ACTIONS(1814),
        [anon_sym_new] = ACTIONS(1814),
        [anon_sym_public] = ACTIONS(1814),
        [anon_sym_protected] = ACTIONS(1814),
        [anon_sym_internal] = ACTIONS(1814),
        [anon_sym_private] = ACTIONS(1814),
        [anon_sym_struct] = ACTIONS(1814),
        [anon_sym_enum] = ACTIONS(1814),
        [anon_sym_sbyte] = ACTIONS(1814),
        [anon_sym_byte] = ACTIONS(1814),
        [anon_sym_short] = ACTIONS(1814),
        [anon_sym_ushort] = ACTIONS(1814),
        [anon_sym_int] = ACTIONS(1814),
        [anon_sym_uint] = ACTIONS(1814),
        [anon_sym_long] = ACTIONS(1814),
        [anon_sym_ulong] = ACTIONS(1814),
        [anon_sym_char] = ACTIONS(1814),
        [anon_sym_delegate] = ACTIONS(1814),
        [anon_sym_LBRACK] = ACTIONS(1811),
        [sym_const_keyword] = ACTIONS(1814),
        [anon_sym_readonly] = ACTIONS(1814),
        [anon_sym_volatile] = ACTIONS(1814),
        [anon_sym_bool] = ACTIONS(1814),
        [anon_sym_decimal] = ACTIONS(1814),
        [anon_sym_double] = ACTIONS(1814),
        [anon_sym_float] = ACTIONS(1814),
        [anon_sym_object] = ACTIONS(1814),
        [anon_sym_string] = ACTIONS(1814),
        [sym_identifier_name] = ACTIONS(1817),
        [sym_comment] = ACTIONS(101),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(1820),
        [anon_sym_namespace] = ACTIONS(1823),
        [anon_sym_RBRACE] = ACTIONS(1820),
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
        [anon_sym_sbyte] = ACTIONS(1823),
        [anon_sym_byte] = ACTIONS(1823),
        [anon_sym_short] = ACTIONS(1823),
        [anon_sym_ushort] = ACTIONS(1823),
        [anon_sym_int] = ACTIONS(1823),
        [anon_sym_uint] = ACTIONS(1823),
        [anon_sym_long] = ACTIONS(1823),
        [anon_sym_ulong] = ACTIONS(1823),
        [anon_sym_char] = ACTIONS(1823),
        [anon_sym_delegate] = ACTIONS(1823),
        [anon_sym_LBRACK] = ACTIONS(1820),
        [sym_const_keyword] = ACTIONS(1823),
        [anon_sym_readonly] = ACTIONS(1823),
        [anon_sym_volatile] = ACTIONS(1823),
        [anon_sym_bool] = ACTIONS(1823),
        [anon_sym_decimal] = ACTIONS(1823),
        [anon_sym_double] = ACTIONS(1823),
        [anon_sym_float] = ACTIONS(1823),
        [anon_sym_object] = ACTIONS(1823),
        [anon_sym_string] = ACTIONS(1823),
        [sym_identifier_name] = ACTIONS(1826),
        [sym_comment] = ACTIONS(101),
    },
    [467] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1798),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [468] = {
        [ts_builtin_sym_end] = ACTIONS(1829),
        [anon_sym_extern] = ACTIONS(915),
        [anon_sym_using] = ACTIONS(1829),
        [anon_sym_namespace] = ACTIONS(1829),
        [anon_sym_class] = ACTIONS(1829),
        [anon_sym_unsafe] = ACTIONS(1829),
        [anon_sym_abstract] = ACTIONS(1829),
        [anon_sym_sealed] = ACTIONS(1829),
        [anon_sym_static] = ACTIONS(1829),
        [anon_sym_new] = ACTIONS(1829),
        [anon_sym_public] = ACTIONS(1829),
        [anon_sym_protected] = ACTIONS(1829),
        [anon_sym_internal] = ACTIONS(1829),
        [anon_sym_private] = ACTIONS(1829),
        [anon_sym_struct] = ACTIONS(1829),
        [anon_sym_enum] = ACTIONS(1829),
        [anon_sym_delegate] = ACTIONS(1829),
        [anon_sym_LBRACK] = ACTIONS(1829),
        [sym_comment] = ACTIONS(101),
    },
    [469] = {
        [sym__type_declaration] = STATE(473),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(474),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(475),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(304),
        [aux_sym_class_declaration_repeat1] = STATE(476),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1025),
        [anon_sym_RBRACE] = ACTIONS(1833),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1029),
        [sym_comment] = ACTIONS(101),
    },
    [470] = {
        [sym__integral_type] = STATE(356),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(1835),
        [anon_sym_namespace] = ACTIONS(1843),
        [anon_sym_RBRACE] = ACTIONS(1835),
        [anon_sym_class] = ACTIONS(1843),
        [anon_sym_unsafe] = ACTIONS(1843),
        [anon_sym_abstract] = ACTIONS(1843),
        [anon_sym_sealed] = ACTIONS(1843),
        [anon_sym_static] = ACTIONS(1843),
        [anon_sym_new] = ACTIONS(1843),
        [anon_sym_public] = ACTIONS(1843),
        [anon_sym_protected] = ACTIONS(1843),
        [anon_sym_internal] = ACTIONS(1843),
        [anon_sym_private] = ACTIONS(1843),
        [anon_sym_struct] = ACTIONS(1843),
        [anon_sym_enum] = ACTIONS(1843),
        [anon_sym_sbyte] = ACTIONS(1851),
        [anon_sym_byte] = ACTIONS(1851),
        [anon_sym_short] = ACTIONS(1851),
        [anon_sym_ushort] = ACTIONS(1851),
        [anon_sym_int] = ACTIONS(1851),
        [anon_sym_uint] = ACTIONS(1851),
        [anon_sym_long] = ACTIONS(1851),
        [anon_sym_ulong] = ACTIONS(1851),
        [anon_sym_char] = ACTIONS(1851),
        [anon_sym_delegate] = ACTIONS(1843),
        [anon_sym_LBRACK] = ACTIONS(1835),
        [sym_const_keyword] = ACTIONS(1851),
        [anon_sym_readonly] = ACTIONS(1851),
        [anon_sym_volatile] = ACTIONS(1851),
        [anon_sym_bool] = ACTIONS(1851),
        [anon_sym_decimal] = ACTIONS(1851),
        [anon_sym_double] = ACTIONS(1851),
        [anon_sym_float] = ACTIONS(1851),
        [anon_sym_object] = ACTIONS(1851),
        [anon_sym_string] = ACTIONS(1851),
        [sym_identifier_name] = ACTIONS(1858),
        [sym_comment] = ACTIONS(101),
    },
    [472] = {
        [sym_equals_value_clause] = STATE(184),
        [sym_type_parameter_list] = STATE(141),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_EQ] = ACTIONS(321),
        [anon_sym_LT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [473] = {
        [anon_sym_namespace] = ACTIONS(1865),
        [anon_sym_RBRACE] = ACTIONS(1867),
        [anon_sym_class] = ACTIONS(1870),
        [anon_sym_unsafe] = ACTIONS(1870),
        [anon_sym_abstract] = ACTIONS(1870),
        [anon_sym_sealed] = ACTIONS(1870),
        [anon_sym_static] = ACTIONS(1870),
        [anon_sym_new] = ACTIONS(1870),
        [anon_sym_public] = ACTIONS(1870),
        [anon_sym_protected] = ACTIONS(1870),
        [anon_sym_internal] = ACTIONS(1870),
        [anon_sym_private] = ACTIONS(1870),
        [anon_sym_struct] = ACTIONS(1870),
        [anon_sym_enum] = ACTIONS(1870),
        [anon_sym_sbyte] = ACTIONS(645),
        [anon_sym_byte] = ACTIONS(645),
        [anon_sym_short] = ACTIONS(645),
        [anon_sym_ushort] = ACTIONS(645),
        [anon_sym_int] = ACTIONS(645),
        [anon_sym_uint] = ACTIONS(645),
        [anon_sym_long] = ACTIONS(645),
        [anon_sym_ulong] = ACTIONS(645),
        [anon_sym_char] = ACTIONS(645),
        [anon_sym_delegate] = ACTIONS(1870),
        [anon_sym_LBRACK] = ACTIONS(1867),
        [sym_const_keyword] = ACTIONS(645),
        [anon_sym_readonly] = ACTIONS(645),
        [anon_sym_volatile] = ACTIONS(645),
        [anon_sym_bool] = ACTIONS(645),
        [anon_sym_decimal] = ACTIONS(645),
        [anon_sym_double] = ACTIONS(645),
        [anon_sym_float] = ACTIONS(645),
        [anon_sym_object] = ACTIONS(645),
        [anon_sym_string] = ACTIONS(645),
        [sym_identifier_name] = ACTIONS(647),
        [sym_comment] = ACTIONS(101),
    },
    [474] = {
        [aux_sym_enum_declaration_repeat1] = STATE(478),
        [anon_sym_RBRACE] = ACTIONS(1873),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [475] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(225),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(221),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(651),
        [anon_sym_enum] = ACTIONS(653),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(655),
        [sym_const_keyword] = ACTIONS(657),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1303),
        [sym_comment] = ACTIONS(101),
    },
    [476] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1477),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [477] = {
        [ts_builtin_sym_end] = ACTIONS(1875),
        [anon_sym_SEMI] = ACTIONS(1879),
        [anon_sym_namespace] = ACTIONS(1881),
        [anon_sym_RBRACE] = ACTIONS(1875),
        [anon_sym_class] = ACTIONS(1881),
        [anon_sym_unsafe] = ACTIONS(1881),
        [anon_sym_abstract] = ACTIONS(1881),
        [anon_sym_sealed] = ACTIONS(1881),
        [anon_sym_static] = ACTIONS(1881),
        [anon_sym_new] = ACTIONS(1881),
        [anon_sym_public] = ACTIONS(1881),
        [anon_sym_protected] = ACTIONS(1881),
        [anon_sym_internal] = ACTIONS(1881),
        [anon_sym_private] = ACTIONS(1881),
        [anon_sym_struct] = ACTIONS(1881),
        [anon_sym_enum] = ACTIONS(1881),
        [anon_sym_sbyte] = ACTIONS(1881),
        [anon_sym_byte] = ACTIONS(1881),
        [anon_sym_short] = ACTIONS(1881),
        [anon_sym_ushort] = ACTIONS(1881),
        [anon_sym_int] = ACTIONS(1881),
        [anon_sym_uint] = ACTIONS(1881),
        [anon_sym_long] = ACTIONS(1881),
        [anon_sym_ulong] = ACTIONS(1881),
        [anon_sym_char] = ACTIONS(1881),
        [anon_sym_delegate] = ACTIONS(1881),
        [anon_sym_LBRACK] = ACTIONS(1875),
        [sym_const_keyword] = ACTIONS(1881),
        [anon_sym_readonly] = ACTIONS(1881),
        [anon_sym_volatile] = ACTIONS(1881),
        [anon_sym_bool] = ACTIONS(1881),
        [anon_sym_decimal] = ACTIONS(1881),
        [anon_sym_double] = ACTIONS(1881),
        [anon_sym_float] = ACTIONS(1881),
        [anon_sym_object] = ACTIONS(1881),
        [anon_sym_string] = ACTIONS(1881),
        [sym_identifier_name] = ACTIONS(1885),
        [sym_comment] = ACTIONS(101),
    },
    [478] = {
        [anon_sym_RBRACE] = ACTIONS(1889),
        [anon_sym_COMMA] = ACTIONS(553),
        [sym_comment] = ACTIONS(101),
    },
    [479] = {
        [ts_builtin_sym_end] = ACTIONS(1891),
        [anon_sym_SEMI] = ACTIONS(1895),
        [anon_sym_namespace] = ACTIONS(1897),
        [anon_sym_RBRACE] = ACTIONS(1891),
        [anon_sym_class] = ACTIONS(1897),
        [anon_sym_unsafe] = ACTIONS(1897),
        [anon_sym_abstract] = ACTIONS(1897),
        [anon_sym_sealed] = ACTIONS(1897),
        [anon_sym_static] = ACTIONS(1897),
        [anon_sym_new] = ACTIONS(1897),
        [anon_sym_public] = ACTIONS(1897),
        [anon_sym_protected] = ACTIONS(1897),
        [anon_sym_internal] = ACTIONS(1897),
        [anon_sym_private] = ACTIONS(1897),
        [anon_sym_struct] = ACTIONS(1897),
        [anon_sym_enum] = ACTIONS(1897),
        [anon_sym_sbyte] = ACTIONS(1897),
        [anon_sym_byte] = ACTIONS(1897),
        [anon_sym_short] = ACTIONS(1897),
        [anon_sym_ushort] = ACTIONS(1897),
        [anon_sym_int] = ACTIONS(1897),
        [anon_sym_uint] = ACTIONS(1897),
        [anon_sym_long] = ACTIONS(1897),
        [anon_sym_ulong] = ACTIONS(1897),
        [anon_sym_char] = ACTIONS(1897),
        [anon_sym_delegate] = ACTIONS(1897),
        [anon_sym_LBRACK] = ACTIONS(1891),
        [sym_const_keyword] = ACTIONS(1897),
        [anon_sym_readonly] = ACTIONS(1897),
        [anon_sym_volatile] = ACTIONS(1897),
        [anon_sym_bool] = ACTIONS(1897),
        [anon_sym_decimal] = ACTIONS(1897),
        [anon_sym_double] = ACTIONS(1897),
        [anon_sym_float] = ACTIONS(1897),
        [anon_sym_object] = ACTIONS(1897),
        [anon_sym_string] = ACTIONS(1897),
        [sym_identifier_name] = ACTIONS(1901),
        [sym_comment] = ACTIONS(101),
    },
    [480] = {
        [ts_builtin_sym_end] = ACTIONS(1620),
        [anon_sym_namespace] = ACTIONS(1626),
        [anon_sym_RBRACE] = ACTIONS(1620),
        [anon_sym_class] = ACTIONS(1626),
        [anon_sym_unsafe] = ACTIONS(1626),
        [anon_sym_abstract] = ACTIONS(1626),
        [anon_sym_sealed] = ACTIONS(1626),
        [anon_sym_static] = ACTIONS(1626),
        [anon_sym_new] = ACTIONS(1626),
        [anon_sym_public] = ACTIONS(1626),
        [anon_sym_protected] = ACTIONS(1626),
        [anon_sym_internal] = ACTIONS(1626),
        [anon_sym_private] = ACTIONS(1626),
        [anon_sym_struct] = ACTIONS(1626),
        [anon_sym_enum] = ACTIONS(1626),
        [anon_sym_sbyte] = ACTIONS(1626),
        [anon_sym_byte] = ACTIONS(1626),
        [anon_sym_short] = ACTIONS(1626),
        [anon_sym_ushort] = ACTIONS(1626),
        [anon_sym_int] = ACTIONS(1626),
        [anon_sym_uint] = ACTIONS(1626),
        [anon_sym_long] = ACTIONS(1626),
        [anon_sym_ulong] = ACTIONS(1626),
        [anon_sym_char] = ACTIONS(1626),
        [anon_sym_delegate] = ACTIONS(1626),
        [anon_sym_LBRACK] = ACTIONS(1620),
        [sym_const_keyword] = ACTIONS(1626),
        [anon_sym_readonly] = ACTIONS(1626),
        [anon_sym_volatile] = ACTIONS(1626),
        [anon_sym_bool] = ACTIONS(1626),
        [anon_sym_decimal] = ACTIONS(1626),
        [anon_sym_double] = ACTIONS(1626),
        [anon_sym_float] = ACTIONS(1626),
        [anon_sym_object] = ACTIONS(1626),
        [anon_sym_string] = ACTIONS(1626),
        [sym_identifier_name] = ACTIONS(1630),
        [sym_comment] = ACTIONS(101),
    },
    [481] = {
        [ts_builtin_sym_end] = ACTIONS(1891),
        [anon_sym_namespace] = ACTIONS(1897),
        [anon_sym_RBRACE] = ACTIONS(1891),
        [anon_sym_class] = ACTIONS(1897),
        [anon_sym_unsafe] = ACTIONS(1897),
        [anon_sym_abstract] = ACTIONS(1897),
        [anon_sym_sealed] = ACTIONS(1897),
        [anon_sym_static] = ACTIONS(1897),
        [anon_sym_new] = ACTIONS(1897),
        [anon_sym_public] = ACTIONS(1897),
        [anon_sym_protected] = ACTIONS(1897),
        [anon_sym_internal] = ACTIONS(1897),
        [anon_sym_private] = ACTIONS(1897),
        [anon_sym_struct] = ACTIONS(1897),
        [anon_sym_enum] = ACTIONS(1897),
        [anon_sym_sbyte] = ACTIONS(1897),
        [anon_sym_byte] = ACTIONS(1897),
        [anon_sym_short] = ACTIONS(1897),
        [anon_sym_ushort] = ACTIONS(1897),
        [anon_sym_int] = ACTIONS(1897),
        [anon_sym_uint] = ACTIONS(1897),
        [anon_sym_long] = ACTIONS(1897),
        [anon_sym_ulong] = ACTIONS(1897),
        [anon_sym_char] = ACTIONS(1897),
        [anon_sym_delegate] = ACTIONS(1897),
        [anon_sym_LBRACK] = ACTIONS(1891),
        [sym_const_keyword] = ACTIONS(1897),
        [anon_sym_readonly] = ACTIONS(1897),
        [anon_sym_volatile] = ACTIONS(1897),
        [anon_sym_bool] = ACTIONS(1897),
        [anon_sym_decimal] = ACTIONS(1897),
        [anon_sym_double] = ACTIONS(1897),
        [anon_sym_float] = ACTIONS(1897),
        [anon_sym_object] = ACTIONS(1897),
        [anon_sym_string] = ACTIONS(1897),
        [sym_identifier_name] = ACTIONS(1901),
        [sym_comment] = ACTIONS(101),
    },
    [482] = {
        [anon_sym_SEMI] = ACTIONS(1905),
        [anon_sym_RBRACE] = ACTIONS(1905),
        [anon_sym_COMMA] = ACTIONS(1905),
        [anon_sym_RPAREN] = ACTIONS(1905),
        [sym_params_keyword] = ACTIONS(1905),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [sym_comment] = ACTIONS(101),
    },
    [483] = {
        [anon_sym_SEMI] = ACTIONS(1909),
        [anon_sym_RBRACE] = ACTIONS(1909),
        [anon_sym_COMMA] = ACTIONS(1909),
        [anon_sym_RPAREN] = ACTIONS(1909),
        [sym_params_keyword] = ACTIONS(1909),
        [anon_sym_LBRACK] = ACTIONS(1909),
        [sym__real_type_suffix] = ACTIONS(1912),
        [sym__exponent_part] = ACTIONS(1914),
        [sym_comment] = ACTIONS(101),
    },
    [484] = {
        [anon_sym_SEMI] = ACTIONS(1916),
        [anon_sym_RBRACE] = ACTIONS(1916),
        [anon_sym_COMMA] = ACTIONS(1916),
        [anon_sym_RPAREN] = ACTIONS(1916),
        [sym_params_keyword] = ACTIONS(1916),
        [anon_sym_LBRACK] = ACTIONS(1916),
        [sym_comment] = ACTIONS(101),
    },
    [485] = {
        [anon_sym_SEMI] = ACTIONS(1916),
        [anon_sym_RBRACE] = ACTIONS(1916),
        [anon_sym_COMMA] = ACTIONS(1916),
        [anon_sym_RPAREN] = ACTIONS(1916),
        [sym_params_keyword] = ACTIONS(1916),
        [anon_sym_LBRACK] = ACTIONS(1916),
        [sym__real_type_suffix] = ACTIONS(1919),
        [sym_comment] = ACTIONS(101),
    },
    [486] = {
        [anon_sym_SEMI] = ACTIONS(1921),
        [anon_sym_RBRACE] = ACTIONS(1921),
        [anon_sym_COMMA] = ACTIONS(1921),
        [anon_sym_RPAREN] = ACTIONS(1921),
        [sym_params_keyword] = ACTIONS(1921),
        [anon_sym_LBRACK] = ACTIONS(1921),
        [sym_comment] = ACTIONS(101),
    },
    [487] = {
        [anon_sym_SEMI] = ACTIONS(1161),
        [anon_sym_RBRACE] = ACTIONS(1161),
        [anon_sym_COMMA] = ACTIONS(1161),
        [anon_sym_RPAREN] = ACTIONS(1161),
        [sym_params_keyword] = ACTIONS(1161),
        [anon_sym_LBRACK] = ACTIONS(1161),
        [sym_comment] = ACTIONS(101),
    },
    [488] = {
        [anon_sym_SEMI] = ACTIONS(1924),
        [sym_comment] = ACTIONS(101),
    },
    [489] = {
        [anon_sym_RBRACE] = ACTIONS(1926),
        [anon_sym_class] = ACTIONS(1930),
        [anon_sym_unsafe] = ACTIONS(1930),
        [anon_sym_abstract] = ACTIONS(1930),
        [anon_sym_sealed] = ACTIONS(1930),
        [anon_sym_static] = ACTIONS(1930),
        [anon_sym_new] = ACTIONS(1930),
        [anon_sym_public] = ACTIONS(1930),
        [anon_sym_protected] = ACTIONS(1930),
        [anon_sym_internal] = ACTIONS(1930),
        [anon_sym_private] = ACTIONS(1930),
        [anon_sym_struct] = ACTIONS(1930),
        [anon_sym_enum] = ACTIONS(1930),
        [anon_sym_sbyte] = ACTIONS(1930),
        [anon_sym_byte] = ACTIONS(1930),
        [anon_sym_short] = ACTIONS(1930),
        [anon_sym_ushort] = ACTIONS(1930),
        [anon_sym_int] = ACTIONS(1930),
        [anon_sym_uint] = ACTIONS(1930),
        [anon_sym_long] = ACTIONS(1930),
        [anon_sym_ulong] = ACTIONS(1930),
        [anon_sym_char] = ACTIONS(1930),
        [anon_sym_delegate] = ACTIONS(1930),
        [anon_sym_LBRACK] = ACTIONS(1926),
        [sym_const_keyword] = ACTIONS(1930),
        [anon_sym_readonly] = ACTIONS(1930),
        [anon_sym_volatile] = ACTIONS(1930),
        [anon_sym_bool] = ACTIONS(1930),
        [anon_sym_decimal] = ACTIONS(1930),
        [anon_sym_double] = ACTIONS(1930),
        [anon_sym_float] = ACTIONS(1930),
        [anon_sym_object] = ACTIONS(1930),
        [anon_sym_string] = ACTIONS(1930),
        [sym_identifier_name] = ACTIONS(1934),
        [sym_comment] = ACTIONS(101),
    },
    [490] = {
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [491] = {
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(499),
        [sym_type_parameter_list] = STATE(141),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_COMMA] = ACTIONS(1938),
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(321),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [492] = {
        [anon_sym_RBRACE] = ACTIONS(1943),
        [anon_sym_COMMA] = ACTIONS(1943),
        [sym_comment] = ACTIONS(101),
    },
    [493] = {
        [anon_sym_COMMA] = ACTIONS(1946),
        [anon_sym_RPAREN] = ACTIONS(1946),
        [sym_params_keyword] = ACTIONS(1946),
        [anon_sym_LBRACK] = ACTIONS(1946),
        [sym_comment] = ACTIONS(101),
    },
    [494] = {
        [sym_parameter_modifier] = STATE(123),
        [sym__type] = STATE(124),
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
        [sym_identifier_name] = ACTIONS(1303),
        [sym_comment] = ACTIONS(101),
    },
    [495] = {
        [anon_sym_COMMA] = ACTIONS(1949),
        [anon_sym_RBRACK] = ACTIONS(1949),
        [sym_comment] = ACTIONS(101),
    },
    [496] = {
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_GT] = ACTIONS(477),
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(101),
    },
    [497] = {
        [anon_sym_SEMI] = ACTIONS(1952),
        [anon_sym_COMMA] = ACTIONS(1952),
        [sym_comment] = ACTIONS(101),
    },
    [498] = {
        [anon_sym_COMMA] = ACTIONS(1955),
        [anon_sym_GT] = ACTIONS(1955),
        [sym_comment] = ACTIONS(101),
    },
    [499] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(1958),
        [sym_comment] = ACTIONS(101),
    },
    [500] = {
        [anon_sym_LBRACE] = ACTIONS(1961),
        [anon_sym_COLON] = ACTIONS(1189),
        [sym_comment] = ACTIONS(101),
    },
    [501] = {
        [sym_enum_member_declaration] = STATE(474),
        [sym__attributes] = STATE(172),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [502] = {
        [sym_type_parameter_list] = STATE(504),
        [anon_sym_LBRACE] = ACTIONS(1963),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [503] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(510),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1965),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [504] = {
        [anon_sym_LBRACE] = ACTIONS(1967),
        [sym_comment] = ACTIONS(101),
    },
    [505] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(507),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1969),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [506] = {
        [ts_builtin_sym_end] = ACTIONS(1971),
        [anon_sym_namespace] = ACTIONS(1975),
        [anon_sym_RBRACE] = ACTIONS(1971),
        [anon_sym_class] = ACTIONS(1975),
        [anon_sym_unsafe] = ACTIONS(1975),
        [anon_sym_abstract] = ACTIONS(1975),
        [anon_sym_sealed] = ACTIONS(1975),
        [anon_sym_static] = ACTIONS(1975),
        [anon_sym_new] = ACTIONS(1975),
        [anon_sym_public] = ACTIONS(1975),
        [anon_sym_protected] = ACTIONS(1975),
        [anon_sym_internal] = ACTIONS(1975),
        [anon_sym_private] = ACTIONS(1975),
        [anon_sym_struct] = ACTIONS(1975),
        [anon_sym_enum] = ACTIONS(1975),
        [anon_sym_sbyte] = ACTIONS(1975),
        [anon_sym_byte] = ACTIONS(1975),
        [anon_sym_short] = ACTIONS(1975),
        [anon_sym_ushort] = ACTIONS(1975),
        [anon_sym_int] = ACTIONS(1975),
        [anon_sym_uint] = ACTIONS(1975),
        [anon_sym_long] = ACTIONS(1975),
        [anon_sym_ulong] = ACTIONS(1975),
        [anon_sym_char] = ACTIONS(1975),
        [anon_sym_delegate] = ACTIONS(1975),
        [anon_sym_LBRACK] = ACTIONS(1971),
        [sym_const_keyword] = ACTIONS(1975),
        [anon_sym_readonly] = ACTIONS(1975),
        [anon_sym_volatile] = ACTIONS(1975),
        [anon_sym_bool] = ACTIONS(1975),
        [anon_sym_decimal] = ACTIONS(1975),
        [anon_sym_double] = ACTIONS(1975),
        [anon_sym_float] = ACTIONS(1975),
        [anon_sym_object] = ACTIONS(1975),
        [anon_sym_string] = ACTIONS(1975),
        [sym_identifier_name] = ACTIONS(1979),
        [sym_comment] = ACTIONS(101),
    },
    [507] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1983),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [508] = {
        [ts_builtin_sym_end] = ACTIONS(1985),
        [anon_sym_namespace] = ACTIONS(1989),
        [anon_sym_RBRACE] = ACTIONS(1985),
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
        [anon_sym_LBRACK] = ACTIONS(1985),
        [sym_const_keyword] = ACTIONS(1989),
        [anon_sym_readonly] = ACTIONS(1989),
        [anon_sym_volatile] = ACTIONS(1989),
        [anon_sym_bool] = ACTIONS(1989),
        [anon_sym_decimal] = ACTIONS(1989),
        [anon_sym_double] = ACTIONS(1989),
        [anon_sym_float] = ACTIONS(1989),
        [anon_sym_object] = ACTIONS(1989),
        [anon_sym_string] = ACTIONS(1989),
        [sym_identifier_name] = ACTIONS(1993),
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
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1969),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
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
        [sym_type_parameter_list] = STATE(513),
        [anon_sym_LBRACE] = ACTIONS(2009),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [512] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(519),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(2011),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [513] = {
        [anon_sym_LBRACE] = ACTIONS(2013),
        [sym_comment] = ACTIONS(101),
    },
    [514] = {
        [sym__type_declaration] = STATE(202),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(202),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(516),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(2015),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(2017),
        [anon_sym_namespace] = ACTIONS(2021),
        [anon_sym_RBRACE] = ACTIONS(2017),
        [anon_sym_class] = ACTIONS(2021),
        [anon_sym_unsafe] = ACTIONS(2021),
        [anon_sym_abstract] = ACTIONS(2021),
        [anon_sym_sealed] = ACTIONS(2021),
        [anon_sym_static] = ACTIONS(2021),
        [anon_sym_new] = ACTIONS(2021),
        [anon_sym_public] = ACTIONS(2021),
        [anon_sym_protected] = ACTIONS(2021),
        [anon_sym_internal] = ACTIONS(2021),
        [anon_sym_private] = ACTIONS(2021),
        [anon_sym_struct] = ACTIONS(2021),
        [anon_sym_enum] = ACTIONS(2021),
        [anon_sym_sbyte] = ACTIONS(2021),
        [anon_sym_byte] = ACTIONS(2021),
        [anon_sym_short] = ACTIONS(2021),
        [anon_sym_ushort] = ACTIONS(2021),
        [anon_sym_int] = ACTIONS(2021),
        [anon_sym_uint] = ACTIONS(2021),
        [anon_sym_long] = ACTIONS(2021),
        [anon_sym_ulong] = ACTIONS(2021),
        [anon_sym_char] = ACTIONS(2021),
        [anon_sym_delegate] = ACTIONS(2021),
        [anon_sym_LBRACK] = ACTIONS(2017),
        [sym_const_keyword] = ACTIONS(2021),
        [anon_sym_readonly] = ACTIONS(2021),
        [anon_sym_volatile] = ACTIONS(2021),
        [anon_sym_bool] = ACTIONS(2021),
        [anon_sym_decimal] = ACTIONS(2021),
        [anon_sym_double] = ACTIONS(2021),
        [anon_sym_float] = ACTIONS(2021),
        [anon_sym_object] = ACTIONS(2021),
        [anon_sym_string] = ACTIONS(2021),
        [sym_identifier_name] = ACTIONS(2025),
        [sym_comment] = ACTIONS(101),
    },
    [516] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(2029),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(2031),
        [anon_sym_namespace] = ACTIONS(2035),
        [anon_sym_RBRACE] = ACTIONS(2031),
        [anon_sym_class] = ACTIONS(2035),
        [anon_sym_unsafe] = ACTIONS(2035),
        [anon_sym_abstract] = ACTIONS(2035),
        [anon_sym_sealed] = ACTIONS(2035),
        [anon_sym_static] = ACTIONS(2035),
        [anon_sym_new] = ACTIONS(2035),
        [anon_sym_public] = ACTIONS(2035),
        [anon_sym_protected] = ACTIONS(2035),
        [anon_sym_internal] = ACTIONS(2035),
        [anon_sym_private] = ACTIONS(2035),
        [anon_sym_struct] = ACTIONS(2035),
        [anon_sym_enum] = ACTIONS(2035),
        [anon_sym_sbyte] = ACTIONS(2035),
        [anon_sym_byte] = ACTIONS(2035),
        [anon_sym_short] = ACTIONS(2035),
        [anon_sym_ushort] = ACTIONS(2035),
        [anon_sym_int] = ACTIONS(2035),
        [anon_sym_uint] = ACTIONS(2035),
        [anon_sym_long] = ACTIONS(2035),
        [anon_sym_ulong] = ACTIONS(2035),
        [anon_sym_char] = ACTIONS(2035),
        [anon_sym_delegate] = ACTIONS(2035),
        [anon_sym_LBRACK] = ACTIONS(2031),
        [sym_const_keyword] = ACTIONS(2035),
        [anon_sym_readonly] = ACTIONS(2035),
        [anon_sym_volatile] = ACTIONS(2035),
        [anon_sym_bool] = ACTIONS(2035),
        [anon_sym_decimal] = ACTIONS(2035),
        [anon_sym_double] = ACTIONS(2035),
        [anon_sym_float] = ACTIONS(2035),
        [anon_sym_object] = ACTIONS(2035),
        [anon_sym_string] = ACTIONS(2035),
        [sym_identifier_name] = ACTIONS(2039),
        [sym_comment] = ACTIONS(101),
    },
    [518] = {
        [ts_builtin_sym_end] = ACTIONS(2043),
        [anon_sym_namespace] = ACTIONS(2047),
        [anon_sym_RBRACE] = ACTIONS(2043),
        [anon_sym_class] = ACTIONS(2047),
        [anon_sym_unsafe] = ACTIONS(2047),
        [anon_sym_abstract] = ACTIONS(2047),
        [anon_sym_sealed] = ACTIONS(2047),
        [anon_sym_static] = ACTIONS(2047),
        [anon_sym_new] = ACTIONS(2047),
        [anon_sym_public] = ACTIONS(2047),
        [anon_sym_protected] = ACTIONS(2047),
        [anon_sym_internal] = ACTIONS(2047),
        [anon_sym_private] = ACTIONS(2047),
        [anon_sym_struct] = ACTIONS(2047),
        [anon_sym_enum] = ACTIONS(2047),
        [anon_sym_sbyte] = ACTIONS(2047),
        [anon_sym_byte] = ACTIONS(2047),
        [anon_sym_short] = ACTIONS(2047),
        [anon_sym_ushort] = ACTIONS(2047),
        [anon_sym_int] = ACTIONS(2047),
        [anon_sym_uint] = ACTIONS(2047),
        [anon_sym_long] = ACTIONS(2047),
        [anon_sym_ulong] = ACTIONS(2047),
        [anon_sym_char] = ACTIONS(2047),
        [anon_sym_delegate] = ACTIONS(2047),
        [anon_sym_LBRACK] = ACTIONS(2043),
        [sym_const_keyword] = ACTIONS(2047),
        [anon_sym_readonly] = ACTIONS(2047),
        [anon_sym_volatile] = ACTIONS(2047),
        [anon_sym_bool] = ACTIONS(2047),
        [anon_sym_decimal] = ACTIONS(2047),
        [anon_sym_double] = ACTIONS(2047),
        [anon_sym_float] = ACTIONS(2047),
        [anon_sym_object] = ACTIONS(2047),
        [anon_sym_string] = ACTIONS(2047),
        [sym_identifier_name] = ACTIONS(2051),
        [sym_comment] = ACTIONS(101),
    },
    [519] = {
        [sym__type_declaration] = STATE(210),
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
        [sym__attributes] = STATE(203),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(210),
        [sym_field_modifiers] = STATE(204),
        [sym__field_modifiers] = STATE(205),
        [sym_variable_declaration] = STATE(206),
        [sym__type] = STATE(207),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(2015),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_sealed] = ACTIONS(603),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(607),
        [anon_sym_public] = ACTIONS(607),
        [anon_sym_protected] = ACTIONS(607),
        [anon_sym_internal] = ACTIONS(607),
        [anon_sym_private] = ACTIONS(607),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(617),
        [anon_sym_volatile] = ACTIONS(617),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [520] = {
        [ts_builtin_sym_end] = ACTIONS(2055),
        [anon_sym_namespace] = ACTIONS(2062),
        [anon_sym_RBRACE] = ACTIONS(2055),
        [anon_sym_class] = ACTIONS(2062),
        [anon_sym_unsafe] = ACTIONS(2062),
        [anon_sym_abstract] = ACTIONS(2062),
        [anon_sym_sealed] = ACTIONS(2062),
        [anon_sym_static] = ACTIONS(2062),
        [anon_sym_new] = ACTIONS(2062),
        [anon_sym_public] = ACTIONS(2062),
        [anon_sym_protected] = ACTIONS(2062),
        [anon_sym_internal] = ACTIONS(2062),
        [anon_sym_private] = ACTIONS(2062),
        [anon_sym_struct] = ACTIONS(2062),
        [anon_sym_enum] = ACTIONS(2062),
        [anon_sym_sbyte] = ACTIONS(2062),
        [anon_sym_byte] = ACTIONS(2062),
        [anon_sym_short] = ACTIONS(2062),
        [anon_sym_ushort] = ACTIONS(2062),
        [anon_sym_int] = ACTIONS(2062),
        [anon_sym_uint] = ACTIONS(2062),
        [anon_sym_long] = ACTIONS(2062),
        [anon_sym_ulong] = ACTIONS(2062),
        [anon_sym_char] = ACTIONS(2062),
        [anon_sym_delegate] = ACTIONS(2062),
        [anon_sym_LBRACK] = ACTIONS(2055),
        [sym_const_keyword] = ACTIONS(2062),
        [anon_sym_readonly] = ACTIONS(2062),
        [anon_sym_volatile] = ACTIONS(2062),
        [anon_sym_bool] = ACTIONS(2062),
        [anon_sym_decimal] = ACTIONS(2062),
        [anon_sym_double] = ACTIONS(2062),
        [anon_sym_float] = ACTIONS(2062),
        [anon_sym_object] = ACTIONS(2062),
        [anon_sym_string] = ACTIONS(2062),
        [sym_identifier_name] = ACTIONS(2069),
        [sym_comment] = ACTIONS(101),
    },
    [521] = {
        [ts_builtin_sym_end] = ACTIONS(2076),
        [anon_sym_namespace] = ACTIONS(2086),
        [anon_sym_RBRACE] = ACTIONS(2076),
        [anon_sym_class] = ACTIONS(2086),
        [anon_sym_unsafe] = ACTIONS(2086),
        [anon_sym_abstract] = ACTIONS(2086),
        [anon_sym_sealed] = ACTIONS(2086),
        [anon_sym_static] = ACTIONS(2086),
        [anon_sym_new] = ACTIONS(2086),
        [anon_sym_public] = ACTIONS(2086),
        [anon_sym_protected] = ACTIONS(2086),
        [anon_sym_internal] = ACTIONS(2086),
        [anon_sym_private] = ACTIONS(2086),
        [anon_sym_struct] = ACTIONS(2086),
        [anon_sym_enum] = ACTIONS(2086),
        [anon_sym_sbyte] = ACTIONS(2096),
        [anon_sym_byte] = ACTIONS(2096),
        [anon_sym_short] = ACTIONS(2096),
        [anon_sym_ushort] = ACTIONS(2096),
        [anon_sym_int] = ACTIONS(2096),
        [anon_sym_uint] = ACTIONS(2096),
        [anon_sym_long] = ACTIONS(2096),
        [anon_sym_ulong] = ACTIONS(2096),
        [anon_sym_char] = ACTIONS(2096),
        [anon_sym_delegate] = ACTIONS(2086),
        [anon_sym_LBRACK] = ACTIONS(2076),
        [sym_const_keyword] = ACTIONS(2096),
        [anon_sym_readonly] = ACTIONS(2096),
        [anon_sym_volatile] = ACTIONS(2096),
        [anon_sym_bool] = ACTIONS(2096),
        [anon_sym_decimal] = ACTIONS(2096),
        [anon_sym_double] = ACTIONS(2096),
        [anon_sym_float] = ACTIONS(2096),
        [anon_sym_object] = ACTIONS(2096),
        [anon_sym_string] = ACTIONS(2096),
        [sym_identifier_name] = ACTIONS(2105),
        [sym_comment] = ACTIONS(101),
    },
    [522] = {
        [aux_sym_enum_declaration_repeat1] = STATE(384),
        [anon_sym_RBRACE] = ACTIONS(2114),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(316),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(319),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(320),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(321),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(322),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(197),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(323),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(199),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(324),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(325),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(326),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(327),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(328),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(329),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(330),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(331),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(332),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(334),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(292),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(335),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(201),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(336),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(86),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(337),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(338),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(101),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(339),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(89),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(111),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(90),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(340),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(341),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(342),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(343),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(93),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(65),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(140),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(344),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(306),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(297),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(345),
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
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(298),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
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
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
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
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
    [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 5),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
    [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
    [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
    [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
    [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
    [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
    [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
    [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
    [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [909] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [917] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [932] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [936] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [949] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [963] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [980] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [994] = {.count = 16, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1011] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1029] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(472),
    [1031] = {.count = 18, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1052] = {.count = 18, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1071] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1088] = {.count = 16, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
    [1107] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
    [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
    [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [1116] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1), REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [1119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
    [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [1123] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2), REDUCE(sym_parameter_list, 3),
    [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 5),
    [1128] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1134] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_rank_specifier, 2), REDUCE(sym_array_rank_specifier, 3), REDUCE(sym__attribute_section, 3),
    [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
    [1144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [1146] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
    [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
    [1156] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1161] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1167] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [1171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
    [1173] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1176] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1179] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(468),
    [1183] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(469),
    [1186] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [1191] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [1202] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter_array, 4),
    [1208] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1212] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [1219] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(300),
    [1223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1228] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1231] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1236] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1241] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1244] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1247] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [1250] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [1255] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [1260] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1263] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(446),
    [1267] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(176),
    [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
    [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1281] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(151),
    [1285] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1289] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(76),
    [1293] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(32),
    [1297] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(sym__formal_parameter_list, 2), REDUCE(sym__formal_parameter_list, 3),
    [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
    [1303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(406),
    [1305] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1311] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [1316] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(37),
    [1320] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1324] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [1327] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
    [1332] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1335] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [1340] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1), SHIFT(397),
    [1343] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1347] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(213),
    [1351] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1354] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter, 5),
    [1361] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter, 5),
    [1365] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1368] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [1373] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(144),
    [1377] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(145),
    [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [1383] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1386] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1390] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [1399] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [1407] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1413] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1419] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1425] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1431] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1437] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1446] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1455] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1464] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1468] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1471] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1474] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [1479] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1486] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1493] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [1502] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1509] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1516] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1523] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1528] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1532] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter, 5),
    [1537] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1542] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1547] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [1554] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1557] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1560] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [1565] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1568] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1571] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
    [1576] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 3),
    [1579] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2), REDUCE(sym_parameter, 4),
    [1582] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter_array, 4),
    [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
    [1587] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1590] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4), REDUCE(sym_parameter, 5),
    [1593] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1597] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1601] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
    [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1609] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1612] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1615] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1620] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1626] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1630] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1636] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [1642] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1646] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1650] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1654] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1658] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
    [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
    [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
    [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
    [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
    [1672] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1677] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1680] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [1685] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [1690] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1693] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1696] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1699] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1702] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1707] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1712] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1715] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [1720] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [1725] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1728] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1731] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [1739] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1745] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
    [1753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [1757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
    [1759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [1761] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1764] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1767] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1772] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1775] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1778] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1781] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1784] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1787] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
    [1792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
    [1796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1800] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1803] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1806] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
    [1811] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1814] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1817] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1820] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1823] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1826] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1829] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1835] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1843] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1851] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1858] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [1867] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1870] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1875] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [1881] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1885] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [1891] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [1897] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1901] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1905] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1909] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
    [1916] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
    [1921] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
    [1926] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1930] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1934] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1938] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1943] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [1946] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1949] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1952] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1955] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1958] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [1963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [1971] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1975] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1979] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1985] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1989] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1993] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1997] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [2001] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [2005] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [2009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [2011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [2013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [2015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
    [2017] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2021] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2025] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
    [2031] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2035] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2039] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2043] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2047] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2051] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2055] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2062] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2069] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2076] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2086] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2096] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2105] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
