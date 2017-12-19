#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 855
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 0
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_1 = 1,
  anon_sym_extern = 2,
  anon_sym_alias = 3,
  anon_sym_SEMI = 4,
  anon_sym_using = 5,
  anon_sym_namespace = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_class = 9,
  anon_sym_unsafe = 10,
  anon_sym_abstract = 11,
  anon_sym_sealed = 12,
  anon_sym_static = 13,
  anon_sym_new = 14,
  anon_sym_public = 15,
  anon_sym_protected = 16,
  anon_sym_internal = 17,
  anon_sym_private = 18,
  anon_sym_interface = 19,
  anon_sym_struct = 20,
  anon_sym_enum = 21,
  anon_sym_COLON = 22,
  anon_sym_COMMA = 23,
  anon_sym_sbyte = 24,
  anon_sym_byte = 25,
  anon_sym_short = 26,
  anon_sym_ushort = 27,
  anon_sym_int = 28,
  anon_sym_uint = 29,
  anon_sym_long = 30,
  anon_sym_ulong = 31,
  anon_sym_char = 32,
  anon_sym_delegate = 33,
  sym_void_keyword = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  anon_sym_ref = 37,
  anon_sym_out = 38,
  anon_sym_this = 39,
  sym_params_keyword = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_assembly = 43,
  anon_sym_module = 44,
  sym_const_keyword = 45,
  anon_sym_readonly = 46,
  anon_sym_volatile = 47,
  anon_sym_EQ = 48,
  anon_sym_QMARK = 49,
  anon_sym_AMP_AMP = 50,
  anon_sym_PIPE_PIPE = 51,
  anon_sym_GT_GT = 52,
  anon_sym_LT_LT = 53,
  anon_sym_AMP = 54,
  anon_sym_CARET = 55,
  anon_sym_PIPE = 56,
  anon_sym_PLUS = 57,
  anon_sym_DASH = 58,
  anon_sym_STAR = 59,
  anon_sym_SLASH = 60,
  anon_sym_PERCENT = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_EQ_EQ = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_BANG = 68,
  anon_sym_TILDE = 69,
  anon_sym_typeof = 70,
  anon_sym_DASH_DASH = 71,
  anon_sym_PLUS_PLUS = 72,
  anon_sym_true = 73,
  anon_sym_false = 74,
  anon_sym_SQUOTE = 75,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 76,
  sym__hexadecimal_escape_sequence = 77,
  aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 78,
  aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 79,
  anon_sym_BSLASH_SQUOTE = 80,
  anon_sym_BSLASH_DQUOTE = 81,
  anon_sym_BSLASH_BSLASH = 82,
  anon_sym_BSLASH0 = 83,
  anon_sym_BSLASHa = 84,
  anon_sym_BSLASHb = 85,
  anon_sym_BSLASHf = 86,
  anon_sym_BSLASHn = 87,
  anon_sym_BSLASHr = 88,
  anon_sym_BSLASHt = 89,
  anon_sym_BSLASHv = 90,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 91,
  aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 92,
  sym__integer_type_suffix = 93,
  sym_null_literal = 94,
  anon_sym_DOT = 95,
  sym__real_type_suffix = 96,
  sym__exponent_part = 97,
  anon_sym_DQUOTE = 98,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 99,
  anon_sym_AT_DQUOTE = 100,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 101,
  anon_sym_bool = 102,
  anon_sym_decimal = 103,
  anon_sym_double = 104,
  anon_sym_float = 105,
  anon_sym_object = 106,
  anon_sym_string = 107,
  anon_sym_COLON_COLON = 108,
  sym_global = 109,
  sym_identifier_name = 110,
  sym_comment = 111,
  anon_sym_async = 112,
  anon_sym_return = 113,
  sym_compilation_unit = 114,
  sym__type_declaration = 115,
  sym_extern_alias_directive = 116,
  sym_using_directive = 117,
  sym_namespace_declaration = 118,
  sym_class_declaration = 119,
  sym_class_modifiers = 120,
  sym__class_modifiers = 121,
  sym_interface_declaration = 122,
  sym_interface_modifiers = 123,
  sym__interface_modifiers = 124,
  sym_struct_declaration = 125,
  sym_struct_modifiers = 126,
  sym__struct_modifiers = 127,
  sym_enum_declaration = 128,
  sym_enum_member_declaration = 129,
  sym_enum_modifiers = 130,
  sym__integral_type = 131,
  sym_delegate_declaration = 132,
  sym_delegate_modifier = 133,
  sym_return_type = 134,
  sym_parameter_list = 135,
  sym__formal_parameter_list = 136,
  sym_parameter = 137,
  sym_parameter_modifier = 138,
  sym_parameter_array = 139,
  sym_array_type = 140,
  sym_array_rank_specifier = 141,
  sym__attributes = 142,
  sym__attribute_section = 143,
  sym_attribute_list = 144,
  sym_attribute = 145,
  sym_attribute_argument_list = 146,
  sym__global_attributes = 147,
  sym_field_declaration = 148,
  sym_field_modifiers = 149,
  sym__field_modifiers = 150,
  sym_variable_declaration = 151,
  sym__type = 152,
  sym_generic_name = 153,
  sym_variable_declarator = 154,
  sym_equals_value_clause = 155,
  sym__expression = 156,
  sym_ternary_expression = 157,
  sym_binary_expression = 158,
  sym_unary_expression = 159,
  sym__literal = 160,
  sym_boolean_literal = 161,
  sym_character_literal = 162,
  sym__unicode_escape_sequence = 163,
  sym__simple_escape_sequence = 164,
  sym_integer_literal = 165,
  sym_real_literal = 166,
  sym_string_literal = 167,
  sym__regular_string_literal = 168,
  sym__regular_string_literal_character = 169,
  sym__verbatim_string_literal = 170,
  sym_predefined_type = 171,
  sym_type_parameter_list = 172,
  sym_type_parameter = 173,
  sym_qualified_name = 174,
  sym_alias_qualified_name = 175,
  sym_name_equals = 176,
  sym_static = 177,
  sym_constructor_declaration = 178,
  sym_method_declaration = 179,
  sym_method_modifiers = 180,
  sym_statement_block = 181,
  sym__statement = 182,
  sym_expression_statement = 183,
  sym_return_statement = 184,
  sym_variable_assignment_statement = 185,
  sym_empty_statement = 186,
  aux_sym_compilation_unit_repeat1 = 187,
  aux_sym_compilation_unit_repeat2 = 188,
  aux_sym_compilation_unit_repeat3 = 189,
  aux_sym_compilation_unit_repeat4 = 190,
  aux_sym_namespace_declaration_repeat1 = 191,
  aux_sym_class_declaration_repeat1 = 192,
  aux_sym_interface_declaration_repeat1 = 193,
  aux_sym_struct_declaration_repeat1 = 194,
  aux_sym_enum_declaration_repeat1 = 195,
  aux_sym__formal_parameter_list_repeat1 = 196,
  aux_sym_array_rank_specifier_repeat1 = 197,
  aux_sym__attributes_repeat1 = 198,
  aux_sym_attribute_list_repeat1 = 199,
  aux_sym_variable_declaration_repeat1 = 200,
  aux_sym__regular_string_literal_repeat1 = 201,
  aux_sym_type_parameter_list_repeat1 = 202,
  aux_sym_statement_block_repeat1 = 203,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_1] = "ï»¿",
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
  [anon_sym_interface] = "interface",
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
  [anon_sym_QMARK] = "?",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_typeof] = "typeof",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
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
  [anon_sym_COLON_COLON] = "::",
  [sym_global] = "global",
  [sym_identifier_name] = "identifier_name",
  [sym_comment] = "comment",
  [anon_sym_async] = "async",
  [anon_sym_return] = "return",
  [sym_compilation_unit] = "compilation_unit",
  [sym__type_declaration] = "_type_declaration",
  [sym_extern_alias_directive] = "extern_alias_directive",
  [sym_using_directive] = "using_directive",
  [sym_namespace_declaration] = "namespace_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_modifiers] = "class_modifiers",
  [sym__class_modifiers] = "_class_modifiers",
  [sym_interface_declaration] = "interface_declaration",
  [sym_interface_modifiers] = "interface_modifiers",
  [sym__interface_modifiers] = "_interface_modifiers",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_modifiers] = "struct_modifiers",
  [sym__struct_modifiers] = "_struct_modifiers",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_member_declaration] = "enum_member_declaration",
  [sym_enum_modifiers] = "enum_modifiers",
  [sym__integral_type] = "_integral_type",
  [sym_delegate_declaration] = "delegate_declaration",
  [sym_delegate_modifier] = "delegate_modifier",
  [sym_return_type] = "return_type",
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
  [sym_ternary_expression] = "ternary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
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
  [sym_constructor_declaration] = "constructor_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym_method_modifiers] = "method_modifiers",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_variable_assignment_statement] = "variable_assignment_statement",
  [sym_empty_statement] = "empty_statement",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
  [aux_sym_compilation_unit_repeat3] = "compilation_unit_repeat3",
  [aux_sym_compilation_unit_repeat4] = "compilation_unit_repeat4",
  [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
  [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
  [aux_sym_interface_declaration_repeat1] = "interface_declaration_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym__formal_parameter_list_repeat1] = "_formal_parameter_list_repeat1",
  [aux_sym_array_rank_specifier_repeat1] = "array_rank_specifier_repeat1",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym__regular_string_literal_repeat1] = "_regular_string_literal_repeat1",
  [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [sym_void_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [sym_params_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [sym_const_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__hexadecimal_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__integer_type_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__real_type_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent_part] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__type_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_extern_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_using_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__class_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__interface_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__struct_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__integral_type] = {
    .visible = false,
    .named = true,
  },
  [sym_delegate_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_delegate_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__formal_parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_rank_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_section] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__global_attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__field_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_generic_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_equals_value_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__unicode_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__regular_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__regular_string_literal_character] = {
    .visible = false,
    .named = true,
  },
  [sym__verbatim_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_predefined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__formal_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_rank_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regular_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(30);
      if (lookahead == 'L')
        ADVANCE(34);
      if (lookahead == 'U')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(37);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'g')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(153);
      if (lookahead == 'm')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(169);
      if (lookahead == 'p')
        ADVANCE(177);
      if (lookahead == 'r')
        ADVANCE(201);
      if (lookahead == 's')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(240);
      if (lookahead == 'u')
        ADVANCE(252);
      if (lookahead == 'v')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(280);
      if (lookahead == 239)
        ADVANCE(282);
      if (('D' <= lookahead && lookahead <= 'F'))
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      if (lookahead == '&')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      if (lookahead == '+')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 9:
      if (lookahead == '-')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 11:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'x')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ':')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 22:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 25:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 27:
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier_name);
      if (('+' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= ']'))
        ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= 'Z'))
        ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__exponent_part);
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__exponent_part);
      if (('+' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= ']'))
        ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= 'Z'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(35);
      if (lookahead == 'u')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(35);
      if (lookahead == 'l')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '\'')
        ADVANCE(38);
      if (lookahead == '0')
        ADVANCE(39);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead == '\\')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'f')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 'r')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(55);
      if (lookahead == 'u')
        ADVANCE(56);
      if (lookahead == 'v')
        ADVANCE(61);
      if (lookahead == 'x')
        ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(42);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(45);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(47);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(57);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(58);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 's')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(76);
      if (lookahead == 'y')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_assembly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_async);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == 'y')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(93);
      if (lookahead == 'l')
        ADVANCE(96);
      if (lookahead == 'o')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'e')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'l')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_delegate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(123);
      if (('+' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= ']'))
        ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= 'Z'))
        ADVANCE(33);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 'l')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(35);
      if (lookahead == 'o')
        ADVANCE(154);
      if (lookahead == 'u')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'o')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(164);
      if (lookahead == 'u')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'w')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'j')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(178);
      if (lookahead == 'r')
        ADVANCE(183);
      if (lookahead == 'u')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_params_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'v')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(215);
      if (lookahead == 'e')
        ADVANCE(219);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(234);
      if (lookahead == 'u')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(241);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 'y')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'p')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead == 'l')
        ADVANCE(256);
      if (lookahead == 'n')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'o')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(272);
      if (lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_void_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 280:
      if (lookahead == '|')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 282:
      if (lookahead == 187)
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 191)
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 286:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(287);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(288);
      if (lookahead == ')')
        ADVANCE(289);
      if (lookahead == ',')
        ADVANCE(290);
      if (lookahead == '.')
        ADVANCE(291);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(292);
      if (lookahead == ';')
        ADVANCE(293);
      if (lookahead == '<')
        ADVANCE(294);
      if (lookahead == '=')
        ADVANCE(295);
      if (lookahead == '>')
        ADVANCE(296);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == ']')
        ADVANCE(298);
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'b')
        ADVANCE(311);
      if (lookahead == 'c')
        ADVANCE(315);
      if (lookahead == 'd')
        ADVANCE(323);
      if (lookahead == 'e')
        ADVANCE(331);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'l')
        ADVANCE(352);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead == 'p')
        ADVANCE(367);
      if (lookahead == 's')
        ADVANCE(391);
      if (lookahead == 'u')
        ADVANCE(414);
      if (lookahead == '{')
        ADVANCE(435);
      if (lookahead == '}')
        ADVANCE(436);
      if (lookahead == 239)
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(21);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 299:
      if (lookahead == 'b')
        ADVANCE(300);
      if (lookahead == 'l')
        ADVANCE(307);
      END_STATE();
    case 300:
      if (lookahead == 's')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 't')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'r')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'a')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'c')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 307:
      if (lookahead == 'i')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'a')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 's')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 311:
      if (lookahead == 'y')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 't')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'e')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 315:
      if (lookahead == 'h')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(319);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'r')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 319:
      if (lookahead == 'a')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 's')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 's')
        ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 323:
      if (lookahead == 'e')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'l')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'e')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'g')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'a')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'e')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 331:
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'x')
        ADVANCE(335);
      END_STATE();
    case 332:
      if (lookahead == 'u')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'm')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 335:
      if (lookahead == 't')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'e')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'r')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 't')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'r')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'f')
        ADVANCE(345);
      if (lookahead == 'n')
        ADVANCE(349);
      END_STATE();
    case 345:
      if (lookahead == 'a')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'c')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 349:
      if (lookahead == 'a')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'l')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 352:
      if (lookahead == 'o')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'n')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'g')
        ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 356:
      if (lookahead == 'a')
        ADVANCE(357);
      if (lookahead == 'e')
        ADVANCE(365);
      END_STATE();
    case 357:
      if (lookahead == 'm')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'e')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 's')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'p')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'a')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'c')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'e')
        ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 365:
      if (lookahead == 'w')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 367:
      if (lookahead == 'a')
        ADVANCE(368);
      if (lookahead == 'r')
        ADVANCE(373);
      if (lookahead == 'u')
        ADVANCE(386);
      END_STATE();
    case 368:
      if (lookahead == 'r')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'a')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'm')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 's')
        ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_params_keyword);
      END_STATE();
    case 373:
      if (lookahead == 'i')
        ADVANCE(374);
      if (lookahead == 'o')
        ADVANCE(379);
      END_STATE();
    case 374:
      if (lookahead == 'v')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'a')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 't')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'e')
        ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 379:
      if (lookahead == 't')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'c')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 't')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'd')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 386:
      if (lookahead == 'b')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'l')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'i')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'c')
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 391:
      if (lookahead == 'b')
        ADVANCE(392);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead == 'h')
        ADVANCE(401);
      if (lookahead == 't')
        ADVANCE(405);
      END_STATE();
    case 392:
      if (lookahead == 'y')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 't')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 396:
      if (lookahead == 'a')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'l')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'e')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'd')
        ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 401:
      if (lookahead == 'o')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'r')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 't')
        ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 405:
      if (lookahead == 'a')
        ADVANCE(406);
      if (lookahead == 'r')
        ADVANCE(410);
      END_STATE();
    case 406:
      if (lookahead == 't')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'i')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'c')
        ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 410:
      if (lookahead == 'u')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'c')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 't')
        ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 414:
      if (lookahead == 'i')
        ADVANCE(415);
      if (lookahead == 'l')
        ADVANCE(418);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead == 's')
        ADVANCE(427);
      END_STATE();
    case 415:
      if (lookahead == 'n')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 't')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 418:
      if (lookahead == 'o')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'n')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'g')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 422:
      if (lookahead == 's')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'a')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'f')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'e')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 427:
      if (lookahead == 'h')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(432);
      END_STATE();
    case 428:
      if (lookahead == 'o')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'r')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 't')
        ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 432:
      if (lookahead == 'n')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'g')
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 437:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(135);
      if (lookahead == 's')
        ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 440:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 441:
      if (lookahead == '(')
        ADVANCE(288);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(294);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 442:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 's')
        ADVANCE(452);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead == 'v')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(445);
      if (lookahead == 'o')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(215);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead == 'l')
        ADVANCE(456);
      if (lookahead == 's')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 459:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(460);
      if (lookahead == 'm')
        ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 463:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(293);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == 'a')
        ADVANCE(464);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == 'e')
        ADVANCE(467);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(270);
      if (lookahead == '}')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(68);
      if (lookahead == 's')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(183);
      if (lookahead == 'u')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead == 'l')
        ADVANCE(456);
      if (lookahead == 'n')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 473:
      if (lookahead == ',')
        ADVANCE(290);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(294);
      if (lookahead == '>')
        ADVANCE(296);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 474:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 's')
        ADVANCE(452);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 475:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(477);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(482);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead == '}')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(93);
      if (lookahead == 'o')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(215);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 486:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(293);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == 'a')
        ADVANCE(487);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == 'e')
        ADVANCE(467);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead == '}')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 488:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(487);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(477);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 489:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(487);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(477);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(490);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(215);
      if (lookahead == 'e')
        ADVANCE(219);
      if (lookahead == 'h')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 491:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 's')
        ADVANCE(452);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 492:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 's')
        ADVANCE(452);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead == 'v')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 494:
      if (lookahead == ')')
        ADVANCE(289);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'o')
        ADVANCE(169);
      if (lookahead == 'p')
        ADVANCE(495);
      if (lookahead == 'r')
        ADVANCE(496);
      if (lookahead == 's')
        ADVANCE(452);
      if (lookahead == 't')
        ADVANCE(498);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 499:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(487);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(477);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 500:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(487);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'p')
        ADVANCE(469);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 501:
      if (lookahead == '(')
        ADVANCE(288);
      if (lookahead == ',')
        ADVANCE(290);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(296);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(501);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 502:
      if (lookahead == '!')
        ADVANCE(503);
      if (lookahead == '\"')
        ADVANCE(287);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(504);
      if (lookahead == '-')
        ADVANCE(505);
      if (lookahead == '.')
        ADVANCE(291);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(506);
      if (lookahead == 'f')
        ADVANCE(508);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == '~')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(502);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(10);
      END_STATE();
    case 506:
      if (lookahead == '\"')
        ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 'y')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 512:
      if (lookahead == '!')
        ADVANCE(503);
      if (lookahead == '\"')
        ADVANCE(287);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(504);
      if (lookahead == '-')
        ADVANCE(505);
      if (lookahead == '.')
        ADVANCE(291);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(293);
      if (lookahead == '@')
        ADVANCE(506);
      if (lookahead == 'f')
        ADVANCE(508);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead == 'r')
        ADVANCE(513);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == '}')
        ADVANCE(436);
      if (lookahead == '~')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(512);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 515:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(516);
      if (lookahead == '&')
        ADVANCE(517);
      if (lookahead == ')')
        ADVANCE(289);
      if (lookahead == '*')
        ADVANCE(518);
      if (lookahead == '+')
        ADVANCE(519);
      if (lookahead == ',')
        ADVANCE(290);
      if (lookahead == '-')
        ADVANCE(520);
      if (lookahead == '.')
        ADVANCE(291);
      if (lookahead == '/')
        ADVANCE(521);
      if (lookahead == ':')
        ADVANCE(522);
      if (lookahead == ';')
        ADVANCE(293);
      if (lookahead == '<')
        ADVANCE(523);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(524);
      if (lookahead == '?')
        ADVANCE(525);
      if (lookahead == 'L')
        ADVANCE(526);
      if (lookahead == 'U')
        ADVANCE(528);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == '^')
        ADVANCE(529);
      if (lookahead == 'l')
        ADVANCE(526);
      if (lookahead == 'p')
        ADVANCE(530);
      if (lookahead == 'u')
        ADVANCE(528);
      if (lookahead == '|')
        ADVANCE(531);
      if (lookahead == '}')
        ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(515);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm')
        ADVANCE(533);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(5);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(527);
      if (lookahead == 'u')
        ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(527);
      if (lookahead == 'l')
        ADVANCE(527);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 530:
      if (lookahead == 'a')
        ADVANCE(368);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(281);
      END_STATE();
    case 532:
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(31);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__real_type_suffix);
      END_STATE();
    case 534:
      if (lookahead == '/')
        ADVANCE(535);
      if (lookahead == '\\')
        ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(538);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(537);
      if (lookahead == '\'')
        ADVANCE(38);
      if (lookahead == '0')
        ADVANCE(39);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead == '\\')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'f')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 'r')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(55);
      if (lookahead == 'u')
        ADVANCE(56);
      if (lookahead == 'v')
        ADVANCE(61);
      if (lookahead == 'x')
        ADVANCE(62);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        SKIP(539);
      if (lookahead == '\"')
        ADVANCE(287);
      if (lookahead == '/')
        ADVANCE(540);
      if (lookahead == '\\')
        ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(542);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 541:
      if (lookahead == '\"')
        ADVANCE(537);
      if (lookahead == '\'')
        ADVANCE(38);
      if (lookahead == '0')
        ADVANCE(39);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead == '\\')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'f')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 'r')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(55);
      if (lookahead == 'u')
        ADVANCE(56);
      if (lookahead == 'v')
        ADVANCE(61);
      if (lookahead == 'x')
        ADVANCE(62);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(547);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(545);
      if (lookahead == '/')
        ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(547);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(545);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\"')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(547);
      END_STATE();
    case 550:
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(297);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'o')
        ADVANCE(169);
      if (lookahead == 'r')
        ADVANCE(496);
      if (lookahead == 's')
        ADVANCE(452);
      if (lookahead == 't')
        ADVANCE(498);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 551:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(516);
      if (lookahead == '&')
        ADVANCE(517);
      if (lookahead == '*')
        ADVANCE(518);
      if (lookahead == '+')
        ADVANCE(519);
      if (lookahead == '-')
        ADVANCE(520);
      if (lookahead == '/')
        ADVANCE(521);
      if (lookahead == ';')
        ADVANCE(293);
      if (lookahead == '<')
        ADVANCE(523);
      if (lookahead == '=')
        ADVANCE(552);
      if (lookahead == '>')
        ADVANCE(524);
      if (lookahead == '?')
        ADVANCE(525);
      if (lookahead == '^')
        ADVANCE(529);
      if (lookahead == '|')
        ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 286},
  [2] = {.lex_state = 286},
  [3] = {.lex_state = 286},
  [4] = {.lex_state = 437},
  [5] = {.lex_state = 440},
  [6] = {.lex_state = 441},
  [7] = {.lex_state = 286},
  [8] = {.lex_state = 286},
  [9] = {.lex_state = 286},
  [10] = {.lex_state = 441},
  [11] = {.lex_state = 441},
  [12] = {.lex_state = 441},
  [13] = {.lex_state = 442},
  [14] = {.lex_state = 459},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 286},
  [17] = {.lex_state = 286},
  [18] = {.lex_state = 286},
  [19] = {.lex_state = 286},
  [20] = {.lex_state = 286},
  [21] = {.lex_state = 286},
  [22] = {.lex_state = 286},
  [23] = {.lex_state = 286},
  [24] = {.lex_state = 286},
  [25] = {.lex_state = 286},
  [26] = {.lex_state = 286},
  [27] = {.lex_state = 286},
  [28] = {.lex_state = 286},
  [29] = {.lex_state = 463},
  [30] = {.lex_state = 286},
  [31] = {.lex_state = 286},
  [32] = {.lex_state = 286},
  [33] = {.lex_state = 286},
  [34] = {.lex_state = 286},
  [35] = {.lex_state = 463},
  [36] = {.lex_state = 286},
  [37] = {.lex_state = 286},
  [38] = {.lex_state = 286},
  [39] = {.lex_state = 286},
  [40] = {.lex_state = 441},
  [41] = {.lex_state = 440},
  [42] = {.lex_state = 286},
  [43] = {.lex_state = 286},
  [44] = {.lex_state = 286},
  [45] = {.lex_state = 286},
  [46] = {.lex_state = 440},
  [47] = {.lex_state = 286},
  [48] = {.lex_state = 286},
  [49] = {.lex_state = 286},
  [50] = {.lex_state = 286},
  [51] = {.lex_state = 286},
  [52] = {.lex_state = 286},
  [53] = {.lex_state = 286},
  [54] = {.lex_state = 286},
  [55] = {.lex_state = 286},
  [56] = {.lex_state = 286},
  [57] = {.lex_state = 473},
  [58] = {.lex_state = 441},
  [59] = {.lex_state = 473},
  [60] = {.lex_state = 441},
  [61] = {.lex_state = 473},
  [62] = {.lex_state = 286},
  [63] = {.lex_state = 286},
  [64] = {.lex_state = 286},
  [65] = {.lex_state = 286},
  [66] = {.lex_state = 441},
  [67] = {.lex_state = 441},
  [68] = {.lex_state = 441},
  [69] = {.lex_state = 441},
  [70] = {.lex_state = 442},
  [71] = {.lex_state = 286},
  [72] = {.lex_state = 286},
  [73] = {.lex_state = 286},
  [74] = {.lex_state = 286},
  [75] = {.lex_state = 286},
  [76] = {.lex_state = 286},
  [77] = {.lex_state = 286},
  [78] = {.lex_state = 286},
  [79] = {.lex_state = 441},
  [80] = {.lex_state = 286},
  [81] = {.lex_state = 463},
  [82] = {.lex_state = 286},
  [83] = {.lex_state = 286},
  [84] = {.lex_state = 286},
  [85] = {.lex_state = 286},
  [86] = {.lex_state = 441},
  [87] = {.lex_state = 286},
  [88] = {.lex_state = 440},
  [89] = {.lex_state = 441},
  [90] = {.lex_state = 286},
  [91] = {.lex_state = 286},
  [92] = {.lex_state = 463},
  [93] = {.lex_state = 474},
  [94] = {.lex_state = 286},
  [95] = {.lex_state = 475},
  [96] = {.lex_state = 286},
  [97] = {.lex_state = 486},
  [98] = {.lex_state = 286},
  [99] = {.lex_state = 441},
  [100] = {.lex_state = 286},
  [101] = {.lex_state = 473},
  [102] = {.lex_state = 286},
  [103] = {.lex_state = 441},
  [104] = {.lex_state = 286},
  [105] = {.lex_state = 286},
  [106] = {.lex_state = 463},
  [107] = {.lex_state = 441},
  [108] = {.lex_state = 286},
  [109] = {.lex_state = 286},
  [110] = {.lex_state = 286},
  [111] = {.lex_state = 286},
  [112] = {.lex_state = 286},
  [113] = {.lex_state = 441},
  [114] = {.lex_state = 441},
  [115] = {.lex_state = 441},
  [116] = {.lex_state = 441},
  [117] = {.lex_state = 441},
  [118] = {.lex_state = 442},
  [119] = {.lex_state = 286},
  [120] = {.lex_state = 286},
  [121] = {.lex_state = 286},
  [122] = {.lex_state = 286},
  [123] = {.lex_state = 286},
  [124] = {.lex_state = 286},
  [125] = {.lex_state = 286},
  [126] = {.lex_state = 286},
  [127] = {.lex_state = 286},
  [128] = {.lex_state = 286},
  [129] = {.lex_state = 441},
  [130] = {.lex_state = 488},
  [131] = {.lex_state = 489},
  [132] = {.lex_state = 463},
  [133] = {.lex_state = 441},
  [134] = {.lex_state = 441},
  [135] = {.lex_state = 441},
  [136] = {.lex_state = 442},
  [137] = {.lex_state = 474},
  [138] = {.lex_state = 475},
  [139] = {.lex_state = 441},
  [140] = {.lex_state = 442},
  [141] = {.lex_state = 463},
  [142] = {.lex_state = 463},
  [143] = {.lex_state = 286},
  [144] = {.lex_state = 286},
  [145] = {.lex_state = 286},
  [146] = {.lex_state = 286},
  [147] = {.lex_state = 286},
  [148] = {.lex_state = 441},
  [149] = {.lex_state = 463},
  [150] = {.lex_state = 491},
  [151] = {.lex_state = 491},
  [152] = {.lex_state = 286},
  [153] = {.lex_state = 441},
  [154] = {.lex_state = 492},
  [155] = {.lex_state = 463},
  [156] = {.lex_state = 286},
  [157] = {.lex_state = 286},
  [158] = {.lex_state = 463},
  [159] = {.lex_state = 286},
  [160] = {.lex_state = 441},
  [161] = {.lex_state = 474},
  [162] = {.lex_state = 475},
  [163] = {.lex_state = 475},
  [164] = {.lex_state = 475},
  [165] = {.lex_state = 491},
  [166] = {.lex_state = 286},
  [167] = {.lex_state = 441},
  [168] = {.lex_state = 475},
  [169] = {.lex_state = 475},
  [170] = {.lex_state = 475},
  [171] = {.lex_state = 286},
  [172] = {.lex_state = 441},
  [173] = {.lex_state = 486},
  [174] = {.lex_state = 441},
  [175] = {.lex_state = 441},
  [176] = {.lex_state = 441},
  [177] = {.lex_state = 442},
  [178] = {.lex_state = 441},
  [179] = {.lex_state = 474},
  [180] = {.lex_state = 486},
  [181] = {.lex_state = 486},
  [182] = {.lex_state = 286},
  [183] = {.lex_state = 286},
  [184] = {.lex_state = 286},
  [185] = {.lex_state = 286},
  [186] = {.lex_state = 286},
  [187] = {.lex_state = 486},
  [188] = {.lex_state = 486},
  [189] = {.lex_state = 491},
  [190] = {.lex_state = 286},
  [191] = {.lex_state = 486},
  [192] = {.lex_state = 486},
  [193] = {.lex_state = 486},
  [194] = {.lex_state = 441},
  [195] = {.lex_state = 286},
  [196] = {.lex_state = 286},
  [197] = {.lex_state = 441},
  [198] = {.lex_state = 441},
  [199] = {.lex_state = 441},
  [200] = {.lex_state = 286},
  [201] = {.lex_state = 286},
  [202] = {.lex_state = 494},
  [203] = {.lex_state = 286},
  [204] = {.lex_state = 286},
  [205] = {.lex_state = 286},
  [206] = {.lex_state = 286},
  [207] = {.lex_state = 441},
  [208] = {.lex_state = 286},
  [209] = {.lex_state = 286},
  [210] = {.lex_state = 286},
  [211] = {.lex_state = 441},
  [212] = {.lex_state = 286},
  [213] = {.lex_state = 286},
  [214] = {.lex_state = 286},
  [215] = {.lex_state = 286},
  [216] = {.lex_state = 286},
  [217] = {.lex_state = 286},
  [218] = {.lex_state = 441},
  [219] = {.lex_state = 286},
  [220] = {.lex_state = 286},
  [221] = {.lex_state = 286},
  [222] = {.lex_state = 286},
  [223] = {.lex_state = 499},
  [224] = {.lex_state = 491},
  [225] = {.lex_state = 500},
  [226] = {.lex_state = 286},
  [227] = {.lex_state = 286},
  [228] = {.lex_state = 286},
  [229] = {.lex_state = 441},
  [230] = {.lex_state = 286},
  [231] = {.lex_state = 286},
  [232] = {.lex_state = 441},
  [233] = {.lex_state = 441},
  [234] = {.lex_state = 441},
  [235] = {.lex_state = 441},
  [236] = {.lex_state = 441},
  [237] = {.lex_state = 441},
  [238] = {.lex_state = 442},
  [239] = {.lex_state = 286},
  [240] = {.lex_state = 474},
  [241] = {.lex_state = 441},
  [242] = {.lex_state = 442},
  [243] = {.lex_state = 286},
  [244] = {.lex_state = 286},
  [245] = {.lex_state = 286},
  [246] = {.lex_state = 286},
  [247] = {.lex_state = 286},
  [248] = {.lex_state = 491},
  [249] = {.lex_state = 492},
  [250] = {.lex_state = 463},
  [251] = {.lex_state = 286},
  [252] = {.lex_state = 286},
  [253] = {.lex_state = 286},
  [254] = {.lex_state = 463},
  [255] = {.lex_state = 474},
  [256] = {.lex_state = 501},
  [257] = {.lex_state = 286},
  [258] = {.lex_state = 463},
  [259] = {.lex_state = 286},
  [260] = {.lex_state = 286},
  [261] = {.lex_state = 474},
  [262] = {.lex_state = 491},
  [263] = {.lex_state = 475},
  [264] = {.lex_state = 286},
  [265] = {.lex_state = 475},
  [266] = {.lex_state = 475},
  [267] = {.lex_state = 475},
  [268] = {.lex_state = 286},
  [269] = {.lex_state = 286},
  [270] = {.lex_state = 286},
  [271] = {.lex_state = 286},
  [272] = {.lex_state = 441},
  [273] = {.lex_state = 286},
  [274] = {.lex_state = 286},
  [275] = {.lex_state = 441},
  [276] = {.lex_state = 441},
  [277] = {.lex_state = 441},
  [278] = {.lex_state = 441},
  [279] = {.lex_state = 442},
  [280] = {.lex_state = 474},
  [281] = {.lex_state = 286},
  [282] = {.lex_state = 286},
  [283] = {.lex_state = 286},
  [284] = {.lex_state = 286},
  [285] = {.lex_state = 286},
  [286] = {.lex_state = 491},
  [287] = {.lex_state = 486},
  [288] = {.lex_state = 286},
  [289] = {.lex_state = 486},
  [290] = {.lex_state = 486},
  [291] = {.lex_state = 486},
  [292] = {.lex_state = 286},
  [293] = {.lex_state = 502},
  [294] = {.lex_state = 286},
  [295] = {.lex_state = 286},
  [296] = {.lex_state = 441},
  [297] = {.lex_state = 286},
  [298] = {.lex_state = 286},
  [299] = {.lex_state = 441},
  [300] = {.lex_state = 441},
  [301] = {.lex_state = 286},
  [302] = {.lex_state = 474},
  [303] = {.lex_state = 474},
  [304] = {.lex_state = 441},
  [305] = {.lex_state = 286},
  [306] = {.lex_state = 286},
  [307] = {.lex_state = 474},
  [308] = {.lex_state = 286},
  [309] = {.lex_state = 494},
  [310] = {.lex_state = 494},
  [311] = {.lex_state = 441},
  [312] = {.lex_state = 494},
  [313] = {.lex_state = 286},
  [314] = {.lex_state = 286},
  [315] = {.lex_state = 286},
  [316] = {.lex_state = 463},
  [317] = {.lex_state = 475},
  [318] = {.lex_state = 486},
  [319] = {.lex_state = 286},
  [320] = {.lex_state = 286},
  [321] = {.lex_state = 286},
  [322] = {.lex_state = 286},
  [323] = {.lex_state = 286},
  [324] = {.lex_state = 286},
  [325] = {.lex_state = 286},
  [326] = {.lex_state = 286},
  [327] = {.lex_state = 463},
  [328] = {.lex_state = 286},
  [329] = {.lex_state = 475},
  [330] = {.lex_state = 286},
  [331] = {.lex_state = 486},
  [332] = {.lex_state = 286},
  [333] = {.lex_state = 441},
  [334] = {.lex_state = 286},
  [335] = {.lex_state = 286},
  [336] = {.lex_state = 463},
  [337] = {.lex_state = 512},
  [338] = {.lex_state = 463},
  [339] = {.lex_state = 286},
  [340] = {.lex_state = 286},
  [341] = {.lex_state = 286},
  [342] = {.lex_state = 286},
  [343] = {.lex_state = 286},
  [344] = {.lex_state = 286},
  [345] = {.lex_state = 441},
  [346] = {.lex_state = 286},
  [347] = {.lex_state = 286},
  [348] = {.lex_state = 286},
  [349] = {.lex_state = 441},
  [350] = {.lex_state = 441},
  [351] = {.lex_state = 441},
  [352] = {.lex_state = 441},
  [353] = {.lex_state = 441},
  [354] = {.lex_state = 441},
  [355] = {.lex_state = 442},
  [356] = {.lex_state = 474},
  [357] = {.lex_state = 441},
  [358] = {.lex_state = 442},
  [359] = {.lex_state = 502},
  [360] = {.lex_state = 286},
  [361] = {.lex_state = 441},
  [362] = {.lex_state = 286},
  [363] = {.lex_state = 286},
  [364] = {.lex_state = 474},
  [365] = {.lex_state = 501},
  [366] = {.lex_state = 286},
  [367] = {.lex_state = 475},
  [368] = {.lex_state = 475},
  [369] = {.lex_state = 286},
  [370] = {.lex_state = 474},
  [371] = {.lex_state = 286},
  [372] = {.lex_state = 463},
  [373] = {.lex_state = 286},
  [374] = {.lex_state = 475},
  [375] = {.lex_state = 286},
  [376] = {.lex_state = 486},
  [377] = {.lex_state = 286},
  [378] = {.lex_state = 441},
  [379] = {.lex_state = 286},
  [380] = {.lex_state = 286},
  [381] = {.lex_state = 486},
  [382] = {.lex_state = 486},
  [383] = {.lex_state = 286},
  [384] = {.lex_state = 286},
  [385] = {.lex_state = 286},
  [386] = {.lex_state = 286},
  [387] = {.lex_state = 441},
  [388] = {.lex_state = 286},
  [389] = {.lex_state = 441},
  [390] = {.lex_state = 441},
  [391] = {.lex_state = 441},
  [392] = {.lex_state = 441},
  [393] = {.lex_state = 442},
  [394] = {.lex_state = 474},
  [395] = {.lex_state = 286},
  [396] = {.lex_state = 441},
  [397] = {.lex_state = 502},
  [398] = {.lex_state = 515},
  [399] = {.lex_state = 534},
  [400] = {.lex_state = 515},
  [401] = {.lex_state = 515},
  [402] = {.lex_state = 515},
  [403] = {.lex_state = 502},
  [404] = {.lex_state = 539},
  [405] = {.lex_state = 543},
  [406] = {.lex_state = 515},
  [407] = {.lex_state = 515},
  [408] = {.lex_state = 515},
  [409] = {.lex_state = 286},
  [410] = {.lex_state = 286},
  [411] = {.lex_state = 286},
  [412] = {.lex_state = 441},
  [413] = {.lex_state = 286},
  [414] = {.lex_state = 286},
  [415] = {.lex_state = 441},
  [416] = {.lex_state = 286},
  [417] = {.lex_state = 286},
  [418] = {.lex_state = 286},
  [419] = {.lex_state = 550},
  [420] = {.lex_state = 286},
  [421] = {.lex_state = 286},
  [422] = {.lex_state = 286},
  [423] = {.lex_state = 441},
  [424] = {.lex_state = 474},
  [425] = {.lex_state = 474},
  [426] = {.lex_state = 286},
  [427] = {.lex_state = 494},
  [428] = {.lex_state = 463},
  [429] = {.lex_state = 475},
  [430] = {.lex_state = 486},
  [431] = {.lex_state = 286},
  [432] = {.lex_state = 441},
  [433] = {.lex_state = 286},
  [434] = {.lex_state = 463},
  [435] = {.lex_state = 475},
  [436] = {.lex_state = 486},
  [437] = {.lex_state = 286},
  [438] = {.lex_state = 286},
  [439] = {.lex_state = 463},
  [440] = {.lex_state = 463},
  [441] = {.lex_state = 463},
  [442] = {.lex_state = 463},
  [443] = {.lex_state = 475},
  [444] = {.lex_state = 475},
  [445] = {.lex_state = 463},
  [446] = {.lex_state = 486},
  [447] = {.lex_state = 486},
  [448] = {.lex_state = 286},
  [449] = {.lex_state = 286},
  [450] = {.lex_state = 286},
  [451] = {.lex_state = 512},
  [452] = {.lex_state = 463},
  [453] = {.lex_state = 502},
  [454] = {.lex_state = 551},
  [455] = {.lex_state = 502},
  [456] = {.lex_state = 515},
  [457] = {.lex_state = 512},
  [458] = {.lex_state = 512},
  [459] = {.lex_state = 512},
  [460] = {.lex_state = 463},
  [461] = {.lex_state = 286},
  [462] = {.lex_state = 286},
  [463] = {.lex_state = 286},
  [464] = {.lex_state = 286},
  [465] = {.lex_state = 286},
  [466] = {.lex_state = 441},
  [467] = {.lex_state = 286},
  [468] = {.lex_state = 286},
  [469] = {.lex_state = 463},
  [470] = {.lex_state = 463},
  [471] = {.lex_state = 286},
  [472] = {.lex_state = 286},
  [473] = {.lex_state = 286},
  [474] = {.lex_state = 286},
  [475] = {.lex_state = 286},
  [476] = {.lex_state = 286},
  [477] = {.lex_state = 441},
  [478] = {.lex_state = 286},
  [479] = {.lex_state = 441},
  [480] = {.lex_state = 441},
  [481] = {.lex_state = 502},
  [482] = {.lex_state = 515},
  [483] = {.lex_state = 286},
  [484] = {.lex_state = 441},
  [485] = {.lex_state = 286},
  [486] = {.lex_state = 475},
  [487] = {.lex_state = 286},
  [488] = {.lex_state = 486},
  [489] = {.lex_state = 463},
  [490] = {.lex_state = 463},
  [491] = {.lex_state = 486},
  [492] = {.lex_state = 475},
  [493] = {.lex_state = 475},
  [494] = {.lex_state = 486},
  [495] = {.lex_state = 486},
  [496] = {.lex_state = 486},
  [497] = {.lex_state = 286},
  [498] = {.lex_state = 286},
  [499] = {.lex_state = 286},
  [500] = {.lex_state = 286},
  [501] = {.lex_state = 286},
  [502] = {.lex_state = 286},
  [503] = {.lex_state = 441},
  [504] = {.lex_state = 286},
  [505] = {.lex_state = 286},
  [506] = {.lex_state = 486},
  [507] = {.lex_state = 286},
  [508] = {.lex_state = 286},
  [509] = {.lex_state = 286},
  [510] = {.lex_state = 286},
  [511] = {.lex_state = 441},
  [512] = {.lex_state = 286},
  [513] = {.lex_state = 515},
  [514] = {.lex_state = 286},
  [515] = {.lex_state = 286},
  [516] = {.lex_state = 286},
  [517] = {.lex_state = 515},
  [518] = {.lex_state = 502},
  [519] = {.lex_state = 515},
  [520] = {.lex_state = 515},
  [521] = {.lex_state = 515},
  [522] = {.lex_state = 539},
  [523] = {.lex_state = 539},
  [524] = {.lex_state = 539},
  [525] = {.lex_state = 515},
  [526] = {.lex_state = 539},
  [527] = {.lex_state = 539},
  [528] = {.lex_state = 286},
  [529] = {.lex_state = 502},
  [530] = {.lex_state = 502},
  [531] = {.lex_state = 502},
  [532] = {.lex_state = 502},
  [533] = {.lex_state = 502},
  [534] = {.lex_state = 502},
  [535] = {.lex_state = 502},
  [536] = {.lex_state = 502},
  [537] = {.lex_state = 502},
  [538] = {.lex_state = 502},
  [539] = {.lex_state = 286},
  [540] = {.lex_state = 286},
  [541] = {.lex_state = 286},
  [542] = {.lex_state = 286},
  [543] = {.lex_state = 286},
  [544] = {.lex_state = 286},
  [545] = {.lex_state = 441},
  [546] = {.lex_state = 494},
  [547] = {.lex_state = 441},
  [548] = {.lex_state = 286},
  [549] = {.lex_state = 550},
  [550] = {.lex_state = 550},
  [551] = {.lex_state = 550},
  [552] = {.lex_state = 550},
  [553] = {.lex_state = 286},
  [554] = {.lex_state = 286},
  [555] = {.lex_state = 441},
  [556] = {.lex_state = 441},
  [557] = {.lex_state = 502},
  [558] = {.lex_state = 286},
  [559] = {.lex_state = 286},
  [560] = {.lex_state = 286},
  [561] = {.lex_state = 286},
  [562] = {.lex_state = 286},
  [563] = {.lex_state = 463},
  [564] = {.lex_state = 475},
  [565] = {.lex_state = 486},
  [566] = {.lex_state = 441},
  [567] = {.lex_state = 286},
  [568] = {.lex_state = 463},
  [569] = {.lex_state = 463},
  [570] = {.lex_state = 463},
  [571] = {.lex_state = 475},
  [572] = {.lex_state = 463},
  [573] = {.lex_state = 486},
  [574] = {.lex_state = 463},
  [575] = {.lex_state = 286},
  [576] = {.lex_state = 441},
  [577] = {.lex_state = 463},
  [578] = {.lex_state = 502},
  [579] = {.lex_state = 286},
  [580] = {.lex_state = 515},
  [581] = {.lex_state = 512},
  [582] = {.lex_state = 502},
  [583] = {.lex_state = 502},
  [584] = {.lex_state = 502},
  [585] = {.lex_state = 502},
  [586] = {.lex_state = 502},
  [587] = {.lex_state = 502},
  [588] = {.lex_state = 502},
  [589] = {.lex_state = 502},
  [590] = {.lex_state = 502},
  [591] = {.lex_state = 502},
  [592] = {.lex_state = 463},
  [593] = {.lex_state = 512},
  [594] = {.lex_state = 463},
  [595] = {.lex_state = 286},
  [596] = {.lex_state = 463},
  [597] = {.lex_state = 475},
  [598] = {.lex_state = 486},
  [599] = {.lex_state = 286},
  [600] = {.lex_state = 286},
  [601] = {.lex_state = 286},
  [602] = {.lex_state = 463},
  [603] = {.lex_state = 286},
  [604] = {.lex_state = 286},
  [605] = {.lex_state = 286},
  [606] = {.lex_state = 286},
  [607] = {.lex_state = 286},
  [608] = {.lex_state = 286},
  [609] = {.lex_state = 463},
  [610] = {.lex_state = 286},
  [611] = {.lex_state = 286},
  [612] = {.lex_state = 502},
  [613] = {.lex_state = 502},
  [614] = {.lex_state = 502},
  [615] = {.lex_state = 502},
  [616] = {.lex_state = 502},
  [617] = {.lex_state = 502},
  [618] = {.lex_state = 502},
  [619] = {.lex_state = 502},
  [620] = {.lex_state = 502},
  [621] = {.lex_state = 502},
  [622] = {.lex_state = 286},
  [623] = {.lex_state = 475},
  [624] = {.lex_state = 486},
  [625] = {.lex_state = 463},
  [626] = {.lex_state = 486},
  [627] = {.lex_state = 475},
  [628] = {.lex_state = 486},
  [629] = {.lex_state = 486},
  [630] = {.lex_state = 486},
  [631] = {.lex_state = 286},
  [632] = {.lex_state = 441},
  [633] = {.lex_state = 486},
  [634] = {.lex_state = 463},
  [635] = {.lex_state = 475},
  [636] = {.lex_state = 486},
  [637] = {.lex_state = 286},
  [638] = {.lex_state = 286},
  [639] = {.lex_state = 286},
  [640] = {.lex_state = 286},
  [641] = {.lex_state = 286},
  [642] = {.lex_state = 286},
  [643] = {.lex_state = 286},
  [644] = {.lex_state = 286},
  [645] = {.lex_state = 486},
  [646] = {.lex_state = 515},
  [647] = {.lex_state = 515},
  [648] = {.lex_state = 515},
  [649] = {.lex_state = 515},
  [650] = {.lex_state = 515},
  [651] = {.lex_state = 539},
  [652] = {.lex_state = 515},
  [653] = {.lex_state = 502},
  [654] = {.lex_state = 515},
  [655] = {.lex_state = 515},
  [656] = {.lex_state = 515},
  [657] = {.lex_state = 515},
  [658] = {.lex_state = 515},
  [659] = {.lex_state = 515},
  [660] = {.lex_state = 515},
  [661] = {.lex_state = 515},
  [662] = {.lex_state = 515},
  [663] = {.lex_state = 515},
  [664] = {.lex_state = 286},
  [665] = {.lex_state = 286},
  [666] = {.lex_state = 286},
  [667] = {.lex_state = 441},
  [668] = {.lex_state = 286},
  [669] = {.lex_state = 286},
  [670] = {.lex_state = 550},
  [671] = {.lex_state = 286},
  [672] = {.lex_state = 286},
  [673] = {.lex_state = 286},
  [674] = {.lex_state = 286},
  [675] = {.lex_state = 502},
  [676] = {.lex_state = 515},
  [677] = {.lex_state = 286},
  [678] = {.lex_state = 286},
  [679] = {.lex_state = 286},
  [680] = {.lex_state = 286},
  [681] = {.lex_state = 286},
  [682] = {.lex_state = 463},
  [683] = {.lex_state = 463},
  [684] = {.lex_state = 463},
  [685] = {.lex_state = 463},
  [686] = {.lex_state = 463},
  [687] = {.lex_state = 286},
  [688] = {.lex_state = 515},
  [689] = {.lex_state = 512},
  [690] = {.lex_state = 512},
  [691] = {.lex_state = 515},
  [692] = {.lex_state = 515},
  [693] = {.lex_state = 515},
  [694] = {.lex_state = 515},
  [695] = {.lex_state = 515},
  [696] = {.lex_state = 515},
  [697] = {.lex_state = 515},
  [698] = {.lex_state = 515},
  [699] = {.lex_state = 515},
  [700] = {.lex_state = 463},
  [701] = {.lex_state = 463},
  [702] = {.lex_state = 475},
  [703] = {.lex_state = 486},
  [704] = {.lex_state = 286},
  [705] = {.lex_state = 441},
  [706] = {.lex_state = 463},
  [707] = {.lex_state = 286},
  [708] = {.lex_state = 463},
  [709] = {.lex_state = 475},
  [710] = {.lex_state = 486},
  [711] = {.lex_state = 286},
  [712] = {.lex_state = 286},
  [713] = {.lex_state = 463},
  [714] = {.lex_state = 286},
  [715] = {.lex_state = 515},
  [716] = {.lex_state = 515},
  [717] = {.lex_state = 515},
  [718] = {.lex_state = 515},
  [719] = {.lex_state = 515},
  [720] = {.lex_state = 515},
  [721] = {.lex_state = 515},
  [722] = {.lex_state = 515},
  [723] = {.lex_state = 515},
  [724] = {.lex_state = 486},
  [725] = {.lex_state = 486},
  [726] = {.lex_state = 486},
  [727] = {.lex_state = 486},
  [728] = {.lex_state = 486},
  [729] = {.lex_state = 286},
  [730] = {.lex_state = 463},
  [731] = {.lex_state = 475},
  [732] = {.lex_state = 486},
  [733] = {.lex_state = 286},
  [734] = {.lex_state = 441},
  [735] = {.lex_state = 486},
  [736] = {.lex_state = 463},
  [737] = {.lex_state = 475},
  [738] = {.lex_state = 486},
  [739] = {.lex_state = 286},
  [740] = {.lex_state = 286},
  [741] = {.lex_state = 515},
  [742] = {.lex_state = 515},
  [743] = {.lex_state = 502},
  [744] = {.lex_state = 502},
  [745] = {.lex_state = 502},
  [746] = {.lex_state = 502},
  [747] = {.lex_state = 502},
  [748] = {.lex_state = 502},
  [749] = {.lex_state = 502},
  [750] = {.lex_state = 502},
  [751] = {.lex_state = 502},
  [752] = {.lex_state = 502},
  [753] = {.lex_state = 502},
  [754] = {.lex_state = 286},
  [755] = {.lex_state = 286},
  [756] = {.lex_state = 441},
  [757] = {.lex_state = 550},
  [758] = {.lex_state = 286},
  [759] = {.lex_state = 502},
  [760] = {.lex_state = 502},
  [761] = {.lex_state = 502},
  [762] = {.lex_state = 502},
  [763] = {.lex_state = 502},
  [764] = {.lex_state = 502},
  [765] = {.lex_state = 502},
  [766] = {.lex_state = 502},
  [767] = {.lex_state = 502},
  [768] = {.lex_state = 502},
  [769] = {.lex_state = 286},
  [770] = {.lex_state = 286},
  [771] = {.lex_state = 463},
  [772] = {.lex_state = 463},
  [773] = {.lex_state = 286},
  [774] = {.lex_state = 502},
  [775] = {.lex_state = 463},
  [776] = {.lex_state = 463},
  [777] = {.lex_state = 463},
  [778] = {.lex_state = 286},
  [779] = {.lex_state = 463},
  [780] = {.lex_state = 463},
  [781] = {.lex_state = 475},
  [782] = {.lex_state = 486},
  [783] = {.lex_state = 441},
  [784] = {.lex_state = 463},
  [785] = {.lex_state = 286},
  [786] = {.lex_state = 502},
  [787] = {.lex_state = 486},
  [788] = {.lex_state = 486},
  [789] = {.lex_state = 286},
  [790] = {.lex_state = 486},
  [791] = {.lex_state = 486},
  [792] = {.lex_state = 486},
  [793] = {.lex_state = 286},
  [794] = {.lex_state = 463},
  [795] = {.lex_state = 475},
  [796] = {.lex_state = 486},
  [797] = {.lex_state = 441},
  [798] = {.lex_state = 486},
  [799] = {.lex_state = 515},
  [800] = {.lex_state = 515},
  [801] = {.lex_state = 515},
  [802] = {.lex_state = 515},
  [803] = {.lex_state = 515},
  [804] = {.lex_state = 515},
  [805] = {.lex_state = 515},
  [806] = {.lex_state = 515},
  [807] = {.lex_state = 515},
  [808] = {.lex_state = 515},
  [809] = {.lex_state = 515},
  [810] = {.lex_state = 515},
  [811] = {.lex_state = 515},
  [812] = {.lex_state = 515},
  [813] = {.lex_state = 515},
  [814] = {.lex_state = 515},
  [815] = {.lex_state = 515},
  [816] = {.lex_state = 515},
  [817] = {.lex_state = 515},
  [818] = {.lex_state = 515},
  [819] = {.lex_state = 286},
  [820] = {.lex_state = 286},
  [821] = {.lex_state = 463},
  [822] = {.lex_state = 463},
  [823] = {.lex_state = 515},
  [824] = {.lex_state = 286},
  [825] = {.lex_state = 463},
  [826] = {.lex_state = 463},
  [827] = {.lex_state = 463},
  [828] = {.lex_state = 286},
  [829] = {.lex_state = 463},
  [830] = {.lex_state = 515},
  [831] = {.lex_state = 486},
  [832] = {.lex_state = 486},
  [833] = {.lex_state = 286},
  [834] = {.lex_state = 486},
  [835] = {.lex_state = 486},
  [836] = {.lex_state = 486},
  [837] = {.lex_state = 286},
  [838] = {.lex_state = 502},
  [839] = {.lex_state = 502},
  [840] = {.lex_state = 286},
  [841] = {.lex_state = 463},
  [842] = {.lex_state = 463},
  [843] = {.lex_state = 286},
  [844] = {.lex_state = 486},
  [845] = {.lex_state = 486},
  [846] = {.lex_state = 286},
  [847] = {.lex_state = 515},
  [848] = {.lex_state = 515},
  [849] = {.lex_state = 463},
  [850] = {.lex_state = 463},
  [851] = {.lex_state = 486},
  [852] = {.lex_state = 486},
  [853] = {.lex_state = 463},
  [854] = {.lex_state = 486},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_unsafe] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(3),
    [anon_sym_sealed] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(3),
    [anon_sym_internal] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(3),
    [anon_sym_sbyte] = ACTIONS(3),
    [anon_sym_byte] = ACTIONS(3),
    [anon_sym_short] = ACTIONS(3),
    [anon_sym_ushort] = ACTIONS(3),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_uint] = ACTIONS(3),
    [anon_sym_long] = ACTIONS(3),
    [anon_sym_ulong] = ACTIONS(3),
    [anon_sym_char] = ACTIONS(3),
    [anon_sym_delegate] = ACTIONS(3),
    [sym_void_keyword] = ACTIONS(3),
    [anon_sym_ref] = ACTIONS(3),
    [anon_sym_out] = ACTIONS(3),
    [anon_sym_this] = ACTIONS(3),
    [sym_params_keyword] = ACTIONS(3),
    [anon_sym_assembly] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(3),
    [sym_const_keyword] = ACTIONS(3),
    [anon_sym_readonly] = ACTIONS(3),
    [anon_sym_volatile] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(3),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__hexadecimal_escape_sequence] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym__integer_type_suffix] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(3),
    [sym__real_type_suffix] = ACTIONS(3),
    [sym__exponent_part] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(3),
    [anon_sym_decimal] = ACTIONS(3),
    [anon_sym_double] = ACTIONS(3),
    [anon_sym_float] = ACTIONS(3),
    [anon_sym_object] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_global] = ACTIONS(3),
    [sym_identifier_name] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(3),
    [anon_sym_return] = ACTIONS(3),
  },
  [1] = {
    [sym_compilation_unit] = STATE(15),
    [sym__type_declaration] = STATE(16),
    [sym_extern_alias_directive] = STATE(17),
    [sym_using_directive] = STATE(18),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat1] = STATE(31),
    [aux_sym_compilation_unit_repeat2] = STATE(32),
    [aux_sym_compilation_unit_repeat3] = STATE(33),
    [aux_sym_compilation_unit_repeat4] = STATE(34),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_1] = ACTIONS(12),
    [anon_sym_extern] = ACTIONS(14),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [2] = {
    [sym__type_declaration] = STATE(16),
    [sym_extern_alias_directive] = STATE(17),
    [sym_using_directive] = STATE(18),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat1] = STATE(36),
    [aux_sym_compilation_unit_repeat2] = STATE(37),
    [aux_sym_compilation_unit_repeat3] = STATE(38),
    [aux_sym_compilation_unit_repeat4] = STATE(39),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_extern] = ACTIONS(14),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [3] = {
    [anon_sym_alias] = ACTIONS(42),
    [sym_comment] = ACTIONS(38),
  },
  [4] = {
    [sym_qualified_name] = STATE(44),
    [sym_alias_qualified_name] = STATE(45),
    [sym_name_equals] = STATE(46),
    [sym_static] = STATE(46),
    [anon_sym_static] = ACTIONS(44),
    [sym_global] = ACTIONS(46),
    [sym_identifier_name] = ACTIONS(48),
    [sym_comment] = ACTIONS(38),
  },
  [5] = {
    [sym_qualified_name] = STATE(47),
    [sym_alias_qualified_name] = STATE(45),
    [sym_global] = ACTIONS(46),
    [sym_identifier_name] = ACTIONS(50),
    [sym_comment] = ACTIONS(38),
  },
  [6] = {
    [sym_identifier_name] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [7] = {
    [sym__class_modifiers] = STATE(50),
    [sym__struct_modifiers] = STATE(51),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_unsafe] = ACTIONS(56),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(56),
    [anon_sym_public] = ACTIONS(56),
    [anon_sym_protected] = ACTIONS(56),
    [anon_sym_internal] = ACTIONS(56),
    [anon_sym_private] = ACTIONS(56),
    [anon_sym_struct] = ACTIONS(58),
    [anon_sym_delegate] = ACTIONS(60),
    [sym_comment] = ACTIONS(38),
  },
  [8] = {
    [sym__class_modifiers] = STATE(50),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_unsafe] = ACTIONS(24),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [sym_comment] = ACTIONS(38),
  },
  [9] = {
    [sym__class_modifiers] = STATE(50),
    [sym__interface_modifiers] = STATE(53),
    [sym__struct_modifiers] = STATE(51),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_unsafe] = ACTIONS(56),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(62),
    [anon_sym_public] = ACTIONS(62),
    [anon_sym_protected] = ACTIONS(62),
    [anon_sym_internal] = ACTIONS(62),
    [anon_sym_private] = ACTIONS(62),
    [anon_sym_interface] = ACTIONS(64),
    [anon_sym_struct] = ACTIONS(58),
    [anon_sym_enum] = ACTIONS(66),
    [anon_sym_delegate] = ACTIONS(60),
    [sym_comment] = ACTIONS(38),
  },
  [10] = {
    [sym_identifier_name] = ACTIONS(68),
    [sym_comment] = ACTIONS(38),
  },
  [11] = {
    [sym_identifier_name] = ACTIONS(70),
    [sym_comment] = ACTIONS(38),
  },
  [12] = {
    [sym_identifier_name] = ACTIONS(72),
    [sym_comment] = ACTIONS(38),
  },
  [13] = {
    [sym_return_type] = STATE(60),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [14] = {
    [sym_attribute_list] = STATE(64),
    [sym_attribute] = STATE(65),
    [anon_sym_assembly] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [sym_identifier_name] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(38),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_namespace] = ACTIONS(86),
    [anon_sym_class] = ACTIONS(86),
    [anon_sym_unsafe] = ACTIONS(86),
    [anon_sym_abstract] = ACTIONS(86),
    [anon_sym_sealed] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(86),
    [anon_sym_new] = ACTIONS(86),
    [anon_sym_public] = ACTIONS(86),
    [anon_sym_protected] = ACTIONS(86),
    [anon_sym_internal] = ACTIONS(86),
    [anon_sym_private] = ACTIONS(86),
    [anon_sym_interface] = ACTIONS(86),
    [anon_sym_struct] = ACTIONS(86),
    [anon_sym_enum] = ACTIONS(86),
    [anon_sym_delegate] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [sym_comment] = ACTIONS(38),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_extern] = ACTIONS(88),
    [anon_sym_using] = ACTIONS(88),
    [anon_sym_namespace] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(88),
    [anon_sym_unsafe] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_sealed] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_new] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_internal] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_interface] = ACTIONS(88),
    [anon_sym_struct] = ACTIONS(88),
    [anon_sym_enum] = ACTIONS(88),
    [anon_sym_delegate] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_using] = ACTIONS(90),
    [anon_sym_namespace] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_unsafe] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_sealed] = ACTIONS(90),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_new] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_internal] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_interface] = ACTIONS(90),
    [anon_sym_struct] = ACTIONS(90),
    [anon_sym_enum] = ACTIONS(90),
    [anon_sym_delegate] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_comment] = ACTIONS(38),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_using] = ACTIONS(92),
    [anon_sym_namespace] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_class] = ACTIONS(92),
    [anon_sym_unsafe] = ACTIONS(92),
    [anon_sym_abstract] = ACTIONS(92),
    [anon_sym_sealed] = ACTIONS(92),
    [anon_sym_static] = ACTIONS(92),
    [anon_sym_new] = ACTIONS(92),
    [anon_sym_public] = ACTIONS(92),
    [anon_sym_protected] = ACTIONS(92),
    [anon_sym_internal] = ACTIONS(92),
    [anon_sym_private] = ACTIONS(92),
    [anon_sym_interface] = ACTIONS(92),
    [anon_sym_struct] = ACTIONS(92),
    [anon_sym_enum] = ACTIONS(92),
    [anon_sym_delegate] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_comment] = ACTIONS(38),
  },
  [20] = {
    [anon_sym_class] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [21] = {
    [anon_sym_class] = ACTIONS(96),
    [sym_comment] = ACTIONS(38),
  },
  [22] = {
    [anon_sym_interface] = ACTIONS(98),
    [sym_comment] = ACTIONS(38),
  },
  [23] = {
    [anon_sym_interface] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
  },
  [24] = {
    [anon_sym_struct] = ACTIONS(102),
    [sym_comment] = ACTIONS(38),
  },
  [25] = {
    [anon_sym_struct] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [26] = {
    [anon_sym_enum] = ACTIONS(106),
    [sym_comment] = ACTIONS(38),
  },
  [27] = {
    [anon_sym_delegate] = ACTIONS(108),
    [sym_comment] = ACTIONS(38),
  },
  [28] = {
    [sym_class_modifiers] = STATE(71),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_modifiers] = STATE(72),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_modifiers] = STATE(73),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_modifiers] = STATE(74),
    [sym_delegate_modifier] = STATE(75),
    [anon_sym_class] = ACTIONS(94),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(98),
    [anon_sym_struct] = ACTIONS(102),
    [anon_sym_enum] = ACTIONS(106),
    [anon_sym_delegate] = ACTIONS(108),
    [sym_comment] = ACTIONS(38),
  },
  [29] = {
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_unsafe] = ACTIONS(110),
    [anon_sym_abstract] = ACTIONS(110),
    [anon_sym_sealed] = ACTIONS(110),
    [anon_sym_static] = ACTIONS(110),
    [anon_sym_new] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_protected] = ACTIONS(110),
    [anon_sym_internal] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_interface] = ACTIONS(110),
    [anon_sym_struct] = ACTIONS(110),
    [anon_sym_enum] = ACTIONS(110),
    [anon_sym_sbyte] = ACTIONS(110),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_short] = ACTIONS(110),
    [anon_sym_ushort] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_uint] = ACTIONS(110),
    [anon_sym_long] = ACTIONS(110),
    [anon_sym_ulong] = ACTIONS(110),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_delegate] = ACTIONS(110),
    [sym_void_keyword] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_const_keyword] = ACTIONS(110),
    [anon_sym_readonly] = ACTIONS(110),
    [anon_sym_volatile] = ACTIONS(110),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_decimal] = ACTIONS(110),
    [anon_sym_double] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_object] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [sym_identifier_name] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(110),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_namespace] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_unsafe] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_sealed] = ACTIONS(116),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_new] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_internal] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_interface] = ACTIONS(116),
    [anon_sym_struct] = ACTIONS(116),
    [anon_sym_enum] = ACTIONS(116),
    [anon_sym_delegate] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(38),
  },
  [31] = {
    [sym__type_declaration] = STATE(16),
    [sym_extern_alias_directive] = STATE(76),
    [sym_using_directive] = STATE(18),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat2] = STATE(37),
    [aux_sym_compilation_unit_repeat3] = STATE(38),
    [aux_sym_compilation_unit_repeat4] = STATE(39),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_extern] = ACTIONS(14),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [32] = {
    [sym__type_declaration] = STATE(16),
    [sym_using_directive] = STATE(77),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat3] = STATE(38),
    [aux_sym_compilation_unit_repeat4] = STATE(39),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [33] = {
    [sym__type_declaration] = STATE(16),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(78),
    [aux_sym_compilation_unit_repeat4] = STATE(39),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [34] = {
    [sym__type_declaration] = STATE(80),
    [sym_namespace_declaration] = STATE(80),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [35] = {
    [sym__attribute_section] = STATE(81),
    [anon_sym_class] = ACTIONS(120),
    [anon_sym_unsafe] = ACTIONS(120),
    [anon_sym_abstract] = ACTIONS(120),
    [anon_sym_sealed] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(120),
    [anon_sym_new] = ACTIONS(120),
    [anon_sym_public] = ACTIONS(120),
    [anon_sym_protected] = ACTIONS(120),
    [anon_sym_internal] = ACTIONS(120),
    [anon_sym_private] = ACTIONS(120),
    [anon_sym_interface] = ACTIONS(120),
    [anon_sym_struct] = ACTIONS(120),
    [anon_sym_enum] = ACTIONS(120),
    [anon_sym_sbyte] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(120),
    [anon_sym_short] = ACTIONS(120),
    [anon_sym_ushort] = ACTIONS(120),
    [anon_sym_int] = ACTIONS(120),
    [anon_sym_uint] = ACTIONS(120),
    [anon_sym_long] = ACTIONS(120),
    [anon_sym_ulong] = ACTIONS(120),
    [anon_sym_char] = ACTIONS(120),
    [anon_sym_delegate] = ACTIONS(120),
    [sym_void_keyword] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(120),
    [anon_sym_readonly] = ACTIONS(120),
    [anon_sym_volatile] = ACTIONS(120),
    [anon_sym_bool] = ACTIONS(120),
    [anon_sym_decimal] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_object] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(120),
  },
  [36] = {
    [sym__type_declaration] = STATE(16),
    [sym_extern_alias_directive] = STATE(76),
    [sym_using_directive] = STATE(18),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat2] = STATE(82),
    [aux_sym_compilation_unit_repeat3] = STATE(83),
    [aux_sym_compilation_unit_repeat4] = STATE(84),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_extern] = ACTIONS(14),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [37] = {
    [sym__type_declaration] = STATE(16),
    [sym_using_directive] = STATE(77),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat3] = STATE(83),
    [aux_sym_compilation_unit_repeat4] = STATE(84),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [38] = {
    [sym__type_declaration] = STATE(16),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(78),
    [aux_sym_compilation_unit_repeat4] = STATE(84),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [39] = {
    [sym__type_declaration] = STATE(80),
    [sym_namespace_declaration] = STATE(80),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [40] = {
    [sym_identifier_name] = ACTIONS(126),
    [sym_comment] = ACTIONS(38),
  },
  [41] = {
    [sym_global] = ACTIONS(128),
    [sym_identifier_name] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [42] = {
    [anon_sym_COLON_COLON] = ACTIONS(132),
    [sym_comment] = ACTIONS(38),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [45] = {
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [46] = {
    [sym_qualified_name] = STATE(90),
    [sym_alias_qualified_name] = STATE(45),
    [sym_global] = ACTIONS(46),
    [sym_identifier_name] = ACTIONS(140),
    [sym_comment] = ACTIONS(38),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [48] = {
    [sym_type_parameter_list] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [49] = {
    [sym__class_modifiers] = STATE(50),
    [sym__struct_modifiers] = STATE(51),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_unsafe] = ACTIONS(56),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(56),
    [anon_sym_public] = ACTIONS(56),
    [anon_sym_protected] = ACTIONS(56),
    [anon_sym_internal] = ACTIONS(56),
    [anon_sym_private] = ACTIONS(56),
    [anon_sym_struct] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [50] = {
    [anon_sym_class] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [51] = {
    [anon_sym_struct] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [52] = {
    [sym__class_modifiers] = STATE(50),
    [sym__interface_modifiers] = STATE(53),
    [sym__struct_modifiers] = STATE(51),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_unsafe] = ACTIONS(56),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(62),
    [anon_sym_public] = ACTIONS(62),
    [anon_sym_protected] = ACTIONS(62),
    [anon_sym_internal] = ACTIONS(62),
    [anon_sym_private] = ACTIONS(62),
    [anon_sym_interface] = ACTIONS(64),
    [anon_sym_struct] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [53] = {
    [anon_sym_interface] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [54] = {
    [sym_type_parameter_list] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [55] = {
    [sym_type_parameter_list] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(160),
    [sym_comment] = ACTIONS(38),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [sym_identifier_name] = ACTIONS(164),
    [sym_comment] = ACTIONS(38),
  },
  [58] = {
    [sym_identifier_name] = ACTIONS(166),
    [sym_comment] = ACTIONS(38),
  },
  [59] = {
    [sym_type_parameter_list] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(168),
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [60] = {
    [sym_identifier_name] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [61] = {
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [62] = {
    [anon_sym_COLON] = ACTIONS(174),
    [sym_comment] = ACTIONS(38),
  },
  [63] = {
    [sym_attribute_argument_list] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(176),
    [sym_comment] = ACTIONS(38),
  },
  [64] = {
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_comment] = ACTIONS(38),
  },
  [65] = {
    [aux_sym_attribute_list_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [66] = {
    [sym_identifier_name] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
  },
  [67] = {
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(38),
  },
  [68] = {
    [sym_identifier_name] = ACTIONS(190),
    [sym_comment] = ACTIONS(38),
  },
  [69] = {
    [sym_identifier_name] = ACTIONS(192),
    [sym_comment] = ACTIONS(38),
  },
  [70] = {
    [sym_return_type] = STATE(113),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [71] = {
    [anon_sym_class] = ACTIONS(194),
    [sym_comment] = ACTIONS(38),
  },
  [72] = {
    [anon_sym_interface] = ACTIONS(196),
    [sym_comment] = ACTIONS(38),
  },
  [73] = {
    [anon_sym_struct] = ACTIONS(198),
    [sym_comment] = ACTIONS(38),
  },
  [74] = {
    [anon_sym_enum] = ACTIONS(200),
    [sym_comment] = ACTIONS(38),
  },
  [75] = {
    [anon_sym_delegate] = ACTIONS(202),
    [sym_comment] = ACTIONS(38),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_extern] = ACTIONS(204),
    [anon_sym_using] = ACTIONS(204),
    [anon_sym_namespace] = ACTIONS(204),
    [anon_sym_class] = ACTIONS(204),
    [anon_sym_unsafe] = ACTIONS(204),
    [anon_sym_abstract] = ACTIONS(204),
    [anon_sym_sealed] = ACTIONS(204),
    [anon_sym_static] = ACTIONS(204),
    [anon_sym_new] = ACTIONS(204),
    [anon_sym_public] = ACTIONS(204),
    [anon_sym_protected] = ACTIONS(204),
    [anon_sym_internal] = ACTIONS(204),
    [anon_sym_private] = ACTIONS(204),
    [anon_sym_interface] = ACTIONS(204),
    [anon_sym_struct] = ACTIONS(204),
    [anon_sym_enum] = ACTIONS(204),
    [anon_sym_delegate] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_using] = ACTIONS(206),
    [anon_sym_namespace] = ACTIONS(206),
    [anon_sym_class] = ACTIONS(206),
    [anon_sym_unsafe] = ACTIONS(206),
    [anon_sym_abstract] = ACTIONS(206),
    [anon_sym_sealed] = ACTIONS(206),
    [anon_sym_static] = ACTIONS(206),
    [anon_sym_new] = ACTIONS(206),
    [anon_sym_public] = ACTIONS(206),
    [anon_sym_protected] = ACTIONS(206),
    [anon_sym_internal] = ACTIONS(206),
    [anon_sym_private] = ACTIONS(206),
    [anon_sym_interface] = ACTIONS(206),
    [anon_sym_struct] = ACTIONS(206),
    [anon_sym_enum] = ACTIONS(206),
    [anon_sym_delegate] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [sym_comment] = ACTIONS(38),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_namespace] = ACTIONS(208),
    [anon_sym_class] = ACTIONS(208),
    [anon_sym_unsafe] = ACTIONS(208),
    [anon_sym_abstract] = ACTIONS(208),
    [anon_sym_sealed] = ACTIONS(208),
    [anon_sym_static] = ACTIONS(208),
    [anon_sym_new] = ACTIONS(208),
    [anon_sym_public] = ACTIONS(208),
    [anon_sym_protected] = ACTIONS(208),
    [anon_sym_internal] = ACTIONS(208),
    [anon_sym_private] = ACTIONS(208),
    [anon_sym_interface] = ACTIONS(208),
    [anon_sym_struct] = ACTIONS(208),
    [anon_sym_enum] = ACTIONS(208),
    [anon_sym_delegate] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_comment] = ACTIONS(38),
  },
  [79] = {
    [sym_attribute_list] = STATE(64),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_namespace] = ACTIONS(212),
    [anon_sym_class] = ACTIONS(212),
    [anon_sym_unsafe] = ACTIONS(212),
    [anon_sym_abstract] = ACTIONS(212),
    [anon_sym_sealed] = ACTIONS(212),
    [anon_sym_static] = ACTIONS(212),
    [anon_sym_new] = ACTIONS(212),
    [anon_sym_public] = ACTIONS(212),
    [anon_sym_protected] = ACTIONS(212),
    [anon_sym_internal] = ACTIONS(212),
    [anon_sym_private] = ACTIONS(212),
    [anon_sym_interface] = ACTIONS(212),
    [anon_sym_struct] = ACTIONS(212),
    [anon_sym_enum] = ACTIONS(212),
    [anon_sym_delegate] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [81] = {
    [anon_sym_class] = ACTIONS(214),
    [anon_sym_unsafe] = ACTIONS(214),
    [anon_sym_abstract] = ACTIONS(214),
    [anon_sym_sealed] = ACTIONS(214),
    [anon_sym_static] = ACTIONS(214),
    [anon_sym_new] = ACTIONS(214),
    [anon_sym_public] = ACTIONS(214),
    [anon_sym_protected] = ACTIONS(214),
    [anon_sym_internal] = ACTIONS(214),
    [anon_sym_private] = ACTIONS(214),
    [anon_sym_interface] = ACTIONS(214),
    [anon_sym_struct] = ACTIONS(214),
    [anon_sym_enum] = ACTIONS(214),
    [anon_sym_sbyte] = ACTIONS(214),
    [anon_sym_byte] = ACTIONS(214),
    [anon_sym_short] = ACTIONS(214),
    [anon_sym_ushort] = ACTIONS(214),
    [anon_sym_int] = ACTIONS(214),
    [anon_sym_uint] = ACTIONS(214),
    [anon_sym_long] = ACTIONS(214),
    [anon_sym_ulong] = ACTIONS(214),
    [anon_sym_char] = ACTIONS(214),
    [anon_sym_delegate] = ACTIONS(214),
    [sym_void_keyword] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_const_keyword] = ACTIONS(214),
    [anon_sym_readonly] = ACTIONS(214),
    [anon_sym_volatile] = ACTIONS(214),
    [anon_sym_bool] = ACTIONS(214),
    [anon_sym_decimal] = ACTIONS(214),
    [anon_sym_double] = ACTIONS(214),
    [anon_sym_float] = ACTIONS(214),
    [anon_sym_object] = ACTIONS(214),
    [anon_sym_string] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(218),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(214),
  },
  [82] = {
    [sym__type_declaration] = STATE(16),
    [sym_using_directive] = STATE(77),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(30),
    [aux_sym_compilation_unit_repeat3] = STATE(119),
    [aux_sym_compilation_unit_repeat4] = STATE(120),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [83] = {
    [sym__type_declaration] = STATE(16),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(78),
    [aux_sym_compilation_unit_repeat4] = STATE(120),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [84] = {
    [sym__type_declaration] = STATE(80),
    [sym_namespace_declaration] = STATE(80),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [85] = {
    [anon_sym_SEMI] = ACTIONS(222),
    [sym_comment] = ACTIONS(38),
  },
  [86] = {
    [sym_identifier_name] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_using] = ACTIONS(226),
    [anon_sym_namespace] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [anon_sym_class] = ACTIONS(226),
    [anon_sym_unsafe] = ACTIONS(226),
    [anon_sym_abstract] = ACTIONS(226),
    [anon_sym_sealed] = ACTIONS(226),
    [anon_sym_static] = ACTIONS(226),
    [anon_sym_new] = ACTIONS(226),
    [anon_sym_public] = ACTIONS(226),
    [anon_sym_protected] = ACTIONS(226),
    [anon_sym_internal] = ACTIONS(226),
    [anon_sym_private] = ACTIONS(226),
    [anon_sym_interface] = ACTIONS(226),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(226),
    [anon_sym_delegate] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [sym_comment] = ACTIONS(38),
  },
  [88] = {
    [sym_global] = ACTIONS(228),
    [sym_identifier_name] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [89] = {
    [sym_identifier_name] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [91] = {
    [sym__type_declaration] = STATE(126),
    [sym_using_directive] = STATE(126),
    [sym_namespace_declaration] = STATE(126),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym_namespace_declaration_repeat1] = STATE(127),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [92] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(155),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [93] = {
    [sym__type] = STATE(156),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_type_parameter] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(266),
    [sym_comment] = ACTIONS(38),
  },
  [95] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [96] = {
    [anon_sym_LBRACE] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [97] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(294),
    [sym_comment] = ACTIONS(38),
  },
  [99] = {
    [sym_enum_member_declaration] = STATE(196),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [100] = {
    [sym__integral_type] = STATE(201),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [101] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [sym_identifier_name] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [102] = {
    [sym_parameter_list] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [103] = {
    [sym_attribute_list] = STATE(204),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [105] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_comment] = ACTIONS(38),
  },
  [106] = {
    [anon_sym_class] = ACTIONS(312),
    [anon_sym_unsafe] = ACTIONS(312),
    [anon_sym_abstract] = ACTIONS(312),
    [anon_sym_sealed] = ACTIONS(312),
    [anon_sym_static] = ACTIONS(312),
    [anon_sym_new] = ACTIONS(312),
    [anon_sym_public] = ACTIONS(312),
    [anon_sym_protected] = ACTIONS(312),
    [anon_sym_internal] = ACTIONS(312),
    [anon_sym_private] = ACTIONS(312),
    [anon_sym_interface] = ACTIONS(312),
    [anon_sym_struct] = ACTIONS(312),
    [anon_sym_enum] = ACTIONS(312),
    [anon_sym_sbyte] = ACTIONS(312),
    [anon_sym_byte] = ACTIONS(312),
    [anon_sym_short] = ACTIONS(312),
    [anon_sym_ushort] = ACTIONS(312),
    [anon_sym_int] = ACTIONS(312),
    [anon_sym_uint] = ACTIONS(312),
    [anon_sym_long] = ACTIONS(312),
    [anon_sym_ulong] = ACTIONS(312),
    [anon_sym_char] = ACTIONS(312),
    [anon_sym_delegate] = ACTIONS(312),
    [sym_void_keyword] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [sym_const_keyword] = ACTIONS(312),
    [anon_sym_readonly] = ACTIONS(312),
    [anon_sym_volatile] = ACTIONS(312),
    [anon_sym_bool] = ACTIONS(312),
    [anon_sym_decimal] = ACTIONS(312),
    [anon_sym_double] = ACTIONS(312),
    [anon_sym_float] = ACTIONS(312),
    [anon_sym_object] = ACTIONS(312),
    [anon_sym_string] = ACTIONS(312),
    [sym_identifier_name] = ACTIONS(316),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(312),
  },
  [107] = {
    [sym_attribute] = STATE(206),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(320),
    [sym_comment] = ACTIONS(38),
  },
  [109] = {
    [sym_type_parameter_list] = STATE(208),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [sym_type_parameter_list] = STATE(209),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [sym_type_parameter_list] = STATE(210),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [112] = {
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_COLON] = ACTIONS(324),
    [sym_comment] = ACTIONS(38),
  },
  [113] = {
    [sym_identifier_name] = ACTIONS(326),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [sym_identifier_name] = ACTIONS(328),
    [sym_comment] = ACTIONS(38),
  },
  [115] = {
    [sym_identifier_name] = ACTIONS(330),
    [sym_comment] = ACTIONS(38),
  },
  [116] = {
    [sym_identifier_name] = ACTIONS(332),
    [sym_comment] = ACTIONS(38),
  },
  [117] = {
    [sym_identifier_name] = ACTIONS(334),
    [sym_comment] = ACTIONS(38),
  },
  [118] = {
    [sym_return_type] = STATE(218),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [119] = {
    [sym__type_declaration] = STATE(16),
    [sym_namespace_declaration] = STATE(16),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(78),
    [aux_sym_compilation_unit_repeat4] = STATE(219),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [120] = {
    [sym__type_declaration] = STATE(80),
    [sym_namespace_declaration] = STATE(80),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_extern] = ACTIONS(338),
    [anon_sym_using] = ACTIONS(338),
    [anon_sym_namespace] = ACTIONS(338),
    [anon_sym_class] = ACTIONS(338),
    [anon_sym_unsafe] = ACTIONS(338),
    [anon_sym_abstract] = ACTIONS(338),
    [anon_sym_sealed] = ACTIONS(338),
    [anon_sym_static] = ACTIONS(338),
    [anon_sym_new] = ACTIONS(338),
    [anon_sym_public] = ACTIONS(338),
    [anon_sym_protected] = ACTIONS(338),
    [anon_sym_internal] = ACTIONS(338),
    [anon_sym_private] = ACTIONS(338),
    [anon_sym_interface] = ACTIONS(338),
    [anon_sym_struct] = ACTIONS(338),
    [anon_sym_enum] = ACTIONS(338),
    [anon_sym_delegate] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_comment] = ACTIONS(38),
  },
  [122] = {
    [anon_sym_DOT] = ACTIONS(340),
    [sym_comment] = ACTIONS(38),
  },
  [123] = {
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(342),
    [sym_comment] = ACTIONS(38),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_using] = ACTIONS(344),
    [anon_sym_namespace] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(344),
    [anon_sym_unsafe] = ACTIONS(344),
    [anon_sym_abstract] = ACTIONS(344),
    [anon_sym_sealed] = ACTIONS(344),
    [anon_sym_static] = ACTIONS(344),
    [anon_sym_new] = ACTIONS(344),
    [anon_sym_public] = ACTIONS(344),
    [anon_sym_protected] = ACTIONS(344),
    [anon_sym_internal] = ACTIONS(344),
    [anon_sym_private] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(344),
    [anon_sym_struct] = ACTIONS(344),
    [anon_sym_enum] = ACTIONS(344),
    [anon_sym_delegate] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [sym_comment] = ACTIONS(38),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_using] = ACTIONS(346),
    [anon_sym_namespace] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_class] = ACTIONS(346),
    [anon_sym_unsafe] = ACTIONS(346),
    [anon_sym_abstract] = ACTIONS(346),
    [anon_sym_sealed] = ACTIONS(346),
    [anon_sym_static] = ACTIONS(346),
    [anon_sym_new] = ACTIONS(346),
    [anon_sym_public] = ACTIONS(346),
    [anon_sym_protected] = ACTIONS(346),
    [anon_sym_internal] = ACTIONS(346),
    [anon_sym_private] = ACTIONS(346),
    [anon_sym_interface] = ACTIONS(346),
    [anon_sym_struct] = ACTIONS(346),
    [anon_sym_enum] = ACTIONS(346),
    [anon_sym_delegate] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [sym_comment] = ACTIONS(38),
  },
  [126] = {
    [anon_sym_using] = ACTIONS(348),
    [anon_sym_namespace] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(348),
    [anon_sym_abstract] = ACTIONS(348),
    [anon_sym_sealed] = ACTIONS(348),
    [anon_sym_static] = ACTIONS(348),
    [anon_sym_new] = ACTIONS(348),
    [anon_sym_public] = ACTIONS(348),
    [anon_sym_protected] = ACTIONS(348),
    [anon_sym_internal] = ACTIONS(348),
    [anon_sym_private] = ACTIONS(348),
    [anon_sym_interface] = ACTIONS(348),
    [anon_sym_struct] = ACTIONS(348),
    [anon_sym_enum] = ACTIONS(348),
    [anon_sym_delegate] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(38),
  },
  [127] = {
    [sym__type_declaration] = STATE(221),
    [sym_using_directive] = STATE(221),
    [sym_namespace_declaration] = STATE(221),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_using] = ACTIONS(16),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_using] = ACTIONS(352),
    [anon_sym_namespace] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(352),
    [anon_sym_unsafe] = ACTIONS(352),
    [anon_sym_abstract] = ACTIONS(352),
    [anon_sym_sealed] = ACTIONS(352),
    [anon_sym_static] = ACTIONS(352),
    [anon_sym_new] = ACTIONS(352),
    [anon_sym_public] = ACTIONS(352),
    [anon_sym_protected] = ACTIONS(352),
    [anon_sym_internal] = ACTIONS(352),
    [anon_sym_private] = ACTIONS(352),
    [anon_sym_interface] = ACTIONS(352),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_enum] = ACTIONS(352),
    [anon_sym_delegate] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [129] = {
    [sym_identifier_name] = ACTIONS(354),
    [sym_comment] = ACTIONS(38),
  },
  [130] = {
    [sym__class_modifiers] = STATE(50),
    [sym__struct_modifiers] = STATE(51),
    [sym__field_modifiers] = STATE(224),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(358),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(358),
    [anon_sym_public] = ACTIONS(358),
    [anon_sym_protected] = ACTIONS(358),
    [anon_sym_internal] = ACTIONS(358),
    [anon_sym_private] = ACTIONS(358),
    [anon_sym_struct] = ACTIONS(360),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [anon_sym_delegate] = ACTIONS(364),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [131] = {
    [sym__class_modifiers] = STATE(50),
    [sym__field_modifiers] = STATE(224),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(246),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(246),
    [anon_sym_public] = ACTIONS(246),
    [anon_sym_protected] = ACTIONS(246),
    [anon_sym_internal] = ACTIONS(246),
    [anon_sym_private] = ACTIONS(246),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [132] = {
    [sym__class_modifiers] = STATE(50),
    [sym__interface_modifiers] = STATE(53),
    [sym__struct_modifiers] = STATE(51),
    [sym__field_modifiers] = STATE(224),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(358),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(368),
    [anon_sym_public] = ACTIONS(368),
    [anon_sym_protected] = ACTIONS(368),
    [anon_sym_internal] = ACTIONS(368),
    [anon_sym_private] = ACTIONS(368),
    [anon_sym_interface] = ACTIONS(370),
    [anon_sym_struct] = ACTIONS(360),
    [anon_sym_enum] = ACTIONS(372),
    [anon_sym_sbyte] = ACTIONS(374),
    [anon_sym_byte] = ACTIONS(374),
    [anon_sym_short] = ACTIONS(374),
    [anon_sym_ushort] = ACTIONS(374),
    [anon_sym_int] = ACTIONS(374),
    [anon_sym_uint] = ACTIONS(374),
    [anon_sym_long] = ACTIONS(374),
    [anon_sym_ulong] = ACTIONS(374),
    [anon_sym_char] = ACTIONS(374),
    [anon_sym_delegate] = ACTIONS(364),
    [sym_void_keyword] = ACTIONS(377),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(374),
    [anon_sym_decimal] = ACTIONS(374),
    [anon_sym_double] = ACTIONS(374),
    [anon_sym_float] = ACTIONS(374),
    [anon_sym_object] = ACTIONS(374),
    [anon_sym_string] = ACTIONS(374),
    [sym_identifier_name] = ACTIONS(379),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(377),
  },
  [133] = {
    [sym_identifier_name] = ACTIONS(382),
    [sym_comment] = ACTIONS(38),
  },
  [134] = {
    [sym_identifier_name] = ACTIONS(384),
    [sym_comment] = ACTIONS(38),
  },
  [135] = {
    [sym_identifier_name] = ACTIONS(386),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [sym_return_type] = STATE(229),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [137] = {
    [sym_variable_declaration] = STATE(230),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [138] = {
    [sym__field_modifiers] = STATE(224),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [139] = {
    [sym_parameter_list] = STATE(231),
    [sym_type_parameter_list] = STATE(232),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [140] = {
    [sym_return_type] = STATE(233),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [141] = {
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_class] = ACTIONS(390),
    [anon_sym_unsafe] = ACTIONS(390),
    [anon_sym_abstract] = ACTIONS(390),
    [anon_sym_sealed] = ACTIONS(390),
    [anon_sym_static] = ACTIONS(390),
    [anon_sym_new] = ACTIONS(390),
    [anon_sym_public] = ACTIONS(390),
    [anon_sym_protected] = ACTIONS(390),
    [anon_sym_internal] = ACTIONS(390),
    [anon_sym_private] = ACTIONS(390),
    [anon_sym_interface] = ACTIONS(390),
    [anon_sym_struct] = ACTIONS(390),
    [anon_sym_enum] = ACTIONS(390),
    [anon_sym_sbyte] = ACTIONS(390),
    [anon_sym_byte] = ACTIONS(390),
    [anon_sym_short] = ACTIONS(390),
    [anon_sym_ushort] = ACTIONS(390),
    [anon_sym_int] = ACTIONS(390),
    [anon_sym_uint] = ACTIONS(390),
    [anon_sym_long] = ACTIONS(390),
    [anon_sym_ulong] = ACTIONS(390),
    [anon_sym_char] = ACTIONS(390),
    [anon_sym_delegate] = ACTIONS(390),
    [sym_void_keyword] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(388),
    [sym_const_keyword] = ACTIONS(390),
    [anon_sym_readonly] = ACTIONS(390),
    [anon_sym_volatile] = ACTIONS(390),
    [anon_sym_bool] = ACTIONS(390),
    [anon_sym_decimal] = ACTIONS(390),
    [anon_sym_double] = ACTIONS(390),
    [anon_sym_float] = ACTIONS(390),
    [anon_sym_object] = ACTIONS(390),
    [anon_sym_string] = ACTIONS(390),
    [sym_identifier_name] = ACTIONS(392),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(390),
  },
  [142] = {
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_class] = ACTIONS(394),
    [anon_sym_unsafe] = ACTIONS(394),
    [anon_sym_abstract] = ACTIONS(394),
    [anon_sym_sealed] = ACTIONS(394),
    [anon_sym_static] = ACTIONS(394),
    [anon_sym_new] = ACTIONS(394),
    [anon_sym_public] = ACTIONS(394),
    [anon_sym_protected] = ACTIONS(394),
    [anon_sym_internal] = ACTIONS(394),
    [anon_sym_private] = ACTIONS(394),
    [anon_sym_interface] = ACTIONS(394),
    [anon_sym_struct] = ACTIONS(394),
    [anon_sym_enum] = ACTIONS(394),
    [anon_sym_sbyte] = ACTIONS(394),
    [anon_sym_byte] = ACTIONS(394),
    [anon_sym_short] = ACTIONS(394),
    [anon_sym_ushort] = ACTIONS(394),
    [anon_sym_int] = ACTIONS(394),
    [anon_sym_uint] = ACTIONS(394),
    [anon_sym_long] = ACTIONS(394),
    [anon_sym_ulong] = ACTIONS(394),
    [anon_sym_char] = ACTIONS(394),
    [anon_sym_delegate] = ACTIONS(394),
    [sym_void_keyword] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_const_keyword] = ACTIONS(394),
    [anon_sym_readonly] = ACTIONS(394),
    [anon_sym_volatile] = ACTIONS(394),
    [anon_sym_bool] = ACTIONS(394),
    [anon_sym_decimal] = ACTIONS(394),
    [anon_sym_double] = ACTIONS(394),
    [anon_sym_float] = ACTIONS(394),
    [anon_sym_object] = ACTIONS(394),
    [anon_sym_string] = ACTIONS(394),
    [sym_identifier_name] = ACTIONS(396),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(394),
  },
  [143] = {
    [anon_sym_class] = ACTIONS(398),
    [sym_comment] = ACTIONS(38),
  },
  [144] = {
    [anon_sym_interface] = ACTIONS(400),
    [sym_comment] = ACTIONS(38),
  },
  [145] = {
    [anon_sym_struct] = ACTIONS(402),
    [sym_comment] = ACTIONS(38),
  },
  [146] = {
    [anon_sym_enum] = ACTIONS(404),
    [sym_comment] = ACTIONS(38),
  },
  [147] = {
    [anon_sym_delegate] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [148] = {
    [sym_identifier_name] = ACTIONS(408),
    [sym_comment] = ACTIONS(38),
  },
  [149] = {
    [sym_class_modifiers] = STATE(243),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_modifiers] = STATE(244),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_modifiers] = STATE(245),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_modifiers] = STATE(246),
    [sym_delegate_modifier] = STATE(247),
    [sym_return_type] = STATE(233),
    [sym_field_modifiers] = STATE(248),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(230),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_method_modifiers] = STATE(249),
    [anon_sym_class] = ACTIONS(410),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(412),
    [anon_sym_struct] = ACTIONS(414),
    [anon_sym_enum] = ACTIONS(416),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(418),
    [sym_void_keyword] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(420),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(422),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(424),
  },
  [150] = {
    [sym_variable_declaration] = STATE(230),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(420),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [151] = {
    [anon_sym_sbyte] = ACTIONS(426),
    [anon_sym_byte] = ACTIONS(426),
    [anon_sym_short] = ACTIONS(426),
    [anon_sym_ushort] = ACTIONS(426),
    [anon_sym_int] = ACTIONS(426),
    [anon_sym_uint] = ACTIONS(426),
    [anon_sym_long] = ACTIONS(426),
    [anon_sym_ulong] = ACTIONS(426),
    [anon_sym_char] = ACTIONS(426),
    [sym_const_keyword] = ACTIONS(426),
    [anon_sym_bool] = ACTIONS(426),
    [anon_sym_decimal] = ACTIONS(426),
    [anon_sym_double] = ACTIONS(426),
    [anon_sym_float] = ACTIONS(426),
    [anon_sym_object] = ACTIONS(426),
    [anon_sym_string] = ACTIONS(426),
    [sym_identifier_name] = ACTIONS(428),
    [sym_comment] = ACTIONS(38),
  },
  [152] = {
    [anon_sym_SEMI] = ACTIONS(430),
    [sym_comment] = ACTIONS(38),
  },
  [153] = {
    [sym_variable_declarator] = STATE(252),
    [sym_identifier_name] = ACTIONS(432),
    [sym_comment] = ACTIONS(38),
  },
  [154] = {
    [sym_return_type] = STATE(233),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(422),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(424),
  },
  [155] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [sym_comment] = ACTIONS(38),
  },
  [157] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(441),
    [sym_comment] = ACTIONS(38),
  },
  [158] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(258),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_using] = ACTIONS(443),
    [anon_sym_namespace] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_class] = ACTIONS(443),
    [anon_sym_unsafe] = ACTIONS(443),
    [anon_sym_abstract] = ACTIONS(443),
    [anon_sym_sealed] = ACTIONS(443),
    [anon_sym_static] = ACTIONS(443),
    [anon_sym_new] = ACTIONS(443),
    [anon_sym_public] = ACTIONS(443),
    [anon_sym_protected] = ACTIONS(443),
    [anon_sym_internal] = ACTIONS(443),
    [anon_sym_private] = ACTIONS(443),
    [anon_sym_interface] = ACTIONS(443),
    [anon_sym_struct] = ACTIONS(443),
    [anon_sym_enum] = ACTIONS(443),
    [anon_sym_delegate] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_comment] = ACTIONS(38),
  },
  [160] = {
    [sym_attribute_list] = STATE(259),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [161] = {
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [162] = {
    [sym_field_modifiers] = STATE(262),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(445),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [anon_sym_unsafe] = ACTIONS(110),
    [anon_sym_static] = ACTIONS(110),
    [anon_sym_new] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_protected] = ACTIONS(110),
    [anon_sym_internal] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_sbyte] = ACTIONS(110),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_short] = ACTIONS(110),
    [anon_sym_ushort] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_uint] = ACTIONS(110),
    [anon_sym_long] = ACTIONS(110),
    [anon_sym_ulong] = ACTIONS(110),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_const_keyword] = ACTIONS(110),
    [anon_sym_readonly] = ACTIONS(110),
    [anon_sym_volatile] = ACTIONS(110),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_decimal] = ACTIONS(110),
    [anon_sym_double] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_object] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [sym_identifier_name] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
  },
  [164] = {
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_unsafe] = ACTIONS(449),
    [anon_sym_static] = ACTIONS(449),
    [anon_sym_new] = ACTIONS(449),
    [anon_sym_public] = ACTIONS(449),
    [anon_sym_protected] = ACTIONS(449),
    [anon_sym_internal] = ACTIONS(449),
    [anon_sym_private] = ACTIONS(449),
    [anon_sym_sbyte] = ACTIONS(449),
    [anon_sym_byte] = ACTIONS(449),
    [anon_sym_short] = ACTIONS(449),
    [anon_sym_ushort] = ACTIONS(449),
    [anon_sym_int] = ACTIONS(449),
    [anon_sym_uint] = ACTIONS(449),
    [anon_sym_long] = ACTIONS(449),
    [anon_sym_ulong] = ACTIONS(449),
    [anon_sym_char] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym_const_keyword] = ACTIONS(449),
    [anon_sym_readonly] = ACTIONS(449),
    [anon_sym_volatile] = ACTIONS(449),
    [anon_sym_bool] = ACTIONS(449),
    [anon_sym_decimal] = ACTIONS(449),
    [anon_sym_double] = ACTIONS(449),
    [anon_sym_float] = ACTIONS(449),
    [anon_sym_object] = ACTIONS(449),
    [anon_sym_string] = ACTIONS(449),
    [sym_identifier_name] = ACTIONS(451),
    [sym_comment] = ACTIONS(38),
  },
  [165] = {
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(445),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(453),
    [sym_comment] = ACTIONS(38),
  },
  [167] = {
    [sym_variable_declarator] = STATE(252),
    [sym_identifier_name] = ACTIONS(455),
    [sym_comment] = ACTIONS(38),
  },
  [168] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [169] = {
    [sym__attribute_section] = STATE(266),
    [anon_sym_unsafe] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(120),
    [anon_sym_new] = ACTIONS(120),
    [anon_sym_public] = ACTIONS(120),
    [anon_sym_protected] = ACTIONS(120),
    [anon_sym_internal] = ACTIONS(120),
    [anon_sym_private] = ACTIONS(120),
    [anon_sym_sbyte] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(120),
    [anon_sym_short] = ACTIONS(120),
    [anon_sym_ushort] = ACTIONS(120),
    [anon_sym_int] = ACTIONS(120),
    [anon_sym_uint] = ACTIONS(120),
    [anon_sym_long] = ACTIONS(120),
    [anon_sym_ulong] = ACTIONS(120),
    [anon_sym_char] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(120),
    [anon_sym_readonly] = ACTIONS(120),
    [anon_sym_volatile] = ACTIONS(120),
    [anon_sym_bool] = ACTIONS(120),
    [anon_sym_decimal] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_object] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(38),
  },
  [170] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(267),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_using] = ACTIONS(459),
    [anon_sym_namespace] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_class] = ACTIONS(459),
    [anon_sym_unsafe] = ACTIONS(459),
    [anon_sym_abstract] = ACTIONS(459),
    [anon_sym_sealed] = ACTIONS(459),
    [anon_sym_static] = ACTIONS(459),
    [anon_sym_new] = ACTIONS(459),
    [anon_sym_public] = ACTIONS(459),
    [anon_sym_protected] = ACTIONS(459),
    [anon_sym_internal] = ACTIONS(459),
    [anon_sym_private] = ACTIONS(459),
    [anon_sym_interface] = ACTIONS(459),
    [anon_sym_struct] = ACTIONS(459),
    [anon_sym_enum] = ACTIONS(459),
    [anon_sym_delegate] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [sym_comment] = ACTIONS(38),
  },
  [172] = {
    [sym_identifier_name] = ACTIONS(461),
    [sym_comment] = ACTIONS(38),
  },
  [173] = {
    [sym__class_modifiers] = STATE(50),
    [sym__interface_modifiers] = STATE(53),
    [sym__struct_modifiers] = STATE(51),
    [sym__field_modifiers] = STATE(224),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(358),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(368),
    [anon_sym_public] = ACTIONS(368),
    [anon_sym_protected] = ACTIONS(368),
    [anon_sym_internal] = ACTIONS(368),
    [anon_sym_private] = ACTIONS(368),
    [anon_sym_interface] = ACTIONS(370),
    [anon_sym_struct] = ACTIONS(360),
    [anon_sym_enum] = ACTIONS(372),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [anon_sym_delegate] = ACTIONS(364),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [174] = {
    [sym_identifier_name] = ACTIONS(463),
    [sym_comment] = ACTIONS(38),
  },
  [175] = {
    [sym_identifier_name] = ACTIONS(465),
    [sym_comment] = ACTIONS(38),
  },
  [176] = {
    [sym_identifier_name] = ACTIONS(467),
    [sym_comment] = ACTIONS(38),
  },
  [177] = {
    [sym_return_type] = STATE(272),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [178] = {
    [sym_attribute_list] = STATE(273),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [179] = {
    [sym_variable_declaration] = STATE(274),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [180] = {
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_class] = ACTIONS(471),
    [anon_sym_unsafe] = ACTIONS(471),
    [anon_sym_abstract] = ACTIONS(471),
    [anon_sym_sealed] = ACTIONS(471),
    [anon_sym_static] = ACTIONS(471),
    [anon_sym_new] = ACTIONS(471),
    [anon_sym_public] = ACTIONS(471),
    [anon_sym_protected] = ACTIONS(471),
    [anon_sym_internal] = ACTIONS(471),
    [anon_sym_private] = ACTIONS(471),
    [anon_sym_interface] = ACTIONS(471),
    [anon_sym_struct] = ACTIONS(471),
    [anon_sym_enum] = ACTIONS(471),
    [anon_sym_sbyte] = ACTIONS(471),
    [anon_sym_byte] = ACTIONS(471),
    [anon_sym_short] = ACTIONS(471),
    [anon_sym_ushort] = ACTIONS(471),
    [anon_sym_int] = ACTIONS(471),
    [anon_sym_uint] = ACTIONS(471),
    [anon_sym_long] = ACTIONS(471),
    [anon_sym_ulong] = ACTIONS(471),
    [anon_sym_char] = ACTIONS(471),
    [anon_sym_delegate] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_const_keyword] = ACTIONS(471),
    [anon_sym_readonly] = ACTIONS(471),
    [anon_sym_volatile] = ACTIONS(471),
    [anon_sym_bool] = ACTIONS(471),
    [anon_sym_decimal] = ACTIONS(471),
    [anon_sym_double] = ACTIONS(471),
    [anon_sym_float] = ACTIONS(471),
    [anon_sym_object] = ACTIONS(471),
    [anon_sym_string] = ACTIONS(471),
    [sym_identifier_name] = ACTIONS(473),
    [sym_comment] = ACTIONS(38),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_class] = ACTIONS(394),
    [anon_sym_unsafe] = ACTIONS(394),
    [anon_sym_abstract] = ACTIONS(394),
    [anon_sym_sealed] = ACTIONS(394),
    [anon_sym_static] = ACTIONS(394),
    [anon_sym_new] = ACTIONS(394),
    [anon_sym_public] = ACTIONS(394),
    [anon_sym_protected] = ACTIONS(394),
    [anon_sym_internal] = ACTIONS(394),
    [anon_sym_private] = ACTIONS(394),
    [anon_sym_interface] = ACTIONS(394),
    [anon_sym_struct] = ACTIONS(394),
    [anon_sym_enum] = ACTIONS(394),
    [anon_sym_sbyte] = ACTIONS(394),
    [anon_sym_byte] = ACTIONS(394),
    [anon_sym_short] = ACTIONS(394),
    [anon_sym_ushort] = ACTIONS(394),
    [anon_sym_int] = ACTIONS(394),
    [anon_sym_uint] = ACTIONS(394),
    [anon_sym_long] = ACTIONS(394),
    [anon_sym_ulong] = ACTIONS(394),
    [anon_sym_char] = ACTIONS(394),
    [anon_sym_delegate] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_const_keyword] = ACTIONS(394),
    [anon_sym_readonly] = ACTIONS(394),
    [anon_sym_volatile] = ACTIONS(394),
    [anon_sym_bool] = ACTIONS(394),
    [anon_sym_decimal] = ACTIONS(394),
    [anon_sym_double] = ACTIONS(394),
    [anon_sym_float] = ACTIONS(394),
    [anon_sym_object] = ACTIONS(394),
    [anon_sym_string] = ACTIONS(394),
    [sym_identifier_name] = ACTIONS(396),
    [sym_comment] = ACTIONS(38),
  },
  [182] = {
    [anon_sym_class] = ACTIONS(475),
    [sym_comment] = ACTIONS(38),
  },
  [183] = {
    [anon_sym_interface] = ACTIONS(477),
    [sym_comment] = ACTIONS(38),
  },
  [184] = {
    [anon_sym_struct] = ACTIONS(479),
    [sym_comment] = ACTIONS(38),
  },
  [185] = {
    [anon_sym_enum] = ACTIONS(481),
    [sym_comment] = ACTIONS(38),
  },
  [186] = {
    [anon_sym_delegate] = ACTIONS(483),
    [sym_comment] = ACTIONS(38),
  },
  [187] = {
    [sym_class_modifiers] = STATE(281),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_modifiers] = STATE(282),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_modifiers] = STATE(283),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_modifiers] = STATE(284),
    [sym_delegate_modifier] = STATE(285),
    [sym_field_modifiers] = STATE(286),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(274),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_class] = ACTIONS(485),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(487),
    [anon_sym_struct] = ACTIONS(489),
    [anon_sym_enum] = ACTIONS(491),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(493),
    [sym_const_keyword] = ACTIONS(495),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [188] = {
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_unsafe] = ACTIONS(110),
    [anon_sym_abstract] = ACTIONS(110),
    [anon_sym_sealed] = ACTIONS(110),
    [anon_sym_static] = ACTIONS(110),
    [anon_sym_new] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_protected] = ACTIONS(110),
    [anon_sym_internal] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_interface] = ACTIONS(110),
    [anon_sym_struct] = ACTIONS(110),
    [anon_sym_enum] = ACTIONS(110),
    [anon_sym_sbyte] = ACTIONS(110),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_short] = ACTIONS(110),
    [anon_sym_ushort] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_uint] = ACTIONS(110),
    [anon_sym_long] = ACTIONS(110),
    [anon_sym_ulong] = ACTIONS(110),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_delegate] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_const_keyword] = ACTIONS(110),
    [anon_sym_readonly] = ACTIONS(110),
    [anon_sym_volatile] = ACTIONS(110),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_decimal] = ACTIONS(110),
    [anon_sym_double] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_object] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [sym_identifier_name] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
  },
  [189] = {
    [sym_variable_declaration] = STATE(274),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(495),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [190] = {
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_comment] = ACTIONS(38),
  },
  [191] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [192] = {
    [sym__attribute_section] = STATE(290),
    [anon_sym_class] = ACTIONS(120),
    [anon_sym_unsafe] = ACTIONS(120),
    [anon_sym_abstract] = ACTIONS(120),
    [anon_sym_sealed] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(120),
    [anon_sym_new] = ACTIONS(120),
    [anon_sym_public] = ACTIONS(120),
    [anon_sym_protected] = ACTIONS(120),
    [anon_sym_internal] = ACTIONS(120),
    [anon_sym_private] = ACTIONS(120),
    [anon_sym_interface] = ACTIONS(120),
    [anon_sym_struct] = ACTIONS(120),
    [anon_sym_enum] = ACTIONS(120),
    [anon_sym_sbyte] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(120),
    [anon_sym_short] = ACTIONS(120),
    [anon_sym_ushort] = ACTIONS(120),
    [anon_sym_int] = ACTIONS(120),
    [anon_sym_uint] = ACTIONS(120),
    [anon_sym_long] = ACTIONS(120),
    [anon_sym_ulong] = ACTIONS(120),
    [anon_sym_char] = ACTIONS(120),
    [anon_sym_delegate] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(120),
    [anon_sym_readonly] = ACTIONS(120),
    [anon_sym_volatile] = ACTIONS(120),
    [anon_sym_bool] = ACTIONS(120),
    [anon_sym_decimal] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_object] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(38),
  },
  [193] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(291),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [194] = {
    [sym_attribute_list] = STATE(292),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [195] = {
    [sym_equals_value_clause] = STATE(294),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(503),
    [sym_comment] = ACTIONS(38),
  },
  [196] = {
    [aux_sym_enum_declaration_repeat1] = STATE(297),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [197] = {
    [sym_identifier_name] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(38),
  },
  [199] = {
    [sym__attribute_section] = STATE(299),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [anon_sym_LBRACE] = ACTIONS(511),
    [sym_comment] = ACTIONS(38),
  },
  [201] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(38),
  },
  [202] = {
    [sym__formal_parameter_list] = STATE(305),
    [sym_parameter] = STATE(306),
    [sym_parameter_modifier] = STATE(307),
    [sym_parameter_array] = STATE(308),
    [sym__attributes] = STATE(309),
    [sym__attribute_section] = STATE(310),
    [sym__type] = STATE(311),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(312),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [sym_params_keyword] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [203] = {
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(38),
  },
  [204] = {
    [anon_sym_RBRACK] = ACTIONS(525),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym_comment] = ACTIONS(38),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_comment] = ACTIONS(38),
  },
  [207] = {
    [sym_attribute] = STATE(315),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [208] = {
    [anon_sym_LBRACE] = ACTIONS(531),
    [sym_comment] = ACTIONS(38),
  },
  [209] = {
    [anon_sym_LBRACE] = ACTIONS(533),
    [sym_comment] = ACTIONS(38),
  },
  [210] = {
    [anon_sym_LBRACE] = ACTIONS(535),
    [sym_comment] = ACTIONS(38),
  },
  [211] = {
    [sym_enum_member_declaration] = STATE(319),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [212] = {
    [sym__integral_type] = STATE(320),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [213] = {
    [sym_parameter_list] = STATE(321),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [214] = {
    [sym_type_parameter_list] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [215] = {
    [sym_type_parameter_list] = STATE(323),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [216] = {
    [sym_type_parameter_list] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [217] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(537),
    [sym_comment] = ACTIONS(38),
  },
  [218] = {
    [sym_identifier_name] = ACTIONS(539),
    [sym_comment] = ACTIONS(38),
  },
  [219] = {
    [sym__type_declaration] = STATE(80),
    [sym_namespace_declaration] = STATE(80),
    [sym_class_declaration] = STATE(19),
    [sym_class_modifiers] = STATE(20),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(19),
    [sym_interface_modifiers] = STATE(22),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(19),
    [sym_struct_modifiers] = STATE(24),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(19),
    [sym_enum_modifiers] = STATE(26),
    [sym_delegate_declaration] = STATE(19),
    [sym_delegate_modifier] = STATE(27),
    [sym__attributes] = STATE(28),
    [sym__attribute_section] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_namespace] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(38),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_using] = ACTIONS(543),
    [anon_sym_namespace] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
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
    [anon_sym_interface] = ACTIONS(543),
    [anon_sym_struct] = ACTIONS(543),
    [anon_sym_enum] = ACTIONS(543),
    [anon_sym_delegate] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [sym_comment] = ACTIONS(38),
  },
  [221] = {
    [anon_sym_using] = ACTIONS(545),
    [anon_sym_namespace] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
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
    [anon_sym_interface] = ACTIONS(545),
    [anon_sym_struct] = ACTIONS(545),
    [anon_sym_enum] = ACTIONS(545),
    [anon_sym_delegate] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [sym_comment] = ACTIONS(38),
  },
  [222] = {
    [sym_type_parameter_list] = STATE(328),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [223] = {
    [sym__class_modifiers] = STATE(50),
    [sym__struct_modifiers] = STATE(51),
    [sym__field_modifiers] = STATE(224),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(358),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(358),
    [anon_sym_public] = ACTIONS(358),
    [anon_sym_protected] = ACTIONS(358),
    [anon_sym_internal] = ACTIONS(358),
    [anon_sym_private] = ACTIONS(358),
    [anon_sym_struct] = ACTIONS(360),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [224] = {
    [anon_sym_sbyte] = ACTIONS(549),
    [anon_sym_byte] = ACTIONS(549),
    [anon_sym_short] = ACTIONS(549),
    [anon_sym_ushort] = ACTIONS(549),
    [anon_sym_int] = ACTIONS(549),
    [anon_sym_uint] = ACTIONS(549),
    [anon_sym_long] = ACTIONS(549),
    [anon_sym_ulong] = ACTIONS(549),
    [anon_sym_char] = ACTIONS(549),
    [sym_const_keyword] = ACTIONS(549),
    [anon_sym_bool] = ACTIONS(549),
    [anon_sym_decimal] = ACTIONS(549),
    [anon_sym_double] = ACTIONS(549),
    [anon_sym_float] = ACTIONS(549),
    [anon_sym_object] = ACTIONS(549),
    [anon_sym_string] = ACTIONS(549),
    [sym_identifier_name] = ACTIONS(551),
    [sym_comment] = ACTIONS(38),
  },
  [225] = {
    [sym__class_modifiers] = STATE(50),
    [sym__interface_modifiers] = STATE(53),
    [sym__struct_modifiers] = STATE(51),
    [sym__field_modifiers] = STATE(224),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(358),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(368),
    [anon_sym_public] = ACTIONS(368),
    [anon_sym_protected] = ACTIONS(368),
    [anon_sym_internal] = ACTIONS(368),
    [anon_sym_private] = ACTIONS(368),
    [anon_sym_interface] = ACTIONS(370),
    [anon_sym_struct] = ACTIONS(360),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [226] = {
    [sym_type_parameter_list] = STATE(330),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [227] = {
    [sym_type_parameter_list] = STATE(332),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [228] = {
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(559),
    [sym_comment] = ACTIONS(38),
  },
  [229] = {
    [sym_identifier_name] = ACTIONS(561),
    [sym_comment] = ACTIONS(38),
  },
  [230] = {
    [anon_sym_SEMI] = ACTIONS(563),
    [sym_comment] = ACTIONS(38),
  },
  [231] = {
    [sym_statement_block] = STATE(338),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [232] = {
    [sym_parameter_list] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [233] = {
    [sym_identifier_name] = ACTIONS(567),
    [sym_comment] = ACTIONS(38),
  },
  [234] = {
    [sym_identifier_name] = ACTIONS(569),
    [sym_comment] = ACTIONS(38),
  },
  [235] = {
    [sym_identifier_name] = ACTIONS(571),
    [sym_comment] = ACTIONS(38),
  },
  [236] = {
    [sym_identifier_name] = ACTIONS(573),
    [sym_comment] = ACTIONS(38),
  },
  [237] = {
    [sym_identifier_name] = ACTIONS(575),
    [sym_comment] = ACTIONS(38),
  },
  [238] = {
    [sym_return_type] = STATE(345),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [239] = {
    [sym_parameter_list] = STATE(346),
    [sym_type_parameter_list] = STATE(347),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [240] = {
    [sym_variable_declaration] = STATE(348),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [241] = {
    [sym_parameter_list] = STATE(339),
    [sym_type_parameter_list] = STATE(349),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [242] = {
    [sym_return_type] = STATE(350),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [243] = {
    [anon_sym_class] = ACTIONS(577),
    [sym_comment] = ACTIONS(38),
  },
  [244] = {
    [anon_sym_interface] = ACTIONS(579),
    [sym_comment] = ACTIONS(38),
  },
  [245] = {
    [anon_sym_struct] = ACTIONS(581),
    [sym_comment] = ACTIONS(38),
  },
  [246] = {
    [anon_sym_enum] = ACTIONS(583),
    [sym_comment] = ACTIONS(38),
  },
  [247] = {
    [anon_sym_delegate] = ACTIONS(585),
    [sym_comment] = ACTIONS(38),
  },
  [248] = {
    [sym_variable_declaration] = STATE(348),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(587),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [249] = {
    [sym_return_type] = STATE(350),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(589),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(591),
  },
  [250] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_class] = ACTIONS(595),
    [anon_sym_unsafe] = ACTIONS(595),
    [anon_sym_abstract] = ACTIONS(595),
    [anon_sym_sealed] = ACTIONS(595),
    [anon_sym_static] = ACTIONS(595),
    [anon_sym_new] = ACTIONS(595),
    [anon_sym_public] = ACTIONS(595),
    [anon_sym_protected] = ACTIONS(595),
    [anon_sym_internal] = ACTIONS(595),
    [anon_sym_private] = ACTIONS(595),
    [anon_sym_interface] = ACTIONS(595),
    [anon_sym_struct] = ACTIONS(595),
    [anon_sym_enum] = ACTIONS(595),
    [anon_sym_sbyte] = ACTIONS(595),
    [anon_sym_byte] = ACTIONS(595),
    [anon_sym_short] = ACTIONS(595),
    [anon_sym_ushort] = ACTIONS(595),
    [anon_sym_int] = ACTIONS(595),
    [anon_sym_uint] = ACTIONS(595),
    [anon_sym_long] = ACTIONS(595),
    [anon_sym_ulong] = ACTIONS(595),
    [anon_sym_char] = ACTIONS(595),
    [anon_sym_delegate] = ACTIONS(595),
    [sym_void_keyword] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(593),
    [sym_const_keyword] = ACTIONS(595),
    [anon_sym_readonly] = ACTIONS(595),
    [anon_sym_volatile] = ACTIONS(595),
    [anon_sym_bool] = ACTIONS(595),
    [anon_sym_decimal] = ACTIONS(595),
    [anon_sym_double] = ACTIONS(595),
    [anon_sym_float] = ACTIONS(595),
    [anon_sym_object] = ACTIONS(595),
    [anon_sym_string] = ACTIONS(595),
    [sym_identifier_name] = ACTIONS(597),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(595),
  },
  [251] = {
    [sym_equals_value_clause] = STATE(360),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(601),
    [sym_comment] = ACTIONS(38),
  },
  [252] = {
    [aux_sym_variable_declaration_repeat1] = STATE(362),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(605),
    [sym_comment] = ACTIONS(38),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_using] = ACTIONS(607),
    [anon_sym_namespace] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_class] = ACTIONS(607),
    [anon_sym_unsafe] = ACTIONS(607),
    [anon_sym_abstract] = ACTIONS(607),
    [anon_sym_sealed] = ACTIONS(607),
    [anon_sym_static] = ACTIONS(607),
    [anon_sym_new] = ACTIONS(607),
    [anon_sym_public] = ACTIONS(607),
    [anon_sym_protected] = ACTIONS(607),
    [anon_sym_internal] = ACTIONS(607),
    [anon_sym_private] = ACTIONS(607),
    [anon_sym_interface] = ACTIONS(607),
    [anon_sym_struct] = ACTIONS(607),
    [anon_sym_enum] = ACTIONS(607),
    [anon_sym_delegate] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [sym_comment] = ACTIONS(38),
  },
  [254] = {
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_class] = ACTIONS(611),
    [anon_sym_unsafe] = ACTIONS(611),
    [anon_sym_abstract] = ACTIONS(611),
    [anon_sym_sealed] = ACTIONS(611),
    [anon_sym_static] = ACTIONS(611),
    [anon_sym_new] = ACTIONS(611),
    [anon_sym_public] = ACTIONS(611),
    [anon_sym_protected] = ACTIONS(611),
    [anon_sym_internal] = ACTIONS(611),
    [anon_sym_private] = ACTIONS(611),
    [anon_sym_interface] = ACTIONS(611),
    [anon_sym_struct] = ACTIONS(611),
    [anon_sym_enum] = ACTIONS(611),
    [anon_sym_sbyte] = ACTIONS(611),
    [anon_sym_byte] = ACTIONS(611),
    [anon_sym_short] = ACTIONS(611),
    [anon_sym_ushort] = ACTIONS(611),
    [anon_sym_int] = ACTIONS(611),
    [anon_sym_uint] = ACTIONS(611),
    [anon_sym_long] = ACTIONS(611),
    [anon_sym_ulong] = ACTIONS(611),
    [anon_sym_char] = ACTIONS(611),
    [anon_sym_delegate] = ACTIONS(611),
    [sym_void_keyword] = ACTIONS(611),
    [anon_sym_LBRACK] = ACTIONS(609),
    [sym_const_keyword] = ACTIONS(611),
    [anon_sym_readonly] = ACTIONS(611),
    [anon_sym_volatile] = ACTIONS(611),
    [anon_sym_bool] = ACTIONS(611),
    [anon_sym_decimal] = ACTIONS(611),
    [anon_sym_double] = ACTIONS(611),
    [anon_sym_float] = ACTIONS(611),
    [anon_sym_object] = ACTIONS(611),
    [anon_sym_string] = ACTIONS(611),
    [sym_identifier_name] = ACTIONS(613),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(611),
  },
  [255] = {
    [sym__type] = STATE(156),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_type_parameter] = STATE(363),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [256] = {
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_GT] = ACTIONS(615),
    [sym_identifier_name] = ACTIONS(617),
    [sym_comment] = ACTIONS(38),
  },
  [257] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(621),
    [sym_comment] = ACTIONS(38),
  },
  [258] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [259] = {
    [anon_sym_RBRACK] = ACTIONS(625),
    [sym_comment] = ACTIONS(38),
  },
  [260] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [sym_comment] = ACTIONS(38),
  },
  [261] = {
    [sym_variable_declaration] = STATE(369),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [262] = {
    [sym_variable_declaration] = STATE(369),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(629),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [263] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_unsafe] = ACTIONS(595),
    [anon_sym_static] = ACTIONS(595),
    [anon_sym_new] = ACTIONS(595),
    [anon_sym_public] = ACTIONS(595),
    [anon_sym_protected] = ACTIONS(595),
    [anon_sym_internal] = ACTIONS(595),
    [anon_sym_private] = ACTIONS(595),
    [anon_sym_sbyte] = ACTIONS(595),
    [anon_sym_byte] = ACTIONS(595),
    [anon_sym_short] = ACTIONS(595),
    [anon_sym_ushort] = ACTIONS(595),
    [anon_sym_int] = ACTIONS(595),
    [anon_sym_uint] = ACTIONS(595),
    [anon_sym_long] = ACTIONS(595),
    [anon_sym_ulong] = ACTIONS(595),
    [anon_sym_char] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(593),
    [sym_const_keyword] = ACTIONS(595),
    [anon_sym_readonly] = ACTIONS(595),
    [anon_sym_volatile] = ACTIONS(595),
    [anon_sym_bool] = ACTIONS(595),
    [anon_sym_decimal] = ACTIONS(595),
    [anon_sym_double] = ACTIONS(595),
    [anon_sym_float] = ACTIONS(595),
    [anon_sym_object] = ACTIONS(595),
    [anon_sym_string] = ACTIONS(595),
    [sym_identifier_name] = ACTIONS(597),
    [sym_comment] = ACTIONS(38),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(631),
    [anon_sym_using] = ACTIONS(631),
    [anon_sym_namespace] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_class] = ACTIONS(631),
    [anon_sym_unsafe] = ACTIONS(631),
    [anon_sym_abstract] = ACTIONS(631),
    [anon_sym_sealed] = ACTIONS(631),
    [anon_sym_static] = ACTIONS(631),
    [anon_sym_new] = ACTIONS(631),
    [anon_sym_public] = ACTIONS(631),
    [anon_sym_protected] = ACTIONS(631),
    [anon_sym_internal] = ACTIONS(631),
    [anon_sym_private] = ACTIONS(631),
    [anon_sym_interface] = ACTIONS(631),
    [anon_sym_struct] = ACTIONS(631),
    [anon_sym_enum] = ACTIONS(631),
    [anon_sym_delegate] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(38),
  },
  [265] = {
    [anon_sym_RBRACE] = ACTIONS(633),
    [anon_sym_unsafe] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(635),
    [anon_sym_new] = ACTIONS(635),
    [anon_sym_public] = ACTIONS(635),
    [anon_sym_protected] = ACTIONS(635),
    [anon_sym_internal] = ACTIONS(635),
    [anon_sym_private] = ACTIONS(635),
    [anon_sym_sbyte] = ACTIONS(635),
    [anon_sym_byte] = ACTIONS(635),
    [anon_sym_short] = ACTIONS(635),
    [anon_sym_ushort] = ACTIONS(635),
    [anon_sym_int] = ACTIONS(635),
    [anon_sym_uint] = ACTIONS(635),
    [anon_sym_long] = ACTIONS(635),
    [anon_sym_ulong] = ACTIONS(635),
    [anon_sym_char] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(633),
    [sym_const_keyword] = ACTIONS(635),
    [anon_sym_readonly] = ACTIONS(635),
    [anon_sym_volatile] = ACTIONS(635),
    [anon_sym_bool] = ACTIONS(635),
    [anon_sym_decimal] = ACTIONS(635),
    [anon_sym_double] = ACTIONS(635),
    [anon_sym_float] = ACTIONS(635),
    [anon_sym_object] = ACTIONS(635),
    [anon_sym_string] = ACTIONS(635),
    [sym_identifier_name] = ACTIONS(637),
    [sym_comment] = ACTIONS(38),
  },
  [266] = {
    [anon_sym_unsafe] = ACTIONS(214),
    [anon_sym_static] = ACTIONS(214),
    [anon_sym_new] = ACTIONS(214),
    [anon_sym_public] = ACTIONS(214),
    [anon_sym_protected] = ACTIONS(214),
    [anon_sym_internal] = ACTIONS(214),
    [anon_sym_private] = ACTIONS(214),
    [anon_sym_sbyte] = ACTIONS(214),
    [anon_sym_byte] = ACTIONS(214),
    [anon_sym_short] = ACTIONS(214),
    [anon_sym_ushort] = ACTIONS(214),
    [anon_sym_int] = ACTIONS(214),
    [anon_sym_uint] = ACTIONS(214),
    [anon_sym_long] = ACTIONS(214),
    [anon_sym_ulong] = ACTIONS(214),
    [anon_sym_char] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_const_keyword] = ACTIONS(214),
    [anon_sym_readonly] = ACTIONS(214),
    [anon_sym_volatile] = ACTIONS(214),
    [anon_sym_bool] = ACTIONS(214),
    [anon_sym_decimal] = ACTIONS(214),
    [anon_sym_double] = ACTIONS(214),
    [anon_sym_float] = ACTIONS(214),
    [anon_sym_object] = ACTIONS(214),
    [anon_sym_string] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(218),
    [sym_comment] = ACTIONS(38),
  },
  [267] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [268] = {
    [sym_type_parameter_list] = STATE(373),
    [anon_sym_LBRACE] = ACTIONS(641),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [269] = {
    [sym_type_parameter_list] = STATE(375),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [270] = {
    [sym_type_parameter_list] = STATE(377),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [271] = {
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(649),
    [sym_comment] = ACTIONS(38),
  },
  [272] = {
    [sym_identifier_name] = ACTIONS(651),
    [sym_comment] = ACTIONS(38),
  },
  [273] = {
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym_comment] = ACTIONS(38),
  },
  [274] = {
    [anon_sym_SEMI] = ACTIONS(655),
    [sym_comment] = ACTIONS(38),
  },
  [275] = {
    [sym_identifier_name] = ACTIONS(657),
    [sym_comment] = ACTIONS(38),
  },
  [276] = {
    [sym_identifier_name] = ACTIONS(659),
    [sym_comment] = ACTIONS(38),
  },
  [277] = {
    [sym_identifier_name] = ACTIONS(661),
    [sym_comment] = ACTIONS(38),
  },
  [278] = {
    [sym_identifier_name] = ACTIONS(663),
    [sym_comment] = ACTIONS(38),
  },
  [279] = {
    [sym_return_type] = STATE(387),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [280] = {
    [sym_variable_declaration] = STATE(388),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [281] = {
    [anon_sym_class] = ACTIONS(665),
    [sym_comment] = ACTIONS(38),
  },
  [282] = {
    [anon_sym_interface] = ACTIONS(667),
    [sym_comment] = ACTIONS(38),
  },
  [283] = {
    [anon_sym_struct] = ACTIONS(669),
    [sym_comment] = ACTIONS(38),
  },
  [284] = {
    [anon_sym_enum] = ACTIONS(671),
    [sym_comment] = ACTIONS(38),
  },
  [285] = {
    [anon_sym_delegate] = ACTIONS(673),
    [sym_comment] = ACTIONS(38),
  },
  [286] = {
    [sym_variable_declaration] = STATE(388),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(675),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [287] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_class] = ACTIONS(595),
    [anon_sym_unsafe] = ACTIONS(595),
    [anon_sym_abstract] = ACTIONS(595),
    [anon_sym_sealed] = ACTIONS(595),
    [anon_sym_static] = ACTIONS(595),
    [anon_sym_new] = ACTIONS(595),
    [anon_sym_public] = ACTIONS(595),
    [anon_sym_protected] = ACTIONS(595),
    [anon_sym_internal] = ACTIONS(595),
    [anon_sym_private] = ACTIONS(595),
    [anon_sym_interface] = ACTIONS(595),
    [anon_sym_struct] = ACTIONS(595),
    [anon_sym_enum] = ACTIONS(595),
    [anon_sym_sbyte] = ACTIONS(595),
    [anon_sym_byte] = ACTIONS(595),
    [anon_sym_short] = ACTIONS(595),
    [anon_sym_ushort] = ACTIONS(595),
    [anon_sym_int] = ACTIONS(595),
    [anon_sym_uint] = ACTIONS(595),
    [anon_sym_long] = ACTIONS(595),
    [anon_sym_ulong] = ACTIONS(595),
    [anon_sym_char] = ACTIONS(595),
    [anon_sym_delegate] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(593),
    [sym_const_keyword] = ACTIONS(595),
    [anon_sym_readonly] = ACTIONS(595),
    [anon_sym_volatile] = ACTIONS(595),
    [anon_sym_bool] = ACTIONS(595),
    [anon_sym_decimal] = ACTIONS(595),
    [anon_sym_double] = ACTIONS(595),
    [anon_sym_float] = ACTIONS(595),
    [anon_sym_object] = ACTIONS(595),
    [anon_sym_string] = ACTIONS(595),
    [sym_identifier_name] = ACTIONS(597),
    [sym_comment] = ACTIONS(38),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_using] = ACTIONS(677),
    [anon_sym_namespace] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(677),
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
    [anon_sym_interface] = ACTIONS(677),
    [anon_sym_struct] = ACTIONS(677),
    [anon_sym_enum] = ACTIONS(677),
    [anon_sym_delegate] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_comment] = ACTIONS(38),
  },
  [289] = {
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_class] = ACTIONS(681),
    [anon_sym_unsafe] = ACTIONS(681),
    [anon_sym_abstract] = ACTIONS(681),
    [anon_sym_sealed] = ACTIONS(681),
    [anon_sym_static] = ACTIONS(681),
    [anon_sym_new] = ACTIONS(681),
    [anon_sym_public] = ACTIONS(681),
    [anon_sym_protected] = ACTIONS(681),
    [anon_sym_internal] = ACTIONS(681),
    [anon_sym_private] = ACTIONS(681),
    [anon_sym_interface] = ACTIONS(681),
    [anon_sym_struct] = ACTIONS(681),
    [anon_sym_enum] = ACTIONS(681),
    [anon_sym_sbyte] = ACTIONS(681),
    [anon_sym_byte] = ACTIONS(681),
    [anon_sym_short] = ACTIONS(681),
    [anon_sym_ushort] = ACTIONS(681),
    [anon_sym_int] = ACTIONS(681),
    [anon_sym_uint] = ACTIONS(681),
    [anon_sym_long] = ACTIONS(681),
    [anon_sym_ulong] = ACTIONS(681),
    [anon_sym_char] = ACTIONS(681),
    [anon_sym_delegate] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(679),
    [sym_const_keyword] = ACTIONS(681),
    [anon_sym_readonly] = ACTIONS(681),
    [anon_sym_volatile] = ACTIONS(681),
    [anon_sym_bool] = ACTIONS(681),
    [anon_sym_decimal] = ACTIONS(681),
    [anon_sym_double] = ACTIONS(681),
    [anon_sym_float] = ACTIONS(681),
    [anon_sym_object] = ACTIONS(681),
    [anon_sym_string] = ACTIONS(681),
    [sym_identifier_name] = ACTIONS(683),
    [sym_comment] = ACTIONS(38),
  },
  [290] = {
    [anon_sym_class] = ACTIONS(214),
    [anon_sym_unsafe] = ACTIONS(214),
    [anon_sym_abstract] = ACTIONS(214),
    [anon_sym_sealed] = ACTIONS(214),
    [anon_sym_static] = ACTIONS(214),
    [anon_sym_new] = ACTIONS(214),
    [anon_sym_public] = ACTIONS(214),
    [anon_sym_protected] = ACTIONS(214),
    [anon_sym_internal] = ACTIONS(214),
    [anon_sym_private] = ACTIONS(214),
    [anon_sym_interface] = ACTIONS(214),
    [anon_sym_struct] = ACTIONS(214),
    [anon_sym_enum] = ACTIONS(214),
    [anon_sym_sbyte] = ACTIONS(214),
    [anon_sym_byte] = ACTIONS(214),
    [anon_sym_short] = ACTIONS(214),
    [anon_sym_ushort] = ACTIONS(214),
    [anon_sym_int] = ACTIONS(214),
    [anon_sym_uint] = ACTIONS(214),
    [anon_sym_long] = ACTIONS(214),
    [anon_sym_ulong] = ACTIONS(214),
    [anon_sym_char] = ACTIONS(214),
    [anon_sym_delegate] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_const_keyword] = ACTIONS(214),
    [anon_sym_readonly] = ACTIONS(214),
    [anon_sym_volatile] = ACTIONS(214),
    [anon_sym_bool] = ACTIONS(214),
    [anon_sym_decimal] = ACTIONS(214),
    [anon_sym_double] = ACTIONS(214),
    [anon_sym_float] = ACTIONS(214),
    [anon_sym_object] = ACTIONS(214),
    [anon_sym_string] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(218),
    [sym_comment] = ACTIONS(38),
  },
  [291] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [292] = {
    [anon_sym_RBRACK] = ACTIONS(687),
    [sym_comment] = ACTIONS(38),
  },
  [293] = {
    [sym__expression] = STATE(407),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [sym_comment] = ACTIONS(38),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(715),
    [anon_sym_using] = ACTIONS(713),
    [anon_sym_namespace] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
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
    [anon_sym_interface] = ACTIONS(713),
    [anon_sym_struct] = ACTIONS(713),
    [anon_sym_enum] = ACTIONS(713),
    [anon_sym_delegate] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_comment] = ACTIONS(38),
  },
  [296] = {
    [sym_enum_member_declaration] = STATE(410),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [297] = {
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [298] = {
    [sym_equals_value_clause] = STATE(413),
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(503),
    [sym_comment] = ACTIONS(38),
  },
  [299] = {
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_identifier_name] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [300] = {
    [sym_enum_member_declaration] = STATE(414),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [301] = {
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LBRACE] = ACTIONS(721),
    [sym_comment] = ACTIONS(38),
  },
  [302] = {
    [anon_sym_sbyte] = ACTIONS(723),
    [anon_sym_byte] = ACTIONS(723),
    [anon_sym_short] = ACTIONS(723),
    [anon_sym_ushort] = ACTIONS(723),
    [anon_sym_int] = ACTIONS(723),
    [anon_sym_uint] = ACTIONS(723),
    [anon_sym_long] = ACTIONS(723),
    [anon_sym_ulong] = ACTIONS(723),
    [anon_sym_char] = ACTIONS(723),
    [anon_sym_bool] = ACTIONS(723),
    [anon_sym_decimal] = ACTIONS(723),
    [anon_sym_double] = ACTIONS(723),
    [anon_sym_float] = ACTIONS(723),
    [anon_sym_object] = ACTIONS(723),
    [anon_sym_string] = ACTIONS(723),
    [sym_identifier_name] = ACTIONS(725),
    [sym_comment] = ACTIONS(38),
  },
  [303] = {
    [sym_array_type] = STATE(415),
    [sym__type] = STATE(416),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [304] = {
    [sym_attribute_list] = STATE(417),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [305] = {
    [anon_sym_RPAREN] = ACTIONS(727),
    [sym_comment] = ACTIONS(38),
  },
  [306] = {
    [sym_parameter_array] = STATE(420),
    [sym__attributes] = STATE(421),
    [sym__attribute_section] = STATE(310),
    [aux_sym__formal_parameter_list_repeat1] = STATE(422),
    [aux_sym__attributes_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_params_keyword] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(521),
    [sym_comment] = ACTIONS(38),
  },
  [307] = {
    [sym__type] = STATE(423),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_comment] = ACTIONS(38),
  },
  [309] = {
    [sym_parameter_modifier] = STATE(425),
    [sym__type] = STATE(423),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [sym_params_keyword] = ACTIONS(735),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [310] = {
    [anon_sym_sbyte] = ACTIONS(110),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_short] = ACTIONS(110),
    [anon_sym_ushort] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_uint] = ACTIONS(110),
    [anon_sym_long] = ACTIONS(110),
    [anon_sym_ulong] = ACTIONS(110),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_ref] = ACTIONS(110),
    [anon_sym_out] = ACTIONS(110),
    [anon_sym_this] = ACTIONS(110),
    [sym_params_keyword] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_decimal] = ACTIONS(110),
    [anon_sym_double] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_object] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [sym_identifier_name] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
  },
  [311] = {
    [sym_identifier_name] = ACTIONS(737),
    [sym_comment] = ACTIONS(38),
  },
  [312] = {
    [sym__attribute_section] = STATE(427),
    [anon_sym_sbyte] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(120),
    [anon_sym_short] = ACTIONS(120),
    [anon_sym_ushort] = ACTIONS(120),
    [anon_sym_int] = ACTIONS(120),
    [anon_sym_uint] = ACTIONS(120),
    [anon_sym_long] = ACTIONS(120),
    [anon_sym_ulong] = ACTIONS(120),
    [anon_sym_char] = ACTIONS(120),
    [anon_sym_ref] = ACTIONS(120),
    [anon_sym_out] = ACTIONS(120),
    [anon_sym_this] = ACTIONS(120),
    [sym_params_keyword] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_bool] = ACTIONS(120),
    [anon_sym_decimal] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_object] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(38),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(739),
    [anon_sym_using] = ACTIONS(739),
    [anon_sym_namespace] = ACTIONS(739),
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_class] = ACTIONS(739),
    [anon_sym_unsafe] = ACTIONS(739),
    [anon_sym_abstract] = ACTIONS(739),
    [anon_sym_sealed] = ACTIONS(739),
    [anon_sym_static] = ACTIONS(739),
    [anon_sym_new] = ACTIONS(739),
    [anon_sym_public] = ACTIONS(739),
    [anon_sym_protected] = ACTIONS(739),
    [anon_sym_internal] = ACTIONS(739),
    [anon_sym_private] = ACTIONS(739),
    [anon_sym_interface] = ACTIONS(739),
    [anon_sym_struct] = ACTIONS(739),
    [anon_sym_enum] = ACTIONS(739),
    [anon_sym_delegate] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym_comment] = ACTIONS(38),
  },
  [314] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [anon_sym_namespace] = ACTIONS(741),
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
    [anon_sym_interface] = ACTIONS(741),
    [anon_sym_struct] = ACTIONS(741),
    [anon_sym_enum] = ACTIONS(741),
    [anon_sym_delegate] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [sym_comment] = ACTIONS(38),
  },
  [315] = {
    [anon_sym_COMMA] = ACTIONS(743),
    [anon_sym_RBRACK] = ACTIONS(743),
    [sym_comment] = ACTIONS(38),
  },
  [316] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(428),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [317] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(429),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [318] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(430),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [319] = {
    [aux_sym_enum_declaration_repeat1] = STATE(431),
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [320] = {
    [anon_sym_LBRACE] = ACTIONS(745),
    [sym_comment] = ACTIONS(38),
  },
  [321] = {
    [anon_sym_SEMI] = ACTIONS(747),
    [sym_comment] = ACTIONS(38),
  },
  [322] = {
    [anon_sym_LBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(38),
  },
  [323] = {
    [anon_sym_LBRACE] = ACTIONS(751),
    [sym_comment] = ACTIONS(38),
  },
  [324] = {
    [anon_sym_LBRACE] = ACTIONS(753),
    [sym_comment] = ACTIONS(38),
  },
  [325] = {
    [sym__integral_type] = STATE(437),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [326] = {
    [sym_parameter_list] = STATE(438),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [327] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(440),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [328] = {
    [anon_sym_LBRACE] = ACTIONS(757),
    [sym_comment] = ACTIONS(38),
  },
  [329] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(443),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(759),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [330] = {
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(38),
  },
  [331] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(446),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(763),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [332] = {
    [anon_sym_LBRACE] = ACTIONS(765),
    [sym_comment] = ACTIONS(38),
  },
  [333] = {
    [sym_enum_member_declaration] = STATE(448),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [334] = {
    [sym__integral_type] = STATE(449),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [335] = {
    [sym_parameter_list] = STATE(450),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [336] = {
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
    [anon_sym_interface] = ACTIONS(769),
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
    [sym_void_keyword] = ACTIONS(769),
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
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(769),
  },
  [337] = {
    [sym__expression] = STATE(456),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [sym__statement] = STATE(457),
    [sym_expression_statement] = STATE(458),
    [sym_return_statement] = STATE(458),
    [sym_variable_assignment_statement] = STATE(458),
    [sym_empty_statement] = STATE(458),
    [aux_sym_statement_block_repeat1] = STATE(459),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_RBRACE] = ACTIONS(775),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(781),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(783),
  },
  [338] = {
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
    [anon_sym_interface] = ACTIONS(787),
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
    [sym_void_keyword] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(785),
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
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(787),
  },
  [339] = {
    [sym_statement_block] = STATE(460),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [340] = {
    [sym_parameter_list] = STATE(461),
    [sym_type_parameter_list] = STATE(462),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [341] = {
    [sym_type_parameter_list] = STATE(463),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [342] = {
    [sym_type_parameter_list] = STATE(464),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [343] = {
    [sym_type_parameter_list] = STATE(465),
    [anon_sym_LBRACE] = ACTIONS(765),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [344] = {
    [anon_sym_LBRACE] = ACTIONS(791),
    [anon_sym_COLON] = ACTIONS(793),
    [sym_comment] = ACTIONS(38),
  },
  [345] = {
    [sym_identifier_name] = ACTIONS(795),
    [sym_comment] = ACTIONS(38),
  },
  [346] = {
    [sym_statement_block] = STATE(469),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [347] = {
    [sym_parameter_list] = STATE(461),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [348] = {
    [anon_sym_SEMI] = ACTIONS(797),
    [sym_comment] = ACTIONS(38),
  },
  [349] = {
    [sym_parameter_list] = STATE(471),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [350] = {
    [sym_identifier_name] = ACTIONS(799),
    [sym_comment] = ACTIONS(38),
  },
  [351] = {
    [sym_identifier_name] = ACTIONS(801),
    [sym_comment] = ACTIONS(38),
  },
  [352] = {
    [sym_identifier_name] = ACTIONS(803),
    [sym_comment] = ACTIONS(38),
  },
  [353] = {
    [sym_identifier_name] = ACTIONS(805),
    [sym_comment] = ACTIONS(38),
  },
  [354] = {
    [sym_identifier_name] = ACTIONS(807),
    [sym_comment] = ACTIONS(38),
  },
  [355] = {
    [sym_return_type] = STATE(477),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [356] = {
    [sym_variable_declaration] = STATE(478),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [357] = {
    [sym_parameter_list] = STATE(471),
    [sym_type_parameter_list] = STATE(479),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [358] = {
    [sym_return_type] = STATE(480),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [359] = {
    [sym__expression] = STATE(482),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [360] = {
    [anon_sym_SEMI] = ACTIONS(813),
    [anon_sym_COMMA] = ACTIONS(813),
    [sym_comment] = ACTIONS(38),
  },
  [361] = {
    [sym_variable_declarator] = STATE(483),
    [sym_identifier_name] = ACTIONS(455),
    [sym_comment] = ACTIONS(38),
  },
  [362] = {
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_COMMA] = ACTIONS(817),
    [sym_comment] = ACTIONS(38),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(819),
    [anon_sym_GT] = ACTIONS(819),
    [sym_comment] = ACTIONS(38),
  },
  [364] = {
    [sym__type] = STATE(156),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_type_parameter] = STATE(485),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [365] = {
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(821),
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_GT] = ACTIONS(821),
    [sym_identifier_name] = ACTIONS(823),
    [sym_comment] = ACTIONS(38),
  },
  [366] = {
    [ts_builtin_sym_end] = ACTIONS(825),
    [anon_sym_using] = ACTIONS(825),
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
    [anon_sym_interface] = ACTIONS(825),
    [anon_sym_struct] = ACTIONS(825),
    [anon_sym_enum] = ACTIONS(825),
    [anon_sym_delegate] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym_comment] = ACTIONS(38),
  },
  [367] = {
    [anon_sym_unsafe] = ACTIONS(312),
    [anon_sym_static] = ACTIONS(312),
    [anon_sym_new] = ACTIONS(312),
    [anon_sym_public] = ACTIONS(312),
    [anon_sym_protected] = ACTIONS(312),
    [anon_sym_internal] = ACTIONS(312),
    [anon_sym_private] = ACTIONS(312),
    [anon_sym_sbyte] = ACTIONS(312),
    [anon_sym_byte] = ACTIONS(312),
    [anon_sym_short] = ACTIONS(312),
    [anon_sym_ushort] = ACTIONS(312),
    [anon_sym_int] = ACTIONS(312),
    [anon_sym_uint] = ACTIONS(312),
    [anon_sym_long] = ACTIONS(312),
    [anon_sym_ulong] = ACTIONS(312),
    [anon_sym_char] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [sym_const_keyword] = ACTIONS(312),
    [anon_sym_readonly] = ACTIONS(312),
    [anon_sym_volatile] = ACTIONS(312),
    [anon_sym_bool] = ACTIONS(312),
    [anon_sym_decimal] = ACTIONS(312),
    [anon_sym_double] = ACTIONS(312),
    [anon_sym_float] = ACTIONS(312),
    [anon_sym_object] = ACTIONS(312),
    [anon_sym_string] = ACTIONS(312),
    [sym_identifier_name] = ACTIONS(316),
    [sym_comment] = ACTIONS(38),
  },
  [368] = {
    [anon_sym_RBRACE] = ACTIONS(767),
    [anon_sym_unsafe] = ACTIONS(769),
    [anon_sym_static] = ACTIONS(769),
    [anon_sym_new] = ACTIONS(769),
    [anon_sym_public] = ACTIONS(769),
    [anon_sym_protected] = ACTIONS(769),
    [anon_sym_internal] = ACTIONS(769),
    [anon_sym_private] = ACTIONS(769),
    [anon_sym_sbyte] = ACTIONS(769),
    [anon_sym_byte] = ACTIONS(769),
    [anon_sym_short] = ACTIONS(769),
    [anon_sym_ushort] = ACTIONS(769),
    [anon_sym_int] = ACTIONS(769),
    [anon_sym_uint] = ACTIONS(769),
    [anon_sym_long] = ACTIONS(769),
    [anon_sym_ulong] = ACTIONS(769),
    [anon_sym_char] = ACTIONS(769),
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
    [sym_comment] = ACTIONS(38),
  },
  [369] = {
    [anon_sym_SEMI] = ACTIONS(827),
    [sym_comment] = ACTIONS(38),
  },
  [370] = {
    [sym_variable_declaration] = STATE(487),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [371] = {
    [ts_builtin_sym_end] = ACTIONS(829),
    [anon_sym_using] = ACTIONS(829),
    [anon_sym_namespace] = ACTIONS(829),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(829),
    [anon_sym_unsafe] = ACTIONS(829),
    [anon_sym_abstract] = ACTIONS(829),
    [anon_sym_sealed] = ACTIONS(829),
    [anon_sym_static] = ACTIONS(829),
    [anon_sym_new] = ACTIONS(829),
    [anon_sym_public] = ACTIONS(829),
    [anon_sym_protected] = ACTIONS(829),
    [anon_sym_internal] = ACTIONS(829),
    [anon_sym_private] = ACTIONS(829),
    [anon_sym_interface] = ACTIONS(829),
    [anon_sym_struct] = ACTIONS(829),
    [anon_sym_enum] = ACTIONS(829),
    [anon_sym_delegate] = ACTIONS(829),
    [anon_sym_LBRACK] = ACTIONS(829),
    [sym_comment] = ACTIONS(38),
  },
  [372] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(489),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(831),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [373] = {
    [anon_sym_LBRACE] = ACTIONS(833),
    [sym_comment] = ACTIONS(38),
  },
  [374] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(492),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [375] = {
    [anon_sym_LBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(38),
  },
  [376] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(495),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(839),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [377] = {
    [anon_sym_LBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(38),
  },
  [378] = {
    [sym_enum_member_declaration] = STATE(497),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [379] = {
    [sym__integral_type] = STATE(498),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [380] = {
    [sym_parameter_list] = STATE(499),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [381] = {
    [anon_sym_class] = ACTIONS(312),
    [anon_sym_unsafe] = ACTIONS(312),
    [anon_sym_abstract] = ACTIONS(312),
    [anon_sym_sealed] = ACTIONS(312),
    [anon_sym_static] = ACTIONS(312),
    [anon_sym_new] = ACTIONS(312),
    [anon_sym_public] = ACTIONS(312),
    [anon_sym_protected] = ACTIONS(312),
    [anon_sym_internal] = ACTIONS(312),
    [anon_sym_private] = ACTIONS(312),
    [anon_sym_interface] = ACTIONS(312),
    [anon_sym_struct] = ACTIONS(312),
    [anon_sym_enum] = ACTIONS(312),
    [anon_sym_sbyte] = ACTIONS(312),
    [anon_sym_byte] = ACTIONS(312),
    [anon_sym_short] = ACTIONS(312),
    [anon_sym_ushort] = ACTIONS(312),
    [anon_sym_int] = ACTIONS(312),
    [anon_sym_uint] = ACTIONS(312),
    [anon_sym_long] = ACTIONS(312),
    [anon_sym_ulong] = ACTIONS(312),
    [anon_sym_char] = ACTIONS(312),
    [anon_sym_delegate] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [sym_const_keyword] = ACTIONS(312),
    [anon_sym_readonly] = ACTIONS(312),
    [anon_sym_volatile] = ACTIONS(312),
    [anon_sym_bool] = ACTIONS(312),
    [anon_sym_decimal] = ACTIONS(312),
    [anon_sym_double] = ACTIONS(312),
    [anon_sym_float] = ACTIONS(312),
    [anon_sym_object] = ACTIONS(312),
    [anon_sym_string] = ACTIONS(312),
    [sym_identifier_name] = ACTIONS(316),
    [sym_comment] = ACTIONS(38),
  },
  [382] = {
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
    [anon_sym_interface] = ACTIONS(769),
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
    [sym_comment] = ACTIONS(38),
  },
  [383] = {
    [sym_type_parameter_list] = STATE(500),
    [anon_sym_LBRACE] = ACTIONS(833),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [384] = {
    [sym_type_parameter_list] = STATE(501),
    [anon_sym_LBRACE] = ACTIONS(837),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [385] = {
    [sym_type_parameter_list] = STATE(502),
    [anon_sym_LBRACE] = ACTIONS(841),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [386] = {
    [anon_sym_LBRACE] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(845),
    [sym_comment] = ACTIONS(38),
  },
  [387] = {
    [sym_identifier_name] = ACTIONS(847),
    [sym_comment] = ACTIONS(38),
  },
  [388] = {
    [anon_sym_SEMI] = ACTIONS(849),
    [sym_comment] = ACTIONS(38),
  },
  [389] = {
    [sym_identifier_name] = ACTIONS(851),
    [sym_comment] = ACTIONS(38),
  },
  [390] = {
    [sym_identifier_name] = ACTIONS(853),
    [sym_comment] = ACTIONS(38),
  },
  [391] = {
    [sym_identifier_name] = ACTIONS(855),
    [sym_comment] = ACTIONS(38),
  },
  [392] = {
    [sym_identifier_name] = ACTIONS(857),
    [sym_comment] = ACTIONS(38),
  },
  [393] = {
    [sym_return_type] = STATE(511),
    [sym__type] = STATE(58),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [394] = {
    [sym_variable_declaration] = STATE(512),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [395] = {
    [ts_builtin_sym_end] = ACTIONS(859),
    [anon_sym_using] = ACTIONS(859),
    [anon_sym_namespace] = ACTIONS(859),
    [anon_sym_RBRACE] = ACTIONS(859),
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
    [anon_sym_interface] = ACTIONS(859),
    [anon_sym_struct] = ACTIONS(859),
    [anon_sym_enum] = ACTIONS(859),
    [anon_sym_delegate] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(859),
    [sym_comment] = ACTIONS(38),
  },
  [396] = {
    [anon_sym_LBRACK] = ACTIONS(314),
    [sym_identifier_name] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [397] = {
    [sym__expression] = STATE(513),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [398] = {
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(861),
    [anon_sym_RPAREN] = ACTIONS(861),
    [sym_params_keyword] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_QMARK] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(863),
    [anon_sym_CARET] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(861),
    [anon_sym_DASH] = ACTIONS(861),
    [anon_sym_STAR] = ACTIONS(861),
    [anon_sym_SLASH] = ACTIONS(863),
    [anon_sym_PERCENT] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_LT_EQ] = ACTIONS(861),
    [anon_sym_EQ_EQ] = ACTIONS(861),
    [anon_sym_BANG_EQ] = ACTIONS(861),
    [anon_sym_GT_EQ] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(863),
    [sym_comment] = ACTIONS(38),
  },
  [399] = {
    [sym__unicode_escape_sequence] = STATE(514),
    [sym__simple_escape_sequence] = STATE(514),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(865),
    [sym__hexadecimal_escape_sequence] = ACTIONS(865),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(867),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(867),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(869),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(869),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(869),
    [anon_sym_BSLASH0] = ACTIONS(869),
    [anon_sym_BSLASHa] = ACTIONS(869),
    [anon_sym_BSLASHb] = ACTIONS(869),
    [anon_sym_BSLASHf] = ACTIONS(869),
    [anon_sym_BSLASHn] = ACTIONS(869),
    [anon_sym_BSLASHr] = ACTIONS(869),
    [anon_sym_BSLASHt] = ACTIONS(869),
    [anon_sym_BSLASHv] = ACTIONS(869),
    [sym_comment] = ACTIONS(871),
  },
  [400] = {
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym_params_keyword] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_QMARK] = ACTIONS(873),
    [anon_sym_AMP_AMP] = ACTIONS(873),
    [anon_sym_PIPE_PIPE] = ACTIONS(873),
    [anon_sym_GT_GT] = ACTIONS(873),
    [anon_sym_LT_LT] = ACTIONS(873),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(873),
    [anon_sym_PIPE] = ACTIONS(875),
    [anon_sym_PLUS] = ACTIONS(873),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym_STAR] = ACTIONS(873),
    [anon_sym_SLASH] = ACTIONS(875),
    [anon_sym_PERCENT] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_LT_EQ] = ACTIONS(873),
    [anon_sym_EQ_EQ] = ACTIONS(873),
    [anon_sym_BANG_EQ] = ACTIONS(873),
    [anon_sym_GT_EQ] = ACTIONS(873),
    [anon_sym_GT] = ACTIONS(875),
    [sym__integer_type_suffix] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(879),
    [sym__real_type_suffix] = ACTIONS(881),
    [sym__exponent_part] = ACTIONS(883),
    [sym_comment] = ACTIONS(38),
  },
  [401] = {
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym_params_keyword] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_QMARK] = ACTIONS(873),
    [anon_sym_AMP_AMP] = ACTIONS(873),
    [anon_sym_PIPE_PIPE] = ACTIONS(873),
    [anon_sym_GT_GT] = ACTIONS(873),
    [anon_sym_LT_LT] = ACTIONS(873),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(873),
    [anon_sym_PIPE] = ACTIONS(875),
    [anon_sym_PLUS] = ACTIONS(873),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym_STAR] = ACTIONS(873),
    [anon_sym_SLASH] = ACTIONS(875),
    [anon_sym_PERCENT] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_LT_EQ] = ACTIONS(873),
    [anon_sym_EQ_EQ] = ACTIONS(873),
    [anon_sym_BANG_EQ] = ACTIONS(873),
    [anon_sym_GT_EQ] = ACTIONS(873),
    [anon_sym_GT] = ACTIONS(875),
    [sym__integer_type_suffix] = ACTIONS(877),
    [sym_comment] = ACTIONS(38),
  },
  [402] = {
    [anon_sym_SEMI] = ACTIONS(885),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_COLON] = ACTIONS(885),
    [anon_sym_COMMA] = ACTIONS(885),
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_params_keyword] = ACTIONS(885),
    [anon_sym_LBRACK] = ACTIONS(885),
    [anon_sym_QMARK] = ACTIONS(885),
    [anon_sym_AMP_AMP] = ACTIONS(885),
    [anon_sym_PIPE_PIPE] = ACTIONS(885),
    [anon_sym_GT_GT] = ACTIONS(885),
    [anon_sym_LT_LT] = ACTIONS(885),
    [anon_sym_AMP] = ACTIONS(887),
    [anon_sym_CARET] = ACTIONS(885),
    [anon_sym_PIPE] = ACTIONS(887),
    [anon_sym_PLUS] = ACTIONS(885),
    [anon_sym_DASH] = ACTIONS(885),
    [anon_sym_STAR] = ACTIONS(885),
    [anon_sym_SLASH] = ACTIONS(887),
    [anon_sym_PERCENT] = ACTIONS(885),
    [anon_sym_LT] = ACTIONS(887),
    [anon_sym_LT_EQ] = ACTIONS(885),
    [anon_sym_EQ_EQ] = ACTIONS(885),
    [anon_sym_BANG_EQ] = ACTIONS(885),
    [anon_sym_GT_EQ] = ACTIONS(885),
    [anon_sym_GT] = ACTIONS(887),
    [sym_comment] = ACTIONS(38),
  },
  [403] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(889),
    [sym_comment] = ACTIONS(38),
  },
  [404] = {
    [sym__unicode_escape_sequence] = STATE(522),
    [sym__simple_escape_sequence] = STATE(522),
    [sym__regular_string_literal_character] = STATE(526),
    [aux_sym__regular_string_literal_repeat1] = STATE(527),
    [sym__hexadecimal_escape_sequence] = ACTIONS(891),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(893),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(895),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(895),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(895),
    [anon_sym_BSLASH0] = ACTIONS(895),
    [anon_sym_BSLASHa] = ACTIONS(895),
    [anon_sym_BSLASHb] = ACTIONS(895),
    [anon_sym_BSLASHf] = ACTIONS(895),
    [anon_sym_BSLASHn] = ACTIONS(895),
    [anon_sym_BSLASHr] = ACTIONS(895),
    [anon_sym_BSLASHt] = ACTIONS(895),
    [anon_sym_BSLASHv] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(891),
    [sym_comment] = ACTIONS(871),
  },
  [405] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(871),
  },
  [406] = {
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_COLON] = ACTIONS(901),
    [anon_sym_COMMA] = ACTIONS(901),
    [anon_sym_RPAREN] = ACTIONS(901),
    [sym_params_keyword] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(901),
    [anon_sym_PIPE_PIPE] = ACTIONS(901),
    [anon_sym_GT_GT] = ACTIONS(901),
    [anon_sym_LT_LT] = ACTIONS(901),
    [anon_sym_AMP] = ACTIONS(903),
    [anon_sym_CARET] = ACTIONS(901),
    [anon_sym_PIPE] = ACTIONS(903),
    [anon_sym_PLUS] = ACTIONS(901),
    [anon_sym_DASH] = ACTIONS(901),
    [anon_sym_STAR] = ACTIONS(901),
    [anon_sym_SLASH] = ACTIONS(903),
    [anon_sym_PERCENT] = ACTIONS(901),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_LT_EQ] = ACTIONS(901),
    [anon_sym_EQ_EQ] = ACTIONS(901),
    [anon_sym_BANG_EQ] = ACTIONS(901),
    [anon_sym_GT_EQ] = ACTIONS(901),
    [anon_sym_GT] = ACTIONS(903),
    [sym_comment] = ACTIONS(38),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(905),
    [anon_sym_COMMA] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(907),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(911),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(917),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [408] = {
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_COMMA] = ACTIONS(933),
    [anon_sym_RPAREN] = ACTIONS(933),
    [sym_params_keyword] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_QMARK] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(935),
    [anon_sym_CARET] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PLUS] = ACTIONS(933),
    [anon_sym_DASH] = ACTIONS(933),
    [anon_sym_STAR] = ACTIONS(933),
    [anon_sym_SLASH] = ACTIONS(935),
    [anon_sym_PERCENT] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_LT_EQ] = ACTIONS(933),
    [anon_sym_EQ_EQ] = ACTIONS(933),
    [anon_sym_BANG_EQ] = ACTIONS(933),
    [anon_sym_GT_EQ] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(935),
    [sym_comment] = ACTIONS(38),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(937),
    [anon_sym_using] = ACTIONS(937),
    [anon_sym_namespace] = ACTIONS(937),
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(937),
    [anon_sym_unsafe] = ACTIONS(937),
    [anon_sym_abstract] = ACTIONS(937),
    [anon_sym_sealed] = ACTIONS(937),
    [anon_sym_static] = ACTIONS(937),
    [anon_sym_new] = ACTIONS(937),
    [anon_sym_public] = ACTIONS(937),
    [anon_sym_protected] = ACTIONS(937),
    [anon_sym_internal] = ACTIONS(937),
    [anon_sym_private] = ACTIONS(937),
    [anon_sym_interface] = ACTIONS(937),
    [anon_sym_struct] = ACTIONS(937),
    [anon_sym_enum] = ACTIONS(937),
    [anon_sym_delegate] = ACTIONS(937),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_comment] = ACTIONS(38),
  },
  [410] = {
    [anon_sym_RBRACE] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(939),
    [sym_comment] = ACTIONS(38),
  },
  [411] = {
    [ts_builtin_sym_end] = ACTIONS(937),
    [anon_sym_SEMI] = ACTIONS(941),
    [anon_sym_using] = ACTIONS(937),
    [anon_sym_namespace] = ACTIONS(937),
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(937),
    [anon_sym_unsafe] = ACTIONS(937),
    [anon_sym_abstract] = ACTIONS(937),
    [anon_sym_sealed] = ACTIONS(937),
    [anon_sym_static] = ACTIONS(937),
    [anon_sym_new] = ACTIONS(937),
    [anon_sym_public] = ACTIONS(937),
    [anon_sym_protected] = ACTIONS(937),
    [anon_sym_internal] = ACTIONS(937),
    [anon_sym_private] = ACTIONS(937),
    [anon_sym_interface] = ACTIONS(937),
    [anon_sym_struct] = ACTIONS(937),
    [anon_sym_enum] = ACTIONS(937),
    [anon_sym_delegate] = ACTIONS(937),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_comment] = ACTIONS(38),
  },
  [412] = {
    [sym_enum_member_declaration] = STATE(540),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [413] = {
    [anon_sym_RBRACE] = ACTIONS(943),
    [anon_sym_COMMA] = ACTIONS(943),
    [sym_comment] = ACTIONS(38),
  },
  [414] = {
    [aux_sym_enum_declaration_repeat1] = STATE(542),
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [415] = {
    [sym_identifier_name] = ACTIONS(947),
    [sym_comment] = ACTIONS(38),
  },
  [416] = {
    [sym_array_rank_specifier] = STATE(545),
    [anon_sym_LBRACK] = ACTIONS(949),
    [sym_comment] = ACTIONS(38),
  },
  [417] = {
    [anon_sym_RBRACK] = ACTIONS(951),
    [sym_comment] = ACTIONS(38),
  },
  [418] = {
    [anon_sym_SEMI] = ACTIONS(953),
    [anon_sym_LBRACE] = ACTIONS(953),
    [sym_comment] = ACTIONS(38),
  },
  [419] = {
    [sym_parameter] = STATE(548),
    [sym_parameter_modifier] = STATE(307),
    [sym__attributes] = STATE(549),
    [sym__attribute_section] = STATE(550),
    [sym__type] = STATE(311),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(551),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(955),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [420] = {
    [anon_sym_RPAREN] = ACTIONS(957),
    [sym_comment] = ACTIONS(38),
  },
  [421] = {
    [sym_params_keyword] = ACTIONS(959),
    [sym_comment] = ACTIONS(38),
  },
  [422] = {
    [sym_parameter_array] = STATE(553),
    [sym__attributes] = STATE(421),
    [sym__attribute_section] = STATE(310),
    [aux_sym__attributes_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(961),
    [anon_sym_RPAREN] = ACTIONS(957),
    [sym_params_keyword] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(521),
    [sym_comment] = ACTIONS(38),
  },
  [423] = {
    [sym_identifier_name] = ACTIONS(963),
    [sym_comment] = ACTIONS(38),
  },
  [424] = {
    [sym_array_type] = STATE(555),
    [sym__type] = STATE(416),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [425] = {
    [sym__type] = STATE(556),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [426] = {
    [sym_equals_value_clause] = STATE(558),
    [anon_sym_COMMA] = ACTIONS(965),
    [anon_sym_RPAREN] = ACTIONS(965),
    [sym_params_keyword] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_EQ] = ACTIONS(967),
    [sym_comment] = ACTIONS(38),
  },
  [427] = {
    [anon_sym_sbyte] = ACTIONS(214),
    [anon_sym_byte] = ACTIONS(214),
    [anon_sym_short] = ACTIONS(214),
    [anon_sym_ushort] = ACTIONS(214),
    [anon_sym_int] = ACTIONS(214),
    [anon_sym_uint] = ACTIONS(214),
    [anon_sym_long] = ACTIONS(214),
    [anon_sym_ulong] = ACTIONS(214),
    [anon_sym_char] = ACTIONS(214),
    [anon_sym_ref] = ACTIONS(214),
    [anon_sym_out] = ACTIONS(214),
    [anon_sym_this] = ACTIONS(214),
    [sym_params_keyword] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_bool] = ACTIONS(214),
    [anon_sym_decimal] = ACTIONS(214),
    [anon_sym_double] = ACTIONS(214),
    [anon_sym_float] = ACTIONS(214),
    [anon_sym_object] = ACTIONS(214),
    [anon_sym_string] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(218),
    [sym_comment] = ACTIONS(38),
  },
  [428] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [429] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [430] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(973),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [431] = {
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [432] = {
    [sym_enum_member_declaration] = STATE(562),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [433] = {
    [ts_builtin_sym_end] = ACTIONS(975),
    [anon_sym_using] = ACTIONS(975),
    [anon_sym_namespace] = ACTIONS(975),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_class] = ACTIONS(975),
    [anon_sym_unsafe] = ACTIONS(975),
    [anon_sym_abstract] = ACTIONS(975),
    [anon_sym_sealed] = ACTIONS(975),
    [anon_sym_static] = ACTIONS(975),
    [anon_sym_new] = ACTIONS(975),
    [anon_sym_public] = ACTIONS(975),
    [anon_sym_protected] = ACTIONS(975),
    [anon_sym_internal] = ACTIONS(975),
    [anon_sym_private] = ACTIONS(975),
    [anon_sym_interface] = ACTIONS(975),
    [anon_sym_struct] = ACTIONS(975),
    [anon_sym_enum] = ACTIONS(975),
    [anon_sym_delegate] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(975),
    [sym_comment] = ACTIONS(38),
  },
  [434] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(563),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [435] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(564),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [436] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(565),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(973),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [437] = {
    [anon_sym_LBRACE] = ACTIONS(977),
    [sym_comment] = ACTIONS(38),
  },
  [438] = {
    [anon_sym_SEMI] = ACTIONS(979),
    [sym_comment] = ACTIONS(38),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(981),
    [anon_sym_unsafe] = ACTIONS(981),
    [anon_sym_abstract] = ACTIONS(981),
    [anon_sym_sealed] = ACTIONS(981),
    [anon_sym_static] = ACTIONS(981),
    [anon_sym_new] = ACTIONS(981),
    [anon_sym_public] = ACTIONS(981),
    [anon_sym_protected] = ACTIONS(981),
    [anon_sym_internal] = ACTIONS(981),
    [anon_sym_private] = ACTIONS(981),
    [anon_sym_interface] = ACTIONS(981),
    [anon_sym_struct] = ACTIONS(981),
    [anon_sym_enum] = ACTIONS(981),
    [anon_sym_sbyte] = ACTIONS(981),
    [anon_sym_byte] = ACTIONS(981),
    [anon_sym_short] = ACTIONS(981),
    [anon_sym_ushort] = ACTIONS(981),
    [anon_sym_int] = ACTIONS(981),
    [anon_sym_uint] = ACTIONS(981),
    [anon_sym_long] = ACTIONS(981),
    [anon_sym_ulong] = ACTIONS(981),
    [anon_sym_char] = ACTIONS(981),
    [anon_sym_delegate] = ACTIONS(981),
    [sym_void_keyword] = ACTIONS(981),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_const_keyword] = ACTIONS(981),
    [anon_sym_readonly] = ACTIONS(981),
    [anon_sym_volatile] = ACTIONS(981),
    [anon_sym_bool] = ACTIONS(981),
    [anon_sym_decimal] = ACTIONS(981),
    [anon_sym_double] = ACTIONS(981),
    [anon_sym_float] = ACTIONS(981),
    [anon_sym_object] = ACTIONS(981),
    [anon_sym_string] = ACTIONS(981),
    [sym_identifier_name] = ACTIONS(983),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(981),
  },
  [440] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [441] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(569),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [442] = {
    [anon_sym_RBRACE] = ACTIONS(443),
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
    [anon_sym_interface] = ACTIONS(987),
    [anon_sym_struct] = ACTIONS(987),
    [anon_sym_enum] = ACTIONS(987),
    [anon_sym_sbyte] = ACTIONS(987),
    [anon_sym_byte] = ACTIONS(987),
    [anon_sym_short] = ACTIONS(987),
    [anon_sym_ushort] = ACTIONS(987),
    [anon_sym_int] = ACTIONS(987),
    [anon_sym_uint] = ACTIONS(987),
    [anon_sym_long] = ACTIONS(987),
    [anon_sym_ulong] = ACTIONS(987),
    [anon_sym_char] = ACTIONS(987),
    [anon_sym_delegate] = ACTIONS(987),
    [sym_void_keyword] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_const_keyword] = ACTIONS(987),
    [anon_sym_readonly] = ACTIONS(987),
    [anon_sym_volatile] = ACTIONS(987),
    [anon_sym_bool] = ACTIONS(987),
    [anon_sym_decimal] = ACTIONS(987),
    [anon_sym_double] = ACTIONS(987),
    [anon_sym_float] = ACTIONS(987),
    [anon_sym_object] = ACTIONS(987),
    [anon_sym_string] = ACTIONS(987),
    [sym_identifier_name] = ACTIONS(989),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(987),
  },
  [443] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [444] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(571),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [445] = {
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_class] = ACTIONS(993),
    [anon_sym_unsafe] = ACTIONS(993),
    [anon_sym_abstract] = ACTIONS(993),
    [anon_sym_sealed] = ACTIONS(993),
    [anon_sym_static] = ACTIONS(993),
    [anon_sym_new] = ACTIONS(993),
    [anon_sym_public] = ACTIONS(993),
    [anon_sym_protected] = ACTIONS(993),
    [anon_sym_internal] = ACTIONS(993),
    [anon_sym_private] = ACTIONS(993),
    [anon_sym_interface] = ACTIONS(993),
    [anon_sym_struct] = ACTIONS(993),
    [anon_sym_enum] = ACTIONS(993),
    [anon_sym_sbyte] = ACTIONS(993),
    [anon_sym_byte] = ACTIONS(993),
    [anon_sym_short] = ACTIONS(993),
    [anon_sym_ushort] = ACTIONS(993),
    [anon_sym_int] = ACTIONS(993),
    [anon_sym_uint] = ACTIONS(993),
    [anon_sym_long] = ACTIONS(993),
    [anon_sym_ulong] = ACTIONS(993),
    [anon_sym_char] = ACTIONS(993),
    [anon_sym_delegate] = ACTIONS(993),
    [sym_void_keyword] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(459),
    [sym_const_keyword] = ACTIONS(993),
    [anon_sym_readonly] = ACTIONS(993),
    [anon_sym_volatile] = ACTIONS(993),
    [anon_sym_bool] = ACTIONS(993),
    [anon_sym_decimal] = ACTIONS(993),
    [anon_sym_double] = ACTIONS(993),
    [anon_sym_float] = ACTIONS(993),
    [anon_sym_object] = ACTIONS(993),
    [anon_sym_string] = ACTIONS(993),
    [sym_identifier_name] = ACTIONS(995),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(993),
  },
  [446] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [447] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(573),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [448] = {
    [aux_sym_enum_declaration_repeat1] = STATE(575),
    [anon_sym_RBRACE] = ACTIONS(999),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [449] = {
    [anon_sym_LBRACE] = ACTIONS(1001),
    [sym_comment] = ACTIONS(38),
  },
  [450] = {
    [anon_sym_SEMI] = ACTIONS(1003),
    [sym_comment] = ACTIONS(38),
  },
  [451] = {
    [anon_sym_SEMI] = ACTIONS(1005),
    [anon_sym_RBRACE] = ACTIONS(1005),
    [anon_sym_PLUS] = ACTIONS(1007),
    [anon_sym_DASH] = ACTIONS(1007),
    [anon_sym_BANG] = ACTIONS(1005),
    [anon_sym_TILDE] = ACTIONS(1005),
    [anon_sym_typeof] = ACTIONS(1007),
    [anon_sym_DASH_DASH] = ACTIONS(1005),
    [anon_sym_PLUS_PLUS] = ACTIONS(1005),
    [anon_sym_true] = ACTIONS(1007),
    [anon_sym_false] = ACTIONS(1007),
    [anon_sym_SQUOTE] = ACTIONS(1005),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1007),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1007),
    [sym_null_literal] = ACTIONS(1007),
    [anon_sym_DOT] = ACTIONS(1005),
    [anon_sym_DQUOTE] = ACTIONS(1005),
    [anon_sym_AT_DQUOTE] = ACTIONS(1005),
    [sym_identifier_name] = ACTIONS(1009),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1007),
  },
  [452] = {
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_class] = ACTIONS(1013),
    [anon_sym_unsafe] = ACTIONS(1013),
    [anon_sym_abstract] = ACTIONS(1013),
    [anon_sym_sealed] = ACTIONS(1013),
    [anon_sym_static] = ACTIONS(1013),
    [anon_sym_new] = ACTIONS(1013),
    [anon_sym_public] = ACTIONS(1013),
    [anon_sym_protected] = ACTIONS(1013),
    [anon_sym_internal] = ACTIONS(1013),
    [anon_sym_private] = ACTIONS(1013),
    [anon_sym_interface] = ACTIONS(1013),
    [anon_sym_struct] = ACTIONS(1013),
    [anon_sym_enum] = ACTIONS(1013),
    [anon_sym_sbyte] = ACTIONS(1013),
    [anon_sym_byte] = ACTIONS(1013),
    [anon_sym_short] = ACTIONS(1013),
    [anon_sym_ushort] = ACTIONS(1013),
    [anon_sym_int] = ACTIONS(1013),
    [anon_sym_uint] = ACTIONS(1013),
    [anon_sym_long] = ACTIONS(1013),
    [anon_sym_ulong] = ACTIONS(1013),
    [anon_sym_char] = ACTIONS(1013),
    [anon_sym_delegate] = ACTIONS(1013),
    [sym_void_keyword] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1011),
    [sym_const_keyword] = ACTIONS(1013),
    [anon_sym_readonly] = ACTIONS(1013),
    [anon_sym_volatile] = ACTIONS(1013),
    [anon_sym_bool] = ACTIONS(1013),
    [anon_sym_decimal] = ACTIONS(1013),
    [anon_sym_double] = ACTIONS(1013),
    [anon_sym_float] = ACTIONS(1013),
    [anon_sym_object] = ACTIONS(1013),
    [anon_sym_string] = ACTIONS(1013),
    [sym_identifier_name] = ACTIONS(1015),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1013),
  },
  [453] = {
    [sym__expression] = STATE(513),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [454] = {
    [sym_equals_value_clause] = STATE(579),
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_EQ] = ACTIONS(1017),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(901),
    [anon_sym_PIPE_PIPE] = ACTIONS(901),
    [anon_sym_GT_GT] = ACTIONS(901),
    [anon_sym_LT_LT] = ACTIONS(901),
    [anon_sym_AMP] = ACTIONS(903),
    [anon_sym_CARET] = ACTIONS(901),
    [anon_sym_PIPE] = ACTIONS(903),
    [anon_sym_PLUS] = ACTIONS(901),
    [anon_sym_DASH] = ACTIONS(901),
    [anon_sym_STAR] = ACTIONS(901),
    [anon_sym_SLASH] = ACTIONS(903),
    [anon_sym_PERCENT] = ACTIONS(901),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_LT_EQ] = ACTIONS(901),
    [anon_sym_EQ_EQ] = ACTIONS(901),
    [anon_sym_BANG_EQ] = ACTIONS(901),
    [anon_sym_GT_EQ] = ACTIONS(901),
    [anon_sym_GT] = ACTIONS(903),
    [sym_comment] = ACTIONS(38),
  },
  [455] = {
    [sym__expression] = STATE(580),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [456] = {
    [anon_sym_SEMI] = ACTIONS(1019),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1023),
    [anon_sym_PIPE_PIPE] = ACTIONS(1025),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1033),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [457] = {
    [anon_sym_SEMI] = ACTIONS(1047),
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_PLUS] = ACTIONS(1049),
    [anon_sym_DASH] = ACTIONS(1049),
    [anon_sym_BANG] = ACTIONS(1047),
    [anon_sym_TILDE] = ACTIONS(1047),
    [anon_sym_typeof] = ACTIONS(1049),
    [anon_sym_DASH_DASH] = ACTIONS(1047),
    [anon_sym_PLUS_PLUS] = ACTIONS(1047),
    [anon_sym_true] = ACTIONS(1049),
    [anon_sym_false] = ACTIONS(1049),
    [anon_sym_SQUOTE] = ACTIONS(1047),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1049),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1049),
    [sym_null_literal] = ACTIONS(1049),
    [anon_sym_DOT] = ACTIONS(1047),
    [anon_sym_DQUOTE] = ACTIONS(1047),
    [anon_sym_AT_DQUOTE] = ACTIONS(1047),
    [sym_identifier_name] = ACTIONS(1051),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1049),
  },
  [458] = {
    [anon_sym_SEMI] = ACTIONS(1053),
    [anon_sym_RBRACE] = ACTIONS(1053),
    [anon_sym_PLUS] = ACTIONS(1055),
    [anon_sym_DASH] = ACTIONS(1055),
    [anon_sym_BANG] = ACTIONS(1053),
    [anon_sym_TILDE] = ACTIONS(1053),
    [anon_sym_typeof] = ACTIONS(1055),
    [anon_sym_DASH_DASH] = ACTIONS(1053),
    [anon_sym_PLUS_PLUS] = ACTIONS(1053),
    [anon_sym_true] = ACTIONS(1055),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_SQUOTE] = ACTIONS(1053),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1055),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1055),
    [sym_null_literal] = ACTIONS(1055),
    [anon_sym_DOT] = ACTIONS(1053),
    [anon_sym_DQUOTE] = ACTIONS(1053),
    [anon_sym_AT_DQUOTE] = ACTIONS(1053),
    [sym_identifier_name] = ACTIONS(1057),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1055),
  },
  [459] = {
    [sym__expression] = STATE(456),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [sym__statement] = STATE(593),
    [sym_expression_statement] = STATE(458),
    [sym_return_statement] = STATE(458),
    [sym_variable_assignment_statement] = STATE(458),
    [sym_empty_statement] = STATE(458),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(781),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(783),
  },
  [460] = {
    [anon_sym_RBRACE] = ACTIONS(1061),
    [anon_sym_class] = ACTIONS(1063),
    [anon_sym_unsafe] = ACTIONS(1063),
    [anon_sym_abstract] = ACTIONS(1063),
    [anon_sym_sealed] = ACTIONS(1063),
    [anon_sym_static] = ACTIONS(1063),
    [anon_sym_new] = ACTIONS(1063),
    [anon_sym_public] = ACTIONS(1063),
    [anon_sym_protected] = ACTIONS(1063),
    [anon_sym_internal] = ACTIONS(1063),
    [anon_sym_private] = ACTIONS(1063),
    [anon_sym_interface] = ACTIONS(1063),
    [anon_sym_struct] = ACTIONS(1063),
    [anon_sym_enum] = ACTIONS(1063),
    [anon_sym_sbyte] = ACTIONS(1063),
    [anon_sym_byte] = ACTIONS(1063),
    [anon_sym_short] = ACTIONS(1063),
    [anon_sym_ushort] = ACTIONS(1063),
    [anon_sym_int] = ACTIONS(1063),
    [anon_sym_uint] = ACTIONS(1063),
    [anon_sym_long] = ACTIONS(1063),
    [anon_sym_ulong] = ACTIONS(1063),
    [anon_sym_char] = ACTIONS(1063),
    [anon_sym_delegate] = ACTIONS(1063),
    [sym_void_keyword] = ACTIONS(1063),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [sym_const_keyword] = ACTIONS(1063),
    [anon_sym_readonly] = ACTIONS(1063),
    [anon_sym_volatile] = ACTIONS(1063),
    [anon_sym_bool] = ACTIONS(1063),
    [anon_sym_decimal] = ACTIONS(1063),
    [anon_sym_double] = ACTIONS(1063),
    [anon_sym_float] = ACTIONS(1063),
    [anon_sym_object] = ACTIONS(1063),
    [anon_sym_string] = ACTIONS(1063),
    [sym_identifier_name] = ACTIONS(1065),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1063),
  },
  [461] = {
    [sym_statement_block] = STATE(594),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [462] = {
    [sym_parameter_list] = STATE(595),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [463] = {
    [anon_sym_LBRACE] = ACTIONS(1067),
    [sym_comment] = ACTIONS(38),
  },
  [464] = {
    [anon_sym_LBRACE] = ACTIONS(1069),
    [sym_comment] = ACTIONS(38),
  },
  [465] = {
    [anon_sym_LBRACE] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [466] = {
    [sym_enum_member_declaration] = STATE(599),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [467] = {
    [sym__integral_type] = STATE(600),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [468] = {
    [sym_parameter_list] = STATE(601),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [469] = {
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_class] = ACTIONS(1075),
    [anon_sym_unsafe] = ACTIONS(1075),
    [anon_sym_abstract] = ACTIONS(1075),
    [anon_sym_sealed] = ACTIONS(1075),
    [anon_sym_static] = ACTIONS(1075),
    [anon_sym_new] = ACTIONS(1075),
    [anon_sym_public] = ACTIONS(1075),
    [anon_sym_protected] = ACTIONS(1075),
    [anon_sym_internal] = ACTIONS(1075),
    [anon_sym_private] = ACTIONS(1075),
    [anon_sym_interface] = ACTIONS(1075),
    [anon_sym_struct] = ACTIONS(1075),
    [anon_sym_enum] = ACTIONS(1075),
    [anon_sym_sbyte] = ACTIONS(1075),
    [anon_sym_byte] = ACTIONS(1075),
    [anon_sym_short] = ACTIONS(1075),
    [anon_sym_ushort] = ACTIONS(1075),
    [anon_sym_int] = ACTIONS(1075),
    [anon_sym_uint] = ACTIONS(1075),
    [anon_sym_long] = ACTIONS(1075),
    [anon_sym_ulong] = ACTIONS(1075),
    [anon_sym_char] = ACTIONS(1075),
    [anon_sym_delegate] = ACTIONS(1075),
    [sym_void_keyword] = ACTIONS(1075),
    [anon_sym_LBRACK] = ACTIONS(1073),
    [sym_const_keyword] = ACTIONS(1075),
    [anon_sym_readonly] = ACTIONS(1075),
    [anon_sym_volatile] = ACTIONS(1075),
    [anon_sym_bool] = ACTIONS(1075),
    [anon_sym_decimal] = ACTIONS(1075),
    [anon_sym_double] = ACTIONS(1075),
    [anon_sym_float] = ACTIONS(1075),
    [anon_sym_object] = ACTIONS(1075),
    [anon_sym_string] = ACTIONS(1075),
    [sym_identifier_name] = ACTIONS(1077),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1075),
  },
  [470] = {
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_class] = ACTIONS(1081),
    [anon_sym_unsafe] = ACTIONS(1081),
    [anon_sym_abstract] = ACTIONS(1081),
    [anon_sym_sealed] = ACTIONS(1081),
    [anon_sym_static] = ACTIONS(1081),
    [anon_sym_new] = ACTIONS(1081),
    [anon_sym_public] = ACTIONS(1081),
    [anon_sym_protected] = ACTIONS(1081),
    [anon_sym_internal] = ACTIONS(1081),
    [anon_sym_private] = ACTIONS(1081),
    [anon_sym_interface] = ACTIONS(1081),
    [anon_sym_struct] = ACTIONS(1081),
    [anon_sym_enum] = ACTIONS(1081),
    [anon_sym_sbyte] = ACTIONS(1081),
    [anon_sym_byte] = ACTIONS(1081),
    [anon_sym_short] = ACTIONS(1081),
    [anon_sym_ushort] = ACTIONS(1081),
    [anon_sym_int] = ACTIONS(1081),
    [anon_sym_uint] = ACTIONS(1081),
    [anon_sym_long] = ACTIONS(1081),
    [anon_sym_ulong] = ACTIONS(1081),
    [anon_sym_char] = ACTIONS(1081),
    [anon_sym_delegate] = ACTIONS(1081),
    [sym_void_keyword] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_const_keyword] = ACTIONS(1081),
    [anon_sym_readonly] = ACTIONS(1081),
    [anon_sym_volatile] = ACTIONS(1081),
    [anon_sym_bool] = ACTIONS(1081),
    [anon_sym_decimal] = ACTIONS(1081),
    [anon_sym_double] = ACTIONS(1081),
    [anon_sym_float] = ACTIONS(1081),
    [anon_sym_object] = ACTIONS(1081),
    [anon_sym_string] = ACTIONS(1081),
    [sym_identifier_name] = ACTIONS(1083),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1081),
  },
  [471] = {
    [sym_statement_block] = STATE(602),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [472] = {
    [sym_parameter_list] = STATE(595),
    [sym_type_parameter_list] = STATE(603),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [473] = {
    [sym_type_parameter_list] = STATE(604),
    [anon_sym_LBRACE] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [474] = {
    [sym_type_parameter_list] = STATE(605),
    [anon_sym_LBRACE] = ACTIONS(1069),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [475] = {
    [sym_type_parameter_list] = STATE(606),
    [anon_sym_LBRACE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [476] = {
    [anon_sym_LBRACE] = ACTIONS(1001),
    [anon_sym_COLON] = ACTIONS(1085),
    [sym_comment] = ACTIONS(38),
  },
  [477] = {
    [sym_identifier_name] = ACTIONS(1087),
    [sym_comment] = ACTIONS(38),
  },
  [478] = {
    [anon_sym_SEMI] = ACTIONS(1089),
    [sym_comment] = ACTIONS(38),
  },
  [479] = {
    [sym_parameter_list] = STATE(610),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [480] = {
    [sym_identifier_name] = ACTIONS(1091),
    [sym_comment] = ACTIONS(38),
  },
  [481] = {
    [sym__expression] = STATE(513),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [482] = {
    [anon_sym_SEMI] = ACTIONS(905),
    [anon_sym_COMMA] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(1093),
    [anon_sym_AMP_AMP] = ACTIONS(1095),
    [anon_sym_PIPE_PIPE] = ACTIONS(1097),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1103),
    [anon_sym_PIPE] = ACTIONS(1105),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1117),
    [anon_sym_BANG_EQ] = ACTIONS(1117),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [483] = {
    [anon_sym_SEMI] = ACTIONS(1119),
    [anon_sym_COMMA] = ACTIONS(1119),
    [sym_comment] = ACTIONS(38),
  },
  [484] = {
    [sym_variable_declarator] = STATE(622),
    [sym_identifier_name] = ACTIONS(455),
    [sym_comment] = ACTIONS(38),
  },
  [485] = {
    [anon_sym_COMMA] = ACTIONS(1121),
    [anon_sym_GT] = ACTIONS(1121),
    [sym_comment] = ACTIONS(38),
  },
  [486] = {
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_unsafe] = ACTIONS(1081),
    [anon_sym_static] = ACTIONS(1081),
    [anon_sym_new] = ACTIONS(1081),
    [anon_sym_public] = ACTIONS(1081),
    [anon_sym_protected] = ACTIONS(1081),
    [anon_sym_internal] = ACTIONS(1081),
    [anon_sym_private] = ACTIONS(1081),
    [anon_sym_sbyte] = ACTIONS(1081),
    [anon_sym_byte] = ACTIONS(1081),
    [anon_sym_short] = ACTIONS(1081),
    [anon_sym_ushort] = ACTIONS(1081),
    [anon_sym_int] = ACTIONS(1081),
    [anon_sym_uint] = ACTIONS(1081),
    [anon_sym_long] = ACTIONS(1081),
    [anon_sym_ulong] = ACTIONS(1081),
    [anon_sym_char] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_const_keyword] = ACTIONS(1081),
    [anon_sym_readonly] = ACTIONS(1081),
    [anon_sym_volatile] = ACTIONS(1081),
    [anon_sym_bool] = ACTIONS(1081),
    [anon_sym_decimal] = ACTIONS(1081),
    [anon_sym_double] = ACTIONS(1081),
    [anon_sym_float] = ACTIONS(1081),
    [anon_sym_object] = ACTIONS(1081),
    [anon_sym_string] = ACTIONS(1081),
    [sym_identifier_name] = ACTIONS(1083),
    [sym_comment] = ACTIONS(38),
  },
  [487] = {
    [anon_sym_SEMI] = ACTIONS(1123),
    [sym_comment] = ACTIONS(38),
  },
  [488] = {
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(981),
    [anon_sym_unsafe] = ACTIONS(981),
    [anon_sym_abstract] = ACTIONS(981),
    [anon_sym_sealed] = ACTIONS(981),
    [anon_sym_static] = ACTIONS(981),
    [anon_sym_new] = ACTIONS(981),
    [anon_sym_public] = ACTIONS(981),
    [anon_sym_protected] = ACTIONS(981),
    [anon_sym_internal] = ACTIONS(981),
    [anon_sym_private] = ACTIONS(981),
    [anon_sym_interface] = ACTIONS(981),
    [anon_sym_struct] = ACTIONS(981),
    [anon_sym_enum] = ACTIONS(981),
    [anon_sym_sbyte] = ACTIONS(981),
    [anon_sym_byte] = ACTIONS(981),
    [anon_sym_short] = ACTIONS(981),
    [anon_sym_ushort] = ACTIONS(981),
    [anon_sym_int] = ACTIONS(981),
    [anon_sym_uint] = ACTIONS(981),
    [anon_sym_long] = ACTIONS(981),
    [anon_sym_ulong] = ACTIONS(981),
    [anon_sym_char] = ACTIONS(981),
    [anon_sym_delegate] = ACTIONS(981),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_const_keyword] = ACTIONS(981),
    [anon_sym_readonly] = ACTIONS(981),
    [anon_sym_volatile] = ACTIONS(981),
    [anon_sym_bool] = ACTIONS(981),
    [anon_sym_decimal] = ACTIONS(981),
    [anon_sym_double] = ACTIONS(981),
    [anon_sym_float] = ACTIONS(981),
    [anon_sym_object] = ACTIONS(981),
    [anon_sym_string] = ACTIONS(981),
    [sym_identifier_name] = ACTIONS(983),
    [sym_comment] = ACTIONS(38),
  },
  [489] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [490] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(625),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(443),
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
    [anon_sym_interface] = ACTIONS(987),
    [anon_sym_struct] = ACTIONS(987),
    [anon_sym_enum] = ACTIONS(987),
    [anon_sym_sbyte] = ACTIONS(987),
    [anon_sym_byte] = ACTIONS(987),
    [anon_sym_short] = ACTIONS(987),
    [anon_sym_ushort] = ACTIONS(987),
    [anon_sym_int] = ACTIONS(987),
    [anon_sym_uint] = ACTIONS(987),
    [anon_sym_long] = ACTIONS(987),
    [anon_sym_ulong] = ACTIONS(987),
    [anon_sym_char] = ACTIONS(987),
    [anon_sym_delegate] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_const_keyword] = ACTIONS(987),
    [anon_sym_readonly] = ACTIONS(987),
    [anon_sym_volatile] = ACTIONS(987),
    [anon_sym_bool] = ACTIONS(987),
    [anon_sym_decimal] = ACTIONS(987),
    [anon_sym_double] = ACTIONS(987),
    [anon_sym_float] = ACTIONS(987),
    [anon_sym_object] = ACTIONS(987),
    [anon_sym_string] = ACTIONS(987),
    [sym_identifier_name] = ACTIONS(989),
    [sym_comment] = ACTIONS(38),
  },
  [492] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1127),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [493] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(627),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1127),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [494] = {
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_class] = ACTIONS(993),
    [anon_sym_unsafe] = ACTIONS(993),
    [anon_sym_abstract] = ACTIONS(993),
    [anon_sym_sealed] = ACTIONS(993),
    [anon_sym_static] = ACTIONS(993),
    [anon_sym_new] = ACTIONS(993),
    [anon_sym_public] = ACTIONS(993),
    [anon_sym_protected] = ACTIONS(993),
    [anon_sym_internal] = ACTIONS(993),
    [anon_sym_private] = ACTIONS(993),
    [anon_sym_interface] = ACTIONS(993),
    [anon_sym_struct] = ACTIONS(993),
    [anon_sym_enum] = ACTIONS(993),
    [anon_sym_sbyte] = ACTIONS(993),
    [anon_sym_byte] = ACTIONS(993),
    [anon_sym_short] = ACTIONS(993),
    [anon_sym_ushort] = ACTIONS(993),
    [anon_sym_int] = ACTIONS(993),
    [anon_sym_uint] = ACTIONS(993),
    [anon_sym_long] = ACTIONS(993),
    [anon_sym_ulong] = ACTIONS(993),
    [anon_sym_char] = ACTIONS(993),
    [anon_sym_delegate] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(459),
    [sym_const_keyword] = ACTIONS(993),
    [anon_sym_readonly] = ACTIONS(993),
    [anon_sym_volatile] = ACTIONS(993),
    [anon_sym_bool] = ACTIONS(993),
    [anon_sym_decimal] = ACTIONS(993),
    [anon_sym_double] = ACTIONS(993),
    [anon_sym_float] = ACTIONS(993),
    [anon_sym_object] = ACTIONS(993),
    [anon_sym_string] = ACTIONS(993),
    [sym_identifier_name] = ACTIONS(995),
    [sym_comment] = ACTIONS(38),
  },
  [495] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1129),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [496] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(629),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1129),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [497] = {
    [aux_sym_enum_declaration_repeat1] = STATE(631),
    [anon_sym_RBRACE] = ACTIONS(1131),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [498] = {
    [anon_sym_LBRACE] = ACTIONS(1133),
    [sym_comment] = ACTIONS(38),
  },
  [499] = {
    [anon_sym_SEMI] = ACTIONS(1135),
    [sym_comment] = ACTIONS(38),
  },
  [500] = {
    [anon_sym_LBRACE] = ACTIONS(1137),
    [sym_comment] = ACTIONS(38),
  },
  [501] = {
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym_comment] = ACTIONS(38),
  },
  [502] = {
    [anon_sym_LBRACE] = ACTIONS(1141),
    [sym_comment] = ACTIONS(38),
  },
  [503] = {
    [sym_enum_member_declaration] = STATE(637),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [504] = {
    [sym__integral_type] = STATE(638),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [505] = {
    [sym_parameter_list] = STATE(639),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [506] = {
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_class] = ACTIONS(1081),
    [anon_sym_unsafe] = ACTIONS(1081),
    [anon_sym_abstract] = ACTIONS(1081),
    [anon_sym_sealed] = ACTIONS(1081),
    [anon_sym_static] = ACTIONS(1081),
    [anon_sym_new] = ACTIONS(1081),
    [anon_sym_public] = ACTIONS(1081),
    [anon_sym_protected] = ACTIONS(1081),
    [anon_sym_internal] = ACTIONS(1081),
    [anon_sym_private] = ACTIONS(1081),
    [anon_sym_interface] = ACTIONS(1081),
    [anon_sym_struct] = ACTIONS(1081),
    [anon_sym_enum] = ACTIONS(1081),
    [anon_sym_sbyte] = ACTIONS(1081),
    [anon_sym_byte] = ACTIONS(1081),
    [anon_sym_short] = ACTIONS(1081),
    [anon_sym_ushort] = ACTIONS(1081),
    [anon_sym_int] = ACTIONS(1081),
    [anon_sym_uint] = ACTIONS(1081),
    [anon_sym_long] = ACTIONS(1081),
    [anon_sym_ulong] = ACTIONS(1081),
    [anon_sym_char] = ACTIONS(1081),
    [anon_sym_delegate] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_const_keyword] = ACTIONS(1081),
    [anon_sym_readonly] = ACTIONS(1081),
    [anon_sym_volatile] = ACTIONS(1081),
    [anon_sym_bool] = ACTIONS(1081),
    [anon_sym_decimal] = ACTIONS(1081),
    [anon_sym_double] = ACTIONS(1081),
    [anon_sym_float] = ACTIONS(1081),
    [anon_sym_object] = ACTIONS(1081),
    [anon_sym_string] = ACTIONS(1081),
    [sym_identifier_name] = ACTIONS(1083),
    [sym_comment] = ACTIONS(38),
  },
  [507] = {
    [sym_type_parameter_list] = STATE(640),
    [anon_sym_LBRACE] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [508] = {
    [sym_type_parameter_list] = STATE(641),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [509] = {
    [sym_type_parameter_list] = STATE(642),
    [anon_sym_LBRACE] = ACTIONS(1141),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [510] = {
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_COLON] = ACTIONS(1143),
    [sym_comment] = ACTIONS(38),
  },
  [511] = {
    [sym_identifier_name] = ACTIONS(1145),
    [sym_comment] = ACTIONS(38),
  },
  [512] = {
    [anon_sym_SEMI] = ACTIONS(1147),
    [sym_comment] = ACTIONS(38),
  },
  [513] = {
    [anon_sym_SEMI] = ACTIONS(1149),
    [anon_sym_RBRACE] = ACTIONS(1149),
    [anon_sym_COLON] = ACTIONS(1149),
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1149),
    [sym_params_keyword] = ACTIONS(1149),
    [anon_sym_LBRACK] = ACTIONS(1149),
    [anon_sym_QMARK] = ACTIONS(1149),
    [anon_sym_AMP_AMP] = ACTIONS(1149),
    [anon_sym_PIPE_PIPE] = ACTIONS(1149),
    [anon_sym_GT_GT] = ACTIONS(1149),
    [anon_sym_LT_LT] = ACTIONS(1149),
    [anon_sym_AMP] = ACTIONS(1151),
    [anon_sym_CARET] = ACTIONS(1149),
    [anon_sym_PIPE] = ACTIONS(1151),
    [anon_sym_PLUS] = ACTIONS(1149),
    [anon_sym_DASH] = ACTIONS(1149),
    [anon_sym_STAR] = ACTIONS(1149),
    [anon_sym_SLASH] = ACTIONS(1151),
    [anon_sym_PERCENT] = ACTIONS(1149),
    [anon_sym_LT] = ACTIONS(1151),
    [anon_sym_LT_EQ] = ACTIONS(1149),
    [anon_sym_EQ_EQ] = ACTIONS(1149),
    [anon_sym_BANG_EQ] = ACTIONS(1149),
    [anon_sym_GT_EQ] = ACTIONS(1149),
    [anon_sym_GT] = ACTIONS(1151),
    [sym_comment] = ACTIONS(38),
  },
  [514] = {
    [anon_sym_SQUOTE] = ACTIONS(1153),
    [sym_comment] = ACTIONS(38),
  },
  [515] = {
    [anon_sym_SQUOTE] = ACTIONS(1155),
    [sym_comment] = ACTIONS(38),
  },
  [516] = {
    [anon_sym_SQUOTE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(38),
  },
  [517] = {
    [anon_sym_SEMI] = ACTIONS(1159),
    [anon_sym_RBRACE] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
    [anon_sym_COMMA] = ACTIONS(1159),
    [anon_sym_RPAREN] = ACTIONS(1159),
    [sym_params_keyword] = ACTIONS(1159),
    [anon_sym_LBRACK] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(1159),
    [anon_sym_PIPE_PIPE] = ACTIONS(1159),
    [anon_sym_GT_GT] = ACTIONS(1159),
    [anon_sym_LT_LT] = ACTIONS(1159),
    [anon_sym_AMP] = ACTIONS(1161),
    [anon_sym_CARET] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1161),
    [anon_sym_PLUS] = ACTIONS(1159),
    [anon_sym_DASH] = ACTIONS(1159),
    [anon_sym_STAR] = ACTIONS(1159),
    [anon_sym_SLASH] = ACTIONS(1161),
    [anon_sym_PERCENT] = ACTIONS(1159),
    [anon_sym_LT] = ACTIONS(1161),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_GT] = ACTIONS(1161),
    [sym_comment] = ACTIONS(38),
  },
  [518] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1163),
    [sym_comment] = ACTIONS(38),
  },
  [519] = {
    [anon_sym_SEMI] = ACTIONS(1165),
    [anon_sym_RBRACE] = ACTIONS(1165),
    [anon_sym_COLON] = ACTIONS(1165),
    [anon_sym_COMMA] = ACTIONS(1165),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [sym_params_keyword] = ACTIONS(1165),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [anon_sym_QMARK] = ACTIONS(1165),
    [anon_sym_AMP_AMP] = ACTIONS(1165),
    [anon_sym_PIPE_PIPE] = ACTIONS(1165),
    [anon_sym_GT_GT] = ACTIONS(1165),
    [anon_sym_LT_LT] = ACTIONS(1165),
    [anon_sym_AMP] = ACTIONS(1167),
    [anon_sym_CARET] = ACTIONS(1165),
    [anon_sym_PIPE] = ACTIONS(1167),
    [anon_sym_PLUS] = ACTIONS(1165),
    [anon_sym_DASH] = ACTIONS(1165),
    [anon_sym_STAR] = ACTIONS(1165),
    [anon_sym_SLASH] = ACTIONS(1167),
    [anon_sym_PERCENT] = ACTIONS(1165),
    [anon_sym_LT] = ACTIONS(1167),
    [anon_sym_LT_EQ] = ACTIONS(1165),
    [anon_sym_EQ_EQ] = ACTIONS(1165),
    [anon_sym_BANG_EQ] = ACTIONS(1165),
    [anon_sym_GT_EQ] = ACTIONS(1165),
    [anon_sym_GT] = ACTIONS(1167),
    [sym_comment] = ACTIONS(38),
  },
  [520] = {
    [anon_sym_SEMI] = ACTIONS(1165),
    [anon_sym_RBRACE] = ACTIONS(1165),
    [anon_sym_COLON] = ACTIONS(1165),
    [anon_sym_COMMA] = ACTIONS(1165),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [sym_params_keyword] = ACTIONS(1165),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [anon_sym_QMARK] = ACTIONS(1165),
    [anon_sym_AMP_AMP] = ACTIONS(1165),
    [anon_sym_PIPE_PIPE] = ACTIONS(1165),
    [anon_sym_GT_GT] = ACTIONS(1165),
    [anon_sym_LT_LT] = ACTIONS(1165),
    [anon_sym_AMP] = ACTIONS(1167),
    [anon_sym_CARET] = ACTIONS(1165),
    [anon_sym_PIPE] = ACTIONS(1167),
    [anon_sym_PLUS] = ACTIONS(1165),
    [anon_sym_DASH] = ACTIONS(1165),
    [anon_sym_STAR] = ACTIONS(1165),
    [anon_sym_SLASH] = ACTIONS(1167),
    [anon_sym_PERCENT] = ACTIONS(1165),
    [anon_sym_LT] = ACTIONS(1167),
    [anon_sym_LT_EQ] = ACTIONS(1165),
    [anon_sym_EQ_EQ] = ACTIONS(1165),
    [anon_sym_BANG_EQ] = ACTIONS(1165),
    [anon_sym_GT_EQ] = ACTIONS(1165),
    [anon_sym_GT] = ACTIONS(1167),
    [sym__real_type_suffix] = ACTIONS(1169),
    [sym_comment] = ACTIONS(38),
  },
  [521] = {
    [anon_sym_SEMI] = ACTIONS(1165),
    [anon_sym_RBRACE] = ACTIONS(1165),
    [anon_sym_COLON] = ACTIONS(1165),
    [anon_sym_COMMA] = ACTIONS(1165),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [sym_params_keyword] = ACTIONS(1165),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [anon_sym_QMARK] = ACTIONS(1165),
    [anon_sym_AMP_AMP] = ACTIONS(1165),
    [anon_sym_PIPE_PIPE] = ACTIONS(1165),
    [anon_sym_GT_GT] = ACTIONS(1165),
    [anon_sym_LT_LT] = ACTIONS(1165),
    [anon_sym_AMP] = ACTIONS(1167),
    [anon_sym_CARET] = ACTIONS(1165),
    [anon_sym_PIPE] = ACTIONS(1167),
    [anon_sym_PLUS] = ACTIONS(1165),
    [anon_sym_DASH] = ACTIONS(1165),
    [anon_sym_STAR] = ACTIONS(1165),
    [anon_sym_SLASH] = ACTIONS(1167),
    [anon_sym_PERCENT] = ACTIONS(1165),
    [anon_sym_LT] = ACTIONS(1167),
    [anon_sym_LT_EQ] = ACTIONS(1165),
    [anon_sym_EQ_EQ] = ACTIONS(1165),
    [anon_sym_BANG_EQ] = ACTIONS(1165),
    [anon_sym_GT_EQ] = ACTIONS(1165),
    [anon_sym_GT] = ACTIONS(1167),
    [sym__real_type_suffix] = ACTIONS(1169),
    [sym__exponent_part] = ACTIONS(1171),
    [sym_comment] = ACTIONS(38),
  },
  [522] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1173),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1173),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1173),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1173),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1173),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1173),
    [anon_sym_BSLASH0] = ACTIONS(1173),
    [anon_sym_BSLASHa] = ACTIONS(1173),
    [anon_sym_BSLASHb] = ACTIONS(1173),
    [anon_sym_BSLASHf] = ACTIONS(1173),
    [anon_sym_BSLASHn] = ACTIONS(1173),
    [anon_sym_BSLASHr] = ACTIONS(1173),
    [anon_sym_BSLASHt] = ACTIONS(1173),
    [anon_sym_BSLASHv] = ACTIONS(1173),
    [anon_sym_DQUOTE] = ACTIONS(1173),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1173),
    [sym_comment] = ACTIONS(871),
  },
  [523] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1175),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1175),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1175),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1175),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1175),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1175),
    [anon_sym_BSLASH0] = ACTIONS(1175),
    [anon_sym_BSLASHa] = ACTIONS(1175),
    [anon_sym_BSLASHb] = ACTIONS(1175),
    [anon_sym_BSLASHf] = ACTIONS(1175),
    [anon_sym_BSLASHn] = ACTIONS(1175),
    [anon_sym_BSLASHr] = ACTIONS(1175),
    [anon_sym_BSLASHt] = ACTIONS(1175),
    [anon_sym_BSLASHv] = ACTIONS(1175),
    [anon_sym_DQUOTE] = ACTIONS(1175),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1175),
    [sym_comment] = ACTIONS(871),
  },
  [524] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1177),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1177),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1177),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1177),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1177),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1177),
    [anon_sym_BSLASH0] = ACTIONS(1177),
    [anon_sym_BSLASHa] = ACTIONS(1177),
    [anon_sym_BSLASHb] = ACTIONS(1177),
    [anon_sym_BSLASHf] = ACTIONS(1177),
    [anon_sym_BSLASHn] = ACTIONS(1177),
    [anon_sym_BSLASHr] = ACTIONS(1177),
    [anon_sym_BSLASHt] = ACTIONS(1177),
    [anon_sym_BSLASHv] = ACTIONS(1177),
    [anon_sym_DQUOTE] = ACTIONS(1177),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1177),
    [sym_comment] = ACTIONS(871),
  },
  [525] = {
    [anon_sym_SEMI] = ACTIONS(1179),
    [anon_sym_RBRACE] = ACTIONS(1179),
    [anon_sym_COLON] = ACTIONS(1179),
    [anon_sym_COMMA] = ACTIONS(1179),
    [anon_sym_RPAREN] = ACTIONS(1179),
    [sym_params_keyword] = ACTIONS(1179),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [anon_sym_QMARK] = ACTIONS(1179),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1179),
    [anon_sym_GT_GT] = ACTIONS(1179),
    [anon_sym_LT_LT] = ACTIONS(1179),
    [anon_sym_AMP] = ACTIONS(1181),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1179),
    [anon_sym_DASH] = ACTIONS(1179),
    [anon_sym_STAR] = ACTIONS(1179),
    [anon_sym_SLASH] = ACTIONS(1181),
    [anon_sym_PERCENT] = ACTIONS(1179),
    [anon_sym_LT] = ACTIONS(1181),
    [anon_sym_LT_EQ] = ACTIONS(1179),
    [anon_sym_EQ_EQ] = ACTIONS(1179),
    [anon_sym_BANG_EQ] = ACTIONS(1179),
    [anon_sym_GT_EQ] = ACTIONS(1179),
    [anon_sym_GT] = ACTIONS(1181),
    [sym_comment] = ACTIONS(38),
  },
  [526] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1183),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1183),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1183),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1183),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1183),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1183),
    [anon_sym_BSLASH0] = ACTIONS(1183),
    [anon_sym_BSLASHa] = ACTIONS(1183),
    [anon_sym_BSLASHb] = ACTIONS(1183),
    [anon_sym_BSLASHf] = ACTIONS(1183),
    [anon_sym_BSLASHn] = ACTIONS(1183),
    [anon_sym_BSLASHr] = ACTIONS(1183),
    [anon_sym_BSLASHt] = ACTIONS(1183),
    [anon_sym_BSLASHv] = ACTIONS(1183),
    [anon_sym_DQUOTE] = ACTIONS(1183),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1183),
    [sym_comment] = ACTIONS(871),
  },
  [527] = {
    [sym__unicode_escape_sequence] = STATE(522),
    [sym__simple_escape_sequence] = STATE(522),
    [sym__regular_string_literal_character] = STATE(651),
    [sym__hexadecimal_escape_sequence] = ACTIONS(891),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(893),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(893),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(895),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(895),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(895),
    [anon_sym_BSLASH0] = ACTIONS(895),
    [anon_sym_BSLASHa] = ACTIONS(895),
    [anon_sym_BSLASHb] = ACTIONS(895),
    [anon_sym_BSLASHf] = ACTIONS(895),
    [anon_sym_BSLASHn] = ACTIONS(895),
    [anon_sym_BSLASHr] = ACTIONS(895),
    [anon_sym_BSLASHt] = ACTIONS(895),
    [anon_sym_BSLASHv] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(1185),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(891),
    [sym_comment] = ACTIONS(871),
  },
  [528] = {
    [anon_sym_DQUOTE] = ACTIONS(1187),
    [sym_comment] = ACTIONS(38),
  },
  [529] = {
    [sym__expression] = STATE(654),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [530] = {
    [sym__expression] = STATE(655),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [531] = {
    [sym__expression] = STATE(656),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [532] = {
    [sym__expression] = STATE(657),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [533] = {
    [sym__expression] = STATE(658),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [534] = {
    [sym__expression] = STATE(659),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [535] = {
    [sym__expression] = STATE(660),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [536] = {
    [sym__expression] = STATE(661),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [537] = {
    [sym__expression] = STATE(662),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [538] = {
    [sym__expression] = STATE(663),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [539] = {
    [ts_builtin_sym_end] = ACTIONS(1193),
    [anon_sym_using] = ACTIONS(1193),
    [anon_sym_namespace] = ACTIONS(1193),
    [anon_sym_RBRACE] = ACTIONS(1193),
    [anon_sym_class] = ACTIONS(1193),
    [anon_sym_unsafe] = ACTIONS(1193),
    [anon_sym_abstract] = ACTIONS(1193),
    [anon_sym_sealed] = ACTIONS(1193),
    [anon_sym_static] = ACTIONS(1193),
    [anon_sym_new] = ACTIONS(1193),
    [anon_sym_public] = ACTIONS(1193),
    [anon_sym_protected] = ACTIONS(1193),
    [anon_sym_internal] = ACTIONS(1193),
    [anon_sym_private] = ACTIONS(1193),
    [anon_sym_interface] = ACTIONS(1193),
    [anon_sym_struct] = ACTIONS(1193),
    [anon_sym_enum] = ACTIONS(1193),
    [anon_sym_delegate] = ACTIONS(1193),
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_comment] = ACTIONS(38),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(1195),
    [anon_sym_COMMA] = ACTIONS(1195),
    [sym_comment] = ACTIONS(38),
  },
  [541] = {
    [ts_builtin_sym_end] = ACTIONS(1193),
    [anon_sym_SEMI] = ACTIONS(1197),
    [anon_sym_using] = ACTIONS(1193),
    [anon_sym_namespace] = ACTIONS(1193),
    [anon_sym_RBRACE] = ACTIONS(1193),
    [anon_sym_class] = ACTIONS(1193),
    [anon_sym_unsafe] = ACTIONS(1193),
    [anon_sym_abstract] = ACTIONS(1193),
    [anon_sym_sealed] = ACTIONS(1193),
    [anon_sym_static] = ACTIONS(1193),
    [anon_sym_new] = ACTIONS(1193),
    [anon_sym_public] = ACTIONS(1193),
    [anon_sym_protected] = ACTIONS(1193),
    [anon_sym_internal] = ACTIONS(1193),
    [anon_sym_private] = ACTIONS(1193),
    [anon_sym_interface] = ACTIONS(1193),
    [anon_sym_struct] = ACTIONS(1193),
    [anon_sym_enum] = ACTIONS(1193),
    [anon_sym_delegate] = ACTIONS(1193),
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_comment] = ACTIONS(38),
  },
  [542] = {
    [anon_sym_RBRACE] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [543] = {
    [anon_sym_RPAREN] = ACTIONS(1201),
    [sym_comment] = ACTIONS(38),
  },
  [544] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(668),
    [anon_sym_COMMA] = ACTIONS(1203),
    [anon_sym_RBRACK] = ACTIONS(1205),
    [sym_comment] = ACTIONS(38),
  },
  [545] = {
    [sym_identifier_name] = ACTIONS(1207),
    [sym_comment] = ACTIONS(38),
  },
  [546] = {
    [anon_sym_sbyte] = ACTIONS(312),
    [anon_sym_byte] = ACTIONS(312),
    [anon_sym_short] = ACTIONS(312),
    [anon_sym_ushort] = ACTIONS(312),
    [anon_sym_int] = ACTIONS(312),
    [anon_sym_uint] = ACTIONS(312),
    [anon_sym_long] = ACTIONS(312),
    [anon_sym_ulong] = ACTIONS(312),
    [anon_sym_char] = ACTIONS(312),
    [anon_sym_ref] = ACTIONS(312),
    [anon_sym_out] = ACTIONS(312),
    [anon_sym_this] = ACTIONS(312),
    [sym_params_keyword] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_bool] = ACTIONS(312),
    [anon_sym_decimal] = ACTIONS(312),
    [anon_sym_double] = ACTIONS(312),
    [anon_sym_float] = ACTIONS(312),
    [anon_sym_object] = ACTIONS(312),
    [anon_sym_string] = ACTIONS(312),
    [sym_identifier_name] = ACTIONS(316),
    [sym_comment] = ACTIONS(38),
  },
  [547] = {
    [sym_attribute_list] = STATE(669),
    [sym_attribute] = STATE(65),
    [sym_identifier_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(38),
  },
  [548] = {
    [anon_sym_COMMA] = ACTIONS(1209),
    [anon_sym_RPAREN] = ACTIONS(1209),
    [sym_params_keyword] = ACTIONS(1209),
    [anon_sym_LBRACK] = ACTIONS(1209),
    [sym_comment] = ACTIONS(38),
  },
  [549] = {
    [sym_parameter_modifier] = STATE(425),
    [sym__type] = STATE(423),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [550] = {
    [anon_sym_sbyte] = ACTIONS(110),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_short] = ACTIONS(110),
    [anon_sym_ushort] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_uint] = ACTIONS(110),
    [anon_sym_long] = ACTIONS(110),
    [anon_sym_ulong] = ACTIONS(110),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_ref] = ACTIONS(110),
    [anon_sym_out] = ACTIONS(110),
    [anon_sym_this] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_decimal] = ACTIONS(110),
    [anon_sym_double] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_object] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [sym_identifier_name] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
  },
  [551] = {
    [sym__attribute_section] = STATE(670),
    [anon_sym_sbyte] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(120),
    [anon_sym_short] = ACTIONS(120),
    [anon_sym_ushort] = ACTIONS(120),
    [anon_sym_int] = ACTIONS(120),
    [anon_sym_uint] = ACTIONS(120),
    [anon_sym_long] = ACTIONS(120),
    [anon_sym_ulong] = ACTIONS(120),
    [anon_sym_char] = ACTIONS(120),
    [anon_sym_ref] = ACTIONS(120),
    [anon_sym_out] = ACTIONS(120),
    [anon_sym_this] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(955),
    [anon_sym_bool] = ACTIONS(120),
    [anon_sym_decimal] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_object] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(38),
  },
  [552] = {
    [sym_parameter] = STATE(671),
    [sym_parameter_modifier] = STATE(307),
    [sym__attributes] = STATE(549),
    [sym__attribute_section] = STATE(550),
    [sym__type] = STATE(311),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(551),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(955),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [553] = {
    [anon_sym_RPAREN] = ACTIONS(1211),
    [sym_comment] = ACTIONS(38),
  },
  [554] = {
    [sym_equals_value_clause] = STATE(672),
    [anon_sym_COMMA] = ACTIONS(1213),
    [anon_sym_RPAREN] = ACTIONS(1213),
    [sym_params_keyword] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1213),
    [anon_sym_EQ] = ACTIONS(967),
    [sym_comment] = ACTIONS(38),
  },
  [555] = {
    [sym_identifier_name] = ACTIONS(1215),
    [sym_comment] = ACTIONS(38),
  },
  [556] = {
    [sym_identifier_name] = ACTIONS(1217),
    [sym_comment] = ACTIONS(38),
  },
  [557] = {
    [sym__expression] = STATE(676),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [558] = {
    [anon_sym_COMMA] = ACTIONS(1213),
    [anon_sym_RPAREN] = ACTIONS(1213),
    [sym_params_keyword] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1213),
    [sym_comment] = ACTIONS(38),
  },
  [559] = {
    [ts_builtin_sym_end] = ACTIONS(1223),
    [anon_sym_using] = ACTIONS(1223),
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
    [anon_sym_interface] = ACTIONS(1223),
    [anon_sym_struct] = ACTIONS(1223),
    [anon_sym_enum] = ACTIONS(1223),
    [anon_sym_delegate] = ACTIONS(1223),
    [anon_sym_LBRACK] = ACTIONS(1223),
    [sym_comment] = ACTIONS(38),
  },
  [560] = {
    [ts_builtin_sym_end] = ACTIONS(1225),
    [anon_sym_using] = ACTIONS(1225),
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
    [anon_sym_interface] = ACTIONS(1225),
    [anon_sym_struct] = ACTIONS(1225),
    [anon_sym_enum] = ACTIONS(1225),
    [anon_sym_delegate] = ACTIONS(1225),
    [anon_sym_LBRACK] = ACTIONS(1225),
    [sym_comment] = ACTIONS(38),
  },
  [561] = {
    [ts_builtin_sym_end] = ACTIONS(1227),
    [anon_sym_using] = ACTIONS(1227),
    [anon_sym_namespace] = ACTIONS(1227),
    [anon_sym_RBRACE] = ACTIONS(1227),
    [anon_sym_class] = ACTIONS(1227),
    [anon_sym_unsafe] = ACTIONS(1227),
    [anon_sym_abstract] = ACTIONS(1227),
    [anon_sym_sealed] = ACTIONS(1227),
    [anon_sym_static] = ACTIONS(1227),
    [anon_sym_new] = ACTIONS(1227),
    [anon_sym_public] = ACTIONS(1227),
    [anon_sym_protected] = ACTIONS(1227),
    [anon_sym_internal] = ACTIONS(1227),
    [anon_sym_private] = ACTIONS(1227),
    [anon_sym_interface] = ACTIONS(1227),
    [anon_sym_struct] = ACTIONS(1227),
    [anon_sym_enum] = ACTIONS(1227),
    [anon_sym_delegate] = ACTIONS(1227),
    [anon_sym_LBRACK] = ACTIONS(1227),
    [sym_comment] = ACTIONS(38),
  },
  [562] = {
    [aux_sym_enum_declaration_repeat1] = STATE(677),
    [anon_sym_RBRACE] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [563] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1229),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [564] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1231),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [565] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1233),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [566] = {
    [sym_enum_member_declaration] = STATE(681),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [567] = {
    [ts_builtin_sym_end] = ACTIONS(1235),
    [anon_sym_using] = ACTIONS(1235),
    [anon_sym_namespace] = ACTIONS(1235),
    [anon_sym_RBRACE] = ACTIONS(1235),
    [anon_sym_class] = ACTIONS(1235),
    [anon_sym_unsafe] = ACTIONS(1235),
    [anon_sym_abstract] = ACTIONS(1235),
    [anon_sym_sealed] = ACTIONS(1235),
    [anon_sym_static] = ACTIONS(1235),
    [anon_sym_new] = ACTIONS(1235),
    [anon_sym_public] = ACTIONS(1235),
    [anon_sym_protected] = ACTIONS(1235),
    [anon_sym_internal] = ACTIONS(1235),
    [anon_sym_private] = ACTIONS(1235),
    [anon_sym_interface] = ACTIONS(1235),
    [anon_sym_struct] = ACTIONS(1235),
    [anon_sym_enum] = ACTIONS(1235),
    [anon_sym_delegate] = ACTIONS(1235),
    [anon_sym_LBRACK] = ACTIONS(1235),
    [sym_comment] = ACTIONS(38),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(607),
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
    [anon_sym_interface] = ACTIONS(1237),
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
    [sym_void_keyword] = ACTIONS(1237),
    [anon_sym_LBRACK] = ACTIONS(607),
    [sym_const_keyword] = ACTIONS(1237),
    [anon_sym_readonly] = ACTIONS(1237),
    [anon_sym_volatile] = ACTIONS(1237),
    [anon_sym_bool] = ACTIONS(1237),
    [anon_sym_decimal] = ACTIONS(1237),
    [anon_sym_double] = ACTIONS(1237),
    [anon_sym_float] = ACTIONS(1237),
    [anon_sym_object] = ACTIONS(1237),
    [anon_sym_string] = ACTIONS(1237),
    [sym_identifier_name] = ACTIONS(1239),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1237),
  },
  [569] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [570] = {
    [anon_sym_RBRACE] = ACTIONS(631),
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
    [anon_sym_interface] = ACTIONS(1243),
    [anon_sym_struct] = ACTIONS(1243),
    [anon_sym_enum] = ACTIONS(1243),
    [anon_sym_sbyte] = ACTIONS(1243),
    [anon_sym_byte] = ACTIONS(1243),
    [anon_sym_short] = ACTIONS(1243),
    [anon_sym_ushort] = ACTIONS(1243),
    [anon_sym_int] = ACTIONS(1243),
    [anon_sym_uint] = ACTIONS(1243),
    [anon_sym_long] = ACTIONS(1243),
    [anon_sym_ulong] = ACTIONS(1243),
    [anon_sym_char] = ACTIONS(1243),
    [anon_sym_delegate] = ACTIONS(1243),
    [sym_void_keyword] = ACTIONS(1243),
    [anon_sym_LBRACK] = ACTIONS(631),
    [sym_const_keyword] = ACTIONS(1243),
    [anon_sym_readonly] = ACTIONS(1243),
    [anon_sym_volatile] = ACTIONS(1243),
    [anon_sym_bool] = ACTIONS(1243),
    [anon_sym_decimal] = ACTIONS(1243),
    [anon_sym_double] = ACTIONS(1243),
    [anon_sym_float] = ACTIONS(1243),
    [anon_sym_object] = ACTIONS(1243),
    [anon_sym_string] = ACTIONS(1243),
    [sym_identifier_name] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1243),
  },
  [571] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1247),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_class] = ACTIONS(1249),
    [anon_sym_unsafe] = ACTIONS(1249),
    [anon_sym_abstract] = ACTIONS(1249),
    [anon_sym_sealed] = ACTIONS(1249),
    [anon_sym_static] = ACTIONS(1249),
    [anon_sym_new] = ACTIONS(1249),
    [anon_sym_public] = ACTIONS(1249),
    [anon_sym_protected] = ACTIONS(1249),
    [anon_sym_internal] = ACTIONS(1249),
    [anon_sym_private] = ACTIONS(1249),
    [anon_sym_interface] = ACTIONS(1249),
    [anon_sym_struct] = ACTIONS(1249),
    [anon_sym_enum] = ACTIONS(1249),
    [anon_sym_sbyte] = ACTIONS(1249),
    [anon_sym_byte] = ACTIONS(1249),
    [anon_sym_short] = ACTIONS(1249),
    [anon_sym_ushort] = ACTIONS(1249),
    [anon_sym_int] = ACTIONS(1249),
    [anon_sym_uint] = ACTIONS(1249),
    [anon_sym_long] = ACTIONS(1249),
    [anon_sym_ulong] = ACTIONS(1249),
    [anon_sym_char] = ACTIONS(1249),
    [anon_sym_delegate] = ACTIONS(1249),
    [sym_void_keyword] = ACTIONS(1249),
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_const_keyword] = ACTIONS(1249),
    [anon_sym_readonly] = ACTIONS(1249),
    [anon_sym_volatile] = ACTIONS(1249),
    [anon_sym_bool] = ACTIONS(1249),
    [anon_sym_decimal] = ACTIONS(1249),
    [anon_sym_double] = ACTIONS(1249),
    [anon_sym_float] = ACTIONS(1249),
    [anon_sym_object] = ACTIONS(1249),
    [anon_sym_string] = ACTIONS(1249),
    [sym_identifier_name] = ACTIONS(1251),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1249),
  },
  [573] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1253),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [574] = {
    [anon_sym_SEMI] = ACTIONS(1255),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_unsafe] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_sealed] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_new] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_internal] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_interface] = ACTIONS(1257),
    [anon_sym_struct] = ACTIONS(1257),
    [anon_sym_enum] = ACTIONS(1257),
    [anon_sym_sbyte] = ACTIONS(1257),
    [anon_sym_byte] = ACTIONS(1257),
    [anon_sym_short] = ACTIONS(1257),
    [anon_sym_ushort] = ACTIONS(1257),
    [anon_sym_int] = ACTIONS(1257),
    [anon_sym_uint] = ACTIONS(1257),
    [anon_sym_long] = ACTIONS(1257),
    [anon_sym_ulong] = ACTIONS(1257),
    [anon_sym_char] = ACTIONS(1257),
    [anon_sym_delegate] = ACTIONS(1257),
    [sym_void_keyword] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_const_keyword] = ACTIONS(1257),
    [anon_sym_readonly] = ACTIONS(1257),
    [anon_sym_volatile] = ACTIONS(1257),
    [anon_sym_bool] = ACTIONS(1257),
    [anon_sym_decimal] = ACTIONS(1257),
    [anon_sym_double] = ACTIONS(1257),
    [anon_sym_float] = ACTIONS(1257),
    [anon_sym_object] = ACTIONS(1257),
    [anon_sym_string] = ACTIONS(1257),
    [sym_identifier_name] = ACTIONS(1259),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1257),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1261),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [576] = {
    [sym_enum_member_declaration] = STATE(687),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [577] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_class] = ACTIONS(1263),
    [anon_sym_unsafe] = ACTIONS(1263),
    [anon_sym_abstract] = ACTIONS(1263),
    [anon_sym_sealed] = ACTIONS(1263),
    [anon_sym_static] = ACTIONS(1263),
    [anon_sym_new] = ACTIONS(1263),
    [anon_sym_public] = ACTIONS(1263),
    [anon_sym_protected] = ACTIONS(1263),
    [anon_sym_internal] = ACTIONS(1263),
    [anon_sym_private] = ACTIONS(1263),
    [anon_sym_interface] = ACTIONS(1263),
    [anon_sym_struct] = ACTIONS(1263),
    [anon_sym_enum] = ACTIONS(1263),
    [anon_sym_sbyte] = ACTIONS(1263),
    [anon_sym_byte] = ACTIONS(1263),
    [anon_sym_short] = ACTIONS(1263),
    [anon_sym_ushort] = ACTIONS(1263),
    [anon_sym_int] = ACTIONS(1263),
    [anon_sym_uint] = ACTIONS(1263),
    [anon_sym_long] = ACTIONS(1263),
    [anon_sym_ulong] = ACTIONS(1263),
    [anon_sym_char] = ACTIONS(1263),
    [anon_sym_delegate] = ACTIONS(1263),
    [sym_void_keyword] = ACTIONS(1263),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym_const_keyword] = ACTIONS(1263),
    [anon_sym_readonly] = ACTIONS(1263),
    [anon_sym_volatile] = ACTIONS(1263),
    [anon_sym_bool] = ACTIONS(1263),
    [anon_sym_decimal] = ACTIONS(1263),
    [anon_sym_double] = ACTIONS(1263),
    [anon_sym_float] = ACTIONS(1263),
    [anon_sym_object] = ACTIONS(1263),
    [anon_sym_string] = ACTIONS(1263),
    [sym_identifier_name] = ACTIONS(1265),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1263),
  },
  [578] = {
    [sym__expression] = STATE(688),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [579] = {
    [anon_sym_SEMI] = ACTIONS(1267),
    [sym_comment] = ACTIONS(38),
  },
  [580] = {
    [anon_sym_SEMI] = ACTIONS(1269),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1023),
    [anon_sym_PIPE_PIPE] = ACTIONS(1025),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1033),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [581] = {
    [anon_sym_SEMI] = ACTIONS(1271),
    [anon_sym_RBRACE] = ACTIONS(1271),
    [anon_sym_PLUS] = ACTIONS(1273),
    [anon_sym_DASH] = ACTIONS(1273),
    [anon_sym_BANG] = ACTIONS(1271),
    [anon_sym_TILDE] = ACTIONS(1271),
    [anon_sym_typeof] = ACTIONS(1273),
    [anon_sym_DASH_DASH] = ACTIONS(1271),
    [anon_sym_PLUS_PLUS] = ACTIONS(1271),
    [anon_sym_true] = ACTIONS(1273),
    [anon_sym_false] = ACTIONS(1273),
    [anon_sym_SQUOTE] = ACTIONS(1271),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1273),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1273),
    [sym_null_literal] = ACTIONS(1273),
    [anon_sym_DOT] = ACTIONS(1271),
    [anon_sym_DQUOTE] = ACTIONS(1271),
    [anon_sym_AT_DQUOTE] = ACTIONS(1271),
    [sym_identifier_name] = ACTIONS(1275),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1273),
  },
  [582] = {
    [sym__expression] = STATE(691),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [583] = {
    [sym__expression] = STATE(692),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [584] = {
    [sym__expression] = STATE(693),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [585] = {
    [sym__expression] = STATE(694),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [586] = {
    [sym__expression] = STATE(695),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [587] = {
    [sym__expression] = STATE(696),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [588] = {
    [sym__expression] = STATE(697),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [589] = {
    [sym__expression] = STATE(661),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [590] = {
    [sym__expression] = STATE(698),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [591] = {
    [sym__expression] = STATE(699),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [592] = {
    [anon_sym_RBRACE] = ACTIONS(1277),
    [anon_sym_class] = ACTIONS(1279),
    [anon_sym_unsafe] = ACTIONS(1279),
    [anon_sym_abstract] = ACTIONS(1279),
    [anon_sym_sealed] = ACTIONS(1279),
    [anon_sym_static] = ACTIONS(1279),
    [anon_sym_new] = ACTIONS(1279),
    [anon_sym_public] = ACTIONS(1279),
    [anon_sym_protected] = ACTIONS(1279),
    [anon_sym_internal] = ACTIONS(1279),
    [anon_sym_private] = ACTIONS(1279),
    [anon_sym_interface] = ACTIONS(1279),
    [anon_sym_struct] = ACTIONS(1279),
    [anon_sym_enum] = ACTIONS(1279),
    [anon_sym_sbyte] = ACTIONS(1279),
    [anon_sym_byte] = ACTIONS(1279),
    [anon_sym_short] = ACTIONS(1279),
    [anon_sym_ushort] = ACTIONS(1279),
    [anon_sym_int] = ACTIONS(1279),
    [anon_sym_uint] = ACTIONS(1279),
    [anon_sym_long] = ACTIONS(1279),
    [anon_sym_ulong] = ACTIONS(1279),
    [anon_sym_char] = ACTIONS(1279),
    [anon_sym_delegate] = ACTIONS(1279),
    [sym_void_keyword] = ACTIONS(1279),
    [anon_sym_LBRACK] = ACTIONS(1277),
    [sym_const_keyword] = ACTIONS(1279),
    [anon_sym_readonly] = ACTIONS(1279),
    [anon_sym_volatile] = ACTIONS(1279),
    [anon_sym_bool] = ACTIONS(1279),
    [anon_sym_decimal] = ACTIONS(1279),
    [anon_sym_double] = ACTIONS(1279),
    [anon_sym_float] = ACTIONS(1279),
    [anon_sym_object] = ACTIONS(1279),
    [anon_sym_string] = ACTIONS(1279),
    [sym_identifier_name] = ACTIONS(1281),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1279),
  },
  [593] = {
    [anon_sym_SEMI] = ACTIONS(1283),
    [anon_sym_RBRACE] = ACTIONS(1283),
    [anon_sym_PLUS] = ACTIONS(1285),
    [anon_sym_DASH] = ACTIONS(1285),
    [anon_sym_BANG] = ACTIONS(1283),
    [anon_sym_TILDE] = ACTIONS(1283),
    [anon_sym_typeof] = ACTIONS(1285),
    [anon_sym_DASH_DASH] = ACTIONS(1283),
    [anon_sym_PLUS_PLUS] = ACTIONS(1283),
    [anon_sym_true] = ACTIONS(1285),
    [anon_sym_false] = ACTIONS(1285),
    [anon_sym_SQUOTE] = ACTIONS(1283),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1285),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1285),
    [sym_null_literal] = ACTIONS(1285),
    [anon_sym_DOT] = ACTIONS(1283),
    [anon_sym_DQUOTE] = ACTIONS(1283),
    [anon_sym_AT_DQUOTE] = ACTIONS(1283),
    [sym_identifier_name] = ACTIONS(1287),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1285),
  },
  [594] = {
    [anon_sym_RBRACE] = ACTIONS(1289),
    [anon_sym_class] = ACTIONS(1291),
    [anon_sym_unsafe] = ACTIONS(1291),
    [anon_sym_abstract] = ACTIONS(1291),
    [anon_sym_sealed] = ACTIONS(1291),
    [anon_sym_static] = ACTIONS(1291),
    [anon_sym_new] = ACTIONS(1291),
    [anon_sym_public] = ACTIONS(1291),
    [anon_sym_protected] = ACTIONS(1291),
    [anon_sym_internal] = ACTIONS(1291),
    [anon_sym_private] = ACTIONS(1291),
    [anon_sym_interface] = ACTIONS(1291),
    [anon_sym_struct] = ACTIONS(1291),
    [anon_sym_enum] = ACTIONS(1291),
    [anon_sym_sbyte] = ACTIONS(1291),
    [anon_sym_byte] = ACTIONS(1291),
    [anon_sym_short] = ACTIONS(1291),
    [anon_sym_ushort] = ACTIONS(1291),
    [anon_sym_int] = ACTIONS(1291),
    [anon_sym_uint] = ACTIONS(1291),
    [anon_sym_long] = ACTIONS(1291),
    [anon_sym_ulong] = ACTIONS(1291),
    [anon_sym_char] = ACTIONS(1291),
    [anon_sym_delegate] = ACTIONS(1291),
    [sym_void_keyword] = ACTIONS(1291),
    [anon_sym_LBRACK] = ACTIONS(1289),
    [sym_const_keyword] = ACTIONS(1291),
    [anon_sym_readonly] = ACTIONS(1291),
    [anon_sym_volatile] = ACTIONS(1291),
    [anon_sym_bool] = ACTIONS(1291),
    [anon_sym_decimal] = ACTIONS(1291),
    [anon_sym_double] = ACTIONS(1291),
    [anon_sym_float] = ACTIONS(1291),
    [anon_sym_object] = ACTIONS(1291),
    [anon_sym_string] = ACTIONS(1291),
    [sym_identifier_name] = ACTIONS(1293),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1291),
  },
  [595] = {
    [sym_statement_block] = STATE(700),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [596] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(701),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [597] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(702),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1247),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [598] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(703),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1253),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [599] = {
    [aux_sym_enum_declaration_repeat1] = STATE(704),
    [anon_sym_RBRACE] = ACTIONS(1261),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [600] = {
    [anon_sym_LBRACE] = ACTIONS(1295),
    [sym_comment] = ACTIONS(38),
  },
  [601] = {
    [anon_sym_SEMI] = ACTIONS(1297),
    [sym_comment] = ACTIONS(38),
  },
  [602] = {
    [anon_sym_RBRACE] = ACTIONS(1299),
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
    [anon_sym_interface] = ACTIONS(1301),
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
    [sym_void_keyword] = ACTIONS(1301),
    [anon_sym_LBRACK] = ACTIONS(1299),
    [sym_const_keyword] = ACTIONS(1301),
    [anon_sym_readonly] = ACTIONS(1301),
    [anon_sym_volatile] = ACTIONS(1301),
    [anon_sym_bool] = ACTIONS(1301),
    [anon_sym_decimal] = ACTIONS(1301),
    [anon_sym_double] = ACTIONS(1301),
    [anon_sym_float] = ACTIONS(1301),
    [anon_sym_object] = ACTIONS(1301),
    [anon_sym_string] = ACTIONS(1301),
    [sym_identifier_name] = ACTIONS(1303),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1301),
  },
  [603] = {
    [sym_parameter_list] = STATE(707),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [604] = {
    [anon_sym_LBRACE] = ACTIONS(1305),
    [sym_comment] = ACTIONS(38),
  },
  [605] = {
    [anon_sym_LBRACE] = ACTIONS(1307),
    [sym_comment] = ACTIONS(38),
  },
  [606] = {
    [anon_sym_LBRACE] = ACTIONS(1309),
    [sym_comment] = ACTIONS(38),
  },
  [607] = {
    [sym__integral_type] = STATE(711),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [608] = {
    [sym_parameter_list] = STATE(712),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [609] = {
    [anon_sym_RBRACE] = ACTIONS(1311),
    [anon_sym_class] = ACTIONS(1313),
    [anon_sym_unsafe] = ACTIONS(1313),
    [anon_sym_abstract] = ACTIONS(1313),
    [anon_sym_sealed] = ACTIONS(1313),
    [anon_sym_static] = ACTIONS(1313),
    [anon_sym_new] = ACTIONS(1313),
    [anon_sym_public] = ACTIONS(1313),
    [anon_sym_protected] = ACTIONS(1313),
    [anon_sym_internal] = ACTIONS(1313),
    [anon_sym_private] = ACTIONS(1313),
    [anon_sym_interface] = ACTIONS(1313),
    [anon_sym_struct] = ACTIONS(1313),
    [anon_sym_enum] = ACTIONS(1313),
    [anon_sym_sbyte] = ACTIONS(1313),
    [anon_sym_byte] = ACTIONS(1313),
    [anon_sym_short] = ACTIONS(1313),
    [anon_sym_ushort] = ACTIONS(1313),
    [anon_sym_int] = ACTIONS(1313),
    [anon_sym_uint] = ACTIONS(1313),
    [anon_sym_long] = ACTIONS(1313),
    [anon_sym_ulong] = ACTIONS(1313),
    [anon_sym_char] = ACTIONS(1313),
    [anon_sym_delegate] = ACTIONS(1313),
    [sym_void_keyword] = ACTIONS(1313),
    [anon_sym_LBRACK] = ACTIONS(1311),
    [sym_const_keyword] = ACTIONS(1313),
    [anon_sym_readonly] = ACTIONS(1313),
    [anon_sym_volatile] = ACTIONS(1313),
    [anon_sym_bool] = ACTIONS(1313),
    [anon_sym_decimal] = ACTIONS(1313),
    [anon_sym_double] = ACTIONS(1313),
    [anon_sym_float] = ACTIONS(1313),
    [anon_sym_object] = ACTIONS(1313),
    [anon_sym_string] = ACTIONS(1313),
    [sym_identifier_name] = ACTIONS(1315),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1313),
  },
  [610] = {
    [sym_statement_block] = STATE(713),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [611] = {
    [sym_parameter_list] = STATE(707),
    [sym_type_parameter_list] = STATE(714),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [612] = {
    [sym__expression] = STATE(715),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [613] = {
    [sym__expression] = STATE(716),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [614] = {
    [sym__expression] = STATE(717),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [615] = {
    [sym__expression] = STATE(718),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [616] = {
    [sym__expression] = STATE(719),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [617] = {
    [sym__expression] = STATE(720),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [618] = {
    [sym__expression] = STATE(721),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [619] = {
    [sym__expression] = STATE(661),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [620] = {
    [sym__expression] = STATE(722),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [621] = {
    [sym__expression] = STATE(723),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [622] = {
    [anon_sym_SEMI] = ACTIONS(1317),
    [anon_sym_COMMA] = ACTIONS(1317),
    [sym_comment] = ACTIONS(38),
  },
  [623] = {
    [anon_sym_RBRACE] = ACTIONS(1311),
    [anon_sym_unsafe] = ACTIONS(1313),
    [anon_sym_static] = ACTIONS(1313),
    [anon_sym_new] = ACTIONS(1313),
    [anon_sym_public] = ACTIONS(1313),
    [anon_sym_protected] = ACTIONS(1313),
    [anon_sym_internal] = ACTIONS(1313),
    [anon_sym_private] = ACTIONS(1313),
    [anon_sym_sbyte] = ACTIONS(1313),
    [anon_sym_byte] = ACTIONS(1313),
    [anon_sym_short] = ACTIONS(1313),
    [anon_sym_ushort] = ACTIONS(1313),
    [anon_sym_int] = ACTIONS(1313),
    [anon_sym_uint] = ACTIONS(1313),
    [anon_sym_long] = ACTIONS(1313),
    [anon_sym_ulong] = ACTIONS(1313),
    [anon_sym_char] = ACTIONS(1313),
    [anon_sym_LBRACK] = ACTIONS(1311),
    [sym_const_keyword] = ACTIONS(1313),
    [anon_sym_readonly] = ACTIONS(1313),
    [anon_sym_volatile] = ACTIONS(1313),
    [anon_sym_bool] = ACTIONS(1313),
    [anon_sym_decimal] = ACTIONS(1313),
    [anon_sym_double] = ACTIONS(1313),
    [anon_sym_float] = ACTIONS(1313),
    [anon_sym_object] = ACTIONS(1313),
    [anon_sym_string] = ACTIONS(1313),
    [sym_identifier_name] = ACTIONS(1315),
    [sym_comment] = ACTIONS(38),
  },
  [624] = {
    [anon_sym_RBRACE] = ACTIONS(607),
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
    [anon_sym_interface] = ACTIONS(1237),
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
    [anon_sym_LBRACK] = ACTIONS(607),
    [sym_const_keyword] = ACTIONS(1237),
    [anon_sym_readonly] = ACTIONS(1237),
    [anon_sym_volatile] = ACTIONS(1237),
    [anon_sym_bool] = ACTIONS(1237),
    [anon_sym_decimal] = ACTIONS(1237),
    [anon_sym_double] = ACTIONS(1237),
    [anon_sym_float] = ACTIONS(1237),
    [anon_sym_object] = ACTIONS(1237),
    [anon_sym_string] = ACTIONS(1237),
    [sym_identifier_name] = ACTIONS(1239),
    [sym_comment] = ACTIONS(38),
  },
  [625] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1319),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [626] = {
    [anon_sym_RBRACE] = ACTIONS(631),
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
    [anon_sym_interface] = ACTIONS(1243),
    [anon_sym_struct] = ACTIONS(1243),
    [anon_sym_enum] = ACTIONS(1243),
    [anon_sym_sbyte] = ACTIONS(1243),
    [anon_sym_byte] = ACTIONS(1243),
    [anon_sym_short] = ACTIONS(1243),
    [anon_sym_ushort] = ACTIONS(1243),
    [anon_sym_int] = ACTIONS(1243),
    [anon_sym_uint] = ACTIONS(1243),
    [anon_sym_long] = ACTIONS(1243),
    [anon_sym_ulong] = ACTIONS(1243),
    [anon_sym_char] = ACTIONS(1243),
    [anon_sym_delegate] = ACTIONS(1243),
    [anon_sym_LBRACK] = ACTIONS(631),
    [sym_const_keyword] = ACTIONS(1243),
    [anon_sym_readonly] = ACTIONS(1243),
    [anon_sym_volatile] = ACTIONS(1243),
    [anon_sym_bool] = ACTIONS(1243),
    [anon_sym_decimal] = ACTIONS(1243),
    [anon_sym_double] = ACTIONS(1243),
    [anon_sym_float] = ACTIONS(1243),
    [anon_sym_object] = ACTIONS(1243),
    [anon_sym_string] = ACTIONS(1243),
    [sym_identifier_name] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [627] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1321),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [628] = {
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_class] = ACTIONS(1249),
    [anon_sym_unsafe] = ACTIONS(1249),
    [anon_sym_abstract] = ACTIONS(1249),
    [anon_sym_sealed] = ACTIONS(1249),
    [anon_sym_static] = ACTIONS(1249),
    [anon_sym_new] = ACTIONS(1249),
    [anon_sym_public] = ACTIONS(1249),
    [anon_sym_protected] = ACTIONS(1249),
    [anon_sym_internal] = ACTIONS(1249),
    [anon_sym_private] = ACTIONS(1249),
    [anon_sym_interface] = ACTIONS(1249),
    [anon_sym_struct] = ACTIONS(1249),
    [anon_sym_enum] = ACTIONS(1249),
    [anon_sym_sbyte] = ACTIONS(1249),
    [anon_sym_byte] = ACTIONS(1249),
    [anon_sym_short] = ACTIONS(1249),
    [anon_sym_ushort] = ACTIONS(1249),
    [anon_sym_int] = ACTIONS(1249),
    [anon_sym_uint] = ACTIONS(1249),
    [anon_sym_long] = ACTIONS(1249),
    [anon_sym_ulong] = ACTIONS(1249),
    [anon_sym_char] = ACTIONS(1249),
    [anon_sym_delegate] = ACTIONS(1249),
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_const_keyword] = ACTIONS(1249),
    [anon_sym_readonly] = ACTIONS(1249),
    [anon_sym_volatile] = ACTIONS(1249),
    [anon_sym_bool] = ACTIONS(1249),
    [anon_sym_decimal] = ACTIONS(1249),
    [anon_sym_double] = ACTIONS(1249),
    [anon_sym_float] = ACTIONS(1249),
    [anon_sym_object] = ACTIONS(1249),
    [anon_sym_string] = ACTIONS(1249),
    [sym_identifier_name] = ACTIONS(1251),
    [sym_comment] = ACTIONS(38),
  },
  [629] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1323),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [630] = {
    [anon_sym_SEMI] = ACTIONS(1325),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_unsafe] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_sealed] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_new] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_internal] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_interface] = ACTIONS(1257),
    [anon_sym_struct] = ACTIONS(1257),
    [anon_sym_enum] = ACTIONS(1257),
    [anon_sym_sbyte] = ACTIONS(1257),
    [anon_sym_byte] = ACTIONS(1257),
    [anon_sym_short] = ACTIONS(1257),
    [anon_sym_ushort] = ACTIONS(1257),
    [anon_sym_int] = ACTIONS(1257),
    [anon_sym_uint] = ACTIONS(1257),
    [anon_sym_long] = ACTIONS(1257),
    [anon_sym_ulong] = ACTIONS(1257),
    [anon_sym_char] = ACTIONS(1257),
    [anon_sym_delegate] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_const_keyword] = ACTIONS(1257),
    [anon_sym_readonly] = ACTIONS(1257),
    [anon_sym_volatile] = ACTIONS(1257),
    [anon_sym_bool] = ACTIONS(1257),
    [anon_sym_decimal] = ACTIONS(1257),
    [anon_sym_double] = ACTIONS(1257),
    [anon_sym_float] = ACTIONS(1257),
    [anon_sym_object] = ACTIONS(1257),
    [anon_sym_string] = ACTIONS(1257),
    [sym_identifier_name] = ACTIONS(1259),
    [sym_comment] = ACTIONS(38),
  },
  [631] = {
    [anon_sym_RBRACE] = ACTIONS(1327),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [632] = {
    [sym_enum_member_declaration] = STATE(729),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [633] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_class] = ACTIONS(1263),
    [anon_sym_unsafe] = ACTIONS(1263),
    [anon_sym_abstract] = ACTIONS(1263),
    [anon_sym_sealed] = ACTIONS(1263),
    [anon_sym_static] = ACTIONS(1263),
    [anon_sym_new] = ACTIONS(1263),
    [anon_sym_public] = ACTIONS(1263),
    [anon_sym_protected] = ACTIONS(1263),
    [anon_sym_internal] = ACTIONS(1263),
    [anon_sym_private] = ACTIONS(1263),
    [anon_sym_interface] = ACTIONS(1263),
    [anon_sym_struct] = ACTIONS(1263),
    [anon_sym_enum] = ACTIONS(1263),
    [anon_sym_sbyte] = ACTIONS(1263),
    [anon_sym_byte] = ACTIONS(1263),
    [anon_sym_short] = ACTIONS(1263),
    [anon_sym_ushort] = ACTIONS(1263),
    [anon_sym_int] = ACTIONS(1263),
    [anon_sym_uint] = ACTIONS(1263),
    [anon_sym_long] = ACTIONS(1263),
    [anon_sym_ulong] = ACTIONS(1263),
    [anon_sym_char] = ACTIONS(1263),
    [anon_sym_delegate] = ACTIONS(1263),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym_const_keyword] = ACTIONS(1263),
    [anon_sym_readonly] = ACTIONS(1263),
    [anon_sym_volatile] = ACTIONS(1263),
    [anon_sym_bool] = ACTIONS(1263),
    [anon_sym_decimal] = ACTIONS(1263),
    [anon_sym_double] = ACTIONS(1263),
    [anon_sym_float] = ACTIONS(1263),
    [anon_sym_object] = ACTIONS(1263),
    [anon_sym_string] = ACTIONS(1263),
    [sym_identifier_name] = ACTIONS(1265),
    [sym_comment] = ACTIONS(38),
  },
  [634] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(730),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1319),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [635] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(731),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1321),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [636] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(732),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1323),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [637] = {
    [aux_sym_enum_declaration_repeat1] = STATE(733),
    [anon_sym_RBRACE] = ACTIONS(1327),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [638] = {
    [anon_sym_LBRACE] = ACTIONS(1329),
    [sym_comment] = ACTIONS(38),
  },
  [639] = {
    [anon_sym_SEMI] = ACTIONS(1331),
    [sym_comment] = ACTIONS(38),
  },
  [640] = {
    [anon_sym_LBRACE] = ACTIONS(1333),
    [sym_comment] = ACTIONS(38),
  },
  [641] = {
    [anon_sym_LBRACE] = ACTIONS(1335),
    [sym_comment] = ACTIONS(38),
  },
  [642] = {
    [anon_sym_LBRACE] = ACTIONS(1337),
    [sym_comment] = ACTIONS(38),
  },
  [643] = {
    [sym__integral_type] = STATE(739),
    [anon_sym_sbyte] = ACTIONS(300),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_ushort] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_uint] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_ulong] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [644] = {
    [sym_parameter_list] = STATE(740),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [645] = {
    [anon_sym_RBRACE] = ACTIONS(1311),
    [anon_sym_class] = ACTIONS(1313),
    [anon_sym_unsafe] = ACTIONS(1313),
    [anon_sym_abstract] = ACTIONS(1313),
    [anon_sym_sealed] = ACTIONS(1313),
    [anon_sym_static] = ACTIONS(1313),
    [anon_sym_new] = ACTIONS(1313),
    [anon_sym_public] = ACTIONS(1313),
    [anon_sym_protected] = ACTIONS(1313),
    [anon_sym_internal] = ACTIONS(1313),
    [anon_sym_private] = ACTIONS(1313),
    [anon_sym_interface] = ACTIONS(1313),
    [anon_sym_struct] = ACTIONS(1313),
    [anon_sym_enum] = ACTIONS(1313),
    [anon_sym_sbyte] = ACTIONS(1313),
    [anon_sym_byte] = ACTIONS(1313),
    [anon_sym_short] = ACTIONS(1313),
    [anon_sym_ushort] = ACTIONS(1313),
    [anon_sym_int] = ACTIONS(1313),
    [anon_sym_uint] = ACTIONS(1313),
    [anon_sym_long] = ACTIONS(1313),
    [anon_sym_ulong] = ACTIONS(1313),
    [anon_sym_char] = ACTIONS(1313),
    [anon_sym_delegate] = ACTIONS(1313),
    [anon_sym_LBRACK] = ACTIONS(1311),
    [sym_const_keyword] = ACTIONS(1313),
    [anon_sym_readonly] = ACTIONS(1313),
    [anon_sym_volatile] = ACTIONS(1313),
    [anon_sym_bool] = ACTIONS(1313),
    [anon_sym_decimal] = ACTIONS(1313),
    [anon_sym_double] = ACTIONS(1313),
    [anon_sym_float] = ACTIONS(1313),
    [anon_sym_object] = ACTIONS(1313),
    [anon_sym_string] = ACTIONS(1313),
    [sym_identifier_name] = ACTIONS(1315),
    [sym_comment] = ACTIONS(38),
  },
  [646] = {
    [anon_sym_SEMI] = ACTIONS(1339),
    [anon_sym_RBRACE] = ACTIONS(1339),
    [anon_sym_COLON] = ACTIONS(1339),
    [anon_sym_COMMA] = ACTIONS(1339),
    [anon_sym_RPAREN] = ACTIONS(1339),
    [sym_params_keyword] = ACTIONS(1339),
    [anon_sym_LBRACK] = ACTIONS(1339),
    [anon_sym_QMARK] = ACTIONS(1339),
    [anon_sym_AMP_AMP] = ACTIONS(1339),
    [anon_sym_PIPE_PIPE] = ACTIONS(1339),
    [anon_sym_GT_GT] = ACTIONS(1339),
    [anon_sym_LT_LT] = ACTIONS(1339),
    [anon_sym_AMP] = ACTIONS(1341),
    [anon_sym_CARET] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(1341),
    [anon_sym_PLUS] = ACTIONS(1339),
    [anon_sym_DASH] = ACTIONS(1339),
    [anon_sym_STAR] = ACTIONS(1339),
    [anon_sym_SLASH] = ACTIONS(1341),
    [anon_sym_PERCENT] = ACTIONS(1339),
    [anon_sym_LT] = ACTIONS(1341),
    [anon_sym_LT_EQ] = ACTIONS(1339),
    [anon_sym_EQ_EQ] = ACTIONS(1339),
    [anon_sym_BANG_EQ] = ACTIONS(1339),
    [anon_sym_GT_EQ] = ACTIONS(1339),
    [anon_sym_GT] = ACTIONS(1341),
    [sym_comment] = ACTIONS(38),
  },
  [647] = {
    [anon_sym_SEMI] = ACTIONS(1343),
    [anon_sym_RBRACE] = ACTIONS(1343),
    [anon_sym_COLON] = ACTIONS(1343),
    [anon_sym_COMMA] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [sym_params_keyword] = ACTIONS(1343),
    [anon_sym_LBRACK] = ACTIONS(1343),
    [anon_sym_QMARK] = ACTIONS(1343),
    [anon_sym_AMP_AMP] = ACTIONS(1343),
    [anon_sym_PIPE_PIPE] = ACTIONS(1343),
    [anon_sym_GT_GT] = ACTIONS(1343),
    [anon_sym_LT_LT] = ACTIONS(1343),
    [anon_sym_AMP] = ACTIONS(1345),
    [anon_sym_CARET] = ACTIONS(1343),
    [anon_sym_PIPE] = ACTIONS(1345),
    [anon_sym_PLUS] = ACTIONS(1343),
    [anon_sym_DASH] = ACTIONS(1343),
    [anon_sym_STAR] = ACTIONS(1343),
    [anon_sym_SLASH] = ACTIONS(1345),
    [anon_sym_PERCENT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1343),
    [anon_sym_BANG_EQ] = ACTIONS(1343),
    [anon_sym_GT_EQ] = ACTIONS(1343),
    [anon_sym_GT] = ACTIONS(1345),
    [sym__real_type_suffix] = ACTIONS(1347),
    [sym__exponent_part] = ACTIONS(1349),
    [sym_comment] = ACTIONS(38),
  },
  [648] = {
    [anon_sym_SEMI] = ACTIONS(1343),
    [anon_sym_RBRACE] = ACTIONS(1343),
    [anon_sym_COLON] = ACTIONS(1343),
    [anon_sym_COMMA] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [sym_params_keyword] = ACTIONS(1343),
    [anon_sym_LBRACK] = ACTIONS(1343),
    [anon_sym_QMARK] = ACTIONS(1343),
    [anon_sym_AMP_AMP] = ACTIONS(1343),
    [anon_sym_PIPE_PIPE] = ACTIONS(1343),
    [anon_sym_GT_GT] = ACTIONS(1343),
    [anon_sym_LT_LT] = ACTIONS(1343),
    [anon_sym_AMP] = ACTIONS(1345),
    [anon_sym_CARET] = ACTIONS(1343),
    [anon_sym_PIPE] = ACTIONS(1345),
    [anon_sym_PLUS] = ACTIONS(1343),
    [anon_sym_DASH] = ACTIONS(1343),
    [anon_sym_STAR] = ACTIONS(1343),
    [anon_sym_SLASH] = ACTIONS(1345),
    [anon_sym_PERCENT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1343),
    [anon_sym_BANG_EQ] = ACTIONS(1343),
    [anon_sym_GT_EQ] = ACTIONS(1343),
    [anon_sym_GT] = ACTIONS(1345),
    [sym_comment] = ACTIONS(38),
  },
  [649] = {
    [anon_sym_SEMI] = ACTIONS(1343),
    [anon_sym_RBRACE] = ACTIONS(1343),
    [anon_sym_COLON] = ACTIONS(1343),
    [anon_sym_COMMA] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [sym_params_keyword] = ACTIONS(1343),
    [anon_sym_LBRACK] = ACTIONS(1343),
    [anon_sym_QMARK] = ACTIONS(1343),
    [anon_sym_AMP_AMP] = ACTIONS(1343),
    [anon_sym_PIPE_PIPE] = ACTIONS(1343),
    [anon_sym_GT_GT] = ACTIONS(1343),
    [anon_sym_LT_LT] = ACTIONS(1343),
    [anon_sym_AMP] = ACTIONS(1345),
    [anon_sym_CARET] = ACTIONS(1343),
    [anon_sym_PIPE] = ACTIONS(1345),
    [anon_sym_PLUS] = ACTIONS(1343),
    [anon_sym_DASH] = ACTIONS(1343),
    [anon_sym_STAR] = ACTIONS(1343),
    [anon_sym_SLASH] = ACTIONS(1345),
    [anon_sym_PERCENT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1343),
    [anon_sym_BANG_EQ] = ACTIONS(1343),
    [anon_sym_GT_EQ] = ACTIONS(1343),
    [anon_sym_GT] = ACTIONS(1345),
    [sym__real_type_suffix] = ACTIONS(1347),
    [sym_comment] = ACTIONS(38),
  },
  [650] = {
    [anon_sym_SEMI] = ACTIONS(1351),
    [anon_sym_RBRACE] = ACTIONS(1351),
    [anon_sym_COLON] = ACTIONS(1351),
    [anon_sym_COMMA] = ACTIONS(1351),
    [anon_sym_RPAREN] = ACTIONS(1351),
    [sym_params_keyword] = ACTIONS(1351),
    [anon_sym_LBRACK] = ACTIONS(1351),
    [anon_sym_QMARK] = ACTIONS(1351),
    [anon_sym_AMP_AMP] = ACTIONS(1351),
    [anon_sym_PIPE_PIPE] = ACTIONS(1351),
    [anon_sym_GT_GT] = ACTIONS(1351),
    [anon_sym_LT_LT] = ACTIONS(1351),
    [anon_sym_AMP] = ACTIONS(1353),
    [anon_sym_CARET] = ACTIONS(1351),
    [anon_sym_PIPE] = ACTIONS(1353),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1351),
    [anon_sym_SLASH] = ACTIONS(1353),
    [anon_sym_PERCENT] = ACTIONS(1351),
    [anon_sym_LT] = ACTIONS(1353),
    [anon_sym_LT_EQ] = ACTIONS(1351),
    [anon_sym_EQ_EQ] = ACTIONS(1351),
    [anon_sym_BANG_EQ] = ACTIONS(1351),
    [anon_sym_GT_EQ] = ACTIONS(1351),
    [anon_sym_GT] = ACTIONS(1353),
    [sym_comment] = ACTIONS(38),
  },
  [651] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1355),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1355),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1355),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1355),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1355),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1355),
    [anon_sym_BSLASH0] = ACTIONS(1355),
    [anon_sym_BSLASHa] = ACTIONS(1355),
    [anon_sym_BSLASHb] = ACTIONS(1355),
    [anon_sym_BSLASHf] = ACTIONS(1355),
    [anon_sym_BSLASHn] = ACTIONS(1355),
    [anon_sym_BSLASHr] = ACTIONS(1355),
    [anon_sym_BSLASHt] = ACTIONS(1355),
    [anon_sym_BSLASHv] = ACTIONS(1355),
    [anon_sym_DQUOTE] = ACTIONS(1355),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1355),
    [sym_comment] = ACTIONS(871),
  },
  [652] = {
    [anon_sym_SEMI] = ACTIONS(1357),
    [anon_sym_RBRACE] = ACTIONS(1357),
    [anon_sym_COLON] = ACTIONS(1357),
    [anon_sym_COMMA] = ACTIONS(1357),
    [anon_sym_RPAREN] = ACTIONS(1357),
    [sym_params_keyword] = ACTIONS(1357),
    [anon_sym_LBRACK] = ACTIONS(1357),
    [anon_sym_QMARK] = ACTIONS(1357),
    [anon_sym_AMP_AMP] = ACTIONS(1357),
    [anon_sym_PIPE_PIPE] = ACTIONS(1357),
    [anon_sym_GT_GT] = ACTIONS(1357),
    [anon_sym_LT_LT] = ACTIONS(1357),
    [anon_sym_AMP] = ACTIONS(1359),
    [anon_sym_CARET] = ACTIONS(1357),
    [anon_sym_PIPE] = ACTIONS(1359),
    [anon_sym_PLUS] = ACTIONS(1357),
    [anon_sym_DASH] = ACTIONS(1357),
    [anon_sym_STAR] = ACTIONS(1357),
    [anon_sym_SLASH] = ACTIONS(1359),
    [anon_sym_PERCENT] = ACTIONS(1357),
    [anon_sym_LT] = ACTIONS(1359),
    [anon_sym_LT_EQ] = ACTIONS(1357),
    [anon_sym_EQ_EQ] = ACTIONS(1357),
    [anon_sym_BANG_EQ] = ACTIONS(1357),
    [anon_sym_GT_EQ] = ACTIONS(1357),
    [anon_sym_GT] = ACTIONS(1359),
    [sym_comment] = ACTIONS(38),
  },
  [653] = {
    [sym__expression] = STATE(513),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [654] = {
    [anon_sym_COLON] = ACTIONS(1361),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1367),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [655] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(917),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [656] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(917),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [657] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [658] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [659] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [660] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1389),
    [anon_sym_DASH] = ACTIONS(1389),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [661] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1389),
    [anon_sym_DASH] = ACTIONS(1389),
    [anon_sym_STAR] = ACTIONS(1389),
    [anon_sym_SLASH] = ACTIONS(1391),
    [anon_sym_PERCENT] = ACTIONS(1389),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [662] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [663] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [664] = {
    [ts_builtin_sym_end] = ACTIONS(1393),
    [anon_sym_using] = ACTIONS(1393),
    [anon_sym_namespace] = ACTIONS(1393),
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_class] = ACTIONS(1393),
    [anon_sym_unsafe] = ACTIONS(1393),
    [anon_sym_abstract] = ACTIONS(1393),
    [anon_sym_sealed] = ACTIONS(1393),
    [anon_sym_static] = ACTIONS(1393),
    [anon_sym_new] = ACTIONS(1393),
    [anon_sym_public] = ACTIONS(1393),
    [anon_sym_protected] = ACTIONS(1393),
    [anon_sym_internal] = ACTIONS(1393),
    [anon_sym_private] = ACTIONS(1393),
    [anon_sym_interface] = ACTIONS(1393),
    [anon_sym_struct] = ACTIONS(1393),
    [anon_sym_enum] = ACTIONS(1393),
    [anon_sym_delegate] = ACTIONS(1393),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [sym_comment] = ACTIONS(38),
  },
  [665] = {
    [ts_builtin_sym_end] = ACTIONS(1393),
    [anon_sym_SEMI] = ACTIONS(1395),
    [anon_sym_using] = ACTIONS(1393),
    [anon_sym_namespace] = ACTIONS(1393),
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_class] = ACTIONS(1393),
    [anon_sym_unsafe] = ACTIONS(1393),
    [anon_sym_abstract] = ACTIONS(1393),
    [anon_sym_sealed] = ACTIONS(1393),
    [anon_sym_static] = ACTIONS(1393),
    [anon_sym_new] = ACTIONS(1393),
    [anon_sym_public] = ACTIONS(1393),
    [anon_sym_protected] = ACTIONS(1393),
    [anon_sym_internal] = ACTIONS(1393),
    [anon_sym_private] = ACTIONS(1393),
    [anon_sym_interface] = ACTIONS(1393),
    [anon_sym_struct] = ACTIONS(1393),
    [anon_sym_enum] = ACTIONS(1393),
    [anon_sym_delegate] = ACTIONS(1393),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [sym_comment] = ACTIONS(38),
  },
  [666] = {
    [anon_sym_COMMA] = ACTIONS(1397),
    [anon_sym_RBRACK] = ACTIONS(1397),
    [sym_comment] = ACTIONS(38),
  },
  [667] = {
    [sym_identifier_name] = ACTIONS(1399),
    [sym_comment] = ACTIONS(38),
  },
  [668] = {
    [anon_sym_COMMA] = ACTIONS(1401),
    [anon_sym_RBRACK] = ACTIONS(1403),
    [sym_comment] = ACTIONS(38),
  },
  [669] = {
    [anon_sym_RBRACK] = ACTIONS(1405),
    [sym_comment] = ACTIONS(38),
  },
  [670] = {
    [anon_sym_sbyte] = ACTIONS(214),
    [anon_sym_byte] = ACTIONS(214),
    [anon_sym_short] = ACTIONS(214),
    [anon_sym_ushort] = ACTIONS(214),
    [anon_sym_int] = ACTIONS(214),
    [anon_sym_uint] = ACTIONS(214),
    [anon_sym_long] = ACTIONS(214),
    [anon_sym_ulong] = ACTIONS(214),
    [anon_sym_char] = ACTIONS(214),
    [anon_sym_ref] = ACTIONS(214),
    [anon_sym_out] = ACTIONS(214),
    [anon_sym_this] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_bool] = ACTIONS(214),
    [anon_sym_decimal] = ACTIONS(214),
    [anon_sym_double] = ACTIONS(214),
    [anon_sym_float] = ACTIONS(214),
    [anon_sym_object] = ACTIONS(214),
    [anon_sym_string] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(218),
    [sym_comment] = ACTIONS(38),
  },
  [671] = {
    [anon_sym_COMMA] = ACTIONS(1407),
    [anon_sym_RPAREN] = ACTIONS(1407),
    [sym_params_keyword] = ACTIONS(1407),
    [anon_sym_LBRACK] = ACTIONS(1407),
    [sym_comment] = ACTIONS(38),
  },
  [672] = {
    [anon_sym_COMMA] = ACTIONS(1409),
    [anon_sym_RPAREN] = ACTIONS(1409),
    [sym_params_keyword] = ACTIONS(1409),
    [anon_sym_LBRACK] = ACTIONS(1409),
    [sym_comment] = ACTIONS(38),
  },
  [673] = {
    [anon_sym_RPAREN] = ACTIONS(1411),
    [sym_comment] = ACTIONS(38),
  },
  [674] = {
    [sym_equals_value_clause] = STATE(758),
    [anon_sym_COMMA] = ACTIONS(1409),
    [anon_sym_RPAREN] = ACTIONS(1409),
    [sym_params_keyword] = ACTIONS(1409),
    [anon_sym_LBRACK] = ACTIONS(1409),
    [anon_sym_EQ] = ACTIONS(967),
    [sym_comment] = ACTIONS(38),
  },
  [675] = {
    [sym__expression] = STATE(513),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [676] = {
    [anon_sym_COMMA] = ACTIONS(905),
    [anon_sym_RPAREN] = ACTIONS(905),
    [sym_params_keyword] = ACTIONS(905),
    [anon_sym_LBRACK] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(1413),
    [anon_sym_AMP_AMP] = ACTIONS(1415),
    [anon_sym_PIPE_PIPE] = ACTIONS(1417),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1421),
    [anon_sym_CARET] = ACTIONS(1423),
    [anon_sym_PIPE] = ACTIONS(1425),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1437),
    [anon_sym_BANG_EQ] = ACTIONS(1437),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [677] = {
    [anon_sym_RBRACE] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [678] = {
    [ts_builtin_sym_end] = ACTIONS(1441),
    [anon_sym_using] = ACTIONS(1441),
    [anon_sym_namespace] = ACTIONS(1441),
    [anon_sym_RBRACE] = ACTIONS(1441),
    [anon_sym_class] = ACTIONS(1441),
    [anon_sym_unsafe] = ACTIONS(1441),
    [anon_sym_abstract] = ACTIONS(1441),
    [anon_sym_sealed] = ACTIONS(1441),
    [anon_sym_static] = ACTIONS(1441),
    [anon_sym_new] = ACTIONS(1441),
    [anon_sym_public] = ACTIONS(1441),
    [anon_sym_protected] = ACTIONS(1441),
    [anon_sym_internal] = ACTIONS(1441),
    [anon_sym_private] = ACTIONS(1441),
    [anon_sym_interface] = ACTIONS(1441),
    [anon_sym_struct] = ACTIONS(1441),
    [anon_sym_enum] = ACTIONS(1441),
    [anon_sym_delegate] = ACTIONS(1441),
    [anon_sym_LBRACK] = ACTIONS(1441),
    [sym_comment] = ACTIONS(38),
  },
  [679] = {
    [ts_builtin_sym_end] = ACTIONS(1443),
    [anon_sym_using] = ACTIONS(1443),
    [anon_sym_namespace] = ACTIONS(1443),
    [anon_sym_RBRACE] = ACTIONS(1443),
    [anon_sym_class] = ACTIONS(1443),
    [anon_sym_unsafe] = ACTIONS(1443),
    [anon_sym_abstract] = ACTIONS(1443),
    [anon_sym_sealed] = ACTIONS(1443),
    [anon_sym_static] = ACTIONS(1443),
    [anon_sym_new] = ACTIONS(1443),
    [anon_sym_public] = ACTIONS(1443),
    [anon_sym_protected] = ACTIONS(1443),
    [anon_sym_internal] = ACTIONS(1443),
    [anon_sym_private] = ACTIONS(1443),
    [anon_sym_interface] = ACTIONS(1443),
    [anon_sym_struct] = ACTIONS(1443),
    [anon_sym_enum] = ACTIONS(1443),
    [anon_sym_delegate] = ACTIONS(1443),
    [anon_sym_LBRACK] = ACTIONS(1443),
    [sym_comment] = ACTIONS(38),
  },
  [680] = {
    [ts_builtin_sym_end] = ACTIONS(1445),
    [anon_sym_using] = ACTIONS(1445),
    [anon_sym_namespace] = ACTIONS(1445),
    [anon_sym_RBRACE] = ACTIONS(1445),
    [anon_sym_class] = ACTIONS(1445),
    [anon_sym_unsafe] = ACTIONS(1445),
    [anon_sym_abstract] = ACTIONS(1445),
    [anon_sym_sealed] = ACTIONS(1445),
    [anon_sym_static] = ACTIONS(1445),
    [anon_sym_new] = ACTIONS(1445),
    [anon_sym_public] = ACTIONS(1445),
    [anon_sym_protected] = ACTIONS(1445),
    [anon_sym_internal] = ACTIONS(1445),
    [anon_sym_private] = ACTIONS(1445),
    [anon_sym_interface] = ACTIONS(1445),
    [anon_sym_struct] = ACTIONS(1445),
    [anon_sym_enum] = ACTIONS(1445),
    [anon_sym_delegate] = ACTIONS(1445),
    [anon_sym_LBRACK] = ACTIONS(1445),
    [sym_comment] = ACTIONS(38),
  },
  [681] = {
    [aux_sym_enum_declaration_repeat1] = STATE(770),
    [anon_sym_RBRACE] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [682] = {
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(1447),
    [anon_sym_unsafe] = ACTIONS(1447),
    [anon_sym_abstract] = ACTIONS(1447),
    [anon_sym_sealed] = ACTIONS(1447),
    [anon_sym_static] = ACTIONS(1447),
    [anon_sym_new] = ACTIONS(1447),
    [anon_sym_public] = ACTIONS(1447),
    [anon_sym_protected] = ACTIONS(1447),
    [anon_sym_internal] = ACTIONS(1447),
    [anon_sym_private] = ACTIONS(1447),
    [anon_sym_interface] = ACTIONS(1447),
    [anon_sym_struct] = ACTIONS(1447),
    [anon_sym_enum] = ACTIONS(1447),
    [anon_sym_sbyte] = ACTIONS(1447),
    [anon_sym_byte] = ACTIONS(1447),
    [anon_sym_short] = ACTIONS(1447),
    [anon_sym_ushort] = ACTIONS(1447),
    [anon_sym_int] = ACTIONS(1447),
    [anon_sym_uint] = ACTIONS(1447),
    [anon_sym_long] = ACTIONS(1447),
    [anon_sym_ulong] = ACTIONS(1447),
    [anon_sym_char] = ACTIONS(1447),
    [anon_sym_delegate] = ACTIONS(1447),
    [sym_void_keyword] = ACTIONS(1447),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym_const_keyword] = ACTIONS(1447),
    [anon_sym_readonly] = ACTIONS(1447),
    [anon_sym_volatile] = ACTIONS(1447),
    [anon_sym_bool] = ACTIONS(1447),
    [anon_sym_decimal] = ACTIONS(1447),
    [anon_sym_double] = ACTIONS(1447),
    [anon_sym_float] = ACTIONS(1447),
    [anon_sym_object] = ACTIONS(1447),
    [anon_sym_string] = ACTIONS(1447),
    [sym_identifier_name] = ACTIONS(1449),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1447),
  },
  [683] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(1451),
    [anon_sym_unsafe] = ACTIONS(1451),
    [anon_sym_abstract] = ACTIONS(1451),
    [anon_sym_sealed] = ACTIONS(1451),
    [anon_sym_static] = ACTIONS(1451),
    [anon_sym_new] = ACTIONS(1451),
    [anon_sym_public] = ACTIONS(1451),
    [anon_sym_protected] = ACTIONS(1451),
    [anon_sym_internal] = ACTIONS(1451),
    [anon_sym_private] = ACTIONS(1451),
    [anon_sym_interface] = ACTIONS(1451),
    [anon_sym_struct] = ACTIONS(1451),
    [anon_sym_enum] = ACTIONS(1451),
    [anon_sym_sbyte] = ACTIONS(1451),
    [anon_sym_byte] = ACTIONS(1451),
    [anon_sym_short] = ACTIONS(1451),
    [anon_sym_ushort] = ACTIONS(1451),
    [anon_sym_int] = ACTIONS(1451),
    [anon_sym_uint] = ACTIONS(1451),
    [anon_sym_long] = ACTIONS(1451),
    [anon_sym_ulong] = ACTIONS(1451),
    [anon_sym_char] = ACTIONS(1451),
    [anon_sym_delegate] = ACTIONS(1451),
    [sym_void_keyword] = ACTIONS(1451),
    [anon_sym_LBRACK] = ACTIONS(829),
    [sym_const_keyword] = ACTIONS(1451),
    [anon_sym_readonly] = ACTIONS(1451),
    [anon_sym_volatile] = ACTIONS(1451),
    [anon_sym_bool] = ACTIONS(1451),
    [anon_sym_decimal] = ACTIONS(1451),
    [anon_sym_double] = ACTIONS(1451),
    [anon_sym_float] = ACTIONS(1451),
    [anon_sym_object] = ACTIONS(1451),
    [anon_sym_string] = ACTIONS(1451),
    [sym_identifier_name] = ACTIONS(1453),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1451),
  },
  [684] = {
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_class] = ACTIONS(1455),
    [anon_sym_unsafe] = ACTIONS(1455),
    [anon_sym_abstract] = ACTIONS(1455),
    [anon_sym_sealed] = ACTIONS(1455),
    [anon_sym_static] = ACTIONS(1455),
    [anon_sym_new] = ACTIONS(1455),
    [anon_sym_public] = ACTIONS(1455),
    [anon_sym_protected] = ACTIONS(1455),
    [anon_sym_internal] = ACTIONS(1455),
    [anon_sym_private] = ACTIONS(1455),
    [anon_sym_interface] = ACTIONS(1455),
    [anon_sym_struct] = ACTIONS(1455),
    [anon_sym_enum] = ACTIONS(1455),
    [anon_sym_sbyte] = ACTIONS(1455),
    [anon_sym_byte] = ACTIONS(1455),
    [anon_sym_short] = ACTIONS(1455),
    [anon_sym_ushort] = ACTIONS(1455),
    [anon_sym_int] = ACTIONS(1455),
    [anon_sym_uint] = ACTIONS(1455),
    [anon_sym_long] = ACTIONS(1455),
    [anon_sym_ulong] = ACTIONS(1455),
    [anon_sym_char] = ACTIONS(1455),
    [anon_sym_delegate] = ACTIONS(1455),
    [sym_void_keyword] = ACTIONS(1455),
    [anon_sym_LBRACK] = ACTIONS(859),
    [sym_const_keyword] = ACTIONS(1455),
    [anon_sym_readonly] = ACTIONS(1455),
    [anon_sym_volatile] = ACTIONS(1455),
    [anon_sym_bool] = ACTIONS(1455),
    [anon_sym_decimal] = ACTIONS(1455),
    [anon_sym_double] = ACTIONS(1455),
    [anon_sym_float] = ACTIONS(1455),
    [anon_sym_object] = ACTIONS(1455),
    [anon_sym_string] = ACTIONS(1455),
    [sym_identifier_name] = ACTIONS(1457),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1455),
  },
  [685] = {
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(1459),
    [anon_sym_unsafe] = ACTIONS(1459),
    [anon_sym_abstract] = ACTIONS(1459),
    [anon_sym_sealed] = ACTIONS(1459),
    [anon_sym_static] = ACTIONS(1459),
    [anon_sym_new] = ACTIONS(1459),
    [anon_sym_public] = ACTIONS(1459),
    [anon_sym_protected] = ACTIONS(1459),
    [anon_sym_internal] = ACTIONS(1459),
    [anon_sym_private] = ACTIONS(1459),
    [anon_sym_interface] = ACTIONS(1459),
    [anon_sym_struct] = ACTIONS(1459),
    [anon_sym_enum] = ACTIONS(1459),
    [anon_sym_sbyte] = ACTIONS(1459),
    [anon_sym_byte] = ACTIONS(1459),
    [anon_sym_short] = ACTIONS(1459),
    [anon_sym_ushort] = ACTIONS(1459),
    [anon_sym_int] = ACTIONS(1459),
    [anon_sym_uint] = ACTIONS(1459),
    [anon_sym_long] = ACTIONS(1459),
    [anon_sym_ulong] = ACTIONS(1459),
    [anon_sym_char] = ACTIONS(1459),
    [anon_sym_delegate] = ACTIONS(1459),
    [sym_void_keyword] = ACTIONS(1459),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(1459),
    [anon_sym_readonly] = ACTIONS(1459),
    [anon_sym_volatile] = ACTIONS(1459),
    [anon_sym_bool] = ACTIONS(1459),
    [anon_sym_decimal] = ACTIONS(1459),
    [anon_sym_double] = ACTIONS(1459),
    [anon_sym_float] = ACTIONS(1459),
    [anon_sym_object] = ACTIONS(1459),
    [anon_sym_string] = ACTIONS(1459),
    [sym_identifier_name] = ACTIONS(1461),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1459),
  },
  [686] = {
    [anon_sym_SEMI] = ACTIONS(1463),
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(1459),
    [anon_sym_unsafe] = ACTIONS(1459),
    [anon_sym_abstract] = ACTIONS(1459),
    [anon_sym_sealed] = ACTIONS(1459),
    [anon_sym_static] = ACTIONS(1459),
    [anon_sym_new] = ACTIONS(1459),
    [anon_sym_public] = ACTIONS(1459),
    [anon_sym_protected] = ACTIONS(1459),
    [anon_sym_internal] = ACTIONS(1459),
    [anon_sym_private] = ACTIONS(1459),
    [anon_sym_interface] = ACTIONS(1459),
    [anon_sym_struct] = ACTIONS(1459),
    [anon_sym_enum] = ACTIONS(1459),
    [anon_sym_sbyte] = ACTIONS(1459),
    [anon_sym_byte] = ACTIONS(1459),
    [anon_sym_short] = ACTIONS(1459),
    [anon_sym_ushort] = ACTIONS(1459),
    [anon_sym_int] = ACTIONS(1459),
    [anon_sym_uint] = ACTIONS(1459),
    [anon_sym_long] = ACTIONS(1459),
    [anon_sym_ulong] = ACTIONS(1459),
    [anon_sym_char] = ACTIONS(1459),
    [anon_sym_delegate] = ACTIONS(1459),
    [sym_void_keyword] = ACTIONS(1459),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(1459),
    [anon_sym_readonly] = ACTIONS(1459),
    [anon_sym_volatile] = ACTIONS(1459),
    [anon_sym_bool] = ACTIONS(1459),
    [anon_sym_decimal] = ACTIONS(1459),
    [anon_sym_double] = ACTIONS(1459),
    [anon_sym_float] = ACTIONS(1459),
    [anon_sym_object] = ACTIONS(1459),
    [anon_sym_string] = ACTIONS(1459),
    [sym_identifier_name] = ACTIONS(1461),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1459),
  },
  [687] = {
    [aux_sym_enum_declaration_repeat1] = STATE(773),
    [anon_sym_RBRACE] = ACTIONS(1465),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [688] = {
    [anon_sym_SEMI] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1023),
    [anon_sym_PIPE_PIPE] = ACTIONS(1025),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1033),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [689] = {
    [anon_sym_SEMI] = ACTIONS(1467),
    [anon_sym_RBRACE] = ACTIONS(1467),
    [anon_sym_PLUS] = ACTIONS(1469),
    [anon_sym_DASH] = ACTIONS(1469),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [anon_sym_typeof] = ACTIONS(1469),
    [anon_sym_DASH_DASH] = ACTIONS(1467),
    [anon_sym_PLUS_PLUS] = ACTIONS(1467),
    [anon_sym_true] = ACTIONS(1469),
    [anon_sym_false] = ACTIONS(1469),
    [anon_sym_SQUOTE] = ACTIONS(1467),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1469),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1469),
    [sym_null_literal] = ACTIONS(1469),
    [anon_sym_DOT] = ACTIONS(1467),
    [anon_sym_DQUOTE] = ACTIONS(1467),
    [anon_sym_AT_DQUOTE] = ACTIONS(1467),
    [sym_identifier_name] = ACTIONS(1471),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1469),
  },
  [690] = {
    [anon_sym_SEMI] = ACTIONS(1473),
    [anon_sym_RBRACE] = ACTIONS(1473),
    [anon_sym_PLUS] = ACTIONS(1475),
    [anon_sym_DASH] = ACTIONS(1475),
    [anon_sym_BANG] = ACTIONS(1473),
    [anon_sym_TILDE] = ACTIONS(1473),
    [anon_sym_typeof] = ACTIONS(1475),
    [anon_sym_DASH_DASH] = ACTIONS(1473),
    [anon_sym_PLUS_PLUS] = ACTIONS(1473),
    [anon_sym_true] = ACTIONS(1475),
    [anon_sym_false] = ACTIONS(1475),
    [anon_sym_SQUOTE] = ACTIONS(1473),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1475),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1475),
    [sym_null_literal] = ACTIONS(1475),
    [anon_sym_DOT] = ACTIONS(1473),
    [anon_sym_DQUOTE] = ACTIONS(1473),
    [anon_sym_AT_DQUOTE] = ACTIONS(1473),
    [sym_identifier_name] = ACTIONS(1477),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1475),
  },
  [691] = {
    [anon_sym_COLON] = ACTIONS(1479),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1367),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [692] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1033),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [693] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1023),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1033),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [694] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [695] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [696] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [697] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1389),
    [anon_sym_DASH] = ACTIONS(1389),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [698] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [699] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [700] = {
    [anon_sym_RBRACE] = ACTIONS(1481),
    [anon_sym_class] = ACTIONS(1483),
    [anon_sym_unsafe] = ACTIONS(1483),
    [anon_sym_abstract] = ACTIONS(1483),
    [anon_sym_sealed] = ACTIONS(1483),
    [anon_sym_static] = ACTIONS(1483),
    [anon_sym_new] = ACTIONS(1483),
    [anon_sym_public] = ACTIONS(1483),
    [anon_sym_protected] = ACTIONS(1483),
    [anon_sym_internal] = ACTIONS(1483),
    [anon_sym_private] = ACTIONS(1483),
    [anon_sym_interface] = ACTIONS(1483),
    [anon_sym_struct] = ACTIONS(1483),
    [anon_sym_enum] = ACTIONS(1483),
    [anon_sym_sbyte] = ACTIONS(1483),
    [anon_sym_byte] = ACTIONS(1483),
    [anon_sym_short] = ACTIONS(1483),
    [anon_sym_ushort] = ACTIONS(1483),
    [anon_sym_int] = ACTIONS(1483),
    [anon_sym_uint] = ACTIONS(1483),
    [anon_sym_long] = ACTIONS(1483),
    [anon_sym_ulong] = ACTIONS(1483),
    [anon_sym_char] = ACTIONS(1483),
    [anon_sym_delegate] = ACTIONS(1483),
    [sym_void_keyword] = ACTIONS(1483),
    [anon_sym_LBRACK] = ACTIONS(1481),
    [sym_const_keyword] = ACTIONS(1483),
    [anon_sym_readonly] = ACTIONS(1483),
    [anon_sym_volatile] = ACTIONS(1483),
    [anon_sym_bool] = ACTIONS(1483),
    [anon_sym_decimal] = ACTIONS(1483),
    [anon_sym_double] = ACTIONS(1483),
    [anon_sym_float] = ACTIONS(1483),
    [anon_sym_object] = ACTIONS(1483),
    [anon_sym_string] = ACTIONS(1483),
    [sym_identifier_name] = ACTIONS(1485),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1483),
  },
  [701] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1487),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [702] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1489),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [703] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1491),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [704] = {
    [anon_sym_RBRACE] = ACTIONS(1465),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [705] = {
    [sym_enum_member_declaration] = STATE(778),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [706] = {
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_class] = ACTIONS(1493),
    [anon_sym_unsafe] = ACTIONS(1493),
    [anon_sym_abstract] = ACTIONS(1493),
    [anon_sym_sealed] = ACTIONS(1493),
    [anon_sym_static] = ACTIONS(1493),
    [anon_sym_new] = ACTIONS(1493),
    [anon_sym_public] = ACTIONS(1493),
    [anon_sym_protected] = ACTIONS(1493),
    [anon_sym_internal] = ACTIONS(1493),
    [anon_sym_private] = ACTIONS(1493),
    [anon_sym_interface] = ACTIONS(1493),
    [anon_sym_struct] = ACTIONS(1493),
    [anon_sym_enum] = ACTIONS(1493),
    [anon_sym_sbyte] = ACTIONS(1493),
    [anon_sym_byte] = ACTIONS(1493),
    [anon_sym_short] = ACTIONS(1493),
    [anon_sym_ushort] = ACTIONS(1493),
    [anon_sym_int] = ACTIONS(1493),
    [anon_sym_uint] = ACTIONS(1493),
    [anon_sym_long] = ACTIONS(1493),
    [anon_sym_ulong] = ACTIONS(1493),
    [anon_sym_char] = ACTIONS(1493),
    [anon_sym_delegate] = ACTIONS(1493),
    [sym_void_keyword] = ACTIONS(1493),
    [anon_sym_LBRACK] = ACTIONS(975),
    [sym_const_keyword] = ACTIONS(1493),
    [anon_sym_readonly] = ACTIONS(1493),
    [anon_sym_volatile] = ACTIONS(1493),
    [anon_sym_bool] = ACTIONS(1493),
    [anon_sym_decimal] = ACTIONS(1493),
    [anon_sym_double] = ACTIONS(1493),
    [anon_sym_float] = ACTIONS(1493),
    [anon_sym_object] = ACTIONS(1493),
    [anon_sym_string] = ACTIONS(1493),
    [sym_identifier_name] = ACTIONS(1495),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1493),
  },
  [707] = {
    [sym_statement_block] = STATE(779),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [708] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(780),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1487),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [709] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(781),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1489),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [710] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(782),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1491),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [711] = {
    [anon_sym_LBRACE] = ACTIONS(1497),
    [sym_comment] = ACTIONS(38),
  },
  [712] = {
    [anon_sym_SEMI] = ACTIONS(1499),
    [sym_comment] = ACTIONS(38),
  },
  [713] = {
    [anon_sym_RBRACE] = ACTIONS(1501),
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
    [anon_sym_interface] = ACTIONS(1503),
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
    [sym_void_keyword] = ACTIONS(1503),
    [anon_sym_LBRACK] = ACTIONS(1501),
    [sym_const_keyword] = ACTIONS(1503),
    [anon_sym_readonly] = ACTIONS(1503),
    [anon_sym_volatile] = ACTIONS(1503),
    [anon_sym_bool] = ACTIONS(1503),
    [anon_sym_decimal] = ACTIONS(1503),
    [anon_sym_double] = ACTIONS(1503),
    [anon_sym_float] = ACTIONS(1503),
    [anon_sym_object] = ACTIONS(1503),
    [anon_sym_string] = ACTIONS(1503),
    [sym_identifier_name] = ACTIONS(1505),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1503),
  },
  [714] = {
    [sym_parameter_list] = STATE(785),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [715] = {
    [anon_sym_COLON] = ACTIONS(1507),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1367),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [716] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1103),
    [anon_sym_PIPE] = ACTIONS(1105),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1117),
    [anon_sym_BANG_EQ] = ACTIONS(1117),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [717] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1095),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1103),
    [anon_sym_PIPE] = ACTIONS(1105),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1117),
    [anon_sym_BANG_EQ] = ACTIONS(1117),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [718] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [719] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1117),
    [anon_sym_BANG_EQ] = ACTIONS(1117),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [720] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1117),
    [anon_sym_BANG_EQ] = ACTIONS(1117),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [721] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1389),
    [anon_sym_DASH] = ACTIONS(1389),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [722] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [723] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [724] = {
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(1447),
    [anon_sym_unsafe] = ACTIONS(1447),
    [anon_sym_abstract] = ACTIONS(1447),
    [anon_sym_sealed] = ACTIONS(1447),
    [anon_sym_static] = ACTIONS(1447),
    [anon_sym_new] = ACTIONS(1447),
    [anon_sym_public] = ACTIONS(1447),
    [anon_sym_protected] = ACTIONS(1447),
    [anon_sym_internal] = ACTIONS(1447),
    [anon_sym_private] = ACTIONS(1447),
    [anon_sym_interface] = ACTIONS(1447),
    [anon_sym_struct] = ACTIONS(1447),
    [anon_sym_enum] = ACTIONS(1447),
    [anon_sym_sbyte] = ACTIONS(1447),
    [anon_sym_byte] = ACTIONS(1447),
    [anon_sym_short] = ACTIONS(1447),
    [anon_sym_ushort] = ACTIONS(1447),
    [anon_sym_int] = ACTIONS(1447),
    [anon_sym_uint] = ACTIONS(1447),
    [anon_sym_long] = ACTIONS(1447),
    [anon_sym_ulong] = ACTIONS(1447),
    [anon_sym_char] = ACTIONS(1447),
    [anon_sym_delegate] = ACTIONS(1447),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym_const_keyword] = ACTIONS(1447),
    [anon_sym_readonly] = ACTIONS(1447),
    [anon_sym_volatile] = ACTIONS(1447),
    [anon_sym_bool] = ACTIONS(1447),
    [anon_sym_decimal] = ACTIONS(1447),
    [anon_sym_double] = ACTIONS(1447),
    [anon_sym_float] = ACTIONS(1447),
    [anon_sym_object] = ACTIONS(1447),
    [anon_sym_string] = ACTIONS(1447),
    [sym_identifier_name] = ACTIONS(1449),
    [sym_comment] = ACTIONS(38),
  },
  [725] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(1451),
    [anon_sym_unsafe] = ACTIONS(1451),
    [anon_sym_abstract] = ACTIONS(1451),
    [anon_sym_sealed] = ACTIONS(1451),
    [anon_sym_static] = ACTIONS(1451),
    [anon_sym_new] = ACTIONS(1451),
    [anon_sym_public] = ACTIONS(1451),
    [anon_sym_protected] = ACTIONS(1451),
    [anon_sym_internal] = ACTIONS(1451),
    [anon_sym_private] = ACTIONS(1451),
    [anon_sym_interface] = ACTIONS(1451),
    [anon_sym_struct] = ACTIONS(1451),
    [anon_sym_enum] = ACTIONS(1451),
    [anon_sym_sbyte] = ACTIONS(1451),
    [anon_sym_byte] = ACTIONS(1451),
    [anon_sym_short] = ACTIONS(1451),
    [anon_sym_ushort] = ACTIONS(1451),
    [anon_sym_int] = ACTIONS(1451),
    [anon_sym_uint] = ACTIONS(1451),
    [anon_sym_long] = ACTIONS(1451),
    [anon_sym_ulong] = ACTIONS(1451),
    [anon_sym_char] = ACTIONS(1451),
    [anon_sym_delegate] = ACTIONS(1451),
    [anon_sym_LBRACK] = ACTIONS(829),
    [sym_const_keyword] = ACTIONS(1451),
    [anon_sym_readonly] = ACTIONS(1451),
    [anon_sym_volatile] = ACTIONS(1451),
    [anon_sym_bool] = ACTIONS(1451),
    [anon_sym_decimal] = ACTIONS(1451),
    [anon_sym_double] = ACTIONS(1451),
    [anon_sym_float] = ACTIONS(1451),
    [anon_sym_object] = ACTIONS(1451),
    [anon_sym_string] = ACTIONS(1451),
    [sym_identifier_name] = ACTIONS(1453),
    [sym_comment] = ACTIONS(38),
  },
  [726] = {
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_class] = ACTIONS(1455),
    [anon_sym_unsafe] = ACTIONS(1455),
    [anon_sym_abstract] = ACTIONS(1455),
    [anon_sym_sealed] = ACTIONS(1455),
    [anon_sym_static] = ACTIONS(1455),
    [anon_sym_new] = ACTIONS(1455),
    [anon_sym_public] = ACTIONS(1455),
    [anon_sym_protected] = ACTIONS(1455),
    [anon_sym_internal] = ACTIONS(1455),
    [anon_sym_private] = ACTIONS(1455),
    [anon_sym_interface] = ACTIONS(1455),
    [anon_sym_struct] = ACTIONS(1455),
    [anon_sym_enum] = ACTIONS(1455),
    [anon_sym_sbyte] = ACTIONS(1455),
    [anon_sym_byte] = ACTIONS(1455),
    [anon_sym_short] = ACTIONS(1455),
    [anon_sym_ushort] = ACTIONS(1455),
    [anon_sym_int] = ACTIONS(1455),
    [anon_sym_uint] = ACTIONS(1455),
    [anon_sym_long] = ACTIONS(1455),
    [anon_sym_ulong] = ACTIONS(1455),
    [anon_sym_char] = ACTIONS(1455),
    [anon_sym_delegate] = ACTIONS(1455),
    [anon_sym_LBRACK] = ACTIONS(859),
    [sym_const_keyword] = ACTIONS(1455),
    [anon_sym_readonly] = ACTIONS(1455),
    [anon_sym_volatile] = ACTIONS(1455),
    [anon_sym_bool] = ACTIONS(1455),
    [anon_sym_decimal] = ACTIONS(1455),
    [anon_sym_double] = ACTIONS(1455),
    [anon_sym_float] = ACTIONS(1455),
    [anon_sym_object] = ACTIONS(1455),
    [anon_sym_string] = ACTIONS(1455),
    [sym_identifier_name] = ACTIONS(1457),
    [sym_comment] = ACTIONS(38),
  },
  [727] = {
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(1459),
    [anon_sym_unsafe] = ACTIONS(1459),
    [anon_sym_abstract] = ACTIONS(1459),
    [anon_sym_sealed] = ACTIONS(1459),
    [anon_sym_static] = ACTIONS(1459),
    [anon_sym_new] = ACTIONS(1459),
    [anon_sym_public] = ACTIONS(1459),
    [anon_sym_protected] = ACTIONS(1459),
    [anon_sym_internal] = ACTIONS(1459),
    [anon_sym_private] = ACTIONS(1459),
    [anon_sym_interface] = ACTIONS(1459),
    [anon_sym_struct] = ACTIONS(1459),
    [anon_sym_enum] = ACTIONS(1459),
    [anon_sym_sbyte] = ACTIONS(1459),
    [anon_sym_byte] = ACTIONS(1459),
    [anon_sym_short] = ACTIONS(1459),
    [anon_sym_ushort] = ACTIONS(1459),
    [anon_sym_int] = ACTIONS(1459),
    [anon_sym_uint] = ACTIONS(1459),
    [anon_sym_long] = ACTIONS(1459),
    [anon_sym_ulong] = ACTIONS(1459),
    [anon_sym_char] = ACTIONS(1459),
    [anon_sym_delegate] = ACTIONS(1459),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(1459),
    [anon_sym_readonly] = ACTIONS(1459),
    [anon_sym_volatile] = ACTIONS(1459),
    [anon_sym_bool] = ACTIONS(1459),
    [anon_sym_decimal] = ACTIONS(1459),
    [anon_sym_double] = ACTIONS(1459),
    [anon_sym_float] = ACTIONS(1459),
    [anon_sym_object] = ACTIONS(1459),
    [anon_sym_string] = ACTIONS(1459),
    [sym_identifier_name] = ACTIONS(1461),
    [sym_comment] = ACTIONS(38),
  },
  [728] = {
    [anon_sym_SEMI] = ACTIONS(1509),
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(1459),
    [anon_sym_unsafe] = ACTIONS(1459),
    [anon_sym_abstract] = ACTIONS(1459),
    [anon_sym_sealed] = ACTIONS(1459),
    [anon_sym_static] = ACTIONS(1459),
    [anon_sym_new] = ACTIONS(1459),
    [anon_sym_public] = ACTIONS(1459),
    [anon_sym_protected] = ACTIONS(1459),
    [anon_sym_internal] = ACTIONS(1459),
    [anon_sym_private] = ACTIONS(1459),
    [anon_sym_interface] = ACTIONS(1459),
    [anon_sym_struct] = ACTIONS(1459),
    [anon_sym_enum] = ACTIONS(1459),
    [anon_sym_sbyte] = ACTIONS(1459),
    [anon_sym_byte] = ACTIONS(1459),
    [anon_sym_short] = ACTIONS(1459),
    [anon_sym_ushort] = ACTIONS(1459),
    [anon_sym_int] = ACTIONS(1459),
    [anon_sym_uint] = ACTIONS(1459),
    [anon_sym_long] = ACTIONS(1459),
    [anon_sym_ulong] = ACTIONS(1459),
    [anon_sym_char] = ACTIONS(1459),
    [anon_sym_delegate] = ACTIONS(1459),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(1459),
    [anon_sym_readonly] = ACTIONS(1459),
    [anon_sym_volatile] = ACTIONS(1459),
    [anon_sym_bool] = ACTIONS(1459),
    [anon_sym_decimal] = ACTIONS(1459),
    [anon_sym_double] = ACTIONS(1459),
    [anon_sym_float] = ACTIONS(1459),
    [anon_sym_object] = ACTIONS(1459),
    [anon_sym_string] = ACTIONS(1459),
    [sym_identifier_name] = ACTIONS(1461),
    [sym_comment] = ACTIONS(38),
  },
  [729] = {
    [aux_sym_enum_declaration_repeat1] = STATE(789),
    [anon_sym_RBRACE] = ACTIONS(1511),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [730] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1513),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [731] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [732] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1517),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [733] = {
    [anon_sym_RBRACE] = ACTIONS(1511),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [734] = {
    [sym_enum_member_declaration] = STATE(793),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [735] = {
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_class] = ACTIONS(1493),
    [anon_sym_unsafe] = ACTIONS(1493),
    [anon_sym_abstract] = ACTIONS(1493),
    [anon_sym_sealed] = ACTIONS(1493),
    [anon_sym_static] = ACTIONS(1493),
    [anon_sym_new] = ACTIONS(1493),
    [anon_sym_public] = ACTIONS(1493),
    [anon_sym_protected] = ACTIONS(1493),
    [anon_sym_internal] = ACTIONS(1493),
    [anon_sym_private] = ACTIONS(1493),
    [anon_sym_interface] = ACTIONS(1493),
    [anon_sym_struct] = ACTIONS(1493),
    [anon_sym_enum] = ACTIONS(1493),
    [anon_sym_sbyte] = ACTIONS(1493),
    [anon_sym_byte] = ACTIONS(1493),
    [anon_sym_short] = ACTIONS(1493),
    [anon_sym_ushort] = ACTIONS(1493),
    [anon_sym_int] = ACTIONS(1493),
    [anon_sym_uint] = ACTIONS(1493),
    [anon_sym_long] = ACTIONS(1493),
    [anon_sym_ulong] = ACTIONS(1493),
    [anon_sym_char] = ACTIONS(1493),
    [anon_sym_delegate] = ACTIONS(1493),
    [anon_sym_LBRACK] = ACTIONS(975),
    [sym_const_keyword] = ACTIONS(1493),
    [anon_sym_readonly] = ACTIONS(1493),
    [anon_sym_volatile] = ACTIONS(1493),
    [anon_sym_bool] = ACTIONS(1493),
    [anon_sym_decimal] = ACTIONS(1493),
    [anon_sym_double] = ACTIONS(1493),
    [anon_sym_float] = ACTIONS(1493),
    [anon_sym_object] = ACTIONS(1493),
    [anon_sym_string] = ACTIONS(1493),
    [sym_identifier_name] = ACTIONS(1495),
    [sym_comment] = ACTIONS(38),
  },
  [736] = {
    [sym__type_declaration] = STATE(141),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(141),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(141),
    [sym_method_declaration] = STATE(141),
    [sym_method_modifiers] = STATE(154),
    [aux_sym_class_declaration_repeat1] = STATE(794),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1513),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [737] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(164),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_interface_declaration_repeat1] = STATE(795),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [738] = {
    [sym__type_declaration] = STATE(180),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(180),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym_struct_declaration_repeat1] = STATE(796),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1517),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [739] = {
    [anon_sym_LBRACE] = ACTIONS(1519),
    [sym_comment] = ACTIONS(38),
  },
  [740] = {
    [anon_sym_SEMI] = ACTIONS(1521),
    [sym_comment] = ACTIONS(38),
  },
  [741] = {
    [anon_sym_SEMI] = ACTIONS(1523),
    [anon_sym_RBRACE] = ACTIONS(1523),
    [anon_sym_COLON] = ACTIONS(1523),
    [anon_sym_COMMA] = ACTIONS(1523),
    [anon_sym_RPAREN] = ACTIONS(1523),
    [sym_params_keyword] = ACTIONS(1523),
    [anon_sym_LBRACK] = ACTIONS(1523),
    [anon_sym_QMARK] = ACTIONS(1523),
    [anon_sym_AMP_AMP] = ACTIONS(1523),
    [anon_sym_PIPE_PIPE] = ACTIONS(1523),
    [anon_sym_GT_GT] = ACTIONS(1523),
    [anon_sym_LT_LT] = ACTIONS(1523),
    [anon_sym_AMP] = ACTIONS(1525),
    [anon_sym_CARET] = ACTIONS(1523),
    [anon_sym_PIPE] = ACTIONS(1525),
    [anon_sym_PLUS] = ACTIONS(1523),
    [anon_sym_DASH] = ACTIONS(1523),
    [anon_sym_STAR] = ACTIONS(1523),
    [anon_sym_SLASH] = ACTIONS(1525),
    [anon_sym_PERCENT] = ACTIONS(1523),
    [anon_sym_LT] = ACTIONS(1525),
    [anon_sym_LT_EQ] = ACTIONS(1523),
    [anon_sym_EQ_EQ] = ACTIONS(1523),
    [anon_sym_BANG_EQ] = ACTIONS(1523),
    [anon_sym_GT_EQ] = ACTIONS(1523),
    [anon_sym_GT] = ACTIONS(1525),
    [sym_comment] = ACTIONS(38),
  },
  [742] = {
    [anon_sym_SEMI] = ACTIONS(1523),
    [anon_sym_RBRACE] = ACTIONS(1523),
    [anon_sym_COLON] = ACTIONS(1523),
    [anon_sym_COMMA] = ACTIONS(1523),
    [anon_sym_RPAREN] = ACTIONS(1523),
    [sym_params_keyword] = ACTIONS(1523),
    [anon_sym_LBRACK] = ACTIONS(1523),
    [anon_sym_QMARK] = ACTIONS(1523),
    [anon_sym_AMP_AMP] = ACTIONS(1523),
    [anon_sym_PIPE_PIPE] = ACTIONS(1523),
    [anon_sym_GT_GT] = ACTIONS(1523),
    [anon_sym_LT_LT] = ACTIONS(1523),
    [anon_sym_AMP] = ACTIONS(1525),
    [anon_sym_CARET] = ACTIONS(1523),
    [anon_sym_PIPE] = ACTIONS(1525),
    [anon_sym_PLUS] = ACTIONS(1523),
    [anon_sym_DASH] = ACTIONS(1523),
    [anon_sym_STAR] = ACTIONS(1523),
    [anon_sym_SLASH] = ACTIONS(1525),
    [anon_sym_PERCENT] = ACTIONS(1523),
    [anon_sym_LT] = ACTIONS(1525),
    [anon_sym_LT_EQ] = ACTIONS(1523),
    [anon_sym_EQ_EQ] = ACTIONS(1523),
    [anon_sym_BANG_EQ] = ACTIONS(1523),
    [anon_sym_GT_EQ] = ACTIONS(1523),
    [anon_sym_GT] = ACTIONS(1525),
    [sym__real_type_suffix] = ACTIONS(1527),
    [sym_comment] = ACTIONS(38),
  },
  [743] = {
    [sym__expression] = STATE(800),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(689),
    [anon_sym_BANG] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_typeof] = ACTIONS(689),
    [anon_sym_DASH_DASH] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [744] = {
    [sym__expression] = STATE(801),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [745] = {
    [sym__expression] = STATE(802),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [746] = {
    [sym__expression] = STATE(803),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [747] = {
    [sym__expression] = STATE(804),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [748] = {
    [sym__expression] = STATE(805),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [749] = {
    [sym__expression] = STATE(806),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [750] = {
    [sym__expression] = STATE(807),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [751] = {
    [sym__expression] = STATE(661),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [752] = {
    [sym__expression] = STATE(808),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [753] = {
    [sym__expression] = STATE(809),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [754] = {
    [ts_builtin_sym_end] = ACTIONS(1529),
    [anon_sym_using] = ACTIONS(1529),
    [anon_sym_namespace] = ACTIONS(1529),
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_class] = ACTIONS(1529),
    [anon_sym_unsafe] = ACTIONS(1529),
    [anon_sym_abstract] = ACTIONS(1529),
    [anon_sym_sealed] = ACTIONS(1529),
    [anon_sym_static] = ACTIONS(1529),
    [anon_sym_new] = ACTIONS(1529),
    [anon_sym_public] = ACTIONS(1529),
    [anon_sym_protected] = ACTIONS(1529),
    [anon_sym_internal] = ACTIONS(1529),
    [anon_sym_private] = ACTIONS(1529),
    [anon_sym_interface] = ACTIONS(1529),
    [anon_sym_struct] = ACTIONS(1529),
    [anon_sym_enum] = ACTIONS(1529),
    [anon_sym_delegate] = ACTIONS(1529),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_comment] = ACTIONS(38),
  },
  [755] = {
    [anon_sym_COMMA] = ACTIONS(1531),
    [anon_sym_RBRACK] = ACTIONS(1531),
    [sym_comment] = ACTIONS(38),
  },
  [756] = {
    [sym_identifier_name] = ACTIONS(1533),
    [sym_comment] = ACTIONS(38),
  },
  [757] = {
    [anon_sym_sbyte] = ACTIONS(312),
    [anon_sym_byte] = ACTIONS(312),
    [anon_sym_short] = ACTIONS(312),
    [anon_sym_ushort] = ACTIONS(312),
    [anon_sym_int] = ACTIONS(312),
    [anon_sym_uint] = ACTIONS(312),
    [anon_sym_long] = ACTIONS(312),
    [anon_sym_ulong] = ACTIONS(312),
    [anon_sym_char] = ACTIONS(312),
    [anon_sym_ref] = ACTIONS(312),
    [anon_sym_out] = ACTIONS(312),
    [anon_sym_this] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_bool] = ACTIONS(312),
    [anon_sym_decimal] = ACTIONS(312),
    [anon_sym_double] = ACTIONS(312),
    [anon_sym_float] = ACTIONS(312),
    [anon_sym_object] = ACTIONS(312),
    [anon_sym_string] = ACTIONS(312),
    [sym_identifier_name] = ACTIONS(316),
    [sym_comment] = ACTIONS(38),
  },
  [758] = {
    [anon_sym_COMMA] = ACTIONS(1535),
    [anon_sym_RPAREN] = ACTIONS(1535),
    [sym_params_keyword] = ACTIONS(1535),
    [anon_sym_LBRACK] = ACTIONS(1535),
    [sym_comment] = ACTIONS(38),
  },
  [759] = {
    [sym__expression] = STATE(810),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [760] = {
    [sym__expression] = STATE(811),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [761] = {
    [sym__expression] = STATE(812),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [762] = {
    [sym__expression] = STATE(813),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [763] = {
    [sym__expression] = STATE(814),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [764] = {
    [sym__expression] = STATE(815),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [765] = {
    [sym__expression] = STATE(816),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [766] = {
    [sym__expression] = STATE(661),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [767] = {
    [sym__expression] = STATE(817),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [768] = {
    [sym__expression] = STATE(818),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [769] = {
    [ts_builtin_sym_end] = ACTIONS(1529),
    [anon_sym_SEMI] = ACTIONS(1537),
    [anon_sym_using] = ACTIONS(1529),
    [anon_sym_namespace] = ACTIONS(1529),
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_class] = ACTIONS(1529),
    [anon_sym_unsafe] = ACTIONS(1529),
    [anon_sym_abstract] = ACTIONS(1529),
    [anon_sym_sealed] = ACTIONS(1529),
    [anon_sym_static] = ACTIONS(1529),
    [anon_sym_new] = ACTIONS(1529),
    [anon_sym_public] = ACTIONS(1529),
    [anon_sym_protected] = ACTIONS(1529),
    [anon_sym_internal] = ACTIONS(1529),
    [anon_sym_private] = ACTIONS(1529),
    [anon_sym_interface] = ACTIONS(1529),
    [anon_sym_struct] = ACTIONS(1529),
    [anon_sym_enum] = ACTIONS(1529),
    [anon_sym_delegate] = ACTIONS(1529),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_comment] = ACTIONS(38),
  },
  [770] = {
    [anon_sym_RBRACE] = ACTIONS(1539),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [771] = {
    [anon_sym_RBRACE] = ACTIONS(1193),
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
    [anon_sym_interface] = ACTIONS(1541),
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
    [sym_void_keyword] = ACTIONS(1541),
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_const_keyword] = ACTIONS(1541),
    [anon_sym_readonly] = ACTIONS(1541),
    [anon_sym_volatile] = ACTIONS(1541),
    [anon_sym_bool] = ACTIONS(1541),
    [anon_sym_decimal] = ACTIONS(1541),
    [anon_sym_double] = ACTIONS(1541),
    [anon_sym_float] = ACTIONS(1541),
    [anon_sym_object] = ACTIONS(1541),
    [anon_sym_string] = ACTIONS(1541),
    [sym_identifier_name] = ACTIONS(1543),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1541),
  },
  [772] = {
    [anon_sym_SEMI] = ACTIONS(1545),
    [anon_sym_RBRACE] = ACTIONS(1193),
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
    [anon_sym_interface] = ACTIONS(1541),
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
    [sym_void_keyword] = ACTIONS(1541),
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_const_keyword] = ACTIONS(1541),
    [anon_sym_readonly] = ACTIONS(1541),
    [anon_sym_volatile] = ACTIONS(1541),
    [anon_sym_bool] = ACTIONS(1541),
    [anon_sym_decimal] = ACTIONS(1541),
    [anon_sym_double] = ACTIONS(1541),
    [anon_sym_float] = ACTIONS(1541),
    [anon_sym_object] = ACTIONS(1541),
    [anon_sym_string] = ACTIONS(1541),
    [sym_identifier_name] = ACTIONS(1543),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1541),
  },
  [773] = {
    [anon_sym_RBRACE] = ACTIONS(1547),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [774] = {
    [sym__expression] = STATE(823),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(779),
    [anon_sym_TILDE] = ACTIONS(779),
    [anon_sym_typeof] = ACTIONS(777),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [775] = {
    [anon_sym_RBRACE] = ACTIONS(1223),
    [anon_sym_class] = ACTIONS(1549),
    [anon_sym_unsafe] = ACTIONS(1549),
    [anon_sym_abstract] = ACTIONS(1549),
    [anon_sym_sealed] = ACTIONS(1549),
    [anon_sym_static] = ACTIONS(1549),
    [anon_sym_new] = ACTIONS(1549),
    [anon_sym_public] = ACTIONS(1549),
    [anon_sym_protected] = ACTIONS(1549),
    [anon_sym_internal] = ACTIONS(1549),
    [anon_sym_private] = ACTIONS(1549),
    [anon_sym_interface] = ACTIONS(1549),
    [anon_sym_struct] = ACTIONS(1549),
    [anon_sym_enum] = ACTIONS(1549),
    [anon_sym_sbyte] = ACTIONS(1549),
    [anon_sym_byte] = ACTIONS(1549),
    [anon_sym_short] = ACTIONS(1549),
    [anon_sym_ushort] = ACTIONS(1549),
    [anon_sym_int] = ACTIONS(1549),
    [anon_sym_uint] = ACTIONS(1549),
    [anon_sym_long] = ACTIONS(1549),
    [anon_sym_ulong] = ACTIONS(1549),
    [anon_sym_char] = ACTIONS(1549),
    [anon_sym_delegate] = ACTIONS(1549),
    [sym_void_keyword] = ACTIONS(1549),
    [anon_sym_LBRACK] = ACTIONS(1223),
    [sym_const_keyword] = ACTIONS(1549),
    [anon_sym_readonly] = ACTIONS(1549),
    [anon_sym_volatile] = ACTIONS(1549),
    [anon_sym_bool] = ACTIONS(1549),
    [anon_sym_decimal] = ACTIONS(1549),
    [anon_sym_double] = ACTIONS(1549),
    [anon_sym_float] = ACTIONS(1549),
    [anon_sym_object] = ACTIONS(1549),
    [anon_sym_string] = ACTIONS(1549),
    [sym_identifier_name] = ACTIONS(1551),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1549),
  },
  [776] = {
    [anon_sym_RBRACE] = ACTIONS(1225),
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
    [anon_sym_interface] = ACTIONS(1553),
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
    [sym_void_keyword] = ACTIONS(1553),
    [anon_sym_LBRACK] = ACTIONS(1225),
    [sym_const_keyword] = ACTIONS(1553),
    [anon_sym_readonly] = ACTIONS(1553),
    [anon_sym_volatile] = ACTIONS(1553),
    [anon_sym_bool] = ACTIONS(1553),
    [anon_sym_decimal] = ACTIONS(1553),
    [anon_sym_double] = ACTIONS(1553),
    [anon_sym_float] = ACTIONS(1553),
    [anon_sym_object] = ACTIONS(1553),
    [anon_sym_string] = ACTIONS(1553),
    [sym_identifier_name] = ACTIONS(1555),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1553),
  },
  [777] = {
    [anon_sym_RBRACE] = ACTIONS(1227),
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
    [anon_sym_interface] = ACTIONS(1557),
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
    [sym_void_keyword] = ACTIONS(1557),
    [anon_sym_LBRACK] = ACTIONS(1227),
    [sym_const_keyword] = ACTIONS(1557),
    [anon_sym_readonly] = ACTIONS(1557),
    [anon_sym_volatile] = ACTIONS(1557),
    [anon_sym_bool] = ACTIONS(1557),
    [anon_sym_decimal] = ACTIONS(1557),
    [anon_sym_double] = ACTIONS(1557),
    [anon_sym_float] = ACTIONS(1557),
    [anon_sym_object] = ACTIONS(1557),
    [anon_sym_string] = ACTIONS(1557),
    [sym_identifier_name] = ACTIONS(1559),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1557),
  },
  [778] = {
    [aux_sym_enum_declaration_repeat1] = STATE(824),
    [anon_sym_RBRACE] = ACTIONS(1547),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [779] = {
    [anon_sym_RBRACE] = ACTIONS(1561),
    [anon_sym_class] = ACTIONS(1563),
    [anon_sym_unsafe] = ACTIONS(1563),
    [anon_sym_abstract] = ACTIONS(1563),
    [anon_sym_sealed] = ACTIONS(1563),
    [anon_sym_static] = ACTIONS(1563),
    [anon_sym_new] = ACTIONS(1563),
    [anon_sym_public] = ACTIONS(1563),
    [anon_sym_protected] = ACTIONS(1563),
    [anon_sym_internal] = ACTIONS(1563),
    [anon_sym_private] = ACTIONS(1563),
    [anon_sym_interface] = ACTIONS(1563),
    [anon_sym_struct] = ACTIONS(1563),
    [anon_sym_enum] = ACTIONS(1563),
    [anon_sym_sbyte] = ACTIONS(1563),
    [anon_sym_byte] = ACTIONS(1563),
    [anon_sym_short] = ACTIONS(1563),
    [anon_sym_ushort] = ACTIONS(1563),
    [anon_sym_int] = ACTIONS(1563),
    [anon_sym_uint] = ACTIONS(1563),
    [anon_sym_long] = ACTIONS(1563),
    [anon_sym_ulong] = ACTIONS(1563),
    [anon_sym_char] = ACTIONS(1563),
    [anon_sym_delegate] = ACTIONS(1563),
    [sym_void_keyword] = ACTIONS(1563),
    [anon_sym_LBRACK] = ACTIONS(1561),
    [sym_const_keyword] = ACTIONS(1563),
    [anon_sym_readonly] = ACTIONS(1563),
    [anon_sym_volatile] = ACTIONS(1563),
    [anon_sym_bool] = ACTIONS(1563),
    [anon_sym_decimal] = ACTIONS(1563),
    [anon_sym_double] = ACTIONS(1563),
    [anon_sym_float] = ACTIONS(1563),
    [anon_sym_object] = ACTIONS(1563),
    [anon_sym_string] = ACTIONS(1563),
    [sym_identifier_name] = ACTIONS(1565),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1563),
  },
  [780] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1567),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [781] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1569),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [782] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1571),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [783] = {
    [sym_enum_member_declaration] = STATE(828),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [784] = {
    [anon_sym_RBRACE] = ACTIONS(1235),
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
    [anon_sym_interface] = ACTIONS(1573),
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
    [sym_void_keyword] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(1235),
    [sym_const_keyword] = ACTIONS(1573),
    [anon_sym_readonly] = ACTIONS(1573),
    [anon_sym_volatile] = ACTIONS(1573),
    [anon_sym_bool] = ACTIONS(1573),
    [anon_sym_decimal] = ACTIONS(1573),
    [anon_sym_double] = ACTIONS(1573),
    [anon_sym_float] = ACTIONS(1573),
    [anon_sym_object] = ACTIONS(1573),
    [anon_sym_string] = ACTIONS(1573),
    [sym_identifier_name] = ACTIONS(1575),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1573),
  },
  [785] = {
    [sym_statement_block] = STATE(829),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(38),
  },
  [786] = {
    [sym__expression] = STATE(830),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(809),
    [anon_sym_DASH] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_typeof] = ACTIONS(809),
    [anon_sym_DASH_DASH] = ACTIONS(811),
    [anon_sym_PLUS_PLUS] = ACTIONS(811),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [787] = {
    [anon_sym_RBRACE] = ACTIONS(1193),
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
    [anon_sym_interface] = ACTIONS(1541),
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
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_const_keyword] = ACTIONS(1541),
    [anon_sym_readonly] = ACTIONS(1541),
    [anon_sym_volatile] = ACTIONS(1541),
    [anon_sym_bool] = ACTIONS(1541),
    [anon_sym_decimal] = ACTIONS(1541),
    [anon_sym_double] = ACTIONS(1541),
    [anon_sym_float] = ACTIONS(1541),
    [anon_sym_object] = ACTIONS(1541),
    [anon_sym_string] = ACTIONS(1541),
    [sym_identifier_name] = ACTIONS(1543),
    [sym_comment] = ACTIONS(38),
  },
  [788] = {
    [anon_sym_SEMI] = ACTIONS(1577),
    [anon_sym_RBRACE] = ACTIONS(1193),
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
    [anon_sym_interface] = ACTIONS(1541),
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
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_const_keyword] = ACTIONS(1541),
    [anon_sym_readonly] = ACTIONS(1541),
    [anon_sym_volatile] = ACTIONS(1541),
    [anon_sym_bool] = ACTIONS(1541),
    [anon_sym_decimal] = ACTIONS(1541),
    [anon_sym_double] = ACTIONS(1541),
    [anon_sym_float] = ACTIONS(1541),
    [anon_sym_object] = ACTIONS(1541),
    [anon_sym_string] = ACTIONS(1541),
    [sym_identifier_name] = ACTIONS(1543),
    [sym_comment] = ACTIONS(38),
  },
  [789] = {
    [anon_sym_RBRACE] = ACTIONS(1579),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [790] = {
    [anon_sym_RBRACE] = ACTIONS(1223),
    [anon_sym_class] = ACTIONS(1549),
    [anon_sym_unsafe] = ACTIONS(1549),
    [anon_sym_abstract] = ACTIONS(1549),
    [anon_sym_sealed] = ACTIONS(1549),
    [anon_sym_static] = ACTIONS(1549),
    [anon_sym_new] = ACTIONS(1549),
    [anon_sym_public] = ACTIONS(1549),
    [anon_sym_protected] = ACTIONS(1549),
    [anon_sym_internal] = ACTIONS(1549),
    [anon_sym_private] = ACTIONS(1549),
    [anon_sym_interface] = ACTIONS(1549),
    [anon_sym_struct] = ACTIONS(1549),
    [anon_sym_enum] = ACTIONS(1549),
    [anon_sym_sbyte] = ACTIONS(1549),
    [anon_sym_byte] = ACTIONS(1549),
    [anon_sym_short] = ACTIONS(1549),
    [anon_sym_ushort] = ACTIONS(1549),
    [anon_sym_int] = ACTIONS(1549),
    [anon_sym_uint] = ACTIONS(1549),
    [anon_sym_long] = ACTIONS(1549),
    [anon_sym_ulong] = ACTIONS(1549),
    [anon_sym_char] = ACTIONS(1549),
    [anon_sym_delegate] = ACTIONS(1549),
    [anon_sym_LBRACK] = ACTIONS(1223),
    [sym_const_keyword] = ACTIONS(1549),
    [anon_sym_readonly] = ACTIONS(1549),
    [anon_sym_volatile] = ACTIONS(1549),
    [anon_sym_bool] = ACTIONS(1549),
    [anon_sym_decimal] = ACTIONS(1549),
    [anon_sym_double] = ACTIONS(1549),
    [anon_sym_float] = ACTIONS(1549),
    [anon_sym_object] = ACTIONS(1549),
    [anon_sym_string] = ACTIONS(1549),
    [sym_identifier_name] = ACTIONS(1551),
    [sym_comment] = ACTIONS(38),
  },
  [791] = {
    [anon_sym_RBRACE] = ACTIONS(1225),
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
    [anon_sym_interface] = ACTIONS(1553),
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
    [anon_sym_LBRACK] = ACTIONS(1225),
    [sym_const_keyword] = ACTIONS(1553),
    [anon_sym_readonly] = ACTIONS(1553),
    [anon_sym_volatile] = ACTIONS(1553),
    [anon_sym_bool] = ACTIONS(1553),
    [anon_sym_decimal] = ACTIONS(1553),
    [anon_sym_double] = ACTIONS(1553),
    [anon_sym_float] = ACTIONS(1553),
    [anon_sym_object] = ACTIONS(1553),
    [anon_sym_string] = ACTIONS(1553),
    [sym_identifier_name] = ACTIONS(1555),
    [sym_comment] = ACTIONS(38),
  },
  [792] = {
    [anon_sym_RBRACE] = ACTIONS(1227),
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
    [anon_sym_interface] = ACTIONS(1557),
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
    [anon_sym_LBRACK] = ACTIONS(1227),
    [sym_const_keyword] = ACTIONS(1557),
    [anon_sym_readonly] = ACTIONS(1557),
    [anon_sym_volatile] = ACTIONS(1557),
    [anon_sym_bool] = ACTIONS(1557),
    [anon_sym_decimal] = ACTIONS(1557),
    [anon_sym_double] = ACTIONS(1557),
    [anon_sym_float] = ACTIONS(1557),
    [anon_sym_object] = ACTIONS(1557),
    [anon_sym_string] = ACTIONS(1557),
    [sym_identifier_name] = ACTIONS(1559),
    [sym_comment] = ACTIONS(38),
  },
  [793] = {
    [aux_sym_enum_declaration_repeat1] = STATE(833),
    [anon_sym_RBRACE] = ACTIONS(1579),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [794] = {
    [sym__type_declaration] = STATE(254),
    [sym_class_declaration] = STATE(142),
    [sym_class_modifiers] = STATE(143),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(142),
    [sym_interface_modifiers] = STATE(144),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(142),
    [sym_struct_modifiers] = STATE(145),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(142),
    [sym_enum_modifiers] = STATE(146),
    [sym_delegate_declaration] = STATE(142),
    [sym_delegate_modifier] = STATE(147),
    [sym_return_type] = STATE(148),
    [sym__attributes] = STATE(149),
    [sym__attribute_section] = STATE(29),
    [sym_field_declaration] = STATE(254),
    [sym_field_modifiers] = STATE(150),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(152),
    [sym__type] = STATE(153),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [sym_constructor_declaration] = STATE(254),
    [sym_method_declaration] = STATE(254),
    [sym_method_modifiers] = STATE(154),
    [aux_sym__attributes_repeat1] = STATE(35),
    [anon_sym_RBRACE] = ACTIONS(1581),
    [anon_sym_class] = ACTIONS(240),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(248),
    [anon_sym_public] = ACTIONS(248),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_internal] = ACTIONS(248),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_interface] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(252),
    [anon_sym_enum] = ACTIONS(254),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(256),
    [sym_void_keyword] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(264),
  },
  [795] = {
    [sym__attributes] = STATE(162),
    [sym__attribute_section] = STATE(163),
    [sym_field_declaration] = STATE(265),
    [sym_field_modifiers] = STATE(165),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(166),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_RBRACE] = ACTIONS(1583),
    [anon_sym_unsafe] = ACTIONS(260),
    [anon_sym_static] = ACTIONS(260),
    [anon_sym_new] = ACTIONS(260),
    [anon_sym_public] = ACTIONS(260),
    [anon_sym_protected] = ACTIONS(260),
    [anon_sym_internal] = ACTIONS(260),
    [anon_sym_private] = ACTIONS(260),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_const_keyword] = ACTIONS(272),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [796] = {
    [sym__type_declaration] = STATE(289),
    [sym_class_declaration] = STATE(181),
    [sym_class_modifiers] = STATE(182),
    [sym__class_modifiers] = STATE(21),
    [sym_interface_declaration] = STATE(181),
    [sym_interface_modifiers] = STATE(183),
    [sym__interface_modifiers] = STATE(23),
    [sym_struct_declaration] = STATE(181),
    [sym_struct_modifiers] = STATE(184),
    [sym__struct_modifiers] = STATE(25),
    [sym_enum_declaration] = STATE(181),
    [sym_enum_modifiers] = STATE(185),
    [sym_delegate_declaration] = STATE(181),
    [sym_delegate_modifier] = STATE(186),
    [sym__attributes] = STATE(187),
    [sym__attribute_section] = STATE(188),
    [sym_field_declaration] = STATE(289),
    [sym_field_modifiers] = STATE(189),
    [sym__field_modifiers] = STATE(151),
    [sym_variable_declaration] = STATE(190),
    [sym__type] = STATE(167),
    [sym_generic_name] = STATE(61),
    [sym_predefined_type] = STATE(61),
    [aux_sym__attributes_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(1585),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(244),
    [anon_sym_sealed] = ACTIONS(244),
    [anon_sym_static] = ACTIONS(246),
    [anon_sym_new] = ACTIONS(280),
    [anon_sym_public] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_internal] = ACTIONS(280),
    [anon_sym_private] = ACTIONS(280),
    [anon_sym_interface] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(286),
    [anon_sym_sbyte] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_short] = ACTIONS(74),
    [anon_sym_ushort] = ACTIONS(74),
    [anon_sym_int] = ACTIONS(74),
    [anon_sym_uint] = ACTIONS(74),
    [anon_sym_long] = ACTIONS(74),
    [anon_sym_ulong] = ACTIONS(74),
    [anon_sym_char] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(292),
    [anon_sym_readonly] = ACTIONS(260),
    [anon_sym_volatile] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(74),
    [anon_sym_decimal] = ACTIONS(74),
    [anon_sym_double] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_object] = ACTIONS(74),
    [anon_sym_string] = ACTIONS(74),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(38),
  },
  [797] = {
    [sym_enum_member_declaration] = STATE(837),
    [sym__attributes] = STATE(197),
    [sym__attribute_section] = STATE(198),
    [aux_sym__attributes_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(296),
    [sym_identifier_name] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [798] = {
    [anon_sym_RBRACE] = ACTIONS(1235),
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
    [anon_sym_interface] = ACTIONS(1573),
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
    [anon_sym_LBRACK] = ACTIONS(1235),
    [sym_const_keyword] = ACTIONS(1573),
    [anon_sym_readonly] = ACTIONS(1573),
    [anon_sym_volatile] = ACTIONS(1573),
    [anon_sym_bool] = ACTIONS(1573),
    [anon_sym_decimal] = ACTIONS(1573),
    [anon_sym_double] = ACTIONS(1573),
    [anon_sym_float] = ACTIONS(1573),
    [anon_sym_object] = ACTIONS(1573),
    [anon_sym_string] = ACTIONS(1573),
    [sym_identifier_name] = ACTIONS(1575),
    [sym_comment] = ACTIONS(38),
  },
  [799] = {
    [anon_sym_SEMI] = ACTIONS(1587),
    [anon_sym_RBRACE] = ACTIONS(1587),
    [anon_sym_COLON] = ACTIONS(1587),
    [anon_sym_COMMA] = ACTIONS(1587),
    [anon_sym_RPAREN] = ACTIONS(1587),
    [sym_params_keyword] = ACTIONS(1587),
    [anon_sym_LBRACK] = ACTIONS(1587),
    [anon_sym_QMARK] = ACTIONS(1587),
    [anon_sym_AMP_AMP] = ACTIONS(1587),
    [anon_sym_PIPE_PIPE] = ACTIONS(1587),
    [anon_sym_GT_GT] = ACTIONS(1587),
    [anon_sym_LT_LT] = ACTIONS(1587),
    [anon_sym_AMP] = ACTIONS(1589),
    [anon_sym_CARET] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(1589),
    [anon_sym_PLUS] = ACTIONS(1587),
    [anon_sym_DASH] = ACTIONS(1587),
    [anon_sym_STAR] = ACTIONS(1587),
    [anon_sym_SLASH] = ACTIONS(1589),
    [anon_sym_PERCENT] = ACTIONS(1587),
    [anon_sym_LT] = ACTIONS(1589),
    [anon_sym_LT_EQ] = ACTIONS(1587),
    [anon_sym_EQ_EQ] = ACTIONS(1587),
    [anon_sym_BANG_EQ] = ACTIONS(1587),
    [anon_sym_GT_EQ] = ACTIONS(1587),
    [anon_sym_GT] = ACTIONS(1589),
    [sym_comment] = ACTIONS(38),
  },
  [800] = {
    [anon_sym_RBRACE] = ACTIONS(1591),
    [anon_sym_COMMA] = ACTIONS(1591),
    [anon_sym_QMARK] = ACTIONS(907),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(911),
    [anon_sym_GT_GT] = ACTIONS(913),
    [anon_sym_LT_LT] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(917),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PLUS] = ACTIONS(921),
    [anon_sym_DASH] = ACTIONS(921),
    [anon_sym_STAR] = ACTIONS(923),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [anon_sym_GT_EQ] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(927),
    [sym_comment] = ACTIONS(38),
  },
  [801] = {
    [anon_sym_COLON] = ACTIONS(1593),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1367),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [802] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [803] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [804] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [805] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [806] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [807] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1389),
    [anon_sym_DASH] = ACTIONS(1389),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [808] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [809] = {
    [anon_sym_COLON] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [810] = {
    [anon_sym_COLON] = ACTIONS(1595),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1367),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [811] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1421),
    [anon_sym_CARET] = ACTIONS(1423),
    [anon_sym_PIPE] = ACTIONS(1425),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1437),
    [anon_sym_BANG_EQ] = ACTIONS(1437),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [812] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1415),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1421),
    [anon_sym_CARET] = ACTIONS(1423),
    [anon_sym_PIPE] = ACTIONS(1425),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1437),
    [anon_sym_BANG_EQ] = ACTIONS(1437),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [813] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [814] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1437),
    [anon_sym_BANG_EQ] = ACTIONS(1437),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [815] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1421),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1437),
    [anon_sym_BANG_EQ] = ACTIONS(1437),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [816] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_LT] = ACTIONS(1389),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1389),
    [anon_sym_DASH] = ACTIONS(1389),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [817] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1391),
    [anon_sym_LT_EQ] = ACTIONS(1389),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [818] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1389),
    [anon_sym_AMP_AMP] = ACTIONS(1389),
    [anon_sym_PIPE_PIPE] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1391),
    [anon_sym_CARET] = ACTIONS(1389),
    [anon_sym_PIPE] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1389),
    [anon_sym_BANG_EQ] = ACTIONS(1389),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [819] = {
    [ts_builtin_sym_end] = ACTIONS(1597),
    [anon_sym_using] = ACTIONS(1597),
    [anon_sym_namespace] = ACTIONS(1597),
    [anon_sym_RBRACE] = ACTIONS(1597),
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
    [anon_sym_interface] = ACTIONS(1597),
    [anon_sym_struct] = ACTIONS(1597),
    [anon_sym_enum] = ACTIONS(1597),
    [anon_sym_delegate] = ACTIONS(1597),
    [anon_sym_LBRACK] = ACTIONS(1597),
    [sym_comment] = ACTIONS(38),
  },
  [820] = {
    [ts_builtin_sym_end] = ACTIONS(1597),
    [anon_sym_SEMI] = ACTIONS(1599),
    [anon_sym_using] = ACTIONS(1597),
    [anon_sym_namespace] = ACTIONS(1597),
    [anon_sym_RBRACE] = ACTIONS(1597),
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
    [anon_sym_interface] = ACTIONS(1597),
    [anon_sym_struct] = ACTIONS(1597),
    [anon_sym_enum] = ACTIONS(1597),
    [anon_sym_delegate] = ACTIONS(1597),
    [anon_sym_LBRACK] = ACTIONS(1597),
    [sym_comment] = ACTIONS(38),
  },
  [821] = {
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_class] = ACTIONS(1601),
    [anon_sym_unsafe] = ACTIONS(1601),
    [anon_sym_abstract] = ACTIONS(1601),
    [anon_sym_sealed] = ACTIONS(1601),
    [anon_sym_static] = ACTIONS(1601),
    [anon_sym_new] = ACTIONS(1601),
    [anon_sym_public] = ACTIONS(1601),
    [anon_sym_protected] = ACTIONS(1601),
    [anon_sym_internal] = ACTIONS(1601),
    [anon_sym_private] = ACTIONS(1601),
    [anon_sym_interface] = ACTIONS(1601),
    [anon_sym_struct] = ACTIONS(1601),
    [anon_sym_enum] = ACTIONS(1601),
    [anon_sym_sbyte] = ACTIONS(1601),
    [anon_sym_byte] = ACTIONS(1601),
    [anon_sym_short] = ACTIONS(1601),
    [anon_sym_ushort] = ACTIONS(1601),
    [anon_sym_int] = ACTIONS(1601),
    [anon_sym_uint] = ACTIONS(1601),
    [anon_sym_long] = ACTIONS(1601),
    [anon_sym_ulong] = ACTIONS(1601),
    [anon_sym_char] = ACTIONS(1601),
    [anon_sym_delegate] = ACTIONS(1601),
    [sym_void_keyword] = ACTIONS(1601),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [sym_const_keyword] = ACTIONS(1601),
    [anon_sym_readonly] = ACTIONS(1601),
    [anon_sym_volatile] = ACTIONS(1601),
    [anon_sym_bool] = ACTIONS(1601),
    [anon_sym_decimal] = ACTIONS(1601),
    [anon_sym_double] = ACTIONS(1601),
    [anon_sym_float] = ACTIONS(1601),
    [anon_sym_object] = ACTIONS(1601),
    [anon_sym_string] = ACTIONS(1601),
    [sym_identifier_name] = ACTIONS(1603),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1601),
  },
  [822] = {
    [anon_sym_SEMI] = ACTIONS(1605),
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_class] = ACTIONS(1601),
    [anon_sym_unsafe] = ACTIONS(1601),
    [anon_sym_abstract] = ACTIONS(1601),
    [anon_sym_sealed] = ACTIONS(1601),
    [anon_sym_static] = ACTIONS(1601),
    [anon_sym_new] = ACTIONS(1601),
    [anon_sym_public] = ACTIONS(1601),
    [anon_sym_protected] = ACTIONS(1601),
    [anon_sym_internal] = ACTIONS(1601),
    [anon_sym_private] = ACTIONS(1601),
    [anon_sym_interface] = ACTIONS(1601),
    [anon_sym_struct] = ACTIONS(1601),
    [anon_sym_enum] = ACTIONS(1601),
    [anon_sym_sbyte] = ACTIONS(1601),
    [anon_sym_byte] = ACTIONS(1601),
    [anon_sym_short] = ACTIONS(1601),
    [anon_sym_ushort] = ACTIONS(1601),
    [anon_sym_int] = ACTIONS(1601),
    [anon_sym_uint] = ACTIONS(1601),
    [anon_sym_long] = ACTIONS(1601),
    [anon_sym_ulong] = ACTIONS(1601),
    [anon_sym_char] = ACTIONS(1601),
    [anon_sym_delegate] = ACTIONS(1601),
    [sym_void_keyword] = ACTIONS(1601),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [sym_const_keyword] = ACTIONS(1601),
    [anon_sym_readonly] = ACTIONS(1601),
    [anon_sym_volatile] = ACTIONS(1601),
    [anon_sym_bool] = ACTIONS(1601),
    [anon_sym_decimal] = ACTIONS(1601),
    [anon_sym_double] = ACTIONS(1601),
    [anon_sym_float] = ACTIONS(1601),
    [anon_sym_object] = ACTIONS(1601),
    [anon_sym_string] = ACTIONS(1601),
    [sym_identifier_name] = ACTIONS(1603),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1601),
  },
  [823] = {
    [anon_sym_SEMI] = ACTIONS(1591),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1023),
    [anon_sym_PIPE_PIPE] = ACTIONS(1025),
    [anon_sym_GT_GT] = ACTIONS(1027),
    [anon_sym_LT_LT] = ACTIONS(1027),
    [anon_sym_AMP] = ACTIONS(1029),
    [anon_sym_CARET] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1033),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1041),
    [anon_sym_LT_EQ] = ACTIONS(1043),
    [anon_sym_EQ_EQ] = ACTIONS(1045),
    [anon_sym_BANG_EQ] = ACTIONS(1045),
    [anon_sym_GT_EQ] = ACTIONS(1043),
    [anon_sym_GT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [824] = {
    [anon_sym_RBRACE] = ACTIONS(1607),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [825] = {
    [anon_sym_RBRACE] = ACTIONS(1441),
    [anon_sym_class] = ACTIONS(1609),
    [anon_sym_unsafe] = ACTIONS(1609),
    [anon_sym_abstract] = ACTIONS(1609),
    [anon_sym_sealed] = ACTIONS(1609),
    [anon_sym_static] = ACTIONS(1609),
    [anon_sym_new] = ACTIONS(1609),
    [anon_sym_public] = ACTIONS(1609),
    [anon_sym_protected] = ACTIONS(1609),
    [anon_sym_internal] = ACTIONS(1609),
    [anon_sym_private] = ACTIONS(1609),
    [anon_sym_interface] = ACTIONS(1609),
    [anon_sym_struct] = ACTIONS(1609),
    [anon_sym_enum] = ACTIONS(1609),
    [anon_sym_sbyte] = ACTIONS(1609),
    [anon_sym_byte] = ACTIONS(1609),
    [anon_sym_short] = ACTIONS(1609),
    [anon_sym_ushort] = ACTIONS(1609),
    [anon_sym_int] = ACTIONS(1609),
    [anon_sym_uint] = ACTIONS(1609),
    [anon_sym_long] = ACTIONS(1609),
    [anon_sym_ulong] = ACTIONS(1609),
    [anon_sym_char] = ACTIONS(1609),
    [anon_sym_delegate] = ACTIONS(1609),
    [sym_void_keyword] = ACTIONS(1609),
    [anon_sym_LBRACK] = ACTIONS(1441),
    [sym_const_keyword] = ACTIONS(1609),
    [anon_sym_readonly] = ACTIONS(1609),
    [anon_sym_volatile] = ACTIONS(1609),
    [anon_sym_bool] = ACTIONS(1609),
    [anon_sym_decimal] = ACTIONS(1609),
    [anon_sym_double] = ACTIONS(1609),
    [anon_sym_float] = ACTIONS(1609),
    [anon_sym_object] = ACTIONS(1609),
    [anon_sym_string] = ACTIONS(1609),
    [sym_identifier_name] = ACTIONS(1611),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1609),
  },
  [826] = {
    [anon_sym_RBRACE] = ACTIONS(1443),
    [anon_sym_class] = ACTIONS(1613),
    [anon_sym_unsafe] = ACTIONS(1613),
    [anon_sym_abstract] = ACTIONS(1613),
    [anon_sym_sealed] = ACTIONS(1613),
    [anon_sym_static] = ACTIONS(1613),
    [anon_sym_new] = ACTIONS(1613),
    [anon_sym_public] = ACTIONS(1613),
    [anon_sym_protected] = ACTIONS(1613),
    [anon_sym_internal] = ACTIONS(1613),
    [anon_sym_private] = ACTIONS(1613),
    [anon_sym_interface] = ACTIONS(1613),
    [anon_sym_struct] = ACTIONS(1613),
    [anon_sym_enum] = ACTIONS(1613),
    [anon_sym_sbyte] = ACTIONS(1613),
    [anon_sym_byte] = ACTIONS(1613),
    [anon_sym_short] = ACTIONS(1613),
    [anon_sym_ushort] = ACTIONS(1613),
    [anon_sym_int] = ACTIONS(1613),
    [anon_sym_uint] = ACTIONS(1613),
    [anon_sym_long] = ACTIONS(1613),
    [anon_sym_ulong] = ACTIONS(1613),
    [anon_sym_char] = ACTIONS(1613),
    [anon_sym_delegate] = ACTIONS(1613),
    [sym_void_keyword] = ACTIONS(1613),
    [anon_sym_LBRACK] = ACTIONS(1443),
    [sym_const_keyword] = ACTIONS(1613),
    [anon_sym_readonly] = ACTIONS(1613),
    [anon_sym_volatile] = ACTIONS(1613),
    [anon_sym_bool] = ACTIONS(1613),
    [anon_sym_decimal] = ACTIONS(1613),
    [anon_sym_double] = ACTIONS(1613),
    [anon_sym_float] = ACTIONS(1613),
    [anon_sym_object] = ACTIONS(1613),
    [anon_sym_string] = ACTIONS(1613),
    [sym_identifier_name] = ACTIONS(1615),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1613),
  },
  [827] = {
    [anon_sym_RBRACE] = ACTIONS(1445),
    [anon_sym_class] = ACTIONS(1617),
    [anon_sym_unsafe] = ACTIONS(1617),
    [anon_sym_abstract] = ACTIONS(1617),
    [anon_sym_sealed] = ACTIONS(1617),
    [anon_sym_static] = ACTIONS(1617),
    [anon_sym_new] = ACTIONS(1617),
    [anon_sym_public] = ACTIONS(1617),
    [anon_sym_protected] = ACTIONS(1617),
    [anon_sym_internal] = ACTIONS(1617),
    [anon_sym_private] = ACTIONS(1617),
    [anon_sym_interface] = ACTIONS(1617),
    [anon_sym_struct] = ACTIONS(1617),
    [anon_sym_enum] = ACTIONS(1617),
    [anon_sym_sbyte] = ACTIONS(1617),
    [anon_sym_byte] = ACTIONS(1617),
    [anon_sym_short] = ACTIONS(1617),
    [anon_sym_ushort] = ACTIONS(1617),
    [anon_sym_int] = ACTIONS(1617),
    [anon_sym_uint] = ACTIONS(1617),
    [anon_sym_long] = ACTIONS(1617),
    [anon_sym_ulong] = ACTIONS(1617),
    [anon_sym_char] = ACTIONS(1617),
    [anon_sym_delegate] = ACTIONS(1617),
    [sym_void_keyword] = ACTIONS(1617),
    [anon_sym_LBRACK] = ACTIONS(1445),
    [sym_const_keyword] = ACTIONS(1617),
    [anon_sym_readonly] = ACTIONS(1617),
    [anon_sym_volatile] = ACTIONS(1617),
    [anon_sym_bool] = ACTIONS(1617),
    [anon_sym_decimal] = ACTIONS(1617),
    [anon_sym_double] = ACTIONS(1617),
    [anon_sym_float] = ACTIONS(1617),
    [anon_sym_object] = ACTIONS(1617),
    [anon_sym_string] = ACTIONS(1617),
    [sym_identifier_name] = ACTIONS(1619),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1617),
  },
  [828] = {
    [aux_sym_enum_declaration_repeat1] = STATE(843),
    [anon_sym_RBRACE] = ACTIONS(1607),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [829] = {
    [anon_sym_RBRACE] = ACTIONS(1621),
    [anon_sym_class] = ACTIONS(1623),
    [anon_sym_unsafe] = ACTIONS(1623),
    [anon_sym_abstract] = ACTIONS(1623),
    [anon_sym_sealed] = ACTIONS(1623),
    [anon_sym_static] = ACTIONS(1623),
    [anon_sym_new] = ACTIONS(1623),
    [anon_sym_public] = ACTIONS(1623),
    [anon_sym_protected] = ACTIONS(1623),
    [anon_sym_internal] = ACTIONS(1623),
    [anon_sym_private] = ACTIONS(1623),
    [anon_sym_interface] = ACTIONS(1623),
    [anon_sym_struct] = ACTIONS(1623),
    [anon_sym_enum] = ACTIONS(1623),
    [anon_sym_sbyte] = ACTIONS(1623),
    [anon_sym_byte] = ACTIONS(1623),
    [anon_sym_short] = ACTIONS(1623),
    [anon_sym_ushort] = ACTIONS(1623),
    [anon_sym_int] = ACTIONS(1623),
    [anon_sym_uint] = ACTIONS(1623),
    [anon_sym_long] = ACTIONS(1623),
    [anon_sym_ulong] = ACTIONS(1623),
    [anon_sym_char] = ACTIONS(1623),
    [anon_sym_delegate] = ACTIONS(1623),
    [sym_void_keyword] = ACTIONS(1623),
    [anon_sym_LBRACK] = ACTIONS(1621),
    [sym_const_keyword] = ACTIONS(1623),
    [anon_sym_readonly] = ACTIONS(1623),
    [anon_sym_volatile] = ACTIONS(1623),
    [anon_sym_bool] = ACTIONS(1623),
    [anon_sym_decimal] = ACTIONS(1623),
    [anon_sym_double] = ACTIONS(1623),
    [anon_sym_float] = ACTIONS(1623),
    [anon_sym_object] = ACTIONS(1623),
    [anon_sym_string] = ACTIONS(1623),
    [sym_identifier_name] = ACTIONS(1625),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1623),
  },
  [830] = {
    [anon_sym_SEMI] = ACTIONS(1591),
    [anon_sym_COMMA] = ACTIONS(1591),
    [anon_sym_QMARK] = ACTIONS(1093),
    [anon_sym_AMP_AMP] = ACTIONS(1095),
    [anon_sym_PIPE_PIPE] = ACTIONS(1097),
    [anon_sym_GT_GT] = ACTIONS(1099),
    [anon_sym_LT_LT] = ACTIONS(1099),
    [anon_sym_AMP] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1103),
    [anon_sym_PIPE] = ACTIONS(1105),
    [anon_sym_PLUS] = ACTIONS(1107),
    [anon_sym_DASH] = ACTIONS(1107),
    [anon_sym_STAR] = ACTIONS(1109),
    [anon_sym_SLASH] = ACTIONS(1111),
    [anon_sym_PERCENT] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_LT_EQ] = ACTIONS(1115),
    [anon_sym_EQ_EQ] = ACTIONS(1117),
    [anon_sym_BANG_EQ] = ACTIONS(1117),
    [anon_sym_GT_EQ] = ACTIONS(1115),
    [anon_sym_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(38),
  },
  [831] = {
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_class] = ACTIONS(1601),
    [anon_sym_unsafe] = ACTIONS(1601),
    [anon_sym_abstract] = ACTIONS(1601),
    [anon_sym_sealed] = ACTIONS(1601),
    [anon_sym_static] = ACTIONS(1601),
    [anon_sym_new] = ACTIONS(1601),
    [anon_sym_public] = ACTIONS(1601),
    [anon_sym_protected] = ACTIONS(1601),
    [anon_sym_internal] = ACTIONS(1601),
    [anon_sym_private] = ACTIONS(1601),
    [anon_sym_interface] = ACTIONS(1601),
    [anon_sym_struct] = ACTIONS(1601),
    [anon_sym_enum] = ACTIONS(1601),
    [anon_sym_sbyte] = ACTIONS(1601),
    [anon_sym_byte] = ACTIONS(1601),
    [anon_sym_short] = ACTIONS(1601),
    [anon_sym_ushort] = ACTIONS(1601),
    [anon_sym_int] = ACTIONS(1601),
    [anon_sym_uint] = ACTIONS(1601),
    [anon_sym_long] = ACTIONS(1601),
    [anon_sym_ulong] = ACTIONS(1601),
    [anon_sym_char] = ACTIONS(1601),
    [anon_sym_delegate] = ACTIONS(1601),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [sym_const_keyword] = ACTIONS(1601),
    [anon_sym_readonly] = ACTIONS(1601),
    [anon_sym_volatile] = ACTIONS(1601),
    [anon_sym_bool] = ACTIONS(1601),
    [anon_sym_decimal] = ACTIONS(1601),
    [anon_sym_double] = ACTIONS(1601),
    [anon_sym_float] = ACTIONS(1601),
    [anon_sym_object] = ACTIONS(1601),
    [anon_sym_string] = ACTIONS(1601),
    [sym_identifier_name] = ACTIONS(1603),
    [sym_comment] = ACTIONS(38),
  },
  [832] = {
    [anon_sym_SEMI] = ACTIONS(1627),
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_class] = ACTIONS(1601),
    [anon_sym_unsafe] = ACTIONS(1601),
    [anon_sym_abstract] = ACTIONS(1601),
    [anon_sym_sealed] = ACTIONS(1601),
    [anon_sym_static] = ACTIONS(1601),
    [anon_sym_new] = ACTIONS(1601),
    [anon_sym_public] = ACTIONS(1601),
    [anon_sym_protected] = ACTIONS(1601),
    [anon_sym_internal] = ACTIONS(1601),
    [anon_sym_private] = ACTIONS(1601),
    [anon_sym_interface] = ACTIONS(1601),
    [anon_sym_struct] = ACTIONS(1601),
    [anon_sym_enum] = ACTIONS(1601),
    [anon_sym_sbyte] = ACTIONS(1601),
    [anon_sym_byte] = ACTIONS(1601),
    [anon_sym_short] = ACTIONS(1601),
    [anon_sym_ushort] = ACTIONS(1601),
    [anon_sym_int] = ACTIONS(1601),
    [anon_sym_uint] = ACTIONS(1601),
    [anon_sym_long] = ACTIONS(1601),
    [anon_sym_ulong] = ACTIONS(1601),
    [anon_sym_char] = ACTIONS(1601),
    [anon_sym_delegate] = ACTIONS(1601),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [sym_const_keyword] = ACTIONS(1601),
    [anon_sym_readonly] = ACTIONS(1601),
    [anon_sym_volatile] = ACTIONS(1601),
    [anon_sym_bool] = ACTIONS(1601),
    [anon_sym_decimal] = ACTIONS(1601),
    [anon_sym_double] = ACTIONS(1601),
    [anon_sym_float] = ACTIONS(1601),
    [anon_sym_object] = ACTIONS(1601),
    [anon_sym_string] = ACTIONS(1601),
    [sym_identifier_name] = ACTIONS(1603),
    [sym_comment] = ACTIONS(38),
  },
  [833] = {
    [anon_sym_RBRACE] = ACTIONS(1629),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [834] = {
    [anon_sym_RBRACE] = ACTIONS(1441),
    [anon_sym_class] = ACTIONS(1609),
    [anon_sym_unsafe] = ACTIONS(1609),
    [anon_sym_abstract] = ACTIONS(1609),
    [anon_sym_sealed] = ACTIONS(1609),
    [anon_sym_static] = ACTIONS(1609),
    [anon_sym_new] = ACTIONS(1609),
    [anon_sym_public] = ACTIONS(1609),
    [anon_sym_protected] = ACTIONS(1609),
    [anon_sym_internal] = ACTIONS(1609),
    [anon_sym_private] = ACTIONS(1609),
    [anon_sym_interface] = ACTIONS(1609),
    [anon_sym_struct] = ACTIONS(1609),
    [anon_sym_enum] = ACTIONS(1609),
    [anon_sym_sbyte] = ACTIONS(1609),
    [anon_sym_byte] = ACTIONS(1609),
    [anon_sym_short] = ACTIONS(1609),
    [anon_sym_ushort] = ACTIONS(1609),
    [anon_sym_int] = ACTIONS(1609),
    [anon_sym_uint] = ACTIONS(1609),
    [anon_sym_long] = ACTIONS(1609),
    [anon_sym_ulong] = ACTIONS(1609),
    [anon_sym_char] = ACTIONS(1609),
    [anon_sym_delegate] = ACTIONS(1609),
    [anon_sym_LBRACK] = ACTIONS(1441),
    [sym_const_keyword] = ACTIONS(1609),
    [anon_sym_readonly] = ACTIONS(1609),
    [anon_sym_volatile] = ACTIONS(1609),
    [anon_sym_bool] = ACTIONS(1609),
    [anon_sym_decimal] = ACTIONS(1609),
    [anon_sym_double] = ACTIONS(1609),
    [anon_sym_float] = ACTIONS(1609),
    [anon_sym_object] = ACTIONS(1609),
    [anon_sym_string] = ACTIONS(1609),
    [sym_identifier_name] = ACTIONS(1611),
    [sym_comment] = ACTIONS(38),
  },
  [835] = {
    [anon_sym_RBRACE] = ACTIONS(1443),
    [anon_sym_class] = ACTIONS(1613),
    [anon_sym_unsafe] = ACTIONS(1613),
    [anon_sym_abstract] = ACTIONS(1613),
    [anon_sym_sealed] = ACTIONS(1613),
    [anon_sym_static] = ACTIONS(1613),
    [anon_sym_new] = ACTIONS(1613),
    [anon_sym_public] = ACTIONS(1613),
    [anon_sym_protected] = ACTIONS(1613),
    [anon_sym_internal] = ACTIONS(1613),
    [anon_sym_private] = ACTIONS(1613),
    [anon_sym_interface] = ACTIONS(1613),
    [anon_sym_struct] = ACTIONS(1613),
    [anon_sym_enum] = ACTIONS(1613),
    [anon_sym_sbyte] = ACTIONS(1613),
    [anon_sym_byte] = ACTIONS(1613),
    [anon_sym_short] = ACTIONS(1613),
    [anon_sym_ushort] = ACTIONS(1613),
    [anon_sym_int] = ACTIONS(1613),
    [anon_sym_uint] = ACTIONS(1613),
    [anon_sym_long] = ACTIONS(1613),
    [anon_sym_ulong] = ACTIONS(1613),
    [anon_sym_char] = ACTIONS(1613),
    [anon_sym_delegate] = ACTIONS(1613),
    [anon_sym_LBRACK] = ACTIONS(1443),
    [sym_const_keyword] = ACTIONS(1613),
    [anon_sym_readonly] = ACTIONS(1613),
    [anon_sym_volatile] = ACTIONS(1613),
    [anon_sym_bool] = ACTIONS(1613),
    [anon_sym_decimal] = ACTIONS(1613),
    [anon_sym_double] = ACTIONS(1613),
    [anon_sym_float] = ACTIONS(1613),
    [anon_sym_object] = ACTIONS(1613),
    [anon_sym_string] = ACTIONS(1613),
    [sym_identifier_name] = ACTIONS(1615),
    [sym_comment] = ACTIONS(38),
  },
  [836] = {
    [anon_sym_RBRACE] = ACTIONS(1445),
    [anon_sym_class] = ACTIONS(1617),
    [anon_sym_unsafe] = ACTIONS(1617),
    [anon_sym_abstract] = ACTIONS(1617),
    [anon_sym_sealed] = ACTIONS(1617),
    [anon_sym_static] = ACTIONS(1617),
    [anon_sym_new] = ACTIONS(1617),
    [anon_sym_public] = ACTIONS(1617),
    [anon_sym_protected] = ACTIONS(1617),
    [anon_sym_internal] = ACTIONS(1617),
    [anon_sym_private] = ACTIONS(1617),
    [anon_sym_interface] = ACTIONS(1617),
    [anon_sym_struct] = ACTIONS(1617),
    [anon_sym_enum] = ACTIONS(1617),
    [anon_sym_sbyte] = ACTIONS(1617),
    [anon_sym_byte] = ACTIONS(1617),
    [anon_sym_short] = ACTIONS(1617),
    [anon_sym_ushort] = ACTIONS(1617),
    [anon_sym_int] = ACTIONS(1617),
    [anon_sym_uint] = ACTIONS(1617),
    [anon_sym_long] = ACTIONS(1617),
    [anon_sym_ulong] = ACTIONS(1617),
    [anon_sym_char] = ACTIONS(1617),
    [anon_sym_delegate] = ACTIONS(1617),
    [anon_sym_LBRACK] = ACTIONS(1445),
    [sym_const_keyword] = ACTIONS(1617),
    [anon_sym_readonly] = ACTIONS(1617),
    [anon_sym_volatile] = ACTIONS(1617),
    [anon_sym_bool] = ACTIONS(1617),
    [anon_sym_decimal] = ACTIONS(1617),
    [anon_sym_double] = ACTIONS(1617),
    [anon_sym_float] = ACTIONS(1617),
    [anon_sym_object] = ACTIONS(1617),
    [anon_sym_string] = ACTIONS(1617),
    [sym_identifier_name] = ACTIONS(1619),
    [sym_comment] = ACTIONS(38),
  },
  [837] = {
    [aux_sym_enum_declaration_repeat1] = STATE(846),
    [anon_sym_RBRACE] = ACTIONS(1629),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(38),
  },
  [838] = {
    [sym__expression] = STATE(847),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1189),
    [anon_sym_DASH] = ACTIONS(1189),
    [anon_sym_BANG] = ACTIONS(1191),
    [anon_sym_TILDE] = ACTIONS(1191),
    [anon_sym_typeof] = ACTIONS(1189),
    [anon_sym_DASH_DASH] = ACTIONS(1191),
    [anon_sym_PLUS_PLUS] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [839] = {
    [sym__expression] = STATE(848),
    [sym_ternary_expression] = STATE(406),
    [sym_binary_expression] = STATE(406),
    [sym_unary_expression] = STATE(406),
    [sym__literal] = STATE(406),
    [sym_boolean_literal] = STATE(402),
    [sym_character_literal] = STATE(402),
    [sym_integer_literal] = STATE(402),
    [sym_real_literal] = STATE(402),
    [sym_string_literal] = STATE(402),
    [sym__regular_string_literal] = STATE(408),
    [sym__verbatim_string_literal] = STATE(408),
    [anon_sym_PLUS] = ACTIONS(1219),
    [anon_sym_DASH] = ACTIONS(1219),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_typeof] = ACTIONS(1219),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_false] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_AT_DQUOTE] = ACTIONS(707),
    [sym_identifier_name] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [840] = {
    [ts_builtin_sym_end] = ACTIONS(1631),
    [anon_sym_using] = ACTIONS(1631),
    [anon_sym_namespace] = ACTIONS(1631),
    [anon_sym_RBRACE] = ACTIONS(1631),
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
    [anon_sym_interface] = ACTIONS(1631),
    [anon_sym_struct] = ACTIONS(1631),
    [anon_sym_enum] = ACTIONS(1631),
    [anon_sym_delegate] = ACTIONS(1631),
    [anon_sym_LBRACK] = ACTIONS(1631),
    [sym_comment] = ACTIONS(38),
  },
  [841] = {
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_class] = ACTIONS(1633),
    [anon_sym_unsafe] = ACTIONS(1633),
    [anon_sym_abstract] = ACTIONS(1633),
    [anon_sym_sealed] = ACTIONS(1633),
    [anon_sym_static] = ACTIONS(1633),
    [anon_sym_new] = ACTIONS(1633),
    [anon_sym_public] = ACTIONS(1633),
    [anon_sym_protected] = ACTIONS(1633),
    [anon_sym_internal] = ACTIONS(1633),
    [anon_sym_private] = ACTIONS(1633),
    [anon_sym_interface] = ACTIONS(1633),
    [anon_sym_struct] = ACTIONS(1633),
    [anon_sym_enum] = ACTIONS(1633),
    [anon_sym_sbyte] = ACTIONS(1633),
    [anon_sym_byte] = ACTIONS(1633),
    [anon_sym_short] = ACTIONS(1633),
    [anon_sym_ushort] = ACTIONS(1633),
    [anon_sym_int] = ACTIONS(1633),
    [anon_sym_uint] = ACTIONS(1633),
    [anon_sym_long] = ACTIONS(1633),
    [anon_sym_ulong] = ACTIONS(1633),
    [anon_sym_char] = ACTIONS(1633),
    [anon_sym_delegate] = ACTIONS(1633),
    [sym_void_keyword] = ACTIONS(1633),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1633),
    [anon_sym_readonly] = ACTIONS(1633),
    [anon_sym_volatile] = ACTIONS(1633),
    [anon_sym_bool] = ACTIONS(1633),
    [anon_sym_decimal] = ACTIONS(1633),
    [anon_sym_double] = ACTIONS(1633),
    [anon_sym_float] = ACTIONS(1633),
    [anon_sym_object] = ACTIONS(1633),
    [anon_sym_string] = ACTIONS(1633),
    [sym_identifier_name] = ACTIONS(1635),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1633),
  },
  [842] = {
    [anon_sym_SEMI] = ACTIONS(1637),
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_class] = ACTIONS(1633),
    [anon_sym_unsafe] = ACTIONS(1633),
    [anon_sym_abstract] = ACTIONS(1633),
    [anon_sym_sealed] = ACTIONS(1633),
    [anon_sym_static] = ACTIONS(1633),
    [anon_sym_new] = ACTIONS(1633),
    [anon_sym_public] = ACTIONS(1633),
    [anon_sym_protected] = ACTIONS(1633),
    [anon_sym_internal] = ACTIONS(1633),
    [anon_sym_private] = ACTIONS(1633),
    [anon_sym_interface] = ACTIONS(1633),
    [anon_sym_struct] = ACTIONS(1633),
    [anon_sym_enum] = ACTIONS(1633),
    [anon_sym_sbyte] = ACTIONS(1633),
    [anon_sym_byte] = ACTIONS(1633),
    [anon_sym_short] = ACTIONS(1633),
    [anon_sym_ushort] = ACTIONS(1633),
    [anon_sym_int] = ACTIONS(1633),
    [anon_sym_uint] = ACTIONS(1633),
    [anon_sym_long] = ACTIONS(1633),
    [anon_sym_ulong] = ACTIONS(1633),
    [anon_sym_char] = ACTIONS(1633),
    [anon_sym_delegate] = ACTIONS(1633),
    [sym_void_keyword] = ACTIONS(1633),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1633),
    [anon_sym_readonly] = ACTIONS(1633),
    [anon_sym_volatile] = ACTIONS(1633),
    [anon_sym_bool] = ACTIONS(1633),
    [anon_sym_decimal] = ACTIONS(1633),
    [anon_sym_double] = ACTIONS(1633),
    [anon_sym_float] = ACTIONS(1633),
    [anon_sym_object] = ACTIONS(1633),
    [anon_sym_string] = ACTIONS(1633),
    [sym_identifier_name] = ACTIONS(1635),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1633),
  },
  [843] = {
    [anon_sym_RBRACE] = ACTIONS(1639),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [844] = {
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_class] = ACTIONS(1633),
    [anon_sym_unsafe] = ACTIONS(1633),
    [anon_sym_abstract] = ACTIONS(1633),
    [anon_sym_sealed] = ACTIONS(1633),
    [anon_sym_static] = ACTIONS(1633),
    [anon_sym_new] = ACTIONS(1633),
    [anon_sym_public] = ACTIONS(1633),
    [anon_sym_protected] = ACTIONS(1633),
    [anon_sym_internal] = ACTIONS(1633),
    [anon_sym_private] = ACTIONS(1633),
    [anon_sym_interface] = ACTIONS(1633),
    [anon_sym_struct] = ACTIONS(1633),
    [anon_sym_enum] = ACTIONS(1633),
    [anon_sym_sbyte] = ACTIONS(1633),
    [anon_sym_byte] = ACTIONS(1633),
    [anon_sym_short] = ACTIONS(1633),
    [anon_sym_ushort] = ACTIONS(1633),
    [anon_sym_int] = ACTIONS(1633),
    [anon_sym_uint] = ACTIONS(1633),
    [anon_sym_long] = ACTIONS(1633),
    [anon_sym_ulong] = ACTIONS(1633),
    [anon_sym_char] = ACTIONS(1633),
    [anon_sym_delegate] = ACTIONS(1633),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1633),
    [anon_sym_readonly] = ACTIONS(1633),
    [anon_sym_volatile] = ACTIONS(1633),
    [anon_sym_bool] = ACTIONS(1633),
    [anon_sym_decimal] = ACTIONS(1633),
    [anon_sym_double] = ACTIONS(1633),
    [anon_sym_float] = ACTIONS(1633),
    [anon_sym_object] = ACTIONS(1633),
    [anon_sym_string] = ACTIONS(1633),
    [sym_identifier_name] = ACTIONS(1635),
    [sym_comment] = ACTIONS(38),
  },
  [845] = {
    [anon_sym_SEMI] = ACTIONS(1641),
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_class] = ACTIONS(1633),
    [anon_sym_unsafe] = ACTIONS(1633),
    [anon_sym_abstract] = ACTIONS(1633),
    [anon_sym_sealed] = ACTIONS(1633),
    [anon_sym_static] = ACTIONS(1633),
    [anon_sym_new] = ACTIONS(1633),
    [anon_sym_public] = ACTIONS(1633),
    [anon_sym_protected] = ACTIONS(1633),
    [anon_sym_internal] = ACTIONS(1633),
    [anon_sym_private] = ACTIONS(1633),
    [anon_sym_interface] = ACTIONS(1633),
    [anon_sym_struct] = ACTIONS(1633),
    [anon_sym_enum] = ACTIONS(1633),
    [anon_sym_sbyte] = ACTIONS(1633),
    [anon_sym_byte] = ACTIONS(1633),
    [anon_sym_short] = ACTIONS(1633),
    [anon_sym_ushort] = ACTIONS(1633),
    [anon_sym_int] = ACTIONS(1633),
    [anon_sym_uint] = ACTIONS(1633),
    [anon_sym_long] = ACTIONS(1633),
    [anon_sym_ulong] = ACTIONS(1633),
    [anon_sym_char] = ACTIONS(1633),
    [anon_sym_delegate] = ACTIONS(1633),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1633),
    [anon_sym_readonly] = ACTIONS(1633),
    [anon_sym_volatile] = ACTIONS(1633),
    [anon_sym_bool] = ACTIONS(1633),
    [anon_sym_decimal] = ACTIONS(1633),
    [anon_sym_double] = ACTIONS(1633),
    [anon_sym_float] = ACTIONS(1633),
    [anon_sym_object] = ACTIONS(1633),
    [anon_sym_string] = ACTIONS(1633),
    [sym_identifier_name] = ACTIONS(1635),
    [sym_comment] = ACTIONS(38),
  },
  [846] = {
    [anon_sym_RBRACE] = ACTIONS(1643),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(38),
  },
  [847] = {
    [anon_sym_COLON] = ACTIONS(1591),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_AMP_AMP] = ACTIONS(1365),
    [anon_sym_PIPE_PIPE] = ACTIONS(1367),
    [anon_sym_GT_GT] = ACTIONS(1369),
    [anon_sym_LT_LT] = ACTIONS(1369),
    [anon_sym_AMP] = ACTIONS(1371),
    [anon_sym_CARET] = ACTIONS(1373),
    [anon_sym_PIPE] = ACTIONS(1375),
    [anon_sym_PLUS] = ACTIONS(1377),
    [anon_sym_DASH] = ACTIONS(1377),
    [anon_sym_STAR] = ACTIONS(1379),
    [anon_sym_SLASH] = ACTIONS(1381),
    [anon_sym_PERCENT] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LT_EQ] = ACTIONS(1385),
    [anon_sym_EQ_EQ] = ACTIONS(1387),
    [anon_sym_BANG_EQ] = ACTIONS(1387),
    [anon_sym_GT_EQ] = ACTIONS(1385),
    [anon_sym_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(38),
  },
  [848] = {
    [anon_sym_COMMA] = ACTIONS(1591),
    [anon_sym_RPAREN] = ACTIONS(1591),
    [sym_params_keyword] = ACTIONS(1591),
    [anon_sym_LBRACK] = ACTIONS(1591),
    [anon_sym_QMARK] = ACTIONS(1413),
    [anon_sym_AMP_AMP] = ACTIONS(1415),
    [anon_sym_PIPE_PIPE] = ACTIONS(1417),
    [anon_sym_GT_GT] = ACTIONS(1419),
    [anon_sym_LT_LT] = ACTIONS(1419),
    [anon_sym_AMP] = ACTIONS(1421),
    [anon_sym_CARET] = ACTIONS(1423),
    [anon_sym_PIPE] = ACTIONS(1425),
    [anon_sym_PLUS] = ACTIONS(1427),
    [anon_sym_DASH] = ACTIONS(1427),
    [anon_sym_STAR] = ACTIONS(1429),
    [anon_sym_SLASH] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1429),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_LT_EQ] = ACTIONS(1435),
    [anon_sym_EQ_EQ] = ACTIONS(1437),
    [anon_sym_BANG_EQ] = ACTIONS(1437),
    [anon_sym_GT_EQ] = ACTIONS(1435),
    [anon_sym_GT] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [849] = {
    [anon_sym_RBRACE] = ACTIONS(1597),
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
    [anon_sym_interface] = ACTIONS(1645),
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
    [sym_void_keyword] = ACTIONS(1645),
    [anon_sym_LBRACK] = ACTIONS(1597),
    [sym_const_keyword] = ACTIONS(1645),
    [anon_sym_readonly] = ACTIONS(1645),
    [anon_sym_volatile] = ACTIONS(1645),
    [anon_sym_bool] = ACTIONS(1645),
    [anon_sym_decimal] = ACTIONS(1645),
    [anon_sym_double] = ACTIONS(1645),
    [anon_sym_float] = ACTIONS(1645),
    [anon_sym_object] = ACTIONS(1645),
    [anon_sym_string] = ACTIONS(1645),
    [sym_identifier_name] = ACTIONS(1647),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1645),
  },
  [850] = {
    [anon_sym_SEMI] = ACTIONS(1649),
    [anon_sym_RBRACE] = ACTIONS(1597),
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
    [anon_sym_interface] = ACTIONS(1645),
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
    [sym_void_keyword] = ACTIONS(1645),
    [anon_sym_LBRACK] = ACTIONS(1597),
    [sym_const_keyword] = ACTIONS(1645),
    [anon_sym_readonly] = ACTIONS(1645),
    [anon_sym_volatile] = ACTIONS(1645),
    [anon_sym_bool] = ACTIONS(1645),
    [anon_sym_decimal] = ACTIONS(1645),
    [anon_sym_double] = ACTIONS(1645),
    [anon_sym_float] = ACTIONS(1645),
    [anon_sym_object] = ACTIONS(1645),
    [anon_sym_string] = ACTIONS(1645),
    [sym_identifier_name] = ACTIONS(1647),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1645),
  },
  [851] = {
    [anon_sym_RBRACE] = ACTIONS(1597),
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
    [anon_sym_interface] = ACTIONS(1645),
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
    [anon_sym_LBRACK] = ACTIONS(1597),
    [sym_const_keyword] = ACTIONS(1645),
    [anon_sym_readonly] = ACTIONS(1645),
    [anon_sym_volatile] = ACTIONS(1645),
    [anon_sym_bool] = ACTIONS(1645),
    [anon_sym_decimal] = ACTIONS(1645),
    [anon_sym_double] = ACTIONS(1645),
    [anon_sym_float] = ACTIONS(1645),
    [anon_sym_object] = ACTIONS(1645),
    [anon_sym_string] = ACTIONS(1645),
    [sym_identifier_name] = ACTIONS(1647),
    [sym_comment] = ACTIONS(38),
  },
  [852] = {
    [anon_sym_SEMI] = ACTIONS(1651),
    [anon_sym_RBRACE] = ACTIONS(1597),
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
    [anon_sym_interface] = ACTIONS(1645),
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
    [anon_sym_LBRACK] = ACTIONS(1597),
    [sym_const_keyword] = ACTIONS(1645),
    [anon_sym_readonly] = ACTIONS(1645),
    [anon_sym_volatile] = ACTIONS(1645),
    [anon_sym_bool] = ACTIONS(1645),
    [anon_sym_decimal] = ACTIONS(1645),
    [anon_sym_double] = ACTIONS(1645),
    [anon_sym_float] = ACTIONS(1645),
    [anon_sym_object] = ACTIONS(1645),
    [anon_sym_string] = ACTIONS(1645),
    [sym_identifier_name] = ACTIONS(1647),
    [sym_comment] = ACTIONS(38),
  },
  [853] = {
    [anon_sym_RBRACE] = ACTIONS(1631),
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
    [anon_sym_interface] = ACTIONS(1653),
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
    [sym_void_keyword] = ACTIONS(1653),
    [anon_sym_LBRACK] = ACTIONS(1631),
    [sym_const_keyword] = ACTIONS(1653),
    [anon_sym_readonly] = ACTIONS(1653),
    [anon_sym_volatile] = ACTIONS(1653),
    [anon_sym_bool] = ACTIONS(1653),
    [anon_sym_decimal] = ACTIONS(1653),
    [anon_sym_double] = ACTIONS(1653),
    [anon_sym_float] = ACTIONS(1653),
    [anon_sym_object] = ACTIONS(1653),
    [anon_sym_string] = ACTIONS(1653),
    [sym_identifier_name] = ACTIONS(1655),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1653),
  },
  [854] = {
    [anon_sym_RBRACE] = ACTIONS(1631),
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
    [anon_sym_interface] = ACTIONS(1653),
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
    [anon_sym_LBRACK] = ACTIONS(1631),
    [sym_const_keyword] = ACTIONS(1653),
    [anon_sym_readonly] = ACTIONS(1653),
    [anon_sym_volatile] = ACTIONS(1653),
    [anon_sym_bool] = ACTIONS(1653),
    [anon_sym_decimal] = ACTIONS(1653),
    [anon_sym_double] = ACTIONS(1653),
    [anon_sym_float] = ACTIONS(1653),
    [anon_sym_object] = ACTIONS(1653),
    [anon_sym_string] = ACTIONS(1653),
    [sym_identifier_name] = ACTIONS(1655),
    [sym_comment] = ACTIONS(38),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__interface_modifiers, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifiers, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_modifiers, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__interface_modifiers, 2),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_type, 1, .fragile = true),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1, .fragile = true),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1, .fragile = true),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__interface_modifiers, 1),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifiers, 1),
  [374] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1, .fragile = true), REDUCE(sym_method_modifiers, 1, .fragile = true),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_modifiers, 1, .fragile = true),
  [379] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1, .fragile = true), REDUCE(sym_method_modifiers, 1, .fragile = true),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [432] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_type, 1, .fragile = true), SHIFT(251),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 4),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 5),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(357),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 5),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(406),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(454),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 3),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(481),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 6),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_boolean_literal, 1),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(514),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(515),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer_literal, 1),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(522),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(523),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(524),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(525),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(528),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(543),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
  [983] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 4),
  [989] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 4),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
  [995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1),
  [1009] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [1015] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(587),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(590),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 1),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_block_repeat1, 1),
  [1051] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 1),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [1057] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1065] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(598),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 4),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 4),
  [1077] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 4),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
  [1083] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(611),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(616),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(617),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(618),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(619),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(619),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(620),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(621),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(628),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(634),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(644),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer_literal, 2),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_real_literal, 2),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(648),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(649),
  [1173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
  [1175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [1177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal, 2),
  [1183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
  [1185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(650),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(653),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(653),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(664),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(666),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(667),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(673),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(674),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(675),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(675),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 7),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(679),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(680),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
  [1239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(682),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 5),
  [1245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 5),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
  [1251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(684),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
  [1259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
  [1265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(690),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 2),
  [1275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [1281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [1287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 5),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 5),
  [1293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 5),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(705),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(706),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 5),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 5),
  [1303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 5),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(708),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(709),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(710),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
  [1315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(724),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(725),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(726),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(727),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(728),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(734),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(735),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(737),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(738),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_character_literal, 3),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_real_literal, 3),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(741),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(742),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal, 3),
  [1355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__verbatim_string_literal, 3),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(743),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(744),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(745),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(747),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(748),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(749),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(750),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(751),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(752),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(752),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(753),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(754),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(756),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(757),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(759),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(760),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(761),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(762),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(763),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(764),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(765),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(766),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(767),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(767),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(769),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 8),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
  [1449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 6),
  [1453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 6),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
  [1457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
  [1461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(771),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(772),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_assignment_statement, 3),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_assignment_statement, 3),
  [1471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_assignment_statement, 3),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 3),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 3),
  [1477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 3),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(774),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 6),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 6),
  [1485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 6),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(776),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(777),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
  [1495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(783),
  [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(784),
  [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 6),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 6),
  [1505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 6),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(787),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(788),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(790),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(791),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(792),
  [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(797),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(798),
  [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_real_literal, 4),
  [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(799),
  [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
  [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 5),
  [1537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
  [1539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
  [1541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
  [1543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [1545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
  [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
  [1551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [1553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 7),
  [1555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 7),
  [1557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
  [1559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [1561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 7),
  [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 7),
  [1565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 7),
  [1567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(825),
  [1569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
  [1571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
  [1573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
  [1575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [1577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(831),
  [1579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(832),
  [1581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
  [1583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(835),
  [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(836),
  [1587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
  [1589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_real_literal, 5),
  [1591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(838),
  [1595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(839),
  [1597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [1599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(840),
  [1601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
  [1603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(841),
  [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(842),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
  [1611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [1613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 8),
  [1615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 8),
  [1617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
  [1619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 8),
  [1623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 8),
  [1625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 8),
  [1627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(844),
  [1629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(845),
  [1631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
  [1633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
  [1635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [1637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(849),
  [1639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(850),
  [1641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(851),
  [1643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
  [1645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
  [1647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [1649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
  [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
  [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
  [1655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_c_sharp() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
