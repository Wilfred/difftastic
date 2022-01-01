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
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_DOTclass = 1,
  anon_sym_DOTsuper = 2,
  anon_sym_DOTsource = 3,
  aux_sym_source_declaration_token1 = 4,
  anon_sym_DOTimplements = 5,
  anon_sym_DOTfield = 6,
  anon_sym_DOTendmethod = 7,
  anon_sym_DOTmethod = 8,
  anon_sym_constructor = 9,
  anon_sym_DOTannotation = 10,
  anon_sym_system = 11,
  anon_sym_build = 12,
  anon_sym_runtime = 13,
  anon_sym_EQ = 14,
  sym_annotation_key = 15,
  aux_sym_annotation_value_token1 = 16,
  sym_end_annotation = 17,
  sym_label = 18,
  aux_sym_statement_token1 = 19,
  sym_statement_name = 20,
  anon_sym_DOTline = 21,
  aux_sym_line_declaration_token1 = 22,
  anon_sym_DOTlocals = 23,
  anon_sym_DOTparam = 24,
  aux_sym_param_declaration_token1 = 25,
  anon_sym_DOTcatch = 26,
  anon_sym_LBRACE = 27,
  anon_sym_DOT_DOT = 28,
  anon_sym_RBRACE = 29,
  anon_sym_DOTcatchall = 30,
  anon_sym_DOTpacked_DASHswitch = 31,
  anon_sym_DOTendpacked_DASHswitch = 32,
  anon_sym_DOTsparse_DASHswitch = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_DOTendsparse_DASHswitch = 35,
  anon_sym_DOTarray_DASHdata = 36,
  aux_sym_array_data_declaration_token1 = 37,
  anon_sym_DOTendarray_DASHdata = 38,
  sym_class_identifier = 39,
  aux_sym_field_identifier_token1 = 40,
  anon_sym_COLON = 41,
  anon_sym_LTinit_GT = 42,
  aux_sym_method_identifier_token1 = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_LBRACK = 46,
  anon_sym_V = 47,
  anon_sym_Z = 48,
  anon_sym_B = 49,
  anon_sym_S = 50,
  anon_sym_C = 51,
  anon_sym_I = 52,
  anon_sym_J = 53,
  anon_sym_F = 54,
  anon_sym_D = 55,
  anon_sym_public = 56,
  anon_sym_private = 57,
  anon_sym_protected = 58,
  anon_sym_static = 59,
  anon_sym_final = 60,
  anon_sym_synchronized = 61,
  anon_sym_volatile = 62,
  anon_sym_transient = 63,
  anon_sym_native = 64,
  anon_sym_interface = 65,
  anon_sym_abstract = 66,
  anon_sym_bridge = 67,
  anon_sym_synthetic = 68,
  sym_comment = 69,
  anon_sym_COMMA = 70,
  sym_class_definition = 71,
  sym_class_declaration = 72,
  sym_super_declaration = 73,
  sym_source_declaration = 74,
  sym_implements_declaration = 75,
  sym_field_definition = 76,
  sym_field_declaration = 77,
  sym_end_field = 78,
  sym_method_definition = 79,
  sym_method_declaration = 80,
  sym_end_method = 81,
  sym_annotation_definition = 82,
  sym_annotation_declaration = 83,
  sym_annotation_property = 84,
  sym_annotation_value = 85,
  sym__code_line = 86,
  sym_statement = 87,
  sym__declaration = 88,
  sym_line_declaration = 89,
  sym_locals_declaration = 90,
  sym_param_declaration = 91,
  sym_catch_declaration = 92,
  sym_catchall_declaration = 93,
  sym_packed_switch_declaration = 94,
  sym_sparse_switch_declaration = 95,
  sym_array_data_declaration = 96,
  sym_field_identifier = 97,
  sym_method_identifier = 98,
  sym__type = 99,
  sym_array_type = 100,
  sym_primitive_type = 101,
  sym_access_modifiers = 102,
  sym_list = 103,
  aux_sym_class_definition_repeat1 = 104,
  aux_sym_class_definition_repeat2 = 105,
  aux_sym_class_definition_repeat3 = 106,
  aux_sym_class_definition_repeat4 = 107,
  aux_sym_method_definition_repeat1 = 108,
  aux_sym_annotation_definition_repeat1 = 109,
  aux_sym_packed_switch_declaration_repeat1 = 110,
  aux_sym_sparse_switch_declaration_repeat1 = 111,
  aux_sym_array_data_declaration_repeat1 = 112,
  aux_sym_method_identifier_repeat1 = 113,
  aux_sym_access_modifiers_repeat1 = 114,
  aux_sym_list_repeat1 = 115,
  aux_sym_list_repeat2 = 116,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTclass] = ".class",
  [anon_sym_DOTsuper] = ".super",
  [anon_sym_DOTsource] = ".source",
  [aux_sym_source_declaration_token1] = "source_declaration_token1",
  [anon_sym_DOTimplements] = ".implements",
  [anon_sym_DOTfield] = ".field",
  [anon_sym_DOTendmethod] = ".end method",
  [anon_sym_DOTmethod] = ".method",
  [anon_sym_constructor] = "constructor",
  [anon_sym_DOTannotation] = ".annotation",
  [anon_sym_system] = "system",
  [anon_sym_build] = "build",
  [anon_sym_runtime] = "runtime",
  [anon_sym_EQ] = "=",
  [sym_annotation_key] = "annotation_key",
  [aux_sym_annotation_value_token1] = "annotation_value_token1",
  [sym_end_annotation] = "end_annotation",
  [sym_label] = "label",
  [aux_sym_statement_token1] = "statement_token1",
  [sym_statement_name] = "statement_name",
  [anon_sym_DOTline] = ".line",
  [aux_sym_line_declaration_token1] = "line_declaration_token1",
  [anon_sym_DOTlocals] = ".locals",
  [anon_sym_DOTparam] = ".param",
  [aux_sym_param_declaration_token1] = "param_declaration_token1",
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
  [aux_sym_array_data_declaration_token1] = "array_data_declaration_token1",
  [anon_sym_DOTendarray_DASHdata] = ".end array-data",
  [sym_class_identifier] = "class_identifier",
  [aux_sym_field_identifier_token1] = "field_identifier_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_LTinit_GT] = "<init>",
  [aux_sym_method_identifier_token1] = "method_identifier_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_COMMA] = ",",
  [sym_class_definition] = "class_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_super_declaration] = "super_declaration",
  [sym_source_declaration] = "source_declaration",
  [sym_implements_declaration] = "implements_declaration",
  [sym_field_definition] = "field_definition",
  [sym_field_declaration] = "field_declaration",
  [sym_end_field] = "end_field",
  [sym_method_definition] = "method_definition",
  [sym_method_declaration] = "method_declaration",
  [sym_end_method] = "end_method",
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
  [sym_field_identifier] = "field_identifier",
  [sym_method_identifier] = "method_identifier",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_primitive_type] = "primitive_type",
  [sym_access_modifiers] = "access_modifiers",
  [sym_list] = "list",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_class_definition_repeat3] = "class_definition_repeat3",
  [aux_sym_class_definition_repeat4] = "class_definition_repeat4",
  [aux_sym_method_definition_repeat1] = "method_definition_repeat1",
  [aux_sym_annotation_definition_repeat1] = "annotation_definition_repeat1",
  [aux_sym_packed_switch_declaration_repeat1] = "packed_switch_declaration_repeat1",
  [aux_sym_sparse_switch_declaration_repeat1] = "sparse_switch_declaration_repeat1",
  [aux_sym_array_data_declaration_repeat1] = "array_data_declaration_repeat1",
  [aux_sym_method_identifier_repeat1] = "method_identifier_repeat1",
  [aux_sym_access_modifiers_repeat1] = "access_modifiers_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTclass] = anon_sym_DOTclass,
  [anon_sym_DOTsuper] = anon_sym_DOTsuper,
  [anon_sym_DOTsource] = anon_sym_DOTsource,
  [aux_sym_source_declaration_token1] = aux_sym_source_declaration_token1,
  [anon_sym_DOTimplements] = anon_sym_DOTimplements,
  [anon_sym_DOTfield] = anon_sym_DOTfield,
  [anon_sym_DOTendmethod] = anon_sym_DOTendmethod,
  [anon_sym_DOTmethod] = anon_sym_DOTmethod,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_DOTannotation] = anon_sym_DOTannotation,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_build] = anon_sym_build,
  [anon_sym_runtime] = anon_sym_runtime,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_annotation_key] = sym_annotation_key,
  [aux_sym_annotation_value_token1] = aux_sym_annotation_value_token1,
  [sym_end_annotation] = sym_end_annotation,
  [sym_label] = sym_label,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [sym_statement_name] = sym_statement_name,
  [anon_sym_DOTline] = anon_sym_DOTline,
  [aux_sym_line_declaration_token1] = aux_sym_line_declaration_token1,
  [anon_sym_DOTlocals] = anon_sym_DOTlocals,
  [anon_sym_DOTparam] = anon_sym_DOTparam,
  [aux_sym_param_declaration_token1] = aux_sym_param_declaration_token1,
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
  [aux_sym_array_data_declaration_token1] = aux_sym_array_data_declaration_token1,
  [anon_sym_DOTendarray_DASHdata] = anon_sym_DOTendarray_DASHdata,
  [sym_class_identifier] = sym_class_identifier,
  [aux_sym_field_identifier_token1] = aux_sym_field_identifier_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LTinit_GT] = anon_sym_LTinit_GT,
  [aux_sym_method_identifier_token1] = aux_sym_method_identifier_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_class_definition] = sym_class_definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_super_declaration] = sym_super_declaration,
  [sym_source_declaration] = sym_source_declaration,
  [sym_implements_declaration] = sym_implements_declaration,
  [sym_field_definition] = sym_field_definition,
  [sym_field_declaration] = sym_field_declaration,
  [sym_end_field] = sym_end_field,
  [sym_method_definition] = sym_method_definition,
  [sym_method_declaration] = sym_method_declaration,
  [sym_end_method] = sym_end_method,
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
  [sym_field_identifier] = sym_field_identifier,
  [sym_method_identifier] = sym_method_identifier,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_access_modifiers] = sym_access_modifiers,
  [sym_list] = sym_list,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_class_definition_repeat3] = aux_sym_class_definition_repeat3,
  [aux_sym_class_definition_repeat4] = aux_sym_class_definition_repeat4,
  [aux_sym_method_definition_repeat1] = aux_sym_method_definition_repeat1,
  [aux_sym_annotation_definition_repeat1] = aux_sym_annotation_definition_repeat1,
  [aux_sym_packed_switch_declaration_repeat1] = aux_sym_packed_switch_declaration_repeat1,
  [aux_sym_sparse_switch_declaration_repeat1] = aux_sym_sparse_switch_declaration_repeat1,
  [aux_sym_array_data_declaration_repeat1] = aux_sym_array_data_declaration_repeat1,
  [aux_sym_method_identifier_repeat1] = aux_sym_method_identifier_repeat1,
  [aux_sym_access_modifiers_repeat1] = aux_sym_access_modifiers_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
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
  [aux_sym_source_declaration_token1] = {
    .visible = false,
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
  [anon_sym_DOTendmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
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
  [aux_sym_annotation_value_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_line_declaration_token1] = {
    .visible = false,
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
  [aux_sym_param_declaration_token1] = {
    .visible = false,
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
  [aux_sym_array_data_declaration_token1] = {
    .visible = false,
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
  [anon_sym_COLON] = {
    .visible = true,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [sym_end_field] = {
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
  [sym_end_method] = {
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
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_method_identifier] = {
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
  [sym_list] = {
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
  [aux_sym_method_identifier_repeat1] = {
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
};

enum {
  field_element_type = 1,
  field_key = 2,
  field_parameter = 3,
  field_return_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_element_type] = "element_type",
  [field_key] = "key",
  [field_parameter] = "parameter",
  [field_return_type] = "return_type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_element_type, 1},
  [3] =
    {field_return_type, 3},
  [4] =
    {field_parameter, 2},
    {field_return_type, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(281);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ',') ADVANCE(549);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == 'B') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(504);
      if (lookahead == 'D') ADVANCE(508);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(505);
      if (lookahead == 'J') ADVANCE(506);
      if (lookahead == 'L') ADVANCE(279);
      if (lookahead == 'S') ADVANCE(503);
      if (lookahead == 'V') ADVANCE(500);
      if (lookahead == 'Z') ADVANCE(501);
      if (lookahead == '[') ADVANCE(499);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == ',') ADVANCE(549);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(272);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '<') ADVANCE(133);
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
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == 'v') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(272);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(322);
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(405);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(518);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 266:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 267:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 268:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 269:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 270:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 271:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 272:
      if (lookahead == 'x') ADVANCE(277);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 274:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 275:
      if (lookahead == 'z') ADVANCE(104);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 279:
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 280:
      if (eof) ADVANCE(281);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOTclass);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOTsuper);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOTsource);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_source_declaration_token1);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DOTimplements);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DOTfield);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOTendmethod);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DOTannotation);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_annotation_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_annotation_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_end_annotation);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_statement_name);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DOTline);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_line_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DOTlocals);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_param_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOTcatch);
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DOTcatchall);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOTpacked_DASHswitch);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DOTendpacked_DASHswitch);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DOTsparse_DASHswitch);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOTendsparse_DASHswitch);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOTarray_DASHdata);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_array_data_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DOTendarray_DASHdata);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_class_identifier);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'b') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'b') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'd') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'd') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'd') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'f') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'g') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'h') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'h') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 's') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 's') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'y') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'v') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'v') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'z') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LTinit_GT);
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
      if (lookahead == 'c') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(546);
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
      if (lookahead == 'd') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(525);
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
      if (lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(537);
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
      if (lookahead == 'l') ADVANCE(522);
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
      if (lookahead == 'r') ADVANCE(291);
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
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(531);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_synthetic);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 280},
  [3] = {.lex_state = 280},
  [4] = {.lex_state = 280},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 280},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 280},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 280},
  [34] = {.lex_state = 280},
  [35] = {.lex_state = 280},
  [36] = {.lex_state = 280},
  [37] = {.lex_state = 280},
  [38] = {.lex_state = 280},
  [39] = {.lex_state = 280},
  [40] = {.lex_state = 280},
  [41] = {.lex_state = 280},
  [42] = {.lex_state = 280},
  [43] = {.lex_state = 280},
  [44] = {.lex_state = 280},
  [45] = {.lex_state = 280},
  [46] = {.lex_state = 280},
  [47] = {.lex_state = 280},
  [48] = {.lex_state = 280},
  [49] = {.lex_state = 280},
  [50] = {.lex_state = 280},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 280},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 280},
  [88] = {.lex_state = 280},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 280},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 280},
  [114] = {.lex_state = 280},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 280},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 280},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 280},
  [131] = {.lex_state = 280},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 301},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTclass] = ACTIONS(1),
    [anon_sym_DOTsuper] = ACTIONS(1),
    [anon_sym_DOTsource] = ACTIONS(1),
    [aux_sym_source_declaration_token1] = ACTIONS(1),
    [anon_sym_DOTimplements] = ACTIONS(1),
    [anon_sym_DOTfield] = ACTIONS(1),
    [anon_sym_DOTendmethod] = ACTIONS(1),
    [anon_sym_DOTmethod] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_DOTannotation] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_build] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_end_annotation] = ACTIONS(1),
    [anon_sym_DOTline] = ACTIONS(1),
    [aux_sym_line_declaration_token1] = ACTIONS(1),
    [anon_sym_DOTlocals] = ACTIONS(1),
    [anon_sym_DOTparam] = ACTIONS(1),
    [aux_sym_param_declaration_token1] = ACTIONS(1),
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
    [aux_sym_array_data_declaration_token1] = ACTIONS(1),
    [anon_sym_DOTendarray_DASHdata] = ACTIONS(1),
    [sym_class_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LTinit_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_class_definition] = STATE(116),
    [sym_class_declaration] = STATE(105),
    [anon_sym_DOTclass] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOTendmethod,
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
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(102), 1,
      sym_end_method,
    STATE(4), 13,
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
      aux_sym_method_definition_repeat1,
  [61] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOTendmethod,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
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
    ACTIONS(31), 1,
      sym_label,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(98), 1,
      sym_end_method,
    STATE(2), 13,
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
      aux_sym_method_definition_repeat1,
  [122] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOTendmethod,
    ACTIONS(35), 1,
      anon_sym_DOTannotation,
    ACTIONS(38), 1,
      sym_label,
    ACTIONS(41), 1,
      sym_statement_name,
    ACTIONS(44), 1,
      anon_sym_DOTline,
    ACTIONS(47), 1,
      anon_sym_DOTlocals,
    ACTIONS(50), 1,
      anon_sym_DOTparam,
    ACTIONS(53), 1,
      anon_sym_DOTcatch,
    ACTIONS(56), 1,
      anon_sym_DOTcatchall,
    ACTIONS(59), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(62), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(65), 1,
      anon_sym_DOTarray_DASHdata,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(4), 13,
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
      aux_sym_method_definition_repeat1,
  [180] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_DOTsource,
    ACTIONS(72), 1,
      anon_sym_DOTimplements,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    STATE(3), 1,
      sym_method_declaration,
    STATE(14), 1,
      sym_source_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(15), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(31), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(53), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(63), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 17,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTendmethod,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_class_identifier,
      anon_sym_RPAREN,
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
  [253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LTinit_GT,
    STATE(7), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(80), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(84), 13,
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
  [282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LTinit_GT,
    STATE(7), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(87), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(91), 13,
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
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 17,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTendmethod,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_class_identifier,
      anon_sym_RPAREN,
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
  [334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_class_identifier,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(11), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_method_identifier_repeat1,
    ACTIONS(101), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_class_identifier,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(11), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_method_identifier_repeat1,
    ACTIONS(111), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym_class_identifier,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(10), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_method_identifier_repeat1,
    ACTIONS(101), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [424] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(72), 1,
      anon_sym_DOTimplements,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(30), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(52), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(56), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(62), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [468] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(72), 1,
      anon_sym_DOTimplements,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(13), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(32), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(51), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [512] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(72), 1,
      anon_sym_DOTimplements,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(32), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(51), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(56), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(69), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(103), 1,
      sym_access_modifiers,
    ACTIONS(122), 13,
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
  [581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DOTcatch,
    ACTIONS(124), 14,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTendmethod,
      anon_sym_DOTmethod,
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
  [604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_field_identifier_token1,
    STATE(18), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(128), 13,
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
  [629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(74), 1,
      sym_access_modifiers,
    ACTIONS(131), 13,
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
  [654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOTcatch,
    ACTIONS(133), 14,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTendmethod,
      anon_sym_DOTmethod,
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
  [677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_class_identifier,
    STATE(22), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(137), 13,
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
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_class_identifier,
    STATE(22), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(139), 13,
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
  [727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_field_identifier_token1,
    STATE(18), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(142), 13,
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
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(140), 1,
      sym_access_modifiers,
    ACTIONS(144), 13,
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
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_class_identifier,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(40), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(150), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      sym_class_identifier,
    STATE(35), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(150), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      sym_class_identifier,
    STATE(6), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(101), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      sym_class_identifier,
    STATE(41), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(150), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      sym_class_identifier,
    STATE(64), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(101), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [907] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(54), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(57), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(70), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [944] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(51), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(57), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(69), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [981] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(52), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(57), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(62), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOTcatch,
    ACTIONS(162), 11,
      anon_sym_DOTendmethod,
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
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOTcatch,
    ACTIONS(166), 11,
      anon_sym_DOTendmethod,
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
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DOTcatch,
    ACTIONS(170), 11,
      anon_sym_DOTendmethod,
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
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOTcatch,
    ACTIONS(93), 11,
      anon_sym_DOTendmethod,
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
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOTcatch,
    ACTIONS(176), 11,
      anon_sym_DOTendmethod,
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
  [1118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOTcatch,
    ACTIONS(180), 11,
      anon_sym_DOTendmethod,
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
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOTcatch,
    ACTIONS(184), 11,
      anon_sym_DOTendmethod,
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
  [1158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DOTcatch,
    ACTIONS(188), 11,
      anon_sym_DOTendmethod,
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
  [1178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOTcatch,
    ACTIONS(78), 11,
      anon_sym_DOTendmethod,
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
  [1198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DOTcatch,
    ACTIONS(194), 11,
      anon_sym_DOTendmethod,
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
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOTcatch,
    ACTIONS(198), 11,
      anon_sym_DOTendmethod,
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
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DOTcatch,
    ACTIONS(202), 11,
      anon_sym_DOTendmethod,
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
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOTcatch,
    ACTIONS(206), 11,
      anon_sym_DOTendmethod,
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
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOTcatch,
    ACTIONS(210), 11,
      anon_sym_DOTendmethod,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOTcatch,
    ACTIONS(214), 11,
      anon_sym_DOTendmethod,
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
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DOTcatch,
    ACTIONS(218), 11,
      anon_sym_DOTendmethod,
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
  [1338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOTcatch,
    ACTIONS(222), 11,
      anon_sym_DOTendmethod,
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
  [1358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOTcatch,
    ACTIONS(226), 11,
      anon_sym_DOTendmethod,
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
  [1378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(58), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(62), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1405] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(58), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(70), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(58), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(69), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1459] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOTfield,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(55), 1,
      sym_field_declaration,
    STATE(58), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(60), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1486] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(234), 1,
      anon_sym_DOTendmethod,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(84), 1,
      sym_end_field,
    STATE(107), 1,
      sym_annotation_definition,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DOTimplements,
    STATE(56), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOTannotation,
    STATE(72), 1,
      sym_annotation_declaration,
    STATE(57), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOTfield,
    STATE(55), 1,
      sym_field_declaration,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(58), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(61), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1593] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      anon_sym_DOTmethod,
    STATE(3), 1,
      sym_method_declaration,
    STATE(61), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(61), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(61), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTendmethod,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1677] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_source_declaration_token1,
    ACTIONS(268), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_list_repeat2,
    STATE(95), 1,
      aux_sym_list_repeat1,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTendmethod,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(61), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTmethod,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(61), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_list,
    STATE(99), 1,
      sym_annotation_value,
  [1757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_annotation_key,
    ACTIONS(280), 1,
      sym_end_annotation,
    STATE(73), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_annotation_key,
    ACTIONS(282), 1,
      sym_end_annotation,
    STATE(75), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_constructor,
    ACTIONS(286), 1,
      anon_sym_LTinit_GT,
    ACTIONS(288), 1,
      aux_sym_method_identifier_token1,
    STATE(48), 1,
      sym_method_identifier,
  [1801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_annotation_key,
    ACTIONS(293), 1,
      sym_end_annotation,
    STATE(75), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_label,
    ACTIONS(297), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(88), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(301), 2,
      aux_sym_annotation_value_token1,
      anon_sym_RBRACE,
  [1848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_list_repeat1,
  [1861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_source_declaration_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_list_repeat2,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym_method_identifier,
    ACTIONS(286), 2,
      anon_sym_LTinit_GT,
      aux_sym_method_identifier_token1,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(315), 2,
      aux_sym_source_declaration_token1,
      anon_sym_RBRACE,
  [1896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(322), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(83), 1,
      aux_sym_array_data_declaration_repeat1,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(330), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(90), 1,
      aux_sym_sparse_switch_declaration_repeat1,
  [1940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_label,
    ACTIONS(335), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(87), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [1953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_label,
    ACTIONS(339), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(87), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [1966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_source_declaration_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_list_repeat2,
  [1979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(346), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(90), 1,
      aux_sym_sparse_switch_declaration_repeat1,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [2001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(352), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(83), 1,
      aux_sym_array_data_declaration_repeat1,
  [2014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(356), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(92), 1,
      aux_sym_array_data_declaration_repeat1,
  [2027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(358), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(86), 1,
      aux_sym_sparse_switch_declaration_repeat1,
  [2040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_list_repeat1,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      aux_sym_source_declaration_token1,
      anon_sym_RBRACE,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      aux_sym_annotation_value_token1,
      anon_sym_RBRACE,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_field_identifier_token1,
    STATE(68), 1,
      sym_field_identifier,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      aux_sym_annotation_value_token1,
      anon_sym_DOTendsparse_DASHswitch,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOTsuper,
    STATE(5), 1,
      sym_super_declaration,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOTendmethod,
    STATE(77), 1,
      sym_end_field,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
  [2178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_label,
  [2185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DOT_DOT,
  [2192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_label,
  [2199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_label,
  [2206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT_DOT,
  [2213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [2220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DASH_GT,
  [2227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_label,
  [2234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [2248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_label,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_EQ,
  [2269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      aux_sym_array_data_declaration_token1,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_annotation_value_token1,
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [2290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_class_identifier,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym_param_declaration_token1,
  [2304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_label,
  [2318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_label,
  [2325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_line_declaration_token1,
  [2332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_line_declaration_token1,
  [2339] = 2,
    ACTIONS(430), 1,
      aux_sym_statement_token1,
    ACTIONS(432), 1,
      sym_comment,
  [2346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_class_identifier,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_class_identifier,
  [2360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_source_declaration_token1,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOTsuper,
  [2374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_class_identifier,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_class_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 253,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 311,
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 512,
  [SMALL_STATE(16)] = 556,
  [SMALL_STATE(17)] = 581,
  [SMALL_STATE(18)] = 604,
  [SMALL_STATE(19)] = 629,
  [SMALL_STATE(20)] = 654,
  [SMALL_STATE(21)] = 677,
  [SMALL_STATE(22)] = 702,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 752,
  [SMALL_STATE(25)] = 777,
  [SMALL_STATE(26)] = 803,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 881,
  [SMALL_STATE(30)] = 907,
  [SMALL_STATE(31)] = 944,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1038,
  [SMALL_STATE(35)] = 1058,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1098,
  [SMALL_STATE(38)] = 1118,
  [SMALL_STATE(39)] = 1138,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1178,
  [SMALL_STATE(42)] = 1198,
  [SMALL_STATE(43)] = 1218,
  [SMALL_STATE(44)] = 1238,
  [SMALL_STATE(45)] = 1258,
  [SMALL_STATE(46)] = 1278,
  [SMALL_STATE(47)] = 1298,
  [SMALL_STATE(48)] = 1318,
  [SMALL_STATE(49)] = 1338,
  [SMALL_STATE(50)] = 1358,
  [SMALL_STATE(51)] = 1378,
  [SMALL_STATE(52)] = 1405,
  [SMALL_STATE(53)] = 1432,
  [SMALL_STATE(54)] = 1459,
  [SMALL_STATE(55)] = 1486,
  [SMALL_STATE(56)] = 1510,
  [SMALL_STATE(57)] = 1527,
  [SMALL_STATE(58)] = 1546,
  [SMALL_STATE(59)] = 1564,
  [SMALL_STATE(60)] = 1576,
  [SMALL_STATE(61)] = 1593,
  [SMALL_STATE(62)] = 1610,
  [SMALL_STATE(63)] = 1627,
  [SMALL_STATE(64)] = 1644,
  [SMALL_STATE(65)] = 1655,
  [SMALL_STATE(66)] = 1666,
  [SMALL_STATE(67)] = 1677,
  [SMALL_STATE(68)] = 1696,
  [SMALL_STATE(69)] = 1707,
  [SMALL_STATE(70)] = 1724,
  [SMALL_STATE(71)] = 1741,
  [SMALL_STATE(72)] = 1757,
  [SMALL_STATE(73)] = 1771,
  [SMALL_STATE(74)] = 1785,
  [SMALL_STATE(75)] = 1801,
  [SMALL_STATE(76)] = 1815,
  [SMALL_STATE(77)] = 1828,
  [SMALL_STATE(78)] = 1837,
  [SMALL_STATE(79)] = 1848,
  [SMALL_STATE(80)] = 1861,
  [SMALL_STATE(81)] = 1874,
  [SMALL_STATE(82)] = 1885,
  [SMALL_STATE(83)] = 1896,
  [SMALL_STATE(84)] = 1909,
  [SMALL_STATE(85)] = 1918,
  [SMALL_STATE(86)] = 1927,
  [SMALL_STATE(87)] = 1940,
  [SMALL_STATE(88)] = 1953,
  [SMALL_STATE(89)] = 1966,
  [SMALL_STATE(90)] = 1979,
  [SMALL_STATE(91)] = 1992,
  [SMALL_STATE(92)] = 2001,
  [SMALL_STATE(93)] = 2014,
  [SMALL_STATE(94)] = 2027,
  [SMALL_STATE(95)] = 2040,
  [SMALL_STATE(96)] = 2053,
  [SMALL_STATE(97)] = 2061,
  [SMALL_STATE(98)] = 2069,
  [SMALL_STATE(99)] = 2077,
  [SMALL_STATE(100)] = 2085,
  [SMALL_STATE(101)] = 2093,
  [SMALL_STATE(102)] = 2101,
  [SMALL_STATE(103)] = 2109,
  [SMALL_STATE(104)] = 2119,
  [SMALL_STATE(105)] = 2127,
  [SMALL_STATE(106)] = 2137,
  [SMALL_STATE(107)] = 2145,
  [SMALL_STATE(108)] = 2155,
  [SMALL_STATE(109)] = 2163,
  [SMALL_STATE(110)] = 2171,
  [SMALL_STATE(111)] = 2178,
  [SMALL_STATE(112)] = 2185,
  [SMALL_STATE(113)] = 2192,
  [SMALL_STATE(114)] = 2199,
  [SMALL_STATE(115)] = 2206,
  [SMALL_STATE(116)] = 2213,
  [SMALL_STATE(117)] = 2220,
  [SMALL_STATE(118)] = 2227,
  [SMALL_STATE(119)] = 2234,
  [SMALL_STATE(120)] = 2241,
  [SMALL_STATE(121)] = 2248,
  [SMALL_STATE(122)] = 2255,
  [SMALL_STATE(123)] = 2262,
  [SMALL_STATE(124)] = 2269,
  [SMALL_STATE(125)] = 2276,
  [SMALL_STATE(126)] = 2283,
  [SMALL_STATE(127)] = 2290,
  [SMALL_STATE(128)] = 2297,
  [SMALL_STATE(129)] = 2304,
  [SMALL_STATE(130)] = 2311,
  [SMALL_STATE(131)] = 2318,
  [SMALL_STATE(132)] = 2325,
  [SMALL_STATE(133)] = 2332,
  [SMALL_STATE(134)] = 2339,
  [SMALL_STATE(135)] = 2346,
  [SMALL_STATE(136)] = 2353,
  [SMALL_STATE(137)] = 2360,
  [SMALL_STATE(138)] = 2367,
  [SMALL_STATE(139)] = 2374,
  [SMALL_STATE(140)] = 2381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(91),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(134),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(133),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(132),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(128),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(127),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(126),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(125),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(94),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(124),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifiers, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(27),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 3),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(22),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_declaration, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_declaration, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 4, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 4, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_declaration, 8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_declaration, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_declaration, 7),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_declaration, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 5, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 5, .production_id = 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_declaration, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_declaration, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_declaration, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_declaration, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(136),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(91),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(16),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_declaration, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_declaration, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2), SHIFT_REPEAT(123),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(78),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(82),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(83),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_field, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2), SHIFT_REPEAT(87),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(117),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_declaration, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_method, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
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
