#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 172
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 1
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_DOTclass = 1,
  anon_sym_DOTsuper = 2,
  anon_sym_DOTsource = 3,
  anon_sym_DOTimplements = 4,
  anon_sym_DOTfield = 5,
  sym_end_field = 6,
  anon_sym_DOTmethod = 7,
  anon_sym_constructor = 8,
  sym_end_method = 9,
  anon_sym_DOTannotation = 10,
  anon_sym_system = 11,
  anon_sym_build = 12,
  anon_sym_runtime = 13,
  anon_sym_EQ = 14,
  sym_annotation_key = 15,
  sym_end_annotation = 16,
  sym_label = 17,
  aux_sym_statement_token1 = 18,
  sym_statement_name = 19,
  anon_sym_DOTline = 20,
  anon_sym_DOTlocals = 21,
  anon_sym_DOTparam = 22,
  anon_sym_DOTcatch = 23,
  anon_sym_LBRACE = 24,
  anon_sym_DOT_DOT = 25,
  anon_sym_RBRACE = 26,
  anon_sym_DOTcatchall = 27,
  anon_sym_DOTpacked_DASHswitch = 28,
  anon_sym_DOTendpacked_DASHswitch = 29,
  anon_sym_DOTsparse_DASHswitch = 30,
  anon_sym_DASH_GT = 31,
  anon_sym_DOTendsparse_DASHswitch = 32,
  anon_sym_DOTarray_DASHdata = 33,
  anon_sym_DOTendarray_DASHdata = 34,
  sym_class_identifier = 35,
  aux_sym_field_identifier_token1 = 36,
  anon_sym_LTinit_GT = 37,
  aux_sym_method_identifier_token1 = 38,
  anon_sym_LBRACK = 39,
  anon_sym_V = 40,
  anon_sym_Z = 41,
  anon_sym_B = 42,
  anon_sym_S = 43,
  anon_sym_C = 44,
  anon_sym_I = 45,
  anon_sym_J = 46,
  anon_sym_F = 47,
  anon_sym_D = 48,
  anon_sym_public = 49,
  anon_sym_private = 50,
  anon_sym_protected = 51,
  anon_sym_static = 52,
  anon_sym_final = 53,
  anon_sym_synchronized = 54,
  anon_sym_volatile = 55,
  anon_sym_transient = 56,
  anon_sym_native = 57,
  anon_sym_interface = 58,
  anon_sym_abstract = 59,
  anon_sym_bridge = 60,
  anon_sym_synthetic = 61,
  sym_comment = 62,
  anon_sym_DOTenum = 63,
  sym_variable = 64,
  sym_parameter = 65,
  anon_sym_COMMA = 66,
  anon_sym_LPAREN = 67,
  anon_sym_RPAREN = 68,
  aux_sym_number_literal_token1 = 69,
  aux_sym_number_literal_token2 = 70,
  sym_string_literal = 71,
  sym_class_definition = 72,
  sym_class_declaration = 73,
  sym_super_declaration = 74,
  sym_source_declaration = 75,
  sym_implements_declaration = 76,
  sym_field_definition = 77,
  sym_field_declaration = 78,
  sym_method_definition = 79,
  sym_method_declaration = 80,
  sym_annotation_definition = 81,
  sym_annotation_declaration = 82,
  sym_annotation_property = 83,
  sym_annotation_value = 84,
  sym__code_line = 85,
  sym_statement = 86,
  sym__declaration = 87,
  sym_line_declaration = 88,
  sym_locals_declaration = 89,
  sym_param_declaration = 90,
  sym_catch_declaration = 91,
  sym_catchall_declaration = 92,
  sym_packed_switch_declaration = 93,
  sym_sparse_switch_declaration = 94,
  sym_array_data_declaration = 95,
  sym__identifier = 96,
  sym_field_identifier = 97,
  sym_method_identifier = 98,
  sym_full_field_identifier = 99,
  sym_full_method_identifier = 100,
  sym__type = 101,
  sym_array_type = 102,
  sym_primitive_type = 103,
  sym_access_modifiers = 104,
  sym_enum_reference = 105,
  sym_list = 106,
  sym_parameters = 107,
  sym_number_literal = 108,
  aux_sym_class_definition_repeat1 = 109,
  aux_sym_class_definition_repeat2 = 110,
  aux_sym_class_definition_repeat3 = 111,
  aux_sym_class_definition_repeat4 = 112,
  aux_sym_method_definition_repeat1 = 113,
  aux_sym_annotation_definition_repeat1 = 114,
  aux_sym_packed_switch_declaration_repeat1 = 115,
  aux_sym_sparse_switch_declaration_repeat1 = 116,
  aux_sym_array_data_declaration_repeat1 = 117,
  aux_sym_access_modifiers_repeat1 = 118,
  aux_sym_list_repeat1 = 119,
  aux_sym_list_repeat2 = 120,
  aux_sym_list_repeat3 = 121,
  aux_sym_list_repeat4 = 122,
  aux_sym_list_repeat5 = 123,
  aux_sym_parameters_repeat1 = 124,
  alias_sym_code_block = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTclass] = ".class",
  [anon_sym_DOTsuper] = ".super",
  [anon_sym_DOTsource] = ".source",
  [anon_sym_DOTimplements] = ".implements",
  [anon_sym_DOTfield] = ".field",
  [sym_end_field] = "end_field",
  [anon_sym_DOTmethod] = ".method",
  [anon_sym_constructor] = "constructor",
  [sym_end_method] = "end_method",
  [anon_sym_DOTannotation] = ".annotation",
  [anon_sym_system] = "system",
  [anon_sym_build] = "build",
  [anon_sym_runtime] = "runtime",
  [anon_sym_EQ] = "=",
  [sym_annotation_key] = "annotation_key",
  [sym_end_annotation] = "end_annotation",
  [sym_label] = "label",
  [aux_sym_statement_token1] = "statement_token1",
  [sym_statement_name] = "statement_name",
  [anon_sym_DOTline] = ".line",
  [anon_sym_DOTlocals] = ".locals",
  [anon_sym_DOTparam] = ".param",
  [anon_sym_DOTcatch] = ".catch",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOTcatchall] = ".catchall",
  [anon_sym_DOTpacked_DASHswitch] = ".packed-switch",
  [anon_sym_DOTendpacked_DASHswitch] = ".end packed-switch",
  [anon_sym_DOTsparse_DASHswitch] = ".sparse-switch",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOTendsparse_DASHswitch] = ".end sparse-switch",
  [anon_sym_DOTarray_DASHdata] = ".array-data",
  [anon_sym_DOTendarray_DASHdata] = ".end array-data",
  [sym_class_identifier] = "class_identifier",
  [aux_sym_field_identifier_token1] = "field_identifier_token1",
  [anon_sym_LTinit_GT] = "<init>",
  [aux_sym_method_identifier_token1] = "method_identifier_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_V] = "V",
  [anon_sym_Z] = "Z",
  [anon_sym_B] = "B",
  [anon_sym_S] = "S",
  [anon_sym_C] = "C",
  [anon_sym_I] = "I",
  [anon_sym_J] = "J",
  [anon_sym_F] = "F",
  [anon_sym_D] = "D",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_static] = "static",
  [anon_sym_final] = "final",
  [anon_sym_synchronized] = "synchronized",
  [anon_sym_volatile] = "volatile",
  [anon_sym_transient] = "transient",
  [anon_sym_native] = "native",
  [anon_sym_interface] = "interface",
  [anon_sym_abstract] = "abstract",
  [anon_sym_bridge] = "bridge",
  [anon_sym_synthetic] = "synthetic",
  [sym_comment] = "comment",
  [anon_sym_DOTenum] = ".enum",
  [sym_variable] = "variable",
  [sym_parameter] = "parameter",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [aux_sym_number_literal_token2] = "number_literal_token2",
  [sym_string_literal] = "string_literal",
  [sym_class_definition] = "class_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_super_declaration] = "super_declaration",
  [sym_source_declaration] = "source_declaration",
  [sym_implements_declaration] = "implements_declaration",
  [sym_field_definition] = "field_definition",
  [sym_field_declaration] = "field_declaration",
  [sym_method_definition] = "method_definition",
  [sym_method_declaration] = "method_declaration",
  [sym_annotation_definition] = "annotation_definition",
  [sym_annotation_declaration] = "annotation_declaration",
  [sym_annotation_property] = "annotation_property",
  [sym_annotation_value] = "annotation_value",
  [sym__code_line] = "_code_line",
  [sym_statement] = "statement",
  [sym__declaration] = "_declaration",
  [sym_line_declaration] = "line_declaration",
  [sym_locals_declaration] = "locals_declaration",
  [sym_param_declaration] = "param_declaration",
  [sym_catch_declaration] = "catch_declaration",
  [sym_catchall_declaration] = "catchall_declaration",
  [sym_packed_switch_declaration] = "packed_switch_declaration",
  [sym_sparse_switch_declaration] = "sparse_switch_declaration",
  [sym_array_data_declaration] = "array_data_declaration",
  [sym__identifier] = "_identifier",
  [sym_field_identifier] = "field_identifier",
  [sym_method_identifier] = "method_identifier",
  [sym_full_field_identifier] = "full_field_identifier",
  [sym_full_method_identifier] = "full_method_identifier",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_primitive_type] = "primitive_type",
  [sym_access_modifiers] = "access_modifiers",
  [sym_enum_reference] = "enum_reference",
  [sym_list] = "list",
  [sym_parameters] = "parameters",
  [sym_number_literal] = "number_literal",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_class_definition_repeat3] = "class_definition_repeat3",
  [aux_sym_class_definition_repeat4] = "class_definition_repeat4",
  [aux_sym_method_definition_repeat1] = "method_definition_repeat1",
  [aux_sym_annotation_definition_repeat1] = "annotation_definition_repeat1",
  [aux_sym_packed_switch_declaration_repeat1] = "packed_switch_declaration_repeat1",
  [aux_sym_sparse_switch_declaration_repeat1] = "sparse_switch_declaration_repeat1",
  [aux_sym_array_data_declaration_repeat1] = "array_data_declaration_repeat1",
  [aux_sym_access_modifiers_repeat1] = "access_modifiers_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym_list_repeat3] = "list_repeat3",
  [aux_sym_list_repeat4] = "list_repeat4",
  [aux_sym_list_repeat5] = "list_repeat5",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [alias_sym_code_block] = "code_block",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTclass] = anon_sym_DOTclass,
  [anon_sym_DOTsuper] = anon_sym_DOTsuper,
  [anon_sym_DOTsource] = anon_sym_DOTsource,
  [anon_sym_DOTimplements] = anon_sym_DOTimplements,
  [anon_sym_DOTfield] = anon_sym_DOTfield,
  [sym_end_field] = sym_end_field,
  [anon_sym_DOTmethod] = anon_sym_DOTmethod,
  [anon_sym_constructor] = anon_sym_constructor,
  [sym_end_method] = sym_end_method,
  [anon_sym_DOTannotation] = anon_sym_DOTannotation,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_build] = anon_sym_build,
  [anon_sym_runtime] = anon_sym_runtime,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_annotation_key] = sym_annotation_key,
  [sym_end_annotation] = sym_end_annotation,
  [sym_label] = sym_label,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [sym_statement_name] = sym_statement_name,
  [anon_sym_DOTline] = anon_sym_DOTline,
  [anon_sym_DOTlocals] = anon_sym_DOTlocals,
  [anon_sym_DOTparam] = anon_sym_DOTparam,
  [anon_sym_DOTcatch] = anon_sym_DOTcatch,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOTcatchall] = anon_sym_DOTcatchall,
  [anon_sym_DOTpacked_DASHswitch] = anon_sym_DOTpacked_DASHswitch,
  [anon_sym_DOTendpacked_DASHswitch] = anon_sym_DOTendpacked_DASHswitch,
  [anon_sym_DOTsparse_DASHswitch] = anon_sym_DOTsparse_DASHswitch,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOTendsparse_DASHswitch] = anon_sym_DOTendsparse_DASHswitch,
  [anon_sym_DOTarray_DASHdata] = anon_sym_DOTarray_DASHdata,
  [anon_sym_DOTendarray_DASHdata] = anon_sym_DOTendarray_DASHdata,
  [sym_class_identifier] = sym_class_identifier,
  [aux_sym_field_identifier_token1] = aux_sym_field_identifier_token1,
  [anon_sym_LTinit_GT] = anon_sym_LTinit_GT,
  [aux_sym_method_identifier_token1] = aux_sym_method_identifier_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_J] = anon_sym_J,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_synchronized] = anon_sym_synchronized,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_transient] = anon_sym_transient,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_bridge] = anon_sym_bridge,
  [anon_sym_synthetic] = anon_sym_synthetic,
  [sym_comment] = sym_comment,
  [anon_sym_DOTenum] = anon_sym_DOTenum,
  [sym_variable] = sym_variable,
  [sym_parameter] = sym_parameter,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [aux_sym_number_literal_token2] = aux_sym_number_literal_token2,
  [sym_string_literal] = sym_string_literal,
  [sym_class_definition] = sym_class_definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_super_declaration] = sym_super_declaration,
  [sym_source_declaration] = sym_source_declaration,
  [sym_implements_declaration] = sym_implements_declaration,
  [sym_field_definition] = sym_field_definition,
  [sym_field_declaration] = sym_field_declaration,
  [sym_method_definition] = sym_method_definition,
  [sym_method_declaration] = sym_method_declaration,
  [sym_annotation_definition] = sym_annotation_definition,
  [sym_annotation_declaration] = sym_annotation_declaration,
  [sym_annotation_property] = sym_annotation_property,
  [sym_annotation_value] = sym_annotation_value,
  [sym__code_line] = sym__code_line,
  [sym_statement] = sym_statement,
  [sym__declaration] = sym__declaration,
  [sym_line_declaration] = sym_line_declaration,
  [sym_locals_declaration] = sym_locals_declaration,
  [sym_param_declaration] = sym_param_declaration,
  [sym_catch_declaration] = sym_catch_declaration,
  [sym_catchall_declaration] = sym_catchall_declaration,
  [sym_packed_switch_declaration] = sym_packed_switch_declaration,
  [sym_sparse_switch_declaration] = sym_sparse_switch_declaration,
  [sym_array_data_declaration] = sym_array_data_declaration,
  [sym__identifier] = sym__identifier,
  [sym_field_identifier] = sym_field_identifier,
  [sym_method_identifier] = sym_method_identifier,
  [sym_full_field_identifier] = sym_full_field_identifier,
  [sym_full_method_identifier] = sym_full_method_identifier,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_access_modifiers] = sym_access_modifiers,
  [sym_enum_reference] = sym_enum_reference,
  [sym_list] = sym_list,
  [sym_parameters] = sym_parameters,
  [sym_number_literal] = sym_number_literal,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_class_definition_repeat3] = aux_sym_class_definition_repeat3,
  [aux_sym_class_definition_repeat4] = aux_sym_class_definition_repeat4,
  [aux_sym_method_definition_repeat1] = aux_sym_method_definition_repeat1,
  [aux_sym_annotation_definition_repeat1] = aux_sym_annotation_definition_repeat1,
  [aux_sym_packed_switch_declaration_repeat1] = aux_sym_packed_switch_declaration_repeat1,
  [aux_sym_sparse_switch_declaration_repeat1] = aux_sym_sparse_switch_declaration_repeat1,
  [aux_sym_array_data_declaration_repeat1] = aux_sym_array_data_declaration_repeat1,
  [aux_sym_access_modifiers_repeat1] = aux_sym_access_modifiers_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
  [aux_sym_list_repeat3] = aux_sym_list_repeat3,
  [aux_sym_list_repeat4] = aux_sym_list_repeat4,
  [aux_sym_list_repeat5] = aux_sym_list_repeat5,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [alias_sym_code_block] = alias_sym_code_block,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsuper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTimplements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfield] = {
    .visible = true,
    .named = false,
  },
  [sym_end_field] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [sym_end_method] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTannotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_build] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_runtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_annotation_key] = {
    .visible = true,
    .named = true,
  },
  [sym_end_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_statement_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlocals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcatchall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTpacked_DASHswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTendpacked_DASHswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsparse_DASHswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTendsparse_DASHswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTarray_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTendarray_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [sym_class_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_field_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LTinit_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_J] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synchronized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bridge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTenum] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_super_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_source_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_implements_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_property] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_value] = {
    .visible = true,
    .named = true,
  },
  [sym__code_line] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_line_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_locals_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_param_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_catchall_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_packed_switch_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_sparse_switch_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_data_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_method_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_full_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_full_method_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_access_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_packed_switch_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sparse_switch_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_data_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_access_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_code_block] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_element_type = 1,
  field_key = 2,
  field_parameters = 3,
  field_return_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_element_type] = "element_type",
  [field_key] = "key",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_element_type, 1},
  [3] =
    {field_parameters, 1},
    {field_return_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_code_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_method_definition_repeat1, 2,
    aux_sym_method_definition_repeat1,
    alias_sym_code_block,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(360);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '(') ADVANCE(551);
      if (lookahead == ')') ADVANCE(552);
      if (lookahead == ',') ADVANCE(550);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(554);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(375);
      if (lookahead == 'B') ADVANCE(500);
      if (lookahead == 'C') ADVANCE(502);
      if (lookahead == 'D') ADVANCE(506);
      if (lookahead == 'F') ADVANCE(505);
      if (lookahead == 'I') ADVANCE(503);
      if (lookahead == 'J') ADVANCE(504);
      if (lookahead == 'L') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(501);
      if (lookahead == 'V') ADVANCE(498);
      if (lookahead == 'Z') ADVANCE(499);
      if (lookahead == '[') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(270);
      if (lookahead == '{') ADVANCE(386);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'v') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(554);
      if (lookahead == '>') ADVANCE(393);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'b') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'b') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'v') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'v') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'z') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == ';') ADVANCE(397);
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(304);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(385);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(390);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(391);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(190);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 241:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(547);
      END_STATE();
    case 243:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 302:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 346:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 347:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 348:
      if (lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 349:
      if (lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 350:
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 351:
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 352:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 353:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 354:
      if (lookahead == 'z') ADVANCE(180);
      END_STATE();
    case 355:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 356:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 357:
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 358:
      if (eof) ADVANCE(360);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == ',') ADVANCE(550);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(403);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 359:
      if (eof) ADVANCE(360);
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DOTclass);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOTsuper);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DOTsource);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DOTimplements);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DOTfield);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_end_field);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_end_method);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DOTannotation);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_annotation_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_end_annotation);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_statement_name);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_DOTline);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DOTlocals);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DOTcatch);
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DOTcatchall);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOTpacked_DASHswitch);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DOTendpacked_DASHswitch);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DOTsparse_DASHswitch);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DOTendsparse_DASHswitch);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DOTarray_DASHdata);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DOTendarray_DASHdata);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_class_identifier);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LTinit_GT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == ';') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'x') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'b') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'b') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'f') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'g') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'h') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'h') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'o') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 's') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 's') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 's') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == 'y') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'u') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'v') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'v') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'z') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_synthetic);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == ':') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DOTenum);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 359},
  [3] = {.lex_state = 359},
  [4] = {.lex_state = 359},
  [5] = {.lex_state = 358},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 359},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 359},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 359},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 359},
  [40] = {.lex_state = 359},
  [41] = {.lex_state = 359},
  [42] = {.lex_state = 359},
  [43] = {.lex_state = 359},
  [44] = {.lex_state = 359},
  [45] = {.lex_state = 359},
  [46] = {.lex_state = 359},
  [47] = {.lex_state = 359},
  [48] = {.lex_state = 359},
  [49] = {.lex_state = 359},
  [50] = {.lex_state = 359},
  [51] = {.lex_state = 359},
  [52] = {.lex_state = 359},
  [53] = {.lex_state = 359},
  [54] = {.lex_state = 359},
  [55] = {.lex_state = 359},
  [56] = {.lex_state = 359},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 358},
  [59] = {.lex_state = 358},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 358},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 358},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 358},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 358},
  [74] = {.lex_state = 358},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 358},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 358},
  [79] = {.lex_state = 358},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 358},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 358},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 358},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 358},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 358},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 379},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTclass] = ACTIONS(1),
    [anon_sym_DOTsuper] = ACTIONS(1),
    [anon_sym_DOTsource] = ACTIONS(1),
    [anon_sym_DOTimplements] = ACTIONS(1),
    [anon_sym_DOTfield] = ACTIONS(1),
    [sym_end_field] = ACTIONS(1),
    [anon_sym_DOTmethod] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [sym_end_method] = ACTIONS(1),
    [anon_sym_DOTannotation] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_build] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_end_annotation] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_DOTline] = ACTIONS(1),
    [anon_sym_DOTlocals] = ACTIONS(1),
    [anon_sym_DOTparam] = ACTIONS(1),
    [anon_sym_DOTcatch] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOTcatchall] = ACTIONS(1),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(1),
    [anon_sym_DOTendpacked_DASHswitch] = ACTIONS(1),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOTendsparse_DASHswitch] = ACTIONS(1),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(1),
    [anon_sym_DOTendarray_DASHdata] = ACTIONS(1),
    [sym_class_identifier] = ACTIONS(1),
    [anon_sym_LTinit_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_J] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_synchronized] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_bridge] = ACTIONS(1),
    [anon_sym_synthetic] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTenum] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_parameter] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [aux_sym_number_literal_token2] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_class_definition] = STATE(156),
    [sym_class_declaration] = STATE(131),
    [anon_sym_DOTclass] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_end_method,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(11), 1,
      sym_label,
    ACTIONS(13), 1,
      sym_statement_name,
    ACTIONS(15), 1,
      anon_sym_DOTline,
    ACTIONS(17), 1,
      anon_sym_DOTlocals,
    ACTIONS(19), 1,
      anon_sym_DOTparam,
    ACTIONS(21), 1,
      anon_sym_DOTcatch,
    ACTIONS(23), 1,
      anon_sym_DOTcatchall,
    ACTIONS(25), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(27), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(29), 1,
      anon_sym_DOTarray_DASHdata,
    STATE(4), 1,
      aux_sym_method_definition_repeat1,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(46), 12,
      sym_annotation_definition,
      sym__code_line,
      sym_statement,
      sym__declaration,
      sym_line_declaration,
      sym_locals_declaration,
      sym_param_declaration,
      sym_catch_declaration,
      sym_catchall_declaration,
      sym_packed_switch_declaration,
      sym_sparse_switch_declaration,
      sym_array_data_declaration,
  [60] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_end_method,
    ACTIONS(33), 1,
      anon_sym_DOTannotation,
    ACTIONS(36), 1,
      sym_label,
    ACTIONS(39), 1,
      sym_statement_name,
    ACTIONS(42), 1,
      anon_sym_DOTline,
    ACTIONS(45), 1,
      anon_sym_DOTlocals,
    ACTIONS(48), 1,
      anon_sym_DOTparam,
    ACTIONS(51), 1,
      anon_sym_DOTcatch,
    ACTIONS(54), 1,
      anon_sym_DOTcatchall,
    ACTIONS(57), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(60), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(63), 1,
      anon_sym_DOTarray_DASHdata,
    STATE(3), 1,
      aux_sym_method_definition_repeat1,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(46), 12,
      sym_annotation_definition,
      sym__code_line,
      sym_statement,
      sym__declaration,
      sym_line_declaration,
      sym_locals_declaration,
      sym_param_declaration,
      sym_catch_declaration,
      sym_catchall_declaration,
      sym_packed_switch_declaration,
      sym_sparse_switch_declaration,
      sym_array_data_declaration,
  [120] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(11), 1,
      sym_label,
    ACTIONS(13), 1,
      sym_statement_name,
    ACTIONS(15), 1,
      anon_sym_DOTline,
    ACTIONS(17), 1,
      anon_sym_DOTlocals,
    ACTIONS(19), 1,
      anon_sym_DOTparam,
    ACTIONS(21), 1,
      anon_sym_DOTcatch,
    ACTIONS(23), 1,
      anon_sym_DOTcatchall,
    ACTIONS(25), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(27), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(29), 1,
      anon_sym_DOTarray_DASHdata,
    ACTIONS(66), 1,
      sym_end_method,
    STATE(3), 1,
      aux_sym_method_definition_repeat1,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(46), 12,
      sym_annotation_definition,
      sym__code_line,
      sym_statement,
      sym__declaration,
      sym_line_declaration,
      sym_locals_declaration,
      sym_param_declaration,
      sym_catch_declaration,
      sym_catchall_declaration,
      sym_packed_switch_declaration,
      sym_sparse_switch_declaration,
      sym_array_data_declaration,
  [180] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_class_identifier,
    ACTIONS(72), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_LTinit_GT,
    ACTIONS(76), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(78), 1,
      sym_variable,
    ACTIONS(80), 1,
      sym_parameter,
    ACTIONS(84), 1,
      sym_string_literal,
    STATE(61), 1,
      aux_sym_list_repeat3,
    STATE(94), 1,
      aux_sym_list_repeat1,
    STATE(100), 1,
      sym_number_literal,
    STATE(105), 1,
      aux_sym_list_repeat5,
    STATE(123), 1,
      aux_sym_list_repeat2,
    STATE(125), 1,
      aux_sym_list_repeat4,
    ACTIONS(82), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    STATE(73), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [237] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_DOTsource,
    ACTIONS(90), 1,
      anon_sym_DOTimplements,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    STATE(2), 1,
      sym_method_declaration,
    STATE(13), 1,
      sym_source_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(15), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(35), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(63), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(88), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LTinit_GT,
    STATE(7), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(96), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(100), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 17,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_class_identifier,
      anon_sym_LBRACK,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
      anon_sym_RPAREN,
  [339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LTinit_GT,
    STATE(7), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(105), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(109), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_class_identifier,
      anon_sym_LBRACK,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
      anon_sym_RPAREN,
  [391] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(90), 1,
      anon_sym_DOTimplements,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(38), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(66), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(93), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_DOTcatch,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [459] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(90), 1,
      anon_sym_DOTimplements,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(11), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(37), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_class_identifier,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(17), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_parameters_repeat1,
    ACTIONS(125), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [533] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(90), 1,
      anon_sym_DOTimplements,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(37), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOTcatch,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [601] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_class_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(17), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_parameters_repeat1,
    ACTIONS(139), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [631] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      sym_class_identifier,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(14), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_parameters_repeat1,
    ACTIONS(125), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_class_identifier,
    STATE(19), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(148), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(130), 1,
      sym_access_modifiers,
    ACTIONS(151), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(102), 1,
      sym_access_modifiers,
    ACTIONS(153), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(169), 1,
      sym_access_modifiers,
    ACTIONS(155), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_class_identifier,
    STATE(19), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(157), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_field_identifier_token1,
    STATE(24), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(159), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      aux_sym_field_identifier_token1,
    STATE(24), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(162), 13,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_synchronized,
      anon_sym_volatile,
      anon_sym_transient,
      anon_sym_native,
      anon_sym_interface,
      anon_sym_abstract,
      anon_sym_bridge,
      anon_sym_synthetic,
  [836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_class_identifier,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(168), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      sym_class_identifier,
    STATE(8), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(125), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_class_identifier,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    STATE(141), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(176), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_class_identifier,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    STATE(47), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(182), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_class_identifier,
    STATE(59), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(125), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      sym_class_identifier,
    STATE(132), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(176), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_class_identifier,
    STATE(59), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(168), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1018] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      sym_class_identifier,
    STATE(48), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(182), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      sym_class_identifier,
    STATE(71), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(168), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1070] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(70), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOTcatch,
    ACTIONS(192), 12,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTendpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1128] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(66), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(70), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(93), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1165] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(65), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(70), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(89), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOTcatch,
    ACTIONS(198), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DOTcatch,
    ACTIONS(202), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOTcatch,
    ACTIONS(206), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOTcatch,
    ACTIONS(210), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOTcatch,
    ACTIONS(214), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DOTcatch,
    ACTIONS(218), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOTcatch,
    ACTIONS(222), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOTcatch,
    ACTIONS(226), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOTcatch,
    ACTIONS(103), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOTcatch,
    ACTIONS(232), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DOTcatch,
    ACTIONS(236), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DOTcatch,
    ACTIONS(240), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DOTcatch,
    ACTIONS(244), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DOTcatch,
    ACTIONS(248), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DOTcatch,
    ACTIONS(252), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOTcatch,
    ACTIONS(256), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOTcatch,
    ACTIONS(260), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOTcatch,
    ACTIONS(111), 11,
      sym_end_method,
      anon_sym_DOTannotation,
      sym_label,
      sym_statement_name,
      anon_sym_DOTline,
      anon_sym_DOTlocals,
      anon_sym_DOTparam,
      anon_sym_DOTcatchall,
      anon_sym_DOTpacked_DASHswitch,
      anon_sym_DOTsparse_DASHswitch,
      anon_sym_DOTarray_DASHdata,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 11,
      sym_class_identifier,
      anon_sym_LBRACK,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1579] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      sym_class_identifier,
    ACTIONS(273), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(276), 1,
      anon_sym_LTinit_GT,
    ACTIONS(279), 1,
      aux_sym_method_identifier_token1,
    STATE(58), 1,
      aux_sym_list_repeat3,
    STATE(73), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(282), 10,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 11,
      sym_class_identifier,
      anon_sym_LBRACK,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1644] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_class_identifier,
    ACTIONS(72), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_LTinit_GT,
    ACTIONS(76), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_list_repeat3,
    STATE(73), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1673] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOTenum,
    ACTIONS(296), 1,
      aux_sym_number_literal_token1,
    ACTIONS(298), 1,
      aux_sym_number_literal_token2,
    STATE(137), 1,
      sym_annotation_value,
    ACTIONS(292), 2,
      sym_class_identifier,
      sym_string_literal,
    STATE(143), 3,
      sym_enum_reference,
      sym_list,
      sym_number_literal,
  [1701] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(75), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1728] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(75), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(93), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1755] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(75), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(85), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1782] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTfield,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(67), 1,
      sym_field_declaration,
    STATE(75), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(89), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(304), 1,
      sym_end_field,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(163), 1,
      sym_annotation_definition,
    ACTIONS(302), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DASH_GT,
    ACTIONS(310), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(306), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOTimplements,
    STATE(69), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOTannotation,
    STATE(99), 1,
      sym_annotation_declaration,
    STATE(70), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(232), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_number_literal_token2,
    ACTIONS(192), 5,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_DOTendarray_DASHdata,
      anon_sym_COMMA,
      aux_sym_number_literal_token1,
  [1911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(322), 4,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
  [1927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(103), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOTfield,
    STATE(67), 1,
      sym_field_declaration,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(75), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(333), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(111), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(339), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [2013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_DOTmethod,
    STATE(2), 1,
      sym_method_declaration,
    STATE(80), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_LTinit_GT,
    ACTIONS(76), 1,
      aux_sym_method_identifier_token1,
    STATE(76), 1,
      sym_field_identifier,
    STATE(79), 1,
      sym_method_identifier,
  [2049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_literal_token2,
    ACTIONS(348), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    STATE(98), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_literal_token2,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(91), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(159), 1,
      sym_number_literal,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(80), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      aux_sym_number_literal_token1,
    ACTIONS(365), 1,
      aux_sym_number_literal_token2,
    STATE(87), 1,
      aux_sym_list_repeat1,
    STATE(100), 1,
      sym_number_literal,
  [2143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(80), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(80), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
  [2190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_literal_token2,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    ACTIONS(370), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(96), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(159), 1,
      sym_number_literal,
  [2209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(80), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOTmethod,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_method_declaration,
    STATE(80), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2243] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_literal_token2,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    STATE(87), 1,
      aux_sym_list_repeat1,
    STATE(100), 1,
      sym_number_literal,
  [2262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(374), 1,
      aux_sym_number_literal_token1,
    ACTIONS(377), 1,
      aux_sym_number_literal_token2,
    STATE(95), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2279] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_DOTendsparse_DASHswitch,
    ACTIONS(382), 1,
      aux_sym_number_literal_token1,
    ACTIONS(385), 1,
      aux_sym_number_literal_token2,
    STATE(96), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(159), 1,
      sym_number_literal,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_literal_token2,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    ACTIONS(390), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(95), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_annotation_key,
    ACTIONS(394), 1,
      sym_end_annotation,
    STATE(101), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 2,
      anon_sym_RBRACE,
      aux_sym_number_literal_token1,
  [2354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_annotation_key,
    ACTIONS(402), 1,
      sym_end_annotation,
    STATE(103), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_constructor,
    ACTIONS(406), 1,
      anon_sym_LTinit_GT,
    ACTIONS(408), 1,
      aux_sym_method_identifier_token1,
    STATE(41), 1,
      sym_method_identifier,
  [2384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_annotation_key,
    ACTIONS(413), 1,
      sym_end_annotation,
    STATE(103), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      sym_variable,
    STATE(104), 1,
      aux_sym_list_repeat4,
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      sym_parameter,
    STATE(115), 1,
      aux_sym_list_repeat5,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_number_literal_token1,
    ACTIONS(424), 1,
      aux_sym_number_literal_token2,
    STATE(114), 1,
      sym_number_literal,
  [2437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_literal_token2,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    STATE(82), 1,
      sym_number_literal,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [2468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_method_identifier,
    ACTIONS(406), 2,
      anon_sym_LTinit_GT,
      aux_sym_method_identifier_token1,
  [2479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_label,
    ACTIONS(433), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(111), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_number_literal_token2,
    ACTIONS(435), 2,
      anon_sym_DOTendsparse_DASHswitch,
      aux_sym_number_literal_token1,
  [2503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_label,
    ACTIONS(443), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(124), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      sym_parameter,
    STATE(115), 1,
      aux_sym_list_repeat5,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(452), 1,
      sym_string_literal,
    STATE(116), 1,
      aux_sym_list_repeat2,
  [2551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(455), 2,
      anon_sym_RBRACE,
      sym_variable,
  [2562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(459), 2,
      anon_sym_RBRACE,
      sym_parameter,
  [2573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(463), 2,
      anon_sym_RBRACE,
      sym_string_literal,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym_number_literal_token2,
    ACTIONS(360), 2,
      anon_sym_RBRACE,
      aux_sym_number_literal_token1,
  [2595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_number_literal_token1,
    ACTIONS(424), 1,
      aux_sym_number_literal_token2,
    STATE(53), 1,
      sym_number_literal,
  [2608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_number_literal_token1,
    ACTIONS(424), 1,
      aux_sym_number_literal_token2,
    STATE(52), 1,
      sym_number_literal,
  [2621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_string_literal,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_list_repeat2,
  [2634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_label,
    ACTIONS(471), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(111), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      sym_variable,
    STATE(104), 1,
      aux_sym_list_repeat4,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_parameters,
  [2686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_field_identifier_token1,
    STATE(97), 1,
      sym_field_identifier,
  [2704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_DOTsuper,
    STATE(6), 1,
      sym_super_declaration,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_RBRACE,
      sym_variable,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_RBRACE,
      sym_parameter,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_string_literal,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_field_identifier_token1,
    STATE(129), 1,
      sym_field_identifier,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameters,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_EQ,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
  [2844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_label,
  [2851] = 2,
    ACTIONS(505), 1,
      aux_sym_statement_token1,
    ACTIONS(507), 1,
      sym_comment,
  [2858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_label,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [2872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_class_identifier,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_parameter,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_class_identifier,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_label,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_label,
  [2921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_DASH_GT,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_label,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_label,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_class_identifier,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_end_field,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
  [2963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_DOTsuper,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_DOT_DOT,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_class_identifier,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_class_identifier,
  [2998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_label,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_string_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 287,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 391,
  [SMALL_STATE(12)] = 435,
  [SMALL_STATE(13)] = 459,
  [SMALL_STATE(14)] = 503,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 577,
  [SMALL_STATE(17)] = 601,
  [SMALL_STATE(18)] = 631,
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 686,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 736,
  [SMALL_STATE(23)] = 761,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 811,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 888,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 992,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1044,
  [SMALL_STATE(35)] = 1070,
  [SMALL_STATE(36)] = 1107,
  [SMALL_STATE(37)] = 1128,
  [SMALL_STATE(38)] = 1165,
  [SMALL_STATE(39)] = 1202,
  [SMALL_STATE(40)] = 1222,
  [SMALL_STATE(41)] = 1242,
  [SMALL_STATE(42)] = 1262,
  [SMALL_STATE(43)] = 1282,
  [SMALL_STATE(44)] = 1302,
  [SMALL_STATE(45)] = 1322,
  [SMALL_STATE(46)] = 1342,
  [SMALL_STATE(47)] = 1362,
  [SMALL_STATE(48)] = 1382,
  [SMALL_STATE(49)] = 1402,
  [SMALL_STATE(50)] = 1422,
  [SMALL_STATE(51)] = 1442,
  [SMALL_STATE(52)] = 1462,
  [SMALL_STATE(53)] = 1482,
  [SMALL_STATE(54)] = 1502,
  [SMALL_STATE(55)] = 1522,
  [SMALL_STATE(56)] = 1542,
  [SMALL_STATE(57)] = 1562,
  [SMALL_STATE(58)] = 1579,
  [SMALL_STATE(59)] = 1608,
  [SMALL_STATE(60)] = 1627,
  [SMALL_STATE(61)] = 1644,
  [SMALL_STATE(62)] = 1673,
  [SMALL_STATE(63)] = 1701,
  [SMALL_STATE(64)] = 1728,
  [SMALL_STATE(65)] = 1755,
  [SMALL_STATE(66)] = 1782,
  [SMALL_STATE(67)] = 1809,
  [SMALL_STATE(68)] = 1830,
  [SMALL_STATE(69)] = 1847,
  [SMALL_STATE(70)] = 1864,
  [SMALL_STATE(71)] = 1883,
  [SMALL_STATE(72)] = 1897,
  [SMALL_STATE(73)] = 1911,
  [SMALL_STATE(74)] = 1927,
  [SMALL_STATE(75)] = 1941,
  [SMALL_STATE(76)] = 1959,
  [SMALL_STATE(77)] = 1973,
  [SMALL_STATE(78)] = 1985,
  [SMALL_STATE(79)] = 1999,
  [SMALL_STATE(80)] = 2013,
  [SMALL_STATE(81)] = 2030,
  [SMALL_STATE(82)] = 2049,
  [SMALL_STATE(83)] = 2066,
  [SMALL_STATE(84)] = 2085,
  [SMALL_STATE(85)] = 2096,
  [SMALL_STATE(86)] = 2113,
  [SMALL_STATE(87)] = 2124,
  [SMALL_STATE(88)] = 2143,
  [SMALL_STATE(89)] = 2160,
  [SMALL_STATE(90)] = 2177,
  [SMALL_STATE(91)] = 2190,
  [SMALL_STATE(92)] = 2209,
  [SMALL_STATE(93)] = 2226,
  [SMALL_STATE(94)] = 2243,
  [SMALL_STATE(95)] = 2262,
  [SMALL_STATE(96)] = 2279,
  [SMALL_STATE(97)] = 2298,
  [SMALL_STATE(98)] = 2309,
  [SMALL_STATE(99)] = 2326,
  [SMALL_STATE(100)] = 2340,
  [SMALL_STATE(101)] = 2354,
  [SMALL_STATE(102)] = 2368,
  [SMALL_STATE(103)] = 2384,
  [SMALL_STATE(104)] = 2398,
  [SMALL_STATE(105)] = 2411,
  [SMALL_STATE(106)] = 2424,
  [SMALL_STATE(107)] = 2437,
  [SMALL_STATE(108)] = 2450,
  [SMALL_STATE(109)] = 2459,
  [SMALL_STATE(110)] = 2468,
  [SMALL_STATE(111)] = 2479,
  [SMALL_STATE(112)] = 2492,
  [SMALL_STATE(113)] = 2503,
  [SMALL_STATE(114)] = 2512,
  [SMALL_STATE(115)] = 2525,
  [SMALL_STATE(116)] = 2538,
  [SMALL_STATE(117)] = 2551,
  [SMALL_STATE(118)] = 2562,
  [SMALL_STATE(119)] = 2573,
  [SMALL_STATE(120)] = 2584,
  [SMALL_STATE(121)] = 2595,
  [SMALL_STATE(122)] = 2608,
  [SMALL_STATE(123)] = 2621,
  [SMALL_STATE(124)] = 2634,
  [SMALL_STATE(125)] = 2647,
  [SMALL_STATE(126)] = 2660,
  [SMALL_STATE(127)] = 2668,
  [SMALL_STATE(128)] = 2676,
  [SMALL_STATE(129)] = 2686,
  [SMALL_STATE(130)] = 2694,
  [SMALL_STATE(131)] = 2704,
  [SMALL_STATE(132)] = 2714,
  [SMALL_STATE(133)] = 2722,
  [SMALL_STATE(134)] = 2730,
  [SMALL_STATE(135)] = 2738,
  [SMALL_STATE(136)] = 2746,
  [SMALL_STATE(137)] = 2754,
  [SMALL_STATE(138)] = 2762,
  [SMALL_STATE(139)] = 2772,
  [SMALL_STATE(140)] = 2780,
  [SMALL_STATE(141)] = 2788,
  [SMALL_STATE(142)] = 2796,
  [SMALL_STATE(143)] = 2806,
  [SMALL_STATE(144)] = 2814,
  [SMALL_STATE(145)] = 2822,
  [SMALL_STATE(146)] = 2830,
  [SMALL_STATE(147)] = 2837,
  [SMALL_STATE(148)] = 2844,
  [SMALL_STATE(149)] = 2851,
  [SMALL_STATE(150)] = 2858,
  [SMALL_STATE(151)] = 2865,
  [SMALL_STATE(152)] = 2872,
  [SMALL_STATE(153)] = 2879,
  [SMALL_STATE(154)] = 2886,
  [SMALL_STATE(155)] = 2893,
  [SMALL_STATE(156)] = 2900,
  [SMALL_STATE(157)] = 2907,
  [SMALL_STATE(158)] = 2914,
  [SMALL_STATE(159)] = 2921,
  [SMALL_STATE(160)] = 2928,
  [SMALL_STATE(161)] = 2935,
  [SMALL_STATE(162)] = 2942,
  [SMALL_STATE(163)] = 2949,
  [SMALL_STATE(164)] = 2956,
  [SMALL_STATE(165)] = 2963,
  [SMALL_STATE(166)] = 2970,
  [SMALL_STATE(167)] = 2977,
  [SMALL_STATE(168)] = 2984,
  [SMALL_STATE(169)] = 2991,
  [SMALL_STATE(170)] = 2998,
  [SMALL_STATE(171)] = 3005,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(109),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(46),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(149),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(122),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(121),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(154),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(152),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(164),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(106),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(83),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(107),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifiers, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(17),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(24),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 3, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 3, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_declaration, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_declaration, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_declaration, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_declaration, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_declaration, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_declaration, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_declaration, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_declaration, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_declaration, 8),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_declaration, 8),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(68),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(32),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(128),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(128),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(162),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(109),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat3, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(20),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_field_identifier, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_field_identifier, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_declaration, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_method_identifier, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_method_identifier, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(21),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_declaration, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(72),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(72),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat3, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2), SHIFT_REPEAT(146),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 2), SHIFT_REPEAT(117),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat5, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat5, 2), SHIFT_REPEAT(118),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(119),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat5, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_reference, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_declaration, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3, .production_id = 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [521] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_smali(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
