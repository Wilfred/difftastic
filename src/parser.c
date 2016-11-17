#include "tree_sitter/parser.h"

#define STATE_COUNT 516
#define SYMBOL_COUNT 158
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
    sym__literal = 127,
    sym_boolean_literal = 128,
    sym_character_literal = 129,
    sym__unicode_escape_sequence = 130,
    sym__simple_escape_sequence = 131,
    sym_integer_literal = 132,
    sym_real_literal = 133,
    sym_string_literal = 134,
    sym__regular_string_literal = 135,
    sym__regular_string_literal_character = 136,
    sym__verbatim_string_literal = 137,
    sym_predefined_type = 138,
    sym_type_parameter_list = 139,
    sym_type_parameter = 140,
    sym_qualified_name = 141,
    sym_alias_qualified_name = 142,
    sym_name_equals = 143,
    sym_static = 144,
    aux_sym_compilation_unit_repeat1 = 145,
    aux_sym_compilation_unit_repeat2 = 146,
    aux_sym_compilation_unit_repeat3 = 147,
    aux_sym_compilation_unit_repeat4 = 148,
    aux_sym_class_declaration_repeat1 = 149,
    aux_sym_enum_declaration_repeat1 = 150,
    aux_sym__formal_parameter_list_repeat1 = 151,
    aux_sym_array_rank_specifier_repeat1 = 152,
    aux_sym__attributes_repeat1 = 153,
    aux_sym_attribute_list_repeat1 = 154,
    aux_sym_variable_declaration_repeat1 = 155,
    aux_sym__regular_string_literal_repeat1 = 156,
    aux_sym_type_parameter_list_repeat1 = 157,
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
    [146] = 553,
    [147] = 528,
    [148] = 541,
    [149] = 554,
    [150] = 554,
    [151] = 528,
    [152] = 541,
    [153] = 541,
    [154] = 528,
    [155] = 541,
    [156] = 555,
    [157] = 528,
    [158] = 556,
    [159] = 528,
    [160] = 528,
    [161] = 540,
    [162] = 528,
    [163] = 556,
    [164] = 555,
    [165] = 556,
    [166] = 528,
    [167] = 557,
    [168] = 557,
    [169] = 557,
    [170] = 528,
    [171] = 558,
    [172] = 472,
    [173] = 513,
    [174] = 558,
    [175] = 472,
    [176] = 513,
    [177] = 422,
    [178] = 513,
    [179] = 422,
    [180] = 513,
    [181] = 513,
    [182] = 558,
    [183] = 513,
    [184] = 558,
    [185] = 422,
    [186] = 422,
    [187] = 389,
    [188] = 559,
    [189] = 560,
    [190] = 511,
    [191] = 560,
    [192] = 422,
    [193] = 561,
    [194] = 562,
    [195] = 565,
    [196] = 455,
    [197] = 566,
    [198] = 560,
    [199] = 565,
    [200] = 569,
    [201] = 569,
    [202] = 454,
    [203] = 389,
    [204] = 560,
    [205] = 422,
    [206] = 560,
    [207] = 570,
    [208] = 571,
    [209] = 389,
    [210] = 571,
    [211] = 389,
    [212] = 571,
    [213] = 571,
    [214] = 571,
    [215] = 560,
    [216] = 455,
    [217] = 454,
    [218] = 560,
    [219] = 454,
    [220] = 560,
    [221] = 569,
    [222] = 455,
    [223] = 454,
    [224] = 560,
    [225] = 422,
    [226] = 560,
    [227] = 389,
    [228] = 559,
    [229] = 560,
    [230] = 511,
    [231] = 560,
    [232] = 422,
    [233] = 560,
    [234] = 422,
    [235] = 422,
    [236] = 560,
    [237] = 389,
    [238] = 449,
    [239] = 454,
    [240] = 422,
    [241] = 470,
    [242] = 472,
    [243] = 473,
    [244] = 511,
    [245] = 472,
    [246] = 513,
    [247] = 513,
    [248] = 513,
    [249] = 558,
    [250] = 513,
    [251] = 422,
    [252] = 559,
    [253] = 560,
    [254] = 511,
    [255] = 422,
    [256] = 560,
    [257] = 559,
    [258] = 560,
    [259] = 511,
    [260] = 422,
    [261] = 560,
    [262] = 569,
    [263] = 389,
    [264] = 449,
    [265] = 454,
    [266] = 422,
    [267] = 470,
    [268] = 472,
    [269] = 473,
    [270] = 511,
    [271] = 513,
    [272] = 558,
    [273] = 513,
    [274] = 422,
    [275] = 559,
    [276] = 560,
    [277] = 511,
    [278] = 422,
    [279] = 560,
    [280] = 572,
    [281] = 433,
    [282] = 434,
    [283] = 559,
    [284] = 560,
    [285] = 511,
    [286] = 422,
    [287] = 560,
    [288] = 573,
    [289] = 389,
    [290] = 444,
    [291] = 442,
    [292] = 574,
    [293] = 575,
    [294] = 577,
    [295] = 578,
    [296] = 389,
    [297] = 579,
    [298] = 580,
    [299] = 420,
    [300] = 580,
    [301] = 420,
    [302] = 389,
    [303] = 578,
    [304] = 388,
    [305] = 581,
    [306] = 582,
    [307] = 388,
    [308] = 582,
    [309] = 421,
    [310] = 421,
    [311] = 388,
    [312] = 389,
    [313] = 454,
    [314] = 285,
    [315] = 583,
    [316] = 586,
    [317] = 558,
    [318] = 389,
    [319] = 587,
    [320] = 389,
    [321] = 389,
    [322] = 588,
    [323] = 591,
    [324] = 466,
    [325] = 398,
    [326] = 450,
    [327] = 592,
    [328] = 455,
    [329] = 593,
    [330] = 594,
    [331] = 455,
    [332] = 595,
    [333] = 599,
    [334] = 554,
    [335] = 533,
    [336] = 600,
    [337] = 528,
    [338] = 556,
    [339] = 601,
    [340] = 466,
    [341] = 602,
    [342] = 422,
    [343] = 285,
    [344] = 421,
    [345] = 420,
    [346] = 433,
    [347] = 433,
    [348] = 434,
    [349] = 434,
    [350] = 513,
    [351] = 437,
    [352] = 511,
    [353] = 438,
    [354] = 389,
    [355] = 454,
    [356] = 456,
    [357] = 455,
    [358] = 446,
    [359] = 389,
    [360] = 603,
    [361] = 439,
    [362] = 444,
    [363] = 445,
    [364] = 442,
    [365] = 560,
    [366] = 569,
    [367] = 569,
    [368] = 454,
    [369] = 447,
    [370] = 571,
    [371] = 528,
    [372] = 541,
    [373] = 466,
    [374] = 465,
    [375] = 579,
    [376] = 421,
    [377] = 442,
    [378] = 420,
    [379] = 560,
    [380] = 513,
    [381] = 558,
    [382] = 422,
    [383] = 422,
    [384] = 442,
    [385] = 442,
    [386] = 442,
    [387] = 442,
    [388] = 421,
    [389] = 560,
    [390] = 422,
    [391] = 560,
    [392] = 422,
    [393] = 604,
    [394] = 560,
    [395] = 455,
    [396] = 454,
    [397] = 560,
    [398] = 454,
    [399] = 560,
    [400] = 594,
    [401] = 605,
    [402] = 389,
    [403] = 604,
    [404] = 446,
    [405] = 389,
    [406] = 456,
    [407] = 422,
    [408] = 449,
    [409] = 398,
    [410] = 389,
    [411] = 449,
    [412] = 454,
    [413] = 422,
    [414] = 472,
    [415] = 513,
    [416] = 558,
    [417] = 513,
    [418] = 558,
    [419] = 422,
    [420] = 422,
    [421] = 389,
    [422] = 470,
    [423] = 472,
    [424] = 473,
    [425] = 511,
    [426] = 472,
    [427] = 513,
    [428] = 558,
    [429] = 513,
    [430] = 558,
    [431] = 422,
    [432] = 422,
    [433] = 513,
    [434] = 558,
    [435] = 513,
    [436] = 558,
    [437] = 422,
    [438] = 422,
    [439] = 558,
    [440] = 422,
    [441] = 389,
    [442] = 559,
    [443] = 560,
    [444] = 511,
    [445] = 560,
    [446] = 422,
    [447] = 560,
    [448] = 422,
    [449] = 422,
    [450] = 560,
    [451] = 389,
    [452] = 559,
    [453] = 560,
    [454] = 511,
    [455] = 560,
    [456] = 422,
    [457] = 560,
    [458] = 422,
    [459] = 422,
    [460] = 560,
    [461] = 285,
    [462] = 586,
    [463] = 473,
    [464] = 422,
    [465] = 605,
    [466] = 586,
    [467] = 513,
    [468] = 565,
    [469] = 560,
    [470] = 558,
    [471] = 513,
    [472] = 558,
    [473] = 422,
    [474] = 422,
    [475] = 528,
    [476] = 555,
    [477] = 528,
    [478] = 556,
    [479] = 528,
    [480] = 528,
    [481] = 454,
    [482] = 560,
    [483] = 592,
    [484] = 606,
    [485] = 513,
    [486] = 456,
    [487] = 469,
    [488] = 445,
    [489] = 607,
    [490] = 571,
    [491] = 465,
    [492] = 528,
    [493] = 470,
    [494] = 472,
    [495] = 559,
    [496] = 560,
    [497] = 511,
    [498] = 560,
    [499] = 422,
    [500] = 560,
    [501] = 422,
    [502] = 422,
    [503] = 560,
    [504] = 559,
    [505] = 560,
    [506] = 511,
    [507] = 560,
    [508] = 422,
    [509] = 560,
    [510] = 422,
    [511] = 422,
    [512] = 560,
    [513] = 422,
    [514] = 422,
    [515] = 513,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(13),
        [sym__type_declaration] = STATE(342),
        [sym_extern_alias_directive] = STATE(343),
        [sym_using_directive] = STATE(344),
        [sym_namespace_declaration] = STATE(345),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(346),
        [sym__class_modifiers] = STATE(347),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(348),
        [sym__struct_modifiers] = STATE(349),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(350),
        [sym_enum_modifier] = STATE(351),
        [sym__integral_type] = STATE(352),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(353),
        [sym__return_type] = STATE(354),
        [sym_parameter_list] = STATE(355),
        [sym__formal_parameter_list] = STATE(77),
        [sym_parameter] = STATE(356),
        [sym_parameter_modifier] = STATE(357),
        [sym_parameter_array] = STATE(358),
        [sym_array_type] = STATE(359),
        [sym_array_rank_specifier] = STATE(93),
        [sym__attributes] = STATE(360),
        [sym__attribute_section] = STATE(361),
        [sym_attribute_list] = STATE(362),
        [sym_attribute] = STATE(363),
        [sym_attribute_argument_list] = STATE(44),
        [sym__global_attributes] = STATE(364),
        [sym_field_declaration] = STATE(365),
        [sym_field_modifiers] = STATE(366),
        [sym__field_modifiers] = STATE(367),
        [sym_variable_declaration] = STATE(368),
        [sym__type] = STATE(369),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(370),
        [sym_equals_value_clause] = STATE(371),
        [sym__literal] = STATE(144),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym__unicode_escape_sequence] = STATE(334),
        [sym__simple_escape_sequence] = STATE(334),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(145),
        [sym__regular_string_literal_character] = STATE(372),
        [sym__verbatim_string_literal] = STATE(145),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter_list] = STATE(373),
        [sym_type_parameter] = STATE(374),
        [sym_qualified_name] = STATE(375),
        [sym_alias_qualified_name] = STATE(295),
        [sym_name_equals] = STATE(307),
        [sym_static] = STATE(307),
        [aux_sym_compilation_unit_repeat1] = STATE(27),
        [aux_sym_compilation_unit_repeat2] = STATE(376),
        [aux_sym_compilation_unit_repeat3] = STATE(377),
        [aux_sym_compilation_unit_repeat4] = STATE(378),
        [aux_sym_class_declaration_repeat1] = STATE(379),
        [aux_sym_enum_declaration_repeat1] = STATE(380),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym_array_rank_specifier_repeat1] = STATE(96),
        [aux_sym__attributes_repeat1] = STATE(31),
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [aux_sym_variable_declaration_repeat1] = STATE(210),
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
        [sym_qualified_name] = STATE(306),
        [sym_alias_qualified_name] = STATE(295),
        [sym_name_equals] = STATE(307),
        [sym_static] = STATE(307),
        [anon_sym_static] = ACTIONS(129),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(101),
    },
    [4] = {
        [sym_qualified_name] = STATE(294),
        [sym_alias_qualified_name] = STATE(295),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(101),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(137),
        [sym_comment] = ACTIONS(101),
    },
    [6] = {
        [sym__class_modifiers] = STATE(281),
        [sym__struct_modifiers] = STATE(282),
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
        [sym__class_modifiers] = STATE(281),
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
        [sym__class_modifiers] = STATE(281),
        [sym__struct_modifiers] = STATE(282),
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
        [sym__return_type] = STATE(263),
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
        [sym__return_type] = STATE(237),
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
        [sym_enum_member_declaration] = STATE(181),
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
        [sym_equals_value_clause] = STATE(180),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [131] = {
        [aux_sym_enum_declaration_repeat1] = STATE(173),
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
        [sym__literal] = STATE(144),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(145),
        [sym__verbatim_string_literal] = STATE(145),
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
        [sym__unicode_escape_sequence] = STATE(167),
        [sym__simple_escape_sequence] = STATE(167),
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
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [sym__regular_string_literal_character] = STATE(152),
        [aux_sym__regular_string_literal_repeat1] = STATE(153),
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
        [anon_sym_DQUOTE] = ACTIONS(479),
        [sym_comment] = ACTIONS(101),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_RBRACE] = ACTIONS(481),
        [anon_sym_COMMA] = ACTIONS(481),
        [sym_comment] = ACTIONS(101),
    },
    [148] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(483),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(483),
        [sym_comment] = ACTIONS(101),
    },
    [149] = {
        [anon_sym_SQUOTE] = ACTIONS(487),
        [sym__hexadecimal_escape_sequence] = ACTIONS(489),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(491),
        [sym_comment] = ACTIONS(101),
    },
    [150] = {
        [anon_sym_SQUOTE] = ACTIONS(493),
        [sym__hexadecimal_escape_sequence] = ACTIONS(495),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(493),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(493),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(493),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(493),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(493),
        [anon_sym_BSLASH0] = ACTIONS(493),
        [anon_sym_BSLASHa] = ACTIONS(493),
        [anon_sym_BSLASHb] = ACTIONS(493),
        [anon_sym_BSLASHf] = ACTIONS(493),
        [anon_sym_BSLASHn] = ACTIONS(493),
        [anon_sym_BSLASHr] = ACTIONS(493),
        [anon_sym_BSLASHt] = ACTIONS(493),
        [anon_sym_BSLASHv] = ACTIONS(493),
        [anon_sym_DQUOTE] = ACTIONS(493),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(497),
        [sym_comment] = ACTIONS(101),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(499),
        [sym_comment] = ACTIONS(101),
    },
    [152] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(501),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(503),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(503),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(503),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(503),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(503),
        [anon_sym_BSLASH0] = ACTIONS(503),
        [anon_sym_BSLASHa] = ACTIONS(503),
        [anon_sym_BSLASHb] = ACTIONS(503),
        [anon_sym_BSLASHf] = ACTIONS(503),
        [anon_sym_BSLASHn] = ACTIONS(503),
        [anon_sym_BSLASHr] = ACTIONS(503),
        [anon_sym_BSLASHt] = ACTIONS(503),
        [anon_sym_BSLASHv] = ACTIONS(503),
        [anon_sym_DQUOTE] = ACTIONS(503),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(501),
        [sym_comment] = ACTIONS(101),
    },
    [153] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [sym__regular_string_literal_character] = STATE(155),
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
        [anon_sym_DQUOTE] = ACTIONS(505),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(463),
        [sym_comment] = ACTIONS(101),
    },
    [154] = {
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_RBRACE] = ACTIONS(507),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(101),
    },
    [155] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(509),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(511),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(511),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(511),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(511),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(511),
        [anon_sym_BSLASH0] = ACTIONS(511),
        [anon_sym_BSLASHa] = ACTIONS(511),
        [anon_sym_BSLASHb] = ACTIONS(511),
        [anon_sym_BSLASHf] = ACTIONS(511),
        [anon_sym_BSLASHn] = ACTIONS(511),
        [anon_sym_BSLASHr] = ACTIONS(511),
        [anon_sym_BSLASHt] = ACTIONS(511),
        [anon_sym_BSLASHv] = ACTIONS(511),
        [anon_sym_DQUOTE] = ACTIONS(511),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(509),
        [sym_comment] = ACTIONS(101),
    },
    [156] = {
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(513),
        [anon_sym_COMMA] = ACTIONS(513),
        [sym__real_type_suffix] = ACTIONS(515),
        [sym__exponent_part] = ACTIONS(517),
        [sym_comment] = ACTIONS(101),
    },
    [157] = {
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_RBRACE] = ACTIONS(519),
        [anon_sym_COMMA] = ACTIONS(519),
        [sym_comment] = ACTIONS(101),
    },
    [158] = {
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_RBRACE] = ACTIONS(519),
        [anon_sym_COMMA] = ACTIONS(519),
        [sym__real_type_suffix] = ACTIONS(521),
        [sym_comment] = ACTIONS(101),
    },
    [159] = {
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_COMMA] = ACTIONS(523),
        [sym_comment] = ACTIONS(101),
    },
    [160] = {
        [anon_sym_SEMI] = ACTIONS(525),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_COMMA] = ACTIONS(525),
        [sym_comment] = ACTIONS(101),
    },
    [161] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(527),
        [sym_comment] = ACTIONS(101),
    },
    [162] = {
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(513),
        [anon_sym_COMMA] = ACTIONS(513),
        [sym_comment] = ACTIONS(101),
    },
    [163] = {
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(513),
        [anon_sym_COMMA] = ACTIONS(513),
        [sym__real_type_suffix] = ACTIONS(515),
        [sym_comment] = ACTIONS(101),
    },
    [164] = {
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_RBRACE] = ACTIONS(519),
        [anon_sym_COMMA] = ACTIONS(519),
        [sym__real_type_suffix] = ACTIONS(521),
        [sym__exponent_part] = ACTIONS(529),
        [sym_comment] = ACTIONS(101),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_COMMA] = ACTIONS(523),
        [sym__real_type_suffix] = ACTIONS(531),
        [sym_comment] = ACTIONS(101),
    },
    [166] = {
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_RBRACE] = ACTIONS(533),
        [anon_sym_COMMA] = ACTIONS(533),
        [sym_comment] = ACTIONS(101),
    },
    [167] = {
        [anon_sym_SQUOTE] = ACTIONS(535),
        [sym_comment] = ACTIONS(101),
    },
    [168] = {
        [anon_sym_SQUOTE] = ACTIONS(487),
        [sym_comment] = ACTIONS(101),
    },
    [169] = {
        [anon_sym_SQUOTE] = ACTIONS(493),
        [sym_comment] = ACTIONS(101),
    },
    [170] = {
        [anon_sym_SEMI] = ACTIONS(537),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_COMMA] = ACTIONS(537),
        [sym_comment] = ACTIONS(101),
    },
    [171] = {
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
        [sym_const_keyword] = ACTIONS(543),
        [anon_sym_readonly] = ACTIONS(543),
        [anon_sym_volatile] = ACTIONS(543),
        [anon_sym_bool] = ACTIONS(543),
        [anon_sym_decimal] = ACTIONS(543),
        [anon_sym_double] = ACTIONS(543),
        [anon_sym_float] = ACTIONS(543),
        [anon_sym_object] = ACTIONS(543),
        [anon_sym_string] = ACTIONS(543),
        [sym_identifier_name] = ACTIONS(545),
        [sym_comment] = ACTIONS(101),
    },
    [172] = {
        [sym_enum_member_declaration] = STATE(178),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [173] = {
        [anon_sym_RBRACE] = ACTIONS(547),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [174] = {
        [ts_builtin_sym_end] = ACTIONS(551),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_namespace] = ACTIONS(555),
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(555),
        [anon_sym_sealed] = ACTIONS(555),
        [anon_sym_static] = ACTIONS(555),
        [anon_sym_new] = ACTIONS(555),
        [anon_sym_public] = ACTIONS(555),
        [anon_sym_protected] = ACTIONS(555),
        [anon_sym_internal] = ACTIONS(555),
        [anon_sym_private] = ACTIONS(555),
        [anon_sym_struct] = ACTIONS(555),
        [anon_sym_enum] = ACTIONS(555),
        [anon_sym_sbyte] = ACTIONS(555),
        [anon_sym_byte] = ACTIONS(555),
        [anon_sym_short] = ACTIONS(555),
        [anon_sym_ushort] = ACTIONS(555),
        [anon_sym_int] = ACTIONS(555),
        [anon_sym_uint] = ACTIONS(555),
        [anon_sym_long] = ACTIONS(555),
        [anon_sym_ulong] = ACTIONS(555),
        [anon_sym_char] = ACTIONS(555),
        [anon_sym_delegate] = ACTIONS(555),
        [anon_sym_LBRACK] = ACTIONS(551),
        [sym_const_keyword] = ACTIONS(555),
        [anon_sym_readonly] = ACTIONS(555),
        [anon_sym_volatile] = ACTIONS(555),
        [anon_sym_bool] = ACTIONS(555),
        [anon_sym_decimal] = ACTIONS(555),
        [anon_sym_double] = ACTIONS(555),
        [anon_sym_float] = ACTIONS(555),
        [anon_sym_object] = ACTIONS(555),
        [anon_sym_string] = ACTIONS(555),
        [sym_identifier_name] = ACTIONS(557),
        [sym_comment] = ACTIONS(101),
    },
    [175] = {
        [sym_enum_member_declaration] = STATE(176),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [176] = {
        [anon_sym_RBRACE] = ACTIONS(559),
        [anon_sym_COMMA] = ACTIONS(559),
        [sym_comment] = ACTIONS(101),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_namespace] = ACTIONS(563),
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_unsafe] = ACTIONS(563),
        [anon_sym_abstract] = ACTIONS(563),
        [anon_sym_sealed] = ACTIONS(563),
        [anon_sym_static] = ACTIONS(563),
        [anon_sym_new] = ACTIONS(563),
        [anon_sym_public] = ACTIONS(563),
        [anon_sym_protected] = ACTIONS(563),
        [anon_sym_internal] = ACTIONS(563),
        [anon_sym_private] = ACTIONS(563),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(563),
        [anon_sym_sbyte] = ACTIONS(563),
        [anon_sym_byte] = ACTIONS(563),
        [anon_sym_short] = ACTIONS(563),
        [anon_sym_ushort] = ACTIONS(563),
        [anon_sym_int] = ACTIONS(563),
        [anon_sym_uint] = ACTIONS(563),
        [anon_sym_long] = ACTIONS(563),
        [anon_sym_ulong] = ACTIONS(563),
        [anon_sym_char] = ACTIONS(563),
        [anon_sym_delegate] = ACTIONS(563),
        [anon_sym_LBRACK] = ACTIONS(561),
        [sym_const_keyword] = ACTIONS(563),
        [anon_sym_readonly] = ACTIONS(563),
        [anon_sym_volatile] = ACTIONS(563),
        [anon_sym_bool] = ACTIONS(563),
        [anon_sym_decimal] = ACTIONS(563),
        [anon_sym_double] = ACTIONS(563),
        [anon_sym_float] = ACTIONS(563),
        [anon_sym_object] = ACTIONS(563),
        [anon_sym_string] = ACTIONS(563),
        [sym_identifier_name] = ACTIONS(565),
        [sym_comment] = ACTIONS(101),
    },
    [178] = {
        [anon_sym_RBRACE] = ACTIONS(567),
        [anon_sym_COMMA] = ACTIONS(567),
        [sym_comment] = ACTIONS(101),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(551),
        [anon_sym_namespace] = ACTIONS(555),
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(555),
        [anon_sym_sealed] = ACTIONS(555),
        [anon_sym_static] = ACTIONS(555),
        [anon_sym_new] = ACTIONS(555),
        [anon_sym_public] = ACTIONS(555),
        [anon_sym_protected] = ACTIONS(555),
        [anon_sym_internal] = ACTIONS(555),
        [anon_sym_private] = ACTIONS(555),
        [anon_sym_struct] = ACTIONS(555),
        [anon_sym_enum] = ACTIONS(555),
        [anon_sym_sbyte] = ACTIONS(555),
        [anon_sym_byte] = ACTIONS(555),
        [anon_sym_short] = ACTIONS(555),
        [anon_sym_ushort] = ACTIONS(555),
        [anon_sym_int] = ACTIONS(555),
        [anon_sym_uint] = ACTIONS(555),
        [anon_sym_long] = ACTIONS(555),
        [anon_sym_ulong] = ACTIONS(555),
        [anon_sym_char] = ACTIONS(555),
        [anon_sym_delegate] = ACTIONS(555),
        [anon_sym_LBRACK] = ACTIONS(551),
        [sym_const_keyword] = ACTIONS(555),
        [anon_sym_readonly] = ACTIONS(555),
        [anon_sym_volatile] = ACTIONS(555),
        [anon_sym_bool] = ACTIONS(555),
        [anon_sym_decimal] = ACTIONS(555),
        [anon_sym_double] = ACTIONS(555),
        [anon_sym_float] = ACTIONS(555),
        [anon_sym_object] = ACTIONS(555),
        [anon_sym_string] = ACTIONS(555),
        [sym_identifier_name] = ACTIONS(557),
        [sym_comment] = ACTIONS(101),
    },
    [180] = {
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [sym_comment] = ACTIONS(101),
    },
    [181] = {
        [aux_sym_enum_declaration_repeat1] = STATE(183),
        [anon_sym_RBRACE] = ACTIONS(569),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_namespace] = ACTIONS(575),
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(575),
        [anon_sym_unsafe] = ACTIONS(575),
        [anon_sym_abstract] = ACTIONS(575),
        [anon_sym_sealed] = ACTIONS(575),
        [anon_sym_static] = ACTIONS(575),
        [anon_sym_new] = ACTIONS(575),
        [anon_sym_public] = ACTIONS(575),
        [anon_sym_protected] = ACTIONS(575),
        [anon_sym_internal] = ACTIONS(575),
        [anon_sym_private] = ACTIONS(575),
        [anon_sym_struct] = ACTIONS(575),
        [anon_sym_enum] = ACTIONS(575),
        [anon_sym_sbyte] = ACTIONS(575),
        [anon_sym_byte] = ACTIONS(575),
        [anon_sym_short] = ACTIONS(575),
        [anon_sym_ushort] = ACTIONS(575),
        [anon_sym_int] = ACTIONS(575),
        [anon_sym_uint] = ACTIONS(575),
        [anon_sym_long] = ACTIONS(575),
        [anon_sym_ulong] = ACTIONS(575),
        [anon_sym_char] = ACTIONS(575),
        [anon_sym_delegate] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(571),
        [sym_const_keyword] = ACTIONS(575),
        [anon_sym_readonly] = ACTIONS(575),
        [anon_sym_volatile] = ACTIONS(575),
        [anon_sym_bool] = ACTIONS(575),
        [anon_sym_decimal] = ACTIONS(575),
        [anon_sym_double] = ACTIONS(575),
        [anon_sym_float] = ACTIONS(575),
        [anon_sym_object] = ACTIONS(575),
        [anon_sym_string] = ACTIONS(575),
        [sym_identifier_name] = ACTIONS(577),
        [sym_comment] = ACTIONS(101),
    },
    [183] = {
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [184] = {
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_SEMI] = ACTIONS(583),
        [anon_sym_namespace] = ACTIONS(585),
        [anon_sym_RBRACE] = ACTIONS(581),
        [anon_sym_class] = ACTIONS(585),
        [anon_sym_unsafe] = ACTIONS(585),
        [anon_sym_abstract] = ACTIONS(585),
        [anon_sym_sealed] = ACTIONS(585),
        [anon_sym_static] = ACTIONS(585),
        [anon_sym_new] = ACTIONS(585),
        [anon_sym_public] = ACTIONS(585),
        [anon_sym_protected] = ACTIONS(585),
        [anon_sym_internal] = ACTIONS(585),
        [anon_sym_private] = ACTIONS(585),
        [anon_sym_struct] = ACTIONS(585),
        [anon_sym_enum] = ACTIONS(585),
        [anon_sym_sbyte] = ACTIONS(585),
        [anon_sym_byte] = ACTIONS(585),
        [anon_sym_short] = ACTIONS(585),
        [anon_sym_ushort] = ACTIONS(585),
        [anon_sym_int] = ACTIONS(585),
        [anon_sym_uint] = ACTIONS(585),
        [anon_sym_long] = ACTIONS(585),
        [anon_sym_ulong] = ACTIONS(585),
        [anon_sym_char] = ACTIONS(585),
        [anon_sym_delegate] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(581),
        [sym_const_keyword] = ACTIONS(585),
        [anon_sym_readonly] = ACTIONS(585),
        [anon_sym_volatile] = ACTIONS(585),
        [anon_sym_bool] = ACTIONS(585),
        [anon_sym_decimal] = ACTIONS(585),
        [anon_sym_double] = ACTIONS(585),
        [anon_sym_float] = ACTIONS(585),
        [anon_sym_object] = ACTIONS(585),
        [anon_sym_string] = ACTIONS(585),
        [sym_identifier_name] = ACTIONS(587),
        [sym_comment] = ACTIONS(101),
    },
    [185] = {
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
        [sym_const_keyword] = ACTIONS(543),
        [anon_sym_readonly] = ACTIONS(543),
        [anon_sym_volatile] = ACTIONS(543),
        [anon_sym_bool] = ACTIONS(543),
        [anon_sym_decimal] = ACTIONS(543),
        [anon_sym_double] = ACTIONS(543),
        [anon_sym_float] = ACTIONS(543),
        [anon_sym_object] = ACTIONS(543),
        [anon_sym_string] = ACTIONS(543),
        [sym_identifier_name] = ACTIONS(545),
        [sym_comment] = ACTIONS(101),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_namespace] = ACTIONS(585),
        [anon_sym_RBRACE] = ACTIONS(581),
        [anon_sym_class] = ACTIONS(585),
        [anon_sym_unsafe] = ACTIONS(585),
        [anon_sym_abstract] = ACTIONS(585),
        [anon_sym_sealed] = ACTIONS(585),
        [anon_sym_static] = ACTIONS(585),
        [anon_sym_new] = ACTIONS(585),
        [anon_sym_public] = ACTIONS(585),
        [anon_sym_protected] = ACTIONS(585),
        [anon_sym_internal] = ACTIONS(585),
        [anon_sym_private] = ACTIONS(585),
        [anon_sym_struct] = ACTIONS(585),
        [anon_sym_enum] = ACTIONS(585),
        [anon_sym_sbyte] = ACTIONS(585),
        [anon_sym_byte] = ACTIONS(585),
        [anon_sym_short] = ACTIONS(585),
        [anon_sym_ushort] = ACTIONS(585),
        [anon_sym_int] = ACTIONS(585),
        [anon_sym_uint] = ACTIONS(585),
        [anon_sym_long] = ACTIONS(585),
        [anon_sym_ulong] = ACTIONS(585),
        [anon_sym_char] = ACTIONS(585),
        [anon_sym_delegate] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(581),
        [sym_const_keyword] = ACTIONS(585),
        [anon_sym_readonly] = ACTIONS(585),
        [anon_sym_volatile] = ACTIONS(585),
        [anon_sym_bool] = ACTIONS(585),
        [anon_sym_decimal] = ACTIONS(585),
        [anon_sym_double] = ACTIONS(585),
        [anon_sym_float] = ACTIONS(585),
        [anon_sym_object] = ACTIONS(585),
        [anon_sym_string] = ACTIONS(585),
        [sym_identifier_name] = ACTIONS(587),
        [sym_comment] = ACTIONS(101),
    },
    [187] = {
        [sym_identifier_name] = ACTIONS(589),
        [sym_comment] = ACTIONS(101),
    },
    [188] = {
        [sym_type_parameter_list] = STATE(190),
        [anon_sym_LBRACE] = ACTIONS(591),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [189] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(226),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [190] = {
        [anon_sym_LBRACE] = ACTIONS(615),
        [sym_comment] = ACTIONS(101),
    },
    [191] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(204),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(617),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [192] = {
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
        [sym_const_keyword] = ACTIONS(621),
        [anon_sym_readonly] = ACTIONS(621),
        [anon_sym_volatile] = ACTIONS(621),
        [anon_sym_bool] = ACTIONS(621),
        [anon_sym_decimal] = ACTIONS(621),
        [anon_sym_double] = ACTIONS(621),
        [anon_sym_float] = ACTIONS(621),
        [anon_sym_object] = ACTIONS(621),
        [anon_sym_string] = ACTIONS(621),
        [sym_identifier_name] = ACTIONS(623),
        [sym_comment] = ACTIONS(101),
    },
    [193] = {
        [sym__class_modifiers] = STATE(281),
        [sym__struct_modifiers] = STATE(282),
        [sym__field_modifiers] = STATE(262),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_unsafe] = ACTIONS(627),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(627),
        [anon_sym_public] = ACTIONS(627),
        [anon_sym_protected] = ACTIONS(627),
        [anon_sym_internal] = ACTIONS(627),
        [anon_sym_private] = ACTIONS(627),
        [anon_sym_struct] = ACTIONS(629),
        [anon_sym_sbyte] = ACTIONS(631),
        [anon_sym_byte] = ACTIONS(631),
        [anon_sym_short] = ACTIONS(631),
        [anon_sym_ushort] = ACTIONS(631),
        [anon_sym_int] = ACTIONS(631),
        [anon_sym_uint] = ACTIONS(631),
        [anon_sym_long] = ACTIONS(631),
        [anon_sym_ulong] = ACTIONS(631),
        [anon_sym_char] = ACTIONS(631),
        [anon_sym_delegate] = ACTIONS(633),
        [sym_const_keyword] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(631),
        [anon_sym_decimal] = ACTIONS(631),
        [anon_sym_double] = ACTIONS(631),
        [anon_sym_float] = ACTIONS(631),
        [anon_sym_object] = ACTIONS(631),
        [anon_sym_string] = ACTIONS(631),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(101),
    },
    [194] = {
        [sym__class_modifiers] = STATE(281),
        [sym__field_modifiers] = STATE(262),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_sbyte] = ACTIONS(631),
        [anon_sym_byte] = ACTIONS(631),
        [anon_sym_short] = ACTIONS(631),
        [anon_sym_ushort] = ACTIONS(631),
        [anon_sym_int] = ACTIONS(631),
        [anon_sym_uint] = ACTIONS(631),
        [anon_sym_long] = ACTIONS(631),
        [anon_sym_ulong] = ACTIONS(631),
        [anon_sym_char] = ACTIONS(631),
        [sym_const_keyword] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(631),
        [anon_sym_decimal] = ACTIONS(631),
        [anon_sym_double] = ACTIONS(631),
        [anon_sym_float] = ACTIONS(631),
        [anon_sym_object] = ACTIONS(631),
        [anon_sym_string] = ACTIONS(631),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(101),
    },
    [195] = {
        [sym__class_modifiers] = STATE(281),
        [sym__struct_modifiers] = STATE(282),
        [sym__field_modifiers] = STATE(262),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_unsafe] = ACTIONS(627),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(627),
        [anon_sym_public] = ACTIONS(627),
        [anon_sym_protected] = ACTIONS(627),
        [anon_sym_internal] = ACTIONS(627),
        [anon_sym_private] = ACTIONS(627),
        [anon_sym_struct] = ACTIONS(629),
        [anon_sym_enum] = ACTIONS(637),
        [anon_sym_sbyte] = ACTIONS(631),
        [anon_sym_byte] = ACTIONS(631),
        [anon_sym_short] = ACTIONS(631),
        [anon_sym_ushort] = ACTIONS(631),
        [anon_sym_int] = ACTIONS(631),
        [anon_sym_uint] = ACTIONS(631),
        [anon_sym_long] = ACTIONS(631),
        [anon_sym_ulong] = ACTIONS(631),
        [anon_sym_char] = ACTIONS(631),
        [anon_sym_delegate] = ACTIONS(633),
        [sym_const_keyword] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(631),
        [anon_sym_decimal] = ACTIONS(631),
        [anon_sym_double] = ACTIONS(631),
        [anon_sym_float] = ACTIONS(631),
        [anon_sym_object] = ACTIONS(631),
        [anon_sym_string] = ACTIONS(631),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(101),
    },
    [196] = {
        [sym_variable_declaration] = STATE(217),
        [sym__type] = STATE(203),
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
    [197] = {
        [sym__field_modifiers] = STATE(262),
        [anon_sym_unsafe] = ACTIONS(613),
        [anon_sym_static] = ACTIONS(613),
        [anon_sym_new] = ACTIONS(613),
        [anon_sym_public] = ACTIONS(613),
        [anon_sym_protected] = ACTIONS(613),
        [anon_sym_internal] = ACTIONS(613),
        [anon_sym_private] = ACTIONS(613),
        [anon_sym_sbyte] = ACTIONS(631),
        [anon_sym_byte] = ACTIONS(631),
        [anon_sym_short] = ACTIONS(631),
        [anon_sym_ushort] = ACTIONS(631),
        [anon_sym_int] = ACTIONS(631),
        [anon_sym_uint] = ACTIONS(631),
        [anon_sym_long] = ACTIONS(631),
        [anon_sym_ulong] = ACTIONS(631),
        [anon_sym_char] = ACTIONS(631),
        [sym_const_keyword] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(631),
        [anon_sym_decimal] = ACTIONS(631),
        [anon_sym_double] = ACTIONS(631),
        [anon_sym_float] = ACTIONS(631),
        [anon_sym_object] = ACTIONS(631),
        [anon_sym_string] = ACTIONS(631),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(101),
    },
    [198] = {
        [anon_sym_RBRACE] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_unsafe] = ACTIONS(641),
        [anon_sym_abstract] = ACTIONS(641),
        [anon_sym_sealed] = ACTIONS(641),
        [anon_sym_static] = ACTIONS(641),
        [anon_sym_new] = ACTIONS(641),
        [anon_sym_public] = ACTIONS(641),
        [anon_sym_protected] = ACTIONS(641),
        [anon_sym_internal] = ACTIONS(641),
        [anon_sym_private] = ACTIONS(641),
        [anon_sym_struct] = ACTIONS(641),
        [anon_sym_enum] = ACTIONS(641),
        [anon_sym_sbyte] = ACTIONS(641),
        [anon_sym_byte] = ACTIONS(641),
        [anon_sym_short] = ACTIONS(641),
        [anon_sym_ushort] = ACTIONS(641),
        [anon_sym_int] = ACTIONS(641),
        [anon_sym_uint] = ACTIONS(641),
        [anon_sym_long] = ACTIONS(641),
        [anon_sym_ulong] = ACTIONS(641),
        [anon_sym_char] = ACTIONS(641),
        [anon_sym_delegate] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(639),
        [sym_const_keyword] = ACTIONS(641),
        [anon_sym_readonly] = ACTIONS(641),
        [anon_sym_volatile] = ACTIONS(641),
        [anon_sym_bool] = ACTIONS(641),
        [anon_sym_decimal] = ACTIONS(641),
        [anon_sym_double] = ACTIONS(641),
        [anon_sym_float] = ACTIONS(641),
        [anon_sym_object] = ACTIONS(641),
        [anon_sym_string] = ACTIONS(641),
        [sym_identifier_name] = ACTIONS(643),
        [sym_comment] = ACTIONS(101),
    },
    [199] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(221),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(217),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(647),
        [anon_sym_enum] = ACTIONS(649),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(651),
        [sym_const_keyword] = ACTIONS(653),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [200] = {
        [sym_variable_declaration] = STATE(217),
        [sym__type] = STATE(203),
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
        [sym_const_keyword] = ACTIONS(653),
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
        [anon_sym_sbyte] = ACTIONS(655),
        [anon_sym_byte] = ACTIONS(655),
        [anon_sym_short] = ACTIONS(655),
        [anon_sym_ushort] = ACTIONS(655),
        [anon_sym_int] = ACTIONS(655),
        [anon_sym_uint] = ACTIONS(655),
        [anon_sym_long] = ACTIONS(655),
        [anon_sym_ulong] = ACTIONS(655),
        [anon_sym_char] = ACTIONS(655),
        [sym_const_keyword] = ACTIONS(655),
        [anon_sym_bool] = ACTIONS(655),
        [anon_sym_decimal] = ACTIONS(655),
        [anon_sym_double] = ACTIONS(655),
        [anon_sym_float] = ACTIONS(655),
        [anon_sym_object] = ACTIONS(655),
        [anon_sym_string] = ACTIONS(655),
        [sym_identifier_name] = ACTIONS(657),
        [sym_comment] = ACTIONS(101),
    },
    [202] = {
        [anon_sym_SEMI] = ACTIONS(659),
        [sym_comment] = ACTIONS(101),
    },
    [203] = {
        [sym_variable_declarator] = STATE(208),
        [sym_identifier_name] = ACTIONS(661),
        [sym_comment] = ACTIONS(101),
    },
    [204] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(663),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [ts_builtin_sym_end] = ACTIONS(665),
        [anon_sym_namespace] = ACTIONS(667),
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
        [sym_const_keyword] = ACTIONS(667),
        [anon_sym_readonly] = ACTIONS(667),
        [anon_sym_volatile] = ACTIONS(667),
        [anon_sym_bool] = ACTIONS(667),
        [anon_sym_decimal] = ACTIONS(667),
        [anon_sym_double] = ACTIONS(667),
        [anon_sym_float] = ACTIONS(667),
        [anon_sym_object] = ACTIONS(667),
        [anon_sym_string] = ACTIONS(667),
        [sym_identifier_name] = ACTIONS(669),
        [sym_comment] = ACTIONS(101),
    },
    [206] = {
        [anon_sym_RBRACE] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_unsafe] = ACTIONS(673),
        [anon_sym_abstract] = ACTIONS(673),
        [anon_sym_sealed] = ACTIONS(673),
        [anon_sym_static] = ACTIONS(673),
        [anon_sym_new] = ACTIONS(673),
        [anon_sym_public] = ACTIONS(673),
        [anon_sym_protected] = ACTIONS(673),
        [anon_sym_internal] = ACTIONS(673),
        [anon_sym_private] = ACTIONS(673),
        [anon_sym_struct] = ACTIONS(673),
        [anon_sym_enum] = ACTIONS(673),
        [anon_sym_sbyte] = ACTIONS(673),
        [anon_sym_byte] = ACTIONS(673),
        [anon_sym_short] = ACTIONS(673),
        [anon_sym_ushort] = ACTIONS(673),
        [anon_sym_int] = ACTIONS(673),
        [anon_sym_uint] = ACTIONS(673),
        [anon_sym_long] = ACTIONS(673),
        [anon_sym_ulong] = ACTIONS(673),
        [anon_sym_char] = ACTIONS(673),
        [anon_sym_delegate] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(671),
        [sym_const_keyword] = ACTIONS(673),
        [anon_sym_readonly] = ACTIONS(673),
        [anon_sym_volatile] = ACTIONS(673),
        [anon_sym_bool] = ACTIONS(673),
        [anon_sym_decimal] = ACTIONS(673),
        [anon_sym_double] = ACTIONS(673),
        [anon_sym_float] = ACTIONS(673),
        [anon_sym_object] = ACTIONS(673),
        [anon_sym_string] = ACTIONS(673),
        [sym_identifier_name] = ACTIONS(675),
        [sym_comment] = ACTIONS(101),
    },
    [207] = {
        [sym_equals_value_clause] = STATE(214),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(677),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [208] = {
        [aux_sym_variable_declaration_repeat1] = STATE(210),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_COMMA] = ACTIONS(681),
        [sym_comment] = ACTIONS(101),
    },
    [209] = {
        [sym_variable_declarator] = STATE(213),
        [sym_identifier_name] = ACTIONS(661),
        [sym_comment] = ACTIONS(101),
    },
    [210] = {
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_COMMA] = ACTIONS(685),
        [sym_comment] = ACTIONS(101),
    },
    [211] = {
        [sym_variable_declarator] = STATE(212),
        [sym_identifier_name] = ACTIONS(661),
        [sym_comment] = ACTIONS(101),
    },
    [212] = {
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_COMMA] = ACTIONS(687),
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
        [sym_const_keyword] = ACTIONS(695),
        [anon_sym_readonly] = ACTIONS(695),
        [anon_sym_volatile] = ACTIONS(695),
        [anon_sym_bool] = ACTIONS(695),
        [anon_sym_decimal] = ACTIONS(695),
        [anon_sym_double] = ACTIONS(695),
        [anon_sym_float] = ACTIONS(695),
        [anon_sym_object] = ACTIONS(695),
        [anon_sym_string] = ACTIONS(695),
        [sym_identifier_name] = ACTIONS(697),
        [sym_comment] = ACTIONS(101),
    },
    [216] = {
        [sym_variable_declaration] = STATE(219),
        [sym__type] = STATE(203),
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
    [217] = {
        [anon_sym_SEMI] = ACTIONS(699),
        [sym_comment] = ACTIONS(101),
    },
    [218] = {
        [anon_sym_RBRACE] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(703),
        [anon_sym_unsafe] = ACTIONS(703),
        [anon_sym_abstract] = ACTIONS(703),
        [anon_sym_sealed] = ACTIONS(703),
        [anon_sym_static] = ACTIONS(703),
        [anon_sym_new] = ACTIONS(703),
        [anon_sym_public] = ACTIONS(703),
        [anon_sym_protected] = ACTIONS(703),
        [anon_sym_internal] = ACTIONS(703),
        [anon_sym_private] = ACTIONS(703),
        [anon_sym_struct] = ACTIONS(703),
        [anon_sym_enum] = ACTIONS(703),
        [anon_sym_sbyte] = ACTIONS(703),
        [anon_sym_byte] = ACTIONS(703),
        [anon_sym_short] = ACTIONS(703),
        [anon_sym_ushort] = ACTIONS(703),
        [anon_sym_int] = ACTIONS(703),
        [anon_sym_uint] = ACTIONS(703),
        [anon_sym_long] = ACTIONS(703),
        [anon_sym_ulong] = ACTIONS(703),
        [anon_sym_char] = ACTIONS(703),
        [anon_sym_delegate] = ACTIONS(703),
        [anon_sym_LBRACK] = ACTIONS(701),
        [sym_const_keyword] = ACTIONS(703),
        [anon_sym_readonly] = ACTIONS(703),
        [anon_sym_volatile] = ACTIONS(703),
        [anon_sym_bool] = ACTIONS(703),
        [anon_sym_decimal] = ACTIONS(703),
        [anon_sym_double] = ACTIONS(703),
        [anon_sym_float] = ACTIONS(703),
        [anon_sym_object] = ACTIONS(703),
        [anon_sym_string] = ACTIONS(703),
        [sym_identifier_name] = ACTIONS(705),
        [sym_comment] = ACTIONS(101),
    },
    [219] = {
        [anon_sym_SEMI] = ACTIONS(707),
        [sym_comment] = ACTIONS(101),
    },
    [220] = {
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
        [sym_const_keyword] = ACTIONS(711),
        [anon_sym_readonly] = ACTIONS(711),
        [anon_sym_volatile] = ACTIONS(711),
        [anon_sym_bool] = ACTIONS(711),
        [anon_sym_decimal] = ACTIONS(711),
        [anon_sym_double] = ACTIONS(711),
        [anon_sym_float] = ACTIONS(711),
        [anon_sym_object] = ACTIONS(711),
        [anon_sym_string] = ACTIONS(711),
        [sym_identifier_name] = ACTIONS(713),
        [sym_comment] = ACTIONS(101),
    },
    [221] = {
        [sym_variable_declaration] = STATE(219),
        [sym__type] = STATE(203),
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
        [sym_const_keyword] = ACTIONS(715),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [222] = {
        [sym_variable_declaration] = STATE(223),
        [sym__type] = STATE(203),
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
    [223] = {
        [anon_sym_SEMI] = ACTIONS(717),
        [sym_comment] = ACTIONS(101),
    },
    [224] = {
        [anon_sym_RBRACE] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(721),
        [anon_sym_unsafe] = ACTIONS(721),
        [anon_sym_abstract] = ACTIONS(721),
        [anon_sym_sealed] = ACTIONS(721),
        [anon_sym_static] = ACTIONS(721),
        [anon_sym_new] = ACTIONS(721),
        [anon_sym_public] = ACTIONS(721),
        [anon_sym_protected] = ACTIONS(721),
        [anon_sym_internal] = ACTIONS(721),
        [anon_sym_private] = ACTIONS(721),
        [anon_sym_struct] = ACTIONS(721),
        [anon_sym_enum] = ACTIONS(721),
        [anon_sym_sbyte] = ACTIONS(721),
        [anon_sym_byte] = ACTIONS(721),
        [anon_sym_short] = ACTIONS(721),
        [anon_sym_ushort] = ACTIONS(721),
        [anon_sym_int] = ACTIONS(721),
        [anon_sym_uint] = ACTIONS(721),
        [anon_sym_long] = ACTIONS(721),
        [anon_sym_ulong] = ACTIONS(721),
        [anon_sym_char] = ACTIONS(721),
        [anon_sym_delegate] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(719),
        [sym_const_keyword] = ACTIONS(721),
        [anon_sym_readonly] = ACTIONS(721),
        [anon_sym_volatile] = ACTIONS(721),
        [anon_sym_bool] = ACTIONS(721),
        [anon_sym_decimal] = ACTIONS(721),
        [anon_sym_double] = ACTIONS(721),
        [anon_sym_float] = ACTIONS(721),
        [anon_sym_object] = ACTIONS(721),
        [anon_sym_string] = ACTIONS(721),
        [sym_identifier_name] = ACTIONS(723),
        [sym_comment] = ACTIONS(101),
    },
    [225] = {
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
        [sym_const_keyword] = ACTIONS(727),
        [anon_sym_readonly] = ACTIONS(727),
        [anon_sym_volatile] = ACTIONS(727),
        [anon_sym_bool] = ACTIONS(727),
        [anon_sym_decimal] = ACTIONS(727),
        [anon_sym_double] = ACTIONS(727),
        [anon_sym_float] = ACTIONS(727),
        [anon_sym_object] = ACTIONS(727),
        [anon_sym_string] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(101),
    },
    [226] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(617),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [sym_identifier_name] = ACTIONS(731),
        [sym_comment] = ACTIONS(101),
    },
    [228] = {
        [sym_type_parameter_list] = STATE(230),
        [anon_sym_LBRACE] = ACTIONS(733),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [229] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(236),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [230] = {
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_comment] = ACTIONS(101),
    },
    [231] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(233),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [232] = {
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_namespace] = ACTIONS(743),
        [anon_sym_RBRACE] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(743),
        [anon_sym_unsafe] = ACTIONS(743),
        [anon_sym_abstract] = ACTIONS(743),
        [anon_sym_sealed] = ACTIONS(743),
        [anon_sym_static] = ACTIONS(743),
        [anon_sym_new] = ACTIONS(743),
        [anon_sym_public] = ACTIONS(743),
        [anon_sym_protected] = ACTIONS(743),
        [anon_sym_internal] = ACTIONS(743),
        [anon_sym_private] = ACTIONS(743),
        [anon_sym_struct] = ACTIONS(743),
        [anon_sym_enum] = ACTIONS(743),
        [anon_sym_sbyte] = ACTIONS(743),
        [anon_sym_byte] = ACTIONS(743),
        [anon_sym_short] = ACTIONS(743),
        [anon_sym_ushort] = ACTIONS(743),
        [anon_sym_int] = ACTIONS(743),
        [anon_sym_uint] = ACTIONS(743),
        [anon_sym_long] = ACTIONS(743),
        [anon_sym_ulong] = ACTIONS(743),
        [anon_sym_char] = ACTIONS(743),
        [anon_sym_delegate] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(741),
        [sym_const_keyword] = ACTIONS(743),
        [anon_sym_readonly] = ACTIONS(743),
        [anon_sym_volatile] = ACTIONS(743),
        [anon_sym_bool] = ACTIONS(743),
        [anon_sym_decimal] = ACTIONS(743),
        [anon_sym_double] = ACTIONS(743),
        [anon_sym_float] = ACTIONS(743),
        [anon_sym_object] = ACTIONS(743),
        [anon_sym_string] = ACTIONS(743),
        [sym_identifier_name] = ACTIONS(745),
        [sym_comment] = ACTIONS(101),
    },
    [233] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(747),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [sym_const_keyword] = ACTIONS(751),
        [anon_sym_readonly] = ACTIONS(751),
        [anon_sym_volatile] = ACTIONS(751),
        [anon_sym_bool] = ACTIONS(751),
        [anon_sym_decimal] = ACTIONS(751),
        [anon_sym_double] = ACTIONS(751),
        [anon_sym_float] = ACTIONS(751),
        [anon_sym_object] = ACTIONS(751),
        [anon_sym_string] = ACTIONS(751),
        [sym_identifier_name] = ACTIONS(753),
        [sym_comment] = ACTIONS(101),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(755),
        [anon_sym_namespace] = ACTIONS(757),
        [anon_sym_RBRACE] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_unsafe] = ACTIONS(757),
        [anon_sym_abstract] = ACTIONS(757),
        [anon_sym_sealed] = ACTIONS(757),
        [anon_sym_static] = ACTIONS(757),
        [anon_sym_new] = ACTIONS(757),
        [anon_sym_public] = ACTIONS(757),
        [anon_sym_protected] = ACTIONS(757),
        [anon_sym_internal] = ACTIONS(757),
        [anon_sym_private] = ACTIONS(757),
        [anon_sym_struct] = ACTIONS(757),
        [anon_sym_enum] = ACTIONS(757),
        [anon_sym_sbyte] = ACTIONS(757),
        [anon_sym_byte] = ACTIONS(757),
        [anon_sym_short] = ACTIONS(757),
        [anon_sym_ushort] = ACTIONS(757),
        [anon_sym_int] = ACTIONS(757),
        [anon_sym_uint] = ACTIONS(757),
        [anon_sym_long] = ACTIONS(757),
        [anon_sym_ulong] = ACTIONS(757),
        [anon_sym_char] = ACTIONS(757),
        [anon_sym_delegate] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(755),
        [sym_const_keyword] = ACTIONS(757),
        [anon_sym_readonly] = ACTIONS(757),
        [anon_sym_volatile] = ACTIONS(757),
        [anon_sym_bool] = ACTIONS(757),
        [anon_sym_decimal] = ACTIONS(757),
        [anon_sym_double] = ACTIONS(757),
        [anon_sym_float] = ACTIONS(757),
        [anon_sym_object] = ACTIONS(757),
        [anon_sym_string] = ACTIONS(757),
        [sym_identifier_name] = ACTIONS(759),
        [sym_comment] = ACTIONS(101),
    },
    [236] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [237] = {
        [sym_identifier_name] = ACTIONS(761),
        [sym_comment] = ACTIONS(101),
    },
    [238] = {
        [sym_parameter_list] = STATE(239),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [239] = {
        [anon_sym_SEMI] = ACTIONS(763),
        [sym_comment] = ACTIONS(101),
    },
    [240] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_namespace] = ACTIONS(767),
        [anon_sym_RBRACE] = ACTIONS(765),
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
        [anon_sym_LBRACK] = ACTIONS(765),
        [sym_const_keyword] = ACTIONS(767),
        [anon_sym_readonly] = ACTIONS(767),
        [anon_sym_volatile] = ACTIONS(767),
        [anon_sym_bool] = ACTIONS(767),
        [anon_sym_decimal] = ACTIONS(767),
        [anon_sym_double] = ACTIONS(767),
        [anon_sym_float] = ACTIONS(767),
        [anon_sym_object] = ACTIONS(767),
        [anon_sym_string] = ACTIONS(767),
        [sym_identifier_name] = ACTIONS(769),
        [sym_comment] = ACTIONS(101),
    },
    [241] = {
        [anon_sym_LBRACE] = ACTIONS(771),
        [anon_sym_COLON] = ACTIONS(773),
        [sym_comment] = ACTIONS(101),
    },
    [242] = {
        [sym_enum_member_declaration] = STATE(248),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [243] = {
        [sym__integral_type] = STATE(244),
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
    [244] = {
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_comment] = ACTIONS(101),
    },
    [245] = {
        [sym_enum_member_declaration] = STATE(246),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [246] = {
        [aux_sym_enum_declaration_repeat1] = STATE(247),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [247] = {
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [248] = {
        [aux_sym_enum_declaration_repeat1] = STATE(250),
        [anon_sym_RBRACE] = ACTIONS(777),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [249] = {
        [ts_builtin_sym_end] = ACTIONS(779),
        [anon_sym_SEMI] = ACTIONS(781),
        [anon_sym_namespace] = ACTIONS(783),
        [anon_sym_RBRACE] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(783),
        [anon_sym_unsafe] = ACTIONS(783),
        [anon_sym_abstract] = ACTIONS(783),
        [anon_sym_sealed] = ACTIONS(783),
        [anon_sym_static] = ACTIONS(783),
        [anon_sym_new] = ACTIONS(783),
        [anon_sym_public] = ACTIONS(783),
        [anon_sym_protected] = ACTIONS(783),
        [anon_sym_internal] = ACTIONS(783),
        [anon_sym_private] = ACTIONS(783),
        [anon_sym_struct] = ACTIONS(783),
        [anon_sym_enum] = ACTIONS(783),
        [anon_sym_sbyte] = ACTIONS(783),
        [anon_sym_byte] = ACTIONS(783),
        [anon_sym_short] = ACTIONS(783),
        [anon_sym_ushort] = ACTIONS(783),
        [anon_sym_int] = ACTIONS(783),
        [anon_sym_uint] = ACTIONS(783),
        [anon_sym_long] = ACTIONS(783),
        [anon_sym_ulong] = ACTIONS(783),
        [anon_sym_char] = ACTIONS(783),
        [anon_sym_delegate] = ACTIONS(783),
        [anon_sym_LBRACK] = ACTIONS(779),
        [sym_const_keyword] = ACTIONS(783),
        [anon_sym_readonly] = ACTIONS(783),
        [anon_sym_volatile] = ACTIONS(783),
        [anon_sym_bool] = ACTIONS(783),
        [anon_sym_decimal] = ACTIONS(783),
        [anon_sym_double] = ACTIONS(783),
        [anon_sym_float] = ACTIONS(783),
        [anon_sym_object] = ACTIONS(783),
        [anon_sym_string] = ACTIONS(783),
        [sym_identifier_name] = ACTIONS(785),
        [sym_comment] = ACTIONS(101),
    },
    [250] = {
        [anon_sym_RBRACE] = ACTIONS(569),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_namespace] = ACTIONS(575),
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(575),
        [anon_sym_unsafe] = ACTIONS(575),
        [anon_sym_abstract] = ACTIONS(575),
        [anon_sym_sealed] = ACTIONS(575),
        [anon_sym_static] = ACTIONS(575),
        [anon_sym_new] = ACTIONS(575),
        [anon_sym_public] = ACTIONS(575),
        [anon_sym_protected] = ACTIONS(575),
        [anon_sym_internal] = ACTIONS(575),
        [anon_sym_private] = ACTIONS(575),
        [anon_sym_struct] = ACTIONS(575),
        [anon_sym_enum] = ACTIONS(575),
        [anon_sym_sbyte] = ACTIONS(575),
        [anon_sym_byte] = ACTIONS(575),
        [anon_sym_short] = ACTIONS(575),
        [anon_sym_ushort] = ACTIONS(575),
        [anon_sym_int] = ACTIONS(575),
        [anon_sym_uint] = ACTIONS(575),
        [anon_sym_long] = ACTIONS(575),
        [anon_sym_ulong] = ACTIONS(575),
        [anon_sym_char] = ACTIONS(575),
        [anon_sym_delegate] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(571),
        [sym_const_keyword] = ACTIONS(575),
        [anon_sym_readonly] = ACTIONS(575),
        [anon_sym_volatile] = ACTIONS(575),
        [anon_sym_bool] = ACTIONS(575),
        [anon_sym_decimal] = ACTIONS(575),
        [anon_sym_double] = ACTIONS(575),
        [anon_sym_float] = ACTIONS(575),
        [anon_sym_object] = ACTIONS(575),
        [anon_sym_string] = ACTIONS(575),
        [sym_identifier_name] = ACTIONS(577),
        [sym_comment] = ACTIONS(101),
    },
    [252] = {
        [sym_type_parameter_list] = STATE(254),
        [anon_sym_LBRACE] = ACTIONS(787),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [253] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(256),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [254] = {
        [anon_sym_LBRACE] = ACTIONS(591),
        [sym_comment] = ACTIONS(101),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(791),
        [anon_sym_namespace] = ACTIONS(793),
        [anon_sym_RBRACE] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_unsafe] = ACTIONS(793),
        [anon_sym_abstract] = ACTIONS(793),
        [anon_sym_sealed] = ACTIONS(793),
        [anon_sym_static] = ACTIONS(793),
        [anon_sym_new] = ACTIONS(793),
        [anon_sym_public] = ACTIONS(793),
        [anon_sym_protected] = ACTIONS(793),
        [anon_sym_internal] = ACTIONS(793),
        [anon_sym_private] = ACTIONS(793),
        [anon_sym_struct] = ACTIONS(793),
        [anon_sym_enum] = ACTIONS(793),
        [anon_sym_sbyte] = ACTIONS(793),
        [anon_sym_byte] = ACTIONS(793),
        [anon_sym_short] = ACTIONS(793),
        [anon_sym_ushort] = ACTIONS(793),
        [anon_sym_int] = ACTIONS(793),
        [anon_sym_uint] = ACTIONS(793),
        [anon_sym_long] = ACTIONS(793),
        [anon_sym_ulong] = ACTIONS(793),
        [anon_sym_char] = ACTIONS(793),
        [anon_sym_delegate] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(791),
        [sym_const_keyword] = ACTIONS(793),
        [anon_sym_readonly] = ACTIONS(793),
        [anon_sym_volatile] = ACTIONS(793),
        [anon_sym_bool] = ACTIONS(793),
        [anon_sym_decimal] = ACTIONS(793),
        [anon_sym_double] = ACTIONS(793),
        [anon_sym_float] = ACTIONS(793),
        [anon_sym_object] = ACTIONS(793),
        [anon_sym_string] = ACTIONS(793),
        [sym_identifier_name] = ACTIONS(795),
        [sym_comment] = ACTIONS(101),
    },
    [256] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [257] = {
        [sym_type_parameter_list] = STATE(259),
        [anon_sym_LBRACE] = ACTIONS(797),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [258] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(261),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [259] = {
        [anon_sym_LBRACE] = ACTIONS(733),
        [sym_comment] = ACTIONS(101),
    },
    [260] = {
        [ts_builtin_sym_end] = ACTIONS(801),
        [anon_sym_namespace] = ACTIONS(803),
        [anon_sym_RBRACE] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_unsafe] = ACTIONS(803),
        [anon_sym_abstract] = ACTIONS(803),
        [anon_sym_sealed] = ACTIONS(803),
        [anon_sym_static] = ACTIONS(803),
        [anon_sym_new] = ACTIONS(803),
        [anon_sym_public] = ACTIONS(803),
        [anon_sym_protected] = ACTIONS(803),
        [anon_sym_internal] = ACTIONS(803),
        [anon_sym_private] = ACTIONS(803),
        [anon_sym_struct] = ACTIONS(803),
        [anon_sym_enum] = ACTIONS(803),
        [anon_sym_sbyte] = ACTIONS(803),
        [anon_sym_byte] = ACTIONS(803),
        [anon_sym_short] = ACTIONS(803),
        [anon_sym_ushort] = ACTIONS(803),
        [anon_sym_int] = ACTIONS(803),
        [anon_sym_uint] = ACTIONS(803),
        [anon_sym_long] = ACTIONS(803),
        [anon_sym_ulong] = ACTIONS(803),
        [anon_sym_char] = ACTIONS(803),
        [anon_sym_delegate] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(801),
        [sym_const_keyword] = ACTIONS(803),
        [anon_sym_readonly] = ACTIONS(803),
        [anon_sym_volatile] = ACTIONS(803),
        [anon_sym_bool] = ACTIONS(803),
        [anon_sym_decimal] = ACTIONS(803),
        [anon_sym_double] = ACTIONS(803),
        [anon_sym_float] = ACTIONS(803),
        [anon_sym_object] = ACTIONS(803),
        [anon_sym_string] = ACTIONS(803),
        [sym_identifier_name] = ACTIONS(805),
        [sym_comment] = ACTIONS(101),
    },
    [261] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [262] = {
        [anon_sym_sbyte] = ACTIONS(807),
        [anon_sym_byte] = ACTIONS(807),
        [anon_sym_short] = ACTIONS(807),
        [anon_sym_ushort] = ACTIONS(807),
        [anon_sym_int] = ACTIONS(807),
        [anon_sym_uint] = ACTIONS(807),
        [anon_sym_long] = ACTIONS(807),
        [anon_sym_ulong] = ACTIONS(807),
        [anon_sym_char] = ACTIONS(807),
        [sym_const_keyword] = ACTIONS(807),
        [anon_sym_bool] = ACTIONS(807),
        [anon_sym_decimal] = ACTIONS(807),
        [anon_sym_double] = ACTIONS(807),
        [anon_sym_float] = ACTIONS(807),
        [anon_sym_object] = ACTIONS(807),
        [anon_sym_string] = ACTIONS(807),
        [sym_identifier_name] = ACTIONS(809),
        [sym_comment] = ACTIONS(101),
    },
    [263] = {
        [sym_identifier_name] = ACTIONS(811),
        [sym_comment] = ACTIONS(101),
    },
    [264] = {
        [sym_parameter_list] = STATE(265),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [265] = {
        [anon_sym_SEMI] = ACTIONS(813),
        [sym_comment] = ACTIONS(101),
    },
    [266] = {
        [ts_builtin_sym_end] = ACTIONS(815),
        [anon_sym_namespace] = ACTIONS(817),
        [anon_sym_RBRACE] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_unsafe] = ACTIONS(817),
        [anon_sym_abstract] = ACTIONS(817),
        [anon_sym_sealed] = ACTIONS(817),
        [anon_sym_static] = ACTIONS(817),
        [anon_sym_new] = ACTIONS(817),
        [anon_sym_public] = ACTIONS(817),
        [anon_sym_protected] = ACTIONS(817),
        [anon_sym_internal] = ACTIONS(817),
        [anon_sym_private] = ACTIONS(817),
        [anon_sym_struct] = ACTIONS(817),
        [anon_sym_enum] = ACTIONS(817),
        [anon_sym_sbyte] = ACTIONS(817),
        [anon_sym_byte] = ACTIONS(817),
        [anon_sym_short] = ACTIONS(817),
        [anon_sym_ushort] = ACTIONS(817),
        [anon_sym_int] = ACTIONS(817),
        [anon_sym_uint] = ACTIONS(817),
        [anon_sym_long] = ACTIONS(817),
        [anon_sym_ulong] = ACTIONS(817),
        [anon_sym_char] = ACTIONS(817),
        [anon_sym_delegate] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(815),
        [sym_const_keyword] = ACTIONS(817),
        [anon_sym_readonly] = ACTIONS(817),
        [anon_sym_volatile] = ACTIONS(817),
        [anon_sym_bool] = ACTIONS(817),
        [anon_sym_decimal] = ACTIONS(817),
        [anon_sym_double] = ACTIONS(817),
        [anon_sym_float] = ACTIONS(817),
        [anon_sym_object] = ACTIONS(817),
        [anon_sym_string] = ACTIONS(817),
        [sym_identifier_name] = ACTIONS(819),
        [sym_comment] = ACTIONS(101),
    },
    [267] = {
        [anon_sym_LBRACE] = ACTIONS(821),
        [anon_sym_COLON] = ACTIONS(823),
        [sym_comment] = ACTIONS(101),
    },
    [268] = {
        [sym_enum_member_declaration] = STATE(271),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [269] = {
        [sym__integral_type] = STATE(270),
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
    [270] = {
        [anon_sym_LBRACE] = ACTIONS(399),
        [sym_comment] = ACTIONS(101),
    },
    [271] = {
        [aux_sym_enum_declaration_repeat1] = STATE(273),
        [anon_sym_RBRACE] = ACTIONS(825),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(827),
        [anon_sym_SEMI] = ACTIONS(829),
        [anon_sym_namespace] = ACTIONS(831),
        [anon_sym_RBRACE] = ACTIONS(827),
        [anon_sym_class] = ACTIONS(831),
        [anon_sym_unsafe] = ACTIONS(831),
        [anon_sym_abstract] = ACTIONS(831),
        [anon_sym_sealed] = ACTIONS(831),
        [anon_sym_static] = ACTIONS(831),
        [anon_sym_new] = ACTIONS(831),
        [anon_sym_public] = ACTIONS(831),
        [anon_sym_protected] = ACTIONS(831),
        [anon_sym_internal] = ACTIONS(831),
        [anon_sym_private] = ACTIONS(831),
        [anon_sym_struct] = ACTIONS(831),
        [anon_sym_enum] = ACTIONS(831),
        [anon_sym_sbyte] = ACTIONS(831),
        [anon_sym_byte] = ACTIONS(831),
        [anon_sym_short] = ACTIONS(831),
        [anon_sym_ushort] = ACTIONS(831),
        [anon_sym_int] = ACTIONS(831),
        [anon_sym_uint] = ACTIONS(831),
        [anon_sym_long] = ACTIONS(831),
        [anon_sym_ulong] = ACTIONS(831),
        [anon_sym_char] = ACTIONS(831),
        [anon_sym_delegate] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(827),
        [sym_const_keyword] = ACTIONS(831),
        [anon_sym_readonly] = ACTIONS(831),
        [anon_sym_volatile] = ACTIONS(831),
        [anon_sym_bool] = ACTIONS(831),
        [anon_sym_decimal] = ACTIONS(831),
        [anon_sym_double] = ACTIONS(831),
        [anon_sym_float] = ACTIONS(831),
        [anon_sym_object] = ACTIONS(831),
        [anon_sym_string] = ACTIONS(831),
        [sym_identifier_name] = ACTIONS(833),
        [sym_comment] = ACTIONS(101),
    },
    [273] = {
        [anon_sym_RBRACE] = ACTIONS(777),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(779),
        [anon_sym_namespace] = ACTIONS(783),
        [anon_sym_RBRACE] = ACTIONS(779),
        [anon_sym_class] = ACTIONS(783),
        [anon_sym_unsafe] = ACTIONS(783),
        [anon_sym_abstract] = ACTIONS(783),
        [anon_sym_sealed] = ACTIONS(783),
        [anon_sym_static] = ACTIONS(783),
        [anon_sym_new] = ACTIONS(783),
        [anon_sym_public] = ACTIONS(783),
        [anon_sym_protected] = ACTIONS(783),
        [anon_sym_internal] = ACTIONS(783),
        [anon_sym_private] = ACTIONS(783),
        [anon_sym_struct] = ACTIONS(783),
        [anon_sym_enum] = ACTIONS(783),
        [anon_sym_sbyte] = ACTIONS(783),
        [anon_sym_byte] = ACTIONS(783),
        [anon_sym_short] = ACTIONS(783),
        [anon_sym_ushort] = ACTIONS(783),
        [anon_sym_int] = ACTIONS(783),
        [anon_sym_uint] = ACTIONS(783),
        [anon_sym_long] = ACTIONS(783),
        [anon_sym_ulong] = ACTIONS(783),
        [anon_sym_char] = ACTIONS(783),
        [anon_sym_delegate] = ACTIONS(783),
        [anon_sym_LBRACK] = ACTIONS(779),
        [sym_const_keyword] = ACTIONS(783),
        [anon_sym_readonly] = ACTIONS(783),
        [anon_sym_volatile] = ACTIONS(783),
        [anon_sym_bool] = ACTIONS(783),
        [anon_sym_decimal] = ACTIONS(783),
        [anon_sym_double] = ACTIONS(783),
        [anon_sym_float] = ACTIONS(783),
        [anon_sym_object] = ACTIONS(783),
        [anon_sym_string] = ACTIONS(783),
        [sym_identifier_name] = ACTIONS(785),
        [sym_comment] = ACTIONS(101),
    },
    [275] = {
        [sym_type_parameter_list] = STATE(277),
        [anon_sym_LBRACE] = ACTIONS(835),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [276] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(279),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [277] = {
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_comment] = ACTIONS(101),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(839),
        [anon_sym_namespace] = ACTIONS(841),
        [anon_sym_RBRACE] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(841),
        [anon_sym_unsafe] = ACTIONS(841),
        [anon_sym_abstract] = ACTIONS(841),
        [anon_sym_sealed] = ACTIONS(841),
        [anon_sym_static] = ACTIONS(841),
        [anon_sym_new] = ACTIONS(841),
        [anon_sym_public] = ACTIONS(841),
        [anon_sym_protected] = ACTIONS(841),
        [anon_sym_internal] = ACTIONS(841),
        [anon_sym_private] = ACTIONS(841),
        [anon_sym_struct] = ACTIONS(841),
        [anon_sym_enum] = ACTIONS(841),
        [anon_sym_sbyte] = ACTIONS(841),
        [anon_sym_byte] = ACTIONS(841),
        [anon_sym_short] = ACTIONS(841),
        [anon_sym_ushort] = ACTIONS(841),
        [anon_sym_int] = ACTIONS(841),
        [anon_sym_uint] = ACTIONS(841),
        [anon_sym_long] = ACTIONS(841),
        [anon_sym_ulong] = ACTIONS(841),
        [anon_sym_char] = ACTIONS(841),
        [anon_sym_delegate] = ACTIONS(841),
        [anon_sym_LBRACK] = ACTIONS(839),
        [sym_const_keyword] = ACTIONS(841),
        [anon_sym_readonly] = ACTIONS(841),
        [anon_sym_volatile] = ACTIONS(841),
        [anon_sym_bool] = ACTIONS(841),
        [anon_sym_decimal] = ACTIONS(841),
        [anon_sym_double] = ACTIONS(841),
        [anon_sym_float] = ACTIONS(841),
        [anon_sym_object] = ACTIONS(841),
        [anon_sym_string] = ACTIONS(841),
        [sym_identifier_name] = ACTIONS(843),
        [sym_comment] = ACTIONS(101),
    },
    [279] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [280] = {
        [sym__class_modifiers] = STATE(281),
        [sym__struct_modifiers] = STATE(282),
        [sym__field_modifiers] = STATE(262),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_unsafe] = ACTIONS(627),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(627),
        [anon_sym_public] = ACTIONS(627),
        [anon_sym_protected] = ACTIONS(627),
        [anon_sym_internal] = ACTIONS(627),
        [anon_sym_private] = ACTIONS(627),
        [anon_sym_struct] = ACTIONS(629),
        [anon_sym_sbyte] = ACTIONS(631),
        [anon_sym_byte] = ACTIONS(631),
        [anon_sym_short] = ACTIONS(631),
        [anon_sym_ushort] = ACTIONS(631),
        [anon_sym_int] = ACTIONS(631),
        [anon_sym_uint] = ACTIONS(631),
        [anon_sym_long] = ACTIONS(631),
        [anon_sym_ulong] = ACTIONS(631),
        [anon_sym_char] = ACTIONS(631),
        [sym_const_keyword] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(631),
        [anon_sym_decimal] = ACTIONS(631),
        [anon_sym_double] = ACTIONS(631),
        [anon_sym_float] = ACTIONS(631),
        [anon_sym_object] = ACTIONS(631),
        [anon_sym_string] = ACTIONS(631),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(101),
    },
    [281] = {
        [anon_sym_class] = ACTIONS(845),
        [sym_comment] = ACTIONS(101),
    },
    [282] = {
        [anon_sym_struct] = ACTIONS(847),
        [sym_comment] = ACTIONS(101),
    },
    [283] = {
        [sym_type_parameter_list] = STATE(285),
        [anon_sym_LBRACE] = ACTIONS(849),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [284] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(287),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(851),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [285] = {
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_comment] = ACTIONS(101),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(853),
        [anon_sym_namespace] = ACTIONS(855),
        [anon_sym_RBRACE] = ACTIONS(853),
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
        [anon_sym_sbyte] = ACTIONS(855),
        [anon_sym_byte] = ACTIONS(855),
        [anon_sym_short] = ACTIONS(855),
        [anon_sym_ushort] = ACTIONS(855),
        [anon_sym_int] = ACTIONS(855),
        [anon_sym_uint] = ACTIONS(855),
        [anon_sym_long] = ACTIONS(855),
        [anon_sym_ulong] = ACTIONS(855),
        [anon_sym_char] = ACTIONS(855),
        [anon_sym_delegate] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(853),
        [sym_const_keyword] = ACTIONS(855),
        [anon_sym_readonly] = ACTIONS(855),
        [anon_sym_volatile] = ACTIONS(855),
        [anon_sym_bool] = ACTIONS(855),
        [anon_sym_decimal] = ACTIONS(855),
        [anon_sym_double] = ACTIONS(855),
        [anon_sym_float] = ACTIONS(855),
        [anon_sym_object] = ACTIONS(855),
        [anon_sym_string] = ACTIONS(855),
        [sym_identifier_name] = ACTIONS(857),
        [sym_comment] = ACTIONS(101),
    },
    [287] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [288] = {
        [anon_sym_COLON] = ACTIONS(859),
        [sym_comment] = ACTIONS(101),
    },
    [289] = {
        [sym_attribute_list] = STATE(290),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(101),
    },
    [290] = {
        [anon_sym_RBRACK] = ACTIONS(861),
        [sym_comment] = ACTIONS(101),
    },
    [291] = {
        [ts_builtin_sym_end] = ACTIONS(863),
        [anon_sym_namespace] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_unsafe] = ACTIONS(863),
        [anon_sym_abstract] = ACTIONS(863),
        [anon_sym_sealed] = ACTIONS(863),
        [anon_sym_static] = ACTIONS(863),
        [anon_sym_new] = ACTIONS(863),
        [anon_sym_public] = ACTIONS(863),
        [anon_sym_protected] = ACTIONS(863),
        [anon_sym_internal] = ACTIONS(863),
        [anon_sym_private] = ACTIONS(863),
        [anon_sym_struct] = ACTIONS(863),
        [anon_sym_enum] = ACTIONS(863),
        [anon_sym_delegate] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(863),
        [sym_comment] = ACTIONS(101),
    },
    [292] = {
        [sym__class_modifiers] = STATE(281),
        [sym__struct_modifiers] = STATE(282),
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
    [293] = {
        [anon_sym_COLON_COLON] = ACTIONS(865),
        [sym_comment] = ACTIONS(101),
    },
    [294] = {
        [anon_sym_LBRACE] = ACTIONS(867),
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [295] = {
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [296] = {
        [sym_identifier_name] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [297] = {
        [anon_sym_SEMI] = ACTIONS(873),
        [anon_sym_LBRACE] = ACTIONS(873),
        [anon_sym_DOT] = ACTIONS(873),
        [sym_comment] = ACTIONS(101),
    },
    [298] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(300),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(875),
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
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(877),
        [anon_sym_namespace] = ACTIONS(877),
        [anon_sym_RBRACE] = ACTIONS(877),
        [anon_sym_class] = ACTIONS(877),
        [anon_sym_unsafe] = ACTIONS(877),
        [anon_sym_abstract] = ACTIONS(877),
        [anon_sym_sealed] = ACTIONS(877),
        [anon_sym_static] = ACTIONS(877),
        [anon_sym_new] = ACTIONS(877),
        [anon_sym_public] = ACTIONS(877),
        [anon_sym_protected] = ACTIONS(877),
        [anon_sym_internal] = ACTIONS(877),
        [anon_sym_private] = ACTIONS(877),
        [anon_sym_struct] = ACTIONS(877),
        [anon_sym_enum] = ACTIONS(877),
        [anon_sym_delegate] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [sym_comment] = ACTIONS(101),
    },
    [300] = {
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
    [301] = {
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
    [302] = {
        [sym_identifier_name] = ACTIONS(883),
        [sym_comment] = ACTIONS(101),
    },
    [303] = {
        [anon_sym_DOT] = ACTIONS(885),
        [sym_comment] = ACTIONS(101),
    },
    [304] = {
        [sym_global] = ACTIONS(887),
        [sym_identifier_name] = ACTIONS(889),
        [sym_comment] = ACTIONS(101),
    },
    [305] = {
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_EQ] = ACTIONS(893),
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [306] = {
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [307] = {
        [sym_qualified_name] = STATE(308),
        [sym_alias_qualified_name] = STATE(295),
        [sym_global] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(895),
        [sym_comment] = ACTIONS(101),
    },
    [308] = {
        [anon_sym_SEMI] = ACTIONS(897),
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(899),
        [anon_sym_using] = ACTIONS(899),
        [anon_sym_namespace] = ACTIONS(899),
        [anon_sym_class] = ACTIONS(899),
        [anon_sym_unsafe] = ACTIONS(899),
        [anon_sym_abstract] = ACTIONS(899),
        [anon_sym_sealed] = ACTIONS(899),
        [anon_sym_static] = ACTIONS(899),
        [anon_sym_new] = ACTIONS(899),
        [anon_sym_public] = ACTIONS(899),
        [anon_sym_protected] = ACTIONS(899),
        [anon_sym_internal] = ACTIONS(899),
        [anon_sym_private] = ACTIONS(899),
        [anon_sym_struct] = ACTIONS(899),
        [anon_sym_enum] = ACTIONS(899),
        [anon_sym_delegate] = ACTIONS(899),
        [anon_sym_LBRACK] = ACTIONS(899),
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
        [sym_global] = ACTIONS(903),
        [sym_identifier_name] = ACTIONS(905),
        [sym_comment] = ACTIONS(101),
    },
    [312] = {
        [sym_identifier_name] = ACTIONS(907),
        [sym_comment] = ACTIONS(101),
    },
    [313] = {
        [anon_sym_SEMI] = ACTIONS(909),
        [sym_comment] = ACTIONS(101),
    },
    [314] = {
        [ts_builtin_sym_end] = ACTIONS(911),
        [anon_sym_extern] = ACTIONS(911),
        [anon_sym_using] = ACTIONS(911),
        [anon_sym_namespace] = ACTIONS(911),
        [anon_sym_class] = ACTIONS(911),
        [anon_sym_unsafe] = ACTIONS(911),
        [anon_sym_abstract] = ACTIONS(911),
        [anon_sym_sealed] = ACTIONS(911),
        [anon_sym_static] = ACTIONS(911),
        [anon_sym_new] = ACTIONS(911),
        [anon_sym_public] = ACTIONS(911),
        [anon_sym_protected] = ACTIONS(911),
        [anon_sym_internal] = ACTIONS(911),
        [anon_sym_private] = ACTIONS(911),
        [anon_sym_struct] = ACTIONS(911),
        [anon_sym_enum] = ACTIONS(911),
        [anon_sym_delegate] = ACTIONS(911),
        [anon_sym_LBRACK] = ACTIONS(911),
        [sym_comment] = ACTIONS(101),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(913),
        [anon_sym_extern] = ACTIONS(926),
        [anon_sym_using] = ACTIONS(928),
        [anon_sym_namespace] = ACTIONS(932),
        [anon_sym_RBRACE] = ACTIONS(945),
        [anon_sym_class] = ACTIONS(959),
        [anon_sym_unsafe] = ACTIONS(959),
        [anon_sym_abstract] = ACTIONS(959),
        [anon_sym_sealed] = ACTIONS(959),
        [anon_sym_static] = ACTIONS(959),
        [anon_sym_new] = ACTIONS(959),
        [anon_sym_public] = ACTIONS(959),
        [anon_sym_protected] = ACTIONS(959),
        [anon_sym_internal] = ACTIONS(959),
        [anon_sym_private] = ACTIONS(959),
        [anon_sym_struct] = ACTIONS(959),
        [anon_sym_enum] = ACTIONS(959),
        [anon_sym_sbyte] = ACTIONS(976),
        [anon_sym_byte] = ACTIONS(976),
        [anon_sym_short] = ACTIONS(976),
        [anon_sym_ushort] = ACTIONS(976),
        [anon_sym_int] = ACTIONS(976),
        [anon_sym_uint] = ACTIONS(976),
        [anon_sym_long] = ACTIONS(976),
        [anon_sym_ulong] = ACTIONS(976),
        [anon_sym_char] = ACTIONS(976),
        [anon_sym_delegate] = ACTIONS(959),
        [anon_sym_LBRACK] = ACTIONS(990),
        [sym_const_keyword] = ACTIONS(976),
        [anon_sym_readonly] = ACTIONS(976),
        [anon_sym_volatile] = ACTIONS(976),
        [anon_sym_bool] = ACTIONS(976),
        [anon_sym_decimal] = ACTIONS(976),
        [anon_sym_double] = ACTIONS(976),
        [anon_sym_float] = ACTIONS(976),
        [anon_sym_object] = ACTIONS(976),
        [anon_sym_string] = ACTIONS(976),
        [sym_identifier_name] = ACTIONS(1007),
        [sym_comment] = ACTIONS(101),
    },
    [316] = {
        [sym__type_declaration] = STATE(466),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(515),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(468),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(300),
        [aux_sym_class_declaration_repeat1] = STATE(379),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1021),
        [anon_sym_RBRACE] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1025),
        [sym_comment] = ACTIONS(101),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(1027),
        [anon_sym_SEMI] = ACTIONS(1046),
        [anon_sym_namespace] = ACTIONS(1048),
        [anon_sym_RBRACE] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(1048),
        [anon_sym_unsafe] = ACTIONS(1048),
        [anon_sym_abstract] = ACTIONS(1048),
        [anon_sym_sealed] = ACTIONS(1048),
        [anon_sym_static] = ACTIONS(1048),
        [anon_sym_new] = ACTIONS(1048),
        [anon_sym_public] = ACTIONS(1048),
        [anon_sym_protected] = ACTIONS(1048),
        [anon_sym_internal] = ACTIONS(1048),
        [anon_sym_private] = ACTIONS(1048),
        [anon_sym_struct] = ACTIONS(1048),
        [anon_sym_enum] = ACTIONS(1048),
        [anon_sym_sbyte] = ACTIONS(1067),
        [anon_sym_byte] = ACTIONS(1067),
        [anon_sym_short] = ACTIONS(1067),
        [anon_sym_ushort] = ACTIONS(1067),
        [anon_sym_int] = ACTIONS(1067),
        [anon_sym_uint] = ACTIONS(1067),
        [anon_sym_long] = ACTIONS(1067),
        [anon_sym_ulong] = ACTIONS(1067),
        [anon_sym_char] = ACTIONS(1067),
        [anon_sym_delegate] = ACTIONS(1048),
        [anon_sym_LBRACK] = ACTIONS(1027),
        [sym_const_keyword] = ACTIONS(1067),
        [anon_sym_readonly] = ACTIONS(1067),
        [anon_sym_volatile] = ACTIONS(1067),
        [anon_sym_bool] = ACTIONS(1067),
        [anon_sym_decimal] = ACTIONS(1067),
        [anon_sym_double] = ACTIONS(1067),
        [anon_sym_float] = ACTIONS(1067),
        [anon_sym_object] = ACTIONS(1067),
        [anon_sym_string] = ACTIONS(1067),
        [sym_identifier_name] = ACTIONS(1084),
        [sym_comment] = ACTIONS(101),
    },
    [318] = {
        [sym_identifier_name] = ACTIONS(1101),
        [sym_comment] = ACTIONS(101),
    },
    [319] = {
        [sym__class_modifiers] = STATE(281),
        [sym__field_modifiers] = STATE(262),
        [anon_sym_class] = ACTIONS(625),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_sbyte] = ACTIONS(631),
        [anon_sym_byte] = ACTIONS(631),
        [anon_sym_short] = ACTIONS(631),
        [anon_sym_ushort] = ACTIONS(631),
        [anon_sym_int] = ACTIONS(631),
        [anon_sym_uint] = ACTIONS(631),
        [anon_sym_long] = ACTIONS(631),
        [anon_sym_ulong] = ACTIONS(631),
        [anon_sym_char] = ACTIONS(631),
        [sym_const_keyword] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(631),
        [anon_sym_decimal] = ACTIONS(631),
        [anon_sym_double] = ACTIONS(631),
        [anon_sym_float] = ACTIONS(631),
        [anon_sym_object] = ACTIONS(631),
        [anon_sym_string] = ACTIONS(631),
        [sym_global] = ACTIONS(887),
        [sym_identifier_name] = ACTIONS(1103),
        [sym_comment] = ACTIONS(101),
    },
    [320] = {
        [sym_identifier_name] = ACTIONS(1106),
        [sym_comment] = ACTIONS(101),
    },
    [321] = {
        [sym_identifier_name] = ACTIONS(1108),
        [sym_comment] = ACTIONS(101),
    },
    [322] = {
        [sym__integral_type] = STATE(352),
        [sym_attribute_list] = STATE(290),
        [sym_attribute] = STATE(36),
        [anon_sym_sbyte] = ACTIONS(1110),
        [anon_sym_byte] = ACTIONS(1110),
        [anon_sym_short] = ACTIONS(1110),
        [anon_sym_ushort] = ACTIONS(1110),
        [anon_sym_int] = ACTIONS(1110),
        [anon_sym_uint] = ACTIONS(1110),
        [anon_sym_long] = ACTIONS(1110),
        [anon_sym_ulong] = ACTIONS(1110),
        [anon_sym_char] = ACTIONS(1110),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(101),
    },
    [323] = {
        [sym_enum_member_declaration] = STATE(485),
        [sym_parameter] = STATE(486),
        [sym_parameter_modifier] = STATE(79),
        [sym__attributes] = STATE(487),
        [sym__attribute_section] = STATE(25),
        [sym_attribute] = STATE(488),
        [sym__type] = STATE(489),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(490),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(491),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1112),
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
        [anon_sym_RBRACK] = ACTIONS(1112),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1115),
        [sym_comment] = ACTIONS(101),
    },
    [324] = {
        [anon_sym_LBRACE] = ACTIONS(407),
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_GT] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(101),
    },
    [325] = {
        [sym__return_type] = STATE(354),
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
    [326] = {
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
        [anon_sym_RPAREN] = ACTIONS(1117),
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
    [327] = {
        [anon_sym_SEMI] = ACTIONS(1119),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [328] = {
        [sym_array_type] = STATE(359),
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
    [329] = {
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
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(863),
        [anon_sym_namespace] = ACTIONS(1122),
        [anon_sym_class] = ACTIONS(1124),
        [anon_sym_unsafe] = ACTIONS(1124),
        [anon_sym_abstract] = ACTIONS(1124),
        [anon_sym_sealed] = ACTIONS(1124),
        [anon_sym_static] = ACTIONS(1124),
        [anon_sym_new] = ACTIONS(1124),
        [anon_sym_public] = ACTIONS(1124),
        [anon_sym_protected] = ACTIONS(1124),
        [anon_sym_internal] = ACTIONS(1124),
        [anon_sym_private] = ACTIONS(1124),
        [anon_sym_struct] = ACTIONS(1124),
        [anon_sym_enum] = ACTIONS(1124),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(1124),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(1127),
        [sym_const_keyword] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(1130),
        [sym_comment] = ACTIONS(101),
    },
    [331] = {
        [sym_variable_declaration] = STATE(481),
        [sym__type] = STATE(203),
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
    [332] = {
        [sym__literal] = STATE(144),
        [sym_boolean_literal] = STATE(140),
        [sym_character_literal] = STATE(140),
        [sym_integer_literal] = STATE(140),
        [sym_real_literal] = STATE(140),
        [sym_string_literal] = STATE(140),
        [sym__regular_string_literal] = STATE(145),
        [sym__verbatim_string_literal] = STATE(145),
        [anon_sym_true] = ACTIONS(1134),
        [anon_sym_false] = ACTIONS(1134),
        [anon_sym_SQUOTE] = ACTIONS(425),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(427),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(429),
        [sym_null_literal] = ACTIONS(1136),
        [anon_sym_DOT] = ACTIONS(433),
        [anon_sym_DQUOTE] = ACTIONS(435),
        [anon_sym_AT_DQUOTE] = ACTIONS(437),
        [sym_global] = ACTIONS(903),
        [sym_identifier_name] = ACTIONS(905),
        [sym_comment] = ACTIONS(101),
    },
    [333] = {
        [sym__unicode_escape_sequence] = STATE(167),
        [sym__simple_escape_sequence] = STATE(167),
        [anon_sym_SEMI] = ACTIONS(537),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_COMMA] = ACTIONS(537),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1138),
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
    [334] = {
        [anon_sym_SQUOTE] = ACTIONS(535),
        [sym__hexadecimal_escape_sequence] = ACTIONS(483),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1140),
        [sym_comment] = ACTIONS(101),
    },
    [335] = {
        [anon_sym_SEMI] = ACTIONS(1142),
        [anon_sym_RBRACE] = ACTIONS(1142),
        [anon_sym_COMMA] = ACTIONS(1142),
        [sym__integer_type_suffix] = ACTIONS(451),
        [anon_sym_DOT] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(1146),
        [sym__exponent_part] = ACTIONS(1148),
        [sym_comment] = ACTIONS(101),
    },
    [336] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1150),
        [sym_identifier_name] = ACTIONS(871),
        [sym_comment] = ACTIONS(101),
    },
    [337] = {
        [anon_sym_SEMI] = ACTIONS(1152),
        [anon_sym_RBRACE] = ACTIONS(1152),
        [anon_sym_COMMA] = ACTIONS(1152),
        [sym_comment] = ACTIONS(101),
    },
    [338] = {
        [anon_sym_SEMI] = ACTIONS(1157),
        [anon_sym_RBRACE] = ACTIONS(1157),
        [anon_sym_COMMA] = ACTIONS(1157),
        [sym__real_type_suffix] = ACTIONS(1161),
        [sym_comment] = ACTIONS(101),
    },
    [339] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [sym__regular_string_literal_character] = STATE(152),
        [aux_sym__regular_string_literal_repeat1] = STATE(153),
        [anon_sym_SEMI] = ACTIONS(1163),
        [anon_sym_RBRACE] = ACTIONS(1163),
        [anon_sym_COMMA] = ACTIONS(1163),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1167),
        [sym_comment] = ACTIONS(101),
    },
    [340] = {
        [anon_sym_LBRACE] = ACTIONS(1169),
        [anon_sym_COMMA] = ACTIONS(1169),
        [anon_sym_LBRACK] = ACTIONS(1169),
        [anon_sym_GT] = ACTIONS(1169),
        [sym_identifier_name] = ACTIONS(1172),
        [sym_comment] = ACTIONS(101),
    },
    [341] = {
        [sym_parameter_list] = STATE(355),
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(371),
        [sym_type_parameter_list] = STATE(373),
        [anon_sym_SEMI] = ACTIONS(1175),
        [anon_sym_LBRACE] = ACTIONS(1179),
        [anon_sym_RBRACE] = ACTIONS(1182),
        [anon_sym_COLON] = ACTIONS(1185),
        [anon_sym_COMMA] = ACTIONS(1187),
        [anon_sym_LPAREN] = ACTIONS(1196),
        [anon_sym_RPAREN] = ACTIONS(1198),
        [sym_params_keyword] = ACTIONS(1204),
        [anon_sym_LBRACK] = ACTIONS(1208),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(1213),
        [anon_sym_DOT] = ACTIONS(1215),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(1219),
        [sym_comment] = ACTIONS(101),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(1221),
        [anon_sym_namespace] = ACTIONS(1224),
        [anon_sym_RBRACE] = ACTIONS(1227),
        [anon_sym_class] = ACTIONS(1232),
        [anon_sym_unsafe] = ACTIONS(1232),
        [anon_sym_abstract] = ACTIONS(1232),
        [anon_sym_sealed] = ACTIONS(1232),
        [anon_sym_static] = ACTIONS(1232),
        [anon_sym_new] = ACTIONS(1232),
        [anon_sym_public] = ACTIONS(1232),
        [anon_sym_protected] = ACTIONS(1232),
        [anon_sym_internal] = ACTIONS(1232),
        [anon_sym_private] = ACTIONS(1232),
        [anon_sym_struct] = ACTIONS(1232),
        [anon_sym_enum] = ACTIONS(1232),
        [anon_sym_sbyte] = ACTIONS(1237),
        [anon_sym_byte] = ACTIONS(1237),
        [anon_sym_short] = ACTIONS(1237),
        [anon_sym_ushort] = ACTIONS(1237),
        [anon_sym_int] = ACTIONS(1237),
        [anon_sym_uint] = ACTIONS(1237),
        [anon_sym_long] = ACTIONS(1237),
        [anon_sym_ulong] = ACTIONS(1237),
        [anon_sym_char] = ACTIONS(1237),
        [anon_sym_delegate] = ACTIONS(1232),
        [anon_sym_LBRACK] = ACTIONS(1227),
        [sym_const_keyword] = ACTIONS(1237),
        [anon_sym_readonly] = ACTIONS(1237),
        [anon_sym_volatile] = ACTIONS(1237),
        [anon_sym_bool] = ACTIONS(1237),
        [anon_sym_decimal] = ACTIONS(1237),
        [anon_sym_double] = ACTIONS(1237),
        [anon_sym_float] = ACTIONS(1237),
        [anon_sym_object] = ACTIONS(1237),
        [anon_sym_string] = ACTIONS(1237),
        [sym_identifier_name] = ACTIONS(1240),
        [sym_comment] = ACTIONS(101),
    },
    [343] = {
        [ts_builtin_sym_end] = ACTIONS(1243),
        [anon_sym_extern] = ACTIONS(1243),
        [anon_sym_using] = ACTIONS(1243),
        [anon_sym_namespace] = ACTIONS(1243),
        [anon_sym_class] = ACTIONS(1243),
        [anon_sym_unsafe] = ACTIONS(1243),
        [anon_sym_abstract] = ACTIONS(1243),
        [anon_sym_sealed] = ACTIONS(1243),
        [anon_sym_static] = ACTIONS(1243),
        [anon_sym_new] = ACTIONS(1243),
        [anon_sym_public] = ACTIONS(1243),
        [anon_sym_protected] = ACTIONS(1243),
        [anon_sym_internal] = ACTIONS(1243),
        [anon_sym_private] = ACTIONS(1243),
        [anon_sym_struct] = ACTIONS(1243),
        [anon_sym_enum] = ACTIONS(1243),
        [anon_sym_delegate] = ACTIONS(1243),
        [anon_sym_LBRACK] = ACTIONS(1243),
        [sym_comment] = ACTIONS(101),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(1246),
        [anon_sym_using] = ACTIONS(1246),
        [anon_sym_namespace] = ACTIONS(1246),
        [anon_sym_class] = ACTIONS(1246),
        [anon_sym_unsafe] = ACTIONS(1246),
        [anon_sym_abstract] = ACTIONS(1246),
        [anon_sym_sealed] = ACTIONS(1246),
        [anon_sym_static] = ACTIONS(1246),
        [anon_sym_new] = ACTIONS(1246),
        [anon_sym_public] = ACTIONS(1246),
        [anon_sym_protected] = ACTIONS(1246),
        [anon_sym_internal] = ACTIONS(1246),
        [anon_sym_private] = ACTIONS(1246),
        [anon_sym_struct] = ACTIONS(1246),
        [anon_sym_enum] = ACTIONS(1246),
        [anon_sym_delegate] = ACTIONS(1246),
        [anon_sym_LBRACK] = ACTIONS(1246),
        [sym_comment] = ACTIONS(101),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(1221),
        [anon_sym_namespace] = ACTIONS(1221),
        [anon_sym_RBRACE] = ACTIONS(1221),
        [anon_sym_class] = ACTIONS(1221),
        [anon_sym_unsafe] = ACTIONS(1221),
        [anon_sym_abstract] = ACTIONS(1221),
        [anon_sym_sealed] = ACTIONS(1221),
        [anon_sym_static] = ACTIONS(1221),
        [anon_sym_new] = ACTIONS(1221),
        [anon_sym_public] = ACTIONS(1221),
        [anon_sym_protected] = ACTIONS(1221),
        [anon_sym_internal] = ACTIONS(1221),
        [anon_sym_private] = ACTIONS(1221),
        [anon_sym_struct] = ACTIONS(1221),
        [anon_sym_enum] = ACTIONS(1221),
        [anon_sym_delegate] = ACTIONS(1221),
        [anon_sym_LBRACK] = ACTIONS(1221),
        [sym_comment] = ACTIONS(101),
    },
    [346] = {
        [anon_sym_class] = ACTIONS(1249),
        [sym_comment] = ACTIONS(101),
    },
    [347] = {
        [anon_sym_class] = ACTIONS(1251),
        [sym_comment] = ACTIONS(101),
    },
    [348] = {
        [anon_sym_struct] = ACTIONS(1254),
        [sym_comment] = ACTIONS(101),
    },
    [349] = {
        [anon_sym_struct] = ACTIONS(1256),
        [sym_comment] = ACTIONS(101),
    },
    [350] = {
        [aux_sym_enum_declaration_repeat1] = STATE(380),
        [anon_sym_RBRACE] = ACTIONS(1259),
        [anon_sym_COMMA] = ACTIONS(1263),
        [sym_comment] = ACTIONS(101),
    },
    [351] = {
        [anon_sym_enum] = ACTIONS(1267),
        [sym_comment] = ACTIONS(101),
    },
    [352] = {
        [anon_sym_LBRACE] = ACTIONS(1269),
        [sym_comment] = ACTIONS(101),
    },
    [353] = {
        [anon_sym_delegate] = ACTIONS(1271),
        [sym_comment] = ACTIONS(101),
    },
    [354] = {
        [sym_identifier_name] = ACTIONS(1273),
        [sym_comment] = ACTIONS(101),
    },
    [355] = {
        [anon_sym_SEMI] = ACTIONS(1275),
        [sym_comment] = ACTIONS(101),
    },
    [356] = {
        [sym_parameter_array] = STATE(112),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__formal_parameter_list_repeat1] = STATE(114),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_COMMA] = ACTIONS(1277),
        [anon_sym_RPAREN] = ACTIONS(1281),
        [sym_params_keyword] = ACTIONS(1285),
        [anon_sym_LBRACK] = ACTIONS(1289),
        [sym_comment] = ACTIONS(101),
    },
    [357] = {
        [sym__type] = STATE(405),
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
    [358] = {
        [anon_sym_RPAREN] = ACTIONS(1293),
        [sym_comment] = ACTIONS(101),
    },
    [359] = {
        [sym_identifier_name] = ACTIONS(1297),
        [sym_comment] = ACTIONS(101),
    },
    [360] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_parameter_modifier] = STATE(85),
        [sym_field_modifiers] = STATE(221),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(217),
        [sym__type] = STATE(402),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(647),
        [anon_sym_enum] = ACTIONS(649),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(651),
        [anon_sym_ref] = ACTIONS(289),
        [anon_sym_out] = ACTIONS(289),
        [anon_sym_this] = ACTIONS(289),
        [sym_params_keyword] = ACTIONS(315),
        [sym_const_keyword] = ACTIONS(653),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1299),
        [sym_comment] = ACTIONS(101),
    },
    [361] = {
        [anon_sym_class] = ACTIONS(1301),
        [anon_sym_unsafe] = ACTIONS(1301),
        [anon_sym_abstract] = ACTIONS(1301),
        [anon_sym_sealed] = ACTIONS(1301),
        [anon_sym_static] = ACTIONS(1301),
        [anon_sym_new] = ACTIONS(1301),
        [anon_sym_public] = ACTIONS(1301),
        [anon_sym_protected] = ACTIONS(1301),
        [anon_sym_internal] = ACTIONS(1301),
        [anon_sym_private] = ACTIONS(1301),
        [anon_sym_struct] = ACTIONS(1301),
        [anon_sym_enum] = ACTIONS(1301),
        [anon_sym_sbyte] = ACTIONS(1301),
        [anon_sym_byte] = ACTIONS(1301),
        [anon_sym_short] = ACTIONS(1301),
        [anon_sym_ushort] = ACTIONS(1301),
        [anon_sym_int] = ACTIONS(1301),
        [anon_sym_uint] = ACTIONS(1301),
        [anon_sym_long] = ACTIONS(1301),
        [anon_sym_ulong] = ACTIONS(1301),
        [anon_sym_char] = ACTIONS(1301),
        [anon_sym_delegate] = ACTIONS(1301),
        [anon_sym_ref] = ACTIONS(1301),
        [anon_sym_out] = ACTIONS(1301),
        [anon_sym_this] = ACTIONS(1301),
        [sym_params_keyword] = ACTIONS(1301),
        [anon_sym_LBRACK] = ACTIONS(1304),
        [sym_const_keyword] = ACTIONS(1301),
        [anon_sym_readonly] = ACTIONS(1301),
        [anon_sym_volatile] = ACTIONS(1301),
        [anon_sym_bool] = ACTIONS(1301),
        [anon_sym_decimal] = ACTIONS(1301),
        [anon_sym_double] = ACTIONS(1301),
        [anon_sym_float] = ACTIONS(1301),
        [anon_sym_object] = ACTIONS(1301),
        [anon_sym_string] = ACTIONS(1301),
        [sym_identifier_name] = ACTIONS(1307),
        [sym_comment] = ACTIONS(101),
    },
    [362] = {
        [anon_sym_RBRACK] = ACTIONS(1310),
        [sym_comment] = ACTIONS(101),
    },
    [363] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(1312),
        [anon_sym_RBRACK] = ACTIONS(1316),
        [sym_comment] = ACTIONS(101),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(1320),
        [anon_sym_namespace] = ACTIONS(1320),
        [anon_sym_class] = ACTIONS(1320),
        [anon_sym_unsafe] = ACTIONS(1320),
        [anon_sym_abstract] = ACTIONS(1320),
        [anon_sym_sealed] = ACTIONS(1320),
        [anon_sym_static] = ACTIONS(1320),
        [anon_sym_new] = ACTIONS(1320),
        [anon_sym_public] = ACTIONS(1320),
        [anon_sym_protected] = ACTIONS(1320),
        [anon_sym_internal] = ACTIONS(1320),
        [anon_sym_private] = ACTIONS(1320),
        [anon_sym_struct] = ACTIONS(1320),
        [anon_sym_enum] = ACTIONS(1320),
        [anon_sym_delegate] = ACTIONS(1320),
        [anon_sym_LBRACK] = ACTIONS(1320),
        [sym_comment] = ACTIONS(101),
    },
    [365] = {
        [anon_sym_RBRACE] = ACTIONS(1323),
        [anon_sym_class] = ACTIONS(1237),
        [anon_sym_unsafe] = ACTIONS(1237),
        [anon_sym_abstract] = ACTIONS(1237),
        [anon_sym_sealed] = ACTIONS(1237),
        [anon_sym_static] = ACTIONS(1237),
        [anon_sym_new] = ACTIONS(1237),
        [anon_sym_public] = ACTIONS(1237),
        [anon_sym_protected] = ACTIONS(1237),
        [anon_sym_internal] = ACTIONS(1237),
        [anon_sym_private] = ACTIONS(1237),
        [anon_sym_struct] = ACTIONS(1237),
        [anon_sym_enum] = ACTIONS(1237),
        [anon_sym_sbyte] = ACTIONS(1237),
        [anon_sym_byte] = ACTIONS(1237),
        [anon_sym_short] = ACTIONS(1237),
        [anon_sym_ushort] = ACTIONS(1237),
        [anon_sym_int] = ACTIONS(1237),
        [anon_sym_uint] = ACTIONS(1237),
        [anon_sym_long] = ACTIONS(1237),
        [anon_sym_ulong] = ACTIONS(1237),
        [anon_sym_char] = ACTIONS(1237),
        [anon_sym_delegate] = ACTIONS(1237),
        [anon_sym_LBRACK] = ACTIONS(1323),
        [sym_const_keyword] = ACTIONS(1237),
        [anon_sym_readonly] = ACTIONS(1237),
        [anon_sym_volatile] = ACTIONS(1237),
        [anon_sym_bool] = ACTIONS(1237),
        [anon_sym_decimal] = ACTIONS(1237),
        [anon_sym_double] = ACTIONS(1237),
        [anon_sym_float] = ACTIONS(1237),
        [anon_sym_object] = ACTIONS(1237),
        [anon_sym_string] = ACTIONS(1237),
        [sym_identifier_name] = ACTIONS(1240),
        [sym_comment] = ACTIONS(101),
    },
    [366] = {
        [sym_variable_declaration] = STATE(396),
        [sym__type] = STATE(203),
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
        [sym_const_keyword] = ACTIONS(1326),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [367] = {
        [anon_sym_sbyte] = ACTIONS(1328),
        [anon_sym_byte] = ACTIONS(1328),
        [anon_sym_short] = ACTIONS(1328),
        [anon_sym_ushort] = ACTIONS(1328),
        [anon_sym_int] = ACTIONS(1328),
        [anon_sym_uint] = ACTIONS(1328),
        [anon_sym_long] = ACTIONS(1328),
        [anon_sym_ulong] = ACTIONS(1328),
        [anon_sym_char] = ACTIONS(1328),
        [sym_const_keyword] = ACTIONS(1328),
        [anon_sym_bool] = ACTIONS(1328),
        [anon_sym_decimal] = ACTIONS(1328),
        [anon_sym_double] = ACTIONS(1328),
        [anon_sym_float] = ACTIONS(1328),
        [anon_sym_object] = ACTIONS(1328),
        [anon_sym_string] = ACTIONS(1328),
        [sym_identifier_name] = ACTIONS(1331),
        [sym_comment] = ACTIONS(101),
    },
    [368] = {
        [anon_sym_SEMI] = ACTIONS(1334),
        [sym_comment] = ACTIONS(101),
    },
    [369] = {
        [sym_array_rank_specifier] = STATE(93),
        [sym_variable_declarator] = STATE(208),
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(331),
        [anon_sym_GT] = ACTIONS(357),
        [sym_identifier_name] = ACTIONS(1336),
        [sym_comment] = ACTIONS(101),
    },
    [370] = {
        [aux_sym_variable_declaration_repeat1] = STATE(210),
        [anon_sym_SEMI] = ACTIONS(1339),
        [anon_sym_COMMA] = ACTIONS(1343),
        [sym_comment] = ACTIONS(101),
    },
    [371] = {
        [anon_sym_SEMI] = ACTIONS(691),
        [anon_sym_RBRACE] = ACTIONS(1347),
        [anon_sym_COMMA] = ACTIONS(1350),
        [sym_comment] = ACTIONS(101),
    },
    [372] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1354),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1357),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1357),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1357),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1357),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1357),
        [anon_sym_BSLASH0] = ACTIONS(1357),
        [anon_sym_BSLASHa] = ACTIONS(1357),
        [anon_sym_BSLASHb] = ACTIONS(1357),
        [anon_sym_BSLASHf] = ACTIONS(1357),
        [anon_sym_BSLASHn] = ACTIONS(1357),
        [anon_sym_BSLASHr] = ACTIONS(1357),
        [anon_sym_BSLASHt] = ACTIONS(1357),
        [anon_sym_BSLASHv] = ACTIONS(1357),
        [anon_sym_DQUOTE] = ACTIONS(1357),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1354),
        [sym_comment] = ACTIONS(101),
    },
    [373] = {
        [anon_sym_LBRACE] = ACTIONS(1360),
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_GT] = ACTIONS(353),
        [sym_identifier_name] = ACTIONS(355),
        [sym_comment] = ACTIONS(101),
    },
    [374] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(1362),
        [anon_sym_GT] = ACTIONS(1366),
        [sym_comment] = ACTIONS(101),
    },
    [375] = {
        [anon_sym_SEMI] = ACTIONS(1370),
        [anon_sym_LBRACE] = ACTIONS(867),
        [anon_sym_DOT] = ACTIONS(869),
        [sym_comment] = ACTIONS(101),
    },
    [376] = {
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
        [aux_sym_compilation_unit_repeat3] = STATE(385),
        [aux_sym_compilation_unit_repeat4] = STATE(386),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1372),
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
    [377] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(384),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1375),
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
        [ts_builtin_sym_end] = ACTIONS(1379),
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
    [379] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1384),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [380] = {
        [anon_sym_RBRACE] = ACTIONS(1386),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(1388),
        [anon_sym_SEMI] = ACTIONS(1394),
        [anon_sym_namespace] = ACTIONS(1396),
        [anon_sym_RBRACE] = ACTIONS(1388),
        [anon_sym_class] = ACTIONS(1396),
        [anon_sym_unsafe] = ACTIONS(1396),
        [anon_sym_abstract] = ACTIONS(1396),
        [anon_sym_sealed] = ACTIONS(1396),
        [anon_sym_static] = ACTIONS(1396),
        [anon_sym_new] = ACTIONS(1396),
        [anon_sym_public] = ACTIONS(1396),
        [anon_sym_protected] = ACTIONS(1396),
        [anon_sym_internal] = ACTIONS(1396),
        [anon_sym_private] = ACTIONS(1396),
        [anon_sym_struct] = ACTIONS(1396),
        [anon_sym_enum] = ACTIONS(1396),
        [anon_sym_sbyte] = ACTIONS(1396),
        [anon_sym_byte] = ACTIONS(1396),
        [anon_sym_short] = ACTIONS(1396),
        [anon_sym_ushort] = ACTIONS(1396),
        [anon_sym_int] = ACTIONS(1396),
        [anon_sym_uint] = ACTIONS(1396),
        [anon_sym_long] = ACTIONS(1396),
        [anon_sym_ulong] = ACTIONS(1396),
        [anon_sym_char] = ACTIONS(1396),
        [anon_sym_delegate] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(1388),
        [sym_const_keyword] = ACTIONS(1396),
        [anon_sym_readonly] = ACTIONS(1396),
        [anon_sym_volatile] = ACTIONS(1396),
        [anon_sym_bool] = ACTIONS(1396),
        [anon_sym_decimal] = ACTIONS(1396),
        [anon_sym_double] = ACTIONS(1396),
        [anon_sym_float] = ACTIONS(1396),
        [anon_sym_object] = ACTIONS(1396),
        [anon_sym_string] = ACTIONS(1396),
        [sym_identifier_name] = ACTIONS(1402),
        [sym_comment] = ACTIONS(101),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(1408),
        [anon_sym_namespace] = ACTIONS(1414),
        [anon_sym_RBRACE] = ACTIONS(1408),
        [anon_sym_class] = ACTIONS(1414),
        [anon_sym_unsafe] = ACTIONS(1414),
        [anon_sym_abstract] = ACTIONS(1414),
        [anon_sym_sealed] = ACTIONS(1414),
        [anon_sym_static] = ACTIONS(1414),
        [anon_sym_new] = ACTIONS(1414),
        [anon_sym_public] = ACTIONS(1414),
        [anon_sym_protected] = ACTIONS(1414),
        [anon_sym_internal] = ACTIONS(1414),
        [anon_sym_private] = ACTIONS(1414),
        [anon_sym_struct] = ACTIONS(1414),
        [anon_sym_enum] = ACTIONS(1414),
        [anon_sym_sbyte] = ACTIONS(1414),
        [anon_sym_byte] = ACTIONS(1414),
        [anon_sym_short] = ACTIONS(1414),
        [anon_sym_ushort] = ACTIONS(1414),
        [anon_sym_int] = ACTIONS(1414),
        [anon_sym_uint] = ACTIONS(1414),
        [anon_sym_long] = ACTIONS(1414),
        [anon_sym_ulong] = ACTIONS(1414),
        [anon_sym_char] = ACTIONS(1414),
        [anon_sym_delegate] = ACTIONS(1414),
        [anon_sym_LBRACK] = ACTIONS(1408),
        [sym_const_keyword] = ACTIONS(1414),
        [anon_sym_readonly] = ACTIONS(1414),
        [anon_sym_volatile] = ACTIONS(1414),
        [anon_sym_bool] = ACTIONS(1414),
        [anon_sym_decimal] = ACTIONS(1414),
        [anon_sym_double] = ACTIONS(1414),
        [anon_sym_float] = ACTIONS(1414),
        [anon_sym_object] = ACTIONS(1414),
        [anon_sym_string] = ACTIONS(1414),
        [sym_identifier_name] = ACTIONS(1420),
        [sym_comment] = ACTIONS(101),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(1426),
        [anon_sym_namespace] = ACTIONS(1435),
        [anon_sym_RBRACE] = ACTIONS(1426),
        [anon_sym_class] = ACTIONS(1435),
        [anon_sym_unsafe] = ACTIONS(1435),
        [anon_sym_abstract] = ACTIONS(1435),
        [anon_sym_sealed] = ACTIONS(1435),
        [anon_sym_static] = ACTIONS(1435),
        [anon_sym_new] = ACTIONS(1435),
        [anon_sym_public] = ACTIONS(1435),
        [anon_sym_protected] = ACTIONS(1435),
        [anon_sym_internal] = ACTIONS(1435),
        [anon_sym_private] = ACTIONS(1435),
        [anon_sym_struct] = ACTIONS(1435),
        [anon_sym_enum] = ACTIONS(1435),
        [anon_sym_sbyte] = ACTIONS(1435),
        [anon_sym_byte] = ACTIONS(1435),
        [anon_sym_short] = ACTIONS(1435),
        [anon_sym_ushort] = ACTIONS(1435),
        [anon_sym_int] = ACTIONS(1435),
        [anon_sym_uint] = ACTIONS(1435),
        [anon_sym_long] = ACTIONS(1435),
        [anon_sym_ulong] = ACTIONS(1435),
        [anon_sym_char] = ACTIONS(1435),
        [anon_sym_delegate] = ACTIONS(1435),
        [anon_sym_LBRACK] = ACTIONS(1426),
        [sym_const_keyword] = ACTIONS(1435),
        [anon_sym_readonly] = ACTIONS(1435),
        [anon_sym_volatile] = ACTIONS(1435),
        [anon_sym_bool] = ACTIONS(1435),
        [anon_sym_decimal] = ACTIONS(1435),
        [anon_sym_double] = ACTIONS(1435),
        [anon_sym_float] = ACTIONS(1435),
        [anon_sym_object] = ACTIONS(1435),
        [anon_sym_string] = ACTIONS(1435),
        [sym_identifier_name] = ACTIONS(1444),
        [sym_comment] = ACTIONS(101),
    },
    [384] = {
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
        [ts_builtin_sym_end] = ACTIONS(1453),
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
    [385] = {
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
        [aux_sym_compilation_unit_repeat4] = STATE(387),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1457),
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
    [386] = {
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
        [ts_builtin_sym_end] = ACTIONS(1457),
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
        [ts_builtin_sym_end] = ACTIONS(1460),
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
        [ts_builtin_sym_end] = ACTIONS(1463),
        [anon_sym_using] = ACTIONS(1463),
        [anon_sym_namespace] = ACTIONS(1463),
        [anon_sym_class] = ACTIONS(1463),
        [anon_sym_unsafe] = ACTIONS(1463),
        [anon_sym_abstract] = ACTIONS(1463),
        [anon_sym_sealed] = ACTIONS(1463),
        [anon_sym_static] = ACTIONS(1463),
        [anon_sym_new] = ACTIONS(1463),
        [anon_sym_public] = ACTIONS(1463),
        [anon_sym_protected] = ACTIONS(1463),
        [anon_sym_internal] = ACTIONS(1463),
        [anon_sym_private] = ACTIONS(1463),
        [anon_sym_struct] = ACTIONS(1463),
        [anon_sym_enum] = ACTIONS(1463),
        [anon_sym_delegate] = ACTIONS(1463),
        [anon_sym_LBRACK] = ACTIONS(1463),
        [sym_comment] = ACTIONS(101),
    },
    [389] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(391),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1466),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [390] = {
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
        [sym_const_keyword] = ACTIONS(1475),
        [anon_sym_readonly] = ACTIONS(1475),
        [anon_sym_volatile] = ACTIONS(1475),
        [anon_sym_bool] = ACTIONS(1475),
        [anon_sym_decimal] = ACTIONS(1475),
        [anon_sym_double] = ACTIONS(1475),
        [anon_sym_float] = ACTIONS(1475),
        [anon_sym_object] = ACTIONS(1475),
        [anon_sym_string] = ACTIONS(1475),
        [sym_identifier_name] = ACTIONS(1482),
        [sym_comment] = ACTIONS(101),
    },
    [391] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1489),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [392] = {
        [ts_builtin_sym_end] = ACTIONS(1491),
        [anon_sym_namespace] = ACTIONS(1498),
        [anon_sym_RBRACE] = ACTIONS(1491),
        [anon_sym_class] = ACTIONS(1498),
        [anon_sym_unsafe] = ACTIONS(1498),
        [anon_sym_abstract] = ACTIONS(1498),
        [anon_sym_sealed] = ACTIONS(1498),
        [anon_sym_static] = ACTIONS(1498),
        [anon_sym_new] = ACTIONS(1498),
        [anon_sym_public] = ACTIONS(1498),
        [anon_sym_protected] = ACTIONS(1498),
        [anon_sym_internal] = ACTIONS(1498),
        [anon_sym_private] = ACTIONS(1498),
        [anon_sym_struct] = ACTIONS(1498),
        [anon_sym_enum] = ACTIONS(1498),
        [anon_sym_sbyte] = ACTIONS(1498),
        [anon_sym_byte] = ACTIONS(1498),
        [anon_sym_short] = ACTIONS(1498),
        [anon_sym_ushort] = ACTIONS(1498),
        [anon_sym_int] = ACTIONS(1498),
        [anon_sym_uint] = ACTIONS(1498),
        [anon_sym_long] = ACTIONS(1498),
        [anon_sym_ulong] = ACTIONS(1498),
        [anon_sym_char] = ACTIONS(1498),
        [anon_sym_delegate] = ACTIONS(1498),
        [anon_sym_LBRACK] = ACTIONS(1491),
        [sym_const_keyword] = ACTIONS(1498),
        [anon_sym_readonly] = ACTIONS(1498),
        [anon_sym_volatile] = ACTIONS(1498),
        [anon_sym_bool] = ACTIONS(1498),
        [anon_sym_decimal] = ACTIONS(1498),
        [anon_sym_double] = ACTIONS(1498),
        [anon_sym_float] = ACTIONS(1498),
        [anon_sym_object] = ACTIONS(1498),
        [anon_sym_string] = ACTIONS(1498),
        [sym_identifier_name] = ACTIONS(1505),
        [sym_comment] = ACTIONS(101),
    },
    [393] = {
        [sym_equals_value_clause] = STATE(214),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(1512),
        [anon_sym_RPAREN] = ACTIONS(1517),
        [sym_params_keyword] = ACTIONS(1517),
        [anon_sym_LBRACK] = ACTIONS(1517),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [394] = {
        [anon_sym_RBRACE] = ACTIONS(1521),
        [anon_sym_class] = ACTIONS(1526),
        [anon_sym_unsafe] = ACTIONS(1526),
        [anon_sym_abstract] = ACTIONS(1526),
        [anon_sym_sealed] = ACTIONS(1526),
        [anon_sym_static] = ACTIONS(1526),
        [anon_sym_new] = ACTIONS(1526),
        [anon_sym_public] = ACTIONS(1526),
        [anon_sym_protected] = ACTIONS(1526),
        [anon_sym_internal] = ACTIONS(1526),
        [anon_sym_private] = ACTIONS(1526),
        [anon_sym_struct] = ACTIONS(1526),
        [anon_sym_enum] = ACTIONS(1526),
        [anon_sym_sbyte] = ACTIONS(1526),
        [anon_sym_byte] = ACTIONS(1526),
        [anon_sym_short] = ACTIONS(1526),
        [anon_sym_ushort] = ACTIONS(1526),
        [anon_sym_int] = ACTIONS(1526),
        [anon_sym_uint] = ACTIONS(1526),
        [anon_sym_long] = ACTIONS(1526),
        [anon_sym_ulong] = ACTIONS(1526),
        [anon_sym_char] = ACTIONS(1526),
        [anon_sym_delegate] = ACTIONS(1526),
        [anon_sym_LBRACK] = ACTIONS(1521),
        [sym_const_keyword] = ACTIONS(1526),
        [anon_sym_readonly] = ACTIONS(1526),
        [anon_sym_volatile] = ACTIONS(1526),
        [anon_sym_bool] = ACTIONS(1526),
        [anon_sym_decimal] = ACTIONS(1526),
        [anon_sym_double] = ACTIONS(1526),
        [anon_sym_float] = ACTIONS(1526),
        [anon_sym_object] = ACTIONS(1526),
        [anon_sym_string] = ACTIONS(1526),
        [sym_identifier_name] = ACTIONS(1531),
        [sym_comment] = ACTIONS(101),
    },
    [395] = {
        [sym_variable_declaration] = STATE(398),
        [sym__type] = STATE(203),
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
    [396] = {
        [anon_sym_SEMI] = ACTIONS(1536),
        [sym_comment] = ACTIONS(101),
    },
    [397] = {
        [anon_sym_RBRACE] = ACTIONS(1538),
        [anon_sym_class] = ACTIONS(1541),
        [anon_sym_unsafe] = ACTIONS(1541),
        [anon_sym_abstract] = ACTIONS(1541),
        [anon_sym_sealed] = ACTIONS(1541),
        [anon_sym_static] = ACTIONS(1541),
        [anon_sym_new] = ACTIONS(1541),
        [anon_sym_public] = ACTIONS(1541),
        [anon_sym_protected] = ACTIONS(1541),
        [anon_sym_internal] = ACTIONS(1541),
        [anon_sym_private] = ACTIONS(1541),
        [anon_sym_struct] = ACTIONS(1541),
        [anon_sym_enum] = ACTIONS(1541),
        [anon_sym_sbyte] = ACTIONS(1541),
        [anon_sym_byte] = ACTIONS(1541),
        [anon_sym_short] = ACTIONS(1541),
        [anon_sym_ushort] = ACTIONS(1541),
        [anon_sym_int] = ACTIONS(1541),
        [anon_sym_uint] = ACTIONS(1541),
        [anon_sym_long] = ACTIONS(1541),
        [anon_sym_ulong] = ACTIONS(1541),
        [anon_sym_char] = ACTIONS(1541),
        [anon_sym_delegate] = ACTIONS(1541),
        [anon_sym_LBRACK] = ACTIONS(1538),
        [sym_const_keyword] = ACTIONS(1541),
        [anon_sym_readonly] = ACTIONS(1541),
        [anon_sym_volatile] = ACTIONS(1541),
        [anon_sym_bool] = ACTIONS(1541),
        [anon_sym_decimal] = ACTIONS(1541),
        [anon_sym_double] = ACTIONS(1541),
        [anon_sym_float] = ACTIONS(1541),
        [anon_sym_object] = ACTIONS(1541),
        [anon_sym_string] = ACTIONS(1541),
        [sym_identifier_name] = ACTIONS(1544),
        [sym_comment] = ACTIONS(101),
    },
    [398] = {
        [anon_sym_SEMI] = ACTIONS(1547),
        [sym_comment] = ACTIONS(101),
    },
    [399] = {
        [anon_sym_RBRACE] = ACTIONS(1549),
        [anon_sym_class] = ACTIONS(1552),
        [anon_sym_unsafe] = ACTIONS(1552),
        [anon_sym_abstract] = ACTIONS(1552),
        [anon_sym_sealed] = ACTIONS(1552),
        [anon_sym_static] = ACTIONS(1552),
        [anon_sym_new] = ACTIONS(1552),
        [anon_sym_public] = ACTIONS(1552),
        [anon_sym_protected] = ACTIONS(1552),
        [anon_sym_internal] = ACTIONS(1552),
        [anon_sym_private] = ACTIONS(1552),
        [anon_sym_struct] = ACTIONS(1552),
        [anon_sym_enum] = ACTIONS(1552),
        [anon_sym_sbyte] = ACTIONS(1552),
        [anon_sym_byte] = ACTIONS(1552),
        [anon_sym_short] = ACTIONS(1552),
        [anon_sym_ushort] = ACTIONS(1552),
        [anon_sym_int] = ACTIONS(1552),
        [anon_sym_uint] = ACTIONS(1552),
        [anon_sym_long] = ACTIONS(1552),
        [anon_sym_ulong] = ACTIONS(1552),
        [anon_sym_char] = ACTIONS(1552),
        [anon_sym_delegate] = ACTIONS(1552),
        [anon_sym_LBRACK] = ACTIONS(1549),
        [sym_const_keyword] = ACTIONS(1552),
        [anon_sym_readonly] = ACTIONS(1552),
        [anon_sym_volatile] = ACTIONS(1552),
        [anon_sym_bool] = ACTIONS(1552),
        [anon_sym_decimal] = ACTIONS(1552),
        [anon_sym_double] = ACTIONS(1552),
        [anon_sym_float] = ACTIONS(1552),
        [anon_sym_object] = ACTIONS(1552),
        [anon_sym_string] = ACTIONS(1552),
        [sym_identifier_name] = ACTIONS(1555),
        [sym_comment] = ACTIONS(101),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(863),
        [anon_sym_namespace] = ACTIONS(1122),
        [anon_sym_class] = ACTIONS(1124),
        [anon_sym_unsafe] = ACTIONS(1124),
        [anon_sym_abstract] = ACTIONS(1124),
        [anon_sym_sealed] = ACTIONS(1124),
        [anon_sym_static] = ACTIONS(1124),
        [anon_sym_new] = ACTIONS(1124),
        [anon_sym_public] = ACTIONS(1124),
        [anon_sym_protected] = ACTIONS(1124),
        [anon_sym_internal] = ACTIONS(1124),
        [anon_sym_private] = ACTIONS(1124),
        [anon_sym_struct] = ACTIONS(1124),
        [anon_sym_enum] = ACTIONS(1124),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_delegate] = ACTIONS(1124),
        [anon_sym_ref] = ACTIONS(231),
        [anon_sym_out] = ACTIONS(231),
        [anon_sym_this] = ACTIONS(231),
        [sym_params_keyword] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(1127),
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
    [401] = {
        [sym_equals_value_clause] = STATE(135),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_EQ] = ACTIONS(413),
        [anon_sym_LT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [402] = {
        [sym_variable_declarator] = STATE(208),
        [sym_identifier_name] = ACTIONS(1558),
        [sym_comment] = ACTIONS(101),
    },
    [403] = {
        [sym_equals_value_clause] = STATE(214),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(1560),
        [anon_sym_RPAREN] = ACTIONS(323),
        [sym_params_keyword] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_EQ] = ACTIONS(413),
        [sym_comment] = ACTIONS(101),
    },
    [404] = {
        [anon_sym_RPAREN] = ACTIONS(1563),
        [sym_comment] = ACTIONS(101),
    },
    [405] = {
        [sym_identifier_name] = ACTIONS(1566),
        [sym_comment] = ACTIONS(101),
    },
    [406] = {
        [anon_sym_COMMA] = ACTIONS(1568),
        [anon_sym_RPAREN] = ACTIONS(1568),
        [sym_params_keyword] = ACTIONS(1568),
        [anon_sym_LBRACK] = ACTIONS(1568),
        [sym_comment] = ACTIONS(101),
    },
    [407] = {
        [ts_builtin_sym_end] = ACTIONS(1571),
        [anon_sym_namespace] = ACTIONS(1575),
        [anon_sym_RBRACE] = ACTIONS(1571),
        [anon_sym_class] = ACTIONS(1575),
        [anon_sym_unsafe] = ACTIONS(1575),
        [anon_sym_abstract] = ACTIONS(1575),
        [anon_sym_sealed] = ACTIONS(1575),
        [anon_sym_static] = ACTIONS(1575),
        [anon_sym_new] = ACTIONS(1575),
        [anon_sym_public] = ACTIONS(1575),
        [anon_sym_protected] = ACTIONS(1575),
        [anon_sym_internal] = ACTIONS(1575),
        [anon_sym_private] = ACTIONS(1575),
        [anon_sym_struct] = ACTIONS(1575),
        [anon_sym_enum] = ACTIONS(1575),
        [anon_sym_sbyte] = ACTIONS(1575),
        [anon_sym_byte] = ACTIONS(1575),
        [anon_sym_short] = ACTIONS(1575),
        [anon_sym_ushort] = ACTIONS(1575),
        [anon_sym_int] = ACTIONS(1575),
        [anon_sym_uint] = ACTIONS(1575),
        [anon_sym_long] = ACTIONS(1575),
        [anon_sym_ulong] = ACTIONS(1575),
        [anon_sym_char] = ACTIONS(1575),
        [anon_sym_delegate] = ACTIONS(1575),
        [anon_sym_LBRACK] = ACTIONS(1571),
        [sym_const_keyword] = ACTIONS(1575),
        [anon_sym_readonly] = ACTIONS(1575),
        [anon_sym_volatile] = ACTIONS(1575),
        [anon_sym_bool] = ACTIONS(1575),
        [anon_sym_decimal] = ACTIONS(1575),
        [anon_sym_double] = ACTIONS(1575),
        [anon_sym_float] = ACTIONS(1575),
        [anon_sym_object] = ACTIONS(1575),
        [anon_sym_string] = ACTIONS(1575),
        [sym_identifier_name] = ACTIONS(1579),
        [sym_comment] = ACTIONS(101),
    },
    [408] = {
        [sym_parameter_list] = STATE(355),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [409] = {
        [sym__return_type] = STATE(410),
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
    [410] = {
        [sym_identifier_name] = ACTIONS(1583),
        [sym_comment] = ACTIONS(101),
    },
    [411] = {
        [sym_parameter_list] = STATE(412),
        [anon_sym_LPAREN] = ACTIONS(285),
        [sym_comment] = ACTIONS(101),
    },
    [412] = {
        [anon_sym_SEMI] = ACTIONS(1585),
        [sym_comment] = ACTIONS(101),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(1587),
        [anon_sym_namespace] = ACTIONS(1590),
        [anon_sym_RBRACE] = ACTIONS(1587),
        [anon_sym_class] = ACTIONS(1590),
        [anon_sym_unsafe] = ACTIONS(1590),
        [anon_sym_abstract] = ACTIONS(1590),
        [anon_sym_sealed] = ACTIONS(1590),
        [anon_sym_static] = ACTIONS(1590),
        [anon_sym_new] = ACTIONS(1590),
        [anon_sym_public] = ACTIONS(1590),
        [anon_sym_protected] = ACTIONS(1590),
        [anon_sym_internal] = ACTIONS(1590),
        [anon_sym_private] = ACTIONS(1590),
        [anon_sym_struct] = ACTIONS(1590),
        [anon_sym_enum] = ACTIONS(1590),
        [anon_sym_sbyte] = ACTIONS(1590),
        [anon_sym_byte] = ACTIONS(1590),
        [anon_sym_short] = ACTIONS(1590),
        [anon_sym_ushort] = ACTIONS(1590),
        [anon_sym_int] = ACTIONS(1590),
        [anon_sym_uint] = ACTIONS(1590),
        [anon_sym_long] = ACTIONS(1590),
        [anon_sym_ulong] = ACTIONS(1590),
        [anon_sym_char] = ACTIONS(1590),
        [anon_sym_delegate] = ACTIONS(1590),
        [anon_sym_LBRACK] = ACTIONS(1587),
        [sym_const_keyword] = ACTIONS(1590),
        [anon_sym_readonly] = ACTIONS(1590),
        [anon_sym_volatile] = ACTIONS(1590),
        [anon_sym_bool] = ACTIONS(1590),
        [anon_sym_decimal] = ACTIONS(1590),
        [anon_sym_double] = ACTIONS(1590),
        [anon_sym_float] = ACTIONS(1590),
        [anon_sym_object] = ACTIONS(1590),
        [anon_sym_string] = ACTIONS(1590),
        [sym_identifier_name] = ACTIONS(1593),
        [sym_comment] = ACTIONS(101),
    },
    [414] = {
        [sym_enum_member_declaration] = STATE(415),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [415] = {
        [aux_sym_enum_declaration_repeat1] = STATE(417),
        [anon_sym_RBRACE] = ACTIONS(1596),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [416] = {
        [ts_builtin_sym_end] = ACTIONS(1598),
        [anon_sym_SEMI] = ACTIONS(1602),
        [anon_sym_namespace] = ACTIONS(1604),
        [anon_sym_RBRACE] = ACTIONS(1598),
        [anon_sym_class] = ACTIONS(1604),
        [anon_sym_unsafe] = ACTIONS(1604),
        [anon_sym_abstract] = ACTIONS(1604),
        [anon_sym_sealed] = ACTIONS(1604),
        [anon_sym_static] = ACTIONS(1604),
        [anon_sym_new] = ACTIONS(1604),
        [anon_sym_public] = ACTIONS(1604),
        [anon_sym_protected] = ACTIONS(1604),
        [anon_sym_internal] = ACTIONS(1604),
        [anon_sym_private] = ACTIONS(1604),
        [anon_sym_struct] = ACTIONS(1604),
        [anon_sym_enum] = ACTIONS(1604),
        [anon_sym_sbyte] = ACTIONS(1604),
        [anon_sym_byte] = ACTIONS(1604),
        [anon_sym_short] = ACTIONS(1604),
        [anon_sym_ushort] = ACTIONS(1604),
        [anon_sym_int] = ACTIONS(1604),
        [anon_sym_uint] = ACTIONS(1604),
        [anon_sym_long] = ACTIONS(1604),
        [anon_sym_ulong] = ACTIONS(1604),
        [anon_sym_char] = ACTIONS(1604),
        [anon_sym_delegate] = ACTIONS(1604),
        [anon_sym_LBRACK] = ACTIONS(1598),
        [sym_const_keyword] = ACTIONS(1604),
        [anon_sym_readonly] = ACTIONS(1604),
        [anon_sym_volatile] = ACTIONS(1604),
        [anon_sym_bool] = ACTIONS(1604),
        [anon_sym_decimal] = ACTIONS(1604),
        [anon_sym_double] = ACTIONS(1604),
        [anon_sym_float] = ACTIONS(1604),
        [anon_sym_object] = ACTIONS(1604),
        [anon_sym_string] = ACTIONS(1604),
        [sym_identifier_name] = ACTIONS(1608),
        [sym_comment] = ACTIONS(101),
    },
    [417] = {
        [anon_sym_RBRACE] = ACTIONS(1612),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [418] = {
        [ts_builtin_sym_end] = ACTIONS(1614),
        [anon_sym_SEMI] = ACTIONS(1618),
        [anon_sym_namespace] = ACTIONS(1620),
        [anon_sym_RBRACE] = ACTIONS(1614),
        [anon_sym_class] = ACTIONS(1620),
        [anon_sym_unsafe] = ACTIONS(1620),
        [anon_sym_abstract] = ACTIONS(1620),
        [anon_sym_sealed] = ACTIONS(1620),
        [anon_sym_static] = ACTIONS(1620),
        [anon_sym_new] = ACTIONS(1620),
        [anon_sym_public] = ACTIONS(1620),
        [anon_sym_protected] = ACTIONS(1620),
        [anon_sym_internal] = ACTIONS(1620),
        [anon_sym_private] = ACTIONS(1620),
        [anon_sym_struct] = ACTIONS(1620),
        [anon_sym_enum] = ACTIONS(1620),
        [anon_sym_sbyte] = ACTIONS(1620),
        [anon_sym_byte] = ACTIONS(1620),
        [anon_sym_short] = ACTIONS(1620),
        [anon_sym_ushort] = ACTIONS(1620),
        [anon_sym_int] = ACTIONS(1620),
        [anon_sym_uint] = ACTIONS(1620),
        [anon_sym_long] = ACTIONS(1620),
        [anon_sym_ulong] = ACTIONS(1620),
        [anon_sym_char] = ACTIONS(1620),
        [anon_sym_delegate] = ACTIONS(1620),
        [anon_sym_LBRACK] = ACTIONS(1614),
        [sym_const_keyword] = ACTIONS(1620),
        [anon_sym_readonly] = ACTIONS(1620),
        [anon_sym_volatile] = ACTIONS(1620),
        [anon_sym_bool] = ACTIONS(1620),
        [anon_sym_decimal] = ACTIONS(1620),
        [anon_sym_double] = ACTIONS(1620),
        [anon_sym_float] = ACTIONS(1620),
        [anon_sym_object] = ACTIONS(1620),
        [anon_sym_string] = ACTIONS(1620),
        [sym_identifier_name] = ACTIONS(1624),
        [sym_comment] = ACTIONS(101),
    },
    [419] = {
        [ts_builtin_sym_end] = ACTIONS(1628),
        [anon_sym_namespace] = ACTIONS(1632),
        [anon_sym_RBRACE] = ACTIONS(1628),
        [anon_sym_class] = ACTIONS(1632),
        [anon_sym_unsafe] = ACTIONS(1632),
        [anon_sym_abstract] = ACTIONS(1632),
        [anon_sym_sealed] = ACTIONS(1632),
        [anon_sym_static] = ACTIONS(1632),
        [anon_sym_new] = ACTIONS(1632),
        [anon_sym_public] = ACTIONS(1632),
        [anon_sym_protected] = ACTIONS(1632),
        [anon_sym_internal] = ACTIONS(1632),
        [anon_sym_private] = ACTIONS(1632),
        [anon_sym_struct] = ACTIONS(1632),
        [anon_sym_enum] = ACTIONS(1632),
        [anon_sym_sbyte] = ACTIONS(1632),
        [anon_sym_byte] = ACTIONS(1632),
        [anon_sym_short] = ACTIONS(1632),
        [anon_sym_ushort] = ACTIONS(1632),
        [anon_sym_int] = ACTIONS(1632),
        [anon_sym_uint] = ACTIONS(1632),
        [anon_sym_long] = ACTIONS(1632),
        [anon_sym_ulong] = ACTIONS(1632),
        [anon_sym_char] = ACTIONS(1632),
        [anon_sym_delegate] = ACTIONS(1632),
        [anon_sym_LBRACK] = ACTIONS(1628),
        [sym_const_keyword] = ACTIONS(1632),
        [anon_sym_readonly] = ACTIONS(1632),
        [anon_sym_volatile] = ACTIONS(1632),
        [anon_sym_bool] = ACTIONS(1632),
        [anon_sym_decimal] = ACTIONS(1632),
        [anon_sym_double] = ACTIONS(1632),
        [anon_sym_float] = ACTIONS(1632),
        [anon_sym_object] = ACTIONS(1632),
        [anon_sym_string] = ACTIONS(1632),
        [sym_identifier_name] = ACTIONS(1636),
        [sym_comment] = ACTIONS(101),
    },
    [420] = {
        [ts_builtin_sym_end] = ACTIONS(1614),
        [anon_sym_namespace] = ACTIONS(1620),
        [anon_sym_RBRACE] = ACTIONS(1614),
        [anon_sym_class] = ACTIONS(1620),
        [anon_sym_unsafe] = ACTIONS(1620),
        [anon_sym_abstract] = ACTIONS(1620),
        [anon_sym_sealed] = ACTIONS(1620),
        [anon_sym_static] = ACTIONS(1620),
        [anon_sym_new] = ACTIONS(1620),
        [anon_sym_public] = ACTIONS(1620),
        [anon_sym_protected] = ACTIONS(1620),
        [anon_sym_internal] = ACTIONS(1620),
        [anon_sym_private] = ACTIONS(1620),
        [anon_sym_struct] = ACTIONS(1620),
        [anon_sym_enum] = ACTIONS(1620),
        [anon_sym_sbyte] = ACTIONS(1620),
        [anon_sym_byte] = ACTIONS(1620),
        [anon_sym_short] = ACTIONS(1620),
        [anon_sym_ushort] = ACTIONS(1620),
        [anon_sym_int] = ACTIONS(1620),
        [anon_sym_uint] = ACTIONS(1620),
        [anon_sym_long] = ACTIONS(1620),
        [anon_sym_ulong] = ACTIONS(1620),
        [anon_sym_char] = ACTIONS(1620),
        [anon_sym_delegate] = ACTIONS(1620),
        [anon_sym_LBRACK] = ACTIONS(1614),
        [sym_const_keyword] = ACTIONS(1620),
        [anon_sym_readonly] = ACTIONS(1620),
        [anon_sym_volatile] = ACTIONS(1620),
        [anon_sym_bool] = ACTIONS(1620),
        [anon_sym_decimal] = ACTIONS(1620),
        [anon_sym_double] = ACTIONS(1620),
        [anon_sym_float] = ACTIONS(1620),
        [anon_sym_object] = ACTIONS(1620),
        [anon_sym_string] = ACTIONS(1620),
        [sym_identifier_name] = ACTIONS(1624),
        [sym_comment] = ACTIONS(101),
    },
    [421] = {
        [sym_identifier_name] = ACTIONS(1640),
        [sym_comment] = ACTIONS(101),
    },
    [422] = {
        [anon_sym_LBRACE] = ACTIONS(1642),
        [anon_sym_COLON] = ACTIONS(1644),
        [sym_comment] = ACTIONS(101),
    },
    [423] = {
        [sym_enum_member_declaration] = STATE(433),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [424] = {
        [sym__integral_type] = STATE(425),
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
    [425] = {
        [anon_sym_LBRACE] = ACTIONS(1646),
        [sym_comment] = ACTIONS(101),
    },
    [426] = {
        [sym_enum_member_declaration] = STATE(427),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [427] = {
        [aux_sym_enum_declaration_repeat1] = STATE(429),
        [anon_sym_RBRACE] = ACTIONS(1648),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(1650),
        [anon_sym_SEMI] = ACTIONS(1653),
        [anon_sym_namespace] = ACTIONS(1655),
        [anon_sym_RBRACE] = ACTIONS(1650),
        [anon_sym_class] = ACTIONS(1655),
        [anon_sym_unsafe] = ACTIONS(1655),
        [anon_sym_abstract] = ACTIONS(1655),
        [anon_sym_sealed] = ACTIONS(1655),
        [anon_sym_static] = ACTIONS(1655),
        [anon_sym_new] = ACTIONS(1655),
        [anon_sym_public] = ACTIONS(1655),
        [anon_sym_protected] = ACTIONS(1655),
        [anon_sym_internal] = ACTIONS(1655),
        [anon_sym_private] = ACTIONS(1655),
        [anon_sym_struct] = ACTIONS(1655),
        [anon_sym_enum] = ACTIONS(1655),
        [anon_sym_sbyte] = ACTIONS(1655),
        [anon_sym_byte] = ACTIONS(1655),
        [anon_sym_short] = ACTIONS(1655),
        [anon_sym_ushort] = ACTIONS(1655),
        [anon_sym_int] = ACTIONS(1655),
        [anon_sym_uint] = ACTIONS(1655),
        [anon_sym_long] = ACTIONS(1655),
        [anon_sym_ulong] = ACTIONS(1655),
        [anon_sym_char] = ACTIONS(1655),
        [anon_sym_delegate] = ACTIONS(1655),
        [anon_sym_LBRACK] = ACTIONS(1650),
        [sym_const_keyword] = ACTIONS(1655),
        [anon_sym_readonly] = ACTIONS(1655),
        [anon_sym_volatile] = ACTIONS(1655),
        [anon_sym_bool] = ACTIONS(1655),
        [anon_sym_decimal] = ACTIONS(1655),
        [anon_sym_double] = ACTIONS(1655),
        [anon_sym_float] = ACTIONS(1655),
        [anon_sym_object] = ACTIONS(1655),
        [anon_sym_string] = ACTIONS(1655),
        [sym_identifier_name] = ACTIONS(1658),
        [sym_comment] = ACTIONS(101),
    },
    [429] = {
        [anon_sym_RBRACE] = ACTIONS(1661),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(1663),
        [anon_sym_SEMI] = ACTIONS(1666),
        [anon_sym_namespace] = ACTIONS(1668),
        [anon_sym_RBRACE] = ACTIONS(1663),
        [anon_sym_class] = ACTIONS(1668),
        [anon_sym_unsafe] = ACTIONS(1668),
        [anon_sym_abstract] = ACTIONS(1668),
        [anon_sym_sealed] = ACTIONS(1668),
        [anon_sym_static] = ACTIONS(1668),
        [anon_sym_new] = ACTIONS(1668),
        [anon_sym_public] = ACTIONS(1668),
        [anon_sym_protected] = ACTIONS(1668),
        [anon_sym_internal] = ACTIONS(1668),
        [anon_sym_private] = ACTIONS(1668),
        [anon_sym_struct] = ACTIONS(1668),
        [anon_sym_enum] = ACTIONS(1668),
        [anon_sym_sbyte] = ACTIONS(1668),
        [anon_sym_byte] = ACTIONS(1668),
        [anon_sym_short] = ACTIONS(1668),
        [anon_sym_ushort] = ACTIONS(1668),
        [anon_sym_int] = ACTIONS(1668),
        [anon_sym_uint] = ACTIONS(1668),
        [anon_sym_long] = ACTIONS(1668),
        [anon_sym_ulong] = ACTIONS(1668),
        [anon_sym_char] = ACTIONS(1668),
        [anon_sym_delegate] = ACTIONS(1668),
        [anon_sym_LBRACK] = ACTIONS(1663),
        [sym_const_keyword] = ACTIONS(1668),
        [anon_sym_readonly] = ACTIONS(1668),
        [anon_sym_volatile] = ACTIONS(1668),
        [anon_sym_bool] = ACTIONS(1668),
        [anon_sym_decimal] = ACTIONS(1668),
        [anon_sym_double] = ACTIONS(1668),
        [anon_sym_float] = ACTIONS(1668),
        [anon_sym_object] = ACTIONS(1668),
        [anon_sym_string] = ACTIONS(1668),
        [sym_identifier_name] = ACTIONS(1671),
        [sym_comment] = ACTIONS(101),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(1674),
        [anon_sym_namespace] = ACTIONS(1677),
        [anon_sym_RBRACE] = ACTIONS(1674),
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
        [anon_sym_LBRACK] = ACTIONS(1674),
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
    [432] = {
        [ts_builtin_sym_end] = ACTIONS(1663),
        [anon_sym_namespace] = ACTIONS(1668),
        [anon_sym_RBRACE] = ACTIONS(1663),
        [anon_sym_class] = ACTIONS(1668),
        [anon_sym_unsafe] = ACTIONS(1668),
        [anon_sym_abstract] = ACTIONS(1668),
        [anon_sym_sealed] = ACTIONS(1668),
        [anon_sym_static] = ACTIONS(1668),
        [anon_sym_new] = ACTIONS(1668),
        [anon_sym_public] = ACTIONS(1668),
        [anon_sym_protected] = ACTIONS(1668),
        [anon_sym_internal] = ACTIONS(1668),
        [anon_sym_private] = ACTIONS(1668),
        [anon_sym_struct] = ACTIONS(1668),
        [anon_sym_enum] = ACTIONS(1668),
        [anon_sym_sbyte] = ACTIONS(1668),
        [anon_sym_byte] = ACTIONS(1668),
        [anon_sym_short] = ACTIONS(1668),
        [anon_sym_ushort] = ACTIONS(1668),
        [anon_sym_int] = ACTIONS(1668),
        [anon_sym_uint] = ACTIONS(1668),
        [anon_sym_long] = ACTIONS(1668),
        [anon_sym_ulong] = ACTIONS(1668),
        [anon_sym_char] = ACTIONS(1668),
        [anon_sym_delegate] = ACTIONS(1668),
        [anon_sym_LBRACK] = ACTIONS(1663),
        [sym_const_keyword] = ACTIONS(1668),
        [anon_sym_readonly] = ACTIONS(1668),
        [anon_sym_volatile] = ACTIONS(1668),
        [anon_sym_bool] = ACTIONS(1668),
        [anon_sym_decimal] = ACTIONS(1668),
        [anon_sym_double] = ACTIONS(1668),
        [anon_sym_float] = ACTIONS(1668),
        [anon_sym_object] = ACTIONS(1668),
        [anon_sym_string] = ACTIONS(1668),
        [sym_identifier_name] = ACTIONS(1671),
        [sym_comment] = ACTIONS(101),
    },
    [433] = {
        [aux_sym_enum_declaration_repeat1] = STATE(435),
        [anon_sym_RBRACE] = ACTIONS(1683),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [434] = {
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
    [435] = {
        [anon_sym_RBRACE] = ACTIONS(1696),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [436] = {
        [ts_builtin_sym_end] = ACTIONS(1698),
        [anon_sym_SEMI] = ACTIONS(1701),
        [anon_sym_namespace] = ACTIONS(1703),
        [anon_sym_RBRACE] = ACTIONS(1698),
        [anon_sym_class] = ACTIONS(1703),
        [anon_sym_unsafe] = ACTIONS(1703),
        [anon_sym_abstract] = ACTIONS(1703),
        [anon_sym_sealed] = ACTIONS(1703),
        [anon_sym_static] = ACTIONS(1703),
        [anon_sym_new] = ACTIONS(1703),
        [anon_sym_public] = ACTIONS(1703),
        [anon_sym_protected] = ACTIONS(1703),
        [anon_sym_internal] = ACTIONS(1703),
        [anon_sym_private] = ACTIONS(1703),
        [anon_sym_struct] = ACTIONS(1703),
        [anon_sym_enum] = ACTIONS(1703),
        [anon_sym_sbyte] = ACTIONS(1703),
        [anon_sym_byte] = ACTIONS(1703),
        [anon_sym_short] = ACTIONS(1703),
        [anon_sym_ushort] = ACTIONS(1703),
        [anon_sym_int] = ACTIONS(1703),
        [anon_sym_uint] = ACTIONS(1703),
        [anon_sym_long] = ACTIONS(1703),
        [anon_sym_ulong] = ACTIONS(1703),
        [anon_sym_char] = ACTIONS(1703),
        [anon_sym_delegate] = ACTIONS(1703),
        [anon_sym_LBRACK] = ACTIONS(1698),
        [sym_const_keyword] = ACTIONS(1703),
        [anon_sym_readonly] = ACTIONS(1703),
        [anon_sym_volatile] = ACTIONS(1703),
        [anon_sym_bool] = ACTIONS(1703),
        [anon_sym_decimal] = ACTIONS(1703),
        [anon_sym_double] = ACTIONS(1703),
        [anon_sym_float] = ACTIONS(1703),
        [anon_sym_object] = ACTIONS(1703),
        [anon_sym_string] = ACTIONS(1703),
        [sym_identifier_name] = ACTIONS(1706),
        [sym_comment] = ACTIONS(101),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(1650),
        [anon_sym_namespace] = ACTIONS(1655),
        [anon_sym_RBRACE] = ACTIONS(1650),
        [anon_sym_class] = ACTIONS(1655),
        [anon_sym_unsafe] = ACTIONS(1655),
        [anon_sym_abstract] = ACTIONS(1655),
        [anon_sym_sealed] = ACTIONS(1655),
        [anon_sym_static] = ACTIONS(1655),
        [anon_sym_new] = ACTIONS(1655),
        [anon_sym_public] = ACTIONS(1655),
        [anon_sym_protected] = ACTIONS(1655),
        [anon_sym_internal] = ACTIONS(1655),
        [anon_sym_private] = ACTIONS(1655),
        [anon_sym_struct] = ACTIONS(1655),
        [anon_sym_enum] = ACTIONS(1655),
        [anon_sym_sbyte] = ACTIONS(1655),
        [anon_sym_byte] = ACTIONS(1655),
        [anon_sym_short] = ACTIONS(1655),
        [anon_sym_ushort] = ACTIONS(1655),
        [anon_sym_int] = ACTIONS(1655),
        [anon_sym_uint] = ACTIONS(1655),
        [anon_sym_long] = ACTIONS(1655),
        [anon_sym_ulong] = ACTIONS(1655),
        [anon_sym_char] = ACTIONS(1655),
        [anon_sym_delegate] = ACTIONS(1655),
        [anon_sym_LBRACK] = ACTIONS(1650),
        [sym_const_keyword] = ACTIONS(1655),
        [anon_sym_readonly] = ACTIONS(1655),
        [anon_sym_volatile] = ACTIONS(1655),
        [anon_sym_bool] = ACTIONS(1655),
        [anon_sym_decimal] = ACTIONS(1655),
        [anon_sym_double] = ACTIONS(1655),
        [anon_sym_float] = ACTIONS(1655),
        [anon_sym_object] = ACTIONS(1655),
        [anon_sym_string] = ACTIONS(1655),
        [sym_identifier_name] = ACTIONS(1658),
        [sym_comment] = ACTIONS(101),
    },
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(1698),
        [anon_sym_namespace] = ACTIONS(1703),
        [anon_sym_RBRACE] = ACTIONS(1698),
        [anon_sym_class] = ACTIONS(1703),
        [anon_sym_unsafe] = ACTIONS(1703),
        [anon_sym_abstract] = ACTIONS(1703),
        [anon_sym_sealed] = ACTIONS(1703),
        [anon_sym_static] = ACTIONS(1703),
        [anon_sym_new] = ACTIONS(1703),
        [anon_sym_public] = ACTIONS(1703),
        [anon_sym_protected] = ACTIONS(1703),
        [anon_sym_internal] = ACTIONS(1703),
        [anon_sym_private] = ACTIONS(1703),
        [anon_sym_struct] = ACTIONS(1703),
        [anon_sym_enum] = ACTIONS(1703),
        [anon_sym_sbyte] = ACTIONS(1703),
        [anon_sym_byte] = ACTIONS(1703),
        [anon_sym_short] = ACTIONS(1703),
        [anon_sym_ushort] = ACTIONS(1703),
        [anon_sym_int] = ACTIONS(1703),
        [anon_sym_uint] = ACTIONS(1703),
        [anon_sym_long] = ACTIONS(1703),
        [anon_sym_ulong] = ACTIONS(1703),
        [anon_sym_char] = ACTIONS(1703),
        [anon_sym_delegate] = ACTIONS(1703),
        [anon_sym_LBRACK] = ACTIONS(1698),
        [sym_const_keyword] = ACTIONS(1703),
        [anon_sym_readonly] = ACTIONS(1703),
        [anon_sym_volatile] = ACTIONS(1703),
        [anon_sym_bool] = ACTIONS(1703),
        [anon_sym_decimal] = ACTIONS(1703),
        [anon_sym_double] = ACTIONS(1703),
        [anon_sym_float] = ACTIONS(1703),
        [anon_sym_object] = ACTIONS(1703),
        [anon_sym_string] = ACTIONS(1703),
        [sym_identifier_name] = ACTIONS(1706),
        [sym_comment] = ACTIONS(101),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(1709),
        [anon_sym_SEMI] = ACTIONS(1715),
        [anon_sym_namespace] = ACTIONS(1717),
        [anon_sym_RBRACE] = ACTIONS(1709),
        [anon_sym_class] = ACTIONS(1717),
        [anon_sym_unsafe] = ACTIONS(1717),
        [anon_sym_abstract] = ACTIONS(1717),
        [anon_sym_sealed] = ACTIONS(1717),
        [anon_sym_static] = ACTIONS(1717),
        [anon_sym_new] = ACTIONS(1717),
        [anon_sym_public] = ACTIONS(1717),
        [anon_sym_protected] = ACTIONS(1717),
        [anon_sym_internal] = ACTIONS(1717),
        [anon_sym_private] = ACTIONS(1717),
        [anon_sym_struct] = ACTIONS(1717),
        [anon_sym_enum] = ACTIONS(1717),
        [anon_sym_sbyte] = ACTIONS(1717),
        [anon_sym_byte] = ACTIONS(1717),
        [anon_sym_short] = ACTIONS(1717),
        [anon_sym_ushort] = ACTIONS(1717),
        [anon_sym_int] = ACTIONS(1717),
        [anon_sym_uint] = ACTIONS(1717),
        [anon_sym_long] = ACTIONS(1717),
        [anon_sym_ulong] = ACTIONS(1717),
        [anon_sym_char] = ACTIONS(1717),
        [anon_sym_delegate] = ACTIONS(1717),
        [anon_sym_LBRACK] = ACTIONS(1709),
        [sym_const_keyword] = ACTIONS(1717),
        [anon_sym_readonly] = ACTIONS(1717),
        [anon_sym_volatile] = ACTIONS(1717),
        [anon_sym_bool] = ACTIONS(1717),
        [anon_sym_decimal] = ACTIONS(1717),
        [anon_sym_double] = ACTIONS(1717),
        [anon_sym_float] = ACTIONS(1717),
        [anon_sym_object] = ACTIONS(1717),
        [anon_sym_string] = ACTIONS(1717),
        [sym_identifier_name] = ACTIONS(1723),
        [sym_comment] = ACTIONS(101),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(1388),
        [anon_sym_namespace] = ACTIONS(1396),
        [anon_sym_RBRACE] = ACTIONS(1388),
        [anon_sym_class] = ACTIONS(1396),
        [anon_sym_unsafe] = ACTIONS(1396),
        [anon_sym_abstract] = ACTIONS(1396),
        [anon_sym_sealed] = ACTIONS(1396),
        [anon_sym_static] = ACTIONS(1396),
        [anon_sym_new] = ACTIONS(1396),
        [anon_sym_public] = ACTIONS(1396),
        [anon_sym_protected] = ACTIONS(1396),
        [anon_sym_internal] = ACTIONS(1396),
        [anon_sym_private] = ACTIONS(1396),
        [anon_sym_struct] = ACTIONS(1396),
        [anon_sym_enum] = ACTIONS(1396),
        [anon_sym_sbyte] = ACTIONS(1396),
        [anon_sym_byte] = ACTIONS(1396),
        [anon_sym_short] = ACTIONS(1396),
        [anon_sym_ushort] = ACTIONS(1396),
        [anon_sym_int] = ACTIONS(1396),
        [anon_sym_uint] = ACTIONS(1396),
        [anon_sym_long] = ACTIONS(1396),
        [anon_sym_ulong] = ACTIONS(1396),
        [anon_sym_char] = ACTIONS(1396),
        [anon_sym_delegate] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(1388),
        [sym_const_keyword] = ACTIONS(1396),
        [anon_sym_readonly] = ACTIONS(1396),
        [anon_sym_volatile] = ACTIONS(1396),
        [anon_sym_bool] = ACTIONS(1396),
        [anon_sym_decimal] = ACTIONS(1396),
        [anon_sym_double] = ACTIONS(1396),
        [anon_sym_float] = ACTIONS(1396),
        [anon_sym_object] = ACTIONS(1396),
        [anon_sym_string] = ACTIONS(1396),
        [sym_identifier_name] = ACTIONS(1402),
        [sym_comment] = ACTIONS(101),
    },
    [441] = {
        [sym_identifier_name] = ACTIONS(1729),
        [sym_comment] = ACTIONS(101),
    },
    [442] = {
        [sym_type_parameter_list] = STATE(444),
        [anon_sym_LBRACE] = ACTIONS(1731),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [443] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(450),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1733),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [444] = {
        [anon_sym_LBRACE] = ACTIONS(1735),
        [sym_comment] = ACTIONS(101),
    },
    [445] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(447),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1737),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [446] = {
        [ts_builtin_sym_end] = ACTIONS(1739),
        [anon_sym_namespace] = ACTIONS(1742),
        [anon_sym_RBRACE] = ACTIONS(1739),
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
        [anon_sym_LBRACK] = ACTIONS(1739),
        [sym_const_keyword] = ACTIONS(1742),
        [anon_sym_readonly] = ACTIONS(1742),
        [anon_sym_volatile] = ACTIONS(1742),
        [anon_sym_bool] = ACTIONS(1742),
        [anon_sym_decimal] = ACTIONS(1742),
        [anon_sym_double] = ACTIONS(1742),
        [anon_sym_float] = ACTIONS(1742),
        [anon_sym_object] = ACTIONS(1742),
        [anon_sym_string] = ACTIONS(1742),
        [sym_identifier_name] = ACTIONS(1745),
        [sym_comment] = ACTIONS(101),
    },
    [447] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1748),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [448] = {
        [ts_builtin_sym_end] = ACTIONS(1750),
        [anon_sym_namespace] = ACTIONS(1753),
        [anon_sym_RBRACE] = ACTIONS(1750),
        [anon_sym_class] = ACTIONS(1753),
        [anon_sym_unsafe] = ACTIONS(1753),
        [anon_sym_abstract] = ACTIONS(1753),
        [anon_sym_sealed] = ACTIONS(1753),
        [anon_sym_static] = ACTIONS(1753),
        [anon_sym_new] = ACTIONS(1753),
        [anon_sym_public] = ACTIONS(1753),
        [anon_sym_protected] = ACTIONS(1753),
        [anon_sym_internal] = ACTIONS(1753),
        [anon_sym_private] = ACTIONS(1753),
        [anon_sym_struct] = ACTIONS(1753),
        [anon_sym_enum] = ACTIONS(1753),
        [anon_sym_sbyte] = ACTIONS(1753),
        [anon_sym_byte] = ACTIONS(1753),
        [anon_sym_short] = ACTIONS(1753),
        [anon_sym_ushort] = ACTIONS(1753),
        [anon_sym_int] = ACTIONS(1753),
        [anon_sym_uint] = ACTIONS(1753),
        [anon_sym_long] = ACTIONS(1753),
        [anon_sym_ulong] = ACTIONS(1753),
        [anon_sym_char] = ACTIONS(1753),
        [anon_sym_delegate] = ACTIONS(1753),
        [anon_sym_LBRACK] = ACTIONS(1750),
        [sym_const_keyword] = ACTIONS(1753),
        [anon_sym_readonly] = ACTIONS(1753),
        [anon_sym_volatile] = ACTIONS(1753),
        [anon_sym_bool] = ACTIONS(1753),
        [anon_sym_decimal] = ACTIONS(1753),
        [anon_sym_double] = ACTIONS(1753),
        [anon_sym_float] = ACTIONS(1753),
        [anon_sym_object] = ACTIONS(1753),
        [anon_sym_string] = ACTIONS(1753),
        [sym_identifier_name] = ACTIONS(1756),
        [sym_comment] = ACTIONS(101),
    },
    [449] = {
        [ts_builtin_sym_end] = ACTIONS(1759),
        [anon_sym_namespace] = ACTIONS(1762),
        [anon_sym_RBRACE] = ACTIONS(1759),
        [anon_sym_class] = ACTIONS(1762),
        [anon_sym_unsafe] = ACTIONS(1762),
        [anon_sym_abstract] = ACTIONS(1762),
        [anon_sym_sealed] = ACTIONS(1762),
        [anon_sym_static] = ACTIONS(1762),
        [anon_sym_new] = ACTIONS(1762),
        [anon_sym_public] = ACTIONS(1762),
        [anon_sym_protected] = ACTIONS(1762),
        [anon_sym_internal] = ACTIONS(1762),
        [anon_sym_private] = ACTIONS(1762),
        [anon_sym_struct] = ACTIONS(1762),
        [anon_sym_enum] = ACTIONS(1762),
        [anon_sym_sbyte] = ACTIONS(1762),
        [anon_sym_byte] = ACTIONS(1762),
        [anon_sym_short] = ACTIONS(1762),
        [anon_sym_ushort] = ACTIONS(1762),
        [anon_sym_int] = ACTIONS(1762),
        [anon_sym_uint] = ACTIONS(1762),
        [anon_sym_long] = ACTIONS(1762),
        [anon_sym_ulong] = ACTIONS(1762),
        [anon_sym_char] = ACTIONS(1762),
        [anon_sym_delegate] = ACTIONS(1762),
        [anon_sym_LBRACK] = ACTIONS(1759),
        [sym_const_keyword] = ACTIONS(1762),
        [anon_sym_readonly] = ACTIONS(1762),
        [anon_sym_volatile] = ACTIONS(1762),
        [anon_sym_bool] = ACTIONS(1762),
        [anon_sym_decimal] = ACTIONS(1762),
        [anon_sym_double] = ACTIONS(1762),
        [anon_sym_float] = ACTIONS(1762),
        [anon_sym_object] = ACTIONS(1762),
        [anon_sym_string] = ACTIONS(1762),
        [sym_identifier_name] = ACTIONS(1765),
        [sym_comment] = ACTIONS(101),
    },
    [450] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1737),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [sym_identifier_name] = ACTIONS(1768),
        [sym_comment] = ACTIONS(101),
    },
    [452] = {
        [sym_type_parameter_list] = STATE(454),
        [anon_sym_LBRACE] = ACTIONS(1770),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [453] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(460),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1772),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [454] = {
        [anon_sym_LBRACE] = ACTIONS(1774),
        [sym_comment] = ACTIONS(101),
    },
    [455] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(457),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1776),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [456] = {
        [ts_builtin_sym_end] = ACTIONS(1778),
        [anon_sym_namespace] = ACTIONS(1781),
        [anon_sym_RBRACE] = ACTIONS(1778),
        [anon_sym_class] = ACTIONS(1781),
        [anon_sym_unsafe] = ACTIONS(1781),
        [anon_sym_abstract] = ACTIONS(1781),
        [anon_sym_sealed] = ACTIONS(1781),
        [anon_sym_static] = ACTIONS(1781),
        [anon_sym_new] = ACTIONS(1781),
        [anon_sym_public] = ACTIONS(1781),
        [anon_sym_protected] = ACTIONS(1781),
        [anon_sym_internal] = ACTIONS(1781),
        [anon_sym_private] = ACTIONS(1781),
        [anon_sym_struct] = ACTIONS(1781),
        [anon_sym_enum] = ACTIONS(1781),
        [anon_sym_sbyte] = ACTIONS(1781),
        [anon_sym_byte] = ACTIONS(1781),
        [anon_sym_short] = ACTIONS(1781),
        [anon_sym_ushort] = ACTIONS(1781),
        [anon_sym_int] = ACTIONS(1781),
        [anon_sym_uint] = ACTIONS(1781),
        [anon_sym_long] = ACTIONS(1781),
        [anon_sym_ulong] = ACTIONS(1781),
        [anon_sym_char] = ACTIONS(1781),
        [anon_sym_delegate] = ACTIONS(1781),
        [anon_sym_LBRACK] = ACTIONS(1778),
        [sym_const_keyword] = ACTIONS(1781),
        [anon_sym_readonly] = ACTIONS(1781),
        [anon_sym_volatile] = ACTIONS(1781),
        [anon_sym_bool] = ACTIONS(1781),
        [anon_sym_decimal] = ACTIONS(1781),
        [anon_sym_double] = ACTIONS(1781),
        [anon_sym_float] = ACTIONS(1781),
        [anon_sym_object] = ACTIONS(1781),
        [anon_sym_string] = ACTIONS(1781),
        [sym_identifier_name] = ACTIONS(1784),
        [sym_comment] = ACTIONS(101),
    },
    [457] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1787),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [ts_builtin_sym_end] = ACTIONS(1789),
        [anon_sym_namespace] = ACTIONS(1792),
        [anon_sym_RBRACE] = ACTIONS(1789),
        [anon_sym_class] = ACTIONS(1792),
        [anon_sym_unsafe] = ACTIONS(1792),
        [anon_sym_abstract] = ACTIONS(1792),
        [anon_sym_sealed] = ACTIONS(1792),
        [anon_sym_static] = ACTIONS(1792),
        [anon_sym_new] = ACTIONS(1792),
        [anon_sym_public] = ACTIONS(1792),
        [anon_sym_protected] = ACTIONS(1792),
        [anon_sym_internal] = ACTIONS(1792),
        [anon_sym_private] = ACTIONS(1792),
        [anon_sym_struct] = ACTIONS(1792),
        [anon_sym_enum] = ACTIONS(1792),
        [anon_sym_sbyte] = ACTIONS(1792),
        [anon_sym_byte] = ACTIONS(1792),
        [anon_sym_short] = ACTIONS(1792),
        [anon_sym_ushort] = ACTIONS(1792),
        [anon_sym_int] = ACTIONS(1792),
        [anon_sym_uint] = ACTIONS(1792),
        [anon_sym_long] = ACTIONS(1792),
        [anon_sym_ulong] = ACTIONS(1792),
        [anon_sym_char] = ACTIONS(1792),
        [anon_sym_delegate] = ACTIONS(1792),
        [anon_sym_LBRACK] = ACTIONS(1789),
        [sym_const_keyword] = ACTIONS(1792),
        [anon_sym_readonly] = ACTIONS(1792),
        [anon_sym_volatile] = ACTIONS(1792),
        [anon_sym_bool] = ACTIONS(1792),
        [anon_sym_decimal] = ACTIONS(1792),
        [anon_sym_double] = ACTIONS(1792),
        [anon_sym_float] = ACTIONS(1792),
        [anon_sym_object] = ACTIONS(1792),
        [anon_sym_string] = ACTIONS(1792),
        [sym_identifier_name] = ACTIONS(1795),
        [sym_comment] = ACTIONS(101),
    },
    [459] = {
        [ts_builtin_sym_end] = ACTIONS(1798),
        [anon_sym_namespace] = ACTIONS(1801),
        [anon_sym_RBRACE] = ACTIONS(1798),
        [anon_sym_class] = ACTIONS(1801),
        [anon_sym_unsafe] = ACTIONS(1801),
        [anon_sym_abstract] = ACTIONS(1801),
        [anon_sym_sealed] = ACTIONS(1801),
        [anon_sym_static] = ACTIONS(1801),
        [anon_sym_new] = ACTIONS(1801),
        [anon_sym_public] = ACTIONS(1801),
        [anon_sym_protected] = ACTIONS(1801),
        [anon_sym_internal] = ACTIONS(1801),
        [anon_sym_private] = ACTIONS(1801),
        [anon_sym_struct] = ACTIONS(1801),
        [anon_sym_enum] = ACTIONS(1801),
        [anon_sym_sbyte] = ACTIONS(1801),
        [anon_sym_byte] = ACTIONS(1801),
        [anon_sym_short] = ACTIONS(1801),
        [anon_sym_ushort] = ACTIONS(1801),
        [anon_sym_int] = ACTIONS(1801),
        [anon_sym_uint] = ACTIONS(1801),
        [anon_sym_long] = ACTIONS(1801),
        [anon_sym_ulong] = ACTIONS(1801),
        [anon_sym_char] = ACTIONS(1801),
        [anon_sym_delegate] = ACTIONS(1801),
        [anon_sym_LBRACK] = ACTIONS(1798),
        [sym_const_keyword] = ACTIONS(1801),
        [anon_sym_readonly] = ACTIONS(1801),
        [anon_sym_volatile] = ACTIONS(1801),
        [anon_sym_bool] = ACTIONS(1801),
        [anon_sym_decimal] = ACTIONS(1801),
        [anon_sym_double] = ACTIONS(1801),
        [anon_sym_float] = ACTIONS(1801),
        [anon_sym_object] = ACTIONS(1801),
        [anon_sym_string] = ACTIONS(1801),
        [sym_identifier_name] = ACTIONS(1804),
        [sym_comment] = ACTIONS(101),
    },
    [460] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1776),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [ts_builtin_sym_end] = ACTIONS(1807),
        [anon_sym_extern] = ACTIONS(911),
        [anon_sym_using] = ACTIONS(1807),
        [anon_sym_namespace] = ACTIONS(1807),
        [anon_sym_class] = ACTIONS(1807),
        [anon_sym_unsafe] = ACTIONS(1807),
        [anon_sym_abstract] = ACTIONS(1807),
        [anon_sym_sealed] = ACTIONS(1807),
        [anon_sym_static] = ACTIONS(1807),
        [anon_sym_new] = ACTIONS(1807),
        [anon_sym_public] = ACTIONS(1807),
        [anon_sym_protected] = ACTIONS(1807),
        [anon_sym_internal] = ACTIONS(1807),
        [anon_sym_private] = ACTIONS(1807),
        [anon_sym_struct] = ACTIONS(1807),
        [anon_sym_enum] = ACTIONS(1807),
        [anon_sym_delegate] = ACTIONS(1807),
        [anon_sym_LBRACK] = ACTIONS(1807),
        [sym_comment] = ACTIONS(101),
    },
    [462] = {
        [sym__type_declaration] = STATE(466),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(467),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(468),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(300),
        [aux_sym_class_declaration_repeat1] = STATE(469),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(1021),
        [anon_sym_RBRACE] = ACTIONS(1811),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1025),
        [sym_comment] = ACTIONS(101),
    },
    [463] = {
        [sym__integral_type] = STATE(352),
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
    [464] = {
        [ts_builtin_sym_end] = ACTIONS(1813),
        [anon_sym_namespace] = ACTIONS(1821),
        [anon_sym_RBRACE] = ACTIONS(1813),
        [anon_sym_class] = ACTIONS(1821),
        [anon_sym_unsafe] = ACTIONS(1821),
        [anon_sym_abstract] = ACTIONS(1821),
        [anon_sym_sealed] = ACTIONS(1821),
        [anon_sym_static] = ACTIONS(1821),
        [anon_sym_new] = ACTIONS(1821),
        [anon_sym_public] = ACTIONS(1821),
        [anon_sym_protected] = ACTIONS(1821),
        [anon_sym_internal] = ACTIONS(1821),
        [anon_sym_private] = ACTIONS(1821),
        [anon_sym_struct] = ACTIONS(1821),
        [anon_sym_enum] = ACTIONS(1821),
        [anon_sym_sbyte] = ACTIONS(1829),
        [anon_sym_byte] = ACTIONS(1829),
        [anon_sym_short] = ACTIONS(1829),
        [anon_sym_ushort] = ACTIONS(1829),
        [anon_sym_int] = ACTIONS(1829),
        [anon_sym_uint] = ACTIONS(1829),
        [anon_sym_long] = ACTIONS(1829),
        [anon_sym_ulong] = ACTIONS(1829),
        [anon_sym_char] = ACTIONS(1829),
        [anon_sym_delegate] = ACTIONS(1821),
        [anon_sym_LBRACK] = ACTIONS(1813),
        [sym_const_keyword] = ACTIONS(1829),
        [anon_sym_readonly] = ACTIONS(1829),
        [anon_sym_volatile] = ACTIONS(1829),
        [anon_sym_bool] = ACTIONS(1829),
        [anon_sym_decimal] = ACTIONS(1829),
        [anon_sym_double] = ACTIONS(1829),
        [anon_sym_float] = ACTIONS(1829),
        [anon_sym_object] = ACTIONS(1829),
        [anon_sym_string] = ACTIONS(1829),
        [sym_identifier_name] = ACTIONS(1836),
        [sym_comment] = ACTIONS(101),
    },
    [465] = {
        [sym_equals_value_clause] = STATE(180),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_EQ] = ACTIONS(413),
        [anon_sym_LT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [466] = {
        [anon_sym_namespace] = ACTIONS(1843),
        [anon_sym_RBRACE] = ACTIONS(1845),
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
        [anon_sym_sbyte] = ACTIONS(641),
        [anon_sym_byte] = ACTIONS(641),
        [anon_sym_short] = ACTIONS(641),
        [anon_sym_ushort] = ACTIONS(641),
        [anon_sym_int] = ACTIONS(641),
        [anon_sym_uint] = ACTIONS(641),
        [anon_sym_long] = ACTIONS(641),
        [anon_sym_ulong] = ACTIONS(641),
        [anon_sym_char] = ACTIONS(641),
        [anon_sym_delegate] = ACTIONS(1848),
        [anon_sym_LBRACK] = ACTIONS(1845),
        [sym_const_keyword] = ACTIONS(641),
        [anon_sym_readonly] = ACTIONS(641),
        [anon_sym_volatile] = ACTIONS(641),
        [anon_sym_bool] = ACTIONS(641),
        [anon_sym_decimal] = ACTIONS(641),
        [anon_sym_double] = ACTIONS(641),
        [anon_sym_float] = ACTIONS(641),
        [anon_sym_object] = ACTIONS(641),
        [anon_sym_string] = ACTIONS(641),
        [sym_identifier_name] = ACTIONS(643),
        [sym_comment] = ACTIONS(101),
    },
    [467] = {
        [aux_sym_enum_declaration_repeat1] = STATE(471),
        [anon_sym_RBRACE] = ACTIONS(1851),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
    [468] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(221),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(217),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(645),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(647),
        [anon_sym_enum] = ACTIONS(649),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(651),
        [sym_const_keyword] = ACTIONS(653),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(1299),
        [sym_comment] = ACTIONS(101),
    },
    [469] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1466),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(1853),
        [anon_sym_SEMI] = ACTIONS(1857),
        [anon_sym_namespace] = ACTIONS(1859),
        [anon_sym_RBRACE] = ACTIONS(1853),
        [anon_sym_class] = ACTIONS(1859),
        [anon_sym_unsafe] = ACTIONS(1859),
        [anon_sym_abstract] = ACTIONS(1859),
        [anon_sym_sealed] = ACTIONS(1859),
        [anon_sym_static] = ACTIONS(1859),
        [anon_sym_new] = ACTIONS(1859),
        [anon_sym_public] = ACTIONS(1859),
        [anon_sym_protected] = ACTIONS(1859),
        [anon_sym_internal] = ACTIONS(1859),
        [anon_sym_private] = ACTIONS(1859),
        [anon_sym_struct] = ACTIONS(1859),
        [anon_sym_enum] = ACTIONS(1859),
        [anon_sym_sbyte] = ACTIONS(1859),
        [anon_sym_byte] = ACTIONS(1859),
        [anon_sym_short] = ACTIONS(1859),
        [anon_sym_ushort] = ACTIONS(1859),
        [anon_sym_int] = ACTIONS(1859),
        [anon_sym_uint] = ACTIONS(1859),
        [anon_sym_long] = ACTIONS(1859),
        [anon_sym_ulong] = ACTIONS(1859),
        [anon_sym_char] = ACTIONS(1859),
        [anon_sym_delegate] = ACTIONS(1859),
        [anon_sym_LBRACK] = ACTIONS(1853),
        [sym_const_keyword] = ACTIONS(1859),
        [anon_sym_readonly] = ACTIONS(1859),
        [anon_sym_volatile] = ACTIONS(1859),
        [anon_sym_bool] = ACTIONS(1859),
        [anon_sym_decimal] = ACTIONS(1859),
        [anon_sym_double] = ACTIONS(1859),
        [anon_sym_float] = ACTIONS(1859),
        [anon_sym_object] = ACTIONS(1859),
        [anon_sym_string] = ACTIONS(1859),
        [sym_identifier_name] = ACTIONS(1863),
        [sym_comment] = ACTIONS(101),
    },
    [471] = {
        [anon_sym_RBRACE] = ACTIONS(1867),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(101),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(1869),
        [anon_sym_SEMI] = ACTIONS(1873),
        [anon_sym_namespace] = ACTIONS(1875),
        [anon_sym_RBRACE] = ACTIONS(1869),
        [anon_sym_class] = ACTIONS(1875),
        [anon_sym_unsafe] = ACTIONS(1875),
        [anon_sym_abstract] = ACTIONS(1875),
        [anon_sym_sealed] = ACTIONS(1875),
        [anon_sym_static] = ACTIONS(1875),
        [anon_sym_new] = ACTIONS(1875),
        [anon_sym_public] = ACTIONS(1875),
        [anon_sym_protected] = ACTIONS(1875),
        [anon_sym_internal] = ACTIONS(1875),
        [anon_sym_private] = ACTIONS(1875),
        [anon_sym_struct] = ACTIONS(1875),
        [anon_sym_enum] = ACTIONS(1875),
        [anon_sym_sbyte] = ACTIONS(1875),
        [anon_sym_byte] = ACTIONS(1875),
        [anon_sym_short] = ACTIONS(1875),
        [anon_sym_ushort] = ACTIONS(1875),
        [anon_sym_int] = ACTIONS(1875),
        [anon_sym_uint] = ACTIONS(1875),
        [anon_sym_long] = ACTIONS(1875),
        [anon_sym_ulong] = ACTIONS(1875),
        [anon_sym_char] = ACTIONS(1875),
        [anon_sym_delegate] = ACTIONS(1875),
        [anon_sym_LBRACK] = ACTIONS(1869),
        [sym_const_keyword] = ACTIONS(1875),
        [anon_sym_readonly] = ACTIONS(1875),
        [anon_sym_volatile] = ACTIONS(1875),
        [anon_sym_bool] = ACTIONS(1875),
        [anon_sym_decimal] = ACTIONS(1875),
        [anon_sym_double] = ACTIONS(1875),
        [anon_sym_float] = ACTIONS(1875),
        [anon_sym_object] = ACTIONS(1875),
        [anon_sym_string] = ACTIONS(1875),
        [sym_identifier_name] = ACTIONS(1879),
        [sym_comment] = ACTIONS(101),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(1598),
        [anon_sym_namespace] = ACTIONS(1604),
        [anon_sym_RBRACE] = ACTIONS(1598),
        [anon_sym_class] = ACTIONS(1604),
        [anon_sym_unsafe] = ACTIONS(1604),
        [anon_sym_abstract] = ACTIONS(1604),
        [anon_sym_sealed] = ACTIONS(1604),
        [anon_sym_static] = ACTIONS(1604),
        [anon_sym_new] = ACTIONS(1604),
        [anon_sym_public] = ACTIONS(1604),
        [anon_sym_protected] = ACTIONS(1604),
        [anon_sym_internal] = ACTIONS(1604),
        [anon_sym_private] = ACTIONS(1604),
        [anon_sym_struct] = ACTIONS(1604),
        [anon_sym_enum] = ACTIONS(1604),
        [anon_sym_sbyte] = ACTIONS(1604),
        [anon_sym_byte] = ACTIONS(1604),
        [anon_sym_short] = ACTIONS(1604),
        [anon_sym_ushort] = ACTIONS(1604),
        [anon_sym_int] = ACTIONS(1604),
        [anon_sym_uint] = ACTIONS(1604),
        [anon_sym_long] = ACTIONS(1604),
        [anon_sym_ulong] = ACTIONS(1604),
        [anon_sym_char] = ACTIONS(1604),
        [anon_sym_delegate] = ACTIONS(1604),
        [anon_sym_LBRACK] = ACTIONS(1598),
        [sym_const_keyword] = ACTIONS(1604),
        [anon_sym_readonly] = ACTIONS(1604),
        [anon_sym_volatile] = ACTIONS(1604),
        [anon_sym_bool] = ACTIONS(1604),
        [anon_sym_decimal] = ACTIONS(1604),
        [anon_sym_double] = ACTIONS(1604),
        [anon_sym_float] = ACTIONS(1604),
        [anon_sym_object] = ACTIONS(1604),
        [anon_sym_string] = ACTIONS(1604),
        [sym_identifier_name] = ACTIONS(1608),
        [sym_comment] = ACTIONS(101),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(1869),
        [anon_sym_namespace] = ACTIONS(1875),
        [anon_sym_RBRACE] = ACTIONS(1869),
        [anon_sym_class] = ACTIONS(1875),
        [anon_sym_unsafe] = ACTIONS(1875),
        [anon_sym_abstract] = ACTIONS(1875),
        [anon_sym_sealed] = ACTIONS(1875),
        [anon_sym_static] = ACTIONS(1875),
        [anon_sym_new] = ACTIONS(1875),
        [anon_sym_public] = ACTIONS(1875),
        [anon_sym_protected] = ACTIONS(1875),
        [anon_sym_internal] = ACTIONS(1875),
        [anon_sym_private] = ACTIONS(1875),
        [anon_sym_struct] = ACTIONS(1875),
        [anon_sym_enum] = ACTIONS(1875),
        [anon_sym_sbyte] = ACTIONS(1875),
        [anon_sym_byte] = ACTIONS(1875),
        [anon_sym_short] = ACTIONS(1875),
        [anon_sym_ushort] = ACTIONS(1875),
        [anon_sym_int] = ACTIONS(1875),
        [anon_sym_uint] = ACTIONS(1875),
        [anon_sym_long] = ACTIONS(1875),
        [anon_sym_ulong] = ACTIONS(1875),
        [anon_sym_char] = ACTIONS(1875),
        [anon_sym_delegate] = ACTIONS(1875),
        [anon_sym_LBRACK] = ACTIONS(1869),
        [sym_const_keyword] = ACTIONS(1875),
        [anon_sym_readonly] = ACTIONS(1875),
        [anon_sym_volatile] = ACTIONS(1875),
        [anon_sym_bool] = ACTIONS(1875),
        [anon_sym_decimal] = ACTIONS(1875),
        [anon_sym_double] = ACTIONS(1875),
        [anon_sym_float] = ACTIONS(1875),
        [anon_sym_object] = ACTIONS(1875),
        [anon_sym_string] = ACTIONS(1875),
        [sym_identifier_name] = ACTIONS(1879),
        [sym_comment] = ACTIONS(101),
    },
    [475] = {
        [anon_sym_SEMI] = ACTIONS(1883),
        [anon_sym_RBRACE] = ACTIONS(1883),
        [anon_sym_COMMA] = ACTIONS(1883),
        [sym_comment] = ACTIONS(101),
    },
    [476] = {
        [anon_sym_SEMI] = ACTIONS(1887),
        [anon_sym_RBRACE] = ACTIONS(1887),
        [anon_sym_COMMA] = ACTIONS(1887),
        [sym__real_type_suffix] = ACTIONS(1890),
        [sym__exponent_part] = ACTIONS(1892),
        [sym_comment] = ACTIONS(101),
    },
    [477] = {
        [anon_sym_SEMI] = ACTIONS(1894),
        [anon_sym_RBRACE] = ACTIONS(1894),
        [anon_sym_COMMA] = ACTIONS(1894),
        [sym_comment] = ACTIONS(101),
    },
    [478] = {
        [anon_sym_SEMI] = ACTIONS(1894),
        [anon_sym_RBRACE] = ACTIONS(1894),
        [anon_sym_COMMA] = ACTIONS(1894),
        [sym__real_type_suffix] = ACTIONS(1897),
        [sym_comment] = ACTIONS(101),
    },
    [479] = {
        [anon_sym_SEMI] = ACTIONS(1899),
        [anon_sym_RBRACE] = ACTIONS(1899),
        [anon_sym_COMMA] = ACTIONS(1899),
        [sym_comment] = ACTIONS(101),
    },
    [480] = {
        [anon_sym_SEMI] = ACTIONS(1157),
        [anon_sym_RBRACE] = ACTIONS(1157),
        [anon_sym_COMMA] = ACTIONS(1157),
        [sym_comment] = ACTIONS(101),
    },
    [481] = {
        [anon_sym_SEMI] = ACTIONS(1902),
        [sym_comment] = ACTIONS(101),
    },
    [482] = {
        [anon_sym_RBRACE] = ACTIONS(1904),
        [anon_sym_class] = ACTIONS(1908),
        [anon_sym_unsafe] = ACTIONS(1908),
        [anon_sym_abstract] = ACTIONS(1908),
        [anon_sym_sealed] = ACTIONS(1908),
        [anon_sym_static] = ACTIONS(1908),
        [anon_sym_new] = ACTIONS(1908),
        [anon_sym_public] = ACTIONS(1908),
        [anon_sym_protected] = ACTIONS(1908),
        [anon_sym_internal] = ACTIONS(1908),
        [anon_sym_private] = ACTIONS(1908),
        [anon_sym_struct] = ACTIONS(1908),
        [anon_sym_enum] = ACTIONS(1908),
        [anon_sym_sbyte] = ACTIONS(1908),
        [anon_sym_byte] = ACTIONS(1908),
        [anon_sym_short] = ACTIONS(1908),
        [anon_sym_ushort] = ACTIONS(1908),
        [anon_sym_int] = ACTIONS(1908),
        [anon_sym_uint] = ACTIONS(1908),
        [anon_sym_long] = ACTIONS(1908),
        [anon_sym_ulong] = ACTIONS(1908),
        [anon_sym_char] = ACTIONS(1908),
        [anon_sym_delegate] = ACTIONS(1908),
        [anon_sym_LBRACK] = ACTIONS(1904),
        [sym_const_keyword] = ACTIONS(1908),
        [anon_sym_readonly] = ACTIONS(1908),
        [anon_sym_volatile] = ACTIONS(1908),
        [anon_sym_bool] = ACTIONS(1908),
        [anon_sym_decimal] = ACTIONS(1908),
        [anon_sym_double] = ACTIONS(1908),
        [anon_sym_float] = ACTIONS(1908),
        [anon_sym_object] = ACTIONS(1908),
        [anon_sym_string] = ACTIONS(1908),
        [sym_identifier_name] = ACTIONS(1912),
        [sym_comment] = ACTIONS(101),
    },
    [483] = {
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(101),
    },
    [484] = {
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(492),
        [sym_type_parameter_list] = STATE(101),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(1916),
        [anon_sym_LPAREN] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_EQ] = ACTIONS(413),
        [anon_sym_LT] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(101),
    },
    [485] = {
        [anon_sym_RBRACE] = ACTIONS(1921),
        [anon_sym_COMMA] = ACTIONS(1921),
        [sym_comment] = ACTIONS(101),
    },
    [486] = {
        [anon_sym_COMMA] = ACTIONS(1924),
        [anon_sym_RPAREN] = ACTIONS(1924),
        [sym_params_keyword] = ACTIONS(1924),
        [anon_sym_LBRACK] = ACTIONS(1924),
        [sym_comment] = ACTIONS(101),
    },
    [487] = {
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
        [sym_identifier_name] = ACTIONS(1299),
        [sym_comment] = ACTIONS(101),
    },
    [488] = {
        [anon_sym_COMMA] = ACTIONS(1927),
        [anon_sym_RBRACK] = ACTIONS(1927),
        [sym_comment] = ACTIONS(101),
    },
    [489] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_GT] = ACTIONS(357),
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(101),
    },
    [490] = {
        [anon_sym_SEMI] = ACTIONS(1930),
        [anon_sym_COMMA] = ACTIONS(1930),
        [sym_comment] = ACTIONS(101),
    },
    [491] = {
        [anon_sym_COMMA] = ACTIONS(1933),
        [anon_sym_GT] = ACTIONS(1933),
        [sym_comment] = ACTIONS(101),
    },
    [492] = {
        [anon_sym_SEMI] = ACTIONS(691),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(1936),
        [sym_comment] = ACTIONS(101),
    },
    [493] = {
        [anon_sym_LBRACE] = ACTIONS(1939),
        [anon_sym_COLON] = ACTIONS(1185),
        [sym_comment] = ACTIONS(101),
    },
    [494] = {
        [sym_enum_member_declaration] = STATE(467),
        [sym__attributes] = STATE(132),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(101),
    },
    [495] = {
        [sym_type_parameter_list] = STATE(497),
        [anon_sym_LBRACE] = ACTIONS(1941),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [496] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(503),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1943),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [497] = {
        [anon_sym_LBRACE] = ACTIONS(1945),
        [sym_comment] = ACTIONS(101),
    },
    [498] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(500),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1947),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [499] = {
        [ts_builtin_sym_end] = ACTIONS(1949),
        [anon_sym_namespace] = ACTIONS(1953),
        [anon_sym_RBRACE] = ACTIONS(1949),
        [anon_sym_class] = ACTIONS(1953),
        [anon_sym_unsafe] = ACTIONS(1953),
        [anon_sym_abstract] = ACTIONS(1953),
        [anon_sym_sealed] = ACTIONS(1953),
        [anon_sym_static] = ACTIONS(1953),
        [anon_sym_new] = ACTIONS(1953),
        [anon_sym_public] = ACTIONS(1953),
        [anon_sym_protected] = ACTIONS(1953),
        [anon_sym_internal] = ACTIONS(1953),
        [anon_sym_private] = ACTIONS(1953),
        [anon_sym_struct] = ACTIONS(1953),
        [anon_sym_enum] = ACTIONS(1953),
        [anon_sym_sbyte] = ACTIONS(1953),
        [anon_sym_byte] = ACTIONS(1953),
        [anon_sym_short] = ACTIONS(1953),
        [anon_sym_ushort] = ACTIONS(1953),
        [anon_sym_int] = ACTIONS(1953),
        [anon_sym_uint] = ACTIONS(1953),
        [anon_sym_long] = ACTIONS(1953),
        [anon_sym_ulong] = ACTIONS(1953),
        [anon_sym_char] = ACTIONS(1953),
        [anon_sym_delegate] = ACTIONS(1953),
        [anon_sym_LBRACK] = ACTIONS(1949),
        [sym_const_keyword] = ACTIONS(1953),
        [anon_sym_readonly] = ACTIONS(1953),
        [anon_sym_volatile] = ACTIONS(1953),
        [anon_sym_bool] = ACTIONS(1953),
        [anon_sym_decimal] = ACTIONS(1953),
        [anon_sym_double] = ACTIONS(1953),
        [anon_sym_float] = ACTIONS(1953),
        [anon_sym_object] = ACTIONS(1953),
        [anon_sym_string] = ACTIONS(1953),
        [sym_identifier_name] = ACTIONS(1957),
        [sym_comment] = ACTIONS(101),
    },
    [500] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1961),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [501] = {
        [ts_builtin_sym_end] = ACTIONS(1963),
        [anon_sym_namespace] = ACTIONS(1967),
        [anon_sym_RBRACE] = ACTIONS(1963),
        [anon_sym_class] = ACTIONS(1967),
        [anon_sym_unsafe] = ACTIONS(1967),
        [anon_sym_abstract] = ACTIONS(1967),
        [anon_sym_sealed] = ACTIONS(1967),
        [anon_sym_static] = ACTIONS(1967),
        [anon_sym_new] = ACTIONS(1967),
        [anon_sym_public] = ACTIONS(1967),
        [anon_sym_protected] = ACTIONS(1967),
        [anon_sym_internal] = ACTIONS(1967),
        [anon_sym_private] = ACTIONS(1967),
        [anon_sym_struct] = ACTIONS(1967),
        [anon_sym_enum] = ACTIONS(1967),
        [anon_sym_sbyte] = ACTIONS(1967),
        [anon_sym_byte] = ACTIONS(1967),
        [anon_sym_short] = ACTIONS(1967),
        [anon_sym_ushort] = ACTIONS(1967),
        [anon_sym_int] = ACTIONS(1967),
        [anon_sym_uint] = ACTIONS(1967),
        [anon_sym_long] = ACTIONS(1967),
        [anon_sym_ulong] = ACTIONS(1967),
        [anon_sym_char] = ACTIONS(1967),
        [anon_sym_delegate] = ACTIONS(1967),
        [anon_sym_LBRACK] = ACTIONS(1963),
        [sym_const_keyword] = ACTIONS(1967),
        [anon_sym_readonly] = ACTIONS(1967),
        [anon_sym_volatile] = ACTIONS(1967),
        [anon_sym_bool] = ACTIONS(1967),
        [anon_sym_decimal] = ACTIONS(1967),
        [anon_sym_double] = ACTIONS(1967),
        [anon_sym_float] = ACTIONS(1967),
        [anon_sym_object] = ACTIONS(1967),
        [anon_sym_string] = ACTIONS(1967),
        [sym_identifier_name] = ACTIONS(1971),
        [sym_comment] = ACTIONS(101),
    },
    [502] = {
        [ts_builtin_sym_end] = ACTIONS(1975),
        [anon_sym_namespace] = ACTIONS(1979),
        [anon_sym_RBRACE] = ACTIONS(1975),
        [anon_sym_class] = ACTIONS(1979),
        [anon_sym_unsafe] = ACTIONS(1979),
        [anon_sym_abstract] = ACTIONS(1979),
        [anon_sym_sealed] = ACTIONS(1979),
        [anon_sym_static] = ACTIONS(1979),
        [anon_sym_new] = ACTIONS(1979),
        [anon_sym_public] = ACTIONS(1979),
        [anon_sym_protected] = ACTIONS(1979),
        [anon_sym_internal] = ACTIONS(1979),
        [anon_sym_private] = ACTIONS(1979),
        [anon_sym_struct] = ACTIONS(1979),
        [anon_sym_enum] = ACTIONS(1979),
        [anon_sym_sbyte] = ACTIONS(1979),
        [anon_sym_byte] = ACTIONS(1979),
        [anon_sym_short] = ACTIONS(1979),
        [anon_sym_ushort] = ACTIONS(1979),
        [anon_sym_int] = ACTIONS(1979),
        [anon_sym_uint] = ACTIONS(1979),
        [anon_sym_long] = ACTIONS(1979),
        [anon_sym_ulong] = ACTIONS(1979),
        [anon_sym_char] = ACTIONS(1979),
        [anon_sym_delegate] = ACTIONS(1979),
        [anon_sym_LBRACK] = ACTIONS(1975),
        [sym_const_keyword] = ACTIONS(1979),
        [anon_sym_readonly] = ACTIONS(1979),
        [anon_sym_volatile] = ACTIONS(1979),
        [anon_sym_bool] = ACTIONS(1979),
        [anon_sym_decimal] = ACTIONS(1979),
        [anon_sym_double] = ACTIONS(1979),
        [anon_sym_float] = ACTIONS(1979),
        [anon_sym_object] = ACTIONS(1979),
        [anon_sym_string] = ACTIONS(1979),
        [sym_identifier_name] = ACTIONS(1983),
        [sym_comment] = ACTIONS(101),
    },
    [503] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1947),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [sym_type_parameter_list] = STATE(506),
        [anon_sym_LBRACE] = ACTIONS(1987),
        [anon_sym_LT] = ACTIONS(279),
        [sym_comment] = ACTIONS(101),
    },
    [505] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(512),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1989),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [anon_sym_LBRACE] = ACTIONS(1991),
        [sym_comment] = ACTIONS(101),
    },
    [507] = {
        [sym__type_declaration] = STATE(198),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(198),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(509),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1993),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [ts_builtin_sym_end] = ACTIONS(1995),
        [anon_sym_namespace] = ACTIONS(1999),
        [anon_sym_RBRACE] = ACTIONS(1995),
        [anon_sym_class] = ACTIONS(1999),
        [anon_sym_unsafe] = ACTIONS(1999),
        [anon_sym_abstract] = ACTIONS(1999),
        [anon_sym_sealed] = ACTIONS(1999),
        [anon_sym_static] = ACTIONS(1999),
        [anon_sym_new] = ACTIONS(1999),
        [anon_sym_public] = ACTIONS(1999),
        [anon_sym_protected] = ACTIONS(1999),
        [anon_sym_internal] = ACTIONS(1999),
        [anon_sym_private] = ACTIONS(1999),
        [anon_sym_struct] = ACTIONS(1999),
        [anon_sym_enum] = ACTIONS(1999),
        [anon_sym_sbyte] = ACTIONS(1999),
        [anon_sym_byte] = ACTIONS(1999),
        [anon_sym_short] = ACTIONS(1999),
        [anon_sym_ushort] = ACTIONS(1999),
        [anon_sym_int] = ACTIONS(1999),
        [anon_sym_uint] = ACTIONS(1999),
        [anon_sym_long] = ACTIONS(1999),
        [anon_sym_ulong] = ACTIONS(1999),
        [anon_sym_char] = ACTIONS(1999),
        [anon_sym_delegate] = ACTIONS(1999),
        [anon_sym_LBRACK] = ACTIONS(1995),
        [sym_const_keyword] = ACTIONS(1999),
        [anon_sym_readonly] = ACTIONS(1999),
        [anon_sym_volatile] = ACTIONS(1999),
        [anon_sym_bool] = ACTIONS(1999),
        [anon_sym_decimal] = ACTIONS(1999),
        [anon_sym_double] = ACTIONS(1999),
        [anon_sym_float] = ACTIONS(1999),
        [anon_sym_object] = ACTIONS(1999),
        [anon_sym_string] = ACTIONS(1999),
        [sym_identifier_name] = ACTIONS(2003),
        [sym_comment] = ACTIONS(101),
    },
    [509] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(2007),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(101),
    },
    [510] = {
        [ts_builtin_sym_end] = ACTIONS(2009),
        [anon_sym_namespace] = ACTIONS(2013),
        [anon_sym_RBRACE] = ACTIONS(2009),
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
        [anon_sym_sbyte] = ACTIONS(2013),
        [anon_sym_byte] = ACTIONS(2013),
        [anon_sym_short] = ACTIONS(2013),
        [anon_sym_ushort] = ACTIONS(2013),
        [anon_sym_int] = ACTIONS(2013),
        [anon_sym_uint] = ACTIONS(2013),
        [anon_sym_long] = ACTIONS(2013),
        [anon_sym_ulong] = ACTIONS(2013),
        [anon_sym_char] = ACTIONS(2013),
        [anon_sym_delegate] = ACTIONS(2013),
        [anon_sym_LBRACK] = ACTIONS(2009),
        [sym_const_keyword] = ACTIONS(2013),
        [anon_sym_readonly] = ACTIONS(2013),
        [anon_sym_volatile] = ACTIONS(2013),
        [anon_sym_bool] = ACTIONS(2013),
        [anon_sym_decimal] = ACTIONS(2013),
        [anon_sym_double] = ACTIONS(2013),
        [anon_sym_float] = ACTIONS(2013),
        [anon_sym_object] = ACTIONS(2013),
        [anon_sym_string] = ACTIONS(2013),
        [sym_identifier_name] = ACTIONS(2017),
        [sym_comment] = ACTIONS(101),
    },
    [511] = {
        [ts_builtin_sym_end] = ACTIONS(2021),
        [anon_sym_namespace] = ACTIONS(2025),
        [anon_sym_RBRACE] = ACTIONS(2021),
        [anon_sym_class] = ACTIONS(2025),
        [anon_sym_unsafe] = ACTIONS(2025),
        [anon_sym_abstract] = ACTIONS(2025),
        [anon_sym_sealed] = ACTIONS(2025),
        [anon_sym_static] = ACTIONS(2025),
        [anon_sym_new] = ACTIONS(2025),
        [anon_sym_public] = ACTIONS(2025),
        [anon_sym_protected] = ACTIONS(2025),
        [anon_sym_internal] = ACTIONS(2025),
        [anon_sym_private] = ACTIONS(2025),
        [anon_sym_struct] = ACTIONS(2025),
        [anon_sym_enum] = ACTIONS(2025),
        [anon_sym_sbyte] = ACTIONS(2025),
        [anon_sym_byte] = ACTIONS(2025),
        [anon_sym_short] = ACTIONS(2025),
        [anon_sym_ushort] = ACTIONS(2025),
        [anon_sym_int] = ACTIONS(2025),
        [anon_sym_uint] = ACTIONS(2025),
        [anon_sym_long] = ACTIONS(2025),
        [anon_sym_ulong] = ACTIONS(2025),
        [anon_sym_char] = ACTIONS(2025),
        [anon_sym_delegate] = ACTIONS(2025),
        [anon_sym_LBRACK] = ACTIONS(2021),
        [sym_const_keyword] = ACTIONS(2025),
        [anon_sym_readonly] = ACTIONS(2025),
        [anon_sym_volatile] = ACTIONS(2025),
        [anon_sym_bool] = ACTIONS(2025),
        [anon_sym_decimal] = ACTIONS(2025),
        [anon_sym_double] = ACTIONS(2025),
        [anon_sym_float] = ACTIONS(2025),
        [anon_sym_object] = ACTIONS(2025),
        [anon_sym_string] = ACTIONS(2025),
        [sym_identifier_name] = ACTIONS(2029),
        [sym_comment] = ACTIONS(101),
    },
    [512] = {
        [sym__type_declaration] = STATE(206),
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
        [sym__attributes] = STATE(199),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(206),
        [sym_field_modifiers] = STATE(200),
        [sym__field_modifiers] = STATE(201),
        [sym_variable_declaration] = STATE(202),
        [sym__type] = STATE(203),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1993),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(603),
        [anon_sym_public] = ACTIONS(603),
        [anon_sym_protected] = ACTIONS(603),
        [anon_sym_internal] = ACTIONS(603),
        [anon_sym_private] = ACTIONS(603),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_enum] = ACTIONS(607),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_delegate] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_const_keyword] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
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
        [ts_builtin_sym_end] = ACTIONS(2033),
        [anon_sym_namespace] = ACTIONS(2040),
        [anon_sym_RBRACE] = ACTIONS(2033),
        [anon_sym_class] = ACTIONS(2040),
        [anon_sym_unsafe] = ACTIONS(2040),
        [anon_sym_abstract] = ACTIONS(2040),
        [anon_sym_sealed] = ACTIONS(2040),
        [anon_sym_static] = ACTIONS(2040),
        [anon_sym_new] = ACTIONS(2040),
        [anon_sym_public] = ACTIONS(2040),
        [anon_sym_protected] = ACTIONS(2040),
        [anon_sym_internal] = ACTIONS(2040),
        [anon_sym_private] = ACTIONS(2040),
        [anon_sym_struct] = ACTIONS(2040),
        [anon_sym_enum] = ACTIONS(2040),
        [anon_sym_sbyte] = ACTIONS(2040),
        [anon_sym_byte] = ACTIONS(2040),
        [anon_sym_short] = ACTIONS(2040),
        [anon_sym_ushort] = ACTIONS(2040),
        [anon_sym_int] = ACTIONS(2040),
        [anon_sym_uint] = ACTIONS(2040),
        [anon_sym_long] = ACTIONS(2040),
        [anon_sym_ulong] = ACTIONS(2040),
        [anon_sym_char] = ACTIONS(2040),
        [anon_sym_delegate] = ACTIONS(2040),
        [anon_sym_LBRACK] = ACTIONS(2033),
        [sym_const_keyword] = ACTIONS(2040),
        [anon_sym_readonly] = ACTIONS(2040),
        [anon_sym_volatile] = ACTIONS(2040),
        [anon_sym_bool] = ACTIONS(2040),
        [anon_sym_decimal] = ACTIONS(2040),
        [anon_sym_double] = ACTIONS(2040),
        [anon_sym_float] = ACTIONS(2040),
        [anon_sym_object] = ACTIONS(2040),
        [anon_sym_string] = ACTIONS(2040),
        [sym_identifier_name] = ACTIONS(2047),
        [sym_comment] = ACTIONS(101),
    },
    [514] = {
        [ts_builtin_sym_end] = ACTIONS(2054),
        [anon_sym_namespace] = ACTIONS(2064),
        [anon_sym_RBRACE] = ACTIONS(2054),
        [anon_sym_class] = ACTIONS(2064),
        [anon_sym_unsafe] = ACTIONS(2064),
        [anon_sym_abstract] = ACTIONS(2064),
        [anon_sym_sealed] = ACTIONS(2064),
        [anon_sym_static] = ACTIONS(2064),
        [anon_sym_new] = ACTIONS(2064),
        [anon_sym_public] = ACTIONS(2064),
        [anon_sym_protected] = ACTIONS(2064),
        [anon_sym_internal] = ACTIONS(2064),
        [anon_sym_private] = ACTIONS(2064),
        [anon_sym_struct] = ACTIONS(2064),
        [anon_sym_enum] = ACTIONS(2064),
        [anon_sym_sbyte] = ACTIONS(2074),
        [anon_sym_byte] = ACTIONS(2074),
        [anon_sym_short] = ACTIONS(2074),
        [anon_sym_ushort] = ACTIONS(2074),
        [anon_sym_int] = ACTIONS(2074),
        [anon_sym_uint] = ACTIONS(2074),
        [anon_sym_long] = ACTIONS(2074),
        [anon_sym_ulong] = ACTIONS(2074),
        [anon_sym_char] = ACTIONS(2074),
        [anon_sym_delegate] = ACTIONS(2064),
        [anon_sym_LBRACK] = ACTIONS(2054),
        [sym_const_keyword] = ACTIONS(2074),
        [anon_sym_readonly] = ACTIONS(2074),
        [anon_sym_volatile] = ACTIONS(2074),
        [anon_sym_bool] = ACTIONS(2074),
        [anon_sym_decimal] = ACTIONS(2074),
        [anon_sym_double] = ACTIONS(2074),
        [anon_sym_float] = ACTIONS(2074),
        [anon_sym_object] = ACTIONS(2074),
        [anon_sym_string] = ACTIONS(2074),
        [sym_identifier_name] = ACTIONS(2083),
        [sym_comment] = ACTIONS(101),
    },
    [515] = {
        [aux_sym_enum_declaration_repeat1] = STATE(380),
        [anon_sym_RBRACE] = ACTIONS(2092),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(101),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(312),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(315),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(316),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(317),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(318),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(193),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(319),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(195),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(320),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(321),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(322),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(323),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(324),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(325),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(326),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(327),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(328),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(329),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(330),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(288),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(331),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(197),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(332),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(136),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(334),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(149),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(335),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(139),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(160),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(140),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(336),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(337),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(338),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(339),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(143),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(65),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(340),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(302),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(293),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(341),
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
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
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
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
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
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
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
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
    [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
    [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
    [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
    [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
    [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
    [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
    [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
    [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
    [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [889] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(308),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [913] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [928] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [932] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [945] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [959] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [976] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [990] = {.count = 16, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1007] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_field_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1025] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(465),
    [1027] = {.count = 18, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
    [1048] = {.count = 18, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1067] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1084] = {.count = 16, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(504),
    [1103] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
    [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
    [1112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1), REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
    [1115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(484),
    [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1119] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2), REDUCE(sym_parameter_list, 3),
    [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 5),
    [1124] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1127] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1130] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_rank_specifier, 2), REDUCE(sym_array_rank_specifier, 3), REDUCE(sym__attribute_section, 3),
    [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
    [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
    [1138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
    [1140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [1142] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
    [1152] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1157] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1163] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [1167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
    [1169] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1172] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1175] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(461),
    [1179] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(462),
    [1182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1187] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [1198] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter, 4), REDUCE(sym_parameter_array, 4),
    [1204] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1208] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [1215] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(296),
    [1219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [1221] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1224] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1227] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1232] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1237] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1240] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1243] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [1246] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
    [1251] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1256] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1259] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(439),
    [1263] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(172),
    [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
    [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [1277] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(111),
    [1281] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1285] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(76),
    [1289] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3), SHIFT(32),
    [1293] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1), REDUCE(sym__formal_parameter_list, 2), REDUCE(sym__formal_parameter_list, 3),
    [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
    [1299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
    [1301] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1304] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1307] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [1312] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(37),
    [1316] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1320] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [1323] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
    [1328] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1331] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [1336] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1), SHIFT(393),
    [1339] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1343] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(209),
    [1347] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1350] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1354] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1357] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
    [1362] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(104),
    [1366] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(105),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [1372] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1375] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1379] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [1388] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1396] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1402] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1408] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1414] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1420] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1426] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1435] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1444] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1453] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1457] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1460] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1463] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [1468] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1475] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1482] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [1491] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1498] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1505] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1512] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1517] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1521] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1526] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1531] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [1538] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1541] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1544] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [1549] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1552] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1555] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
    [1560] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 3),
    [1563] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3), REDUCE(sym_parameter_array, 4),
    [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
    [1568] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1571] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1575] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1579] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
    [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [1587] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1590] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1593] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1598] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1604] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1608] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [1614] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [1620] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1624] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1628] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1632] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1636] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
    [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1650] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1655] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1658] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
    [1663] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
    [1668] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1671] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1674] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1677] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1680] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [1685] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [1690] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1693] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1698] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [1703] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1706] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1709] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1717] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1723] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
    [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [1739] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1742] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1745] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [1750] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1753] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1756] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1759] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1762] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1765] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [1778] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1781] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1784] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [1789] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1792] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1795] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1798] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1801] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1804] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1807] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1813] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1821] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1829] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1836] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [1845] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1848] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [1853] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [1859] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1863] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [1869] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [1875] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1879] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1883] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1887] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
    [1894] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [1899] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1904] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1908] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1912] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_field_declaration, 5),
    [1916] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1921] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [1924] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
    [1927] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1930] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1933] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1936] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [1941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
    [1947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1949] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1953] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1957] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [1963] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1967] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1971] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1975] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1979] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1983] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
    [1993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1995] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1999] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2003] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [2007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [2009] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2013] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2017] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [2021] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2025] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2029] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [2033] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2040] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2047] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [2054] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2064] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2074] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2083] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [2092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
