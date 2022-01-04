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
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
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
  sym_parameter = 64,
  anon_sym_COMMA = 65,
  anon_sym_LPAREN = 66,
  anon_sym_RPAREN = 67,
  aux_sym_number_literal_token1 = 68,
  aux_sym_number_literal_token2 = 69,
  sym_string_literal = 70,
  sym_class_definition = 71,
  sym_class_declaration = 72,
  sym_super_declaration = 73,
  sym_source_declaration = 74,
  sym_implements_declaration = 75,
  sym_field_definition = 76,
  sym_field_declaration = 77,
  sym_method_definition = 78,
  sym_method_declaration = 79,
  sym_annotation_definition = 80,
  sym_annotation_declaration = 81,
  sym_annotation_property = 82,
  sym_annotation_value = 83,
  sym__code_line = 84,
  sym_statement = 85,
  sym__declaration = 86,
  sym_line_declaration = 87,
  sym_locals_declaration = 88,
  sym_param_declaration = 89,
  sym_catch_declaration = 90,
  sym_catchall_declaration = 91,
  sym_packed_switch_declaration = 92,
  sym_sparse_switch_declaration = 93,
  sym_array_data_declaration = 94,
  sym__identifier = 95,
  sym_field_identifier = 96,
  sym_method_identifier = 97,
  sym_full_field_identifier = 98,
  sym_full_method_identifier = 99,
  sym__type = 100,
  sym_array_type = 101,
  sym_primitive_type = 102,
  sym_access_modifiers = 103,
  sym_enum_reference = 104,
  sym_list = 105,
  sym_parameters = 106,
  sym_number_literal = 107,
  aux_sym_class_definition_repeat1 = 108,
  aux_sym_class_definition_repeat2 = 109,
  aux_sym_class_definition_repeat3 = 110,
  aux_sym_class_definition_repeat4 = 111,
  aux_sym_method_definition_repeat1 = 112,
  aux_sym_annotation_definition_repeat1 = 113,
  aux_sym_packed_switch_declaration_repeat1 = 114,
  aux_sym_sparse_switch_declaration_repeat1 = 115,
  aux_sym_array_data_declaration_repeat1 = 116,
  aux_sym_access_modifiers_repeat1 = 117,
  aux_sym_list_repeat1 = 118,
  aux_sym_list_repeat2 = 119,
  aux_sym_list_repeat3 = 120,
  aux_sym_list_repeat4 = 121,
  aux_sym_parameters_repeat1 = 122,
  alias_sym_code_block = 123,
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
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == ')') ADVANCE(551);
      if (lookahead == ',') ADVANCE(549);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(553);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(554);
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
      if (lookahead == '"') ADVANCE(555);
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
      if (lookahead == '0') ADVANCE(553);
      if (lookahead == '>') ADVANCE(393);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(554);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
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
      if (lookahead == ',') ADVANCE(549);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(403);
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
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(555);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 359},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 359},
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
  [67] = {.lex_state = 358},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 358},
  [74] = {.lex_state = 358},
  [75] = {.lex_state = 358},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 358},
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
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 358},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
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
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 358},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 358},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 379},
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
    [sym_parameter] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [aux_sym_number_literal_token2] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_class_definition] = STATE(155),
    [sym_class_declaration] = STATE(126),
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
    ACTIONS(12), 1,
      sym_label,
    ACTIONS(15), 1,
      sym_statement_name,
    ACTIONS(18), 1,
      anon_sym_DOTline,
    ACTIONS(21), 1,
      anon_sym_DOTlocals,
    ACTIONS(24), 1,
      anon_sym_DOTparam,
    ACTIONS(27), 1,
      anon_sym_DOTcatch,
    ACTIONS(30), 1,
      anon_sym_DOTcatchall,
    ACTIONS(33), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(36), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(39), 1,
      anon_sym_DOTarray_DASHdata,
    STATE(2), 1,
      aux_sym_method_definition_repeat1,
    STATE(100), 1,
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
    ACTIONS(42), 1,
      sym_end_method,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(46), 1,
      sym_label,
    ACTIONS(48), 1,
      sym_statement_name,
    ACTIONS(50), 1,
      anon_sym_DOTline,
    ACTIONS(52), 1,
      anon_sym_DOTlocals,
    ACTIONS(54), 1,
      anon_sym_DOTparam,
    ACTIONS(56), 1,
      anon_sym_DOTcatch,
    ACTIONS(58), 1,
      anon_sym_DOTcatchall,
    ACTIONS(60), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(62), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(64), 1,
      anon_sym_DOTarray_DASHdata,
    STATE(4), 1,
      aux_sym_method_definition_repeat1,
    STATE(100), 1,
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
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(46), 1,
      sym_label,
    ACTIONS(48), 1,
      sym_statement_name,
    ACTIONS(50), 1,
      anon_sym_DOTline,
    ACTIONS(52), 1,
      anon_sym_DOTlocals,
    ACTIONS(54), 1,
      anon_sym_DOTparam,
    ACTIONS(56), 1,
      anon_sym_DOTcatch,
    ACTIONS(58), 1,
      anon_sym_DOTcatchall,
    ACTIONS(60), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(62), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(64), 1,
      anon_sym_DOTarray_DASHdata,
    ACTIONS(66), 1,
      sym_end_method,
    STATE(2), 1,
      aux_sym_method_definition_repeat1,
    STATE(100), 1,
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
  [180] = 15,
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
      sym_parameter,
    ACTIONS(82), 1,
      sym_string_literal,
    STATE(61), 1,
      aux_sym_list_repeat3,
    STATE(94), 1,
      aux_sym_list_repeat1,
    STATE(99), 1,
      sym_number_literal,
    STATE(119), 1,
      aux_sym_list_repeat4,
    STATE(122), 1,
      aux_sym_list_repeat2,
    ACTIONS(80), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    STATE(73), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [231] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_DOTsource,
    ACTIONS(88), 1,
      anon_sym_DOTimplements,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    STATE(3), 1,
      sym_method_declaration,
    STATE(14), 1,
      sym_source_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(15), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(35), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(66), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(86), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 17,
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
  [304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LTinit_GT,
    STATE(8), 1,
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
  [333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LTinit_GT,
    STATE(8), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(103), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(107), 13,
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
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 17,
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
  [385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_class_identifier,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(18), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_parameters_repeat1,
    ACTIONS(115), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DOTcatch,
    ACTIONS(119), 15,
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
  [439] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(88), 1,
      anon_sym_DOTimplements,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(38), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(68), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(88), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [483] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(88), 1,
      anon_sym_DOTimplements,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(13), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(37), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(65), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(83), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [527] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(88), 1,
      anon_sym_DOTimplements,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(37), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(65), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(68), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(83), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_class_identifier,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(11), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_parameters_repeat1,
    ACTIONS(115), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DOTcatch,
    ACTIONS(131), 15,
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
  [625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_class_identifier,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(18), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_parameters_repeat1,
    ACTIONS(141), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_class_identifier,
    STATE(19), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(146), 13,
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
  [680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(128), 1,
      sym_access_modifiers,
    ACTIONS(149), 13,
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
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(102), 1,
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
  [730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(165), 1,
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
  [755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_class_identifier,
    STATE(19), 1,
      aux_sym_access_modifiers_repeat1,
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
  [780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_field_identifier_token1,
    STATE(24), 1,
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
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_field_identifier_token1,
    STATE(24), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(160), 13,
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
  [830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_class_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(78), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(166), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_class_identifier,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(136), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(172), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_class_identifier,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    STATE(45), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(178), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      sym_class_identifier,
    STATE(59), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(115), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      sym_class_identifier,
    STATE(129), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(172), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      sym_class_identifier,
    STATE(59), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(166), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [986] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_class_identifier,
    STATE(47), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(178), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      sym_class_identifier,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(166), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      sym_class_identifier,
    STATE(10), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(115), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1064] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(65), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(83), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOTcatch,
    ACTIONS(190), 12,
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
  [1122] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(88), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1159] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(63), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(89), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DOTcatch,
    ACTIONS(196), 11,
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
  [1216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOTcatch,
    ACTIONS(200), 11,
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
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOTcatch,
    ACTIONS(204), 11,
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
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DOTcatch,
    ACTIONS(208), 11,
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
  [1276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DOTcatch,
    ACTIONS(212), 11,
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
  [1296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOTcatch,
    ACTIONS(216), 11,
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
  [1316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DOTcatch,
    ACTIONS(109), 11,
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
  [1336] = 3,
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
  [1356] = 3,
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
  [1376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DOTcatch,
    ACTIONS(230), 11,
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
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DOTcatch,
    ACTIONS(234), 11,
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
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOTcatch,
    ACTIONS(238), 11,
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
  [1436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DOTcatch,
    ACTIONS(242), 11,
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
  [1456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOTcatch,
    ACTIONS(246), 11,
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
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_DOTcatch,
    ACTIONS(250), 11,
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
  [1496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DOTcatch,
    ACTIONS(254), 11,
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
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOTcatch,
    ACTIONS(94), 11,
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
  [1536] = 3,
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
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 11,
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
  [1573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      sym_class_identifier,
    ACTIONS(271), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(274), 1,
      anon_sym_LTinit_GT,
    ACTIONS(277), 1,
      aux_sym_method_identifier_token1,
    STATE(58), 1,
      aux_sym_list_repeat3,
    STATE(73), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(280), 10,
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
  [1621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 11,
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
  [1638] = 8,
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
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_list_repeat3,
    STATE(73), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1667] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_DOTenum,
    ACTIONS(294), 1,
      aux_sym_number_literal_token1,
    ACTIONS(296), 1,
      aux_sym_number_literal_token2,
    STATE(135), 1,
      sym_annotation_value,
    ACTIONS(290), 2,
      sym_class_identifier,
      sym_string_literal,
    STATE(137), 3,
      sym_enum_reference,
      sym_list,
      sym_number_literal,
  [1695] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(72), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1722] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(72), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(89), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(72), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(88), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DOTfield,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(70), 1,
      sym_field_declaration,
    STATE(72), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(83), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DASH_GT,
    ACTIONS(304), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(300), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DOTimplements,
    STATE(68), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    ACTIONS(306), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOTannotation,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(69), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DOTannotation,
    ACTIONS(318), 1,
      sym_end_field,
    STATE(100), 1,
      sym_annotation_declaration,
    STATE(142), 1,
      sym_annotation_definition,
    ACTIONS(316), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DOTfield,
    STATE(70), 1,
      sym_field_declaration,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(72), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(327), 4,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
  [1923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(94), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(226), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_number_literal_token2,
    ACTIONS(190), 5,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_DOTendarray_DASHdata,
      anon_sym_COMMA,
      aux_sym_number_literal_token1,
  [1965] = 3,
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
  [1979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(109), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(337), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
      anon_sym_COMMA,
  [2007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_literal_token2,
    ACTIONS(341), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(343), 1,
      aux_sym_number_literal_token1,
    STATE(98), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2024] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_LTinit_GT,
    ACTIONS(76), 1,
      aux_sym_method_identifier_token1,
    STATE(77), 1,
      sym_field_identifier,
    STATE(79), 1,
      sym_method_identifier,
  [2043] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_literal_token2,
    ACTIONS(343), 1,
      aux_sym_number_literal_token1,
    ACTIONS(345), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(96), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(146), 1,
      sym_number_literal,
  [2062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(95), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(95), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      aux_sym_number_literal_token1,
    ACTIONS(356), 1,
      aux_sym_number_literal_token2,
    STATE(87), 1,
      aux_sym_list_repeat1,
    STATE(99), 1,
      sym_number_literal,
  [2137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(95), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(95), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(266), 4,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT,
  [2184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_literal_token2,
    ACTIONS(343), 1,
      aux_sym_number_literal_token1,
    ACTIONS(361), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(82), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(146), 1,
      sym_number_literal,
  [2203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOTmethod,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(95), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(367), 1,
      aux_sym_number_literal_token1,
    ACTIONS(370), 1,
      aux_sym_number_literal_token2,
    STATE(93), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_literal_token2,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      aux_sym_number_literal_token1,
    STATE(87), 1,
      aux_sym_list_repeat1,
    STATE(99), 1,
      sym_number_literal,
  [2256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      anon_sym_DOTmethod,
    STATE(3), 1,
      sym_method_declaration,
    STATE(95), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DOTendsparse_DASHswitch,
    ACTIONS(380), 1,
      aux_sym_number_literal_token1,
    ACTIONS(383), 1,
      aux_sym_number_literal_token2,
    STATE(96), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(146), 1,
      sym_number_literal,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_literal_token2,
    ACTIONS(343), 1,
      aux_sym_number_literal_token1,
    ACTIONS(388), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(93), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      aux_sym_number_literal_token2,
    ACTIONS(390), 2,
      anon_sym_RBRACE,
      aux_sym_number_literal_token1,
  [2334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_annotation_key,
    ACTIONS(398), 1,
      sym_end_annotation,
    STATE(101), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_annotation_key,
    ACTIONS(400), 1,
      sym_end_annotation,
    STATE(103), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_constructor,
    ACTIONS(404), 1,
      anon_sym_LTinit_GT,
    ACTIONS(406), 1,
      aux_sym_method_identifier_token1,
    STATE(43), 1,
      sym_method_identifier,
  [2378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_annotation_key,
    ACTIONS(411), 1,
      sym_end_annotation,
    STATE(103), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      sym_parameter,
    STATE(104), 1,
      aux_sym_list_repeat4,
  [2405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_label,
    ACTIONS(420), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(111), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_literal_token2,
    ACTIONS(343), 1,
      aux_sym_number_literal_token1,
    STATE(80), 1,
      sym_number_literal,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym_method_identifier,
    ACTIONS(404), 2,
      anon_sym_LTinit_GT,
      aux_sym_method_identifier_token1,
  [2451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [2460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_number_literal_token1,
    ACTIONS(428), 1,
      aux_sym_number_literal_token2,
    STATE(114), 1,
      sym_number_literal,
  [2473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_label,
    ACTIONS(433), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(111), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_number_literal_token2,
    ACTIONS(435), 2,
      anon_sym_DOTendsparse_DASHswitch,
      aux_sym_number_literal_token1,
  [2497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_label,
    ACTIONS(443), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(105), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      sym_string_literal,
    STATE(115), 1,
      aux_sym_list_repeat2,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_number_literal_token2,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      aux_sym_number_literal_token1,
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(452), 2,
      anon_sym_RBRACE,
      sym_parameter,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(456), 2,
      anon_sym_RBRACE,
      sym_string_literal,
  [2565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      sym_parameter,
    STATE(104), 1,
      aux_sym_list_repeat4,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_number_literal_token1,
    ACTIONS(428), 1,
      aux_sym_number_literal_token2,
    STATE(56), 1,
      sym_number_literal,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_number_literal_token1,
    ACTIONS(428), 1,
      aux_sym_number_literal_token2,
    STATE(54), 1,
      sym_number_literal,
  [2604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_string_literal,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      aux_sym_list_repeat2,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameters,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_DOTsuper,
    STATE(6), 1,
      sym_super_declaration,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym_field_identifier_token1,
    STATE(97), 1,
      sym_field_identifier,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_RBRACE,
      sym_parameter,
  [2695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_RBRACE,
      sym_string_literal,
  [2703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameters,
  [2721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_field_identifier_token1,
    STATE(127), 1,
      sym_field_identifier,
  [2763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_end_field,
  [2786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_label,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_class_identifier,
  [2800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_label,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DASH_GT,
  [2814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_label,
  [2828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_parameter,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_label,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_class_identifier,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_label,
  [2870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
  [2877] = 2,
    ACTIONS(514), 1,
      aux_sym_statement_token1,
    ACTIONS(516), 1,
      sym_comment,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_DOT_DOT,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_class_identifier,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_EQ,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DOT_DOT,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_DOTsuper,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_label,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_class_identifier,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_class_identifier,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_label,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_string_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 362,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 415,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 483,
  [SMALL_STATE(15)] = 527,
  [SMALL_STATE(16)] = 571,
  [SMALL_STATE(17)] = 601,
  [SMALL_STATE(18)] = 625,
  [SMALL_STATE(19)] = 655,
  [SMALL_STATE(20)] = 680,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 730,
  [SMALL_STATE(23)] = 755,
  [SMALL_STATE(24)] = 780,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 830,
  [SMALL_STATE(27)] = 856,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 908,
  [SMALL_STATE(30)] = 934,
  [SMALL_STATE(31)] = 960,
  [SMALL_STATE(32)] = 986,
  [SMALL_STATE(33)] = 1012,
  [SMALL_STATE(34)] = 1038,
  [SMALL_STATE(35)] = 1064,
  [SMALL_STATE(36)] = 1101,
  [SMALL_STATE(37)] = 1122,
  [SMALL_STATE(38)] = 1159,
  [SMALL_STATE(39)] = 1196,
  [SMALL_STATE(40)] = 1216,
  [SMALL_STATE(41)] = 1236,
  [SMALL_STATE(42)] = 1256,
  [SMALL_STATE(43)] = 1276,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1316,
  [SMALL_STATE(46)] = 1336,
  [SMALL_STATE(47)] = 1356,
  [SMALL_STATE(48)] = 1376,
  [SMALL_STATE(49)] = 1396,
  [SMALL_STATE(50)] = 1416,
  [SMALL_STATE(51)] = 1436,
  [SMALL_STATE(52)] = 1456,
  [SMALL_STATE(53)] = 1476,
  [SMALL_STATE(54)] = 1496,
  [SMALL_STATE(55)] = 1516,
  [SMALL_STATE(56)] = 1536,
  [SMALL_STATE(57)] = 1556,
  [SMALL_STATE(58)] = 1573,
  [SMALL_STATE(59)] = 1602,
  [SMALL_STATE(60)] = 1621,
  [SMALL_STATE(61)] = 1638,
  [SMALL_STATE(62)] = 1667,
  [SMALL_STATE(63)] = 1695,
  [SMALL_STATE(64)] = 1722,
  [SMALL_STATE(65)] = 1749,
  [SMALL_STATE(66)] = 1776,
  [SMALL_STATE(67)] = 1803,
  [SMALL_STATE(68)] = 1820,
  [SMALL_STATE(69)] = 1837,
  [SMALL_STATE(70)] = 1856,
  [SMALL_STATE(71)] = 1877,
  [SMALL_STATE(72)] = 1889,
  [SMALL_STATE(73)] = 1907,
  [SMALL_STATE(74)] = 1923,
  [SMALL_STATE(75)] = 1937,
  [SMALL_STATE(76)] = 1951,
  [SMALL_STATE(77)] = 1965,
  [SMALL_STATE(78)] = 1979,
  [SMALL_STATE(79)] = 1993,
  [SMALL_STATE(80)] = 2007,
  [SMALL_STATE(81)] = 2024,
  [SMALL_STATE(82)] = 2043,
  [SMALL_STATE(83)] = 2062,
  [SMALL_STATE(84)] = 2079,
  [SMALL_STATE(85)] = 2090,
  [SMALL_STATE(86)] = 2101,
  [SMALL_STATE(87)] = 2118,
  [SMALL_STATE(88)] = 2137,
  [SMALL_STATE(89)] = 2154,
  [SMALL_STATE(90)] = 2171,
  [SMALL_STATE(91)] = 2184,
  [SMALL_STATE(92)] = 2203,
  [SMALL_STATE(93)] = 2220,
  [SMALL_STATE(94)] = 2237,
  [SMALL_STATE(95)] = 2256,
  [SMALL_STATE(96)] = 2273,
  [SMALL_STATE(97)] = 2292,
  [SMALL_STATE(98)] = 2303,
  [SMALL_STATE(99)] = 2320,
  [SMALL_STATE(100)] = 2334,
  [SMALL_STATE(101)] = 2348,
  [SMALL_STATE(102)] = 2362,
  [SMALL_STATE(103)] = 2378,
  [SMALL_STATE(104)] = 2392,
  [SMALL_STATE(105)] = 2405,
  [SMALL_STATE(106)] = 2418,
  [SMALL_STATE(107)] = 2431,
  [SMALL_STATE(108)] = 2440,
  [SMALL_STATE(109)] = 2451,
  [SMALL_STATE(110)] = 2460,
  [SMALL_STATE(111)] = 2473,
  [SMALL_STATE(112)] = 2486,
  [SMALL_STATE(113)] = 2497,
  [SMALL_STATE(114)] = 2506,
  [SMALL_STATE(115)] = 2519,
  [SMALL_STATE(116)] = 2532,
  [SMALL_STATE(117)] = 2543,
  [SMALL_STATE(118)] = 2554,
  [SMALL_STATE(119)] = 2565,
  [SMALL_STATE(120)] = 2578,
  [SMALL_STATE(121)] = 2591,
  [SMALL_STATE(122)] = 2604,
  [SMALL_STATE(123)] = 2617,
  [SMALL_STATE(124)] = 2625,
  [SMALL_STATE(125)] = 2633,
  [SMALL_STATE(126)] = 2643,
  [SMALL_STATE(127)] = 2653,
  [SMALL_STATE(128)] = 2661,
  [SMALL_STATE(129)] = 2671,
  [SMALL_STATE(130)] = 2679,
  [SMALL_STATE(131)] = 2687,
  [SMALL_STATE(132)] = 2695,
  [SMALL_STATE(133)] = 2703,
  [SMALL_STATE(134)] = 2711,
  [SMALL_STATE(135)] = 2721,
  [SMALL_STATE(136)] = 2729,
  [SMALL_STATE(137)] = 2737,
  [SMALL_STATE(138)] = 2745,
  [SMALL_STATE(139)] = 2753,
  [SMALL_STATE(140)] = 2763,
  [SMALL_STATE(141)] = 2771,
  [SMALL_STATE(142)] = 2779,
  [SMALL_STATE(143)] = 2786,
  [SMALL_STATE(144)] = 2793,
  [SMALL_STATE(145)] = 2800,
  [SMALL_STATE(146)] = 2807,
  [SMALL_STATE(147)] = 2814,
  [SMALL_STATE(148)] = 2821,
  [SMALL_STATE(149)] = 2828,
  [SMALL_STATE(150)] = 2835,
  [SMALL_STATE(151)] = 2842,
  [SMALL_STATE(152)] = 2849,
  [SMALL_STATE(153)] = 2856,
  [SMALL_STATE(154)] = 2863,
  [SMALL_STATE(155)] = 2870,
  [SMALL_STATE(156)] = 2877,
  [SMALL_STATE(157)] = 2884,
  [SMALL_STATE(158)] = 2891,
  [SMALL_STATE(159)] = 2898,
  [SMALL_STATE(160)] = 2905,
  [SMALL_STATE(161)] = 2912,
  [SMALL_STATE(162)] = 2919,
  [SMALL_STATE(163)] = 2926,
  [SMALL_STATE(164)] = 2933,
  [SMALL_STATE(165)] = 2940,
  [SMALL_STATE(166)] = 2947,
  [SMALL_STATE(167)] = 2954,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(109),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(46),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(156),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(121),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(120),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(151),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(144),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(150),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(110),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(91),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(106),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(8),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifiers, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(18),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(34),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(24),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 3, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 3, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_declaration, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_declaration, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_declaration, 7),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_declaration, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_declaration, 8),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_declaration, 8),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_declaration, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_declaration, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_declaration, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_declaration, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(67),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(31),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(125),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(125),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(158),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(109),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_declaration, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(20),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat3, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_field_identifier, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_field_identifier, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_method_identifier, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_method_identifier, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_declaration, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(76),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(76),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat3, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(21),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2), SHIFT_REPEAT(159),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 2), SHIFT_REPEAT(117),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(118),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_reference, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_declaration, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [512] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
