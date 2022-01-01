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
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  sym_end_field = 7,
  anon_sym_DOTmethod = 8,
  anon_sym_constructor = 9,
  sym_end_method = 10,
  anon_sym_DOTannotation = 11,
  anon_sym_system = 12,
  anon_sym_build = 13,
  anon_sym_runtime = 14,
  anon_sym_EQ = 15,
  sym_annotation_key = 16,
  aux_sym_annotation_value_token1 = 17,
  sym_end_annotation = 18,
  sym_label = 19,
  aux_sym_statement_token1 = 20,
  sym_statement_name = 21,
  anon_sym_DOTline = 22,
  aux_sym_line_declaration_token1 = 23,
  anon_sym_DOTlocals = 24,
  anon_sym_DOTparam = 25,
  aux_sym_param_declaration_token1 = 26,
  anon_sym_DOTcatch = 27,
  anon_sym_LBRACE = 28,
  anon_sym_DOT_DOT = 29,
  anon_sym_RBRACE = 30,
  anon_sym_DOTcatchall = 31,
  anon_sym_DOTpacked_DASHswitch = 32,
  anon_sym_DOTendpacked_DASHswitch = 33,
  anon_sym_DOTsparse_DASHswitch = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_DOTendsparse_DASHswitch = 36,
  anon_sym_DOTarray_DASHdata = 37,
  aux_sym_array_data_declaration_token1 = 38,
  anon_sym_DOTendarray_DASHdata = 39,
  sym_class_identifier = 40,
  aux_sym_field_identifier_token1 = 41,
  anon_sym_COLON = 42,
  anon_sym_LTinit_GT = 43,
  aux_sym_method_identifier_token1 = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  anon_sym_LBRACK = 47,
  anon_sym_V = 48,
  anon_sym_Z = 49,
  anon_sym_B = 50,
  anon_sym_S = 51,
  anon_sym_C = 52,
  anon_sym_I = 53,
  anon_sym_J = 54,
  anon_sym_F = 55,
  anon_sym_D = 56,
  anon_sym_public = 57,
  anon_sym_private = 58,
  anon_sym_protected = 59,
  anon_sym_static = 60,
  anon_sym_final = 61,
  anon_sym_synchronized = 62,
  anon_sym_volatile = 63,
  anon_sym_transient = 64,
  anon_sym_native = 65,
  anon_sym_interface = 66,
  anon_sym_abstract = 67,
  anon_sym_bridge = 68,
  anon_sym_synthetic = 69,
  sym_comment = 70,
  anon_sym_DOTenum = 71,
  anon_sym_COMMA = 72,
  sym_class_definition = 73,
  sym_class_declaration = 74,
  sym_super_declaration = 75,
  sym_source_declaration = 76,
  sym_implements_declaration = 77,
  sym_field_definition = 78,
  sym_field_declaration = 79,
  sym_method_definition = 80,
  sym_method_declaration = 81,
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
  sym_enum_reference = 103,
  sym_list = 104,
  aux_sym_class_definition_repeat1 = 105,
  aux_sym_class_definition_repeat2 = 106,
  aux_sym_class_definition_repeat3 = 107,
  aux_sym_class_definition_repeat4 = 108,
  aux_sym_method_definition_repeat1 = 109,
  aux_sym_annotation_definition_repeat1 = 110,
  aux_sym_packed_switch_declaration_repeat1 = 111,
  aux_sym_sparse_switch_declaration_repeat1 = 112,
  aux_sym_array_data_declaration_repeat1 = 113,
  aux_sym_method_identifier_repeat1 = 114,
  aux_sym_access_modifiers_repeat1 = 115,
  aux_sym_list_repeat1 = 116,
  aux_sym_list_repeat2 = 117,
  aux_sym_list_repeat3 = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTclass] = ".class",
  [anon_sym_DOTsuper] = ".super",
  [anon_sym_DOTsource] = ".source",
  [aux_sym_source_declaration_token1] = "source_declaration_token1",
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
  [anon_sym_DOTenum] = ".enum",
  [anon_sym_COMMA] = ",",
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
  [sym_field_identifier] = "field_identifier",
  [sym_method_identifier] = "method_identifier",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_primitive_type] = "primitive_type",
  [sym_access_modifiers] = "access_modifiers",
  [sym_enum_reference] = "enum_reference",
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
  [aux_sym_list_repeat3] = "list_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTclass] = anon_sym_DOTclass,
  [anon_sym_DOTsuper] = anon_sym_DOTsuper,
  [anon_sym_DOTsource] = anon_sym_DOTsource,
  [aux_sym_source_declaration_token1] = aux_sym_source_declaration_token1,
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
  [anon_sym_DOTenum] = anon_sym_DOTenum,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_field_identifier] = sym_field_identifier,
  [sym_method_identifier] = sym_method_identifier,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_access_modifiers] = sym_access_modifiers,
  [sym_enum_reference] = sym_enum_reference,
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
  [aux_sym_list_repeat3] = aux_sym_list_repeat3,
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
  [anon_sym_DOTenum] = {
    .visible = true,
    .named = false,
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
  [sym_enum_reference] = {
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
  [aux_sym_list_repeat3] = {
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
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '(') ADVANCE(504);
      if (lookahead == ')') ADVANCE(505);
      if (lookahead == ',') ADVANCE(557);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(411);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(511);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(512);
      if (lookahead == 'J') ADVANCE(513);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'S') ADVANCE(510);
      if (lookahead == 'V') ADVANCE(507);
      if (lookahead == 'Z') ADVANCE(508);
      if (lookahead == '[') ADVANCE(506);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(194);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == ',') ADVANCE(557);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'v') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(277);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(412);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(552);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(103);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(556);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 271:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 272:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 273:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 274:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 276:
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 277:
      if (lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 279:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 280:
      if (lookahead == 'z') ADVANCE(105);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 284:
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 285:
      if (eof) ADVANCE(287);
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 286:
      if (eof) ADVANCE(287);
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOTclass);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOTsuper);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DOTsource);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_source_declaration_token1);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DOTimplements);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DOTfield);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_end_field);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_end_method);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DOTannotation);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_annotation_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_annotation_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_end_annotation);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_statement_name);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DOTline);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_line_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DOTlocals);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_param_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DOTcatch);
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DOTcatchall);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DOTpacked_DASHswitch);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DOTendpacked_DASHswitch);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DOTsparse_DASHswitch);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DOTendsparse_DASHswitch);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DOTarray_DASHdata);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_array_data_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOTendarray_DASHdata);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_class_identifier);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'b') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'b') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'c') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'd') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'd') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'f') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'g') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'h') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'h') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 's') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 's') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == 'y') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'v') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'v') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == 'z') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LTinit_GT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'b') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'b') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'c') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'd') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'f') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'g') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'h') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'h') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'i') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'l') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'n') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'r') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 's') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 's') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'y') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'u') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'v') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'v') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == 'z') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_transient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_synthetic);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DOTenum);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 285},
  [3] = {.lex_state = 285},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 285},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 285},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 285},
  [36] = {.lex_state = 285},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 285},
  [39] = {.lex_state = 285},
  [40] = {.lex_state = 285},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 285},
  [43] = {.lex_state = 285},
  [44] = {.lex_state = 285},
  [45] = {.lex_state = 285},
  [46] = {.lex_state = 285},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 285},
  [49] = {.lex_state = 285},
  [50] = {.lex_state = 285},
  [51] = {.lex_state = 285},
  [52] = {.lex_state = 285},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 286},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 286},
  [75] = {.lex_state = 286},
  [76] = {.lex_state = 286},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 285},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 285},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 285},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 286},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 286},
  [103] = {.lex_state = 286},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 286},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 286},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 286},
  [113] = {.lex_state = 286},
  [114] = {.lex_state = 286},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 285},
  [118] = {.lex_state = 285},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 308},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 285},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 285},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 285},
  [135] = {.lex_state = 285},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 285},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 0},
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
    [anon_sym_DOTenum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_class_definition] = STATE(130),
    [sym_class_declaration] = STATE(101),
    [anon_sym_DOTclass] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
    STATE(74), 1,
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
  [58] = 15,
    ACTIONS(3), 1,
      sym_comment,
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
      sym_end_method,
    ACTIONS(33), 1,
      sym_label,
    STATE(74), 1,
      sym_annotation_declaration,
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
  [116] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_end_method,
    ACTIONS(37), 1,
      anon_sym_DOTannotation,
    ACTIONS(40), 1,
      sym_label,
    ACTIONS(43), 1,
      sym_statement_name,
    ACTIONS(46), 1,
      anon_sym_DOTline,
    ACTIONS(49), 1,
      anon_sym_DOTlocals,
    ACTIONS(52), 1,
      anon_sym_DOTparam,
    ACTIONS(55), 1,
      anon_sym_DOTcatch,
    ACTIONS(58), 1,
      anon_sym_DOTcatchall,
    ACTIONS(61), 1,
      anon_sym_DOTpacked_DASHswitch,
    ACTIONS(64), 1,
      anon_sym_DOTsparse_DASHswitch,
    ACTIONS(67), 1,
      anon_sym_DOTarray_DASHdata,
    STATE(74), 1,
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
  [174] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_DOTsource,
    ACTIONS(74), 1,
      anon_sym_DOTimplements,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    STATE(3), 1,
      sym_method_declaration,
    STATE(17), 1,
      sym_source_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(16), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(33), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(55), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(65), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 17,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
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
  [247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LTinit_GT,
    STATE(8), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(82), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(86), 13,
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
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LTinit_GT,
    STATE(8), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(88), 2,
      anon_sym_constructor,
      aux_sym_method_identifier_token1,
    ACTIONS(92), 13,
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
  [305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 17,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
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
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOTcatch,
    ACTIONS(97), 15,
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
  [352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_class_identifier,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(11), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_method_identifier_repeat1,
    ACTIONS(109), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [382] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(74), 1,
      anon_sym_DOTimplements,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(32), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(53), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(61), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(66), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_class_identifier,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(11), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_method_identifier_repeat1,
    ACTIONS(120), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      sym_class_identifier,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(13), 4,
      sym__type,
      sym_array_type,
      sym_primitive_type,
      aux_sym_method_identifier_repeat1,
    ACTIONS(120), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOTcatch,
    ACTIONS(126), 15,
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
  [510] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(74), 1,
      anon_sym_DOTimplements,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(34), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(56), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(61), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(67), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [554] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(74), 1,
      anon_sym_DOTimplements,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(12), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(34), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(56), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(67), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(105), 1,
      sym_access_modifiers,
    ACTIONS(132), 13,
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
  [623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(145), 1,
      sym_access_modifiers,
    ACTIONS(134), 13,
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
  [648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_class_identifier,
    STATE(24), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(136), 13,
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
  [673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_field_identifier_token1,
    STATE(21), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(138), 13,
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
  [698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(77), 1,
      sym_access_modifiers,
    ACTIONS(141), 13,
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
  [723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_field_identifier_token1,
    STATE(21), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(143), 13,
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
  [748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_class_identifier,
    STATE(24), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(145), 13,
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
  [773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      sym_class_identifier,
    STATE(9), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(120), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_class_identifier,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(102), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(154), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_class_identifier,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(40), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(160), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [851] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_class_identifier,
    STATE(44), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(160), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 1,
      sym_class_identifier,
    STATE(62), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(120), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym_class_identifier,
    STATE(39), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(160), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 1,
      sym_class_identifier,
    STATE(62), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(154), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [955] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(54), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(60), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(68), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [992] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(56), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(60), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(67), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1029] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(53), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(60), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(66), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DOTcatch,
    ACTIONS(170), 11,
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
  [1086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOTcatch,
    ACTIONS(80), 11,
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
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOTcatch,
    ACTIONS(176), 11,
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
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOTcatch,
    ACTIONS(180), 11,
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
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOTcatch,
    ACTIONS(184), 11,
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
  [1166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DOTcatch,
    ACTIONS(188), 11,
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
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOTcatch,
    ACTIONS(192), 11,
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
  [1206] = 3,
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
  [1226] = 3,
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
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DOTcatch,
    ACTIONS(95), 11,
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
  [1266] = 3,
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
  [1286] = 3,
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
  [1306] = 3,
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
  [1326] = 3,
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
  [1346] = 3,
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
  [1366] = 3,
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
  [1386] = 3,
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
  [1406] = 3,
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
  [1426] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(68), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1453] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(73), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1480] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(67), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1507] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOTfield,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(59), 1,
      sym_field_declaration,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(66), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_DOTenum,
    STATE(107), 1,
      sym_annotation_value,
    STATE(114), 2,
      sym_enum_reference,
      sym_list,
    ACTIONS(240), 3,
      aux_sym_source_declaration_token1,
      aux_sym_annotation_value_token1,
      sym_class_identifier,
  [1556] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_source_declaration_token1,
    ACTIONS(248), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      sym_class_identifier,
    STATE(87), 1,
      aux_sym_list_repeat3,
    STATE(89), 1,
      aux_sym_list_repeat2,
    STATE(90), 1,
      aux_sym_list_repeat1,
  [1581] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOTannotation,
    ACTIONS(256), 1,
      sym_end_field,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(136), 1,
      sym_annotation_definition,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOTannotation,
    STATE(74), 1,
      sym_annotation_declaration,
    STATE(60), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOTimplements,
    STATE(61), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    ACTIONS(263), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 7,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_annotation_key,
      sym_end_annotation,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DOTfield,
    STATE(59), 1,
      sym_field_declaration,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(64), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(71), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(71), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(71), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(71), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      anon_sym_DOTmethod,
    STATE(3), 1,
      sym_method_declaration,
    STATE(71), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOTmethod,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_method_declaration,
    STATE(71), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_annotation_key,
    ACTIONS(292), 1,
      sym_end_annotation,
    STATE(75), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_annotation_key,
    ACTIONS(294), 1,
      sym_end_annotation,
    STATE(76), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_annotation_key,
    ACTIONS(299), 1,
      sym_end_annotation,
    STATE(76), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_constructor,
    ACTIONS(303), 1,
      anon_sym_LTinit_GT,
    ACTIONS(305), 1,
      aux_sym_method_identifier_token1,
    STATE(35), 1,
      sym_method_identifier,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(307), 2,
      aux_sym_source_declaration_token1,
      anon_sym_RBRACE,
  [1885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      aux_sym_source_declaration_token1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_list_repeat2,
  [1898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [1907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(320), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(93), 1,
      aux_sym_array_data_declaration_repeat1,
  [1920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(324), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(91), 1,
      aux_sym_sparse_switch_declaration_repeat1,
  [1933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_label,
    ACTIONS(330), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(88), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [1955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      sym_class_identifier,
    STATE(85), 1,
      aux_sym_list_repeat3,
  [1968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_list_repeat1,
  [1981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_class_identifier,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_list_repeat3,
  [1994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(346), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(97), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_source_declaration_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_list_repeat2,
  [2020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_list_repeat1,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(351), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(91), 1,
      aux_sym_sparse_switch_declaration_repeat1,
  [2046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(357), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(96), 1,
      aux_sym_array_data_declaration_repeat1,
  [2068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_class_identifier,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(363), 2,
      aux_sym_annotation_value_token1,
      anon_sym_RBRACE,
  [2090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(370), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(96), 1,
      aux_sym_array_data_declaration_repeat1,
  [2103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_label,
    ACTIONS(375), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(97), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_annotation_value_token1,
    ACTIONS(377), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(82), 1,
      aux_sym_sparse_switch_declaration_repeat1,
  [2129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym_method_identifier,
    ACTIONS(303), 2,
      anon_sym_LTinit_GT,
      aux_sym_method_identifier_token1,
  [2140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DOTsuper,
    STATE(5), 1,
      sym_super_declaration,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_field_identifier_token1,
    STATE(69), 1,
      sym_field_identifier,
  [2192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      aux_sym_annotation_value_token1,
      anon_sym_DOTendsparse_DASHswitch,
  [2216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_field_identifier_token1,
    STATE(100), 1,
      sym_field_identifier,
  [2234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      sym_class_identifier,
  [2242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      aux_sym_annotation_value_token1,
      anon_sym_RBRACE,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      aux_sym_source_declaration_token1,
      anon_sym_RBRACE,
  [2282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_label,
  [2289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_label,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_param_declaration_token1,
  [2303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_line_declaration_token1,
  [2310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      aux_sym_line_declaration_token1,
  [2317] = 2,
    ACTIONS(413), 1,
      aux_sym_statement_token1,
    ACTIONS(415), 1,
      sym_comment,
  [2324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COLON,
  [2331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [2338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_EQ,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_label,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_class_identifier,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DOT_DOT,
  [2373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_label,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_label,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_label,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_end_field,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DASH_GT,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_class_identifier,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_annotation_value_token1,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_label,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_class_identifier,
  [2457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_source_declaration_token1,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DOTsuper,
  [2471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_class_identifier,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_class_identifier,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_DOT_DOT,
  [2492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym_array_data_declaration_token1,
  [2506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 510,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 598,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 648,
  [SMALL_STATE(21)] = 673,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 723,
  [SMALL_STATE(24)] = 748,
  [SMALL_STATE(25)] = 773,
  [SMALL_STATE(26)] = 799,
  [SMALL_STATE(27)] = 825,
  [SMALL_STATE(28)] = 851,
  [SMALL_STATE(29)] = 877,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 929,
  [SMALL_STATE(32)] = 955,
  [SMALL_STATE(33)] = 992,
  [SMALL_STATE(34)] = 1029,
  [SMALL_STATE(35)] = 1066,
  [SMALL_STATE(36)] = 1086,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1126,
  [SMALL_STATE(39)] = 1146,
  [SMALL_STATE(40)] = 1166,
  [SMALL_STATE(41)] = 1186,
  [SMALL_STATE(42)] = 1206,
  [SMALL_STATE(43)] = 1226,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1266,
  [SMALL_STATE(46)] = 1286,
  [SMALL_STATE(47)] = 1306,
  [SMALL_STATE(48)] = 1326,
  [SMALL_STATE(49)] = 1346,
  [SMALL_STATE(50)] = 1366,
  [SMALL_STATE(51)] = 1386,
  [SMALL_STATE(52)] = 1406,
  [SMALL_STATE(53)] = 1426,
  [SMALL_STATE(54)] = 1453,
  [SMALL_STATE(55)] = 1480,
  [SMALL_STATE(56)] = 1507,
  [SMALL_STATE(57)] = 1534,
  [SMALL_STATE(58)] = 1556,
  [SMALL_STATE(59)] = 1581,
  [SMALL_STATE(60)] = 1602,
  [SMALL_STATE(61)] = 1621,
  [SMALL_STATE(62)] = 1638,
  [SMALL_STATE(63)] = 1651,
  [SMALL_STATE(64)] = 1663,
  [SMALL_STATE(65)] = 1681,
  [SMALL_STATE(66)] = 1698,
  [SMALL_STATE(67)] = 1715,
  [SMALL_STATE(68)] = 1732,
  [SMALL_STATE(69)] = 1749,
  [SMALL_STATE(70)] = 1760,
  [SMALL_STATE(71)] = 1771,
  [SMALL_STATE(72)] = 1788,
  [SMALL_STATE(73)] = 1799,
  [SMALL_STATE(74)] = 1816,
  [SMALL_STATE(75)] = 1830,
  [SMALL_STATE(76)] = 1844,
  [SMALL_STATE(77)] = 1858,
  [SMALL_STATE(78)] = 1874,
  [SMALL_STATE(79)] = 1885,
  [SMALL_STATE(80)] = 1898,
  [SMALL_STATE(81)] = 1907,
  [SMALL_STATE(82)] = 1920,
  [SMALL_STATE(83)] = 1933,
  [SMALL_STATE(84)] = 1942,
  [SMALL_STATE(85)] = 1955,
  [SMALL_STATE(86)] = 1968,
  [SMALL_STATE(87)] = 1981,
  [SMALL_STATE(88)] = 1994,
  [SMALL_STATE(89)] = 2007,
  [SMALL_STATE(90)] = 2020,
  [SMALL_STATE(91)] = 2033,
  [SMALL_STATE(92)] = 2046,
  [SMALL_STATE(93)] = 2055,
  [SMALL_STATE(94)] = 2068,
  [SMALL_STATE(95)] = 2079,
  [SMALL_STATE(96)] = 2090,
  [SMALL_STATE(97)] = 2103,
  [SMALL_STATE(98)] = 2116,
  [SMALL_STATE(99)] = 2129,
  [SMALL_STATE(100)] = 2140,
  [SMALL_STATE(101)] = 2148,
  [SMALL_STATE(102)] = 2158,
  [SMALL_STATE(103)] = 2166,
  [SMALL_STATE(104)] = 2174,
  [SMALL_STATE(105)] = 2182,
  [SMALL_STATE(106)] = 2192,
  [SMALL_STATE(107)] = 2200,
  [SMALL_STATE(108)] = 2208,
  [SMALL_STATE(109)] = 2216,
  [SMALL_STATE(110)] = 2224,
  [SMALL_STATE(111)] = 2234,
  [SMALL_STATE(112)] = 2242,
  [SMALL_STATE(113)] = 2250,
  [SMALL_STATE(114)] = 2258,
  [SMALL_STATE(115)] = 2266,
  [SMALL_STATE(116)] = 2274,
  [SMALL_STATE(117)] = 2282,
  [SMALL_STATE(118)] = 2289,
  [SMALL_STATE(119)] = 2296,
  [SMALL_STATE(120)] = 2303,
  [SMALL_STATE(121)] = 2310,
  [SMALL_STATE(122)] = 2317,
  [SMALL_STATE(123)] = 2324,
  [SMALL_STATE(124)] = 2331,
  [SMALL_STATE(125)] = 2338,
  [SMALL_STATE(126)] = 2345,
  [SMALL_STATE(127)] = 2352,
  [SMALL_STATE(128)] = 2359,
  [SMALL_STATE(129)] = 2366,
  [SMALL_STATE(130)] = 2373,
  [SMALL_STATE(131)] = 2380,
  [SMALL_STATE(132)] = 2387,
  [SMALL_STATE(133)] = 2394,
  [SMALL_STATE(134)] = 2401,
  [SMALL_STATE(135)] = 2408,
  [SMALL_STATE(136)] = 2415,
  [SMALL_STATE(137)] = 2422,
  [SMALL_STATE(138)] = 2429,
  [SMALL_STATE(139)] = 2436,
  [SMALL_STATE(140)] = 2443,
  [SMALL_STATE(141)] = 2450,
  [SMALL_STATE(142)] = 2457,
  [SMALL_STATE(143)] = 2464,
  [SMALL_STATE(144)] = 2471,
  [SMALL_STATE(145)] = 2478,
  [SMALL_STATE(146)] = 2485,
  [SMALL_STATE(147)] = 2492,
  [SMALL_STATE(148)] = 2499,
  [SMALL_STATE(149)] = 2506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(80),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(122),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(121),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(120),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(119),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(128),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(132),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(139),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(98),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(148),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifiers, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 3),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(25),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(24),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_declaration, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_declaration, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_declaration, 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_declaration, 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 5, .production_id = 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 5, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 4, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 4, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_declaration, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_declaration, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_declaration, 8),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_declaration, 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_declaration, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_declaration, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(80),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(141),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_declaration, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(18),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(22),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_declaration, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2), SHIFT_REPEAT(125),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(78),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(94),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(95),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(96),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2), SHIFT_REPEAT(97),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_reference, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_declaration, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
