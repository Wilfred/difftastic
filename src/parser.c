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
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 355
#define ALIAS_COUNT 2
#define TOKEN_COUNT 300
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_COMMA = 18,
  anon_sym_LF = 19,
  anon_sym_nop = 20,
  anon_sym_move = 21,
  anon_sym_move_SLASHfrom16 = 22,
  anon_sym_move_SLASH16 = 23,
  anon_sym_move_DASHwide = 24,
  anon_sym_move_DASHwide_SLASHfrom16 = 25,
  anon_sym_move_DASHwide_SLASH16 = 26,
  anon_sym_move_DASHobject = 27,
  anon_sym_move_DASHobject_SLASHfrom16 = 28,
  anon_sym_move_DASHobject_SLASH16 = 29,
  anon_sym_move_DASHresult = 30,
  anon_sym_move_DASHresult_DASHwide = 31,
  anon_sym_move_DASHresult_DASHobject = 32,
  anon_sym_move_DASHexception = 33,
  anon_sym_return_DASHvoid = 34,
  anon_sym_return = 35,
  anon_sym_return_DASHwide = 36,
  anon_sym_return_DASHobject = 37,
  anon_sym_const_SLASH4 = 38,
  anon_sym_const_SLASH16 = 39,
  anon_sym_const = 40,
  anon_sym_const_SLASHhigh16 = 41,
  anon_sym_const_DASHwide_SLASH16 = 42,
  anon_sym_const_DASHwide_SLASH32 = 43,
  anon_sym_const_DASHwide = 44,
  anon_sym_const_DASHwide_SLASHhigh16 = 45,
  anon_sym_const_DASHstring = 46,
  anon_sym_const_DASHstring_DASHjumbo = 47,
  anon_sym_const_DASHclass = 48,
  anon_sym_monitor_DASHenter = 49,
  anon_sym_monitor_DASHexit = 50,
  anon_sym_check_DASHcast = 51,
  anon_sym_instance_DASHof = 52,
  anon_sym_array_DASHlength = 53,
  anon_sym_new_DASHinstance = 54,
  anon_sym_new_DASHarray = 55,
  anon_sym_filled_DASHnew_DASHarray = 56,
  anon_sym_filled_DASHnew_DASHarray_DASHrange = 57,
  anon_sym_fill_DASHarray_DASHdata = 58,
  anon_sym_throw = 59,
  anon_sym_goto = 60,
  anon_sym_goto_SLASH16 = 61,
  anon_sym_goto_SLASH32 = 62,
  anon_sym_packed_DASHswitch = 63,
  anon_sym_sparse_DASHswitch = 64,
  anon_sym_cmpl_DASHfloat = 65,
  anon_sym_cmpg_DASHfloat = 66,
  anon_sym_cmpl_DASHdouble = 67,
  anon_sym_cmpg_DASHdouble = 68,
  anon_sym_cmp_DASHlong = 69,
  anon_sym_if_DASHeq = 70,
  anon_sym_if_DASHne = 71,
  anon_sym_if_DASHlt = 72,
  anon_sym_if_DASHge = 73,
  anon_sym_if_DASHgt = 74,
  anon_sym_if_DASHle = 75,
  anon_sym_if_DASHeqz = 76,
  anon_sym_if_DASHnez = 77,
  anon_sym_if_DASHltz = 78,
  anon_sym_if_DASHgez = 79,
  anon_sym_if_DASHgtz = 80,
  anon_sym_if_DASHlez = 81,
  anon_sym_aget = 82,
  anon_sym_aget_DASHwide = 83,
  anon_sym_aget_DASHobject = 84,
  anon_sym_aget_DASHboolean = 85,
  anon_sym_aget_DASHbyte = 86,
  anon_sym_aget_DASHchar = 87,
  anon_sym_aget_DASHshort = 88,
  anon_sym_aput = 89,
  anon_sym_aput_DASHwide = 90,
  anon_sym_aput_DASHobject = 91,
  anon_sym_aput_DASHboolean = 92,
  anon_sym_aput_DASHbyte = 93,
  anon_sym_aput_DASHchar = 94,
  anon_sym_aput_DASHshort = 95,
  anon_sym_iget = 96,
  anon_sym_iget_DASHwide = 97,
  anon_sym_iget_DASHobject = 98,
  anon_sym_iget_DASHboolean = 99,
  anon_sym_iget_DASHbyte = 100,
  anon_sym_iget_DASHchar = 101,
  anon_sym_iget_DASHshort = 102,
  anon_sym_iput = 103,
  anon_sym_iput_DASHwide = 104,
  anon_sym_iput_DASHobject = 105,
  anon_sym_iput_DASHboolean = 106,
  anon_sym_iput_DASHbyte = 107,
  anon_sym_iput_DASHchar = 108,
  anon_sym_iput_DASHshort = 109,
  anon_sym_sget = 110,
  anon_sym_sget_DASHwide = 111,
  anon_sym_sget_DASHobject = 112,
  anon_sym_sget_DASHboolean = 113,
  anon_sym_sget_DASHbyte = 114,
  anon_sym_sget_DASHchar = 115,
  anon_sym_sget_DASHshort = 116,
  anon_sym_sput = 117,
  anon_sym_sput_DASHwide = 118,
  anon_sym_sput_DASHobject = 119,
  anon_sym_sput_DASHboolean = 120,
  anon_sym_sput_DASHbyte = 121,
  anon_sym_sput_DASHchar = 122,
  anon_sym_sput_DASHshort = 123,
  anon_sym_invoke_DASHvirtual = 124,
  anon_sym_invoke_DASHsuper = 125,
  anon_sym_invoke_DASHdirect = 126,
  anon_sym_invoke_DASHstatic = 127,
  anon_sym_invoke_DASHinterface = 128,
  anon_sym_invoke_DASHvirtual_SLASHrange = 129,
  anon_sym_invoke_DASHsuper_SLASHrange = 130,
  anon_sym_invoke_DASHdirect_SLASHrange = 131,
  anon_sym_invoke_DASHstatic_SLASHrange = 132,
  anon_sym_invoke_DASHinterface_DASHrange = 133,
  anon_sym_neg_DASHint = 134,
  anon_sym_not_DASHint = 135,
  anon_sym_neg_DASHlong = 136,
  anon_sym_not_DASHlong = 137,
  anon_sym_neg_DASHfloat = 138,
  anon_sym_neg_DASHdouble = 139,
  anon_sym_int_DASHto_DASHlong = 140,
  anon_sym_int_DASHto_DASHfloat = 141,
  anon_sym_int_DASHto_DASHdouble = 142,
  anon_sym_long_DASHto_DASHint = 143,
  anon_sym_long_DASHto_DASHfloat = 144,
  anon_sym_long_DASHto_DASHdouble = 145,
  anon_sym_float_DASHto_DASHint = 146,
  anon_sym_float_DASHto_DASHlong = 147,
  anon_sym_float_DASHto_DASHdouble = 148,
  anon_sym_double_DASHto_DASHint = 149,
  anon_sym_double_DASHto_DASHlong = 150,
  anon_sym_double_DASHto_DASHfloat = 151,
  anon_sym_int_DASHto_DASHbyte = 152,
  anon_sym_int_DASHto_DASHchar = 153,
  anon_sym_int_DASHto_DASHshort = 154,
  anon_sym_add_DASHint = 155,
  anon_sym_sub_DASHint = 156,
  anon_sym_mul_DASHint = 157,
  anon_sym_div_DASHint = 158,
  anon_sym_rem_DASHint = 159,
  anon_sym_and_DASHint = 160,
  anon_sym_or_DASHint = 161,
  anon_sym_xor_DASHint = 162,
  anon_sym_shl_DASHint = 163,
  anon_sym_shr_DASHint = 164,
  anon_sym_ushr_DASHint = 165,
  anon_sym_add_DASHlong = 166,
  anon_sym_sub_DASHlong = 167,
  anon_sym_mul_DASHlong = 168,
  anon_sym_div_DASHlong = 169,
  anon_sym_rem_DASHlong = 170,
  anon_sym_and_DASHlong = 171,
  anon_sym_or_DASHlong = 172,
  anon_sym_xor_DASHlong = 173,
  anon_sym_shl_DASHlong = 174,
  anon_sym_shr_DASHlong = 175,
  anon_sym_ushr_DASHlong = 176,
  anon_sym_add_DASHfloat = 177,
  anon_sym_sub_DASHfloat = 178,
  anon_sym_mul_DASHfloat = 179,
  anon_sym_div_DASHfloat = 180,
  anon_sym_rem_DASHfloat = 181,
  anon_sym_add_DASHdouble = 182,
  anon_sym_sub_DASHdouble = 183,
  anon_sym_mul_DASHdouble = 184,
  anon_sym_div_DASHdouble = 185,
  anon_sym_rem_DASHdouble = 186,
  anon_sym_add_DASHint_SLASH2addr = 187,
  anon_sym_sub_DASHint_SLASH2addr = 188,
  anon_sym_mul_DASHint_SLASH2addr = 189,
  anon_sym_div_DASHint_SLASH2addr = 190,
  anon_sym_rem_DASHint_SLASH2addr = 191,
  anon_sym_and_DASHint_SLASH2addr = 192,
  anon_sym_or_DASHint_SLASH2addr = 193,
  anon_sym_xor_DASHint_SLASH2addr = 194,
  anon_sym_shl_DASHint_SLASH2addr = 195,
  anon_sym_shr_DASHint_SLASH2addr = 196,
  anon_sym_ushr_DASHint_SLASH2addr = 197,
  anon_sym_add_DASHlong_SLASH2addr = 198,
  anon_sym_sub_DASHlong_SLASH2addr = 199,
  anon_sym_mul_DASHlong_SLASH2addr = 200,
  anon_sym_div_DASHlong_SLASH2addr = 201,
  anon_sym_rem_DASHlong_SLASH2addr = 202,
  anon_sym_and_DASHlong_SLASH2addr = 203,
  anon_sym_or_DASHlong_SLASH2addr = 204,
  anon_sym_xor_DASHlong_SLASH2addr = 205,
  anon_sym_shl_DASHlong_SLASH2addr = 206,
  anon_sym_shr_DASHlong_SLASH2addr = 207,
  anon_sym_ushr_DASHlong_SLASH2addr = 208,
  anon_sym_add_DASHfloat_SLASH2addr = 209,
  anon_sym_sub_DASHfloat_SLASH2addr = 210,
  anon_sym_mul_DASHfloat_SLASH2addr = 211,
  anon_sym_div_DASHfloat_SLASH2addr = 212,
  anon_sym_rem_DASHfloat_SLASH2addr = 213,
  anon_sym_add_DASHdouble_SLASH2addr = 214,
  anon_sym_sub_DASHdouble_SLASH2addr = 215,
  anon_sym_mul_DASHdouble_SLASH2addr = 216,
  anon_sym_div_DASHdouble_SLASH2addr = 217,
  anon_sym_rem_DASHdouble_SLASH2addr = 218,
  anon_sym_add_DASHint_SLASHlit16 = 219,
  anon_sym_sub_DASHint_SLASHlit16 = 220,
  anon_sym_mul_DASHint_SLASHlit16 = 221,
  anon_sym_div_DASHint_SLASHlit16 = 222,
  anon_sym_rem_DASHint_SLASHlit16 = 223,
  anon_sym_and_DASHint_SLASHlit16 = 224,
  anon_sym_or_DASHint_SLASHlit16 = 225,
  anon_sym_xor_DASHint_SLASHlit16 = 226,
  anon_sym_add_DASHint_SLASHlit8 = 227,
  anon_sym_sub_DASHint_SLASHlit8 = 228,
  anon_sym_mul_DASHint_SLASHlit8 = 229,
  anon_sym_div_DASHint_SLASHlit8 = 230,
  anon_sym_rem_DASHint_SLASHlit8 = 231,
  anon_sym_and_DASHint_SLASHlit8 = 232,
  anon_sym_or_DASHint_SLASHlit8 = 233,
  anon_sym_xor_DASHint_SLASHlit8 = 234,
  anon_sym_shl_DASHint_SLASHlit8 = 235,
  anon_sym_shr_DASHint_SLASHlit8 = 236,
  anon_sym_ushr_DASHint_SLASHlit8 = 237,
  anon_sym_execute_DASHinline = 238,
  anon_sym_invoke_DASHdirect_DASHempty = 239,
  anon_sym_iget_DASHquick = 240,
  anon_sym_iget_DASHwide_DASHquick = 241,
  anon_sym_iget_DASHobject_DASHquick = 242,
  anon_sym_iput_DASHquick = 243,
  anon_sym_iput_DASHwide_DASHquick = 244,
  anon_sym_iput_DASHobject_DASHquick = 245,
  anon_sym_invoke_DASHvirtual_DASHquick = 246,
  anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange = 247,
  anon_sym_invoke_DASHsuper_DASHquick = 248,
  anon_sym_invoke_DASHsuper_DASHquick_SLASHrange = 249,
  anon_sym_DOTline = 250,
  anon_sym_DOTlocals = 251,
  anon_sym_DOTparam = 252,
  anon_sym_DOTcatch = 253,
  anon_sym_LBRACE = 254,
  anon_sym_DOT_DOT = 255,
  anon_sym_RBRACE = 256,
  anon_sym_DOTcatchall = 257,
  anon_sym_DOTpacked_DASHswitch = 258,
  anon_sym_DOTendpacked_DASHswitch = 259,
  anon_sym_DOTsparse_DASHswitch = 260,
  anon_sym_DASH_GT = 261,
  anon_sym_DOTendsparse_DASHswitch = 262,
  anon_sym_DOTarray_DASHdata = 263,
  anon_sym_DOTendarray_DASHdata = 264,
  sym_class_identifier = 265,
  aux_sym_field_identifier_token1 = 266,
  anon_sym_LTinit_GT_LPAREN = 267,
  aux_sym_method_identifier_token1 = 268,
  anon_sym_RPAREN = 269,
  anon_sym_LBRACK = 270,
  anon_sym_V = 271,
  anon_sym_Z = 272,
  anon_sym_B = 273,
  anon_sym_S = 274,
  anon_sym_C = 275,
  anon_sym_I = 276,
  anon_sym_J = 277,
  anon_sym_F = 278,
  anon_sym_D = 279,
  anon_sym_public = 280,
  anon_sym_private = 281,
  anon_sym_protected = 282,
  anon_sym_static = 283,
  anon_sym_final = 284,
  anon_sym_synchronized = 285,
  anon_sym_volatile = 286,
  anon_sym_transient = 287,
  anon_sym_native = 288,
  anon_sym_interface = 289,
  anon_sym_abstract = 290,
  anon_sym_bridge = 291,
  anon_sym_synthetic = 292,
  sym_comment = 293,
  anon_sym_DOTenum = 294,
  sym_variable = 295,
  sym_parameter = 296,
  aux_sym_number_literal_token1 = 297,
  aux_sym_number_literal_token2 = 298,
  sym_string_literal = 299,
  sym_class_definition = 300,
  sym_class_declaration = 301,
  sym_super_declaration = 302,
  sym_source_declaration = 303,
  sym_implements_declaration = 304,
  sym_field_definition = 305,
  sym_field_declaration = 306,
  sym_method_definition = 307,
  sym_method_declaration = 308,
  sym_annotation_definition = 309,
  sym_annotation_declaration = 310,
  sym_annotation_property = 311,
  sym_annotation_value = 312,
  sym__code_line = 313,
  sym_statement = 314,
  sym_opcode = 315,
  sym__statement_argument = 316,
  sym__declaration = 317,
  sym_line_declaration = 318,
  sym_locals_declaration = 319,
  sym_param_declaration = 320,
  sym_catch_declaration = 321,
  sym_catchall_declaration = 322,
  sym_packed_switch_declaration = 323,
  sym_sparse_switch_declaration = 324,
  sym_array_data_declaration = 325,
  sym__identifier = 326,
  sym_field_identifier = 327,
  sym_method_identifier = 328,
  sym_full_field_identifier = 329,
  sym_full_method_identifier = 330,
  sym__type = 331,
  sym_array_type = 332,
  sym_primitive_type = 333,
  sym_access_modifiers = 334,
  sym_enum_reference = 335,
  sym_list = 336,
  sym_number_literal = 337,
  aux_sym_class_definition_repeat1 = 338,
  aux_sym_class_definition_repeat2 = 339,
  aux_sym_class_definition_repeat3 = 340,
  aux_sym_class_definition_repeat4 = 341,
  aux_sym_method_definition_repeat1 = 342,
  aux_sym_annotation_definition_repeat1 = 343,
  aux_sym_statement_repeat1 = 344,
  aux_sym_packed_switch_declaration_repeat1 = 345,
  aux_sym_sparse_switch_declaration_repeat1 = 346,
  aux_sym_array_data_declaration_repeat1 = 347,
  aux_sym_method_identifier_repeat1 = 348,
  aux_sym_access_modifiers_repeat1 = 349,
  aux_sym_list_repeat1 = 350,
  aux_sym_list_repeat2 = 351,
  aux_sym_list_repeat3 = 352,
  aux_sym_list_repeat4 = 353,
  aux_sym_list_repeat5 = 354,
  alias_sym_code_block = 355,
  alias_sym_parameters = 356,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_nop] = "nop",
  [anon_sym_move] = "move",
  [anon_sym_move_SLASHfrom16] = "move/from16",
  [anon_sym_move_SLASH16] = "move/16",
  [anon_sym_move_DASHwide] = "move-wide",
  [anon_sym_move_DASHwide_SLASHfrom16] = "move-wide/from16",
  [anon_sym_move_DASHwide_SLASH16] = "move-wide/16",
  [anon_sym_move_DASHobject] = "move-object",
  [anon_sym_move_DASHobject_SLASHfrom16] = "move-object/from16",
  [anon_sym_move_DASHobject_SLASH16] = "move-object/16",
  [anon_sym_move_DASHresult] = "move-result",
  [anon_sym_move_DASHresult_DASHwide] = "move-result-wide",
  [anon_sym_move_DASHresult_DASHobject] = "move-result-object",
  [anon_sym_move_DASHexception] = "move-exception",
  [anon_sym_return_DASHvoid] = "return-void",
  [anon_sym_return] = "return",
  [anon_sym_return_DASHwide] = "return-wide",
  [anon_sym_return_DASHobject] = "return-object",
  [anon_sym_const_SLASH4] = "const/4",
  [anon_sym_const_SLASH16] = "const/16",
  [anon_sym_const] = "const",
  [anon_sym_const_SLASHhigh16] = "const/high16",
  [anon_sym_const_DASHwide_SLASH16] = "const-wide/16",
  [anon_sym_const_DASHwide_SLASH32] = "const-wide/32",
  [anon_sym_const_DASHwide] = "const-wide",
  [anon_sym_const_DASHwide_SLASHhigh16] = "const-wide/high16",
  [anon_sym_const_DASHstring] = "const-string",
  [anon_sym_const_DASHstring_DASHjumbo] = "const-string-jumbo",
  [anon_sym_const_DASHclass] = "const-class",
  [anon_sym_monitor_DASHenter] = "monitor-enter",
  [anon_sym_monitor_DASHexit] = "monitor-exit",
  [anon_sym_check_DASHcast] = "check-cast",
  [anon_sym_instance_DASHof] = "instance-of",
  [anon_sym_array_DASHlength] = "array-length",
  [anon_sym_new_DASHinstance] = "new-instance",
  [anon_sym_new_DASHarray] = "new-array",
  [anon_sym_filled_DASHnew_DASHarray] = "filled-new-array",
  [anon_sym_filled_DASHnew_DASHarray_DASHrange] = "filled-new-array-range",
  [anon_sym_fill_DASHarray_DASHdata] = "fill-array-data",
  [anon_sym_throw] = "throw",
  [anon_sym_goto] = "goto",
  [anon_sym_goto_SLASH16] = "goto/16",
  [anon_sym_goto_SLASH32] = "goto/32",
  [anon_sym_packed_DASHswitch] = "packed-switch",
  [anon_sym_sparse_DASHswitch] = "sparse-switch",
  [anon_sym_cmpl_DASHfloat] = "cmpl-float",
  [anon_sym_cmpg_DASHfloat] = "cmpg-float",
  [anon_sym_cmpl_DASHdouble] = "cmpl-double",
  [anon_sym_cmpg_DASHdouble] = "cmpg-double",
  [anon_sym_cmp_DASHlong] = "cmp-long",
  [anon_sym_if_DASHeq] = "if-eq",
  [anon_sym_if_DASHne] = "if-ne",
  [anon_sym_if_DASHlt] = "if-lt",
  [anon_sym_if_DASHge] = "if-ge",
  [anon_sym_if_DASHgt] = "if-gt",
  [anon_sym_if_DASHle] = "if-le",
  [anon_sym_if_DASHeqz] = "if-eqz",
  [anon_sym_if_DASHnez] = "if-nez",
  [anon_sym_if_DASHltz] = "if-ltz",
  [anon_sym_if_DASHgez] = "if-gez",
  [anon_sym_if_DASHgtz] = "if-gtz",
  [anon_sym_if_DASHlez] = "if-lez",
  [anon_sym_aget] = "aget",
  [anon_sym_aget_DASHwide] = "aget-wide",
  [anon_sym_aget_DASHobject] = "aget-object",
  [anon_sym_aget_DASHboolean] = "aget-boolean",
  [anon_sym_aget_DASHbyte] = "aget-byte",
  [anon_sym_aget_DASHchar] = "aget-char",
  [anon_sym_aget_DASHshort] = "aget-short",
  [anon_sym_aput] = "aput",
  [anon_sym_aput_DASHwide] = "aput-wide",
  [anon_sym_aput_DASHobject] = "aput-object",
  [anon_sym_aput_DASHboolean] = "aput-boolean",
  [anon_sym_aput_DASHbyte] = "aput-byte",
  [anon_sym_aput_DASHchar] = "aput-char",
  [anon_sym_aput_DASHshort] = "aput-short",
  [anon_sym_iget] = "iget",
  [anon_sym_iget_DASHwide] = "iget-wide",
  [anon_sym_iget_DASHobject] = "iget-object",
  [anon_sym_iget_DASHboolean] = "iget-boolean",
  [anon_sym_iget_DASHbyte] = "iget-byte",
  [anon_sym_iget_DASHchar] = "iget-char",
  [anon_sym_iget_DASHshort] = "iget-short",
  [anon_sym_iput] = "iput",
  [anon_sym_iput_DASHwide] = "iput-wide",
  [anon_sym_iput_DASHobject] = "iput-object",
  [anon_sym_iput_DASHboolean] = "iput-boolean",
  [anon_sym_iput_DASHbyte] = "iput-byte",
  [anon_sym_iput_DASHchar] = "iput-char",
  [anon_sym_iput_DASHshort] = "iput-short",
  [anon_sym_sget] = "sget",
  [anon_sym_sget_DASHwide] = "sget-wide",
  [anon_sym_sget_DASHobject] = "sget-object",
  [anon_sym_sget_DASHboolean] = "sget-boolean",
  [anon_sym_sget_DASHbyte] = "sget-byte",
  [anon_sym_sget_DASHchar] = "sget-char",
  [anon_sym_sget_DASHshort] = "sget-short",
  [anon_sym_sput] = "sput",
  [anon_sym_sput_DASHwide] = "sput-wide",
  [anon_sym_sput_DASHobject] = "sput-object",
  [anon_sym_sput_DASHboolean] = "sput-boolean",
  [anon_sym_sput_DASHbyte] = "sput-byte",
  [anon_sym_sput_DASHchar] = "sput-char",
  [anon_sym_sput_DASHshort] = "sput-short",
  [anon_sym_invoke_DASHvirtual] = "invoke-virtual",
  [anon_sym_invoke_DASHsuper] = "invoke-super",
  [anon_sym_invoke_DASHdirect] = "invoke-direct",
  [anon_sym_invoke_DASHstatic] = "invoke-static",
  [anon_sym_invoke_DASHinterface] = "invoke-interface",
  [anon_sym_invoke_DASHvirtual_SLASHrange] = "invoke-virtual/range",
  [anon_sym_invoke_DASHsuper_SLASHrange] = "invoke-super/range",
  [anon_sym_invoke_DASHdirect_SLASHrange] = "invoke-direct/range",
  [anon_sym_invoke_DASHstatic_SLASHrange] = "invoke-static/range",
  [anon_sym_invoke_DASHinterface_DASHrange] = "invoke-interface-range",
  [anon_sym_neg_DASHint] = "neg-int",
  [anon_sym_not_DASHint] = "not-int",
  [anon_sym_neg_DASHlong] = "neg-long",
  [anon_sym_not_DASHlong] = "not-long",
  [anon_sym_neg_DASHfloat] = "neg-float",
  [anon_sym_neg_DASHdouble] = "neg-double",
  [anon_sym_int_DASHto_DASHlong] = "int-to-long",
  [anon_sym_int_DASHto_DASHfloat] = "int-to-float",
  [anon_sym_int_DASHto_DASHdouble] = "int-to-double",
  [anon_sym_long_DASHto_DASHint] = "long-to-int",
  [anon_sym_long_DASHto_DASHfloat] = "long-to-float",
  [anon_sym_long_DASHto_DASHdouble] = "long-to-double",
  [anon_sym_float_DASHto_DASHint] = "float-to-int",
  [anon_sym_float_DASHto_DASHlong] = "float-to-long",
  [anon_sym_float_DASHto_DASHdouble] = "float-to-double",
  [anon_sym_double_DASHto_DASHint] = "double-to-int",
  [anon_sym_double_DASHto_DASHlong] = "double-to-long",
  [anon_sym_double_DASHto_DASHfloat] = "double-to-float",
  [anon_sym_int_DASHto_DASHbyte] = "int-to-byte",
  [anon_sym_int_DASHto_DASHchar] = "int-to-char",
  [anon_sym_int_DASHto_DASHshort] = "int-to-short",
  [anon_sym_add_DASHint] = "add-int",
  [anon_sym_sub_DASHint] = "sub-int",
  [anon_sym_mul_DASHint] = "mul-int",
  [anon_sym_div_DASHint] = "div-int",
  [anon_sym_rem_DASHint] = "rem-int",
  [anon_sym_and_DASHint] = "and-int",
  [anon_sym_or_DASHint] = "or-int",
  [anon_sym_xor_DASHint] = "xor-int",
  [anon_sym_shl_DASHint] = "shl-int",
  [anon_sym_shr_DASHint] = "shr-int",
  [anon_sym_ushr_DASHint] = "ushr-int",
  [anon_sym_add_DASHlong] = "add-long",
  [anon_sym_sub_DASHlong] = "sub-long",
  [anon_sym_mul_DASHlong] = "mul-long",
  [anon_sym_div_DASHlong] = "div-long",
  [anon_sym_rem_DASHlong] = "rem-long",
  [anon_sym_and_DASHlong] = "and-long",
  [anon_sym_or_DASHlong] = "or-long",
  [anon_sym_xor_DASHlong] = "xor-long",
  [anon_sym_shl_DASHlong] = "shl-long",
  [anon_sym_shr_DASHlong] = "shr-long",
  [anon_sym_ushr_DASHlong] = "ushr-long",
  [anon_sym_add_DASHfloat] = "add-float",
  [anon_sym_sub_DASHfloat] = "sub-float",
  [anon_sym_mul_DASHfloat] = "mul-float",
  [anon_sym_div_DASHfloat] = "div-float",
  [anon_sym_rem_DASHfloat] = "rem-float",
  [anon_sym_add_DASHdouble] = "add-double",
  [anon_sym_sub_DASHdouble] = "sub-double",
  [anon_sym_mul_DASHdouble] = "mul-double",
  [anon_sym_div_DASHdouble] = "div-double",
  [anon_sym_rem_DASHdouble] = "rem-double",
  [anon_sym_add_DASHint_SLASH2addr] = "add-int/2addr",
  [anon_sym_sub_DASHint_SLASH2addr] = "sub-int/2addr",
  [anon_sym_mul_DASHint_SLASH2addr] = "mul-int/2addr",
  [anon_sym_div_DASHint_SLASH2addr] = "div-int/2addr",
  [anon_sym_rem_DASHint_SLASH2addr] = "rem-int/2addr",
  [anon_sym_and_DASHint_SLASH2addr] = "and-int/2addr",
  [anon_sym_or_DASHint_SLASH2addr] = "or-int/2addr",
  [anon_sym_xor_DASHint_SLASH2addr] = "xor-int/2addr",
  [anon_sym_shl_DASHint_SLASH2addr] = "shl-int/2addr",
  [anon_sym_shr_DASHint_SLASH2addr] = "shr-int/2addr",
  [anon_sym_ushr_DASHint_SLASH2addr] = "ushr-int/2addr",
  [anon_sym_add_DASHlong_SLASH2addr] = "add-long/2addr",
  [anon_sym_sub_DASHlong_SLASH2addr] = "sub-long/2addr",
  [anon_sym_mul_DASHlong_SLASH2addr] = "mul-long/2addr",
  [anon_sym_div_DASHlong_SLASH2addr] = "div-long/2addr",
  [anon_sym_rem_DASHlong_SLASH2addr] = "rem-long/2addr",
  [anon_sym_and_DASHlong_SLASH2addr] = "and-long/2addr",
  [anon_sym_or_DASHlong_SLASH2addr] = "or-long/2addr",
  [anon_sym_xor_DASHlong_SLASH2addr] = "xor-long/2addr",
  [anon_sym_shl_DASHlong_SLASH2addr] = "shl-long/2addr",
  [anon_sym_shr_DASHlong_SLASH2addr] = "shr-long/2addr",
  [anon_sym_ushr_DASHlong_SLASH2addr] = "ushr-long/2addr",
  [anon_sym_add_DASHfloat_SLASH2addr] = "add-float/2addr",
  [anon_sym_sub_DASHfloat_SLASH2addr] = "sub-float/2addr",
  [anon_sym_mul_DASHfloat_SLASH2addr] = "mul-float/2addr",
  [anon_sym_div_DASHfloat_SLASH2addr] = "div-float/2addr",
  [anon_sym_rem_DASHfloat_SLASH2addr] = "rem-float/2addr",
  [anon_sym_add_DASHdouble_SLASH2addr] = "add-double/2addr",
  [anon_sym_sub_DASHdouble_SLASH2addr] = "sub-double/2addr",
  [anon_sym_mul_DASHdouble_SLASH2addr] = "mul-double/2addr",
  [anon_sym_div_DASHdouble_SLASH2addr] = "div-double/2addr",
  [anon_sym_rem_DASHdouble_SLASH2addr] = "rem-double/2addr",
  [anon_sym_add_DASHint_SLASHlit16] = "add-int/lit16",
  [anon_sym_sub_DASHint_SLASHlit16] = "sub-int/lit16",
  [anon_sym_mul_DASHint_SLASHlit16] = "mul-int/lit16",
  [anon_sym_div_DASHint_SLASHlit16] = "div-int/lit16",
  [anon_sym_rem_DASHint_SLASHlit16] = "rem-int/lit16",
  [anon_sym_and_DASHint_SLASHlit16] = "and-int/lit16",
  [anon_sym_or_DASHint_SLASHlit16] = "or-int/lit16",
  [anon_sym_xor_DASHint_SLASHlit16] = "xor-int/lit16",
  [anon_sym_add_DASHint_SLASHlit8] = "add-int/lit8",
  [anon_sym_sub_DASHint_SLASHlit8] = "sub-int/lit8",
  [anon_sym_mul_DASHint_SLASHlit8] = "mul-int/lit8",
  [anon_sym_div_DASHint_SLASHlit8] = "div-int/lit8",
  [anon_sym_rem_DASHint_SLASHlit8] = "rem-int/lit8",
  [anon_sym_and_DASHint_SLASHlit8] = "and-int/lit8",
  [anon_sym_or_DASHint_SLASHlit8] = "or-int/lit8",
  [anon_sym_xor_DASHint_SLASHlit8] = "xor-int/lit8",
  [anon_sym_shl_DASHint_SLASHlit8] = "shl-int/lit8",
  [anon_sym_shr_DASHint_SLASHlit8] = "shr-int/lit8",
  [anon_sym_ushr_DASHint_SLASHlit8] = "ushr-int/lit8",
  [anon_sym_execute_DASHinline] = "execute-inline",
  [anon_sym_invoke_DASHdirect_DASHempty] = "invoke-direct-empty",
  [anon_sym_iget_DASHquick] = "iget-quick",
  [anon_sym_iget_DASHwide_DASHquick] = "iget-wide-quick",
  [anon_sym_iget_DASHobject_DASHquick] = "iget-object-quick",
  [anon_sym_iput_DASHquick] = "iput-quick",
  [anon_sym_iput_DASHwide_DASHquick] = "iput-wide-quick",
  [anon_sym_iput_DASHobject_DASHquick] = "iput-object-quick",
  [anon_sym_invoke_DASHvirtual_DASHquick] = "invoke-virtual-quick",
  [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = "invoke-virtual-quick/range",
  [anon_sym_invoke_DASHsuper_DASHquick] = "invoke-super-quick",
  [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = "invoke-super-quick/range",
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
  [anon_sym_LTinit_GT_LPAREN] = "<init>(",
  [aux_sym_method_identifier_token1] = "method_identifier_token1",
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
  [sym_variable] = "variable",
  [sym_parameter] = "parameter",
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
  [sym_opcode] = "opcode",
  [sym__statement_argument] = "_statement_argument",
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
  [sym_number_literal] = "number_literal",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_class_definition_repeat3] = "class_definition_repeat3",
  [aux_sym_class_definition_repeat4] = "class_definition_repeat4",
  [aux_sym_method_definition_repeat1] = "method_definition_repeat1",
  [aux_sym_annotation_definition_repeat1] = "annotation_definition_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_packed_switch_declaration_repeat1] = "packed_switch_declaration_repeat1",
  [aux_sym_sparse_switch_declaration_repeat1] = "sparse_switch_declaration_repeat1",
  [aux_sym_array_data_declaration_repeat1] = "array_data_declaration_repeat1",
  [aux_sym_method_identifier_repeat1] = "method_identifier_repeat1",
  [aux_sym_access_modifiers_repeat1] = "access_modifiers_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym_list_repeat3] = "list_repeat3",
  [aux_sym_list_repeat4] = "list_repeat4",
  [aux_sym_list_repeat5] = "list_repeat5",
  [alias_sym_code_block] = "code_block",
  [alias_sym_parameters] = "parameters",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_move_SLASHfrom16] = anon_sym_move_SLASHfrom16,
  [anon_sym_move_SLASH16] = anon_sym_move_SLASH16,
  [anon_sym_move_DASHwide] = anon_sym_move_DASHwide,
  [anon_sym_move_DASHwide_SLASHfrom16] = anon_sym_move_DASHwide_SLASHfrom16,
  [anon_sym_move_DASHwide_SLASH16] = anon_sym_move_DASHwide_SLASH16,
  [anon_sym_move_DASHobject] = anon_sym_move_DASHobject,
  [anon_sym_move_DASHobject_SLASHfrom16] = anon_sym_move_DASHobject_SLASHfrom16,
  [anon_sym_move_DASHobject_SLASH16] = anon_sym_move_DASHobject_SLASH16,
  [anon_sym_move_DASHresult] = anon_sym_move_DASHresult,
  [anon_sym_move_DASHresult_DASHwide] = anon_sym_move_DASHresult_DASHwide,
  [anon_sym_move_DASHresult_DASHobject] = anon_sym_move_DASHresult_DASHobject,
  [anon_sym_move_DASHexception] = anon_sym_move_DASHexception,
  [anon_sym_return_DASHvoid] = anon_sym_return_DASHvoid,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_return_DASHwide] = anon_sym_return_DASHwide,
  [anon_sym_return_DASHobject] = anon_sym_return_DASHobject,
  [anon_sym_const_SLASH4] = anon_sym_const_SLASH4,
  [anon_sym_const_SLASH16] = anon_sym_const_SLASH16,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_const_SLASHhigh16] = anon_sym_const_SLASHhigh16,
  [anon_sym_const_DASHwide_SLASH16] = anon_sym_const_DASHwide_SLASH16,
  [anon_sym_const_DASHwide_SLASH32] = anon_sym_const_DASHwide_SLASH32,
  [anon_sym_const_DASHwide] = anon_sym_const_DASHwide,
  [anon_sym_const_DASHwide_SLASHhigh16] = anon_sym_const_DASHwide_SLASHhigh16,
  [anon_sym_const_DASHstring] = anon_sym_const_DASHstring,
  [anon_sym_const_DASHstring_DASHjumbo] = anon_sym_const_DASHstring_DASHjumbo,
  [anon_sym_const_DASHclass] = anon_sym_const_DASHclass,
  [anon_sym_monitor_DASHenter] = anon_sym_monitor_DASHenter,
  [anon_sym_monitor_DASHexit] = anon_sym_monitor_DASHexit,
  [anon_sym_check_DASHcast] = anon_sym_check_DASHcast,
  [anon_sym_instance_DASHof] = anon_sym_instance_DASHof,
  [anon_sym_array_DASHlength] = anon_sym_array_DASHlength,
  [anon_sym_new_DASHinstance] = anon_sym_new_DASHinstance,
  [anon_sym_new_DASHarray] = anon_sym_new_DASHarray,
  [anon_sym_filled_DASHnew_DASHarray] = anon_sym_filled_DASHnew_DASHarray,
  [anon_sym_filled_DASHnew_DASHarray_DASHrange] = anon_sym_filled_DASHnew_DASHarray_DASHrange,
  [anon_sym_fill_DASHarray_DASHdata] = anon_sym_fill_DASHarray_DASHdata,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_goto_SLASH16] = anon_sym_goto_SLASH16,
  [anon_sym_goto_SLASH32] = anon_sym_goto_SLASH32,
  [anon_sym_packed_DASHswitch] = anon_sym_packed_DASHswitch,
  [anon_sym_sparse_DASHswitch] = anon_sym_sparse_DASHswitch,
  [anon_sym_cmpl_DASHfloat] = anon_sym_cmpl_DASHfloat,
  [anon_sym_cmpg_DASHfloat] = anon_sym_cmpg_DASHfloat,
  [anon_sym_cmpl_DASHdouble] = anon_sym_cmpl_DASHdouble,
  [anon_sym_cmpg_DASHdouble] = anon_sym_cmpg_DASHdouble,
  [anon_sym_cmp_DASHlong] = anon_sym_cmp_DASHlong,
  [anon_sym_if_DASHeq] = anon_sym_if_DASHeq,
  [anon_sym_if_DASHne] = anon_sym_if_DASHne,
  [anon_sym_if_DASHlt] = anon_sym_if_DASHlt,
  [anon_sym_if_DASHge] = anon_sym_if_DASHge,
  [anon_sym_if_DASHgt] = anon_sym_if_DASHgt,
  [anon_sym_if_DASHle] = anon_sym_if_DASHle,
  [anon_sym_if_DASHeqz] = anon_sym_if_DASHeqz,
  [anon_sym_if_DASHnez] = anon_sym_if_DASHnez,
  [anon_sym_if_DASHltz] = anon_sym_if_DASHltz,
  [anon_sym_if_DASHgez] = anon_sym_if_DASHgez,
  [anon_sym_if_DASHgtz] = anon_sym_if_DASHgtz,
  [anon_sym_if_DASHlez] = anon_sym_if_DASHlez,
  [anon_sym_aget] = anon_sym_aget,
  [anon_sym_aget_DASHwide] = anon_sym_aget_DASHwide,
  [anon_sym_aget_DASHobject] = anon_sym_aget_DASHobject,
  [anon_sym_aget_DASHboolean] = anon_sym_aget_DASHboolean,
  [anon_sym_aget_DASHbyte] = anon_sym_aget_DASHbyte,
  [anon_sym_aget_DASHchar] = anon_sym_aget_DASHchar,
  [anon_sym_aget_DASHshort] = anon_sym_aget_DASHshort,
  [anon_sym_aput] = anon_sym_aput,
  [anon_sym_aput_DASHwide] = anon_sym_aput_DASHwide,
  [anon_sym_aput_DASHobject] = anon_sym_aput_DASHobject,
  [anon_sym_aput_DASHboolean] = anon_sym_aput_DASHboolean,
  [anon_sym_aput_DASHbyte] = anon_sym_aput_DASHbyte,
  [anon_sym_aput_DASHchar] = anon_sym_aput_DASHchar,
  [anon_sym_aput_DASHshort] = anon_sym_aput_DASHshort,
  [anon_sym_iget] = anon_sym_iget,
  [anon_sym_iget_DASHwide] = anon_sym_iget_DASHwide,
  [anon_sym_iget_DASHobject] = anon_sym_iget_DASHobject,
  [anon_sym_iget_DASHboolean] = anon_sym_iget_DASHboolean,
  [anon_sym_iget_DASHbyte] = anon_sym_iget_DASHbyte,
  [anon_sym_iget_DASHchar] = anon_sym_iget_DASHchar,
  [anon_sym_iget_DASHshort] = anon_sym_iget_DASHshort,
  [anon_sym_iput] = anon_sym_iput,
  [anon_sym_iput_DASHwide] = anon_sym_iput_DASHwide,
  [anon_sym_iput_DASHobject] = anon_sym_iput_DASHobject,
  [anon_sym_iput_DASHboolean] = anon_sym_iput_DASHboolean,
  [anon_sym_iput_DASHbyte] = anon_sym_iput_DASHbyte,
  [anon_sym_iput_DASHchar] = anon_sym_iput_DASHchar,
  [anon_sym_iput_DASHshort] = anon_sym_iput_DASHshort,
  [anon_sym_sget] = anon_sym_sget,
  [anon_sym_sget_DASHwide] = anon_sym_sget_DASHwide,
  [anon_sym_sget_DASHobject] = anon_sym_sget_DASHobject,
  [anon_sym_sget_DASHboolean] = anon_sym_sget_DASHboolean,
  [anon_sym_sget_DASHbyte] = anon_sym_sget_DASHbyte,
  [anon_sym_sget_DASHchar] = anon_sym_sget_DASHchar,
  [anon_sym_sget_DASHshort] = anon_sym_sget_DASHshort,
  [anon_sym_sput] = anon_sym_sput,
  [anon_sym_sput_DASHwide] = anon_sym_sput_DASHwide,
  [anon_sym_sput_DASHobject] = anon_sym_sput_DASHobject,
  [anon_sym_sput_DASHboolean] = anon_sym_sput_DASHboolean,
  [anon_sym_sput_DASHbyte] = anon_sym_sput_DASHbyte,
  [anon_sym_sput_DASHchar] = anon_sym_sput_DASHchar,
  [anon_sym_sput_DASHshort] = anon_sym_sput_DASHshort,
  [anon_sym_invoke_DASHvirtual] = anon_sym_invoke_DASHvirtual,
  [anon_sym_invoke_DASHsuper] = anon_sym_invoke_DASHsuper,
  [anon_sym_invoke_DASHdirect] = anon_sym_invoke_DASHdirect,
  [anon_sym_invoke_DASHstatic] = anon_sym_invoke_DASHstatic,
  [anon_sym_invoke_DASHinterface] = anon_sym_invoke_DASHinterface,
  [anon_sym_invoke_DASHvirtual_SLASHrange] = anon_sym_invoke_DASHvirtual_SLASHrange,
  [anon_sym_invoke_DASHsuper_SLASHrange] = anon_sym_invoke_DASHsuper_SLASHrange,
  [anon_sym_invoke_DASHdirect_SLASHrange] = anon_sym_invoke_DASHdirect_SLASHrange,
  [anon_sym_invoke_DASHstatic_SLASHrange] = anon_sym_invoke_DASHstatic_SLASHrange,
  [anon_sym_invoke_DASHinterface_DASHrange] = anon_sym_invoke_DASHinterface_DASHrange,
  [anon_sym_neg_DASHint] = anon_sym_neg_DASHint,
  [anon_sym_not_DASHint] = anon_sym_not_DASHint,
  [anon_sym_neg_DASHlong] = anon_sym_neg_DASHlong,
  [anon_sym_not_DASHlong] = anon_sym_not_DASHlong,
  [anon_sym_neg_DASHfloat] = anon_sym_neg_DASHfloat,
  [anon_sym_neg_DASHdouble] = anon_sym_neg_DASHdouble,
  [anon_sym_int_DASHto_DASHlong] = anon_sym_int_DASHto_DASHlong,
  [anon_sym_int_DASHto_DASHfloat] = anon_sym_int_DASHto_DASHfloat,
  [anon_sym_int_DASHto_DASHdouble] = anon_sym_int_DASHto_DASHdouble,
  [anon_sym_long_DASHto_DASHint] = anon_sym_long_DASHto_DASHint,
  [anon_sym_long_DASHto_DASHfloat] = anon_sym_long_DASHto_DASHfloat,
  [anon_sym_long_DASHto_DASHdouble] = anon_sym_long_DASHto_DASHdouble,
  [anon_sym_float_DASHto_DASHint] = anon_sym_float_DASHto_DASHint,
  [anon_sym_float_DASHto_DASHlong] = anon_sym_float_DASHto_DASHlong,
  [anon_sym_float_DASHto_DASHdouble] = anon_sym_float_DASHto_DASHdouble,
  [anon_sym_double_DASHto_DASHint] = anon_sym_double_DASHto_DASHint,
  [anon_sym_double_DASHto_DASHlong] = anon_sym_double_DASHto_DASHlong,
  [anon_sym_double_DASHto_DASHfloat] = anon_sym_double_DASHto_DASHfloat,
  [anon_sym_int_DASHto_DASHbyte] = anon_sym_int_DASHto_DASHbyte,
  [anon_sym_int_DASHto_DASHchar] = anon_sym_int_DASHto_DASHchar,
  [anon_sym_int_DASHto_DASHshort] = anon_sym_int_DASHto_DASHshort,
  [anon_sym_add_DASHint] = anon_sym_add_DASHint,
  [anon_sym_sub_DASHint] = anon_sym_sub_DASHint,
  [anon_sym_mul_DASHint] = anon_sym_mul_DASHint,
  [anon_sym_div_DASHint] = anon_sym_div_DASHint,
  [anon_sym_rem_DASHint] = anon_sym_rem_DASHint,
  [anon_sym_and_DASHint] = anon_sym_and_DASHint,
  [anon_sym_or_DASHint] = anon_sym_or_DASHint,
  [anon_sym_xor_DASHint] = anon_sym_xor_DASHint,
  [anon_sym_shl_DASHint] = anon_sym_shl_DASHint,
  [anon_sym_shr_DASHint] = anon_sym_shr_DASHint,
  [anon_sym_ushr_DASHint] = anon_sym_ushr_DASHint,
  [anon_sym_add_DASHlong] = anon_sym_add_DASHlong,
  [anon_sym_sub_DASHlong] = anon_sym_sub_DASHlong,
  [anon_sym_mul_DASHlong] = anon_sym_mul_DASHlong,
  [anon_sym_div_DASHlong] = anon_sym_div_DASHlong,
  [anon_sym_rem_DASHlong] = anon_sym_rem_DASHlong,
  [anon_sym_and_DASHlong] = anon_sym_and_DASHlong,
  [anon_sym_or_DASHlong] = anon_sym_or_DASHlong,
  [anon_sym_xor_DASHlong] = anon_sym_xor_DASHlong,
  [anon_sym_shl_DASHlong] = anon_sym_shl_DASHlong,
  [anon_sym_shr_DASHlong] = anon_sym_shr_DASHlong,
  [anon_sym_ushr_DASHlong] = anon_sym_ushr_DASHlong,
  [anon_sym_add_DASHfloat] = anon_sym_add_DASHfloat,
  [anon_sym_sub_DASHfloat] = anon_sym_sub_DASHfloat,
  [anon_sym_mul_DASHfloat] = anon_sym_mul_DASHfloat,
  [anon_sym_div_DASHfloat] = anon_sym_div_DASHfloat,
  [anon_sym_rem_DASHfloat] = anon_sym_rem_DASHfloat,
  [anon_sym_add_DASHdouble] = anon_sym_add_DASHdouble,
  [anon_sym_sub_DASHdouble] = anon_sym_sub_DASHdouble,
  [anon_sym_mul_DASHdouble] = anon_sym_mul_DASHdouble,
  [anon_sym_div_DASHdouble] = anon_sym_div_DASHdouble,
  [anon_sym_rem_DASHdouble] = anon_sym_rem_DASHdouble,
  [anon_sym_add_DASHint_SLASH2addr] = anon_sym_add_DASHint_SLASH2addr,
  [anon_sym_sub_DASHint_SLASH2addr] = anon_sym_sub_DASHint_SLASH2addr,
  [anon_sym_mul_DASHint_SLASH2addr] = anon_sym_mul_DASHint_SLASH2addr,
  [anon_sym_div_DASHint_SLASH2addr] = anon_sym_div_DASHint_SLASH2addr,
  [anon_sym_rem_DASHint_SLASH2addr] = anon_sym_rem_DASHint_SLASH2addr,
  [anon_sym_and_DASHint_SLASH2addr] = anon_sym_and_DASHint_SLASH2addr,
  [anon_sym_or_DASHint_SLASH2addr] = anon_sym_or_DASHint_SLASH2addr,
  [anon_sym_xor_DASHint_SLASH2addr] = anon_sym_xor_DASHint_SLASH2addr,
  [anon_sym_shl_DASHint_SLASH2addr] = anon_sym_shl_DASHint_SLASH2addr,
  [anon_sym_shr_DASHint_SLASH2addr] = anon_sym_shr_DASHint_SLASH2addr,
  [anon_sym_ushr_DASHint_SLASH2addr] = anon_sym_ushr_DASHint_SLASH2addr,
  [anon_sym_add_DASHlong_SLASH2addr] = anon_sym_add_DASHlong_SLASH2addr,
  [anon_sym_sub_DASHlong_SLASH2addr] = anon_sym_sub_DASHlong_SLASH2addr,
  [anon_sym_mul_DASHlong_SLASH2addr] = anon_sym_mul_DASHlong_SLASH2addr,
  [anon_sym_div_DASHlong_SLASH2addr] = anon_sym_div_DASHlong_SLASH2addr,
  [anon_sym_rem_DASHlong_SLASH2addr] = anon_sym_rem_DASHlong_SLASH2addr,
  [anon_sym_and_DASHlong_SLASH2addr] = anon_sym_and_DASHlong_SLASH2addr,
  [anon_sym_or_DASHlong_SLASH2addr] = anon_sym_or_DASHlong_SLASH2addr,
  [anon_sym_xor_DASHlong_SLASH2addr] = anon_sym_xor_DASHlong_SLASH2addr,
  [anon_sym_shl_DASHlong_SLASH2addr] = anon_sym_shl_DASHlong_SLASH2addr,
  [anon_sym_shr_DASHlong_SLASH2addr] = anon_sym_shr_DASHlong_SLASH2addr,
  [anon_sym_ushr_DASHlong_SLASH2addr] = anon_sym_ushr_DASHlong_SLASH2addr,
  [anon_sym_add_DASHfloat_SLASH2addr] = anon_sym_add_DASHfloat_SLASH2addr,
  [anon_sym_sub_DASHfloat_SLASH2addr] = anon_sym_sub_DASHfloat_SLASH2addr,
  [anon_sym_mul_DASHfloat_SLASH2addr] = anon_sym_mul_DASHfloat_SLASH2addr,
  [anon_sym_div_DASHfloat_SLASH2addr] = anon_sym_div_DASHfloat_SLASH2addr,
  [anon_sym_rem_DASHfloat_SLASH2addr] = anon_sym_rem_DASHfloat_SLASH2addr,
  [anon_sym_add_DASHdouble_SLASH2addr] = anon_sym_add_DASHdouble_SLASH2addr,
  [anon_sym_sub_DASHdouble_SLASH2addr] = anon_sym_sub_DASHdouble_SLASH2addr,
  [anon_sym_mul_DASHdouble_SLASH2addr] = anon_sym_mul_DASHdouble_SLASH2addr,
  [anon_sym_div_DASHdouble_SLASH2addr] = anon_sym_div_DASHdouble_SLASH2addr,
  [anon_sym_rem_DASHdouble_SLASH2addr] = anon_sym_rem_DASHdouble_SLASH2addr,
  [anon_sym_add_DASHint_SLASHlit16] = anon_sym_add_DASHint_SLASHlit16,
  [anon_sym_sub_DASHint_SLASHlit16] = anon_sym_sub_DASHint_SLASHlit16,
  [anon_sym_mul_DASHint_SLASHlit16] = anon_sym_mul_DASHint_SLASHlit16,
  [anon_sym_div_DASHint_SLASHlit16] = anon_sym_div_DASHint_SLASHlit16,
  [anon_sym_rem_DASHint_SLASHlit16] = anon_sym_rem_DASHint_SLASHlit16,
  [anon_sym_and_DASHint_SLASHlit16] = anon_sym_and_DASHint_SLASHlit16,
  [anon_sym_or_DASHint_SLASHlit16] = anon_sym_or_DASHint_SLASHlit16,
  [anon_sym_xor_DASHint_SLASHlit16] = anon_sym_xor_DASHint_SLASHlit16,
  [anon_sym_add_DASHint_SLASHlit8] = anon_sym_add_DASHint_SLASHlit8,
  [anon_sym_sub_DASHint_SLASHlit8] = anon_sym_sub_DASHint_SLASHlit8,
  [anon_sym_mul_DASHint_SLASHlit8] = anon_sym_mul_DASHint_SLASHlit8,
  [anon_sym_div_DASHint_SLASHlit8] = anon_sym_div_DASHint_SLASHlit8,
  [anon_sym_rem_DASHint_SLASHlit8] = anon_sym_rem_DASHint_SLASHlit8,
  [anon_sym_and_DASHint_SLASHlit8] = anon_sym_and_DASHint_SLASHlit8,
  [anon_sym_or_DASHint_SLASHlit8] = anon_sym_or_DASHint_SLASHlit8,
  [anon_sym_xor_DASHint_SLASHlit8] = anon_sym_xor_DASHint_SLASHlit8,
  [anon_sym_shl_DASHint_SLASHlit8] = anon_sym_shl_DASHint_SLASHlit8,
  [anon_sym_shr_DASHint_SLASHlit8] = anon_sym_shr_DASHint_SLASHlit8,
  [anon_sym_ushr_DASHint_SLASHlit8] = anon_sym_ushr_DASHint_SLASHlit8,
  [anon_sym_execute_DASHinline] = anon_sym_execute_DASHinline,
  [anon_sym_invoke_DASHdirect_DASHempty] = anon_sym_invoke_DASHdirect_DASHempty,
  [anon_sym_iget_DASHquick] = anon_sym_iget_DASHquick,
  [anon_sym_iget_DASHwide_DASHquick] = anon_sym_iget_DASHwide_DASHquick,
  [anon_sym_iget_DASHobject_DASHquick] = anon_sym_iget_DASHobject_DASHquick,
  [anon_sym_iput_DASHquick] = anon_sym_iput_DASHquick,
  [anon_sym_iput_DASHwide_DASHquick] = anon_sym_iput_DASHwide_DASHquick,
  [anon_sym_iput_DASHobject_DASHquick] = anon_sym_iput_DASHobject_DASHquick,
  [anon_sym_invoke_DASHvirtual_DASHquick] = anon_sym_invoke_DASHvirtual_DASHquick,
  [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange,
  [anon_sym_invoke_DASHsuper_DASHquick] = anon_sym_invoke_DASHsuper_DASHquick,
  [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = anon_sym_invoke_DASHsuper_DASHquick_SLASHrange,
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
  [anon_sym_LTinit_GT_LPAREN] = anon_sym_LTinit_GT_LPAREN,
  [aux_sym_method_identifier_token1] = aux_sym_method_identifier_token1,
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
  [sym_variable] = sym_variable,
  [sym_parameter] = sym_parameter,
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
  [sym_opcode] = sym_opcode,
  [sym__statement_argument] = sym__statement_argument,
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
  [sym_number_literal] = sym_number_literal,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_class_definition_repeat3] = aux_sym_class_definition_repeat3,
  [aux_sym_class_definition_repeat4] = aux_sym_class_definition_repeat4,
  [aux_sym_method_definition_repeat1] = aux_sym_method_definition_repeat1,
  [aux_sym_annotation_definition_repeat1] = aux_sym_annotation_definition_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_packed_switch_declaration_repeat1] = aux_sym_packed_switch_declaration_repeat1,
  [aux_sym_sparse_switch_declaration_repeat1] = aux_sym_sparse_switch_declaration_repeat1,
  [aux_sym_array_data_declaration_repeat1] = aux_sym_array_data_declaration_repeat1,
  [aux_sym_method_identifier_repeat1] = aux_sym_method_identifier_repeat1,
  [aux_sym_access_modifiers_repeat1] = aux_sym_access_modifiers_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
  [aux_sym_list_repeat3] = aux_sym_list_repeat3,
  [aux_sym_list_repeat4] = aux_sym_list_repeat4,
  [aux_sym_list_repeat5] = aux_sym_list_repeat5,
  [alias_sym_code_block] = alias_sym_code_block,
  [alias_sym_parameters] = alias_sym_parameters,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_SLASHfrom16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_SLASH16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHwide_SLASHfrom16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHwide_SLASH16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHobject_SLASHfrom16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHobject_SLASH16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHresult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHresult_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHresult_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_DASHexception] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return_DASHvoid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_SLASH4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_SLASH16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_SLASHhigh16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHwide_SLASH16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHwide_SLASH32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHwide_SLASHhigh16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHstring_DASHjumbo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor_DASHenter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor_DASHexit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new_DASHinstance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new_DASHarray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filled_DASHnew_DASHarray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filled_DASHnew_DASHarray_DASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill_DASHarray_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto_SLASH16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto_SLASH32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packed_DASHswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sparse_DASHswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpl_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpg_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpl_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpg_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHeqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHlez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget_DASHboolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aget_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput_DASHboolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aput_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHboolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHboolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget_DASHboolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sget_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput_DASHwide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput_DASHobject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput_DASHboolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sput_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHvirtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHsuper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHdirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHstatic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHinterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHvirtual_SLASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHsuper_SLASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHdirect_SLASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHstatic_SLASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHinterface_DASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long_DASHto_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long_DASHto_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long_DASHto_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float_DASHto_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float_DASHto_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float_DASHto_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double_DASHto_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double_DASHto_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double_DASHto_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushr_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushr_DASHlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushr_DASHint_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushr_DASHlong_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHfloat_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHfloat_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHfloat_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHfloat_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHfloat_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHdouble_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHdouble_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHdouble_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHdouble_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHdouble_SLASH2addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor_DASHint_SLASHlit16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushr_DASHint_SLASHlit8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execute_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHdirect_DASHempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHwide_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iget_DASHobject_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHwide_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iput_DASHobject_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHvirtual_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHsuper_DASHquick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LTinit_GT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_identifier_token1] = {
    .visible = false,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
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
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_argument] = {
    .visible = false,
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
  [aux_sym_statement_repeat1] = {
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
  [aux_sym_list_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat5] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameters] = {
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_element_type, 1},
  [3] =
    {field_return_type, 2},
  [4] =
    {field_parameters, 1},
    {field_return_type, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_code_block,
  },
  [5] = {
    [1] = alias_sym_parameters,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_method_definition_repeat1, 2,
    aux_sym_method_definition_repeat1,
    alias_sym_code_block,
  aux_sym_method_identifier_repeat1, 2,
    aux_sym_method_identifier_repeat1,
    alias_sym_parameters,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1413);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == ')') ADVANCE(1685);
      if (lookahead == ',') ADVANCE(1434);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '0') ADVANCE(1745);
      if (lookahead == ':') ADVANCE(1410);
      if (lookahead == '<') ADVANCE(787);
      if (lookahead == '=') ADVANCE(1427);
      if (lookahead == 'B') ADVANCE(1689);
      if (lookahead == 'C') ADVANCE(1691);
      if (lookahead == 'D') ADVANCE(1695);
      if (lookahead == 'F') ADVANCE(1694);
      if (lookahead == 'I') ADVANCE(1692);
      if (lookahead == 'J') ADVANCE(1693);
      if (lookahead == 'L') ADVANCE(1411);
      if (lookahead == 'S') ADVANCE(1690);
      if (lookahead == 'V') ADVANCE(1687);
      if (lookahead == 'Z') ADVANCE(1688);
      if (lookahead == '[') ADVANCE(1686);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'b') ADVANCE(1172);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(1398);
      if (lookahead == 'f') ADVANCE(785);
      if (lookahead == 'g') ADVANCE(1024);
      if (lookahead == 'i') ADVANCE(715);
      if (lookahead == 'l') ADVANCE(1032);
      if (lookahead == 'm') ADVANCE(1025);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == 'u') ADVANCE(1215);
      if (lookahead == 'v') ADVANCE(1029);
      if (lookahead == 'x') ADVANCE(1093);
      if (lookahead == '{') ADVANCE(1670);
      if (lookahead == '}') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1746);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1435);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == ',') ADVANCE(1434);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '0') ADVANCE(1743);
      if (lookahead == '<') ADVANCE(787);
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(1670);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(417);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(419);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == ',') ADVANCE(1434);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '0') ADVANCE(1743);
      if (lookahead == '<') ADVANCE(787);
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(1670);
      if (lookahead == '}') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == '.') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1431);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == '<') ADVANCE(787);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(1683);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == ';') ADVANCE(1681);
      if (lookahead == '$' ||
          lookahead == '/') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '$' ||
          lookahead == '/') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1739);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1737);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'b') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'b') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 35:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'd') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'd') ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'd') ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(1730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(1721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(1715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(1724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 44:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 45:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'f') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'g') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 51:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'h') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'h') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'l') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 65:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'l') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 87:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(1718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 92:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'u') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'v') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'v') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == 'z') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(514);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(426);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(719);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(798);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(911);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(1220);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(1030);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(994);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(806);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(1315);
      if (lookahead == 'e') ADVANCE(1128);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(894);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(1342);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(1346);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(1348);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(826);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(836);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(842);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(845);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(846);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(847);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(1231);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(1232);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(1233);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(1234);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(1235);
      END_STATE();
    case 152:
      if (lookahead == '.') ADVANCE(1671);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead == 'f') ADVANCE(793);
      if (lookahead == 'i') ADVANCE(935);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(664);
      if (lookahead == 'p') ADVANCE(313);
      if (lookahead == 's') ADVANCE(1031);
      END_STATE();
    case 153:
      if (lookahead == '0') ADVANCE(1745);
      if (lookahead == '>') ADVANCE(1677);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1746);
      END_STATE();
    case 154:
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '3') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == '1') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(1179);
      END_STATE();
    case 156:
      if (lookahead == '1') ADVANCE(209);
      if (lookahead == '4') ADVANCE(1454);
      if (lookahead == 'h') ADVANCE(803);
      END_STATE();
    case 157:
      if (lookahead == '1') ADVANCE(210);
      END_STATE();
    case 158:
      if (lookahead == '1') ADVANCE(211);
      END_STATE();
    case 159:
      if (lookahead == '1') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(1192);
      END_STATE();
    case 160:
      if (lookahead == '1') ADVANCE(213);
      if (lookahead == '8') ADVANCE(1649);
      END_STATE();
    case 161:
      if (lookahead == '1') ADVANCE(214);
      if (lookahead == '8') ADVANCE(1643);
      END_STATE();
    case 162:
      if (lookahead == '1') ADVANCE(215);
      if (lookahead == '8') ADVANCE(1648);
      END_STATE();
    case 163:
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '3') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(852);
      END_STATE();
    case 164:
      if (lookahead == '1') ADVANCE(217);
      if (lookahead == '8') ADVANCE(1646);
      END_STATE();
    case 165:
      if (lookahead == '1') ADVANCE(218);
      if (lookahead == '8') ADVANCE(1645);
      END_STATE();
    case 166:
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '8') ADVANCE(1647);
      END_STATE();
    case 167:
      if (lookahead == '1') ADVANCE(220);
      if (lookahead == '8') ADVANCE(1644);
      END_STATE();
    case 168:
      if (lookahead == '1') ADVANCE(221);
      if (lookahead == '8') ADVANCE(1650);
      END_STATE();
    case 169:
      if (lookahead == '1') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(1199);
      END_STATE();
    case 170:
      if (lookahead == '1') ADVANCE(223);
      END_STATE();
    case 171:
      if (lookahead == '1') ADVANCE(224);
      END_STATE();
    case 172:
      if (lookahead == '1') ADVANCE(225);
      END_STATE();
    case 173:
      if (lookahead == '2') ADVANCE(1478);
      END_STATE();
    case 174:
      if (lookahead == '2') ADVANCE(1459);
      END_STATE();
    case 175:
      if (lookahead == '2') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(808);
      END_STATE();
    case 176:
      if (lookahead == '2') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 177:
      if (lookahead == '2') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(810);
      END_STATE();
    case 178:
      if (lookahead == '2') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 179:
      if (lookahead == '2') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 180:
      if (lookahead == '2') ADVANCE(387);
      END_STATE();
    case 181:
      if (lookahead == '2') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 182:
      if (lookahead == '2') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(814);
      END_STATE();
    case 183:
      if (lookahead == '2') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 184:
      if (lookahead == '2') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(816);
      END_STATE();
    case 185:
      if (lookahead == '2') ADVANCE(395);
      if (lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 186:
      if (lookahead == '2') ADVANCE(396);
      END_STATE();
    case 187:
      if (lookahead == '2') ADVANCE(397);
      END_STATE();
    case 188:
      if (lookahead == '2') ADVANCE(398);
      END_STATE();
    case 189:
      if (lookahead == '2') ADVANCE(399);
      END_STATE();
    case 190:
      if (lookahead == '2') ADVANCE(400);
      END_STATE();
    case 191:
      if (lookahead == '2') ADVANCE(401);
      END_STATE();
    case 192:
      if (lookahead == '2') ADVANCE(402);
      END_STATE();
    case 193:
      if (lookahead == '2') ADVANCE(403);
      END_STATE();
    case 194:
      if (lookahead == '2') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 195:
      if (lookahead == '2') ADVANCE(405);
      END_STATE();
    case 196:
      if (lookahead == '2') ADVANCE(406);
      END_STATE();
    case 197:
      if (lookahead == '2') ADVANCE(407);
      END_STATE();
    case 198:
      if (lookahead == '2') ADVANCE(408);
      END_STATE();
    case 199:
      if (lookahead == '2') ADVANCE(409);
      END_STATE();
    case 200:
      if (lookahead == '2') ADVANCE(410);
      END_STATE();
    case 201:
      if (lookahead == '2') ADVANCE(411);
      END_STATE();
    case 202:
      if (lookahead == '2') ADVANCE(412);
      END_STATE();
    case 203:
      if (lookahead == '2') ADVANCE(413);
      END_STATE();
    case 204:
      if (lookahead == '2') ADVANCE(414);
      END_STATE();
    case 205:
      if (lookahead == '2') ADVANCE(415);
      END_STATE();
    case 206:
      if (lookahead == '2') ADVANCE(416);
      END_STATE();
    case 207:
      if (lookahead == '6') ADVANCE(1477);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(1439);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(1455);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(1438);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(1457);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(1442);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(1641);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(1635);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(1640);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(1458);
      END_STATE();
    case 217:
      if (lookahead == '6') ADVANCE(1638);
      END_STATE();
    case 218:
      if (lookahead == '6') ADVANCE(1637);
      END_STATE();
    case 219:
      if (lookahead == '6') ADVANCE(1639);
      END_STATE();
    case 220:
      if (lookahead == '6') ADVANCE(1636);
      END_STATE();
    case 221:
      if (lookahead == '6') ADVANCE(1642);
      END_STATE();
    case 222:
      if (lookahead == '6') ADVANCE(1445);
      END_STATE();
    case 223:
      if (lookahead == '6') ADVANCE(1441);
      END_STATE();
    case 224:
      if (lookahead == '6') ADVANCE(1461);
      END_STATE();
    case 225:
      if (lookahead == '6') ADVANCE(1444);
      END_STATE();
    case 226:
      if (lookahead == '8') ADVANCE(1651);
      END_STATE();
    case 227:
      if (lookahead == '8') ADVANCE(1652);
      END_STATE();
    case 228:
      if (lookahead == '8') ADVANCE(1653);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'b') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'b') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(1734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'd') ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'd') ADVANCE(1713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(1722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(1716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'f') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'g') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'h') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'h') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'l') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'l') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 's') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(1728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(1719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'v') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'v') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'z') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      if (lookahead == ';') ADVANCE(1681);
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(789);
      if (lookahead == 'u') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1740);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(1403);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(1679);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(1680);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(1474);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(1309);
      if (lookahead == 'e') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(1223);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(932);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(1302);
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(1400);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'u') ADVANCE(1243);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(1401);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(959);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(881);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(1010);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(888);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(1130);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(1131);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(1132);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(1133);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(1134);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(1135);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(1136);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(1323);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(948);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(949);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(950);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(951);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(952);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(1009);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'e') ADVANCE(974);
      if (lookahead == 'f') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(664);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(1260);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(1261);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(1264);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(1265);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(1325);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(1270);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(1271);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(1288);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(1293);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(1326);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(1328);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(1295);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(1404);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(1225);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(1203);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(1314);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(1228);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(1318);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(1321);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(1324);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(1016);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(1012);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(1406);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(1407);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(1356);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(1019);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(1020);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == 'f') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == 's') ADVANCE(1120);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(1022);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'f') ADVANCE(820);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(1213);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(1214);
      END_STATE();
    case 423:
      if (lookahead == 'b') ADVANCE(1035);
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 's') ADVANCE(765);
      if (lookahead == 'w') ADVANCE(795);
      END_STATE();
    case 424:
      if (lookahead == 'b') ADVANCE(859);
      END_STATE();
    case 425:
      if (lookahead == 'b') ADVANCE(1222);
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead == 'g') ADVANCE(667);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 'p') ADVANCE(1362);
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 426:
      if (lookahead == 'b') ADVANCE(1405);
      if (lookahead == 'c') ADVANCE(773);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead == 'f') ADVANCE(928);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(782);
      END_STATE();
    case 427:
      if (lookahead == 'b') ADVANCE(889);
      END_STATE();
    case 428:
      if (lookahead == 'b') ADVANCE(1028);
      END_STATE();
    case 429:
      if (lookahead == 'b') ADVANCE(1095);
      if (lookahead == 'c') ADVANCE(767);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == 's') ADVANCE(777);
      if (lookahead == 'w') ADVANCE(821);
      END_STATE();
    case 430:
      if (lookahead == 'b') ADVANCE(892);
      END_STATE();
    case 431:
      if (lookahead == 'b') ADVANCE(1098);
      if (lookahead == 'c') ADVANCE(769);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 'q') ADVANCE(1364);
      if (lookahead == 's') ADVANCE(778);
      if (lookahead == 'w') ADVANCE(825);
      END_STATE();
    case 432:
      if (lookahead == 'b') ADVANCE(1100);
      if (lookahead == 'c') ADVANCE(770);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'q') ADVANCE(1369);
      if (lookahead == 's') ADVANCE(779);
      if (lookahead == 'w') ADVANCE(828);
      END_STATE();
    case 433:
      if (lookahead == 'b') ADVANCE(1102);
      if (lookahead == 'c') ADVANCE(771);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == 's') ADVANCE(780);
      if (lookahead == 'w') ADVANCE(833);
      END_STATE();
    case 434:
      if (lookahead == 'b') ADVANCE(896);
      END_STATE();
    case 435:
      if (lookahead == 'b') ADVANCE(1104);
      if (lookahead == 'c') ADVANCE(772);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == 's') ADVANCE(781);
      if (lookahead == 'w') ADVANCE(835);
      END_STATE();
    case 436:
      if (lookahead == 'b') ADVANCE(898);
      END_STATE();
    case 437:
      if (lookahead == 'b') ADVANCE(899);
      END_STATE();
    case 438:
      if (lookahead == 'b') ADVANCE(900);
      END_STATE();
    case 439:
      if (lookahead == 'b') ADVANCE(901);
      END_STATE();
    case 440:
      if (lookahead == 'b') ADVANCE(902);
      END_STATE();
    case 441:
      if (lookahead == 'b') ADVANCE(903);
      END_STATE();
    case 442:
      if (lookahead == 'b') ADVANCE(904);
      END_STATE();
    case 443:
      if (lookahead == 'b') ADVANCE(905);
      END_STATE();
    case 444:
      if (lookahead == 'b') ADVANCE(906);
      END_STATE();
    case 445:
      if (lookahead == 'b') ADVANCE(907);
      END_STATE();
    case 446:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 447:
      if (lookahead == 'b') ADVANCE(860);
      END_STATE();
    case 448:
      if (lookahead == 'b') ADVANCE(861);
      END_STATE();
    case 449:
      if (lookahead == 'b') ADVANCE(862);
      END_STATE();
    case 450:
      if (lookahead == 'b') ADVANCE(863);
      END_STATE();
    case 451:
      if (lookahead == 'b') ADVANCE(864);
      END_STATE();
    case 452:
      if (lookahead == 'b') ADVANCE(865);
      END_STATE();
    case 453:
      if (lookahead == 'b') ADVANCE(866);
      END_STATE();
    case 454:
      if (lookahead == 'b') ADVANCE(867);
      END_STATE();
    case 455:
      if (lookahead == 'c') ADVANCE(877);
      END_STATE();
    case 456:
      if (lookahead == 'c') ADVANCE(1696);
      END_STATE();
    case 457:
      if (lookahead == 'c') ADVANCE(1705);
      END_STATE();
    case 458:
      if (lookahead == 'c') ADVANCE(1732);
      END_STATE();
    case 459:
      if (lookahead == 'c') ADVANCE(1543);
      END_STATE();
    case 460:
      if (lookahead == 'c') ADVANCE(876);
      END_STATE();
    case 461:
      if (lookahead == 'c') ADVANCE(764);
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 462:
      if (lookahead == 'c') ADVANCE(868);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(869);
      END_STATE();
    case 464:
      if (lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(870);
      END_STATE();
    case 466:
      if (lookahead == 'c') ADVANCE(871);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(872);
      END_STATE();
    case 468:
      if (lookahead == 'c') ADVANCE(873);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 470:
      if (lookahead == 'c') ADVANCE(874);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 472:
      if (lookahead == 'c') ADVANCE(875);
      END_STATE();
    case 473:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 474:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 475:
      if (lookahead == 'c') ADVANCE(909);
      if (lookahead == 's') ADVANCE(1319);
      if (lookahead == 'w') ADVANCE(839);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 477:
      if (lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 478:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 479:
      if (lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(679);
      END_STATE();
    case 481:
      if (lookahead == 'c') ADVANCE(1327);
      END_STATE();
    case 482:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 483:
      if (lookahead == 'c') ADVANCE(1258);
      END_STATE();
    case 484:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 485:
      if (lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 486:
      if (lookahead == 'c') ADVANCE(1277);
      END_STATE();
    case 487:
      if (lookahead == 'c') ADVANCE(651);
      END_STATE();
    case 488:
      if (lookahead == 'c') ADVANCE(1278);
      END_STATE();
    case 489:
      if (lookahead == 'c') ADVANCE(1279);
      END_STATE();
    case 490:
      if (lookahead == 'c') ADVANCE(1280);
      END_STATE();
    case 491:
      if (lookahead == 'c') ADVANCE(1282);
      END_STATE();
    case 492:
      if (lookahead == 'c') ADVANCE(1284);
      END_STATE();
    case 493:
      if (lookahead == 'c') ADVANCE(1286);
      END_STATE();
    case 494:
      if (lookahead == 'c') ADVANCE(1292);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(1294);
      END_STATE();
    case 496:
      if (lookahead == 'c') ADVANCE(1296);
      END_STATE();
    case 497:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 498:
      if (lookahead == 'c') ADVANCE(1366);
      END_STATE();
    case 499:
      if (lookahead == 'c') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 500:
      if (lookahead == 'c') ADVANCE(880);
      END_STATE();
    case 501:
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(931);
      END_STATE();
    case 502:
      if (lookahead == 'd') ADVANCE(1425);
      END_STATE();
    case 503:
      if (lookahead == 'd') ADVANCE(1418);
      END_STATE();
    case 504:
      if (lookahead == 'd') ADVANCE(1420);
      END_STATE();
    case 505:
      if (lookahead == 'd') ADVANCE(1702);
      END_STATE();
    case 506:
      if (lookahead == 'd') ADVANCE(1419);
      END_STATE();
    case 507:
      if (lookahead == 'd') ADVANCE(1422);
      END_STATE();
    case 508:
      if (lookahead == 'd') ADVANCE(1450);
      END_STATE();
    case 509:
      if (lookahead == 'd') ADVANCE(1711);
      END_STATE();
    case 510:
      if (lookahead == 'd') ADVANCE(740);
      END_STATE();
    case 511:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 512:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 513:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 514:
      if (lookahead == 'd') ADVANCE(1094);
      if (lookahead == 'f') ADVANCE(913);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead == 'l') ADVANCE(1040);
      END_STATE();
    case 515:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 516:
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 517:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 518:
      if (lookahead == 'd') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(1013);
      if (lookahead == 's') ADVANCE(1357);
      if (lookahead == 'v') ADVANCE(837);
      END_STATE();
    case 519:
      if (lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 520:
      if (lookahead == 'd') ADVANCE(1139);
      END_STATE();
    case 521:
      if (lookahead == 'd') ADVANCE(1140);
      END_STATE();
    case 522:
      if (lookahead == 'd') ADVANCE(1141);
      END_STATE();
    case 523:
      if (lookahead == 'd') ADVANCE(1143);
      END_STATE();
    case 524:
      if (lookahead == 'd') ADVANCE(1144);
      END_STATE();
    case 525:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 526:
      if (lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 527:
      if (lookahead == 'd') ADVANCE(1146);
      END_STATE();
    case 528:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 529:
      if (lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 530:
      if (lookahead == 'd') ADVANCE(1148);
      END_STATE();
    case 531:
      if (lookahead == 'd') ADVANCE(1149);
      END_STATE();
    case 532:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 533:
      if (lookahead == 'd') ADVANCE(1150);
      END_STATE();
    case 534:
      if (lookahead == 'd') ADVANCE(1151);
      END_STATE();
    case 535:
      if (lookahead == 'd') ADVANCE(1152);
      END_STATE();
    case 536:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 537:
      if (lookahead == 'd') ADVANCE(1153);
      END_STATE();
    case 538:
      if (lookahead == 'd') ADVANCE(1154);
      END_STATE();
    case 539:
      if (lookahead == 'd') ADVANCE(1155);
      END_STATE();
    case 540:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 541:
      if (lookahead == 'd') ADVANCE(1156);
      END_STATE();
    case 542:
      if (lookahead == 'd') ADVANCE(1157);
      END_STATE();
    case 543:
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 544:
      if (lookahead == 'd') ADVANCE(1158);
      END_STATE();
    case 545:
      if (lookahead == 'd') ADVANCE(1159);
      END_STATE();
    case 546:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 547:
      if (lookahead == 'd') ADVANCE(1160);
      END_STATE();
    case 548:
      if (lookahead == 'd') ADVANCE(1161);
      END_STATE();
    case 549:
      if (lookahead == 'd') ADVANCE(1162);
      END_STATE();
    case 550:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 551:
      if (lookahead == 'd') ADVANCE(1163);
      END_STATE();
    case 552:
      if (lookahead == 'd') ADVANCE(1164);
      END_STATE();
    case 553:
      if (lookahead == 'd') ADVANCE(1165);
      END_STATE();
    case 554:
      if (lookahead == 'd') ADVANCE(1166);
      END_STATE();
    case 555:
      if (lookahead == 'd') ADVANCE(1167);
      END_STATE();
    case 556:
      if (lookahead == 'd') ADVANCE(1168);
      END_STATE();
    case 557:
      if (lookahead == 'd') ADVANCE(1169);
      END_STATE();
    case 558:
      if (lookahead == 'd') ADVANCE(1170);
      END_STATE();
    case 559:
      if (lookahead == 'd') ADVANCE(645);
      END_STATE();
    case 560:
      if (lookahead == 'd') ADVANCE(652);
      END_STATE();
    case 561:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 562:
      if (lookahead == 'd') ADVANCE(521);
      END_STATE();
    case 563:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 564:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 565:
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 566:
      if (lookahead == 'd') ADVANCE(526);
      END_STATE();
    case 567:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 568:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 569:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 570:
      if (lookahead == 'd') ADVANCE(530);
      END_STATE();
    case 571:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 572:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 573:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 574:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 575:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 576:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 577:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 578:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 579:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 580:
      if (lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 581:
      if (lookahead == 'd') ADVANCE(542);
      END_STATE();
    case 582:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 583:
      if (lookahead == 'd') ADVANCE(545);
      END_STATE();
    case 584:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 585:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 586:
      if (lookahead == 'd') ADVANCE(549);
      END_STATE();
    case 587:
      if (lookahead == 'd') ADVANCE(551);
      END_STATE();
    case 588:
      if (lookahead == 'd') ADVANCE(552);
      END_STATE();
    case 589:
      if (lookahead == 'd') ADVANCE(553);
      END_STATE();
    case 590:
      if (lookahead == 'd') ADVANCE(554);
      END_STATE();
    case 591:
      if (lookahead == 'd') ADVANCE(555);
      END_STATE();
    case 592:
      if (lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 593:
      if (lookahead == 'd') ADVANCE(557);
      END_STATE();
    case 594:
      if (lookahead == 'd') ADVANCE(558);
      END_STATE();
    case 595:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 596:
      if (lookahead == 'd') ADVANCE(1097);
      if (lookahead == 'f') ADVANCE(916);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == 'l') ADVANCE(1044);
      END_STATE();
    case 597:
      if (lookahead == 'd') ADVANCE(1099);
      if (lookahead == 'f') ADVANCE(919);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead == 'l') ADVANCE(1045);
      END_STATE();
    case 598:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 599:
      if (lookahead == 'd') ADVANCE(1101);
      if (lookahead == 'f') ADVANCE(921);
      if (lookahead == 'i') ADVANCE(990);
      if (lookahead == 'l') ADVANCE(1047);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(1103);
      if (lookahead == 'f') ADVANCE(923);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead == 'l') ADVANCE(1051);
      END_STATE();
    case 601:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 602:
      if (lookahead == 'd') ADVANCE(1105);
      if (lookahead == 'f') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1055);
      END_STATE();
    case 603:
      if (lookahead == 'd') ADVANCE(1106);
      if (lookahead == 'f') ADVANCE(926);
      END_STATE();
    case 604:
      if (lookahead == 'd') ADVANCE(1108);
      if (lookahead == 'f') ADVANCE(927);
      END_STATE();
    case 605:
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(929);
      if (lookahead == 'i') ADVANCE(1002);
      END_STATE();
    case 606:
      if (lookahead == 'd') ADVANCE(1112);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == 'l') ADVANCE(1060);
      END_STATE();
    case 607:
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == 'u') ADVANCE(1008);
      END_STATE();
    case 608:
      if (lookahead == 'e') ADVANCE(1121);
      if (lookahead == 'g') ADVANCE(611);
      if (lookahead == 'l') ADVANCE(612);
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 609:
      if (lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 610:
      if (lookahead == 'e') ADVANCE(1666);
      END_STATE();
    case 611:
      if (lookahead == 'e') ADVANCE(1489);
      if (lookahead == 't') ADVANCE(1490);
      END_STATE();
    case 612:
      if (lookahead == 'e') ADVANCE(1491);
      if (lookahead == 't') ADVANCE(1488);
      END_STATE();
    case 613:
      if (lookahead == 'e') ADVANCE(1487);
      END_STATE();
    case 614:
      if (lookahead == 'e') ADVANCE(1729);
      END_STATE();
    case 615:
      if (lookahead == 'e') ADVANCE(1720);
      END_STATE();
    case 616:
      if (lookahead == 'e') ADVANCE(1416);
      END_STATE();
    case 617:
      if (lookahead == 'e') ADVANCE(1699);
      END_STATE();
    case 618:
      if (lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 619:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 620:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 621:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 622:
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 623:
      if (lookahead == 'e') ADVANCE(1506);
      END_STATE();
    case 624:
      if (lookahead == 'e') ADVANCE(1516);
      END_STATE();
    case 625:
      if (lookahead == 'e') ADVANCE(1513);
      END_STATE();
    case 626:
      if (lookahead == 'e') ADVANCE(1723);
      END_STATE();
    case 627:
      if (lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 628:
      if (lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 629:
      if (lookahead == 'e') ADVANCE(1003);
      END_STATE();
    case 630:
      if (lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 631:
      if (lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 632:
      if (lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 633:
      if (lookahead == 'e') ADVANCE(1537);
      END_STATE();
    case 634:
      if (lookahead == 'e') ADVANCE(1534);
      END_STATE();
    case 635:
      if (lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 636:
      if (lookahead == 'e') ADVANCE(1460);
      END_STATE();
    case 637:
      if (lookahead == 'e') ADVANCE(1601);
      END_STATE();
    case 638:
      if (lookahead == 'e') ADVANCE(1600);
      END_STATE();
    case 639:
      if (lookahead == 'e') ADVANCE(1555);
      END_STATE();
    case 640:
      if (lookahead == 'e') ADVANCE(1602);
      END_STATE();
    case 641:
      if (lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 642:
      if (lookahead == 'e') ADVANCE(1484);
      END_STATE();
    case 643:
      if (lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 644:
      if (lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 645:
      if (lookahead == 'e') ADVANCE(1452);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(1470);
      END_STATE();
    case 647:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 648:
      if (lookahead == 'e') ADVANCE(1654);
      END_STATE();
    case 649:
      if (lookahead == 'e') ADVANCE(1561);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(1564);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(1544);
      END_STATE();
    case 652:
      if (lookahead == 'e') ADVANCE(1447);
      END_STATE();
    case 653:
      if (lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 654:
      if (lookahead == 'e') ADVANCE(1547);
      END_STATE();
    case 655:
      if (lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 656:
      if (lookahead == 'e') ADVANCE(1545);
      END_STATE();
    case 657:
      if (lookahead == 'e') ADVANCE(1473);
      END_STATE();
    case 658:
      if (lookahead == 'e') ADVANCE(1549);
      END_STATE();
    case 659:
      if (lookahead == 'e') ADVANCE(1665);
      END_STATE();
    case 660:
      if (lookahead == 'e') ADVANCE(1663);
      END_STATE();
    case 661:
      if (lookahead == 'e') ADVANCE(1399);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead == 'w') ADVANCE(831);
      END_STATE();
    case 662:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 663:
      if (lookahead == 'e') ADVANCE(1392);
      END_STATE();
    case 664:
      if (lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 665:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 666:
      if (lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 667:
      if (lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 668:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 669:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 670:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 671:
      if (lookahead == 'e') ADVANCE(1221);
      END_STATE();
    case 672:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 673:
      if (lookahead == 'e') ADVANCE(1240);
      END_STATE();
    case 674:
      if (lookahead == 'e') ADVANCE(1242);
      END_STATE();
    case 675:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 676:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 677:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 678:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 679:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 680:
      if (lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 681:
      if (lookahead == 'e') ADVANCE(1142);
      END_STATE();
    case 682:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 683:
      if (lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 684:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 685:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 686:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 687:
      if (lookahead == 'e') ADVANCE(1343);
      END_STATE();
    case 688:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 689:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 690:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 691:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 692:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 693:
      if (lookahead == 'e') ADVANCE(1320);
      END_STATE();
    case 694:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 695:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 696:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 697:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 698:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 699:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 700:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 701:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 702:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 703:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 706:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 708:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 710:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 715:
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(673);
      if (lookahead == 'n') ADVANCE(1224);
      if (lookahead == 'p') ADVANCE(1363);
      END_STATE();
    case 716:
      if (lookahead == 'f') ADVANCE(1468);
      END_STATE();
    case 717:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 718:
      if (lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 719:
      if (lookahead == 'f') ADVANCE(930);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'l') ADVANCE(1061);
      END_STATE();
    case 720:
      if (lookahead == 'g') ADVANCE(1588);
      END_STATE();
    case 721:
      if (lookahead == 'g') ADVANCE(1582);
      END_STATE();
    case 722:
      if (lookahead == 'g') ADVANCE(1587);
      END_STATE();
    case 723:
      if (lookahead == 'g') ADVANCE(1485);
      END_STATE();
    case 724:
      if (lookahead == 'g') ADVANCE(1585);
      END_STATE();
    case 725:
      if (lookahead == 'g') ADVANCE(1584);
      END_STATE();
    case 726:
      if (lookahead == 'g') ADVANCE(1552);
      END_STATE();
    case 727:
      if (lookahead == 'g') ADVANCE(1553);
      END_STATE();
    case 728:
      if (lookahead == 'g') ADVANCE(1586);
      END_STATE();
    case 729:
      if (lookahead == 'g') ADVANCE(1590);
      END_STATE();
    case 730:
      if (lookahead == 'g') ADVANCE(1591);
      END_STATE();
    case 731:
      if (lookahead == 'g') ADVANCE(1583);
      END_STATE();
    case 732:
      if (lookahead == 'g') ADVANCE(1589);
      END_STATE();
    case 733:
      if (lookahead == 'g') ADVANCE(1592);
      END_STATE();
    case 734:
      if (lookahead == 'g') ADVANCE(1556);
      END_STATE();
    case 735:
      if (lookahead == 'g') ADVANCE(1462);
      END_STATE();
    case 736:
      if (lookahead == 'g') ADVANCE(1563);
      END_STATE();
    case 737:
      if (lookahead == 'g') ADVANCE(1566);
      END_STATE();
    case 738:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 739:
      if (lookahead == 'g') ADVANCE(774);
      END_STATE();
    case 740:
      if (lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 741:
      if (lookahead == 'g') ADVANCE(653);
      END_STATE();
    case 742:
      if (lookahead == 'g') ADVANCE(1311);
      END_STATE();
    case 743:
      if (lookahead == 'g') ADVANCE(654);
      END_STATE();
    case 744:
      if (lookahead == 'g') ADVANCE(655);
      END_STATE();
    case 745:
      if (lookahead == 'g') ADVANCE(656);
      END_STATE();
    case 746:
      if (lookahead == 'g') ADVANCE(657);
      END_STATE();
    case 747:
      if (lookahead == 'g') ADVANCE(658);
      END_STATE();
    case 748:
      if (lookahead == 'g') ADVANCE(659);
      END_STATE();
    case 749:
      if (lookahead == 'g') ADVANCE(660);
      END_STATE();
    case 750:
      if (lookahead == 'g') ADVANCE(674);
      if (lookahead == 'h') ADVANCE(918);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == 'y') ADVANCE(945);
      END_STATE();
    case 751:
      if (lookahead == 'g') ADVANCE(775);
      END_STATE();
    case 752:
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(110);
      END_STATE();
    case 753:
      if (lookahead == 'h') ADVANCE(1669);
      END_STATE();
    case 754:
      if (lookahead == 'h') ADVANCE(1469);
      END_STATE();
    case 755:
      if (lookahead == 'h') ADVANCE(1479);
      END_STATE();
    case 756:
      if (lookahead == 'h') ADVANCE(1480);
      END_STATE();
    case 757:
      if (lookahead == 'h') ADVANCE(1674);
      END_STATE();
    case 758:
      if (lookahead == 'h') ADVANCE(1676);
      END_STATE();
    case 759:
      if (lookahead == 'h') ADVANCE(1675);
      END_STATE();
    case 760:
      if (lookahead == 'h') ADVANCE(1678);
      END_STATE();
    case 761:
      if (lookahead == 'h') ADVANCE(685);
      if (lookahead == 'm') ADVANCE(1113);
      if (lookahead == 'o') ADVANCE(1007);
      END_STATE();
    case 762:
      if (lookahead == 'h') ADVANCE(1176);
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 763:
      if (lookahead == 'h') ADVANCE(1033);
      END_STATE();
    case 764:
      if (lookahead == 'h') ADVANCE(1197);
      END_STATE();
    case 765:
      if (lookahead == 'h') ADVANCE(1039);
      END_STATE();
    case 766:
      if (lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 767:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 768:
      if (lookahead == 'h') ADVANCE(1037);
      END_STATE();
    case 769:
      if (lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 770:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 771:
      if (lookahead == 'h') ADVANCE(335);
      END_STATE();
    case 772:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 773:
      if (lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 774:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 775:
      if (lookahead == 'h') ADVANCE(171);
      END_STATE();
    case 776:
      if (lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 777:
      if (lookahead == 'h') ADVANCE(1069);
      END_STATE();
    case 778:
      if (lookahead == 'h') ADVANCE(1070);
      END_STATE();
    case 779:
      if (lookahead == 'h') ADVANCE(1072);
      END_STATE();
    case 780:
      if (lookahead == 'h') ADVANCE(1074);
      END_STATE();
    case 781:
      if (lookahead == 'h') ADVANCE(1077);
      END_STATE();
    case 782:
      if (lookahead == 'h') ADVANCE(1080);
      END_STATE();
    case 783:
      if (lookahead == 'h') ADVANCE(1208);
      END_STATE();
    case 784:
      if (lookahead == 'i') ADVANCE(1389);
      if (lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 785:
      if (lookahead == 'i') ADVANCE(887);
      if (lookahead == 'l') ADVANCE(1067);
      END_STATE();
    case 786:
      if (lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 787:
      if (lookahead == 'i') ADVANCE(958);
      END_STATE();
    case 788:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 789:
      if (lookahead == 'i') ADVANCE(1388);
      if (lookahead == 'o') ADVANCE(1339);
      END_STATE();
    case 790:
      if (lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 791:
      if (lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 792:
      if (lookahead == 'i') ADVANCE(938);
      END_STATE();
    case 793:
      if (lookahead == 'i') ADVANCE(668);
      END_STATE();
    case 794:
      if (lookahead == 'i') ADVANCE(964);
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 795:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 796:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 797:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 798:
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(1036);
      END_STATE();
    case 799:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 800:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 801:
      if (lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 802:
      if (lookahead == 'i') ADVANCE(1244);
      END_STATE();
    case 803:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 804:
      if (lookahead == 'i') ADVANCE(1210);
      END_STATE();
    case 805:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 806:
      if (lookahead == 'i') ADVANCE(977);
      END_STATE();
    case 807:
      if (lookahead == 'i') ADVANCE(983);
      END_STATE();
    case 808:
      if (lookahead == 'i') ADVANCE(1274);
      END_STATE();
    case 809:
      if (lookahead == 'i') ADVANCE(1298);
      END_STATE();
    case 810:
      if (lookahead == 'i') ADVANCE(1300);
      END_STATE();
    case 811:
      if (lookahead == 'i') ADVANCE(1303);
      END_STATE();
    case 812:
      if (lookahead == 'i') ADVANCE(1306);
      END_STATE();
    case 813:
      if (lookahead == 'i') ADVANCE(1308);
      END_STATE();
    case 814:
      if (lookahead == 'i') ADVANCE(1285);
      END_STATE();
    case 815:
      if (lookahead == 'i') ADVANCE(1299);
      END_STATE();
    case 816:
      if (lookahead == 'i') ADVANCE(1310);
      END_STATE();
    case 817:
      if (lookahead == 'i') ADVANCE(1312);
      END_STATE();
    case 818:
      if (lookahead == 'i') ADVANCE(1290);
      END_STATE();
    case 819:
      if (lookahead == 'i') ADVANCE(1301);
      END_STATE();
    case 820:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 821:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 822:
      if (lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 823:
      if (lookahead == 'i') ADVANCE(1338);
      END_STATE();
    case 824:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 825:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 826:
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == 'l') ADVANCE(1041);
      END_STATE();
    case 827:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 828:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 829:
      if (lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 830:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 831:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 832:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 833:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 834:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 835:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 836:
      if (lookahead == 'i') ADVANCE(991);
      if (lookahead == 'l') ADVANCE(1049);
      END_STATE();
    case 837:
      if (lookahead == 'i') ADVANCE(1189);
      END_STATE();
    case 838:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 839:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 840:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 841:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 842:
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1053);
      END_STATE();
    case 843:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 844:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 845:
      if (lookahead == 'i') ADVANCE(995);
      if (lookahead == 'l') ADVANCE(1054);
      END_STATE();
    case 846:
      if (lookahead == 'i') ADVANCE(997);
      if (lookahead == 'l') ADVANCE(1056);
      END_STATE();
    case 847:
      if (lookahead == 'i') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1057);
      END_STATE();
    case 848:
      if (lookahead == 'i') ADVANCE(1059);
      END_STATE();
    case 849:
      if (lookahead == 'i') ADVANCE(1062);
      END_STATE();
    case 850:
      if (lookahead == 'i') ADVANCE(1063);
      END_STATE();
    case 851:
      if (lookahead == 'i') ADVANCE(1341);
      END_STATE();
    case 852:
      if (lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 853:
      if (lookahead == 'i') ADVANCE(1344);
      END_STATE();
    case 854:
      if (lookahead == 'i') ADVANCE(1347);
      END_STATE();
    case 855:
      if (lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 856:
      if (lookahead == 'i') ADVANCE(1350);
      END_STATE();
    case 857:
      if (lookahead == 'i') ADVANCE(1351);
      END_STATE();
    case 858:
      if (lookahead == 'j') ADVANCE(1361);
      END_STATE();
    case 859:
      if (lookahead == 'j') ADVANCE(689);
      END_STATE();
    case 860:
      if (lookahead == 'j') ADVANCE(692);
      END_STATE();
    case 861:
      if (lookahead == 'j') ADVANCE(695);
      END_STATE();
    case 862:
      if (lookahead == 'j') ADVANCE(697);
      END_STATE();
    case 863:
      if (lookahead == 'j') ADVANCE(699);
      END_STATE();
    case 864:
      if (lookahead == 'j') ADVANCE(701);
      END_STATE();
    case 865:
      if (lookahead == 'j') ADVANCE(702);
      END_STATE();
    case 866:
      if (lookahead == 'j') ADVANCE(704);
      END_STATE();
    case 867:
      if (lookahead == 'j') ADVANCE(705);
      END_STATE();
    case 868:
      if (lookahead == 'k') ADVANCE(1656);
      END_STATE();
    case 869:
      if (lookahead == 'k') ADVANCE(1659);
      END_STATE();
    case 870:
      if (lookahead == 'k') ADVANCE(1657);
      END_STATE();
    case 871:
      if (lookahead == 'k') ADVANCE(1660);
      END_STATE();
    case 872:
      if (lookahead == 'k') ADVANCE(1658);
      END_STATE();
    case 873:
      if (lookahead == 'k') ADVANCE(1661);
      END_STATE();
    case 874:
      if (lookahead == 'k') ADVANCE(1664);
      END_STATE();
    case 875:
      if (lookahead == 'k') ADVANCE(1662);
      END_STATE();
    case 876:
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 877:
      if (lookahead == 'k') ADVANCE(690);
      END_STATE();
    case 878:
      if (lookahead == 'k') ADVANCE(675);
      END_STATE();
    case 879:
      if (lookahead == 'k') ADVANCE(711);
      END_STATE();
    case 880:
      if (lookahead == 'k') ADVANCE(714);
      END_STATE();
    case 881:
      if (lookahead == 'l') ADVANCE(1708);
      END_STATE();
    case 882:
      if (lookahead == 'l') ADVANCE(1673);
      END_STATE();
    case 883:
      if (lookahead == 'l') ADVANCE(1540);
      END_STATE();
    case 884:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 885:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 886:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 887:
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 888:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 889:
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 890:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 891:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 892:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 893:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 894:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 895:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 896:
      if (lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 897:
      if (lookahead == 'l') ADVANCE(688);
      END_STATE();
    case 898:
      if (lookahead == 'l') ADVANCE(637);
      END_STATE();
    case 899:
      if (lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 900:
      if (lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 901:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 902:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 903:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 904:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 905:
      if (lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 906:
      if (lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 907:
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 908:
      if (lookahead == 'l') ADVANCE(1283);
      END_STATE();
    case 909:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 910:
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 911:
      if (lookahead == 'l') ADVANCE(1042);
      END_STATE();
    case 912:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 913:
      if (lookahead == 'l') ADVANCE(1071);
      END_STATE();
    case 914:
      if (lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 915:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 916:
      if (lookahead == 'l') ADVANCE(1073);
      END_STATE();
    case 917:
      if (lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 918:
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 919:
      if (lookahead == 'l') ADVANCE(1075);
      END_STATE();
    case 920:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 921:
      if (lookahead == 'l') ADVANCE(1078);
      END_STATE();
    case 922:
      if (lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 923:
      if (lookahead == 'l') ADVANCE(1079);
      END_STATE();
    case 924:
      if (lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 925:
      if (lookahead == 'l') ADVANCE(1081);
      END_STATE();
    case 926:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 927:
      if (lookahead == 'l') ADVANCE(1083);
      END_STATE();
    case 928:
      if (lookahead == 'l') ADVANCE(1084);
      END_STATE();
    case 929:
      if (lookahead == 'l') ADVANCE(1085);
      END_STATE();
    case 930:
      if (lookahead == 'l') ADVANCE(1086);
      END_STATE();
    case 931:
      if (lookahead == 'm') ADVANCE(1736);
      END_STATE();
    case 932:
      if (lookahead == 'm') ADVANCE(1668);
      END_STATE();
    case 933:
      if (lookahead == 'm') ADVANCE(1424);
      END_STATE();
    case 934:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 935:
      if (lookahead == 'm') ADVANCE(1116);
      END_STATE();
    case 936:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 937:
      if (lookahead == 'm') ADVANCE(1117);
      END_STATE();
    case 938:
      if (lookahead == 'm') ADVANCE(618);
      END_STATE();
    case 939:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 940:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 941:
      if (lookahead == 'm') ADVANCE(707);
      END_STATE();
    case 942:
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 't') ADVANCE(1360);
      END_STATE();
    case 943:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 944:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 945:
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 's') ADVANCE(1317);
      END_STATE();
    case 946:
      if (lookahead == 'n') ADVANCE(1451);
      END_STATE();
    case 947:
      if (lookahead == 'n') ADVANCE(1423);
      END_STATE();
    case 948:
      if (lookahead == 'n') ADVANCE(1501);
      END_STATE();
    case 949:
      if (lookahead == 'n') ADVANCE(1508);
      END_STATE();
    case 950:
      if (lookahead == 'n') ADVANCE(1515);
      END_STATE();
    case 951:
      if (lookahead == 'n') ADVANCE(1522);
      END_STATE();
    case 952:
      if (lookahead == 'n') ADVANCE(1529);
      END_STATE();
    case 953:
      if (lookahead == 'n') ADVANCE(1536);
      END_STATE();
    case 954:
      if (lookahead == 'n') ADVANCE(1449);
      END_STATE();
    case 955:
      if (lookahead == 'n') ADVANCE(1432);
      END_STATE();
    case 956:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 957:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 958:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 959:
      if (lookahead == 'n') ADVANCE(1229);
      END_STATE();
    case 960:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 961:
      if (lookahead == 'n') ADVANCE(823);
      if (lookahead == 'v') ADVANCE(609);
      END_STATE();
    case 962:
      if (lookahead == 'n') ADVANCE(1006);
      END_STATE();
    case 963:
      if (lookahead == 'n') ADVANCE(1006);
      if (lookahead == 'r') ADVANCE(1191);
      END_STATE();
    case 964:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 965:
      if (lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 966:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 967:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 968:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 969:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 970:
      if (lookahead == 'n') ADVANCE(728);
      END_STATE();
    case 971:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 972:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 973:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 974:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 975:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 976:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 977:
      if (lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 978:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 979:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 980:
      if (lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 981:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 982:
      if (lookahead == 'n') ADVANCE(1246);
      END_STATE();
    case 983:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 984:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 985:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 986:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 987:
      if (lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 988:
      if (lookahead == 'n') ADVANCE(1249);
      END_STATE();
    case 989:
      if (lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 990:
      if (lookahead == 'n') ADVANCE(1251);
      END_STATE();
    case 991:
      if (lookahead == 'n') ADVANCE(1252);
      END_STATE();
    case 992:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 993:
      if (lookahead == 'n') ADVANCE(1254);
      END_STATE();
    case 994:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 995:
      if (lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 996:
      if (lookahead == 'n') ADVANCE(1256);
      END_STATE();
    case 997:
      if (lookahead == 'n') ADVANCE(1257);
      END_STATE();
    case 998:
      if (lookahead == 'n') ADVANCE(1259);
      END_STATE();
    case 999:
      if (lookahead == 'n') ADVANCE(1266);
      END_STATE();
    case 1000:
      if (lookahead == 'n') ADVANCE(1316);
      END_STATE();
    case 1001:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 1002:
      if (lookahead == 'n') ADVANCE(1281);
      END_STATE();
    case 1003:
      if (lookahead == 'n') ADVANCE(1345);
      if (lookahead == 'x') ADVANCE(818);
      END_STATE();
    case 1004:
      if (lookahead == 'n') ADVANCE(1287);
      END_STATE();
    case 1005:
      if (lookahead == 'n') ADVANCE(1291);
      END_STATE();
    case 1006:
      if (lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 1007:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 1008:
      if (lookahead == 'n') ADVANCE(1313);
      END_STATE();
    case 1009:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 1010:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 1011:
      if (lookahead == 'n') ADVANCE(1230);
      END_STATE();
    case 1012:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 1013:
      if (lookahead == 'n') ADVANCE(1336);
      END_STATE();
    case 1014:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 1015:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 1016:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 1017:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 1018:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 1019:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 1020:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 1021:
      if (lookahead == 'n') ADVANCE(1096);
      END_STATE();
    case 1022:
      if (lookahead == 'n') ADVANCE(1021);
      END_STATE();
    case 1023:
      if (lookahead == 'n') ADVANCE(1021);
      if (lookahead == 'r') ADVANCE(1198);
      END_STATE();
    case 1024:
      if (lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 1025:
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == 'u') ADVANCE(915);
      END_STATE();
    case 1026:
      if (lookahead == 'o') ADVANCE(1476);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(1390);
      END_STATE();
    case 1028:
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 1029:
      if (lookahead == 'o') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1738);
      END_STATE();
    case 1030:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(1359);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(1115);
      END_STATE();
    case 1032:
      if (lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 1033:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 1034:
      if (lookahead == 'o') ADVANCE(934);
      END_STATE();
    case 1035:
      if (lookahead == 'o') ADVANCE(1076);
      if (lookahead == 'y') ADVANCE(1329);
      END_STATE();
    case 1036:
      if (lookahead == 'o') ADVANCE(956);
      END_STATE();
    case 1037:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 1038:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 1039:
      if (lookahead == 'o') ADVANCE(1183);
      END_STATE();
    case 1040:
      if (lookahead == 'o') ADVANCE(957);
      END_STATE();
    case 1041:
      if (lookahead == 'o') ADVANCE(960);
      END_STATE();
    case 1042:
      if (lookahead == 'o') ADVANCE(965);
      END_STATE();
    case 1043:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 1044:
      if (lookahead == 'o') ADVANCE(966);
      END_STATE();
    case 1045:
      if (lookahead == 'o') ADVANCE(967);
      END_STATE();
    case 1046:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 1047:
      if (lookahead == 'o') ADVANCE(968);
      END_STATE();
    case 1048:
      if (lookahead == 'o') ADVANCE(1355);
      END_STATE();
    case 1049:
      if (lookahead == 'o') ADVANCE(969);
      END_STATE();
    case 1050:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 1051:
      if (lookahead == 'o') ADVANCE(970);
      END_STATE();
    case 1052:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 1053:
      if (lookahead == 'o') ADVANCE(971);
      END_STATE();
    case 1054:
      if (lookahead == 'o') ADVANCE(972);
      END_STATE();
    case 1055:
      if (lookahead == 'o') ADVANCE(973);
      END_STATE();
    case 1056:
      if (lookahead == 'o') ADVANCE(975);
      END_STATE();
    case 1057:
      if (lookahead == 'o') ADVANCE(978);
      END_STATE();
    case 1058:
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 1059:
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 1060:
      if (lookahead == 'o') ADVANCE(984);
      END_STATE();
    case 1061:
      if (lookahead == 'o') ADVANCE(986);
      END_STATE();
    case 1062:
      if (lookahead == 'o') ADVANCE(954);
      END_STATE();
    case 1063:
      if (lookahead == 'o') ADVANCE(955);
      END_STATE();
    case 1064:
      if (lookahead == 'o') ADVANCE(1180);
      END_STATE();
    case 1065:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 1066:
      if (lookahead == 'o') ADVANCE(980);
      END_STATE();
    case 1067:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 1068:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 1069:
      if (lookahead == 'o') ADVANCE(1184);
      END_STATE();
    case 1070:
      if (lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 1071:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 1072:
      if (lookahead == 'o') ADVANCE(1186);
      END_STATE();
    case 1073:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(1187);
      END_STATE();
    case 1075:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 1076:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 1077:
      if (lookahead == 'o') ADVANCE(1188);
      END_STATE();
    case 1078:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 1079:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 1080:
      if (lookahead == 'o') ADVANCE(1190);
      END_STATE();
    case 1081:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 1082:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 1083:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 1084:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 1085:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 1086:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 1087:
      if (lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 1088:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 1089:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 1090:
      if (lookahead == 'o') ADVANCE(920);
      END_STATE();
    case 1091:
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 1092:
      if (lookahead == 'o') ADVANCE(924);
      END_STATE();
    case 1093:
      if (lookahead == 'o') ADVANCE(1206);
      END_STATE();
    case 1094:
      if (lookahead == 'o') ADVANCE(1370);
      END_STATE();
    case 1095:
      if (lookahead == 'o') ADVANCE(1088);
      if (lookahead == 'y') ADVANCE(1330);
      END_STATE();
    case 1096:
      if (lookahead == 'o') ADVANCE(1358);
      END_STATE();
    case 1097:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1098:
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'y') ADVANCE(1331);
      END_STATE();
    case 1099:
      if (lookahead == 'o') ADVANCE(1374);
      END_STATE();
    case 1100:
      if (lookahead == 'o') ADVANCE(1090);
      if (lookahead == 'y') ADVANCE(1332);
      END_STATE();
    case 1101:
      if (lookahead == 'o') ADVANCE(1376);
      END_STATE();
    case 1102:
      if (lookahead == 'o') ADVANCE(1091);
      if (lookahead == 'y') ADVANCE(1333);
      END_STATE();
    case 1103:
      if (lookahead == 'o') ADVANCE(1378);
      END_STATE();
    case 1104:
      if (lookahead == 'o') ADVANCE(1092);
      if (lookahead == 'y') ADVANCE(1334);
      END_STATE();
    case 1105:
      if (lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 1106:
      if (lookahead == 'o') ADVANCE(1382);
      END_STATE();
    case 1107:
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'v') ADVANCE(1052);
      if (lookahead == 'w') ADVANCE(841);
      END_STATE();
    case 1108:
      if (lookahead == 'o') ADVANCE(1383);
      END_STATE();
    case 1109:
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 'w') ADVANCE(844);
      END_STATE();
    case 1110:
      if (lookahead == 'o') ADVANCE(1384);
      END_STATE();
    case 1111:
      if (lookahead == 'o') ADVANCE(1385);
      END_STATE();
    case 1112:
      if (lookahead == 'o') ADVANCE(1386);
      END_STATE();
    case 1113:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 1114:
      if (lookahead == 'p') ADVANCE(1436);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 1115:
      if (lookahead == 'p') ADVANCE(670);
      END_STATE();
    case 1116:
      if (lookahead == 'p') ADVANCE(891);
      END_STATE();
    case 1117:
      if (lookahead == 'p') ADVANCE(1305);
      END_STATE();
    case 1118:
      if (lookahead == 'p') ADVANCE(680);
      END_STATE();
    case 1119:
      if (lookahead == 'p') ADVANCE(1353);
      END_STATE();
    case 1120:
      if (lookahead == 'p') ADVANCE(422);
      END_STATE();
    case 1121:
      if (lookahead == 'q') ADVANCE(1486);
      END_STATE();
    case 1122:
      if (lookahead == 'q') ADVANCE(1371);
      END_STATE();
    case 1123:
      if (lookahead == 'q') ADVANCE(1373);
      END_STATE();
    case 1124:
      if (lookahead == 'q') ADVANCE(1375);
      END_STATE();
    case 1125:
      if (lookahead == 'q') ADVANCE(1377);
      END_STATE();
    case 1126:
      if (lookahead == 'q') ADVANCE(1379);
      END_STATE();
    case 1127:
      if (lookahead == 'q') ADVANCE(1381);
      END_STATE();
    case 1128:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 1129:
      if (lookahead == 'r') ADVANCE(1415);
      END_STATE();
    case 1130:
      if (lookahead == 'r') ADVANCE(1503);
      END_STATE();
    case 1131:
      if (lookahead == 'r') ADVANCE(1510);
      END_STATE();
    case 1132:
      if (lookahead == 'r') ADVANCE(1517);
      END_STATE();
    case 1133:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 1134:
      if (lookahead == 'r') ADVANCE(1531);
      END_STATE();
    case 1135:
      if (lookahead == 'r') ADVANCE(1538);
      END_STATE();
    case 1136:
      if (lookahead == 'r') ADVANCE(1569);
      END_STATE();
    case 1137:
      if (lookahead == 'r') ADVANCE(1541);
      END_STATE();
    case 1138:
      if (lookahead == 'r') ADVANCE(1609);
      END_STATE();
    case 1139:
      if (lookahead == 'r') ADVANCE(1603);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(1608);
      END_STATE();
    case 1141:
      if (lookahead == 'r') ADVANCE(1606);
      END_STATE();
    case 1142:
      if (lookahead == 'r') ADVANCE(1465);
      END_STATE();
    case 1143:
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 1144:
      if (lookahead == 'r') ADVANCE(1620);
      END_STATE();
    case 1145:
      if (lookahead == 'r') ADVANCE(1607);
      END_STATE();
    case 1146:
      if (lookahead == 'r') ADVANCE(1611);
      END_STATE();
    case 1147:
      if (lookahead == 'r') ADVANCE(1612);
      END_STATE();
    case 1148:
      if (lookahead == 'r') ADVANCE(1604);
      END_STATE();
    case 1149:
      if (lookahead == 'r') ADVANCE(1610);
      END_STATE();
    case 1150:
      if (lookahead == 'r') ADVANCE(1614);
      END_STATE();
    case 1151:
      if (lookahead == 'r') ADVANCE(1619);
      END_STATE();
    case 1152:
      if (lookahead == 'r') ADVANCE(1617);
      END_STATE();
    case 1153:
      if (lookahead == 'r') ADVANCE(1616);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(1618);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(1622);
      END_STATE();
    case 1156:
      if (lookahead == 'r') ADVANCE(1623);
      END_STATE();
    case 1157:
      if (lookahead == 'r') ADVANCE(1615);
      END_STATE();
    case 1158:
      if (lookahead == 'r') ADVANCE(1613);
      END_STATE();
    case 1159:
      if (lookahead == 'r') ADVANCE(1621);
      END_STATE();
    case 1160:
      if (lookahead == 'r') ADVANCE(1625);
      END_STATE();
    case 1161:
      if (lookahead == 'r') ADVANCE(1628);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(1627);
      END_STATE();
    case 1163:
      if (lookahead == 'r') ADVANCE(1629);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(1626);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(1624);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(1630);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(1633);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(1634);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(1631);
      END_STATE();
    case 1171:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(788);
      if (lookahead == 'u') ADVANCE(791);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(1226);
      END_STATE();
    case 1174:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 1175:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 1176:
      if (lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 1177:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 1178:
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 1179:
      if (lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 1180:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 1181:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 1182:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 1183:
      if (lookahead == 'r') ADVANCE(1267);
      END_STATE();
    case 1184:
      if (lookahead == 'r') ADVANCE(1268);
      END_STATE();
    case 1185:
      if (lookahead == 'r') ADVANCE(1272);
      END_STATE();
    case 1186:
      if (lookahead == 'r') ADVANCE(1273);
      END_STATE();
    case 1187:
      if (lookahead == 'r') ADVANCE(1275);
      END_STATE();
    case 1188:
      if (lookahead == 'r') ADVANCE(1276);
      END_STATE();
    case 1189:
      if (lookahead == 'r') ADVANCE(1307);
      END_STATE();
    case 1190:
      if (lookahead == 'r') ADVANCE(1289);
      END_STATE();
    case 1191:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 1192:
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 1193:
      if (lookahead == 'r') ADVANCE(807);
      END_STATE();
    case 1194:
      if (lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 1195:
      if (lookahead == 'r') ADVANCE(1182);
      END_STATE();
    case 1196:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 1197:
      if (lookahead == 'r') ADVANCE(1066);
      END_STATE();
    case 1198:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 1199:
      if (lookahead == 'r') ADVANCE(1087);
      END_STATE();
    case 1200:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 1201:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 1202:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 1203:
      if (lookahead == 'r') ADVANCE(1201);
      END_STATE();
    case 1204:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 1205:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 1206:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 1207:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 1208:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 1209:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 1210:
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 1211:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 1212:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 1213:
      if (lookahead == 'r') ADVANCE(1236);
      END_STATE();
    case 1214:
      if (lookahead == 'r') ADVANCE(1237);
      END_STATE();
    case 1215:
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 1216:
      if (lookahead == 's') ADVANCE(1414);
      END_STATE();
    case 1217:
      if (lookahead == 's') ADVANCE(1667);
      END_STATE();
    case 1218:
      if (lookahead == 's') ADVANCE(1417);
      END_STATE();
    case 1219:
      if (lookahead == 's') ADVANCE(1464);
      END_STATE();
    case 1220:
      if (lookahead == 's') ADVANCE(1391);
      END_STATE();
    case 1221:
      if (lookahead == 's') ADVANCE(1365);
      END_STATE();
    case 1222:
      if (lookahead == 's') ADVANCE(1337);
      END_STATE();
    case 1223:
      if (lookahead == 's') ADVANCE(1216);
      END_STATE();
    case 1224:
      if (lookahead == 's') ADVANCE(1340);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(1065);
      END_STATE();
    case 1225:
      if (lookahead == 's') ADVANCE(1219);
      END_STATE();
    case 1226:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 1227:
      if (lookahead == 's') ADVANCE(1245);
      END_STATE();
    case 1228:
      if (lookahead == 's') ADVANCE(1269);
      END_STATE();
    case 1229:
      if (lookahead == 's') ADVANCE(805);
      END_STATE();
    case 1230:
      if (lookahead == 's') ADVANCE(1354);
      END_STATE();
    case 1231:
      if (lookahead == 's') ADVANCE(1393);
      END_STATE();
    case 1232:
      if (lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 1233:
      if (lookahead == 's') ADVANCE(1395);
      END_STATE();
    case 1234:
      if (lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1235:
      if (lookahead == 's') ADVANCE(1397);
      END_STATE();
    case 1236:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 1237:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 1238:
      if (lookahead == 't') ADVANCE(1498);
      END_STATE();
    case 1239:
      if (lookahead == 't') ADVANCE(1505);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(1512);
      END_STATE();
    case 1241:
      if (lookahead == 't') ADVANCE(1519);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(1526);
      END_STATE();
    case 1243:
      if (lookahead == 't') ADVANCE(1533);
      END_STATE();
    case 1244:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 1245:
      if (lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 1246:
      if (lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(1571);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(1576);
      END_STATE();
    case 1249:
      if (lookahead == 't') ADVANCE(1574);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(1573);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(1550);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(1551);
      END_STATE();
    case 1253:
      if (lookahead == 't') ADVANCE(1575);
      END_STATE();
    case 1254:
      if (lookahead == 't') ADVANCE(1579);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(1580);
      END_STATE();
    case 1256:
      if (lookahead == 't') ADVANCE(1572);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(1578);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(1726);
      END_STATE();
    case 1259:
      if (lookahead == 't') ADVANCE(1581);
      END_STATE();
    case 1260:
      if (lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(1596);
      END_STATE();
    case 1262:
      if (lookahead == 't') ADVANCE(1595);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(1554);
      END_STATE();
    case 1264:
      if (lookahead == 't') ADVANCE(1597);
      END_STATE();
    case 1265:
      if (lookahead == 't') ADVANCE(1594);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(1717);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(1504);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(1511);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(1467);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(1482);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(1481);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(1518);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(1525);
      END_STATE();
    case 1274:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(1532);
      END_STATE();
    case 1276:
      if (lookahead == 't') ADVANCE(1539);
      END_STATE();
    case 1277:
      if (lookahead == 't') ADVANCE(1500);
      END_STATE();
    case 1278:
      if (lookahead == 't') ADVANCE(1507);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(1514);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(1521);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1559);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(1443);
      END_STATE();
    case 1283:
      if (lookahead == 't') ADVANCE(1446);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 1285:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 1286:
      if (lookahead == 't') ADVANCE(1535);
      END_STATE();
    case 1287:
      if (lookahead == 't') ADVANCE(1562);
      END_STATE();
    case 1288:
      if (lookahead == 't') ADVANCE(1557);
      END_STATE();
    case 1289:
      if (lookahead == 't') ADVANCE(1570);
      END_STATE();
    case 1290:
      if (lookahead == 't') ADVANCE(1466);
      END_STATE();
    case 1291:
      if (lookahead == 't') ADVANCE(1565);
      END_STATE();
    case 1292:
      if (lookahead == 't') ADVANCE(1542);
      END_STATE();
    case 1293:
      if (lookahead == 't') ADVANCE(1560);
      END_STATE();
    case 1294:
      if (lookahead == 't') ADVANCE(1453);
      END_STATE();
    case 1295:
      if (lookahead == 't') ADVANCE(1567);
      END_STATE();
    case 1296:
      if (lookahead == 't') ADVANCE(1448);
      END_STATE();
    case 1297:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 1298:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 1299:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 1300:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 1301:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 1302:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 1303:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 1304:
      if (lookahead == 't') ADVANCE(1026);
      END_STATE();
    case 1305:
      if (lookahead == 't') ADVANCE(1402);
      END_STATE();
    case 1306:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 1307:
      if (lookahead == 't') ADVANCE(1368);
      END_STATE();
    case 1308:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 1309:
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 1310:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 1311:
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 1312:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 1313:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 1314:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 1315:
      if (lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 1316:
      if (lookahead == 't') ADVANCE(1218);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 1318:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 1319:
      if (lookahead == 't') ADVANCE(1193);
      END_STATE();
    case 1320:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 1321:
      if (lookahead == 't') ADVANCE(848);
      END_STATE();
    case 1322:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 1323:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 1324:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 1325:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 1326:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 1327:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 1328:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 1329:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 1330:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 1331:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 1332:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 1333:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 1334:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 1335:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 1336:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 1337:
      if (lookahead == 't') ADVANCE(1177);
      END_STATE();
    case 1338:
      if (lookahead == 't') ADVANCE(1064);
      END_STATE();
    case 1339:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 1340:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 1341:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 1342:
      if (lookahead == 't') ADVANCE(1043);
      END_STATE();
    case 1343:
      if (lookahead == 't') ADVANCE(768);
      END_STATE();
    case 1344:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 1345:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1346:
      if (lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 1347:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 1348:
      if (lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 1349:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 1350:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 1351:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 1352:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 1353:
      if (lookahead == 't') ADVANCE(849);
      END_STATE();
    case 1354:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 1355:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 1356:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 1357:
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(1118);
      END_STATE();
    case 1358:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 1359:
      if (lookahead == 'u') ADVANCE(1174);
      END_STATE();
    case 1360:
      if (lookahead == 'u') ADVANCE(1178);
      END_STATE();
    case 1361:
      if (lookahead == 'u') ADVANCE(936);
      END_STATE();
    case 1362:
      if (lookahead == 'u') ADVANCE(1239);
      END_STATE();
    case 1363:
      if (lookahead == 'u') ADVANCE(1241);
      END_STATE();
    case 1364:
      if (lookahead == 'u') ADVANCE(824);
      END_STATE();
    case 1365:
      if (lookahead == 'u') ADVANCE(908);
      END_STATE();
    case 1366:
      if (lookahead == 'u') ADVANCE(1322);
      END_STATE();
    case 1367:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 1368:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 1369:
      if (lookahead == 'u') ADVANCE(827);
      END_STATE();
    case 1370:
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 1371:
      if (lookahead == 'u') ADVANCE(830);
      END_STATE();
    case 1372:
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 1373:
      if (lookahead == 'u') ADVANCE(832);
      END_STATE();
    case 1374:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 1375:
      if (lookahead == 'u') ADVANCE(834);
      END_STATE();
    case 1376:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 1377:
      if (lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 1378:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 1379:
      if (lookahead == 'u') ADVANCE(840);
      END_STATE();
    case 1380:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 1381:
      if (lookahead == 'u') ADVANCE(843);
      END_STATE();
    case 1382:
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 1383:
      if (lookahead == 'u') ADVANCE(442);
      END_STATE();
    case 1384:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 1385:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 1386:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 1387:
      if (lookahead == 'v') ADVANCE(615);
      END_STATE();
    case 1388:
      if (lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 1389:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 1390:
      if (lookahead == 'w') ADVANCE(1475);
      END_STATE();
    case 1391:
      if (lookahead == 'w') ADVANCE(851);
      END_STATE();
    case 1392:
      if (lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 1393:
      if (lookahead == 'w') ADVANCE(853);
      END_STATE();
    case 1394:
      if (lookahead == 'w') ADVANCE(854);
      END_STATE();
    case 1395:
      if (lookahead == 'w') ADVANCE(855);
      END_STATE();
    case 1396:
      if (lookahead == 'w') ADVANCE(856);
      END_STATE();
    case 1397:
      if (lookahead == 'w') ADVANCE(857);
      END_STATE();
    case 1398:
      if (lookahead == 'x') ADVANCE(662);
      END_STATE();
    case 1399:
      if (lookahead == 'x') ADVANCE(484);
      END_STATE();
    case 1400:
      if (lookahead == 'y') ADVANCE(1471);
      END_STATE();
    case 1401:
      if (lookahead == 'y') ADVANCE(1472);
      END_STATE();
    case 1402:
      if (lookahead == 'y') ADVANCE(1655);
      END_STATE();
    case 1403:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 1404:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 1405:
      if (lookahead == 'y') ADVANCE(1335);
      END_STATE();
    case 1406:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 1407:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 1408:
      if (lookahead == 'z') ADVANCE(676);
      END_STATE();
    case 1409:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1742);
      END_STATE();
    case 1410:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1433);
      END_STATE();
    case 1411:
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 1412:
      if (eof) ADVANCE(1413);
      if (lookahead == '#') ADVANCE(1735);
      if (lookahead == ',') ADVANCE(1434);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '<') ADVANCE(787);
      if (lookahead == 'L') ADVANCE(1429);
      if (lookahead == '}') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1412)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1430);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_DOTclass);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_DOTsuper);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_DOTsource);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_DOTimplements);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_DOTfield);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_end_field);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_end_method);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_DOTannotation);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_annotation_key);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == ';') ADVANCE(1681);
      if (lookahead == '$' ||
          lookahead == '/') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1428);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_annotation_key);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '$' ||
          lookahead == '/') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1428);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_annotation_key);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1430);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_annotation_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1431);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_end_annotation);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1433);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1435);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_move);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_move_SLASHfrom16);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_move_SLASH16);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_move_DASHwide);
      if (lookahead == '/') ADVANCE(159);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_move_DASHwide_SLASHfrom16);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_move_DASHwide_SLASH16);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_move_DASHobject);
      if (lookahead == '/') ADVANCE(169);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_move_DASHobject_SLASHfrom16);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_move_DASHobject_SLASH16);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_move_DASHresult);
      if (lookahead == '-') ADVANCE(1109);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_move_DASHresult_DASHwide);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_move_DASHresult_DASHobject);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_move_DASHexception);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_return_DASHvoid);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-') ADVANCE(1107);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_return_DASHwide);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_return_DASHobject);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_const_SLASH4);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_const_SLASH16);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '/') ADVANCE(156);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_const_SLASHhigh16);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASH16);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASH32);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_const_DASHwide);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASHhigh16);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_const_DASHstring);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_const_DASHstring_DASHjumbo);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_const_DASHclass);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_monitor_DASHenter);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_monitor_DASHexit);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_check_DASHcast);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_instance_DASHof);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_array_DASHlength);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_new_DASHinstance);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_new_DASHarray);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_filled_DASHnew_DASHarray);
      if (lookahead == '-') ADVANCE(1205);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_filled_DASHnew_DASHarray_DASHrange);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_fill_DASHarray_DASHdata);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '/') ADVANCE(154);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_goto_SLASH16);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_goto_SLASH32);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_packed_DASHswitch);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_sparse_DASHswitch);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_cmpl_DASHfloat);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_cmpg_DASHfloat);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_cmpl_DASHdouble);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_cmpg_DASHdouble);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_cmp_DASHlong);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_if_DASHeq);
      if (lookahead == 'z') ADVANCE(1492);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_if_DASHne);
      if (lookahead == 'z') ADVANCE(1493);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_if_DASHlt);
      if (lookahead == 'z') ADVANCE(1494);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_if_DASHge);
      if (lookahead == 'z') ADVANCE(1495);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_if_DASHgt);
      if (lookahead == 'z') ADVANCE(1496);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_if_DASHle);
      if (lookahead == 'z') ADVANCE(1497);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_if_DASHeqz);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_if_DASHnez);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_if_DASHltz);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_if_DASHgez);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_if_DASHgtz);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_if_DASHlez);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_aget);
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_aget_DASHwide);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_aget_DASHobject);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_aget_DASHboolean);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_aget_DASHbyte);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_aget_DASHchar);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_aget_DASHshort);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_aput);
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_aput_DASHwide);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_aput_DASHobject);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_aput_DASHboolean);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_aput_DASHbyte);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_aput_DASHchar);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_aput_DASHshort);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_iget);
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_iget_DASHwide);
      if (lookahead == '-') ADVANCE(1122);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_iget_DASHobject);
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_iget_DASHboolean);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_iget_DASHbyte);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_iget_DASHchar);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_iget_DASHshort);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_iput);
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_iput_DASHwide);
      if (lookahead == '-') ADVANCE(1123);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_iput_DASHobject);
      if (lookahead == '-') ADVANCE(1125);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_iput_DASHboolean);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_iput_DASHbyte);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_iput_DASHchar);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_iput_DASHshort);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_sget);
      if (lookahead == '-') ADVANCE(433);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_sget_DASHwide);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_sget_DASHobject);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_sget_DASHboolean);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_sget_DASHbyte);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_sget_DASHchar);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_sget_DASHshort);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_sput);
      if (lookahead == '-') ADVANCE(435);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_sput_DASHwide);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_sput_DASHobject);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_sput_DASHboolean);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_sput_DASHbyte);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_sput_DASHchar);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_sput_DASHshort);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual);
      if (lookahead == '-') ADVANCE(1127);
      if (lookahead == '/') ADVANCE(1204);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper);
      if (lookahead == '-') ADVANCE(1126);
      if (lookahead == '/') ADVANCE(1196);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead == '/') ADVANCE(1200);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_invoke_DASHstatic);
      if (lookahead == '/') ADVANCE(1202);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_invoke_DASHinterface);
      if (lookahead == '-') ADVANCE(1207);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_SLASHrange);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_SLASHrange);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect_SLASHrange);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_invoke_DASHstatic_SLASHrange);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_invoke_DASHinterface_DASHrange);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_neg_DASHint);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_not_DASHint);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_neg_DASHlong);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_not_DASHlong);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_neg_DASHfloat);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_neg_DASHdouble);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHlong);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHfloat);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHdouble);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHint);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHfloat);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHdouble);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHint);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHlong);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHdouble);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHint);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHlong);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHfloat);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHbyte);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHchar);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHshort);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_add_DASHint);
      if (lookahead == '/') ADVANCE(176);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_sub_DASHint);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_mul_DASHint);
      if (lookahead == '/') ADVANCE(179);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_div_DASHint);
      if (lookahead == '/') ADVANCE(178);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_rem_DASHint);
      if (lookahead == '/') ADVANCE(181);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_and_DASHint);
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_or_DASHint);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_xor_DASHint);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_shl_DASHint);
      if (lookahead == '/') ADVANCE(182);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_shr_DASHint);
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_add_DASHlong);
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_sub_DASHlong);
      if (lookahead == '/') ADVANCE(193);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_mul_DASHlong);
      if (lookahead == '/') ADVANCE(189);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_div_DASHlong);
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_rem_DASHlong);
      if (lookahead == '/') ADVANCE(190);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_and_DASHlong);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_or_DASHlong);
      if (lookahead == '/') ADVANCE(180);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_xor_DASHlong);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_shl_DASHlong);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_shr_DASHlong);
      if (lookahead == '/') ADVANCE(192);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_ushr_DASHlong);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_add_DASHfloat);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_sub_DASHfloat);
      if (lookahead == '/') ADVANCE(200);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_mul_DASHfloat);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_div_DASHfloat);
      if (lookahead == '/') ADVANCE(197);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_rem_DASHfloat);
      if (lookahead == '/') ADVANCE(199);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_add_DASHdouble);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_sub_DASHdouble);
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_mul_DASHdouble);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_div_DASHdouble);
      if (lookahead == '/') ADVANCE(203);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_rem_DASHdouble);
      if (lookahead == '/') ADVANCE(205);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASH2addr);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASH2addr);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASH2addr);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASH2addr);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASH2addr);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASH2addr);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASH2addr);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASH2addr);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_shl_DASHint_SLASH2addr);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_shr_DASHint_SLASH2addr);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint_SLASH2addr);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_add_DASHlong_SLASH2addr);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_sub_DASHlong_SLASH2addr);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_mul_DASHlong_SLASH2addr);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_div_DASHlong_SLASH2addr);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_rem_DASHlong_SLASH2addr);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_and_DASHlong_SLASH2addr);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_or_DASHlong_SLASH2addr);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_xor_DASHlong_SLASH2addr);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_shl_DASHlong_SLASH2addr);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_shr_DASHlong_SLASH2addr);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_ushr_DASHlong_SLASH2addr);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_add_DASHfloat_SLASH2addr);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_sub_DASHfloat_SLASH2addr);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_mul_DASHfloat_SLASH2addr);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_div_DASHfloat_SLASH2addr);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_rem_DASHfloat_SLASH2addr);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_add_DASHdouble_SLASH2addr);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_sub_DASHdouble_SLASH2addr);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_mul_DASHdouble_SLASH2addr);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_div_DASHdouble_SLASH2addr);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_rem_DASHdouble_SLASH2addr);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASHlit16);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASHlit16);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASHlit16);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASHlit16);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASHlit16);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASHlit16);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASHlit16);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASHlit16);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASHlit8);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASHlit8);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASHlit8);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASHlit8);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASHlit8);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASHlit8);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASHlit8);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASHlit8);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_shl_DASHint_SLASHlit8);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_shr_DASHint_SLASHlit8);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint_SLASHlit8);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_execute_DASHinline);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect_DASHempty);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_iget_DASHquick);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_iget_DASHwide_DASHquick);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_iget_DASHobject_DASHquick);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_iput_DASHquick);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_iput_DASHwide_DASHquick);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_iput_DASHobject_DASHquick);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_DASHquick);
      if (lookahead == '/') ADVANCE(1211);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_DASHquick);
      if (lookahead == '/') ADVANCE(1209);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_DASHquick_SLASHrange);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_DOTline);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_DOTlocals);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_DOTcatch);
      if (lookahead == 'a') ADVANCE(893);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_DOTcatchall);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_DOTpacked_DASHswitch);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_DOTendpacked_DASHswitch);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_DOTsparse_DASHswitch);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_DOTendsparse_DASHswitch);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_DOTarray_DASHdata);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_DOTendarray_DASHdata);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(sym_class_identifier);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_LTinit_GT_LPAREN);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_synthetic);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '(') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1735);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_DOTenum);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1737);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1738);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1739);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1740);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1742);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1684);
      if (lookahead == ':') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == 'x') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1746);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1746);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
  [66] = {.lex_state = 1412},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1412},
  [80] = {.lex_state = 1412},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
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
    [sym_end_method] = ACTIONS(1),
    [anon_sym_DOTannotation] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_build] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_end_annotation] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_move_SLASHfrom16] = ACTIONS(1),
    [anon_sym_move_SLASH16] = ACTIONS(1),
    [anon_sym_move_DASHwide] = ACTIONS(1),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(1),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(1),
    [anon_sym_move_DASHobject] = ACTIONS(1),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(1),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(1),
    [anon_sym_move_DASHresult] = ACTIONS(1),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(1),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(1),
    [anon_sym_move_DASHexception] = ACTIONS(1),
    [anon_sym_return_DASHvoid] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_return_DASHwide] = ACTIONS(1),
    [anon_sym_return_DASHobject] = ACTIONS(1),
    [anon_sym_const_SLASH4] = ACTIONS(1),
    [anon_sym_const_SLASH16] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_const_SLASHhigh16] = ACTIONS(1),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(1),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(1),
    [anon_sym_const_DASHwide] = ACTIONS(1),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(1),
    [anon_sym_const_DASHstring] = ACTIONS(1),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(1),
    [anon_sym_const_DASHclass] = ACTIONS(1),
    [anon_sym_monitor_DASHenter] = ACTIONS(1),
    [anon_sym_monitor_DASHexit] = ACTIONS(1),
    [anon_sym_check_DASHcast] = ACTIONS(1),
    [anon_sym_instance_DASHof] = ACTIONS(1),
    [anon_sym_array_DASHlength] = ACTIONS(1),
    [anon_sym_new_DASHinstance] = ACTIONS(1),
    [anon_sym_new_DASHarray] = ACTIONS(1),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(1),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(1),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_goto_SLASH16] = ACTIONS(1),
    [anon_sym_goto_SLASH32] = ACTIONS(1),
    [anon_sym_packed_DASHswitch] = ACTIONS(1),
    [anon_sym_sparse_DASHswitch] = ACTIONS(1),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(1),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(1),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(1),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(1),
    [anon_sym_cmp_DASHlong] = ACTIONS(1),
    [anon_sym_if_DASHeq] = ACTIONS(1),
    [anon_sym_if_DASHne] = ACTIONS(1),
    [anon_sym_if_DASHlt] = ACTIONS(1),
    [anon_sym_if_DASHge] = ACTIONS(1),
    [anon_sym_if_DASHgt] = ACTIONS(1),
    [anon_sym_if_DASHle] = ACTIONS(1),
    [anon_sym_if_DASHeqz] = ACTIONS(1),
    [anon_sym_if_DASHnez] = ACTIONS(1),
    [anon_sym_if_DASHltz] = ACTIONS(1),
    [anon_sym_if_DASHgez] = ACTIONS(1),
    [anon_sym_if_DASHgtz] = ACTIONS(1),
    [anon_sym_if_DASHlez] = ACTIONS(1),
    [anon_sym_aget] = ACTIONS(1),
    [anon_sym_aget_DASHwide] = ACTIONS(1),
    [anon_sym_aget_DASHobject] = ACTIONS(1),
    [anon_sym_aget_DASHboolean] = ACTIONS(1),
    [anon_sym_aget_DASHbyte] = ACTIONS(1),
    [anon_sym_aget_DASHchar] = ACTIONS(1),
    [anon_sym_aget_DASHshort] = ACTIONS(1),
    [anon_sym_aput] = ACTIONS(1),
    [anon_sym_aput_DASHwide] = ACTIONS(1),
    [anon_sym_aput_DASHobject] = ACTIONS(1),
    [anon_sym_aput_DASHboolean] = ACTIONS(1),
    [anon_sym_aput_DASHbyte] = ACTIONS(1),
    [anon_sym_aput_DASHchar] = ACTIONS(1),
    [anon_sym_aput_DASHshort] = ACTIONS(1),
    [anon_sym_iget] = ACTIONS(1),
    [anon_sym_iget_DASHwide] = ACTIONS(1),
    [anon_sym_iget_DASHobject] = ACTIONS(1),
    [anon_sym_iget_DASHboolean] = ACTIONS(1),
    [anon_sym_iget_DASHbyte] = ACTIONS(1),
    [anon_sym_iget_DASHchar] = ACTIONS(1),
    [anon_sym_iget_DASHshort] = ACTIONS(1),
    [anon_sym_iput] = ACTIONS(1),
    [anon_sym_iput_DASHwide] = ACTIONS(1),
    [anon_sym_iput_DASHobject] = ACTIONS(1),
    [anon_sym_iput_DASHboolean] = ACTIONS(1),
    [anon_sym_iput_DASHbyte] = ACTIONS(1),
    [anon_sym_iput_DASHchar] = ACTIONS(1),
    [anon_sym_iput_DASHshort] = ACTIONS(1),
    [anon_sym_sget] = ACTIONS(1),
    [anon_sym_sget_DASHwide] = ACTIONS(1),
    [anon_sym_sget_DASHobject] = ACTIONS(1),
    [anon_sym_sget_DASHboolean] = ACTIONS(1),
    [anon_sym_sget_DASHbyte] = ACTIONS(1),
    [anon_sym_sget_DASHchar] = ACTIONS(1),
    [anon_sym_sget_DASHshort] = ACTIONS(1),
    [anon_sym_sput] = ACTIONS(1),
    [anon_sym_sput_DASHwide] = ACTIONS(1),
    [anon_sym_sput_DASHobject] = ACTIONS(1),
    [anon_sym_sput_DASHboolean] = ACTIONS(1),
    [anon_sym_sput_DASHbyte] = ACTIONS(1),
    [anon_sym_sput_DASHchar] = ACTIONS(1),
    [anon_sym_sput_DASHshort] = ACTIONS(1),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(1),
    [anon_sym_invoke_DASHsuper] = ACTIONS(1),
    [anon_sym_invoke_DASHdirect] = ACTIONS(1),
    [anon_sym_invoke_DASHstatic] = ACTIONS(1),
    [anon_sym_invoke_DASHinterface] = ACTIONS(1),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(1),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(1),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(1),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(1),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(1),
    [anon_sym_neg_DASHint] = ACTIONS(1),
    [anon_sym_not_DASHint] = ACTIONS(1),
    [anon_sym_neg_DASHlong] = ACTIONS(1),
    [anon_sym_not_DASHlong] = ACTIONS(1),
    [anon_sym_neg_DASHfloat] = ACTIONS(1),
    [anon_sym_neg_DASHdouble] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(1),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(1),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(1),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(1),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(1),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(1),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(1),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(1),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(1),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(1),
    [anon_sym_add_DASHint] = ACTIONS(1),
    [anon_sym_sub_DASHint] = ACTIONS(1),
    [anon_sym_mul_DASHint] = ACTIONS(1),
    [anon_sym_div_DASHint] = ACTIONS(1),
    [anon_sym_rem_DASHint] = ACTIONS(1),
    [anon_sym_and_DASHint] = ACTIONS(1),
    [anon_sym_or_DASHint] = ACTIONS(1),
    [anon_sym_xor_DASHint] = ACTIONS(1),
    [anon_sym_shl_DASHint] = ACTIONS(1),
    [anon_sym_shr_DASHint] = ACTIONS(1),
    [anon_sym_ushr_DASHint] = ACTIONS(1),
    [anon_sym_add_DASHlong] = ACTIONS(1),
    [anon_sym_sub_DASHlong] = ACTIONS(1),
    [anon_sym_mul_DASHlong] = ACTIONS(1),
    [anon_sym_div_DASHlong] = ACTIONS(1),
    [anon_sym_rem_DASHlong] = ACTIONS(1),
    [anon_sym_and_DASHlong] = ACTIONS(1),
    [anon_sym_or_DASHlong] = ACTIONS(1),
    [anon_sym_xor_DASHlong] = ACTIONS(1),
    [anon_sym_shl_DASHlong] = ACTIONS(1),
    [anon_sym_shr_DASHlong] = ACTIONS(1),
    [anon_sym_ushr_DASHlong] = ACTIONS(1),
    [anon_sym_add_DASHfloat] = ACTIONS(1),
    [anon_sym_sub_DASHfloat] = ACTIONS(1),
    [anon_sym_mul_DASHfloat] = ACTIONS(1),
    [anon_sym_div_DASHfloat] = ACTIONS(1),
    [anon_sym_rem_DASHfloat] = ACTIONS(1),
    [anon_sym_add_DASHdouble] = ACTIONS(1),
    [anon_sym_sub_DASHdouble] = ACTIONS(1),
    [anon_sym_mul_DASHdouble] = ACTIONS(1),
    [anon_sym_div_DASHdouble] = ACTIONS(1),
    [anon_sym_rem_DASHdouble] = ACTIONS(1),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(1),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(1),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(1),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(1),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(1),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(1),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(1),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(1),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(1),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(1),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(1),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(1),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(1),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_execute_DASHinline] = ACTIONS(1),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(1),
    [anon_sym_iget_DASHquick] = ACTIONS(1),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(1),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(1),
    [anon_sym_iput_DASHquick] = ACTIONS(1),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(1),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(1),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(1),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(1),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(1),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(1),
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
    [anon_sym_LTinit_GT_LPAREN] = ACTIONS(1),
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
    [sym_variable] = ACTIONS(1),
    [sym_parameter] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [aux_sym_number_literal_token2] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_class_definition] = STATE(180),
    [sym_class_declaration] = STATE(152),
    [anon_sym_DOTclass] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DOTfield] = ACTIONS(7),
    [sym_end_field] = ACTIONS(7),
    [anon_sym_DOTmethod] = ACTIONS(7),
    [sym_end_method] = ACTIONS(7),
    [anon_sym_DOTannotation] = ACTIONS(7),
    [sym_label] = ACTIONS(7),
    [anon_sym_nop] = ACTIONS(7),
    [anon_sym_move] = ACTIONS(9),
    [anon_sym_move_SLASHfrom16] = ACTIONS(7),
    [anon_sym_move_SLASH16] = ACTIONS(7),
    [anon_sym_move_DASHwide] = ACTIONS(9),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(7),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(7),
    [anon_sym_move_DASHobject] = ACTIONS(9),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(7),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(7),
    [anon_sym_move_DASHresult] = ACTIONS(9),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(7),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(7),
    [anon_sym_move_DASHexception] = ACTIONS(7),
    [anon_sym_return_DASHvoid] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_return_DASHwide] = ACTIONS(7),
    [anon_sym_return_DASHobject] = ACTIONS(7),
    [anon_sym_const_SLASH4] = ACTIONS(7),
    [anon_sym_const_SLASH16] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_const_SLASHhigh16] = ACTIONS(7),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(7),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(7),
    [anon_sym_const_DASHwide] = ACTIONS(9),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(7),
    [anon_sym_const_DASHstring] = ACTIONS(9),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(7),
    [anon_sym_const_DASHclass] = ACTIONS(7),
    [anon_sym_monitor_DASHenter] = ACTIONS(7),
    [anon_sym_monitor_DASHexit] = ACTIONS(7),
    [anon_sym_check_DASHcast] = ACTIONS(7),
    [anon_sym_instance_DASHof] = ACTIONS(7),
    [anon_sym_array_DASHlength] = ACTIONS(7),
    [anon_sym_new_DASHinstance] = ACTIONS(7),
    [anon_sym_new_DASHarray] = ACTIONS(7),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(9),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(7),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(7),
    [anon_sym_throw] = ACTIONS(7),
    [anon_sym_goto] = ACTIONS(9),
    [anon_sym_goto_SLASH16] = ACTIONS(7),
    [anon_sym_goto_SLASH32] = ACTIONS(7),
    [anon_sym_packed_DASHswitch] = ACTIONS(7),
    [anon_sym_sparse_DASHswitch] = ACTIONS(7),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(7),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(7),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(7),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(7),
    [anon_sym_cmp_DASHlong] = ACTIONS(7),
    [anon_sym_if_DASHeq] = ACTIONS(9),
    [anon_sym_if_DASHne] = ACTIONS(9),
    [anon_sym_if_DASHlt] = ACTIONS(9),
    [anon_sym_if_DASHge] = ACTIONS(9),
    [anon_sym_if_DASHgt] = ACTIONS(9),
    [anon_sym_if_DASHle] = ACTIONS(9),
    [anon_sym_if_DASHeqz] = ACTIONS(7),
    [anon_sym_if_DASHnez] = ACTIONS(7),
    [anon_sym_if_DASHltz] = ACTIONS(7),
    [anon_sym_if_DASHgez] = ACTIONS(7),
    [anon_sym_if_DASHgtz] = ACTIONS(7),
    [anon_sym_if_DASHlez] = ACTIONS(7),
    [anon_sym_aget] = ACTIONS(9),
    [anon_sym_aget_DASHwide] = ACTIONS(7),
    [anon_sym_aget_DASHobject] = ACTIONS(7),
    [anon_sym_aget_DASHboolean] = ACTIONS(7),
    [anon_sym_aget_DASHbyte] = ACTIONS(7),
    [anon_sym_aget_DASHchar] = ACTIONS(7),
    [anon_sym_aget_DASHshort] = ACTIONS(7),
    [anon_sym_aput] = ACTIONS(9),
    [anon_sym_aput_DASHwide] = ACTIONS(7),
    [anon_sym_aput_DASHobject] = ACTIONS(7),
    [anon_sym_aput_DASHboolean] = ACTIONS(7),
    [anon_sym_aput_DASHbyte] = ACTIONS(7),
    [anon_sym_aput_DASHchar] = ACTIONS(7),
    [anon_sym_aput_DASHshort] = ACTIONS(7),
    [anon_sym_iget] = ACTIONS(9),
    [anon_sym_iget_DASHwide] = ACTIONS(9),
    [anon_sym_iget_DASHobject] = ACTIONS(9),
    [anon_sym_iget_DASHboolean] = ACTIONS(7),
    [anon_sym_iget_DASHbyte] = ACTIONS(7),
    [anon_sym_iget_DASHchar] = ACTIONS(7),
    [anon_sym_iget_DASHshort] = ACTIONS(7),
    [anon_sym_iput] = ACTIONS(9),
    [anon_sym_iput_DASHwide] = ACTIONS(9),
    [anon_sym_iput_DASHobject] = ACTIONS(9),
    [anon_sym_iput_DASHboolean] = ACTIONS(7),
    [anon_sym_iput_DASHbyte] = ACTIONS(7),
    [anon_sym_iput_DASHchar] = ACTIONS(7),
    [anon_sym_iput_DASHshort] = ACTIONS(7),
    [anon_sym_sget] = ACTIONS(9),
    [anon_sym_sget_DASHwide] = ACTIONS(7),
    [anon_sym_sget_DASHobject] = ACTIONS(7),
    [anon_sym_sget_DASHboolean] = ACTIONS(7),
    [anon_sym_sget_DASHbyte] = ACTIONS(7),
    [anon_sym_sget_DASHchar] = ACTIONS(7),
    [anon_sym_sget_DASHshort] = ACTIONS(7),
    [anon_sym_sput] = ACTIONS(9),
    [anon_sym_sput_DASHwide] = ACTIONS(7),
    [anon_sym_sput_DASHobject] = ACTIONS(7),
    [anon_sym_sput_DASHboolean] = ACTIONS(7),
    [anon_sym_sput_DASHbyte] = ACTIONS(7),
    [anon_sym_sput_DASHchar] = ACTIONS(7),
    [anon_sym_sput_DASHshort] = ACTIONS(7),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(9),
    [anon_sym_invoke_DASHsuper] = ACTIONS(9),
    [anon_sym_invoke_DASHdirect] = ACTIONS(9),
    [anon_sym_invoke_DASHstatic] = ACTIONS(9),
    [anon_sym_invoke_DASHinterface] = ACTIONS(9),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(7),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(7),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(7),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(7),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(7),
    [anon_sym_neg_DASHint] = ACTIONS(7),
    [anon_sym_not_DASHint] = ACTIONS(7),
    [anon_sym_neg_DASHlong] = ACTIONS(7),
    [anon_sym_not_DASHlong] = ACTIONS(7),
    [anon_sym_neg_DASHfloat] = ACTIONS(7),
    [anon_sym_neg_DASHdouble] = ACTIONS(7),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(7),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(7),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(7),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(7),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(7),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(7),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(7),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(7),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(7),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(7),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(7),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(7),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(7),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(7),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(7),
    [anon_sym_add_DASHint] = ACTIONS(9),
    [anon_sym_sub_DASHint] = ACTIONS(9),
    [anon_sym_mul_DASHint] = ACTIONS(9),
    [anon_sym_div_DASHint] = ACTIONS(9),
    [anon_sym_rem_DASHint] = ACTIONS(9),
    [anon_sym_and_DASHint] = ACTIONS(9),
    [anon_sym_or_DASHint] = ACTIONS(9),
    [anon_sym_xor_DASHint] = ACTIONS(9),
    [anon_sym_shl_DASHint] = ACTIONS(9),
    [anon_sym_shr_DASHint] = ACTIONS(9),
    [anon_sym_ushr_DASHint] = ACTIONS(9),
    [anon_sym_add_DASHlong] = ACTIONS(9),
    [anon_sym_sub_DASHlong] = ACTIONS(9),
    [anon_sym_mul_DASHlong] = ACTIONS(9),
    [anon_sym_div_DASHlong] = ACTIONS(9),
    [anon_sym_rem_DASHlong] = ACTIONS(9),
    [anon_sym_and_DASHlong] = ACTIONS(9),
    [anon_sym_or_DASHlong] = ACTIONS(9),
    [anon_sym_xor_DASHlong] = ACTIONS(9),
    [anon_sym_shl_DASHlong] = ACTIONS(9),
    [anon_sym_shr_DASHlong] = ACTIONS(9),
    [anon_sym_ushr_DASHlong] = ACTIONS(9),
    [anon_sym_add_DASHfloat] = ACTIONS(9),
    [anon_sym_sub_DASHfloat] = ACTIONS(9),
    [anon_sym_mul_DASHfloat] = ACTIONS(9),
    [anon_sym_div_DASHfloat] = ACTIONS(9),
    [anon_sym_rem_DASHfloat] = ACTIONS(9),
    [anon_sym_add_DASHdouble] = ACTIONS(9),
    [anon_sym_sub_DASHdouble] = ACTIONS(9),
    [anon_sym_mul_DASHdouble] = ACTIONS(9),
    [anon_sym_div_DASHdouble] = ACTIONS(9),
    [anon_sym_rem_DASHdouble] = ACTIONS(9),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(7),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(7),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(7),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(7),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(7),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(7),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(7),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(7),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(7),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(7),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(7),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(7),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(7),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_execute_DASHinline] = ACTIONS(7),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(7),
    [anon_sym_iget_DASHquick] = ACTIONS(7),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(7),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(7),
    [anon_sym_iput_DASHquick] = ACTIONS(7),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(7),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(7),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(9),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(7),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(9),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(7),
    [anon_sym_DOTline] = ACTIONS(7),
    [anon_sym_DOTlocals] = ACTIONS(7),
    [anon_sym_DOTparam] = ACTIONS(7),
    [anon_sym_DOTcatch] = ACTIONS(9),
    [anon_sym_DOTcatchall] = ACTIONS(7),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(7),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(7),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(7),
    [sym_class_identifier] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_V] = ACTIONS(7),
    [anon_sym_Z] = ACTIONS(7),
    [anon_sym_B] = ACTIONS(7),
    [anon_sym_S] = ACTIONS(7),
    [anon_sym_C] = ACTIONS(7),
    [anon_sym_I] = ACTIONS(7),
    [anon_sym_J] = ACTIONS(7),
    [anon_sym_F] = ACTIONS(7),
    [anon_sym_D] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DOTfield] = ACTIONS(11),
    [sym_end_field] = ACTIONS(11),
    [anon_sym_DOTmethod] = ACTIONS(11),
    [sym_end_method] = ACTIONS(11),
    [anon_sym_DOTannotation] = ACTIONS(11),
    [sym_label] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_move] = ACTIONS(13),
    [anon_sym_move_SLASHfrom16] = ACTIONS(11),
    [anon_sym_move_SLASH16] = ACTIONS(11),
    [anon_sym_move_DASHwide] = ACTIONS(13),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(11),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(11),
    [anon_sym_move_DASHobject] = ACTIONS(13),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(11),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(11),
    [anon_sym_move_DASHresult] = ACTIONS(13),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(11),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(11),
    [anon_sym_move_DASHexception] = ACTIONS(11),
    [anon_sym_return_DASHvoid] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_return_DASHwide] = ACTIONS(11),
    [anon_sym_return_DASHobject] = ACTIONS(11),
    [anon_sym_const_SLASH4] = ACTIONS(11),
    [anon_sym_const_SLASH16] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_const_SLASHhigh16] = ACTIONS(11),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(11),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(11),
    [anon_sym_const_DASHwide] = ACTIONS(13),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(11),
    [anon_sym_const_DASHstring] = ACTIONS(13),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(11),
    [anon_sym_const_DASHclass] = ACTIONS(11),
    [anon_sym_monitor_DASHenter] = ACTIONS(11),
    [anon_sym_monitor_DASHexit] = ACTIONS(11),
    [anon_sym_check_DASHcast] = ACTIONS(11),
    [anon_sym_instance_DASHof] = ACTIONS(11),
    [anon_sym_array_DASHlength] = ACTIONS(11),
    [anon_sym_new_DASHinstance] = ACTIONS(11),
    [anon_sym_new_DASHarray] = ACTIONS(11),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(13),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(11),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(11),
    [anon_sym_throw] = ACTIONS(11),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_goto_SLASH16] = ACTIONS(11),
    [anon_sym_goto_SLASH32] = ACTIONS(11),
    [anon_sym_packed_DASHswitch] = ACTIONS(11),
    [anon_sym_sparse_DASHswitch] = ACTIONS(11),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(11),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(11),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(11),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(11),
    [anon_sym_cmp_DASHlong] = ACTIONS(11),
    [anon_sym_if_DASHeq] = ACTIONS(13),
    [anon_sym_if_DASHne] = ACTIONS(13),
    [anon_sym_if_DASHlt] = ACTIONS(13),
    [anon_sym_if_DASHge] = ACTIONS(13),
    [anon_sym_if_DASHgt] = ACTIONS(13),
    [anon_sym_if_DASHle] = ACTIONS(13),
    [anon_sym_if_DASHeqz] = ACTIONS(11),
    [anon_sym_if_DASHnez] = ACTIONS(11),
    [anon_sym_if_DASHltz] = ACTIONS(11),
    [anon_sym_if_DASHgez] = ACTIONS(11),
    [anon_sym_if_DASHgtz] = ACTIONS(11),
    [anon_sym_if_DASHlez] = ACTIONS(11),
    [anon_sym_aget] = ACTIONS(13),
    [anon_sym_aget_DASHwide] = ACTIONS(11),
    [anon_sym_aget_DASHobject] = ACTIONS(11),
    [anon_sym_aget_DASHboolean] = ACTIONS(11),
    [anon_sym_aget_DASHbyte] = ACTIONS(11),
    [anon_sym_aget_DASHchar] = ACTIONS(11),
    [anon_sym_aget_DASHshort] = ACTIONS(11),
    [anon_sym_aput] = ACTIONS(13),
    [anon_sym_aput_DASHwide] = ACTIONS(11),
    [anon_sym_aput_DASHobject] = ACTIONS(11),
    [anon_sym_aput_DASHboolean] = ACTIONS(11),
    [anon_sym_aput_DASHbyte] = ACTIONS(11),
    [anon_sym_aput_DASHchar] = ACTIONS(11),
    [anon_sym_aput_DASHshort] = ACTIONS(11),
    [anon_sym_iget] = ACTIONS(13),
    [anon_sym_iget_DASHwide] = ACTIONS(13),
    [anon_sym_iget_DASHobject] = ACTIONS(13),
    [anon_sym_iget_DASHboolean] = ACTIONS(11),
    [anon_sym_iget_DASHbyte] = ACTIONS(11),
    [anon_sym_iget_DASHchar] = ACTIONS(11),
    [anon_sym_iget_DASHshort] = ACTIONS(11),
    [anon_sym_iput] = ACTIONS(13),
    [anon_sym_iput_DASHwide] = ACTIONS(13),
    [anon_sym_iput_DASHobject] = ACTIONS(13),
    [anon_sym_iput_DASHboolean] = ACTIONS(11),
    [anon_sym_iput_DASHbyte] = ACTIONS(11),
    [anon_sym_iput_DASHchar] = ACTIONS(11),
    [anon_sym_iput_DASHshort] = ACTIONS(11),
    [anon_sym_sget] = ACTIONS(13),
    [anon_sym_sget_DASHwide] = ACTIONS(11),
    [anon_sym_sget_DASHobject] = ACTIONS(11),
    [anon_sym_sget_DASHboolean] = ACTIONS(11),
    [anon_sym_sget_DASHbyte] = ACTIONS(11),
    [anon_sym_sget_DASHchar] = ACTIONS(11),
    [anon_sym_sget_DASHshort] = ACTIONS(11),
    [anon_sym_sput] = ACTIONS(13),
    [anon_sym_sput_DASHwide] = ACTIONS(11),
    [anon_sym_sput_DASHobject] = ACTIONS(11),
    [anon_sym_sput_DASHboolean] = ACTIONS(11),
    [anon_sym_sput_DASHbyte] = ACTIONS(11),
    [anon_sym_sput_DASHchar] = ACTIONS(11),
    [anon_sym_sput_DASHshort] = ACTIONS(11),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(13),
    [anon_sym_invoke_DASHsuper] = ACTIONS(13),
    [anon_sym_invoke_DASHdirect] = ACTIONS(13),
    [anon_sym_invoke_DASHstatic] = ACTIONS(13),
    [anon_sym_invoke_DASHinterface] = ACTIONS(13),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(11),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(11),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(11),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(11),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(11),
    [anon_sym_neg_DASHint] = ACTIONS(11),
    [anon_sym_not_DASHint] = ACTIONS(11),
    [anon_sym_neg_DASHlong] = ACTIONS(11),
    [anon_sym_not_DASHlong] = ACTIONS(11),
    [anon_sym_neg_DASHfloat] = ACTIONS(11),
    [anon_sym_neg_DASHdouble] = ACTIONS(11),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(11),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(11),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(11),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(11),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(11),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(11),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(11),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(11),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(11),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(11),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(11),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(11),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(11),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(11),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(11),
    [anon_sym_add_DASHint] = ACTIONS(13),
    [anon_sym_sub_DASHint] = ACTIONS(13),
    [anon_sym_mul_DASHint] = ACTIONS(13),
    [anon_sym_div_DASHint] = ACTIONS(13),
    [anon_sym_rem_DASHint] = ACTIONS(13),
    [anon_sym_and_DASHint] = ACTIONS(13),
    [anon_sym_or_DASHint] = ACTIONS(13),
    [anon_sym_xor_DASHint] = ACTIONS(13),
    [anon_sym_shl_DASHint] = ACTIONS(13),
    [anon_sym_shr_DASHint] = ACTIONS(13),
    [anon_sym_ushr_DASHint] = ACTIONS(13),
    [anon_sym_add_DASHlong] = ACTIONS(13),
    [anon_sym_sub_DASHlong] = ACTIONS(13),
    [anon_sym_mul_DASHlong] = ACTIONS(13),
    [anon_sym_div_DASHlong] = ACTIONS(13),
    [anon_sym_rem_DASHlong] = ACTIONS(13),
    [anon_sym_and_DASHlong] = ACTIONS(13),
    [anon_sym_or_DASHlong] = ACTIONS(13),
    [anon_sym_xor_DASHlong] = ACTIONS(13),
    [anon_sym_shl_DASHlong] = ACTIONS(13),
    [anon_sym_shr_DASHlong] = ACTIONS(13),
    [anon_sym_ushr_DASHlong] = ACTIONS(13),
    [anon_sym_add_DASHfloat] = ACTIONS(13),
    [anon_sym_sub_DASHfloat] = ACTIONS(13),
    [anon_sym_mul_DASHfloat] = ACTIONS(13),
    [anon_sym_div_DASHfloat] = ACTIONS(13),
    [anon_sym_rem_DASHfloat] = ACTIONS(13),
    [anon_sym_add_DASHdouble] = ACTIONS(13),
    [anon_sym_sub_DASHdouble] = ACTIONS(13),
    [anon_sym_mul_DASHdouble] = ACTIONS(13),
    [anon_sym_div_DASHdouble] = ACTIONS(13),
    [anon_sym_rem_DASHdouble] = ACTIONS(13),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(11),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(11),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(11),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(11),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(11),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(11),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(11),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(11),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(11),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(11),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(11),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(11),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(11),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_execute_DASHinline] = ACTIONS(11),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(11),
    [anon_sym_iget_DASHquick] = ACTIONS(11),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(11),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(11),
    [anon_sym_iput_DASHquick] = ACTIONS(11),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(11),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(11),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(13),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(11),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(13),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(11),
    [anon_sym_DOTline] = ACTIONS(11),
    [anon_sym_DOTlocals] = ACTIONS(11),
    [anon_sym_DOTparam] = ACTIONS(11),
    [anon_sym_DOTcatch] = ACTIONS(13),
    [anon_sym_DOTcatchall] = ACTIONS(11),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(11),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(11),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(11),
    [sym_class_identifier] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_V] = ACTIONS(11),
    [anon_sym_Z] = ACTIONS(11),
    [anon_sym_B] = ACTIONS(11),
    [anon_sym_S] = ACTIONS(11),
    [anon_sym_C] = ACTIONS(11),
    [anon_sym_I] = ACTIONS(11),
    [anon_sym_J] = ACTIONS(11),
    [anon_sym_F] = ACTIONS(11),
    [anon_sym_D] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_annotation_definition] = STATE(13),
    [sym_annotation_declaration] = STATE(114),
    [sym__code_line] = STATE(13),
    [sym_statement] = STATE(13),
    [sym_opcode] = STATE(31),
    [sym__declaration] = STATE(13),
    [sym_line_declaration] = STATE(13),
    [sym_locals_declaration] = STATE(13),
    [sym_param_declaration] = STATE(13),
    [sym_catch_declaration] = STATE(13),
    [sym_catchall_declaration] = STATE(13),
    [sym_packed_switch_declaration] = STATE(13),
    [sym_sparse_switch_declaration] = STATE(13),
    [sym_array_data_declaration] = STATE(13),
    [aux_sym_method_definition_repeat1] = STATE(4),
    [sym_end_method] = ACTIONS(15),
    [anon_sym_DOTannotation] = ACTIONS(17),
    [sym_label] = ACTIONS(20),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_move] = ACTIONS(26),
    [anon_sym_move_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHwide] = ACTIONS(26),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHobject] = ACTIONS(26),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHresult] = ACTIONS(26),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(23),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(23),
    [anon_sym_move_DASHexception] = ACTIONS(23),
    [anon_sym_return_DASHvoid] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(26),
    [anon_sym_return_DASHwide] = ACTIONS(23),
    [anon_sym_return_DASHobject] = ACTIONS(23),
    [anon_sym_const_SLASH4] = ACTIONS(23),
    [anon_sym_const_SLASH16] = ACTIONS(23),
    [anon_sym_const] = ACTIONS(26),
    [anon_sym_const_SLASHhigh16] = ACTIONS(23),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(23),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(23),
    [anon_sym_const_DASHwide] = ACTIONS(26),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(23),
    [anon_sym_const_DASHstring] = ACTIONS(26),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(23),
    [anon_sym_const_DASHclass] = ACTIONS(23),
    [anon_sym_monitor_DASHenter] = ACTIONS(23),
    [anon_sym_monitor_DASHexit] = ACTIONS(23),
    [anon_sym_check_DASHcast] = ACTIONS(23),
    [anon_sym_instance_DASHof] = ACTIONS(23),
    [anon_sym_array_DASHlength] = ACTIONS(23),
    [anon_sym_new_DASHinstance] = ACTIONS(23),
    [anon_sym_new_DASHarray] = ACTIONS(23),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(26),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(23),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(26),
    [anon_sym_goto_SLASH16] = ACTIONS(23),
    [anon_sym_goto_SLASH32] = ACTIONS(23),
    [anon_sym_packed_DASHswitch] = ACTIONS(23),
    [anon_sym_sparse_DASHswitch] = ACTIONS(23),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(23),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(23),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(23),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(23),
    [anon_sym_cmp_DASHlong] = ACTIONS(23),
    [anon_sym_if_DASHeq] = ACTIONS(26),
    [anon_sym_if_DASHne] = ACTIONS(26),
    [anon_sym_if_DASHlt] = ACTIONS(26),
    [anon_sym_if_DASHge] = ACTIONS(26),
    [anon_sym_if_DASHgt] = ACTIONS(26),
    [anon_sym_if_DASHle] = ACTIONS(26),
    [anon_sym_if_DASHeqz] = ACTIONS(23),
    [anon_sym_if_DASHnez] = ACTIONS(23),
    [anon_sym_if_DASHltz] = ACTIONS(23),
    [anon_sym_if_DASHgez] = ACTIONS(23),
    [anon_sym_if_DASHgtz] = ACTIONS(23),
    [anon_sym_if_DASHlez] = ACTIONS(23),
    [anon_sym_aget] = ACTIONS(26),
    [anon_sym_aget_DASHwide] = ACTIONS(23),
    [anon_sym_aget_DASHobject] = ACTIONS(23),
    [anon_sym_aget_DASHboolean] = ACTIONS(23),
    [anon_sym_aget_DASHbyte] = ACTIONS(23),
    [anon_sym_aget_DASHchar] = ACTIONS(23),
    [anon_sym_aget_DASHshort] = ACTIONS(23),
    [anon_sym_aput] = ACTIONS(26),
    [anon_sym_aput_DASHwide] = ACTIONS(23),
    [anon_sym_aput_DASHobject] = ACTIONS(23),
    [anon_sym_aput_DASHboolean] = ACTIONS(23),
    [anon_sym_aput_DASHbyte] = ACTIONS(23),
    [anon_sym_aput_DASHchar] = ACTIONS(23),
    [anon_sym_aput_DASHshort] = ACTIONS(23),
    [anon_sym_iget] = ACTIONS(26),
    [anon_sym_iget_DASHwide] = ACTIONS(26),
    [anon_sym_iget_DASHobject] = ACTIONS(26),
    [anon_sym_iget_DASHboolean] = ACTIONS(23),
    [anon_sym_iget_DASHbyte] = ACTIONS(23),
    [anon_sym_iget_DASHchar] = ACTIONS(23),
    [anon_sym_iget_DASHshort] = ACTIONS(23),
    [anon_sym_iput] = ACTIONS(26),
    [anon_sym_iput_DASHwide] = ACTIONS(26),
    [anon_sym_iput_DASHobject] = ACTIONS(26),
    [anon_sym_iput_DASHboolean] = ACTIONS(23),
    [anon_sym_iput_DASHbyte] = ACTIONS(23),
    [anon_sym_iput_DASHchar] = ACTIONS(23),
    [anon_sym_iput_DASHshort] = ACTIONS(23),
    [anon_sym_sget] = ACTIONS(26),
    [anon_sym_sget_DASHwide] = ACTIONS(23),
    [anon_sym_sget_DASHobject] = ACTIONS(23),
    [anon_sym_sget_DASHboolean] = ACTIONS(23),
    [anon_sym_sget_DASHbyte] = ACTIONS(23),
    [anon_sym_sget_DASHchar] = ACTIONS(23),
    [anon_sym_sget_DASHshort] = ACTIONS(23),
    [anon_sym_sput] = ACTIONS(26),
    [anon_sym_sput_DASHwide] = ACTIONS(23),
    [anon_sym_sput_DASHobject] = ACTIONS(23),
    [anon_sym_sput_DASHboolean] = ACTIONS(23),
    [anon_sym_sput_DASHbyte] = ACTIONS(23),
    [anon_sym_sput_DASHchar] = ACTIONS(23),
    [anon_sym_sput_DASHshort] = ACTIONS(23),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(26),
    [anon_sym_invoke_DASHsuper] = ACTIONS(26),
    [anon_sym_invoke_DASHdirect] = ACTIONS(26),
    [anon_sym_invoke_DASHstatic] = ACTIONS(26),
    [anon_sym_invoke_DASHinterface] = ACTIONS(26),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(23),
    [anon_sym_neg_DASHint] = ACTIONS(23),
    [anon_sym_not_DASHint] = ACTIONS(23),
    [anon_sym_neg_DASHlong] = ACTIONS(23),
    [anon_sym_not_DASHlong] = ACTIONS(23),
    [anon_sym_neg_DASHfloat] = ACTIONS(23),
    [anon_sym_neg_DASHdouble] = ACTIONS(23),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(23),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(23),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(23),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(23),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(23),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(23),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(23),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(23),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(23),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(23),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(23),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(23),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(23),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(23),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(23),
    [anon_sym_add_DASHint] = ACTIONS(26),
    [anon_sym_sub_DASHint] = ACTIONS(26),
    [anon_sym_mul_DASHint] = ACTIONS(26),
    [anon_sym_div_DASHint] = ACTIONS(26),
    [anon_sym_rem_DASHint] = ACTIONS(26),
    [anon_sym_and_DASHint] = ACTIONS(26),
    [anon_sym_or_DASHint] = ACTIONS(26),
    [anon_sym_xor_DASHint] = ACTIONS(26),
    [anon_sym_shl_DASHint] = ACTIONS(26),
    [anon_sym_shr_DASHint] = ACTIONS(26),
    [anon_sym_ushr_DASHint] = ACTIONS(26),
    [anon_sym_add_DASHlong] = ACTIONS(26),
    [anon_sym_sub_DASHlong] = ACTIONS(26),
    [anon_sym_mul_DASHlong] = ACTIONS(26),
    [anon_sym_div_DASHlong] = ACTIONS(26),
    [anon_sym_rem_DASHlong] = ACTIONS(26),
    [anon_sym_and_DASHlong] = ACTIONS(26),
    [anon_sym_or_DASHlong] = ACTIONS(26),
    [anon_sym_xor_DASHlong] = ACTIONS(26),
    [anon_sym_shl_DASHlong] = ACTIONS(26),
    [anon_sym_shr_DASHlong] = ACTIONS(26),
    [anon_sym_ushr_DASHlong] = ACTIONS(26),
    [anon_sym_add_DASHfloat] = ACTIONS(26),
    [anon_sym_sub_DASHfloat] = ACTIONS(26),
    [anon_sym_mul_DASHfloat] = ACTIONS(26),
    [anon_sym_div_DASHfloat] = ACTIONS(26),
    [anon_sym_rem_DASHfloat] = ACTIONS(26),
    [anon_sym_add_DASHdouble] = ACTIONS(26),
    [anon_sym_sub_DASHdouble] = ACTIONS(26),
    [anon_sym_mul_DASHdouble] = ACTIONS(26),
    [anon_sym_div_DASHdouble] = ACTIONS(26),
    [anon_sym_rem_DASHdouble] = ACTIONS(26),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(23),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(23),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(23),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(23),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(23),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(23),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(23),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(23),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(23),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(23),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(23),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(23),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(23),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_execute_DASHinline] = ACTIONS(23),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(23),
    [anon_sym_iget_DASHquick] = ACTIONS(23),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(23),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(23),
    [anon_sym_iput_DASHquick] = ACTIONS(23),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(23),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(23),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(26),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(26),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(23),
    [anon_sym_DOTline] = ACTIONS(29),
    [anon_sym_DOTlocals] = ACTIONS(32),
    [anon_sym_DOTparam] = ACTIONS(35),
    [anon_sym_DOTcatch] = ACTIONS(38),
    [anon_sym_DOTcatchall] = ACTIONS(41),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(44),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(47),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_annotation_definition] = STATE(13),
    [sym_annotation_declaration] = STATE(114),
    [sym__code_line] = STATE(13),
    [sym_statement] = STATE(13),
    [sym_opcode] = STATE(31),
    [sym__declaration] = STATE(13),
    [sym_line_declaration] = STATE(13),
    [sym_locals_declaration] = STATE(13),
    [sym_param_declaration] = STATE(13),
    [sym_catch_declaration] = STATE(13),
    [sym_catchall_declaration] = STATE(13),
    [sym_packed_switch_declaration] = STATE(13),
    [sym_sparse_switch_declaration] = STATE(13),
    [sym_array_data_declaration] = STATE(13),
    [aux_sym_method_definition_repeat1] = STATE(6),
    [sym_end_method] = ACTIONS(53),
    [anon_sym_DOTannotation] = ACTIONS(55),
    [sym_label] = ACTIONS(57),
    [anon_sym_nop] = ACTIONS(59),
    [anon_sym_move] = ACTIONS(61),
    [anon_sym_move_SLASHfrom16] = ACTIONS(59),
    [anon_sym_move_SLASH16] = ACTIONS(59),
    [anon_sym_move_DASHwide] = ACTIONS(61),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(59),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(59),
    [anon_sym_move_DASHobject] = ACTIONS(61),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(59),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(59),
    [anon_sym_move_DASHresult] = ACTIONS(61),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(59),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(59),
    [anon_sym_move_DASHexception] = ACTIONS(59),
    [anon_sym_return_DASHvoid] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_return_DASHwide] = ACTIONS(59),
    [anon_sym_return_DASHobject] = ACTIONS(59),
    [anon_sym_const_SLASH4] = ACTIONS(59),
    [anon_sym_const_SLASH16] = ACTIONS(59),
    [anon_sym_const] = ACTIONS(61),
    [anon_sym_const_SLASHhigh16] = ACTIONS(59),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(59),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(59),
    [anon_sym_const_DASHwide] = ACTIONS(61),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(59),
    [anon_sym_const_DASHstring] = ACTIONS(61),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(59),
    [anon_sym_const_DASHclass] = ACTIONS(59),
    [anon_sym_monitor_DASHenter] = ACTIONS(59),
    [anon_sym_monitor_DASHexit] = ACTIONS(59),
    [anon_sym_check_DASHcast] = ACTIONS(59),
    [anon_sym_instance_DASHof] = ACTIONS(59),
    [anon_sym_array_DASHlength] = ACTIONS(59),
    [anon_sym_new_DASHinstance] = ACTIONS(59),
    [anon_sym_new_DASHarray] = ACTIONS(59),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(61),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(59),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(59),
    [anon_sym_throw] = ACTIONS(59),
    [anon_sym_goto] = ACTIONS(61),
    [anon_sym_goto_SLASH16] = ACTIONS(59),
    [anon_sym_goto_SLASH32] = ACTIONS(59),
    [anon_sym_packed_DASHswitch] = ACTIONS(59),
    [anon_sym_sparse_DASHswitch] = ACTIONS(59),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(59),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(59),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(59),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(59),
    [anon_sym_cmp_DASHlong] = ACTIONS(59),
    [anon_sym_if_DASHeq] = ACTIONS(61),
    [anon_sym_if_DASHne] = ACTIONS(61),
    [anon_sym_if_DASHlt] = ACTIONS(61),
    [anon_sym_if_DASHge] = ACTIONS(61),
    [anon_sym_if_DASHgt] = ACTIONS(61),
    [anon_sym_if_DASHle] = ACTIONS(61),
    [anon_sym_if_DASHeqz] = ACTIONS(59),
    [anon_sym_if_DASHnez] = ACTIONS(59),
    [anon_sym_if_DASHltz] = ACTIONS(59),
    [anon_sym_if_DASHgez] = ACTIONS(59),
    [anon_sym_if_DASHgtz] = ACTIONS(59),
    [anon_sym_if_DASHlez] = ACTIONS(59),
    [anon_sym_aget] = ACTIONS(61),
    [anon_sym_aget_DASHwide] = ACTIONS(59),
    [anon_sym_aget_DASHobject] = ACTIONS(59),
    [anon_sym_aget_DASHboolean] = ACTIONS(59),
    [anon_sym_aget_DASHbyte] = ACTIONS(59),
    [anon_sym_aget_DASHchar] = ACTIONS(59),
    [anon_sym_aget_DASHshort] = ACTIONS(59),
    [anon_sym_aput] = ACTIONS(61),
    [anon_sym_aput_DASHwide] = ACTIONS(59),
    [anon_sym_aput_DASHobject] = ACTIONS(59),
    [anon_sym_aput_DASHboolean] = ACTIONS(59),
    [anon_sym_aput_DASHbyte] = ACTIONS(59),
    [anon_sym_aput_DASHchar] = ACTIONS(59),
    [anon_sym_aput_DASHshort] = ACTIONS(59),
    [anon_sym_iget] = ACTIONS(61),
    [anon_sym_iget_DASHwide] = ACTIONS(61),
    [anon_sym_iget_DASHobject] = ACTIONS(61),
    [anon_sym_iget_DASHboolean] = ACTIONS(59),
    [anon_sym_iget_DASHbyte] = ACTIONS(59),
    [anon_sym_iget_DASHchar] = ACTIONS(59),
    [anon_sym_iget_DASHshort] = ACTIONS(59),
    [anon_sym_iput] = ACTIONS(61),
    [anon_sym_iput_DASHwide] = ACTIONS(61),
    [anon_sym_iput_DASHobject] = ACTIONS(61),
    [anon_sym_iput_DASHboolean] = ACTIONS(59),
    [anon_sym_iput_DASHbyte] = ACTIONS(59),
    [anon_sym_iput_DASHchar] = ACTIONS(59),
    [anon_sym_iput_DASHshort] = ACTIONS(59),
    [anon_sym_sget] = ACTIONS(61),
    [anon_sym_sget_DASHwide] = ACTIONS(59),
    [anon_sym_sget_DASHobject] = ACTIONS(59),
    [anon_sym_sget_DASHboolean] = ACTIONS(59),
    [anon_sym_sget_DASHbyte] = ACTIONS(59),
    [anon_sym_sget_DASHchar] = ACTIONS(59),
    [anon_sym_sget_DASHshort] = ACTIONS(59),
    [anon_sym_sput] = ACTIONS(61),
    [anon_sym_sput_DASHwide] = ACTIONS(59),
    [anon_sym_sput_DASHobject] = ACTIONS(59),
    [anon_sym_sput_DASHboolean] = ACTIONS(59),
    [anon_sym_sput_DASHbyte] = ACTIONS(59),
    [anon_sym_sput_DASHchar] = ACTIONS(59),
    [anon_sym_sput_DASHshort] = ACTIONS(59),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper] = ACTIONS(61),
    [anon_sym_invoke_DASHdirect] = ACTIONS(61),
    [anon_sym_invoke_DASHstatic] = ACTIONS(61),
    [anon_sym_invoke_DASHinterface] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(59),
    [anon_sym_neg_DASHint] = ACTIONS(59),
    [anon_sym_not_DASHint] = ACTIONS(59),
    [anon_sym_neg_DASHlong] = ACTIONS(59),
    [anon_sym_not_DASHlong] = ACTIONS(59),
    [anon_sym_neg_DASHfloat] = ACTIONS(59),
    [anon_sym_neg_DASHdouble] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(59),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(59),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(59),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(59),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(59),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(59),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(59),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(59),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(59),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(59),
    [anon_sym_add_DASHint] = ACTIONS(61),
    [anon_sym_sub_DASHint] = ACTIONS(61),
    [anon_sym_mul_DASHint] = ACTIONS(61),
    [anon_sym_div_DASHint] = ACTIONS(61),
    [anon_sym_rem_DASHint] = ACTIONS(61),
    [anon_sym_and_DASHint] = ACTIONS(61),
    [anon_sym_or_DASHint] = ACTIONS(61),
    [anon_sym_xor_DASHint] = ACTIONS(61),
    [anon_sym_shl_DASHint] = ACTIONS(61),
    [anon_sym_shr_DASHint] = ACTIONS(61),
    [anon_sym_ushr_DASHint] = ACTIONS(61),
    [anon_sym_add_DASHlong] = ACTIONS(61),
    [anon_sym_sub_DASHlong] = ACTIONS(61),
    [anon_sym_mul_DASHlong] = ACTIONS(61),
    [anon_sym_div_DASHlong] = ACTIONS(61),
    [anon_sym_rem_DASHlong] = ACTIONS(61),
    [anon_sym_and_DASHlong] = ACTIONS(61),
    [anon_sym_or_DASHlong] = ACTIONS(61),
    [anon_sym_xor_DASHlong] = ACTIONS(61),
    [anon_sym_shl_DASHlong] = ACTIONS(61),
    [anon_sym_shr_DASHlong] = ACTIONS(61),
    [anon_sym_ushr_DASHlong] = ACTIONS(61),
    [anon_sym_add_DASHfloat] = ACTIONS(61),
    [anon_sym_sub_DASHfloat] = ACTIONS(61),
    [anon_sym_mul_DASHfloat] = ACTIONS(61),
    [anon_sym_div_DASHfloat] = ACTIONS(61),
    [anon_sym_rem_DASHfloat] = ACTIONS(61),
    [anon_sym_add_DASHdouble] = ACTIONS(61),
    [anon_sym_sub_DASHdouble] = ACTIONS(61),
    [anon_sym_mul_DASHdouble] = ACTIONS(61),
    [anon_sym_div_DASHdouble] = ACTIONS(61),
    [anon_sym_rem_DASHdouble] = ACTIONS(61),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_execute_DASHinline] = ACTIONS(59),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(59),
    [anon_sym_iget_DASHquick] = ACTIONS(59),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(59),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(59),
    [anon_sym_iput_DASHquick] = ACTIONS(59),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(59),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(59),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(59),
    [anon_sym_DOTline] = ACTIONS(63),
    [anon_sym_DOTlocals] = ACTIONS(65),
    [anon_sym_DOTparam] = ACTIONS(67),
    [anon_sym_DOTcatch] = ACTIONS(69),
    [anon_sym_DOTcatchall] = ACTIONS(71),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(73),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(75),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_annotation_definition] = STATE(13),
    [sym_annotation_declaration] = STATE(114),
    [sym__code_line] = STATE(13),
    [sym_statement] = STATE(13),
    [sym_opcode] = STATE(31),
    [sym__declaration] = STATE(13),
    [sym_line_declaration] = STATE(13),
    [sym_locals_declaration] = STATE(13),
    [sym_param_declaration] = STATE(13),
    [sym_catch_declaration] = STATE(13),
    [sym_catchall_declaration] = STATE(13),
    [sym_packed_switch_declaration] = STATE(13),
    [sym_sparse_switch_declaration] = STATE(13),
    [sym_array_data_declaration] = STATE(13),
    [aux_sym_method_definition_repeat1] = STATE(4),
    [sym_end_method] = ACTIONS(79),
    [anon_sym_DOTannotation] = ACTIONS(55),
    [sym_label] = ACTIONS(57),
    [anon_sym_nop] = ACTIONS(59),
    [anon_sym_move] = ACTIONS(61),
    [anon_sym_move_SLASHfrom16] = ACTIONS(59),
    [anon_sym_move_SLASH16] = ACTIONS(59),
    [anon_sym_move_DASHwide] = ACTIONS(61),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(59),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(59),
    [anon_sym_move_DASHobject] = ACTIONS(61),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(59),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(59),
    [anon_sym_move_DASHresult] = ACTIONS(61),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(59),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(59),
    [anon_sym_move_DASHexception] = ACTIONS(59),
    [anon_sym_return_DASHvoid] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_return_DASHwide] = ACTIONS(59),
    [anon_sym_return_DASHobject] = ACTIONS(59),
    [anon_sym_const_SLASH4] = ACTIONS(59),
    [anon_sym_const_SLASH16] = ACTIONS(59),
    [anon_sym_const] = ACTIONS(61),
    [anon_sym_const_SLASHhigh16] = ACTIONS(59),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(59),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(59),
    [anon_sym_const_DASHwide] = ACTIONS(61),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(59),
    [anon_sym_const_DASHstring] = ACTIONS(61),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(59),
    [anon_sym_const_DASHclass] = ACTIONS(59),
    [anon_sym_monitor_DASHenter] = ACTIONS(59),
    [anon_sym_monitor_DASHexit] = ACTIONS(59),
    [anon_sym_check_DASHcast] = ACTIONS(59),
    [anon_sym_instance_DASHof] = ACTIONS(59),
    [anon_sym_array_DASHlength] = ACTIONS(59),
    [anon_sym_new_DASHinstance] = ACTIONS(59),
    [anon_sym_new_DASHarray] = ACTIONS(59),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(61),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(59),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(59),
    [anon_sym_throw] = ACTIONS(59),
    [anon_sym_goto] = ACTIONS(61),
    [anon_sym_goto_SLASH16] = ACTIONS(59),
    [anon_sym_goto_SLASH32] = ACTIONS(59),
    [anon_sym_packed_DASHswitch] = ACTIONS(59),
    [anon_sym_sparse_DASHswitch] = ACTIONS(59),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(59),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(59),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(59),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(59),
    [anon_sym_cmp_DASHlong] = ACTIONS(59),
    [anon_sym_if_DASHeq] = ACTIONS(61),
    [anon_sym_if_DASHne] = ACTIONS(61),
    [anon_sym_if_DASHlt] = ACTIONS(61),
    [anon_sym_if_DASHge] = ACTIONS(61),
    [anon_sym_if_DASHgt] = ACTIONS(61),
    [anon_sym_if_DASHle] = ACTIONS(61),
    [anon_sym_if_DASHeqz] = ACTIONS(59),
    [anon_sym_if_DASHnez] = ACTIONS(59),
    [anon_sym_if_DASHltz] = ACTIONS(59),
    [anon_sym_if_DASHgez] = ACTIONS(59),
    [anon_sym_if_DASHgtz] = ACTIONS(59),
    [anon_sym_if_DASHlez] = ACTIONS(59),
    [anon_sym_aget] = ACTIONS(61),
    [anon_sym_aget_DASHwide] = ACTIONS(59),
    [anon_sym_aget_DASHobject] = ACTIONS(59),
    [anon_sym_aget_DASHboolean] = ACTIONS(59),
    [anon_sym_aget_DASHbyte] = ACTIONS(59),
    [anon_sym_aget_DASHchar] = ACTIONS(59),
    [anon_sym_aget_DASHshort] = ACTIONS(59),
    [anon_sym_aput] = ACTIONS(61),
    [anon_sym_aput_DASHwide] = ACTIONS(59),
    [anon_sym_aput_DASHobject] = ACTIONS(59),
    [anon_sym_aput_DASHboolean] = ACTIONS(59),
    [anon_sym_aput_DASHbyte] = ACTIONS(59),
    [anon_sym_aput_DASHchar] = ACTIONS(59),
    [anon_sym_aput_DASHshort] = ACTIONS(59),
    [anon_sym_iget] = ACTIONS(61),
    [anon_sym_iget_DASHwide] = ACTIONS(61),
    [anon_sym_iget_DASHobject] = ACTIONS(61),
    [anon_sym_iget_DASHboolean] = ACTIONS(59),
    [anon_sym_iget_DASHbyte] = ACTIONS(59),
    [anon_sym_iget_DASHchar] = ACTIONS(59),
    [anon_sym_iget_DASHshort] = ACTIONS(59),
    [anon_sym_iput] = ACTIONS(61),
    [anon_sym_iput_DASHwide] = ACTIONS(61),
    [anon_sym_iput_DASHobject] = ACTIONS(61),
    [anon_sym_iput_DASHboolean] = ACTIONS(59),
    [anon_sym_iput_DASHbyte] = ACTIONS(59),
    [anon_sym_iput_DASHchar] = ACTIONS(59),
    [anon_sym_iput_DASHshort] = ACTIONS(59),
    [anon_sym_sget] = ACTIONS(61),
    [anon_sym_sget_DASHwide] = ACTIONS(59),
    [anon_sym_sget_DASHobject] = ACTIONS(59),
    [anon_sym_sget_DASHboolean] = ACTIONS(59),
    [anon_sym_sget_DASHbyte] = ACTIONS(59),
    [anon_sym_sget_DASHchar] = ACTIONS(59),
    [anon_sym_sget_DASHshort] = ACTIONS(59),
    [anon_sym_sput] = ACTIONS(61),
    [anon_sym_sput_DASHwide] = ACTIONS(59),
    [anon_sym_sput_DASHobject] = ACTIONS(59),
    [anon_sym_sput_DASHboolean] = ACTIONS(59),
    [anon_sym_sput_DASHbyte] = ACTIONS(59),
    [anon_sym_sput_DASHchar] = ACTIONS(59),
    [anon_sym_sput_DASHshort] = ACTIONS(59),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper] = ACTIONS(61),
    [anon_sym_invoke_DASHdirect] = ACTIONS(61),
    [anon_sym_invoke_DASHstatic] = ACTIONS(61),
    [anon_sym_invoke_DASHinterface] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(59),
    [anon_sym_neg_DASHint] = ACTIONS(59),
    [anon_sym_not_DASHint] = ACTIONS(59),
    [anon_sym_neg_DASHlong] = ACTIONS(59),
    [anon_sym_not_DASHlong] = ACTIONS(59),
    [anon_sym_neg_DASHfloat] = ACTIONS(59),
    [anon_sym_neg_DASHdouble] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(59),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(59),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(59),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(59),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(59),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(59),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(59),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(59),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(59),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(59),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(59),
    [anon_sym_add_DASHint] = ACTIONS(61),
    [anon_sym_sub_DASHint] = ACTIONS(61),
    [anon_sym_mul_DASHint] = ACTIONS(61),
    [anon_sym_div_DASHint] = ACTIONS(61),
    [anon_sym_rem_DASHint] = ACTIONS(61),
    [anon_sym_and_DASHint] = ACTIONS(61),
    [anon_sym_or_DASHint] = ACTIONS(61),
    [anon_sym_xor_DASHint] = ACTIONS(61),
    [anon_sym_shl_DASHint] = ACTIONS(61),
    [anon_sym_shr_DASHint] = ACTIONS(61),
    [anon_sym_ushr_DASHint] = ACTIONS(61),
    [anon_sym_add_DASHlong] = ACTIONS(61),
    [anon_sym_sub_DASHlong] = ACTIONS(61),
    [anon_sym_mul_DASHlong] = ACTIONS(61),
    [anon_sym_div_DASHlong] = ACTIONS(61),
    [anon_sym_rem_DASHlong] = ACTIONS(61),
    [anon_sym_and_DASHlong] = ACTIONS(61),
    [anon_sym_or_DASHlong] = ACTIONS(61),
    [anon_sym_xor_DASHlong] = ACTIONS(61),
    [anon_sym_shl_DASHlong] = ACTIONS(61),
    [anon_sym_shr_DASHlong] = ACTIONS(61),
    [anon_sym_ushr_DASHlong] = ACTIONS(61),
    [anon_sym_add_DASHfloat] = ACTIONS(61),
    [anon_sym_sub_DASHfloat] = ACTIONS(61),
    [anon_sym_mul_DASHfloat] = ACTIONS(61),
    [anon_sym_div_DASHfloat] = ACTIONS(61),
    [anon_sym_rem_DASHfloat] = ACTIONS(61),
    [anon_sym_add_DASHdouble] = ACTIONS(61),
    [anon_sym_sub_DASHdouble] = ACTIONS(61),
    [anon_sym_mul_DASHdouble] = ACTIONS(61),
    [anon_sym_div_DASHdouble] = ACTIONS(61),
    [anon_sym_rem_DASHdouble] = ACTIONS(61),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(59),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(59),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(59),
    [anon_sym_execute_DASHinline] = ACTIONS(59),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(59),
    [anon_sym_iget_DASHquick] = ACTIONS(59),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(59),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(59),
    [anon_sym_iput_DASHquick] = ACTIONS(59),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(59),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(59),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(59),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(59),
    [anon_sym_DOTline] = ACTIONS(63),
    [anon_sym_DOTlocals] = ACTIONS(65),
    [anon_sym_DOTparam] = ACTIONS(67),
    [anon_sym_DOTcatch] = ACTIONS(69),
    [anon_sym_DOTcatchall] = ACTIONS(71),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(73),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(75),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_end_method] = ACTIONS(81),
    [anon_sym_DOTannotation] = ACTIONS(81),
    [sym_label] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_nop] = ACTIONS(81),
    [anon_sym_move] = ACTIONS(83),
    [anon_sym_move_SLASHfrom16] = ACTIONS(81),
    [anon_sym_move_SLASH16] = ACTIONS(81),
    [anon_sym_move_DASHwide] = ACTIONS(83),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(81),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(81),
    [anon_sym_move_DASHobject] = ACTIONS(83),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(81),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(81),
    [anon_sym_move_DASHresult] = ACTIONS(83),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(81),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(81),
    [anon_sym_move_DASHexception] = ACTIONS(81),
    [anon_sym_return_DASHvoid] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_return_DASHwide] = ACTIONS(81),
    [anon_sym_return_DASHobject] = ACTIONS(81),
    [anon_sym_const_SLASH4] = ACTIONS(81),
    [anon_sym_const_SLASH16] = ACTIONS(81),
    [anon_sym_const] = ACTIONS(83),
    [anon_sym_const_SLASHhigh16] = ACTIONS(81),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(81),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(81),
    [anon_sym_const_DASHwide] = ACTIONS(83),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(81),
    [anon_sym_const_DASHstring] = ACTIONS(83),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(81),
    [anon_sym_const_DASHclass] = ACTIONS(81),
    [anon_sym_monitor_DASHenter] = ACTIONS(81),
    [anon_sym_monitor_DASHexit] = ACTIONS(81),
    [anon_sym_check_DASHcast] = ACTIONS(81),
    [anon_sym_instance_DASHof] = ACTIONS(81),
    [anon_sym_array_DASHlength] = ACTIONS(81),
    [anon_sym_new_DASHinstance] = ACTIONS(81),
    [anon_sym_new_DASHarray] = ACTIONS(81),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(83),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(81),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(81),
    [anon_sym_throw] = ACTIONS(81),
    [anon_sym_goto] = ACTIONS(83),
    [anon_sym_goto_SLASH16] = ACTIONS(81),
    [anon_sym_goto_SLASH32] = ACTIONS(81),
    [anon_sym_packed_DASHswitch] = ACTIONS(81),
    [anon_sym_sparse_DASHswitch] = ACTIONS(81),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(81),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(81),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(81),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(81),
    [anon_sym_cmp_DASHlong] = ACTIONS(81),
    [anon_sym_if_DASHeq] = ACTIONS(83),
    [anon_sym_if_DASHne] = ACTIONS(83),
    [anon_sym_if_DASHlt] = ACTIONS(83),
    [anon_sym_if_DASHge] = ACTIONS(83),
    [anon_sym_if_DASHgt] = ACTIONS(83),
    [anon_sym_if_DASHle] = ACTIONS(83),
    [anon_sym_if_DASHeqz] = ACTIONS(81),
    [anon_sym_if_DASHnez] = ACTIONS(81),
    [anon_sym_if_DASHltz] = ACTIONS(81),
    [anon_sym_if_DASHgez] = ACTIONS(81),
    [anon_sym_if_DASHgtz] = ACTIONS(81),
    [anon_sym_if_DASHlez] = ACTIONS(81),
    [anon_sym_aget] = ACTIONS(83),
    [anon_sym_aget_DASHwide] = ACTIONS(81),
    [anon_sym_aget_DASHobject] = ACTIONS(81),
    [anon_sym_aget_DASHboolean] = ACTIONS(81),
    [anon_sym_aget_DASHbyte] = ACTIONS(81),
    [anon_sym_aget_DASHchar] = ACTIONS(81),
    [anon_sym_aget_DASHshort] = ACTIONS(81),
    [anon_sym_aput] = ACTIONS(83),
    [anon_sym_aput_DASHwide] = ACTIONS(81),
    [anon_sym_aput_DASHobject] = ACTIONS(81),
    [anon_sym_aput_DASHboolean] = ACTIONS(81),
    [anon_sym_aput_DASHbyte] = ACTIONS(81),
    [anon_sym_aput_DASHchar] = ACTIONS(81),
    [anon_sym_aput_DASHshort] = ACTIONS(81),
    [anon_sym_iget] = ACTIONS(83),
    [anon_sym_iget_DASHwide] = ACTIONS(83),
    [anon_sym_iget_DASHobject] = ACTIONS(83),
    [anon_sym_iget_DASHboolean] = ACTIONS(81),
    [anon_sym_iget_DASHbyte] = ACTIONS(81),
    [anon_sym_iget_DASHchar] = ACTIONS(81),
    [anon_sym_iget_DASHshort] = ACTIONS(81),
    [anon_sym_iput] = ACTIONS(83),
    [anon_sym_iput_DASHwide] = ACTIONS(83),
    [anon_sym_iput_DASHobject] = ACTIONS(83),
    [anon_sym_iput_DASHboolean] = ACTIONS(81),
    [anon_sym_iput_DASHbyte] = ACTIONS(81),
    [anon_sym_iput_DASHchar] = ACTIONS(81),
    [anon_sym_iput_DASHshort] = ACTIONS(81),
    [anon_sym_sget] = ACTIONS(83),
    [anon_sym_sget_DASHwide] = ACTIONS(81),
    [anon_sym_sget_DASHobject] = ACTIONS(81),
    [anon_sym_sget_DASHboolean] = ACTIONS(81),
    [anon_sym_sget_DASHbyte] = ACTIONS(81),
    [anon_sym_sget_DASHchar] = ACTIONS(81),
    [anon_sym_sget_DASHshort] = ACTIONS(81),
    [anon_sym_sput] = ACTIONS(83),
    [anon_sym_sput_DASHwide] = ACTIONS(81),
    [anon_sym_sput_DASHobject] = ACTIONS(81),
    [anon_sym_sput_DASHboolean] = ACTIONS(81),
    [anon_sym_sput_DASHbyte] = ACTIONS(81),
    [anon_sym_sput_DASHchar] = ACTIONS(81),
    [anon_sym_sput_DASHshort] = ACTIONS(81),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(83),
    [anon_sym_invoke_DASHsuper] = ACTIONS(83),
    [anon_sym_invoke_DASHdirect] = ACTIONS(83),
    [anon_sym_invoke_DASHstatic] = ACTIONS(83),
    [anon_sym_invoke_DASHinterface] = ACTIONS(83),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(81),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(81),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(81),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(81),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(81),
    [anon_sym_neg_DASHint] = ACTIONS(81),
    [anon_sym_not_DASHint] = ACTIONS(81),
    [anon_sym_neg_DASHlong] = ACTIONS(81),
    [anon_sym_not_DASHlong] = ACTIONS(81),
    [anon_sym_neg_DASHfloat] = ACTIONS(81),
    [anon_sym_neg_DASHdouble] = ACTIONS(81),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(81),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(81),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(81),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(81),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(81),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(81),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(81),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(81),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(81),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(81),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(81),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(81),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(81),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(81),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(81),
    [anon_sym_add_DASHint] = ACTIONS(83),
    [anon_sym_sub_DASHint] = ACTIONS(83),
    [anon_sym_mul_DASHint] = ACTIONS(83),
    [anon_sym_div_DASHint] = ACTIONS(83),
    [anon_sym_rem_DASHint] = ACTIONS(83),
    [anon_sym_and_DASHint] = ACTIONS(83),
    [anon_sym_or_DASHint] = ACTIONS(83),
    [anon_sym_xor_DASHint] = ACTIONS(83),
    [anon_sym_shl_DASHint] = ACTIONS(83),
    [anon_sym_shr_DASHint] = ACTIONS(83),
    [anon_sym_ushr_DASHint] = ACTIONS(83),
    [anon_sym_add_DASHlong] = ACTIONS(83),
    [anon_sym_sub_DASHlong] = ACTIONS(83),
    [anon_sym_mul_DASHlong] = ACTIONS(83),
    [anon_sym_div_DASHlong] = ACTIONS(83),
    [anon_sym_rem_DASHlong] = ACTIONS(83),
    [anon_sym_and_DASHlong] = ACTIONS(83),
    [anon_sym_or_DASHlong] = ACTIONS(83),
    [anon_sym_xor_DASHlong] = ACTIONS(83),
    [anon_sym_shl_DASHlong] = ACTIONS(83),
    [anon_sym_shr_DASHlong] = ACTIONS(83),
    [anon_sym_ushr_DASHlong] = ACTIONS(83),
    [anon_sym_add_DASHfloat] = ACTIONS(83),
    [anon_sym_sub_DASHfloat] = ACTIONS(83),
    [anon_sym_mul_DASHfloat] = ACTIONS(83),
    [anon_sym_div_DASHfloat] = ACTIONS(83),
    [anon_sym_rem_DASHfloat] = ACTIONS(83),
    [anon_sym_add_DASHdouble] = ACTIONS(83),
    [anon_sym_sub_DASHdouble] = ACTIONS(83),
    [anon_sym_mul_DASHdouble] = ACTIONS(83),
    [anon_sym_div_DASHdouble] = ACTIONS(83),
    [anon_sym_rem_DASHdouble] = ACTIONS(83),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(81),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(81),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(81),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(81),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(81),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(81),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(81),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(81),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(81),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(81),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(81),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(81),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(81),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_execute_DASHinline] = ACTIONS(81),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(81),
    [anon_sym_iget_DASHquick] = ACTIONS(81),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(81),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(81),
    [anon_sym_iput_DASHquick] = ACTIONS(81),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(81),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(81),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(83),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(81),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(83),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(81),
    [anon_sym_DOTline] = ACTIONS(81),
    [anon_sym_DOTlocals] = ACTIONS(81),
    [anon_sym_DOTparam] = ACTIONS(81),
    [anon_sym_DOTcatch] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_DOTcatchall] = ACTIONS(81),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(81),
    [anon_sym_DOTendpacked_DASHswitch] = ACTIONS(81),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(81),
    [anon_sym_DOTendarray_DASHdata] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_literal_token1] = ACTIONS(81),
    [aux_sym_number_literal_token2] = ACTIONS(83),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_DOTfield] = ACTIONS(85),
    [sym_end_field] = ACTIONS(85),
    [anon_sym_DOTmethod] = ACTIONS(85),
    [sym_end_method] = ACTIONS(85),
    [anon_sym_DOTannotation] = ACTIONS(85),
    [sym_label] = ACTIONS(85),
    [anon_sym_nop] = ACTIONS(85),
    [anon_sym_move] = ACTIONS(87),
    [anon_sym_move_SLASHfrom16] = ACTIONS(85),
    [anon_sym_move_SLASH16] = ACTIONS(85),
    [anon_sym_move_DASHwide] = ACTIONS(87),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(85),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(85),
    [anon_sym_move_DASHobject] = ACTIONS(87),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(85),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(85),
    [anon_sym_move_DASHresult] = ACTIONS(87),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(85),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(85),
    [anon_sym_move_DASHexception] = ACTIONS(85),
    [anon_sym_return_DASHvoid] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_return_DASHwide] = ACTIONS(85),
    [anon_sym_return_DASHobject] = ACTIONS(85),
    [anon_sym_const_SLASH4] = ACTIONS(85),
    [anon_sym_const_SLASH16] = ACTIONS(85),
    [anon_sym_const] = ACTIONS(87),
    [anon_sym_const_SLASHhigh16] = ACTIONS(85),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(85),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(85),
    [anon_sym_const_DASHwide] = ACTIONS(87),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(85),
    [anon_sym_const_DASHstring] = ACTIONS(87),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(85),
    [anon_sym_const_DASHclass] = ACTIONS(85),
    [anon_sym_monitor_DASHenter] = ACTIONS(85),
    [anon_sym_monitor_DASHexit] = ACTIONS(85),
    [anon_sym_check_DASHcast] = ACTIONS(85),
    [anon_sym_instance_DASHof] = ACTIONS(85),
    [anon_sym_array_DASHlength] = ACTIONS(85),
    [anon_sym_new_DASHinstance] = ACTIONS(85),
    [anon_sym_new_DASHarray] = ACTIONS(85),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(87),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(85),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(85),
    [anon_sym_throw] = ACTIONS(85),
    [anon_sym_goto] = ACTIONS(87),
    [anon_sym_goto_SLASH16] = ACTIONS(85),
    [anon_sym_goto_SLASH32] = ACTIONS(85),
    [anon_sym_packed_DASHswitch] = ACTIONS(85),
    [anon_sym_sparse_DASHswitch] = ACTIONS(85),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(85),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(85),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(85),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(85),
    [anon_sym_cmp_DASHlong] = ACTIONS(85),
    [anon_sym_if_DASHeq] = ACTIONS(87),
    [anon_sym_if_DASHne] = ACTIONS(87),
    [anon_sym_if_DASHlt] = ACTIONS(87),
    [anon_sym_if_DASHge] = ACTIONS(87),
    [anon_sym_if_DASHgt] = ACTIONS(87),
    [anon_sym_if_DASHle] = ACTIONS(87),
    [anon_sym_if_DASHeqz] = ACTIONS(85),
    [anon_sym_if_DASHnez] = ACTIONS(85),
    [anon_sym_if_DASHltz] = ACTIONS(85),
    [anon_sym_if_DASHgez] = ACTIONS(85),
    [anon_sym_if_DASHgtz] = ACTIONS(85),
    [anon_sym_if_DASHlez] = ACTIONS(85),
    [anon_sym_aget] = ACTIONS(87),
    [anon_sym_aget_DASHwide] = ACTIONS(85),
    [anon_sym_aget_DASHobject] = ACTIONS(85),
    [anon_sym_aget_DASHboolean] = ACTIONS(85),
    [anon_sym_aget_DASHbyte] = ACTIONS(85),
    [anon_sym_aget_DASHchar] = ACTIONS(85),
    [anon_sym_aget_DASHshort] = ACTIONS(85),
    [anon_sym_aput] = ACTIONS(87),
    [anon_sym_aput_DASHwide] = ACTIONS(85),
    [anon_sym_aput_DASHobject] = ACTIONS(85),
    [anon_sym_aput_DASHboolean] = ACTIONS(85),
    [anon_sym_aput_DASHbyte] = ACTIONS(85),
    [anon_sym_aput_DASHchar] = ACTIONS(85),
    [anon_sym_aput_DASHshort] = ACTIONS(85),
    [anon_sym_iget] = ACTIONS(87),
    [anon_sym_iget_DASHwide] = ACTIONS(87),
    [anon_sym_iget_DASHobject] = ACTIONS(87),
    [anon_sym_iget_DASHboolean] = ACTIONS(85),
    [anon_sym_iget_DASHbyte] = ACTIONS(85),
    [anon_sym_iget_DASHchar] = ACTIONS(85),
    [anon_sym_iget_DASHshort] = ACTIONS(85),
    [anon_sym_iput] = ACTIONS(87),
    [anon_sym_iput_DASHwide] = ACTIONS(87),
    [anon_sym_iput_DASHobject] = ACTIONS(87),
    [anon_sym_iput_DASHboolean] = ACTIONS(85),
    [anon_sym_iput_DASHbyte] = ACTIONS(85),
    [anon_sym_iput_DASHchar] = ACTIONS(85),
    [anon_sym_iput_DASHshort] = ACTIONS(85),
    [anon_sym_sget] = ACTIONS(87),
    [anon_sym_sget_DASHwide] = ACTIONS(85),
    [anon_sym_sget_DASHobject] = ACTIONS(85),
    [anon_sym_sget_DASHboolean] = ACTIONS(85),
    [anon_sym_sget_DASHbyte] = ACTIONS(85),
    [anon_sym_sget_DASHchar] = ACTIONS(85),
    [anon_sym_sget_DASHshort] = ACTIONS(85),
    [anon_sym_sput] = ACTIONS(87),
    [anon_sym_sput_DASHwide] = ACTIONS(85),
    [anon_sym_sput_DASHobject] = ACTIONS(85),
    [anon_sym_sput_DASHboolean] = ACTIONS(85),
    [anon_sym_sput_DASHbyte] = ACTIONS(85),
    [anon_sym_sput_DASHchar] = ACTIONS(85),
    [anon_sym_sput_DASHshort] = ACTIONS(85),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(87),
    [anon_sym_invoke_DASHsuper] = ACTIONS(87),
    [anon_sym_invoke_DASHdirect] = ACTIONS(87),
    [anon_sym_invoke_DASHstatic] = ACTIONS(87),
    [anon_sym_invoke_DASHinterface] = ACTIONS(87),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(85),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(85),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(85),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(85),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(85),
    [anon_sym_neg_DASHint] = ACTIONS(85),
    [anon_sym_not_DASHint] = ACTIONS(85),
    [anon_sym_neg_DASHlong] = ACTIONS(85),
    [anon_sym_not_DASHlong] = ACTIONS(85),
    [anon_sym_neg_DASHfloat] = ACTIONS(85),
    [anon_sym_neg_DASHdouble] = ACTIONS(85),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(85),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(85),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(85),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(85),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(85),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(85),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(85),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(85),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(85),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(85),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(85),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(85),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(85),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(85),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(85),
    [anon_sym_add_DASHint] = ACTIONS(87),
    [anon_sym_sub_DASHint] = ACTIONS(87),
    [anon_sym_mul_DASHint] = ACTIONS(87),
    [anon_sym_div_DASHint] = ACTIONS(87),
    [anon_sym_rem_DASHint] = ACTIONS(87),
    [anon_sym_and_DASHint] = ACTIONS(87),
    [anon_sym_or_DASHint] = ACTIONS(87),
    [anon_sym_xor_DASHint] = ACTIONS(87),
    [anon_sym_shl_DASHint] = ACTIONS(87),
    [anon_sym_shr_DASHint] = ACTIONS(87),
    [anon_sym_ushr_DASHint] = ACTIONS(87),
    [anon_sym_add_DASHlong] = ACTIONS(87),
    [anon_sym_sub_DASHlong] = ACTIONS(87),
    [anon_sym_mul_DASHlong] = ACTIONS(87),
    [anon_sym_div_DASHlong] = ACTIONS(87),
    [anon_sym_rem_DASHlong] = ACTIONS(87),
    [anon_sym_and_DASHlong] = ACTIONS(87),
    [anon_sym_or_DASHlong] = ACTIONS(87),
    [anon_sym_xor_DASHlong] = ACTIONS(87),
    [anon_sym_shl_DASHlong] = ACTIONS(87),
    [anon_sym_shr_DASHlong] = ACTIONS(87),
    [anon_sym_ushr_DASHlong] = ACTIONS(87),
    [anon_sym_add_DASHfloat] = ACTIONS(87),
    [anon_sym_sub_DASHfloat] = ACTIONS(87),
    [anon_sym_mul_DASHfloat] = ACTIONS(87),
    [anon_sym_div_DASHfloat] = ACTIONS(87),
    [anon_sym_rem_DASHfloat] = ACTIONS(87),
    [anon_sym_add_DASHdouble] = ACTIONS(87),
    [anon_sym_sub_DASHdouble] = ACTIONS(87),
    [anon_sym_mul_DASHdouble] = ACTIONS(87),
    [anon_sym_div_DASHdouble] = ACTIONS(87),
    [anon_sym_rem_DASHdouble] = ACTIONS(87),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(85),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(85),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(85),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(85),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(85),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(85),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(85),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(85),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(85),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(85),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(85),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(85),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(85),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_execute_DASHinline] = ACTIONS(85),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(85),
    [anon_sym_iget_DASHquick] = ACTIONS(85),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(85),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(85),
    [anon_sym_iput_DASHquick] = ACTIONS(85),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(85),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(85),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(87),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(85),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(87),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(85),
    [anon_sym_DOTline] = ACTIONS(85),
    [anon_sym_DOTlocals] = ACTIONS(85),
    [anon_sym_DOTparam] = ACTIONS(85),
    [anon_sym_DOTcatch] = ACTIONS(87),
    [anon_sym_DOTcatchall] = ACTIONS(85),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(85),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(85),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_DOTfield] = ACTIONS(89),
    [sym_end_field] = ACTIONS(89),
    [anon_sym_DOTmethod] = ACTIONS(89),
    [sym_end_method] = ACTIONS(89),
    [anon_sym_DOTannotation] = ACTIONS(89),
    [sym_label] = ACTIONS(89),
    [anon_sym_nop] = ACTIONS(89),
    [anon_sym_move] = ACTIONS(91),
    [anon_sym_move_SLASHfrom16] = ACTIONS(89),
    [anon_sym_move_SLASH16] = ACTIONS(89),
    [anon_sym_move_DASHwide] = ACTIONS(91),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(89),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(89),
    [anon_sym_move_DASHobject] = ACTIONS(91),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(89),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(89),
    [anon_sym_move_DASHresult] = ACTIONS(91),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(89),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(89),
    [anon_sym_move_DASHexception] = ACTIONS(89),
    [anon_sym_return_DASHvoid] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_return_DASHwide] = ACTIONS(89),
    [anon_sym_return_DASHobject] = ACTIONS(89),
    [anon_sym_const_SLASH4] = ACTIONS(89),
    [anon_sym_const_SLASH16] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(91),
    [anon_sym_const_SLASHhigh16] = ACTIONS(89),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(89),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(89),
    [anon_sym_const_DASHwide] = ACTIONS(91),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(89),
    [anon_sym_const_DASHstring] = ACTIONS(91),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(89),
    [anon_sym_const_DASHclass] = ACTIONS(89),
    [anon_sym_monitor_DASHenter] = ACTIONS(89),
    [anon_sym_monitor_DASHexit] = ACTIONS(89),
    [anon_sym_check_DASHcast] = ACTIONS(89),
    [anon_sym_instance_DASHof] = ACTIONS(89),
    [anon_sym_array_DASHlength] = ACTIONS(89),
    [anon_sym_new_DASHinstance] = ACTIONS(89),
    [anon_sym_new_DASHarray] = ACTIONS(89),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(91),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(89),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(89),
    [anon_sym_throw] = ACTIONS(89),
    [anon_sym_goto] = ACTIONS(91),
    [anon_sym_goto_SLASH16] = ACTIONS(89),
    [anon_sym_goto_SLASH32] = ACTIONS(89),
    [anon_sym_packed_DASHswitch] = ACTIONS(89),
    [anon_sym_sparse_DASHswitch] = ACTIONS(89),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(89),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(89),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(89),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(89),
    [anon_sym_cmp_DASHlong] = ACTIONS(89),
    [anon_sym_if_DASHeq] = ACTIONS(91),
    [anon_sym_if_DASHne] = ACTIONS(91),
    [anon_sym_if_DASHlt] = ACTIONS(91),
    [anon_sym_if_DASHge] = ACTIONS(91),
    [anon_sym_if_DASHgt] = ACTIONS(91),
    [anon_sym_if_DASHle] = ACTIONS(91),
    [anon_sym_if_DASHeqz] = ACTIONS(89),
    [anon_sym_if_DASHnez] = ACTIONS(89),
    [anon_sym_if_DASHltz] = ACTIONS(89),
    [anon_sym_if_DASHgez] = ACTIONS(89),
    [anon_sym_if_DASHgtz] = ACTIONS(89),
    [anon_sym_if_DASHlez] = ACTIONS(89),
    [anon_sym_aget] = ACTIONS(91),
    [anon_sym_aget_DASHwide] = ACTIONS(89),
    [anon_sym_aget_DASHobject] = ACTIONS(89),
    [anon_sym_aget_DASHboolean] = ACTIONS(89),
    [anon_sym_aget_DASHbyte] = ACTIONS(89),
    [anon_sym_aget_DASHchar] = ACTIONS(89),
    [anon_sym_aget_DASHshort] = ACTIONS(89),
    [anon_sym_aput] = ACTIONS(91),
    [anon_sym_aput_DASHwide] = ACTIONS(89),
    [anon_sym_aput_DASHobject] = ACTIONS(89),
    [anon_sym_aput_DASHboolean] = ACTIONS(89),
    [anon_sym_aput_DASHbyte] = ACTIONS(89),
    [anon_sym_aput_DASHchar] = ACTIONS(89),
    [anon_sym_aput_DASHshort] = ACTIONS(89),
    [anon_sym_iget] = ACTIONS(91),
    [anon_sym_iget_DASHwide] = ACTIONS(91),
    [anon_sym_iget_DASHobject] = ACTIONS(91),
    [anon_sym_iget_DASHboolean] = ACTIONS(89),
    [anon_sym_iget_DASHbyte] = ACTIONS(89),
    [anon_sym_iget_DASHchar] = ACTIONS(89),
    [anon_sym_iget_DASHshort] = ACTIONS(89),
    [anon_sym_iput] = ACTIONS(91),
    [anon_sym_iput_DASHwide] = ACTIONS(91),
    [anon_sym_iput_DASHobject] = ACTIONS(91),
    [anon_sym_iput_DASHboolean] = ACTIONS(89),
    [anon_sym_iput_DASHbyte] = ACTIONS(89),
    [anon_sym_iput_DASHchar] = ACTIONS(89),
    [anon_sym_iput_DASHshort] = ACTIONS(89),
    [anon_sym_sget] = ACTIONS(91),
    [anon_sym_sget_DASHwide] = ACTIONS(89),
    [anon_sym_sget_DASHobject] = ACTIONS(89),
    [anon_sym_sget_DASHboolean] = ACTIONS(89),
    [anon_sym_sget_DASHbyte] = ACTIONS(89),
    [anon_sym_sget_DASHchar] = ACTIONS(89),
    [anon_sym_sget_DASHshort] = ACTIONS(89),
    [anon_sym_sput] = ACTIONS(91),
    [anon_sym_sput_DASHwide] = ACTIONS(89),
    [anon_sym_sput_DASHobject] = ACTIONS(89),
    [anon_sym_sput_DASHboolean] = ACTIONS(89),
    [anon_sym_sput_DASHbyte] = ACTIONS(89),
    [anon_sym_sput_DASHchar] = ACTIONS(89),
    [anon_sym_sput_DASHshort] = ACTIONS(89),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(91),
    [anon_sym_invoke_DASHsuper] = ACTIONS(91),
    [anon_sym_invoke_DASHdirect] = ACTIONS(91),
    [anon_sym_invoke_DASHstatic] = ACTIONS(91),
    [anon_sym_invoke_DASHinterface] = ACTIONS(91),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(89),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(89),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(89),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(89),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(89),
    [anon_sym_neg_DASHint] = ACTIONS(89),
    [anon_sym_not_DASHint] = ACTIONS(89),
    [anon_sym_neg_DASHlong] = ACTIONS(89),
    [anon_sym_not_DASHlong] = ACTIONS(89),
    [anon_sym_neg_DASHfloat] = ACTIONS(89),
    [anon_sym_neg_DASHdouble] = ACTIONS(89),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(89),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(89),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(89),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(89),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(89),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(89),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(89),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(89),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(89),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(89),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(89),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(89),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(89),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(89),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(89),
    [anon_sym_add_DASHint] = ACTIONS(91),
    [anon_sym_sub_DASHint] = ACTIONS(91),
    [anon_sym_mul_DASHint] = ACTIONS(91),
    [anon_sym_div_DASHint] = ACTIONS(91),
    [anon_sym_rem_DASHint] = ACTIONS(91),
    [anon_sym_and_DASHint] = ACTIONS(91),
    [anon_sym_or_DASHint] = ACTIONS(91),
    [anon_sym_xor_DASHint] = ACTIONS(91),
    [anon_sym_shl_DASHint] = ACTIONS(91),
    [anon_sym_shr_DASHint] = ACTIONS(91),
    [anon_sym_ushr_DASHint] = ACTIONS(91),
    [anon_sym_add_DASHlong] = ACTIONS(91),
    [anon_sym_sub_DASHlong] = ACTIONS(91),
    [anon_sym_mul_DASHlong] = ACTIONS(91),
    [anon_sym_div_DASHlong] = ACTIONS(91),
    [anon_sym_rem_DASHlong] = ACTIONS(91),
    [anon_sym_and_DASHlong] = ACTIONS(91),
    [anon_sym_or_DASHlong] = ACTIONS(91),
    [anon_sym_xor_DASHlong] = ACTIONS(91),
    [anon_sym_shl_DASHlong] = ACTIONS(91),
    [anon_sym_shr_DASHlong] = ACTIONS(91),
    [anon_sym_ushr_DASHlong] = ACTIONS(91),
    [anon_sym_add_DASHfloat] = ACTIONS(91),
    [anon_sym_sub_DASHfloat] = ACTIONS(91),
    [anon_sym_mul_DASHfloat] = ACTIONS(91),
    [anon_sym_div_DASHfloat] = ACTIONS(91),
    [anon_sym_rem_DASHfloat] = ACTIONS(91),
    [anon_sym_add_DASHdouble] = ACTIONS(91),
    [anon_sym_sub_DASHdouble] = ACTIONS(91),
    [anon_sym_mul_DASHdouble] = ACTIONS(91),
    [anon_sym_div_DASHdouble] = ACTIONS(91),
    [anon_sym_rem_DASHdouble] = ACTIONS(91),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(89),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(89),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(89),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(89),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(89),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(89),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(89),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(89),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(89),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(89),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(89),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(89),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(89),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_execute_DASHinline] = ACTIONS(89),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(89),
    [anon_sym_iget_DASHquick] = ACTIONS(89),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(89),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(89),
    [anon_sym_iput_DASHquick] = ACTIONS(89),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(89),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(89),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(91),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(89),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(91),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(89),
    [anon_sym_DOTline] = ACTIONS(89),
    [anon_sym_DOTlocals] = ACTIONS(89),
    [anon_sym_DOTparam] = ACTIONS(89),
    [anon_sym_DOTcatch] = ACTIONS(91),
    [anon_sym_DOTcatchall] = ACTIONS(89),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(89),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(89),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_end_method] = ACTIONS(93),
    [anon_sym_DOTannotation] = ACTIONS(93),
    [sym_label] = ACTIONS(93),
    [anon_sym_nop] = ACTIONS(93),
    [anon_sym_move] = ACTIONS(95),
    [anon_sym_move_SLASHfrom16] = ACTIONS(93),
    [anon_sym_move_SLASH16] = ACTIONS(93),
    [anon_sym_move_DASHwide] = ACTIONS(95),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(93),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(93),
    [anon_sym_move_DASHobject] = ACTIONS(95),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(93),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(93),
    [anon_sym_move_DASHresult] = ACTIONS(95),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(93),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(93),
    [anon_sym_move_DASHexception] = ACTIONS(93),
    [anon_sym_return_DASHvoid] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_return_DASHwide] = ACTIONS(93),
    [anon_sym_return_DASHobject] = ACTIONS(93),
    [anon_sym_const_SLASH4] = ACTIONS(93),
    [anon_sym_const_SLASH16] = ACTIONS(93),
    [anon_sym_const] = ACTIONS(95),
    [anon_sym_const_SLASHhigh16] = ACTIONS(93),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(93),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(93),
    [anon_sym_const_DASHwide] = ACTIONS(95),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(93),
    [anon_sym_const_DASHstring] = ACTIONS(95),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(93),
    [anon_sym_const_DASHclass] = ACTIONS(93),
    [anon_sym_monitor_DASHenter] = ACTIONS(93),
    [anon_sym_monitor_DASHexit] = ACTIONS(93),
    [anon_sym_check_DASHcast] = ACTIONS(93),
    [anon_sym_instance_DASHof] = ACTIONS(93),
    [anon_sym_array_DASHlength] = ACTIONS(93),
    [anon_sym_new_DASHinstance] = ACTIONS(93),
    [anon_sym_new_DASHarray] = ACTIONS(93),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(95),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(93),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(93),
    [anon_sym_throw] = ACTIONS(93),
    [anon_sym_goto] = ACTIONS(95),
    [anon_sym_goto_SLASH16] = ACTIONS(93),
    [anon_sym_goto_SLASH32] = ACTIONS(93),
    [anon_sym_packed_DASHswitch] = ACTIONS(93),
    [anon_sym_sparse_DASHswitch] = ACTIONS(93),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(93),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(93),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(93),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(93),
    [anon_sym_cmp_DASHlong] = ACTIONS(93),
    [anon_sym_if_DASHeq] = ACTIONS(95),
    [anon_sym_if_DASHne] = ACTIONS(95),
    [anon_sym_if_DASHlt] = ACTIONS(95),
    [anon_sym_if_DASHge] = ACTIONS(95),
    [anon_sym_if_DASHgt] = ACTIONS(95),
    [anon_sym_if_DASHle] = ACTIONS(95),
    [anon_sym_if_DASHeqz] = ACTIONS(93),
    [anon_sym_if_DASHnez] = ACTIONS(93),
    [anon_sym_if_DASHltz] = ACTIONS(93),
    [anon_sym_if_DASHgez] = ACTIONS(93),
    [anon_sym_if_DASHgtz] = ACTIONS(93),
    [anon_sym_if_DASHlez] = ACTIONS(93),
    [anon_sym_aget] = ACTIONS(95),
    [anon_sym_aget_DASHwide] = ACTIONS(93),
    [anon_sym_aget_DASHobject] = ACTIONS(93),
    [anon_sym_aget_DASHboolean] = ACTIONS(93),
    [anon_sym_aget_DASHbyte] = ACTIONS(93),
    [anon_sym_aget_DASHchar] = ACTIONS(93),
    [anon_sym_aget_DASHshort] = ACTIONS(93),
    [anon_sym_aput] = ACTIONS(95),
    [anon_sym_aput_DASHwide] = ACTIONS(93),
    [anon_sym_aput_DASHobject] = ACTIONS(93),
    [anon_sym_aput_DASHboolean] = ACTIONS(93),
    [anon_sym_aput_DASHbyte] = ACTIONS(93),
    [anon_sym_aput_DASHchar] = ACTIONS(93),
    [anon_sym_aput_DASHshort] = ACTIONS(93),
    [anon_sym_iget] = ACTIONS(95),
    [anon_sym_iget_DASHwide] = ACTIONS(95),
    [anon_sym_iget_DASHobject] = ACTIONS(95),
    [anon_sym_iget_DASHboolean] = ACTIONS(93),
    [anon_sym_iget_DASHbyte] = ACTIONS(93),
    [anon_sym_iget_DASHchar] = ACTIONS(93),
    [anon_sym_iget_DASHshort] = ACTIONS(93),
    [anon_sym_iput] = ACTIONS(95),
    [anon_sym_iput_DASHwide] = ACTIONS(95),
    [anon_sym_iput_DASHobject] = ACTIONS(95),
    [anon_sym_iput_DASHboolean] = ACTIONS(93),
    [anon_sym_iput_DASHbyte] = ACTIONS(93),
    [anon_sym_iput_DASHchar] = ACTIONS(93),
    [anon_sym_iput_DASHshort] = ACTIONS(93),
    [anon_sym_sget] = ACTIONS(95),
    [anon_sym_sget_DASHwide] = ACTIONS(93),
    [anon_sym_sget_DASHobject] = ACTIONS(93),
    [anon_sym_sget_DASHboolean] = ACTIONS(93),
    [anon_sym_sget_DASHbyte] = ACTIONS(93),
    [anon_sym_sget_DASHchar] = ACTIONS(93),
    [anon_sym_sget_DASHshort] = ACTIONS(93),
    [anon_sym_sput] = ACTIONS(95),
    [anon_sym_sput_DASHwide] = ACTIONS(93),
    [anon_sym_sput_DASHobject] = ACTIONS(93),
    [anon_sym_sput_DASHboolean] = ACTIONS(93),
    [anon_sym_sput_DASHbyte] = ACTIONS(93),
    [anon_sym_sput_DASHchar] = ACTIONS(93),
    [anon_sym_sput_DASHshort] = ACTIONS(93),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(95),
    [anon_sym_invoke_DASHsuper] = ACTIONS(95),
    [anon_sym_invoke_DASHdirect] = ACTIONS(95),
    [anon_sym_invoke_DASHstatic] = ACTIONS(95),
    [anon_sym_invoke_DASHinterface] = ACTIONS(95),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(93),
    [anon_sym_neg_DASHint] = ACTIONS(93),
    [anon_sym_not_DASHint] = ACTIONS(93),
    [anon_sym_neg_DASHlong] = ACTIONS(93),
    [anon_sym_not_DASHlong] = ACTIONS(93),
    [anon_sym_neg_DASHfloat] = ACTIONS(93),
    [anon_sym_neg_DASHdouble] = ACTIONS(93),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(93),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(93),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(93),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(93),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(93),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(93),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(93),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(93),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(93),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(93),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(93),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(93),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(93),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(93),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(93),
    [anon_sym_add_DASHint] = ACTIONS(95),
    [anon_sym_sub_DASHint] = ACTIONS(95),
    [anon_sym_mul_DASHint] = ACTIONS(95),
    [anon_sym_div_DASHint] = ACTIONS(95),
    [anon_sym_rem_DASHint] = ACTIONS(95),
    [anon_sym_and_DASHint] = ACTIONS(95),
    [anon_sym_or_DASHint] = ACTIONS(95),
    [anon_sym_xor_DASHint] = ACTIONS(95),
    [anon_sym_shl_DASHint] = ACTIONS(95),
    [anon_sym_shr_DASHint] = ACTIONS(95),
    [anon_sym_ushr_DASHint] = ACTIONS(95),
    [anon_sym_add_DASHlong] = ACTIONS(95),
    [anon_sym_sub_DASHlong] = ACTIONS(95),
    [anon_sym_mul_DASHlong] = ACTIONS(95),
    [anon_sym_div_DASHlong] = ACTIONS(95),
    [anon_sym_rem_DASHlong] = ACTIONS(95),
    [anon_sym_and_DASHlong] = ACTIONS(95),
    [anon_sym_or_DASHlong] = ACTIONS(95),
    [anon_sym_xor_DASHlong] = ACTIONS(95),
    [anon_sym_shl_DASHlong] = ACTIONS(95),
    [anon_sym_shr_DASHlong] = ACTIONS(95),
    [anon_sym_ushr_DASHlong] = ACTIONS(95),
    [anon_sym_add_DASHfloat] = ACTIONS(95),
    [anon_sym_sub_DASHfloat] = ACTIONS(95),
    [anon_sym_mul_DASHfloat] = ACTIONS(95),
    [anon_sym_div_DASHfloat] = ACTIONS(95),
    [anon_sym_rem_DASHfloat] = ACTIONS(95),
    [anon_sym_add_DASHdouble] = ACTIONS(95),
    [anon_sym_sub_DASHdouble] = ACTIONS(95),
    [anon_sym_mul_DASHdouble] = ACTIONS(95),
    [anon_sym_div_DASHdouble] = ACTIONS(95),
    [anon_sym_rem_DASHdouble] = ACTIONS(95),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(93),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(93),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(93),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(93),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(93),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(93),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(93),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(93),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(93),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(93),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(93),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(93),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(93),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_execute_DASHinline] = ACTIONS(93),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(93),
    [anon_sym_iget_DASHquick] = ACTIONS(93),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(93),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(93),
    [anon_sym_iput_DASHquick] = ACTIONS(93),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(93),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(93),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(95),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(95),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(93),
    [anon_sym_DOTline] = ACTIONS(93),
    [anon_sym_DOTlocals] = ACTIONS(93),
    [anon_sym_DOTparam] = ACTIONS(93),
    [anon_sym_DOTcatch] = ACTIONS(95),
    [anon_sym_DOTcatchall] = ACTIONS(93),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(93),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(93),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_end_method] = ACTIONS(97),
    [anon_sym_DOTannotation] = ACTIONS(97),
    [sym_label] = ACTIONS(97),
    [anon_sym_nop] = ACTIONS(97),
    [anon_sym_move] = ACTIONS(99),
    [anon_sym_move_SLASHfrom16] = ACTIONS(97),
    [anon_sym_move_SLASH16] = ACTIONS(97),
    [anon_sym_move_DASHwide] = ACTIONS(99),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(97),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(97),
    [anon_sym_move_DASHobject] = ACTIONS(99),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(97),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(97),
    [anon_sym_move_DASHresult] = ACTIONS(99),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(97),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(97),
    [anon_sym_move_DASHexception] = ACTIONS(97),
    [anon_sym_return_DASHvoid] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_return_DASHwide] = ACTIONS(97),
    [anon_sym_return_DASHobject] = ACTIONS(97),
    [anon_sym_const_SLASH4] = ACTIONS(97),
    [anon_sym_const_SLASH16] = ACTIONS(97),
    [anon_sym_const] = ACTIONS(99),
    [anon_sym_const_SLASHhigh16] = ACTIONS(97),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(97),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(97),
    [anon_sym_const_DASHwide] = ACTIONS(99),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(97),
    [anon_sym_const_DASHstring] = ACTIONS(99),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(97),
    [anon_sym_const_DASHclass] = ACTIONS(97),
    [anon_sym_monitor_DASHenter] = ACTIONS(97),
    [anon_sym_monitor_DASHexit] = ACTIONS(97),
    [anon_sym_check_DASHcast] = ACTIONS(97),
    [anon_sym_instance_DASHof] = ACTIONS(97),
    [anon_sym_array_DASHlength] = ACTIONS(97),
    [anon_sym_new_DASHinstance] = ACTIONS(97),
    [anon_sym_new_DASHarray] = ACTIONS(97),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(99),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(97),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(97),
    [anon_sym_throw] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_goto_SLASH16] = ACTIONS(97),
    [anon_sym_goto_SLASH32] = ACTIONS(97),
    [anon_sym_packed_DASHswitch] = ACTIONS(97),
    [anon_sym_sparse_DASHswitch] = ACTIONS(97),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(97),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(97),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(97),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(97),
    [anon_sym_cmp_DASHlong] = ACTIONS(97),
    [anon_sym_if_DASHeq] = ACTIONS(99),
    [anon_sym_if_DASHne] = ACTIONS(99),
    [anon_sym_if_DASHlt] = ACTIONS(99),
    [anon_sym_if_DASHge] = ACTIONS(99),
    [anon_sym_if_DASHgt] = ACTIONS(99),
    [anon_sym_if_DASHle] = ACTIONS(99),
    [anon_sym_if_DASHeqz] = ACTIONS(97),
    [anon_sym_if_DASHnez] = ACTIONS(97),
    [anon_sym_if_DASHltz] = ACTIONS(97),
    [anon_sym_if_DASHgez] = ACTIONS(97),
    [anon_sym_if_DASHgtz] = ACTIONS(97),
    [anon_sym_if_DASHlez] = ACTIONS(97),
    [anon_sym_aget] = ACTIONS(99),
    [anon_sym_aget_DASHwide] = ACTIONS(97),
    [anon_sym_aget_DASHobject] = ACTIONS(97),
    [anon_sym_aget_DASHboolean] = ACTIONS(97),
    [anon_sym_aget_DASHbyte] = ACTIONS(97),
    [anon_sym_aget_DASHchar] = ACTIONS(97),
    [anon_sym_aget_DASHshort] = ACTIONS(97),
    [anon_sym_aput] = ACTIONS(99),
    [anon_sym_aput_DASHwide] = ACTIONS(97),
    [anon_sym_aput_DASHobject] = ACTIONS(97),
    [anon_sym_aput_DASHboolean] = ACTIONS(97),
    [anon_sym_aput_DASHbyte] = ACTIONS(97),
    [anon_sym_aput_DASHchar] = ACTIONS(97),
    [anon_sym_aput_DASHshort] = ACTIONS(97),
    [anon_sym_iget] = ACTIONS(99),
    [anon_sym_iget_DASHwide] = ACTIONS(99),
    [anon_sym_iget_DASHobject] = ACTIONS(99),
    [anon_sym_iget_DASHboolean] = ACTIONS(97),
    [anon_sym_iget_DASHbyte] = ACTIONS(97),
    [anon_sym_iget_DASHchar] = ACTIONS(97),
    [anon_sym_iget_DASHshort] = ACTIONS(97),
    [anon_sym_iput] = ACTIONS(99),
    [anon_sym_iput_DASHwide] = ACTIONS(99),
    [anon_sym_iput_DASHobject] = ACTIONS(99),
    [anon_sym_iput_DASHboolean] = ACTIONS(97),
    [anon_sym_iput_DASHbyte] = ACTIONS(97),
    [anon_sym_iput_DASHchar] = ACTIONS(97),
    [anon_sym_iput_DASHshort] = ACTIONS(97),
    [anon_sym_sget] = ACTIONS(99),
    [anon_sym_sget_DASHwide] = ACTIONS(97),
    [anon_sym_sget_DASHobject] = ACTIONS(97),
    [anon_sym_sget_DASHboolean] = ACTIONS(97),
    [anon_sym_sget_DASHbyte] = ACTIONS(97),
    [anon_sym_sget_DASHchar] = ACTIONS(97),
    [anon_sym_sget_DASHshort] = ACTIONS(97),
    [anon_sym_sput] = ACTIONS(99),
    [anon_sym_sput_DASHwide] = ACTIONS(97),
    [anon_sym_sput_DASHobject] = ACTIONS(97),
    [anon_sym_sput_DASHboolean] = ACTIONS(97),
    [anon_sym_sput_DASHbyte] = ACTIONS(97),
    [anon_sym_sput_DASHchar] = ACTIONS(97),
    [anon_sym_sput_DASHshort] = ACTIONS(97),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(99),
    [anon_sym_invoke_DASHsuper] = ACTIONS(99),
    [anon_sym_invoke_DASHdirect] = ACTIONS(99),
    [anon_sym_invoke_DASHstatic] = ACTIONS(99),
    [anon_sym_invoke_DASHinterface] = ACTIONS(99),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(97),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(97),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(97),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(97),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(97),
    [anon_sym_neg_DASHint] = ACTIONS(97),
    [anon_sym_not_DASHint] = ACTIONS(97),
    [anon_sym_neg_DASHlong] = ACTIONS(97),
    [anon_sym_not_DASHlong] = ACTIONS(97),
    [anon_sym_neg_DASHfloat] = ACTIONS(97),
    [anon_sym_neg_DASHdouble] = ACTIONS(97),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(97),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(97),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(97),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(97),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(97),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(97),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(97),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(97),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(97),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(97),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(97),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(97),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(97),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(97),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(97),
    [anon_sym_add_DASHint] = ACTIONS(99),
    [anon_sym_sub_DASHint] = ACTIONS(99),
    [anon_sym_mul_DASHint] = ACTIONS(99),
    [anon_sym_div_DASHint] = ACTIONS(99),
    [anon_sym_rem_DASHint] = ACTIONS(99),
    [anon_sym_and_DASHint] = ACTIONS(99),
    [anon_sym_or_DASHint] = ACTIONS(99),
    [anon_sym_xor_DASHint] = ACTIONS(99),
    [anon_sym_shl_DASHint] = ACTIONS(99),
    [anon_sym_shr_DASHint] = ACTIONS(99),
    [anon_sym_ushr_DASHint] = ACTIONS(99),
    [anon_sym_add_DASHlong] = ACTIONS(99),
    [anon_sym_sub_DASHlong] = ACTIONS(99),
    [anon_sym_mul_DASHlong] = ACTIONS(99),
    [anon_sym_div_DASHlong] = ACTIONS(99),
    [anon_sym_rem_DASHlong] = ACTIONS(99),
    [anon_sym_and_DASHlong] = ACTIONS(99),
    [anon_sym_or_DASHlong] = ACTIONS(99),
    [anon_sym_xor_DASHlong] = ACTIONS(99),
    [anon_sym_shl_DASHlong] = ACTIONS(99),
    [anon_sym_shr_DASHlong] = ACTIONS(99),
    [anon_sym_ushr_DASHlong] = ACTIONS(99),
    [anon_sym_add_DASHfloat] = ACTIONS(99),
    [anon_sym_sub_DASHfloat] = ACTIONS(99),
    [anon_sym_mul_DASHfloat] = ACTIONS(99),
    [anon_sym_div_DASHfloat] = ACTIONS(99),
    [anon_sym_rem_DASHfloat] = ACTIONS(99),
    [anon_sym_add_DASHdouble] = ACTIONS(99),
    [anon_sym_sub_DASHdouble] = ACTIONS(99),
    [anon_sym_mul_DASHdouble] = ACTIONS(99),
    [anon_sym_div_DASHdouble] = ACTIONS(99),
    [anon_sym_rem_DASHdouble] = ACTIONS(99),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(97),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(97),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(97),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(97),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(97),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(97),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(97),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(97),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(97),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(97),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(97),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(97),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(97),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(97),
    [anon_sym_execute_DASHinline] = ACTIONS(97),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(97),
    [anon_sym_iget_DASHquick] = ACTIONS(97),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(97),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(97),
    [anon_sym_iput_DASHquick] = ACTIONS(97),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(97),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(97),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(99),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(97),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(99),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(97),
    [anon_sym_DOTline] = ACTIONS(97),
    [anon_sym_DOTlocals] = ACTIONS(97),
    [anon_sym_DOTparam] = ACTIONS(97),
    [anon_sym_DOTcatch] = ACTIONS(99),
    [anon_sym_DOTcatchall] = ACTIONS(97),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(97),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(97),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_end_method] = ACTIONS(101),
    [anon_sym_DOTannotation] = ACTIONS(101),
    [sym_label] = ACTIONS(101),
    [anon_sym_nop] = ACTIONS(101),
    [anon_sym_move] = ACTIONS(103),
    [anon_sym_move_SLASHfrom16] = ACTIONS(101),
    [anon_sym_move_SLASH16] = ACTIONS(101),
    [anon_sym_move_DASHwide] = ACTIONS(103),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(101),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(101),
    [anon_sym_move_DASHobject] = ACTIONS(103),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(101),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(101),
    [anon_sym_move_DASHresult] = ACTIONS(103),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(101),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(101),
    [anon_sym_move_DASHexception] = ACTIONS(101),
    [anon_sym_return_DASHvoid] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_return_DASHwide] = ACTIONS(101),
    [anon_sym_return_DASHobject] = ACTIONS(101),
    [anon_sym_const_SLASH4] = ACTIONS(101),
    [anon_sym_const_SLASH16] = ACTIONS(101),
    [anon_sym_const] = ACTIONS(103),
    [anon_sym_const_SLASHhigh16] = ACTIONS(101),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(101),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(101),
    [anon_sym_const_DASHwide] = ACTIONS(103),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(101),
    [anon_sym_const_DASHstring] = ACTIONS(103),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(101),
    [anon_sym_const_DASHclass] = ACTIONS(101),
    [anon_sym_monitor_DASHenter] = ACTIONS(101),
    [anon_sym_monitor_DASHexit] = ACTIONS(101),
    [anon_sym_check_DASHcast] = ACTIONS(101),
    [anon_sym_instance_DASHof] = ACTIONS(101),
    [anon_sym_array_DASHlength] = ACTIONS(101),
    [anon_sym_new_DASHinstance] = ACTIONS(101),
    [anon_sym_new_DASHarray] = ACTIONS(101),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(103),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(101),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(101),
    [anon_sym_throw] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_goto_SLASH16] = ACTIONS(101),
    [anon_sym_goto_SLASH32] = ACTIONS(101),
    [anon_sym_packed_DASHswitch] = ACTIONS(101),
    [anon_sym_sparse_DASHswitch] = ACTIONS(101),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(101),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(101),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(101),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(101),
    [anon_sym_cmp_DASHlong] = ACTIONS(101),
    [anon_sym_if_DASHeq] = ACTIONS(103),
    [anon_sym_if_DASHne] = ACTIONS(103),
    [anon_sym_if_DASHlt] = ACTIONS(103),
    [anon_sym_if_DASHge] = ACTIONS(103),
    [anon_sym_if_DASHgt] = ACTIONS(103),
    [anon_sym_if_DASHle] = ACTIONS(103),
    [anon_sym_if_DASHeqz] = ACTIONS(101),
    [anon_sym_if_DASHnez] = ACTIONS(101),
    [anon_sym_if_DASHltz] = ACTIONS(101),
    [anon_sym_if_DASHgez] = ACTIONS(101),
    [anon_sym_if_DASHgtz] = ACTIONS(101),
    [anon_sym_if_DASHlez] = ACTIONS(101),
    [anon_sym_aget] = ACTIONS(103),
    [anon_sym_aget_DASHwide] = ACTIONS(101),
    [anon_sym_aget_DASHobject] = ACTIONS(101),
    [anon_sym_aget_DASHboolean] = ACTIONS(101),
    [anon_sym_aget_DASHbyte] = ACTIONS(101),
    [anon_sym_aget_DASHchar] = ACTIONS(101),
    [anon_sym_aget_DASHshort] = ACTIONS(101),
    [anon_sym_aput] = ACTIONS(103),
    [anon_sym_aput_DASHwide] = ACTIONS(101),
    [anon_sym_aput_DASHobject] = ACTIONS(101),
    [anon_sym_aput_DASHboolean] = ACTIONS(101),
    [anon_sym_aput_DASHbyte] = ACTIONS(101),
    [anon_sym_aput_DASHchar] = ACTIONS(101),
    [anon_sym_aput_DASHshort] = ACTIONS(101),
    [anon_sym_iget] = ACTIONS(103),
    [anon_sym_iget_DASHwide] = ACTIONS(103),
    [anon_sym_iget_DASHobject] = ACTIONS(103),
    [anon_sym_iget_DASHboolean] = ACTIONS(101),
    [anon_sym_iget_DASHbyte] = ACTIONS(101),
    [anon_sym_iget_DASHchar] = ACTIONS(101),
    [anon_sym_iget_DASHshort] = ACTIONS(101),
    [anon_sym_iput] = ACTIONS(103),
    [anon_sym_iput_DASHwide] = ACTIONS(103),
    [anon_sym_iput_DASHobject] = ACTIONS(103),
    [anon_sym_iput_DASHboolean] = ACTIONS(101),
    [anon_sym_iput_DASHbyte] = ACTIONS(101),
    [anon_sym_iput_DASHchar] = ACTIONS(101),
    [anon_sym_iput_DASHshort] = ACTIONS(101),
    [anon_sym_sget] = ACTIONS(103),
    [anon_sym_sget_DASHwide] = ACTIONS(101),
    [anon_sym_sget_DASHobject] = ACTIONS(101),
    [anon_sym_sget_DASHboolean] = ACTIONS(101),
    [anon_sym_sget_DASHbyte] = ACTIONS(101),
    [anon_sym_sget_DASHchar] = ACTIONS(101),
    [anon_sym_sget_DASHshort] = ACTIONS(101),
    [anon_sym_sput] = ACTIONS(103),
    [anon_sym_sput_DASHwide] = ACTIONS(101),
    [anon_sym_sput_DASHobject] = ACTIONS(101),
    [anon_sym_sput_DASHboolean] = ACTIONS(101),
    [anon_sym_sput_DASHbyte] = ACTIONS(101),
    [anon_sym_sput_DASHchar] = ACTIONS(101),
    [anon_sym_sput_DASHshort] = ACTIONS(101),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(103),
    [anon_sym_invoke_DASHsuper] = ACTIONS(103),
    [anon_sym_invoke_DASHdirect] = ACTIONS(103),
    [anon_sym_invoke_DASHstatic] = ACTIONS(103),
    [anon_sym_invoke_DASHinterface] = ACTIONS(103),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(101),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(101),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(101),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(101),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(101),
    [anon_sym_neg_DASHint] = ACTIONS(101),
    [anon_sym_not_DASHint] = ACTIONS(101),
    [anon_sym_neg_DASHlong] = ACTIONS(101),
    [anon_sym_not_DASHlong] = ACTIONS(101),
    [anon_sym_neg_DASHfloat] = ACTIONS(101),
    [anon_sym_neg_DASHdouble] = ACTIONS(101),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(101),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(101),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(101),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(101),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(101),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(101),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(101),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(101),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(101),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(101),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(101),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(101),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(101),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(101),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(101),
    [anon_sym_add_DASHint] = ACTIONS(103),
    [anon_sym_sub_DASHint] = ACTIONS(103),
    [anon_sym_mul_DASHint] = ACTIONS(103),
    [anon_sym_div_DASHint] = ACTIONS(103),
    [anon_sym_rem_DASHint] = ACTIONS(103),
    [anon_sym_and_DASHint] = ACTIONS(103),
    [anon_sym_or_DASHint] = ACTIONS(103),
    [anon_sym_xor_DASHint] = ACTIONS(103),
    [anon_sym_shl_DASHint] = ACTIONS(103),
    [anon_sym_shr_DASHint] = ACTIONS(103),
    [anon_sym_ushr_DASHint] = ACTIONS(103),
    [anon_sym_add_DASHlong] = ACTIONS(103),
    [anon_sym_sub_DASHlong] = ACTIONS(103),
    [anon_sym_mul_DASHlong] = ACTIONS(103),
    [anon_sym_div_DASHlong] = ACTIONS(103),
    [anon_sym_rem_DASHlong] = ACTIONS(103),
    [anon_sym_and_DASHlong] = ACTIONS(103),
    [anon_sym_or_DASHlong] = ACTIONS(103),
    [anon_sym_xor_DASHlong] = ACTIONS(103),
    [anon_sym_shl_DASHlong] = ACTIONS(103),
    [anon_sym_shr_DASHlong] = ACTIONS(103),
    [anon_sym_ushr_DASHlong] = ACTIONS(103),
    [anon_sym_add_DASHfloat] = ACTIONS(103),
    [anon_sym_sub_DASHfloat] = ACTIONS(103),
    [anon_sym_mul_DASHfloat] = ACTIONS(103),
    [anon_sym_div_DASHfloat] = ACTIONS(103),
    [anon_sym_rem_DASHfloat] = ACTIONS(103),
    [anon_sym_add_DASHdouble] = ACTIONS(103),
    [anon_sym_sub_DASHdouble] = ACTIONS(103),
    [anon_sym_mul_DASHdouble] = ACTIONS(103),
    [anon_sym_div_DASHdouble] = ACTIONS(103),
    [anon_sym_rem_DASHdouble] = ACTIONS(103),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(101),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(101),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(101),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(101),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(101),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(101),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(101),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(101),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(101),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(101),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(101),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(101),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(101),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(101),
    [anon_sym_execute_DASHinline] = ACTIONS(101),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(101),
    [anon_sym_iget_DASHquick] = ACTIONS(101),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(101),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(101),
    [anon_sym_iput_DASHquick] = ACTIONS(101),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(101),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(101),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(103),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(101),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(103),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(101),
    [anon_sym_DOTline] = ACTIONS(101),
    [anon_sym_DOTlocals] = ACTIONS(101),
    [anon_sym_DOTparam] = ACTIONS(101),
    [anon_sym_DOTcatch] = ACTIONS(103),
    [anon_sym_DOTcatchall] = ACTIONS(101),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(101),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(101),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_end_method] = ACTIONS(105),
    [anon_sym_DOTannotation] = ACTIONS(105),
    [sym_label] = ACTIONS(105),
    [anon_sym_nop] = ACTIONS(105),
    [anon_sym_move] = ACTIONS(107),
    [anon_sym_move_SLASHfrom16] = ACTIONS(105),
    [anon_sym_move_SLASH16] = ACTIONS(105),
    [anon_sym_move_DASHwide] = ACTIONS(107),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(105),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(105),
    [anon_sym_move_DASHobject] = ACTIONS(107),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(105),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(105),
    [anon_sym_move_DASHresult] = ACTIONS(107),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(105),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(105),
    [anon_sym_move_DASHexception] = ACTIONS(105),
    [anon_sym_return_DASHvoid] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(107),
    [anon_sym_return_DASHwide] = ACTIONS(105),
    [anon_sym_return_DASHobject] = ACTIONS(105),
    [anon_sym_const_SLASH4] = ACTIONS(105),
    [anon_sym_const_SLASH16] = ACTIONS(105),
    [anon_sym_const] = ACTIONS(107),
    [anon_sym_const_SLASHhigh16] = ACTIONS(105),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(105),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(105),
    [anon_sym_const_DASHwide] = ACTIONS(107),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(105),
    [anon_sym_const_DASHstring] = ACTIONS(107),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(105),
    [anon_sym_const_DASHclass] = ACTIONS(105),
    [anon_sym_monitor_DASHenter] = ACTIONS(105),
    [anon_sym_monitor_DASHexit] = ACTIONS(105),
    [anon_sym_check_DASHcast] = ACTIONS(105),
    [anon_sym_instance_DASHof] = ACTIONS(105),
    [anon_sym_array_DASHlength] = ACTIONS(105),
    [anon_sym_new_DASHinstance] = ACTIONS(105),
    [anon_sym_new_DASHarray] = ACTIONS(105),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(107),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(105),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(105),
    [anon_sym_throw] = ACTIONS(105),
    [anon_sym_goto] = ACTIONS(107),
    [anon_sym_goto_SLASH16] = ACTIONS(105),
    [anon_sym_goto_SLASH32] = ACTIONS(105),
    [anon_sym_packed_DASHswitch] = ACTIONS(105),
    [anon_sym_sparse_DASHswitch] = ACTIONS(105),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(105),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(105),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(105),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(105),
    [anon_sym_cmp_DASHlong] = ACTIONS(105),
    [anon_sym_if_DASHeq] = ACTIONS(107),
    [anon_sym_if_DASHne] = ACTIONS(107),
    [anon_sym_if_DASHlt] = ACTIONS(107),
    [anon_sym_if_DASHge] = ACTIONS(107),
    [anon_sym_if_DASHgt] = ACTIONS(107),
    [anon_sym_if_DASHle] = ACTIONS(107),
    [anon_sym_if_DASHeqz] = ACTIONS(105),
    [anon_sym_if_DASHnez] = ACTIONS(105),
    [anon_sym_if_DASHltz] = ACTIONS(105),
    [anon_sym_if_DASHgez] = ACTIONS(105),
    [anon_sym_if_DASHgtz] = ACTIONS(105),
    [anon_sym_if_DASHlez] = ACTIONS(105),
    [anon_sym_aget] = ACTIONS(107),
    [anon_sym_aget_DASHwide] = ACTIONS(105),
    [anon_sym_aget_DASHobject] = ACTIONS(105),
    [anon_sym_aget_DASHboolean] = ACTIONS(105),
    [anon_sym_aget_DASHbyte] = ACTIONS(105),
    [anon_sym_aget_DASHchar] = ACTIONS(105),
    [anon_sym_aget_DASHshort] = ACTIONS(105),
    [anon_sym_aput] = ACTIONS(107),
    [anon_sym_aput_DASHwide] = ACTIONS(105),
    [anon_sym_aput_DASHobject] = ACTIONS(105),
    [anon_sym_aput_DASHboolean] = ACTIONS(105),
    [anon_sym_aput_DASHbyte] = ACTIONS(105),
    [anon_sym_aput_DASHchar] = ACTIONS(105),
    [anon_sym_aput_DASHshort] = ACTIONS(105),
    [anon_sym_iget] = ACTIONS(107),
    [anon_sym_iget_DASHwide] = ACTIONS(107),
    [anon_sym_iget_DASHobject] = ACTIONS(107),
    [anon_sym_iget_DASHboolean] = ACTIONS(105),
    [anon_sym_iget_DASHbyte] = ACTIONS(105),
    [anon_sym_iget_DASHchar] = ACTIONS(105),
    [anon_sym_iget_DASHshort] = ACTIONS(105),
    [anon_sym_iput] = ACTIONS(107),
    [anon_sym_iput_DASHwide] = ACTIONS(107),
    [anon_sym_iput_DASHobject] = ACTIONS(107),
    [anon_sym_iput_DASHboolean] = ACTIONS(105),
    [anon_sym_iput_DASHbyte] = ACTIONS(105),
    [anon_sym_iput_DASHchar] = ACTIONS(105),
    [anon_sym_iput_DASHshort] = ACTIONS(105),
    [anon_sym_sget] = ACTIONS(107),
    [anon_sym_sget_DASHwide] = ACTIONS(105),
    [anon_sym_sget_DASHobject] = ACTIONS(105),
    [anon_sym_sget_DASHboolean] = ACTIONS(105),
    [anon_sym_sget_DASHbyte] = ACTIONS(105),
    [anon_sym_sget_DASHchar] = ACTIONS(105),
    [anon_sym_sget_DASHshort] = ACTIONS(105),
    [anon_sym_sput] = ACTIONS(107),
    [anon_sym_sput_DASHwide] = ACTIONS(105),
    [anon_sym_sput_DASHobject] = ACTIONS(105),
    [anon_sym_sput_DASHboolean] = ACTIONS(105),
    [anon_sym_sput_DASHbyte] = ACTIONS(105),
    [anon_sym_sput_DASHchar] = ACTIONS(105),
    [anon_sym_sput_DASHshort] = ACTIONS(105),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(107),
    [anon_sym_invoke_DASHsuper] = ACTIONS(107),
    [anon_sym_invoke_DASHdirect] = ACTIONS(107),
    [anon_sym_invoke_DASHstatic] = ACTIONS(107),
    [anon_sym_invoke_DASHinterface] = ACTIONS(107),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(105),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(105),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(105),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(105),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(105),
    [anon_sym_neg_DASHint] = ACTIONS(105),
    [anon_sym_not_DASHint] = ACTIONS(105),
    [anon_sym_neg_DASHlong] = ACTIONS(105),
    [anon_sym_not_DASHlong] = ACTIONS(105),
    [anon_sym_neg_DASHfloat] = ACTIONS(105),
    [anon_sym_neg_DASHdouble] = ACTIONS(105),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(105),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(105),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(105),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(105),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(105),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(105),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(105),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(105),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(105),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(105),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(105),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(105),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(105),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(105),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(105),
    [anon_sym_add_DASHint] = ACTIONS(107),
    [anon_sym_sub_DASHint] = ACTIONS(107),
    [anon_sym_mul_DASHint] = ACTIONS(107),
    [anon_sym_div_DASHint] = ACTIONS(107),
    [anon_sym_rem_DASHint] = ACTIONS(107),
    [anon_sym_and_DASHint] = ACTIONS(107),
    [anon_sym_or_DASHint] = ACTIONS(107),
    [anon_sym_xor_DASHint] = ACTIONS(107),
    [anon_sym_shl_DASHint] = ACTIONS(107),
    [anon_sym_shr_DASHint] = ACTIONS(107),
    [anon_sym_ushr_DASHint] = ACTIONS(107),
    [anon_sym_add_DASHlong] = ACTIONS(107),
    [anon_sym_sub_DASHlong] = ACTIONS(107),
    [anon_sym_mul_DASHlong] = ACTIONS(107),
    [anon_sym_div_DASHlong] = ACTIONS(107),
    [anon_sym_rem_DASHlong] = ACTIONS(107),
    [anon_sym_and_DASHlong] = ACTIONS(107),
    [anon_sym_or_DASHlong] = ACTIONS(107),
    [anon_sym_xor_DASHlong] = ACTIONS(107),
    [anon_sym_shl_DASHlong] = ACTIONS(107),
    [anon_sym_shr_DASHlong] = ACTIONS(107),
    [anon_sym_ushr_DASHlong] = ACTIONS(107),
    [anon_sym_add_DASHfloat] = ACTIONS(107),
    [anon_sym_sub_DASHfloat] = ACTIONS(107),
    [anon_sym_mul_DASHfloat] = ACTIONS(107),
    [anon_sym_div_DASHfloat] = ACTIONS(107),
    [anon_sym_rem_DASHfloat] = ACTIONS(107),
    [anon_sym_add_DASHdouble] = ACTIONS(107),
    [anon_sym_sub_DASHdouble] = ACTIONS(107),
    [anon_sym_mul_DASHdouble] = ACTIONS(107),
    [anon_sym_div_DASHdouble] = ACTIONS(107),
    [anon_sym_rem_DASHdouble] = ACTIONS(107),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(105),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(105),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(105),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(105),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(105),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(105),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(105),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(105),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(105),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(105),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(105),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(105),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(105),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(105),
    [anon_sym_execute_DASHinline] = ACTIONS(105),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(105),
    [anon_sym_iget_DASHquick] = ACTIONS(105),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(105),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(105),
    [anon_sym_iput_DASHquick] = ACTIONS(105),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(105),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(105),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(107),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(105),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(107),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(105),
    [anon_sym_DOTline] = ACTIONS(105),
    [anon_sym_DOTlocals] = ACTIONS(105),
    [anon_sym_DOTparam] = ACTIONS(105),
    [anon_sym_DOTcatch] = ACTIONS(107),
    [anon_sym_DOTcatchall] = ACTIONS(105),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(105),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(105),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_end_method] = ACTIONS(109),
    [anon_sym_DOTannotation] = ACTIONS(109),
    [sym_label] = ACTIONS(109),
    [anon_sym_nop] = ACTIONS(109),
    [anon_sym_move] = ACTIONS(111),
    [anon_sym_move_SLASHfrom16] = ACTIONS(109),
    [anon_sym_move_SLASH16] = ACTIONS(109),
    [anon_sym_move_DASHwide] = ACTIONS(111),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(109),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(109),
    [anon_sym_move_DASHobject] = ACTIONS(111),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(109),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(109),
    [anon_sym_move_DASHresult] = ACTIONS(111),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(109),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(109),
    [anon_sym_move_DASHexception] = ACTIONS(109),
    [anon_sym_return_DASHvoid] = ACTIONS(109),
    [anon_sym_return] = ACTIONS(111),
    [anon_sym_return_DASHwide] = ACTIONS(109),
    [anon_sym_return_DASHobject] = ACTIONS(109),
    [anon_sym_const_SLASH4] = ACTIONS(109),
    [anon_sym_const_SLASH16] = ACTIONS(109),
    [anon_sym_const] = ACTIONS(111),
    [anon_sym_const_SLASHhigh16] = ACTIONS(109),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(109),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(109),
    [anon_sym_const_DASHwide] = ACTIONS(111),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(109),
    [anon_sym_const_DASHstring] = ACTIONS(111),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(109),
    [anon_sym_const_DASHclass] = ACTIONS(109),
    [anon_sym_monitor_DASHenter] = ACTIONS(109),
    [anon_sym_monitor_DASHexit] = ACTIONS(109),
    [anon_sym_check_DASHcast] = ACTIONS(109),
    [anon_sym_instance_DASHof] = ACTIONS(109),
    [anon_sym_array_DASHlength] = ACTIONS(109),
    [anon_sym_new_DASHinstance] = ACTIONS(109),
    [anon_sym_new_DASHarray] = ACTIONS(109),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(111),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(109),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(109),
    [anon_sym_throw] = ACTIONS(109),
    [anon_sym_goto] = ACTIONS(111),
    [anon_sym_goto_SLASH16] = ACTIONS(109),
    [anon_sym_goto_SLASH32] = ACTIONS(109),
    [anon_sym_packed_DASHswitch] = ACTIONS(109),
    [anon_sym_sparse_DASHswitch] = ACTIONS(109),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(109),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(109),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(109),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(109),
    [anon_sym_cmp_DASHlong] = ACTIONS(109),
    [anon_sym_if_DASHeq] = ACTIONS(111),
    [anon_sym_if_DASHne] = ACTIONS(111),
    [anon_sym_if_DASHlt] = ACTIONS(111),
    [anon_sym_if_DASHge] = ACTIONS(111),
    [anon_sym_if_DASHgt] = ACTIONS(111),
    [anon_sym_if_DASHle] = ACTIONS(111),
    [anon_sym_if_DASHeqz] = ACTIONS(109),
    [anon_sym_if_DASHnez] = ACTIONS(109),
    [anon_sym_if_DASHltz] = ACTIONS(109),
    [anon_sym_if_DASHgez] = ACTIONS(109),
    [anon_sym_if_DASHgtz] = ACTIONS(109),
    [anon_sym_if_DASHlez] = ACTIONS(109),
    [anon_sym_aget] = ACTIONS(111),
    [anon_sym_aget_DASHwide] = ACTIONS(109),
    [anon_sym_aget_DASHobject] = ACTIONS(109),
    [anon_sym_aget_DASHboolean] = ACTIONS(109),
    [anon_sym_aget_DASHbyte] = ACTIONS(109),
    [anon_sym_aget_DASHchar] = ACTIONS(109),
    [anon_sym_aget_DASHshort] = ACTIONS(109),
    [anon_sym_aput] = ACTIONS(111),
    [anon_sym_aput_DASHwide] = ACTIONS(109),
    [anon_sym_aput_DASHobject] = ACTIONS(109),
    [anon_sym_aput_DASHboolean] = ACTIONS(109),
    [anon_sym_aput_DASHbyte] = ACTIONS(109),
    [anon_sym_aput_DASHchar] = ACTIONS(109),
    [anon_sym_aput_DASHshort] = ACTIONS(109),
    [anon_sym_iget] = ACTIONS(111),
    [anon_sym_iget_DASHwide] = ACTIONS(111),
    [anon_sym_iget_DASHobject] = ACTIONS(111),
    [anon_sym_iget_DASHboolean] = ACTIONS(109),
    [anon_sym_iget_DASHbyte] = ACTIONS(109),
    [anon_sym_iget_DASHchar] = ACTIONS(109),
    [anon_sym_iget_DASHshort] = ACTIONS(109),
    [anon_sym_iput] = ACTIONS(111),
    [anon_sym_iput_DASHwide] = ACTIONS(111),
    [anon_sym_iput_DASHobject] = ACTIONS(111),
    [anon_sym_iput_DASHboolean] = ACTIONS(109),
    [anon_sym_iput_DASHbyte] = ACTIONS(109),
    [anon_sym_iput_DASHchar] = ACTIONS(109),
    [anon_sym_iput_DASHshort] = ACTIONS(109),
    [anon_sym_sget] = ACTIONS(111),
    [anon_sym_sget_DASHwide] = ACTIONS(109),
    [anon_sym_sget_DASHobject] = ACTIONS(109),
    [anon_sym_sget_DASHboolean] = ACTIONS(109),
    [anon_sym_sget_DASHbyte] = ACTIONS(109),
    [anon_sym_sget_DASHchar] = ACTIONS(109),
    [anon_sym_sget_DASHshort] = ACTIONS(109),
    [anon_sym_sput] = ACTIONS(111),
    [anon_sym_sput_DASHwide] = ACTIONS(109),
    [anon_sym_sput_DASHobject] = ACTIONS(109),
    [anon_sym_sput_DASHboolean] = ACTIONS(109),
    [anon_sym_sput_DASHbyte] = ACTIONS(109),
    [anon_sym_sput_DASHchar] = ACTIONS(109),
    [anon_sym_sput_DASHshort] = ACTIONS(109),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(111),
    [anon_sym_invoke_DASHsuper] = ACTIONS(111),
    [anon_sym_invoke_DASHdirect] = ACTIONS(111),
    [anon_sym_invoke_DASHstatic] = ACTIONS(111),
    [anon_sym_invoke_DASHinterface] = ACTIONS(111),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(109),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(109),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(109),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(109),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(109),
    [anon_sym_neg_DASHint] = ACTIONS(109),
    [anon_sym_not_DASHint] = ACTIONS(109),
    [anon_sym_neg_DASHlong] = ACTIONS(109),
    [anon_sym_not_DASHlong] = ACTIONS(109),
    [anon_sym_neg_DASHfloat] = ACTIONS(109),
    [anon_sym_neg_DASHdouble] = ACTIONS(109),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(109),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(109),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(109),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(109),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(109),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(109),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(109),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(109),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(109),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(109),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(109),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(109),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(109),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(109),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(109),
    [anon_sym_add_DASHint] = ACTIONS(111),
    [anon_sym_sub_DASHint] = ACTIONS(111),
    [anon_sym_mul_DASHint] = ACTIONS(111),
    [anon_sym_div_DASHint] = ACTIONS(111),
    [anon_sym_rem_DASHint] = ACTIONS(111),
    [anon_sym_and_DASHint] = ACTIONS(111),
    [anon_sym_or_DASHint] = ACTIONS(111),
    [anon_sym_xor_DASHint] = ACTIONS(111),
    [anon_sym_shl_DASHint] = ACTIONS(111),
    [anon_sym_shr_DASHint] = ACTIONS(111),
    [anon_sym_ushr_DASHint] = ACTIONS(111),
    [anon_sym_add_DASHlong] = ACTIONS(111),
    [anon_sym_sub_DASHlong] = ACTIONS(111),
    [anon_sym_mul_DASHlong] = ACTIONS(111),
    [anon_sym_div_DASHlong] = ACTIONS(111),
    [anon_sym_rem_DASHlong] = ACTIONS(111),
    [anon_sym_and_DASHlong] = ACTIONS(111),
    [anon_sym_or_DASHlong] = ACTIONS(111),
    [anon_sym_xor_DASHlong] = ACTIONS(111),
    [anon_sym_shl_DASHlong] = ACTIONS(111),
    [anon_sym_shr_DASHlong] = ACTIONS(111),
    [anon_sym_ushr_DASHlong] = ACTIONS(111),
    [anon_sym_add_DASHfloat] = ACTIONS(111),
    [anon_sym_sub_DASHfloat] = ACTIONS(111),
    [anon_sym_mul_DASHfloat] = ACTIONS(111),
    [anon_sym_div_DASHfloat] = ACTIONS(111),
    [anon_sym_rem_DASHfloat] = ACTIONS(111),
    [anon_sym_add_DASHdouble] = ACTIONS(111),
    [anon_sym_sub_DASHdouble] = ACTIONS(111),
    [anon_sym_mul_DASHdouble] = ACTIONS(111),
    [anon_sym_div_DASHdouble] = ACTIONS(111),
    [anon_sym_rem_DASHdouble] = ACTIONS(111),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(109),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(109),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(109),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(109),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(109),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(109),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(109),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(109),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(109),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(109),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(109),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(109),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(109),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(109),
    [anon_sym_execute_DASHinline] = ACTIONS(109),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(109),
    [anon_sym_iget_DASHquick] = ACTIONS(109),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(109),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(109),
    [anon_sym_iput_DASHquick] = ACTIONS(109),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(109),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(109),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(111),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(109),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(111),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(109),
    [anon_sym_DOTline] = ACTIONS(109),
    [anon_sym_DOTlocals] = ACTIONS(109),
    [anon_sym_DOTparam] = ACTIONS(109),
    [anon_sym_DOTcatch] = ACTIONS(111),
    [anon_sym_DOTcatchall] = ACTIONS(109),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(109),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(109),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_end_method] = ACTIONS(113),
    [anon_sym_DOTannotation] = ACTIONS(113),
    [sym_label] = ACTIONS(113),
    [anon_sym_nop] = ACTIONS(113),
    [anon_sym_move] = ACTIONS(115),
    [anon_sym_move_SLASHfrom16] = ACTIONS(113),
    [anon_sym_move_SLASH16] = ACTIONS(113),
    [anon_sym_move_DASHwide] = ACTIONS(115),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(113),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(113),
    [anon_sym_move_DASHobject] = ACTIONS(115),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(113),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(113),
    [anon_sym_move_DASHresult] = ACTIONS(115),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(113),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(113),
    [anon_sym_move_DASHexception] = ACTIONS(113),
    [anon_sym_return_DASHvoid] = ACTIONS(113),
    [anon_sym_return] = ACTIONS(115),
    [anon_sym_return_DASHwide] = ACTIONS(113),
    [anon_sym_return_DASHobject] = ACTIONS(113),
    [anon_sym_const_SLASH4] = ACTIONS(113),
    [anon_sym_const_SLASH16] = ACTIONS(113),
    [anon_sym_const] = ACTIONS(115),
    [anon_sym_const_SLASHhigh16] = ACTIONS(113),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(113),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(113),
    [anon_sym_const_DASHwide] = ACTIONS(115),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(113),
    [anon_sym_const_DASHstring] = ACTIONS(115),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(113),
    [anon_sym_const_DASHclass] = ACTIONS(113),
    [anon_sym_monitor_DASHenter] = ACTIONS(113),
    [anon_sym_monitor_DASHexit] = ACTIONS(113),
    [anon_sym_check_DASHcast] = ACTIONS(113),
    [anon_sym_instance_DASHof] = ACTIONS(113),
    [anon_sym_array_DASHlength] = ACTIONS(113),
    [anon_sym_new_DASHinstance] = ACTIONS(113),
    [anon_sym_new_DASHarray] = ACTIONS(113),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(115),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(113),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(113),
    [anon_sym_throw] = ACTIONS(113),
    [anon_sym_goto] = ACTIONS(115),
    [anon_sym_goto_SLASH16] = ACTIONS(113),
    [anon_sym_goto_SLASH32] = ACTIONS(113),
    [anon_sym_packed_DASHswitch] = ACTIONS(113),
    [anon_sym_sparse_DASHswitch] = ACTIONS(113),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(113),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(113),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(113),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(113),
    [anon_sym_cmp_DASHlong] = ACTIONS(113),
    [anon_sym_if_DASHeq] = ACTIONS(115),
    [anon_sym_if_DASHne] = ACTIONS(115),
    [anon_sym_if_DASHlt] = ACTIONS(115),
    [anon_sym_if_DASHge] = ACTIONS(115),
    [anon_sym_if_DASHgt] = ACTIONS(115),
    [anon_sym_if_DASHle] = ACTIONS(115),
    [anon_sym_if_DASHeqz] = ACTIONS(113),
    [anon_sym_if_DASHnez] = ACTIONS(113),
    [anon_sym_if_DASHltz] = ACTIONS(113),
    [anon_sym_if_DASHgez] = ACTIONS(113),
    [anon_sym_if_DASHgtz] = ACTIONS(113),
    [anon_sym_if_DASHlez] = ACTIONS(113),
    [anon_sym_aget] = ACTIONS(115),
    [anon_sym_aget_DASHwide] = ACTIONS(113),
    [anon_sym_aget_DASHobject] = ACTIONS(113),
    [anon_sym_aget_DASHboolean] = ACTIONS(113),
    [anon_sym_aget_DASHbyte] = ACTIONS(113),
    [anon_sym_aget_DASHchar] = ACTIONS(113),
    [anon_sym_aget_DASHshort] = ACTIONS(113),
    [anon_sym_aput] = ACTIONS(115),
    [anon_sym_aput_DASHwide] = ACTIONS(113),
    [anon_sym_aput_DASHobject] = ACTIONS(113),
    [anon_sym_aput_DASHboolean] = ACTIONS(113),
    [anon_sym_aput_DASHbyte] = ACTIONS(113),
    [anon_sym_aput_DASHchar] = ACTIONS(113),
    [anon_sym_aput_DASHshort] = ACTIONS(113),
    [anon_sym_iget] = ACTIONS(115),
    [anon_sym_iget_DASHwide] = ACTIONS(115),
    [anon_sym_iget_DASHobject] = ACTIONS(115),
    [anon_sym_iget_DASHboolean] = ACTIONS(113),
    [anon_sym_iget_DASHbyte] = ACTIONS(113),
    [anon_sym_iget_DASHchar] = ACTIONS(113),
    [anon_sym_iget_DASHshort] = ACTIONS(113),
    [anon_sym_iput] = ACTIONS(115),
    [anon_sym_iput_DASHwide] = ACTIONS(115),
    [anon_sym_iput_DASHobject] = ACTIONS(115),
    [anon_sym_iput_DASHboolean] = ACTIONS(113),
    [anon_sym_iput_DASHbyte] = ACTIONS(113),
    [anon_sym_iput_DASHchar] = ACTIONS(113),
    [anon_sym_iput_DASHshort] = ACTIONS(113),
    [anon_sym_sget] = ACTIONS(115),
    [anon_sym_sget_DASHwide] = ACTIONS(113),
    [anon_sym_sget_DASHobject] = ACTIONS(113),
    [anon_sym_sget_DASHboolean] = ACTIONS(113),
    [anon_sym_sget_DASHbyte] = ACTIONS(113),
    [anon_sym_sget_DASHchar] = ACTIONS(113),
    [anon_sym_sget_DASHshort] = ACTIONS(113),
    [anon_sym_sput] = ACTIONS(115),
    [anon_sym_sput_DASHwide] = ACTIONS(113),
    [anon_sym_sput_DASHobject] = ACTIONS(113),
    [anon_sym_sput_DASHboolean] = ACTIONS(113),
    [anon_sym_sput_DASHbyte] = ACTIONS(113),
    [anon_sym_sput_DASHchar] = ACTIONS(113),
    [anon_sym_sput_DASHshort] = ACTIONS(113),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(115),
    [anon_sym_invoke_DASHsuper] = ACTIONS(115),
    [anon_sym_invoke_DASHdirect] = ACTIONS(115),
    [anon_sym_invoke_DASHstatic] = ACTIONS(115),
    [anon_sym_invoke_DASHinterface] = ACTIONS(115),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(113),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(113),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(113),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(113),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(113),
    [anon_sym_neg_DASHint] = ACTIONS(113),
    [anon_sym_not_DASHint] = ACTIONS(113),
    [anon_sym_neg_DASHlong] = ACTIONS(113),
    [anon_sym_not_DASHlong] = ACTIONS(113),
    [anon_sym_neg_DASHfloat] = ACTIONS(113),
    [anon_sym_neg_DASHdouble] = ACTIONS(113),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(113),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(113),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(113),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(113),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(113),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(113),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(113),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(113),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(113),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(113),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(113),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(113),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(113),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(113),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(113),
    [anon_sym_add_DASHint] = ACTIONS(115),
    [anon_sym_sub_DASHint] = ACTIONS(115),
    [anon_sym_mul_DASHint] = ACTIONS(115),
    [anon_sym_div_DASHint] = ACTIONS(115),
    [anon_sym_rem_DASHint] = ACTIONS(115),
    [anon_sym_and_DASHint] = ACTIONS(115),
    [anon_sym_or_DASHint] = ACTIONS(115),
    [anon_sym_xor_DASHint] = ACTIONS(115),
    [anon_sym_shl_DASHint] = ACTIONS(115),
    [anon_sym_shr_DASHint] = ACTIONS(115),
    [anon_sym_ushr_DASHint] = ACTIONS(115),
    [anon_sym_add_DASHlong] = ACTIONS(115),
    [anon_sym_sub_DASHlong] = ACTIONS(115),
    [anon_sym_mul_DASHlong] = ACTIONS(115),
    [anon_sym_div_DASHlong] = ACTIONS(115),
    [anon_sym_rem_DASHlong] = ACTIONS(115),
    [anon_sym_and_DASHlong] = ACTIONS(115),
    [anon_sym_or_DASHlong] = ACTIONS(115),
    [anon_sym_xor_DASHlong] = ACTIONS(115),
    [anon_sym_shl_DASHlong] = ACTIONS(115),
    [anon_sym_shr_DASHlong] = ACTIONS(115),
    [anon_sym_ushr_DASHlong] = ACTIONS(115),
    [anon_sym_add_DASHfloat] = ACTIONS(115),
    [anon_sym_sub_DASHfloat] = ACTIONS(115),
    [anon_sym_mul_DASHfloat] = ACTIONS(115),
    [anon_sym_div_DASHfloat] = ACTIONS(115),
    [anon_sym_rem_DASHfloat] = ACTIONS(115),
    [anon_sym_add_DASHdouble] = ACTIONS(115),
    [anon_sym_sub_DASHdouble] = ACTIONS(115),
    [anon_sym_mul_DASHdouble] = ACTIONS(115),
    [anon_sym_div_DASHdouble] = ACTIONS(115),
    [anon_sym_rem_DASHdouble] = ACTIONS(115),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(113),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(113),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(113),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(113),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(113),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(113),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(113),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(113),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(113),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(113),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(113),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(113),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(113),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(113),
    [anon_sym_execute_DASHinline] = ACTIONS(113),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(113),
    [anon_sym_iget_DASHquick] = ACTIONS(113),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(113),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(113),
    [anon_sym_iput_DASHquick] = ACTIONS(113),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(113),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(113),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(115),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(113),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(115),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(113),
    [anon_sym_DOTline] = ACTIONS(113),
    [anon_sym_DOTlocals] = ACTIONS(113),
    [anon_sym_DOTparam] = ACTIONS(113),
    [anon_sym_DOTcatch] = ACTIONS(115),
    [anon_sym_DOTcatchall] = ACTIONS(113),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(113),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(113),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_end_method] = ACTIONS(117),
    [anon_sym_DOTannotation] = ACTIONS(117),
    [sym_label] = ACTIONS(117),
    [anon_sym_nop] = ACTIONS(117),
    [anon_sym_move] = ACTIONS(119),
    [anon_sym_move_SLASHfrom16] = ACTIONS(117),
    [anon_sym_move_SLASH16] = ACTIONS(117),
    [anon_sym_move_DASHwide] = ACTIONS(119),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(117),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(117),
    [anon_sym_move_DASHobject] = ACTIONS(119),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(117),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(117),
    [anon_sym_move_DASHresult] = ACTIONS(119),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(117),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(117),
    [anon_sym_move_DASHexception] = ACTIONS(117),
    [anon_sym_return_DASHvoid] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(119),
    [anon_sym_return_DASHwide] = ACTIONS(117),
    [anon_sym_return_DASHobject] = ACTIONS(117),
    [anon_sym_const_SLASH4] = ACTIONS(117),
    [anon_sym_const_SLASH16] = ACTIONS(117),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_const_SLASHhigh16] = ACTIONS(117),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(117),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(117),
    [anon_sym_const_DASHwide] = ACTIONS(119),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(117),
    [anon_sym_const_DASHstring] = ACTIONS(119),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(117),
    [anon_sym_const_DASHclass] = ACTIONS(117),
    [anon_sym_monitor_DASHenter] = ACTIONS(117),
    [anon_sym_monitor_DASHexit] = ACTIONS(117),
    [anon_sym_check_DASHcast] = ACTIONS(117),
    [anon_sym_instance_DASHof] = ACTIONS(117),
    [anon_sym_array_DASHlength] = ACTIONS(117),
    [anon_sym_new_DASHinstance] = ACTIONS(117),
    [anon_sym_new_DASHarray] = ACTIONS(117),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(119),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(117),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(117),
    [anon_sym_throw] = ACTIONS(117),
    [anon_sym_goto] = ACTIONS(119),
    [anon_sym_goto_SLASH16] = ACTIONS(117),
    [anon_sym_goto_SLASH32] = ACTIONS(117),
    [anon_sym_packed_DASHswitch] = ACTIONS(117),
    [anon_sym_sparse_DASHswitch] = ACTIONS(117),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(117),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(117),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(117),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(117),
    [anon_sym_cmp_DASHlong] = ACTIONS(117),
    [anon_sym_if_DASHeq] = ACTIONS(119),
    [anon_sym_if_DASHne] = ACTIONS(119),
    [anon_sym_if_DASHlt] = ACTIONS(119),
    [anon_sym_if_DASHge] = ACTIONS(119),
    [anon_sym_if_DASHgt] = ACTIONS(119),
    [anon_sym_if_DASHle] = ACTIONS(119),
    [anon_sym_if_DASHeqz] = ACTIONS(117),
    [anon_sym_if_DASHnez] = ACTIONS(117),
    [anon_sym_if_DASHltz] = ACTIONS(117),
    [anon_sym_if_DASHgez] = ACTIONS(117),
    [anon_sym_if_DASHgtz] = ACTIONS(117),
    [anon_sym_if_DASHlez] = ACTIONS(117),
    [anon_sym_aget] = ACTIONS(119),
    [anon_sym_aget_DASHwide] = ACTIONS(117),
    [anon_sym_aget_DASHobject] = ACTIONS(117),
    [anon_sym_aget_DASHboolean] = ACTIONS(117),
    [anon_sym_aget_DASHbyte] = ACTIONS(117),
    [anon_sym_aget_DASHchar] = ACTIONS(117),
    [anon_sym_aget_DASHshort] = ACTIONS(117),
    [anon_sym_aput] = ACTIONS(119),
    [anon_sym_aput_DASHwide] = ACTIONS(117),
    [anon_sym_aput_DASHobject] = ACTIONS(117),
    [anon_sym_aput_DASHboolean] = ACTIONS(117),
    [anon_sym_aput_DASHbyte] = ACTIONS(117),
    [anon_sym_aput_DASHchar] = ACTIONS(117),
    [anon_sym_aput_DASHshort] = ACTIONS(117),
    [anon_sym_iget] = ACTIONS(119),
    [anon_sym_iget_DASHwide] = ACTIONS(119),
    [anon_sym_iget_DASHobject] = ACTIONS(119),
    [anon_sym_iget_DASHboolean] = ACTIONS(117),
    [anon_sym_iget_DASHbyte] = ACTIONS(117),
    [anon_sym_iget_DASHchar] = ACTIONS(117),
    [anon_sym_iget_DASHshort] = ACTIONS(117),
    [anon_sym_iput] = ACTIONS(119),
    [anon_sym_iput_DASHwide] = ACTIONS(119),
    [anon_sym_iput_DASHobject] = ACTIONS(119),
    [anon_sym_iput_DASHboolean] = ACTIONS(117),
    [anon_sym_iput_DASHbyte] = ACTIONS(117),
    [anon_sym_iput_DASHchar] = ACTIONS(117),
    [anon_sym_iput_DASHshort] = ACTIONS(117),
    [anon_sym_sget] = ACTIONS(119),
    [anon_sym_sget_DASHwide] = ACTIONS(117),
    [anon_sym_sget_DASHobject] = ACTIONS(117),
    [anon_sym_sget_DASHboolean] = ACTIONS(117),
    [anon_sym_sget_DASHbyte] = ACTIONS(117),
    [anon_sym_sget_DASHchar] = ACTIONS(117),
    [anon_sym_sget_DASHshort] = ACTIONS(117),
    [anon_sym_sput] = ACTIONS(119),
    [anon_sym_sput_DASHwide] = ACTIONS(117),
    [anon_sym_sput_DASHobject] = ACTIONS(117),
    [anon_sym_sput_DASHboolean] = ACTIONS(117),
    [anon_sym_sput_DASHbyte] = ACTIONS(117),
    [anon_sym_sput_DASHchar] = ACTIONS(117),
    [anon_sym_sput_DASHshort] = ACTIONS(117),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(119),
    [anon_sym_invoke_DASHsuper] = ACTIONS(119),
    [anon_sym_invoke_DASHdirect] = ACTIONS(119),
    [anon_sym_invoke_DASHstatic] = ACTIONS(119),
    [anon_sym_invoke_DASHinterface] = ACTIONS(119),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(117),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(117),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(117),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(117),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(117),
    [anon_sym_neg_DASHint] = ACTIONS(117),
    [anon_sym_not_DASHint] = ACTIONS(117),
    [anon_sym_neg_DASHlong] = ACTIONS(117),
    [anon_sym_not_DASHlong] = ACTIONS(117),
    [anon_sym_neg_DASHfloat] = ACTIONS(117),
    [anon_sym_neg_DASHdouble] = ACTIONS(117),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(117),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(117),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(117),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(117),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(117),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(117),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(117),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(117),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(117),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(117),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(117),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(117),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(117),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(117),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(117),
    [anon_sym_add_DASHint] = ACTIONS(119),
    [anon_sym_sub_DASHint] = ACTIONS(119),
    [anon_sym_mul_DASHint] = ACTIONS(119),
    [anon_sym_div_DASHint] = ACTIONS(119),
    [anon_sym_rem_DASHint] = ACTIONS(119),
    [anon_sym_and_DASHint] = ACTIONS(119),
    [anon_sym_or_DASHint] = ACTIONS(119),
    [anon_sym_xor_DASHint] = ACTIONS(119),
    [anon_sym_shl_DASHint] = ACTIONS(119),
    [anon_sym_shr_DASHint] = ACTIONS(119),
    [anon_sym_ushr_DASHint] = ACTIONS(119),
    [anon_sym_add_DASHlong] = ACTIONS(119),
    [anon_sym_sub_DASHlong] = ACTIONS(119),
    [anon_sym_mul_DASHlong] = ACTIONS(119),
    [anon_sym_div_DASHlong] = ACTIONS(119),
    [anon_sym_rem_DASHlong] = ACTIONS(119),
    [anon_sym_and_DASHlong] = ACTIONS(119),
    [anon_sym_or_DASHlong] = ACTIONS(119),
    [anon_sym_xor_DASHlong] = ACTIONS(119),
    [anon_sym_shl_DASHlong] = ACTIONS(119),
    [anon_sym_shr_DASHlong] = ACTIONS(119),
    [anon_sym_ushr_DASHlong] = ACTIONS(119),
    [anon_sym_add_DASHfloat] = ACTIONS(119),
    [anon_sym_sub_DASHfloat] = ACTIONS(119),
    [anon_sym_mul_DASHfloat] = ACTIONS(119),
    [anon_sym_div_DASHfloat] = ACTIONS(119),
    [anon_sym_rem_DASHfloat] = ACTIONS(119),
    [anon_sym_add_DASHdouble] = ACTIONS(119),
    [anon_sym_sub_DASHdouble] = ACTIONS(119),
    [anon_sym_mul_DASHdouble] = ACTIONS(119),
    [anon_sym_div_DASHdouble] = ACTIONS(119),
    [anon_sym_rem_DASHdouble] = ACTIONS(119),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(117),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(117),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(117),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(117),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(117),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(117),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(117),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(117),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(117),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(117),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(117),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(117),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(117),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(117),
    [anon_sym_execute_DASHinline] = ACTIONS(117),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(117),
    [anon_sym_iget_DASHquick] = ACTIONS(117),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(117),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(117),
    [anon_sym_iput_DASHquick] = ACTIONS(117),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(117),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(117),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(119),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(117),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(119),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(117),
    [anon_sym_DOTline] = ACTIONS(117),
    [anon_sym_DOTlocals] = ACTIONS(117),
    [anon_sym_DOTparam] = ACTIONS(117),
    [anon_sym_DOTcatch] = ACTIONS(119),
    [anon_sym_DOTcatchall] = ACTIONS(117),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(117),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(117),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_end_method] = ACTIONS(121),
    [anon_sym_DOTannotation] = ACTIONS(121),
    [sym_label] = ACTIONS(121),
    [anon_sym_nop] = ACTIONS(121),
    [anon_sym_move] = ACTIONS(123),
    [anon_sym_move_SLASHfrom16] = ACTIONS(121),
    [anon_sym_move_SLASH16] = ACTIONS(121),
    [anon_sym_move_DASHwide] = ACTIONS(123),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(121),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(121),
    [anon_sym_move_DASHobject] = ACTIONS(123),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(121),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(121),
    [anon_sym_move_DASHresult] = ACTIONS(123),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(121),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(121),
    [anon_sym_move_DASHexception] = ACTIONS(121),
    [anon_sym_return_DASHvoid] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_return_DASHwide] = ACTIONS(121),
    [anon_sym_return_DASHobject] = ACTIONS(121),
    [anon_sym_const_SLASH4] = ACTIONS(121),
    [anon_sym_const_SLASH16] = ACTIONS(121),
    [anon_sym_const] = ACTIONS(123),
    [anon_sym_const_SLASHhigh16] = ACTIONS(121),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(121),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(121),
    [anon_sym_const_DASHwide] = ACTIONS(123),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(121),
    [anon_sym_const_DASHstring] = ACTIONS(123),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(121),
    [anon_sym_const_DASHclass] = ACTIONS(121),
    [anon_sym_monitor_DASHenter] = ACTIONS(121),
    [anon_sym_monitor_DASHexit] = ACTIONS(121),
    [anon_sym_check_DASHcast] = ACTIONS(121),
    [anon_sym_instance_DASHof] = ACTIONS(121),
    [anon_sym_array_DASHlength] = ACTIONS(121),
    [anon_sym_new_DASHinstance] = ACTIONS(121),
    [anon_sym_new_DASHarray] = ACTIONS(121),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(123),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(121),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(121),
    [anon_sym_throw] = ACTIONS(121),
    [anon_sym_goto] = ACTIONS(123),
    [anon_sym_goto_SLASH16] = ACTIONS(121),
    [anon_sym_goto_SLASH32] = ACTIONS(121),
    [anon_sym_packed_DASHswitch] = ACTIONS(121),
    [anon_sym_sparse_DASHswitch] = ACTIONS(121),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(121),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(121),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(121),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(121),
    [anon_sym_cmp_DASHlong] = ACTIONS(121),
    [anon_sym_if_DASHeq] = ACTIONS(123),
    [anon_sym_if_DASHne] = ACTIONS(123),
    [anon_sym_if_DASHlt] = ACTIONS(123),
    [anon_sym_if_DASHge] = ACTIONS(123),
    [anon_sym_if_DASHgt] = ACTIONS(123),
    [anon_sym_if_DASHle] = ACTIONS(123),
    [anon_sym_if_DASHeqz] = ACTIONS(121),
    [anon_sym_if_DASHnez] = ACTIONS(121),
    [anon_sym_if_DASHltz] = ACTIONS(121),
    [anon_sym_if_DASHgez] = ACTIONS(121),
    [anon_sym_if_DASHgtz] = ACTIONS(121),
    [anon_sym_if_DASHlez] = ACTIONS(121),
    [anon_sym_aget] = ACTIONS(123),
    [anon_sym_aget_DASHwide] = ACTIONS(121),
    [anon_sym_aget_DASHobject] = ACTIONS(121),
    [anon_sym_aget_DASHboolean] = ACTIONS(121),
    [anon_sym_aget_DASHbyte] = ACTIONS(121),
    [anon_sym_aget_DASHchar] = ACTIONS(121),
    [anon_sym_aget_DASHshort] = ACTIONS(121),
    [anon_sym_aput] = ACTIONS(123),
    [anon_sym_aput_DASHwide] = ACTIONS(121),
    [anon_sym_aput_DASHobject] = ACTIONS(121),
    [anon_sym_aput_DASHboolean] = ACTIONS(121),
    [anon_sym_aput_DASHbyte] = ACTIONS(121),
    [anon_sym_aput_DASHchar] = ACTIONS(121),
    [anon_sym_aput_DASHshort] = ACTIONS(121),
    [anon_sym_iget] = ACTIONS(123),
    [anon_sym_iget_DASHwide] = ACTIONS(123),
    [anon_sym_iget_DASHobject] = ACTIONS(123),
    [anon_sym_iget_DASHboolean] = ACTIONS(121),
    [anon_sym_iget_DASHbyte] = ACTIONS(121),
    [anon_sym_iget_DASHchar] = ACTIONS(121),
    [anon_sym_iget_DASHshort] = ACTIONS(121),
    [anon_sym_iput] = ACTIONS(123),
    [anon_sym_iput_DASHwide] = ACTIONS(123),
    [anon_sym_iput_DASHobject] = ACTIONS(123),
    [anon_sym_iput_DASHboolean] = ACTIONS(121),
    [anon_sym_iput_DASHbyte] = ACTIONS(121),
    [anon_sym_iput_DASHchar] = ACTIONS(121),
    [anon_sym_iput_DASHshort] = ACTIONS(121),
    [anon_sym_sget] = ACTIONS(123),
    [anon_sym_sget_DASHwide] = ACTIONS(121),
    [anon_sym_sget_DASHobject] = ACTIONS(121),
    [anon_sym_sget_DASHboolean] = ACTIONS(121),
    [anon_sym_sget_DASHbyte] = ACTIONS(121),
    [anon_sym_sget_DASHchar] = ACTIONS(121),
    [anon_sym_sget_DASHshort] = ACTIONS(121),
    [anon_sym_sput] = ACTIONS(123),
    [anon_sym_sput_DASHwide] = ACTIONS(121),
    [anon_sym_sput_DASHobject] = ACTIONS(121),
    [anon_sym_sput_DASHboolean] = ACTIONS(121),
    [anon_sym_sput_DASHbyte] = ACTIONS(121),
    [anon_sym_sput_DASHchar] = ACTIONS(121),
    [anon_sym_sput_DASHshort] = ACTIONS(121),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(123),
    [anon_sym_invoke_DASHsuper] = ACTIONS(123),
    [anon_sym_invoke_DASHdirect] = ACTIONS(123),
    [anon_sym_invoke_DASHstatic] = ACTIONS(123),
    [anon_sym_invoke_DASHinterface] = ACTIONS(123),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(121),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(121),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(121),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(121),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(121),
    [anon_sym_neg_DASHint] = ACTIONS(121),
    [anon_sym_not_DASHint] = ACTIONS(121),
    [anon_sym_neg_DASHlong] = ACTIONS(121),
    [anon_sym_not_DASHlong] = ACTIONS(121),
    [anon_sym_neg_DASHfloat] = ACTIONS(121),
    [anon_sym_neg_DASHdouble] = ACTIONS(121),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(121),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(121),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(121),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(121),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(121),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(121),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(121),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(121),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(121),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(121),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(121),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(121),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(121),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(121),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(121),
    [anon_sym_add_DASHint] = ACTIONS(123),
    [anon_sym_sub_DASHint] = ACTIONS(123),
    [anon_sym_mul_DASHint] = ACTIONS(123),
    [anon_sym_div_DASHint] = ACTIONS(123),
    [anon_sym_rem_DASHint] = ACTIONS(123),
    [anon_sym_and_DASHint] = ACTIONS(123),
    [anon_sym_or_DASHint] = ACTIONS(123),
    [anon_sym_xor_DASHint] = ACTIONS(123),
    [anon_sym_shl_DASHint] = ACTIONS(123),
    [anon_sym_shr_DASHint] = ACTIONS(123),
    [anon_sym_ushr_DASHint] = ACTIONS(123),
    [anon_sym_add_DASHlong] = ACTIONS(123),
    [anon_sym_sub_DASHlong] = ACTIONS(123),
    [anon_sym_mul_DASHlong] = ACTIONS(123),
    [anon_sym_div_DASHlong] = ACTIONS(123),
    [anon_sym_rem_DASHlong] = ACTIONS(123),
    [anon_sym_and_DASHlong] = ACTIONS(123),
    [anon_sym_or_DASHlong] = ACTIONS(123),
    [anon_sym_xor_DASHlong] = ACTIONS(123),
    [anon_sym_shl_DASHlong] = ACTIONS(123),
    [anon_sym_shr_DASHlong] = ACTIONS(123),
    [anon_sym_ushr_DASHlong] = ACTIONS(123),
    [anon_sym_add_DASHfloat] = ACTIONS(123),
    [anon_sym_sub_DASHfloat] = ACTIONS(123),
    [anon_sym_mul_DASHfloat] = ACTIONS(123),
    [anon_sym_div_DASHfloat] = ACTIONS(123),
    [anon_sym_rem_DASHfloat] = ACTIONS(123),
    [anon_sym_add_DASHdouble] = ACTIONS(123),
    [anon_sym_sub_DASHdouble] = ACTIONS(123),
    [anon_sym_mul_DASHdouble] = ACTIONS(123),
    [anon_sym_div_DASHdouble] = ACTIONS(123),
    [anon_sym_rem_DASHdouble] = ACTIONS(123),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(121),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(121),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(121),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(121),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(121),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(121),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(121),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(121),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(121),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(121),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(121),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(121),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(121),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(121),
    [anon_sym_execute_DASHinline] = ACTIONS(121),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(121),
    [anon_sym_iget_DASHquick] = ACTIONS(121),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(121),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(121),
    [anon_sym_iput_DASHquick] = ACTIONS(121),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(121),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(121),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(123),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(121),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(123),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(121),
    [anon_sym_DOTline] = ACTIONS(121),
    [anon_sym_DOTlocals] = ACTIONS(121),
    [anon_sym_DOTparam] = ACTIONS(121),
    [anon_sym_DOTcatch] = ACTIONS(123),
    [anon_sym_DOTcatchall] = ACTIONS(121),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(121),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(121),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_end_method] = ACTIONS(125),
    [anon_sym_DOTannotation] = ACTIONS(125),
    [sym_label] = ACTIONS(125),
    [anon_sym_nop] = ACTIONS(125),
    [anon_sym_move] = ACTIONS(127),
    [anon_sym_move_SLASHfrom16] = ACTIONS(125),
    [anon_sym_move_SLASH16] = ACTIONS(125),
    [anon_sym_move_DASHwide] = ACTIONS(127),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(125),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(125),
    [anon_sym_move_DASHobject] = ACTIONS(127),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(125),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(125),
    [anon_sym_move_DASHresult] = ACTIONS(127),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(125),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(125),
    [anon_sym_move_DASHexception] = ACTIONS(125),
    [anon_sym_return_DASHvoid] = ACTIONS(125),
    [anon_sym_return] = ACTIONS(127),
    [anon_sym_return_DASHwide] = ACTIONS(125),
    [anon_sym_return_DASHobject] = ACTIONS(125),
    [anon_sym_const_SLASH4] = ACTIONS(125),
    [anon_sym_const_SLASH16] = ACTIONS(125),
    [anon_sym_const] = ACTIONS(127),
    [anon_sym_const_SLASHhigh16] = ACTIONS(125),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(125),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(125),
    [anon_sym_const_DASHwide] = ACTIONS(127),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(125),
    [anon_sym_const_DASHstring] = ACTIONS(127),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(125),
    [anon_sym_const_DASHclass] = ACTIONS(125),
    [anon_sym_monitor_DASHenter] = ACTIONS(125),
    [anon_sym_monitor_DASHexit] = ACTIONS(125),
    [anon_sym_check_DASHcast] = ACTIONS(125),
    [anon_sym_instance_DASHof] = ACTIONS(125),
    [anon_sym_array_DASHlength] = ACTIONS(125),
    [anon_sym_new_DASHinstance] = ACTIONS(125),
    [anon_sym_new_DASHarray] = ACTIONS(125),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(127),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(125),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(125),
    [anon_sym_throw] = ACTIONS(125),
    [anon_sym_goto] = ACTIONS(127),
    [anon_sym_goto_SLASH16] = ACTIONS(125),
    [anon_sym_goto_SLASH32] = ACTIONS(125),
    [anon_sym_packed_DASHswitch] = ACTIONS(125),
    [anon_sym_sparse_DASHswitch] = ACTIONS(125),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(125),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(125),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(125),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(125),
    [anon_sym_cmp_DASHlong] = ACTIONS(125),
    [anon_sym_if_DASHeq] = ACTIONS(127),
    [anon_sym_if_DASHne] = ACTIONS(127),
    [anon_sym_if_DASHlt] = ACTIONS(127),
    [anon_sym_if_DASHge] = ACTIONS(127),
    [anon_sym_if_DASHgt] = ACTIONS(127),
    [anon_sym_if_DASHle] = ACTIONS(127),
    [anon_sym_if_DASHeqz] = ACTIONS(125),
    [anon_sym_if_DASHnez] = ACTIONS(125),
    [anon_sym_if_DASHltz] = ACTIONS(125),
    [anon_sym_if_DASHgez] = ACTIONS(125),
    [anon_sym_if_DASHgtz] = ACTIONS(125),
    [anon_sym_if_DASHlez] = ACTIONS(125),
    [anon_sym_aget] = ACTIONS(127),
    [anon_sym_aget_DASHwide] = ACTIONS(125),
    [anon_sym_aget_DASHobject] = ACTIONS(125),
    [anon_sym_aget_DASHboolean] = ACTIONS(125),
    [anon_sym_aget_DASHbyte] = ACTIONS(125),
    [anon_sym_aget_DASHchar] = ACTIONS(125),
    [anon_sym_aget_DASHshort] = ACTIONS(125),
    [anon_sym_aput] = ACTIONS(127),
    [anon_sym_aput_DASHwide] = ACTIONS(125),
    [anon_sym_aput_DASHobject] = ACTIONS(125),
    [anon_sym_aput_DASHboolean] = ACTIONS(125),
    [anon_sym_aput_DASHbyte] = ACTIONS(125),
    [anon_sym_aput_DASHchar] = ACTIONS(125),
    [anon_sym_aput_DASHshort] = ACTIONS(125),
    [anon_sym_iget] = ACTIONS(127),
    [anon_sym_iget_DASHwide] = ACTIONS(127),
    [anon_sym_iget_DASHobject] = ACTIONS(127),
    [anon_sym_iget_DASHboolean] = ACTIONS(125),
    [anon_sym_iget_DASHbyte] = ACTIONS(125),
    [anon_sym_iget_DASHchar] = ACTIONS(125),
    [anon_sym_iget_DASHshort] = ACTIONS(125),
    [anon_sym_iput] = ACTIONS(127),
    [anon_sym_iput_DASHwide] = ACTIONS(127),
    [anon_sym_iput_DASHobject] = ACTIONS(127),
    [anon_sym_iput_DASHboolean] = ACTIONS(125),
    [anon_sym_iput_DASHbyte] = ACTIONS(125),
    [anon_sym_iput_DASHchar] = ACTIONS(125),
    [anon_sym_iput_DASHshort] = ACTIONS(125),
    [anon_sym_sget] = ACTIONS(127),
    [anon_sym_sget_DASHwide] = ACTIONS(125),
    [anon_sym_sget_DASHobject] = ACTIONS(125),
    [anon_sym_sget_DASHboolean] = ACTIONS(125),
    [anon_sym_sget_DASHbyte] = ACTIONS(125),
    [anon_sym_sget_DASHchar] = ACTIONS(125),
    [anon_sym_sget_DASHshort] = ACTIONS(125),
    [anon_sym_sput] = ACTIONS(127),
    [anon_sym_sput_DASHwide] = ACTIONS(125),
    [anon_sym_sput_DASHobject] = ACTIONS(125),
    [anon_sym_sput_DASHboolean] = ACTIONS(125),
    [anon_sym_sput_DASHbyte] = ACTIONS(125),
    [anon_sym_sput_DASHchar] = ACTIONS(125),
    [anon_sym_sput_DASHshort] = ACTIONS(125),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(127),
    [anon_sym_invoke_DASHsuper] = ACTIONS(127),
    [anon_sym_invoke_DASHdirect] = ACTIONS(127),
    [anon_sym_invoke_DASHstatic] = ACTIONS(127),
    [anon_sym_invoke_DASHinterface] = ACTIONS(127),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(125),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(125),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(125),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(125),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(125),
    [anon_sym_neg_DASHint] = ACTIONS(125),
    [anon_sym_not_DASHint] = ACTIONS(125),
    [anon_sym_neg_DASHlong] = ACTIONS(125),
    [anon_sym_not_DASHlong] = ACTIONS(125),
    [anon_sym_neg_DASHfloat] = ACTIONS(125),
    [anon_sym_neg_DASHdouble] = ACTIONS(125),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(125),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(125),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(125),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(125),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(125),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(125),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(125),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(125),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(125),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(125),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(125),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(125),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(125),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(125),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(125),
    [anon_sym_add_DASHint] = ACTIONS(127),
    [anon_sym_sub_DASHint] = ACTIONS(127),
    [anon_sym_mul_DASHint] = ACTIONS(127),
    [anon_sym_div_DASHint] = ACTIONS(127),
    [anon_sym_rem_DASHint] = ACTIONS(127),
    [anon_sym_and_DASHint] = ACTIONS(127),
    [anon_sym_or_DASHint] = ACTIONS(127),
    [anon_sym_xor_DASHint] = ACTIONS(127),
    [anon_sym_shl_DASHint] = ACTIONS(127),
    [anon_sym_shr_DASHint] = ACTIONS(127),
    [anon_sym_ushr_DASHint] = ACTIONS(127),
    [anon_sym_add_DASHlong] = ACTIONS(127),
    [anon_sym_sub_DASHlong] = ACTIONS(127),
    [anon_sym_mul_DASHlong] = ACTIONS(127),
    [anon_sym_div_DASHlong] = ACTIONS(127),
    [anon_sym_rem_DASHlong] = ACTIONS(127),
    [anon_sym_and_DASHlong] = ACTIONS(127),
    [anon_sym_or_DASHlong] = ACTIONS(127),
    [anon_sym_xor_DASHlong] = ACTIONS(127),
    [anon_sym_shl_DASHlong] = ACTIONS(127),
    [anon_sym_shr_DASHlong] = ACTIONS(127),
    [anon_sym_ushr_DASHlong] = ACTIONS(127),
    [anon_sym_add_DASHfloat] = ACTIONS(127),
    [anon_sym_sub_DASHfloat] = ACTIONS(127),
    [anon_sym_mul_DASHfloat] = ACTIONS(127),
    [anon_sym_div_DASHfloat] = ACTIONS(127),
    [anon_sym_rem_DASHfloat] = ACTIONS(127),
    [anon_sym_add_DASHdouble] = ACTIONS(127),
    [anon_sym_sub_DASHdouble] = ACTIONS(127),
    [anon_sym_mul_DASHdouble] = ACTIONS(127),
    [anon_sym_div_DASHdouble] = ACTIONS(127),
    [anon_sym_rem_DASHdouble] = ACTIONS(127),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(125),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(125),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(125),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(125),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(125),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(125),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(125),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(125),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(125),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(125),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(125),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(125),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(125),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(125),
    [anon_sym_execute_DASHinline] = ACTIONS(125),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(125),
    [anon_sym_iget_DASHquick] = ACTIONS(125),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(125),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(125),
    [anon_sym_iput_DASHquick] = ACTIONS(125),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(125),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(125),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(127),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(125),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(127),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(125),
    [anon_sym_DOTline] = ACTIONS(125),
    [anon_sym_DOTlocals] = ACTIONS(125),
    [anon_sym_DOTparam] = ACTIONS(125),
    [anon_sym_DOTcatch] = ACTIONS(127),
    [anon_sym_DOTcatchall] = ACTIONS(125),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(125),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(125),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_end_method] = ACTIONS(129),
    [anon_sym_DOTannotation] = ACTIONS(129),
    [sym_label] = ACTIONS(129),
    [anon_sym_nop] = ACTIONS(129),
    [anon_sym_move] = ACTIONS(131),
    [anon_sym_move_SLASHfrom16] = ACTIONS(129),
    [anon_sym_move_SLASH16] = ACTIONS(129),
    [anon_sym_move_DASHwide] = ACTIONS(131),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(129),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(129),
    [anon_sym_move_DASHobject] = ACTIONS(131),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(129),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(129),
    [anon_sym_move_DASHresult] = ACTIONS(131),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(129),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(129),
    [anon_sym_move_DASHexception] = ACTIONS(129),
    [anon_sym_return_DASHvoid] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_return_DASHwide] = ACTIONS(129),
    [anon_sym_return_DASHobject] = ACTIONS(129),
    [anon_sym_const_SLASH4] = ACTIONS(129),
    [anon_sym_const_SLASH16] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(131),
    [anon_sym_const_SLASHhigh16] = ACTIONS(129),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(129),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(129),
    [anon_sym_const_DASHwide] = ACTIONS(131),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(129),
    [anon_sym_const_DASHstring] = ACTIONS(131),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(129),
    [anon_sym_const_DASHclass] = ACTIONS(129),
    [anon_sym_monitor_DASHenter] = ACTIONS(129),
    [anon_sym_monitor_DASHexit] = ACTIONS(129),
    [anon_sym_check_DASHcast] = ACTIONS(129),
    [anon_sym_instance_DASHof] = ACTIONS(129),
    [anon_sym_array_DASHlength] = ACTIONS(129),
    [anon_sym_new_DASHinstance] = ACTIONS(129),
    [anon_sym_new_DASHarray] = ACTIONS(129),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(131),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(129),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(129),
    [anon_sym_throw] = ACTIONS(129),
    [anon_sym_goto] = ACTIONS(131),
    [anon_sym_goto_SLASH16] = ACTIONS(129),
    [anon_sym_goto_SLASH32] = ACTIONS(129),
    [anon_sym_packed_DASHswitch] = ACTIONS(129),
    [anon_sym_sparse_DASHswitch] = ACTIONS(129),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(129),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(129),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(129),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(129),
    [anon_sym_cmp_DASHlong] = ACTIONS(129),
    [anon_sym_if_DASHeq] = ACTIONS(131),
    [anon_sym_if_DASHne] = ACTIONS(131),
    [anon_sym_if_DASHlt] = ACTIONS(131),
    [anon_sym_if_DASHge] = ACTIONS(131),
    [anon_sym_if_DASHgt] = ACTIONS(131),
    [anon_sym_if_DASHle] = ACTIONS(131),
    [anon_sym_if_DASHeqz] = ACTIONS(129),
    [anon_sym_if_DASHnez] = ACTIONS(129),
    [anon_sym_if_DASHltz] = ACTIONS(129),
    [anon_sym_if_DASHgez] = ACTIONS(129),
    [anon_sym_if_DASHgtz] = ACTIONS(129),
    [anon_sym_if_DASHlez] = ACTIONS(129),
    [anon_sym_aget] = ACTIONS(131),
    [anon_sym_aget_DASHwide] = ACTIONS(129),
    [anon_sym_aget_DASHobject] = ACTIONS(129),
    [anon_sym_aget_DASHboolean] = ACTIONS(129),
    [anon_sym_aget_DASHbyte] = ACTIONS(129),
    [anon_sym_aget_DASHchar] = ACTIONS(129),
    [anon_sym_aget_DASHshort] = ACTIONS(129),
    [anon_sym_aput] = ACTIONS(131),
    [anon_sym_aput_DASHwide] = ACTIONS(129),
    [anon_sym_aput_DASHobject] = ACTIONS(129),
    [anon_sym_aput_DASHboolean] = ACTIONS(129),
    [anon_sym_aput_DASHbyte] = ACTIONS(129),
    [anon_sym_aput_DASHchar] = ACTIONS(129),
    [anon_sym_aput_DASHshort] = ACTIONS(129),
    [anon_sym_iget] = ACTIONS(131),
    [anon_sym_iget_DASHwide] = ACTIONS(131),
    [anon_sym_iget_DASHobject] = ACTIONS(131),
    [anon_sym_iget_DASHboolean] = ACTIONS(129),
    [anon_sym_iget_DASHbyte] = ACTIONS(129),
    [anon_sym_iget_DASHchar] = ACTIONS(129),
    [anon_sym_iget_DASHshort] = ACTIONS(129),
    [anon_sym_iput] = ACTIONS(131),
    [anon_sym_iput_DASHwide] = ACTIONS(131),
    [anon_sym_iput_DASHobject] = ACTIONS(131),
    [anon_sym_iput_DASHboolean] = ACTIONS(129),
    [anon_sym_iput_DASHbyte] = ACTIONS(129),
    [anon_sym_iput_DASHchar] = ACTIONS(129),
    [anon_sym_iput_DASHshort] = ACTIONS(129),
    [anon_sym_sget] = ACTIONS(131),
    [anon_sym_sget_DASHwide] = ACTIONS(129),
    [anon_sym_sget_DASHobject] = ACTIONS(129),
    [anon_sym_sget_DASHboolean] = ACTIONS(129),
    [anon_sym_sget_DASHbyte] = ACTIONS(129),
    [anon_sym_sget_DASHchar] = ACTIONS(129),
    [anon_sym_sget_DASHshort] = ACTIONS(129),
    [anon_sym_sput] = ACTIONS(131),
    [anon_sym_sput_DASHwide] = ACTIONS(129),
    [anon_sym_sput_DASHobject] = ACTIONS(129),
    [anon_sym_sput_DASHboolean] = ACTIONS(129),
    [anon_sym_sput_DASHbyte] = ACTIONS(129),
    [anon_sym_sput_DASHchar] = ACTIONS(129),
    [anon_sym_sput_DASHshort] = ACTIONS(129),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(131),
    [anon_sym_invoke_DASHsuper] = ACTIONS(131),
    [anon_sym_invoke_DASHdirect] = ACTIONS(131),
    [anon_sym_invoke_DASHstatic] = ACTIONS(131),
    [anon_sym_invoke_DASHinterface] = ACTIONS(131),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(129),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(129),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(129),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(129),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(129),
    [anon_sym_neg_DASHint] = ACTIONS(129),
    [anon_sym_not_DASHint] = ACTIONS(129),
    [anon_sym_neg_DASHlong] = ACTIONS(129),
    [anon_sym_not_DASHlong] = ACTIONS(129),
    [anon_sym_neg_DASHfloat] = ACTIONS(129),
    [anon_sym_neg_DASHdouble] = ACTIONS(129),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(129),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(129),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(129),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(129),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(129),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(129),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(129),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(129),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(129),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(129),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(129),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(129),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(129),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(129),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(129),
    [anon_sym_add_DASHint] = ACTIONS(131),
    [anon_sym_sub_DASHint] = ACTIONS(131),
    [anon_sym_mul_DASHint] = ACTIONS(131),
    [anon_sym_div_DASHint] = ACTIONS(131),
    [anon_sym_rem_DASHint] = ACTIONS(131),
    [anon_sym_and_DASHint] = ACTIONS(131),
    [anon_sym_or_DASHint] = ACTIONS(131),
    [anon_sym_xor_DASHint] = ACTIONS(131),
    [anon_sym_shl_DASHint] = ACTIONS(131),
    [anon_sym_shr_DASHint] = ACTIONS(131),
    [anon_sym_ushr_DASHint] = ACTIONS(131),
    [anon_sym_add_DASHlong] = ACTIONS(131),
    [anon_sym_sub_DASHlong] = ACTIONS(131),
    [anon_sym_mul_DASHlong] = ACTIONS(131),
    [anon_sym_div_DASHlong] = ACTIONS(131),
    [anon_sym_rem_DASHlong] = ACTIONS(131),
    [anon_sym_and_DASHlong] = ACTIONS(131),
    [anon_sym_or_DASHlong] = ACTIONS(131),
    [anon_sym_xor_DASHlong] = ACTIONS(131),
    [anon_sym_shl_DASHlong] = ACTIONS(131),
    [anon_sym_shr_DASHlong] = ACTIONS(131),
    [anon_sym_ushr_DASHlong] = ACTIONS(131),
    [anon_sym_add_DASHfloat] = ACTIONS(131),
    [anon_sym_sub_DASHfloat] = ACTIONS(131),
    [anon_sym_mul_DASHfloat] = ACTIONS(131),
    [anon_sym_div_DASHfloat] = ACTIONS(131),
    [anon_sym_rem_DASHfloat] = ACTIONS(131),
    [anon_sym_add_DASHdouble] = ACTIONS(131),
    [anon_sym_sub_DASHdouble] = ACTIONS(131),
    [anon_sym_mul_DASHdouble] = ACTIONS(131),
    [anon_sym_div_DASHdouble] = ACTIONS(131),
    [anon_sym_rem_DASHdouble] = ACTIONS(131),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(129),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(129),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(129),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(129),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(129),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(129),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(129),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(129),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(129),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(129),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(129),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(129),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(129),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(129),
    [anon_sym_execute_DASHinline] = ACTIONS(129),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(129),
    [anon_sym_iget_DASHquick] = ACTIONS(129),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(129),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(129),
    [anon_sym_iput_DASHquick] = ACTIONS(129),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(129),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(129),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(131),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(129),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(131),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(129),
    [anon_sym_DOTline] = ACTIONS(129),
    [anon_sym_DOTlocals] = ACTIONS(129),
    [anon_sym_DOTparam] = ACTIONS(129),
    [anon_sym_DOTcatch] = ACTIONS(131),
    [anon_sym_DOTcatchall] = ACTIONS(129),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(129),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(129),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_end_method] = ACTIONS(133),
    [anon_sym_DOTannotation] = ACTIONS(133),
    [sym_label] = ACTIONS(133),
    [anon_sym_nop] = ACTIONS(133),
    [anon_sym_move] = ACTIONS(135),
    [anon_sym_move_SLASHfrom16] = ACTIONS(133),
    [anon_sym_move_SLASH16] = ACTIONS(133),
    [anon_sym_move_DASHwide] = ACTIONS(135),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(133),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(133),
    [anon_sym_move_DASHobject] = ACTIONS(135),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(133),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(133),
    [anon_sym_move_DASHresult] = ACTIONS(135),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(133),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(133),
    [anon_sym_move_DASHexception] = ACTIONS(133),
    [anon_sym_return_DASHvoid] = ACTIONS(133),
    [anon_sym_return] = ACTIONS(135),
    [anon_sym_return_DASHwide] = ACTIONS(133),
    [anon_sym_return_DASHobject] = ACTIONS(133),
    [anon_sym_const_SLASH4] = ACTIONS(133),
    [anon_sym_const_SLASH16] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_const_SLASHhigh16] = ACTIONS(133),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(133),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(133),
    [anon_sym_const_DASHwide] = ACTIONS(135),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(133),
    [anon_sym_const_DASHstring] = ACTIONS(135),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(133),
    [anon_sym_const_DASHclass] = ACTIONS(133),
    [anon_sym_monitor_DASHenter] = ACTIONS(133),
    [anon_sym_monitor_DASHexit] = ACTIONS(133),
    [anon_sym_check_DASHcast] = ACTIONS(133),
    [anon_sym_instance_DASHof] = ACTIONS(133),
    [anon_sym_array_DASHlength] = ACTIONS(133),
    [anon_sym_new_DASHinstance] = ACTIONS(133),
    [anon_sym_new_DASHarray] = ACTIONS(133),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(135),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(133),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(133),
    [anon_sym_throw] = ACTIONS(133),
    [anon_sym_goto] = ACTIONS(135),
    [anon_sym_goto_SLASH16] = ACTIONS(133),
    [anon_sym_goto_SLASH32] = ACTIONS(133),
    [anon_sym_packed_DASHswitch] = ACTIONS(133),
    [anon_sym_sparse_DASHswitch] = ACTIONS(133),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(133),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(133),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(133),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(133),
    [anon_sym_cmp_DASHlong] = ACTIONS(133),
    [anon_sym_if_DASHeq] = ACTIONS(135),
    [anon_sym_if_DASHne] = ACTIONS(135),
    [anon_sym_if_DASHlt] = ACTIONS(135),
    [anon_sym_if_DASHge] = ACTIONS(135),
    [anon_sym_if_DASHgt] = ACTIONS(135),
    [anon_sym_if_DASHle] = ACTIONS(135),
    [anon_sym_if_DASHeqz] = ACTIONS(133),
    [anon_sym_if_DASHnez] = ACTIONS(133),
    [anon_sym_if_DASHltz] = ACTIONS(133),
    [anon_sym_if_DASHgez] = ACTIONS(133),
    [anon_sym_if_DASHgtz] = ACTIONS(133),
    [anon_sym_if_DASHlez] = ACTIONS(133),
    [anon_sym_aget] = ACTIONS(135),
    [anon_sym_aget_DASHwide] = ACTIONS(133),
    [anon_sym_aget_DASHobject] = ACTIONS(133),
    [anon_sym_aget_DASHboolean] = ACTIONS(133),
    [anon_sym_aget_DASHbyte] = ACTIONS(133),
    [anon_sym_aget_DASHchar] = ACTIONS(133),
    [anon_sym_aget_DASHshort] = ACTIONS(133),
    [anon_sym_aput] = ACTIONS(135),
    [anon_sym_aput_DASHwide] = ACTIONS(133),
    [anon_sym_aput_DASHobject] = ACTIONS(133),
    [anon_sym_aput_DASHboolean] = ACTIONS(133),
    [anon_sym_aput_DASHbyte] = ACTIONS(133),
    [anon_sym_aput_DASHchar] = ACTIONS(133),
    [anon_sym_aput_DASHshort] = ACTIONS(133),
    [anon_sym_iget] = ACTIONS(135),
    [anon_sym_iget_DASHwide] = ACTIONS(135),
    [anon_sym_iget_DASHobject] = ACTIONS(135),
    [anon_sym_iget_DASHboolean] = ACTIONS(133),
    [anon_sym_iget_DASHbyte] = ACTIONS(133),
    [anon_sym_iget_DASHchar] = ACTIONS(133),
    [anon_sym_iget_DASHshort] = ACTIONS(133),
    [anon_sym_iput] = ACTIONS(135),
    [anon_sym_iput_DASHwide] = ACTIONS(135),
    [anon_sym_iput_DASHobject] = ACTIONS(135),
    [anon_sym_iput_DASHboolean] = ACTIONS(133),
    [anon_sym_iput_DASHbyte] = ACTIONS(133),
    [anon_sym_iput_DASHchar] = ACTIONS(133),
    [anon_sym_iput_DASHshort] = ACTIONS(133),
    [anon_sym_sget] = ACTIONS(135),
    [anon_sym_sget_DASHwide] = ACTIONS(133),
    [anon_sym_sget_DASHobject] = ACTIONS(133),
    [anon_sym_sget_DASHboolean] = ACTIONS(133),
    [anon_sym_sget_DASHbyte] = ACTIONS(133),
    [anon_sym_sget_DASHchar] = ACTIONS(133),
    [anon_sym_sget_DASHshort] = ACTIONS(133),
    [anon_sym_sput] = ACTIONS(135),
    [anon_sym_sput_DASHwide] = ACTIONS(133),
    [anon_sym_sput_DASHobject] = ACTIONS(133),
    [anon_sym_sput_DASHboolean] = ACTIONS(133),
    [anon_sym_sput_DASHbyte] = ACTIONS(133),
    [anon_sym_sput_DASHchar] = ACTIONS(133),
    [anon_sym_sput_DASHshort] = ACTIONS(133),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(135),
    [anon_sym_invoke_DASHsuper] = ACTIONS(135),
    [anon_sym_invoke_DASHdirect] = ACTIONS(135),
    [anon_sym_invoke_DASHstatic] = ACTIONS(135),
    [anon_sym_invoke_DASHinterface] = ACTIONS(135),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(133),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(133),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(133),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(133),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(133),
    [anon_sym_neg_DASHint] = ACTIONS(133),
    [anon_sym_not_DASHint] = ACTIONS(133),
    [anon_sym_neg_DASHlong] = ACTIONS(133),
    [anon_sym_not_DASHlong] = ACTIONS(133),
    [anon_sym_neg_DASHfloat] = ACTIONS(133),
    [anon_sym_neg_DASHdouble] = ACTIONS(133),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(133),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(133),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(133),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(133),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(133),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(133),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(133),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(133),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(133),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(133),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(133),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(133),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(133),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(133),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(133),
    [anon_sym_add_DASHint] = ACTIONS(135),
    [anon_sym_sub_DASHint] = ACTIONS(135),
    [anon_sym_mul_DASHint] = ACTIONS(135),
    [anon_sym_div_DASHint] = ACTIONS(135),
    [anon_sym_rem_DASHint] = ACTIONS(135),
    [anon_sym_and_DASHint] = ACTIONS(135),
    [anon_sym_or_DASHint] = ACTIONS(135),
    [anon_sym_xor_DASHint] = ACTIONS(135),
    [anon_sym_shl_DASHint] = ACTIONS(135),
    [anon_sym_shr_DASHint] = ACTIONS(135),
    [anon_sym_ushr_DASHint] = ACTIONS(135),
    [anon_sym_add_DASHlong] = ACTIONS(135),
    [anon_sym_sub_DASHlong] = ACTIONS(135),
    [anon_sym_mul_DASHlong] = ACTIONS(135),
    [anon_sym_div_DASHlong] = ACTIONS(135),
    [anon_sym_rem_DASHlong] = ACTIONS(135),
    [anon_sym_and_DASHlong] = ACTIONS(135),
    [anon_sym_or_DASHlong] = ACTIONS(135),
    [anon_sym_xor_DASHlong] = ACTIONS(135),
    [anon_sym_shl_DASHlong] = ACTIONS(135),
    [anon_sym_shr_DASHlong] = ACTIONS(135),
    [anon_sym_ushr_DASHlong] = ACTIONS(135),
    [anon_sym_add_DASHfloat] = ACTIONS(135),
    [anon_sym_sub_DASHfloat] = ACTIONS(135),
    [anon_sym_mul_DASHfloat] = ACTIONS(135),
    [anon_sym_div_DASHfloat] = ACTIONS(135),
    [anon_sym_rem_DASHfloat] = ACTIONS(135),
    [anon_sym_add_DASHdouble] = ACTIONS(135),
    [anon_sym_sub_DASHdouble] = ACTIONS(135),
    [anon_sym_mul_DASHdouble] = ACTIONS(135),
    [anon_sym_div_DASHdouble] = ACTIONS(135),
    [anon_sym_rem_DASHdouble] = ACTIONS(135),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(133),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(133),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(133),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(133),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(133),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(133),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(133),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(133),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(133),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(133),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(133),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(133),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(133),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(133),
    [anon_sym_execute_DASHinline] = ACTIONS(133),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(133),
    [anon_sym_iget_DASHquick] = ACTIONS(133),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(133),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(133),
    [anon_sym_iput_DASHquick] = ACTIONS(133),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(133),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(133),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(135),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(133),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(135),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(133),
    [anon_sym_DOTline] = ACTIONS(133),
    [anon_sym_DOTlocals] = ACTIONS(133),
    [anon_sym_DOTparam] = ACTIONS(133),
    [anon_sym_DOTcatch] = ACTIONS(135),
    [anon_sym_DOTcatchall] = ACTIONS(133),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(133),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(133),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_end_method] = ACTIONS(137),
    [anon_sym_DOTannotation] = ACTIONS(137),
    [sym_label] = ACTIONS(137),
    [anon_sym_nop] = ACTIONS(137),
    [anon_sym_move] = ACTIONS(139),
    [anon_sym_move_SLASHfrom16] = ACTIONS(137),
    [anon_sym_move_SLASH16] = ACTIONS(137),
    [anon_sym_move_DASHwide] = ACTIONS(139),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(137),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(137),
    [anon_sym_move_DASHobject] = ACTIONS(139),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(137),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(137),
    [anon_sym_move_DASHresult] = ACTIONS(139),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(137),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(137),
    [anon_sym_move_DASHexception] = ACTIONS(137),
    [anon_sym_return_DASHvoid] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_return_DASHwide] = ACTIONS(137),
    [anon_sym_return_DASHobject] = ACTIONS(137),
    [anon_sym_const_SLASH4] = ACTIONS(137),
    [anon_sym_const_SLASH16] = ACTIONS(137),
    [anon_sym_const] = ACTIONS(139),
    [anon_sym_const_SLASHhigh16] = ACTIONS(137),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(137),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(137),
    [anon_sym_const_DASHwide] = ACTIONS(139),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(137),
    [anon_sym_const_DASHstring] = ACTIONS(139),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(137),
    [anon_sym_const_DASHclass] = ACTIONS(137),
    [anon_sym_monitor_DASHenter] = ACTIONS(137),
    [anon_sym_monitor_DASHexit] = ACTIONS(137),
    [anon_sym_check_DASHcast] = ACTIONS(137),
    [anon_sym_instance_DASHof] = ACTIONS(137),
    [anon_sym_array_DASHlength] = ACTIONS(137),
    [anon_sym_new_DASHinstance] = ACTIONS(137),
    [anon_sym_new_DASHarray] = ACTIONS(137),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(139),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(137),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(137),
    [anon_sym_throw] = ACTIONS(137),
    [anon_sym_goto] = ACTIONS(139),
    [anon_sym_goto_SLASH16] = ACTIONS(137),
    [anon_sym_goto_SLASH32] = ACTIONS(137),
    [anon_sym_packed_DASHswitch] = ACTIONS(137),
    [anon_sym_sparse_DASHswitch] = ACTIONS(137),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(137),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(137),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(137),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(137),
    [anon_sym_cmp_DASHlong] = ACTIONS(137),
    [anon_sym_if_DASHeq] = ACTIONS(139),
    [anon_sym_if_DASHne] = ACTIONS(139),
    [anon_sym_if_DASHlt] = ACTIONS(139),
    [anon_sym_if_DASHge] = ACTIONS(139),
    [anon_sym_if_DASHgt] = ACTIONS(139),
    [anon_sym_if_DASHle] = ACTIONS(139),
    [anon_sym_if_DASHeqz] = ACTIONS(137),
    [anon_sym_if_DASHnez] = ACTIONS(137),
    [anon_sym_if_DASHltz] = ACTIONS(137),
    [anon_sym_if_DASHgez] = ACTIONS(137),
    [anon_sym_if_DASHgtz] = ACTIONS(137),
    [anon_sym_if_DASHlez] = ACTIONS(137),
    [anon_sym_aget] = ACTIONS(139),
    [anon_sym_aget_DASHwide] = ACTIONS(137),
    [anon_sym_aget_DASHobject] = ACTIONS(137),
    [anon_sym_aget_DASHboolean] = ACTIONS(137),
    [anon_sym_aget_DASHbyte] = ACTIONS(137),
    [anon_sym_aget_DASHchar] = ACTIONS(137),
    [anon_sym_aget_DASHshort] = ACTIONS(137),
    [anon_sym_aput] = ACTIONS(139),
    [anon_sym_aput_DASHwide] = ACTIONS(137),
    [anon_sym_aput_DASHobject] = ACTIONS(137),
    [anon_sym_aput_DASHboolean] = ACTIONS(137),
    [anon_sym_aput_DASHbyte] = ACTIONS(137),
    [anon_sym_aput_DASHchar] = ACTIONS(137),
    [anon_sym_aput_DASHshort] = ACTIONS(137),
    [anon_sym_iget] = ACTIONS(139),
    [anon_sym_iget_DASHwide] = ACTIONS(139),
    [anon_sym_iget_DASHobject] = ACTIONS(139),
    [anon_sym_iget_DASHboolean] = ACTIONS(137),
    [anon_sym_iget_DASHbyte] = ACTIONS(137),
    [anon_sym_iget_DASHchar] = ACTIONS(137),
    [anon_sym_iget_DASHshort] = ACTIONS(137),
    [anon_sym_iput] = ACTIONS(139),
    [anon_sym_iput_DASHwide] = ACTIONS(139),
    [anon_sym_iput_DASHobject] = ACTIONS(139),
    [anon_sym_iput_DASHboolean] = ACTIONS(137),
    [anon_sym_iput_DASHbyte] = ACTIONS(137),
    [anon_sym_iput_DASHchar] = ACTIONS(137),
    [anon_sym_iput_DASHshort] = ACTIONS(137),
    [anon_sym_sget] = ACTIONS(139),
    [anon_sym_sget_DASHwide] = ACTIONS(137),
    [anon_sym_sget_DASHobject] = ACTIONS(137),
    [anon_sym_sget_DASHboolean] = ACTIONS(137),
    [anon_sym_sget_DASHbyte] = ACTIONS(137),
    [anon_sym_sget_DASHchar] = ACTIONS(137),
    [anon_sym_sget_DASHshort] = ACTIONS(137),
    [anon_sym_sput] = ACTIONS(139),
    [anon_sym_sput_DASHwide] = ACTIONS(137),
    [anon_sym_sput_DASHobject] = ACTIONS(137),
    [anon_sym_sput_DASHboolean] = ACTIONS(137),
    [anon_sym_sput_DASHbyte] = ACTIONS(137),
    [anon_sym_sput_DASHchar] = ACTIONS(137),
    [anon_sym_sput_DASHshort] = ACTIONS(137),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(139),
    [anon_sym_invoke_DASHsuper] = ACTIONS(139),
    [anon_sym_invoke_DASHdirect] = ACTIONS(139),
    [anon_sym_invoke_DASHstatic] = ACTIONS(139),
    [anon_sym_invoke_DASHinterface] = ACTIONS(139),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(137),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(137),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(137),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(137),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(137),
    [anon_sym_neg_DASHint] = ACTIONS(137),
    [anon_sym_not_DASHint] = ACTIONS(137),
    [anon_sym_neg_DASHlong] = ACTIONS(137),
    [anon_sym_not_DASHlong] = ACTIONS(137),
    [anon_sym_neg_DASHfloat] = ACTIONS(137),
    [anon_sym_neg_DASHdouble] = ACTIONS(137),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(137),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(137),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(137),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(137),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(137),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(137),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(137),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(137),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(137),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(137),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(137),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(137),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(137),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(137),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(137),
    [anon_sym_add_DASHint] = ACTIONS(139),
    [anon_sym_sub_DASHint] = ACTIONS(139),
    [anon_sym_mul_DASHint] = ACTIONS(139),
    [anon_sym_div_DASHint] = ACTIONS(139),
    [anon_sym_rem_DASHint] = ACTIONS(139),
    [anon_sym_and_DASHint] = ACTIONS(139),
    [anon_sym_or_DASHint] = ACTIONS(139),
    [anon_sym_xor_DASHint] = ACTIONS(139),
    [anon_sym_shl_DASHint] = ACTIONS(139),
    [anon_sym_shr_DASHint] = ACTIONS(139),
    [anon_sym_ushr_DASHint] = ACTIONS(139),
    [anon_sym_add_DASHlong] = ACTIONS(139),
    [anon_sym_sub_DASHlong] = ACTIONS(139),
    [anon_sym_mul_DASHlong] = ACTIONS(139),
    [anon_sym_div_DASHlong] = ACTIONS(139),
    [anon_sym_rem_DASHlong] = ACTIONS(139),
    [anon_sym_and_DASHlong] = ACTIONS(139),
    [anon_sym_or_DASHlong] = ACTIONS(139),
    [anon_sym_xor_DASHlong] = ACTIONS(139),
    [anon_sym_shl_DASHlong] = ACTIONS(139),
    [anon_sym_shr_DASHlong] = ACTIONS(139),
    [anon_sym_ushr_DASHlong] = ACTIONS(139),
    [anon_sym_add_DASHfloat] = ACTIONS(139),
    [anon_sym_sub_DASHfloat] = ACTIONS(139),
    [anon_sym_mul_DASHfloat] = ACTIONS(139),
    [anon_sym_div_DASHfloat] = ACTIONS(139),
    [anon_sym_rem_DASHfloat] = ACTIONS(139),
    [anon_sym_add_DASHdouble] = ACTIONS(139),
    [anon_sym_sub_DASHdouble] = ACTIONS(139),
    [anon_sym_mul_DASHdouble] = ACTIONS(139),
    [anon_sym_div_DASHdouble] = ACTIONS(139),
    [anon_sym_rem_DASHdouble] = ACTIONS(139),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(137),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(137),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(137),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(137),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(137),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(137),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(137),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(137),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(137),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(137),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(137),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(137),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(137),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(137),
    [anon_sym_execute_DASHinline] = ACTIONS(137),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(137),
    [anon_sym_iget_DASHquick] = ACTIONS(137),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(137),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(137),
    [anon_sym_iput_DASHquick] = ACTIONS(137),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(137),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(137),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(139),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(137),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(139),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(137),
    [anon_sym_DOTline] = ACTIONS(137),
    [anon_sym_DOTlocals] = ACTIONS(137),
    [anon_sym_DOTparam] = ACTIONS(137),
    [anon_sym_DOTcatch] = ACTIONS(139),
    [anon_sym_DOTcatchall] = ACTIONS(137),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(137),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(137),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_end_method] = ACTIONS(141),
    [anon_sym_DOTannotation] = ACTIONS(141),
    [sym_label] = ACTIONS(141),
    [anon_sym_nop] = ACTIONS(141),
    [anon_sym_move] = ACTIONS(143),
    [anon_sym_move_SLASHfrom16] = ACTIONS(141),
    [anon_sym_move_SLASH16] = ACTIONS(141),
    [anon_sym_move_DASHwide] = ACTIONS(143),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(141),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(141),
    [anon_sym_move_DASHobject] = ACTIONS(143),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(141),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(141),
    [anon_sym_move_DASHresult] = ACTIONS(143),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(141),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(141),
    [anon_sym_move_DASHexception] = ACTIONS(141),
    [anon_sym_return_DASHvoid] = ACTIONS(141),
    [anon_sym_return] = ACTIONS(143),
    [anon_sym_return_DASHwide] = ACTIONS(141),
    [anon_sym_return_DASHobject] = ACTIONS(141),
    [anon_sym_const_SLASH4] = ACTIONS(141),
    [anon_sym_const_SLASH16] = ACTIONS(141),
    [anon_sym_const] = ACTIONS(143),
    [anon_sym_const_SLASHhigh16] = ACTIONS(141),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(141),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(141),
    [anon_sym_const_DASHwide] = ACTIONS(143),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(141),
    [anon_sym_const_DASHstring] = ACTIONS(143),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(141),
    [anon_sym_const_DASHclass] = ACTIONS(141),
    [anon_sym_monitor_DASHenter] = ACTIONS(141),
    [anon_sym_monitor_DASHexit] = ACTIONS(141),
    [anon_sym_check_DASHcast] = ACTIONS(141),
    [anon_sym_instance_DASHof] = ACTIONS(141),
    [anon_sym_array_DASHlength] = ACTIONS(141),
    [anon_sym_new_DASHinstance] = ACTIONS(141),
    [anon_sym_new_DASHarray] = ACTIONS(141),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(143),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(141),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(141),
    [anon_sym_throw] = ACTIONS(141),
    [anon_sym_goto] = ACTIONS(143),
    [anon_sym_goto_SLASH16] = ACTIONS(141),
    [anon_sym_goto_SLASH32] = ACTIONS(141),
    [anon_sym_packed_DASHswitch] = ACTIONS(141),
    [anon_sym_sparse_DASHswitch] = ACTIONS(141),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(141),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(141),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(141),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(141),
    [anon_sym_cmp_DASHlong] = ACTIONS(141),
    [anon_sym_if_DASHeq] = ACTIONS(143),
    [anon_sym_if_DASHne] = ACTIONS(143),
    [anon_sym_if_DASHlt] = ACTIONS(143),
    [anon_sym_if_DASHge] = ACTIONS(143),
    [anon_sym_if_DASHgt] = ACTIONS(143),
    [anon_sym_if_DASHle] = ACTIONS(143),
    [anon_sym_if_DASHeqz] = ACTIONS(141),
    [anon_sym_if_DASHnez] = ACTIONS(141),
    [anon_sym_if_DASHltz] = ACTIONS(141),
    [anon_sym_if_DASHgez] = ACTIONS(141),
    [anon_sym_if_DASHgtz] = ACTIONS(141),
    [anon_sym_if_DASHlez] = ACTIONS(141),
    [anon_sym_aget] = ACTIONS(143),
    [anon_sym_aget_DASHwide] = ACTIONS(141),
    [anon_sym_aget_DASHobject] = ACTIONS(141),
    [anon_sym_aget_DASHboolean] = ACTIONS(141),
    [anon_sym_aget_DASHbyte] = ACTIONS(141),
    [anon_sym_aget_DASHchar] = ACTIONS(141),
    [anon_sym_aget_DASHshort] = ACTIONS(141),
    [anon_sym_aput] = ACTIONS(143),
    [anon_sym_aput_DASHwide] = ACTIONS(141),
    [anon_sym_aput_DASHobject] = ACTIONS(141),
    [anon_sym_aput_DASHboolean] = ACTIONS(141),
    [anon_sym_aput_DASHbyte] = ACTIONS(141),
    [anon_sym_aput_DASHchar] = ACTIONS(141),
    [anon_sym_aput_DASHshort] = ACTIONS(141),
    [anon_sym_iget] = ACTIONS(143),
    [anon_sym_iget_DASHwide] = ACTIONS(143),
    [anon_sym_iget_DASHobject] = ACTIONS(143),
    [anon_sym_iget_DASHboolean] = ACTIONS(141),
    [anon_sym_iget_DASHbyte] = ACTIONS(141),
    [anon_sym_iget_DASHchar] = ACTIONS(141),
    [anon_sym_iget_DASHshort] = ACTIONS(141),
    [anon_sym_iput] = ACTIONS(143),
    [anon_sym_iput_DASHwide] = ACTIONS(143),
    [anon_sym_iput_DASHobject] = ACTIONS(143),
    [anon_sym_iput_DASHboolean] = ACTIONS(141),
    [anon_sym_iput_DASHbyte] = ACTIONS(141),
    [anon_sym_iput_DASHchar] = ACTIONS(141),
    [anon_sym_iput_DASHshort] = ACTIONS(141),
    [anon_sym_sget] = ACTIONS(143),
    [anon_sym_sget_DASHwide] = ACTIONS(141),
    [anon_sym_sget_DASHobject] = ACTIONS(141),
    [anon_sym_sget_DASHboolean] = ACTIONS(141),
    [anon_sym_sget_DASHbyte] = ACTIONS(141),
    [anon_sym_sget_DASHchar] = ACTIONS(141),
    [anon_sym_sget_DASHshort] = ACTIONS(141),
    [anon_sym_sput] = ACTIONS(143),
    [anon_sym_sput_DASHwide] = ACTIONS(141),
    [anon_sym_sput_DASHobject] = ACTIONS(141),
    [anon_sym_sput_DASHboolean] = ACTIONS(141),
    [anon_sym_sput_DASHbyte] = ACTIONS(141),
    [anon_sym_sput_DASHchar] = ACTIONS(141),
    [anon_sym_sput_DASHshort] = ACTIONS(141),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(143),
    [anon_sym_invoke_DASHsuper] = ACTIONS(143),
    [anon_sym_invoke_DASHdirect] = ACTIONS(143),
    [anon_sym_invoke_DASHstatic] = ACTIONS(143),
    [anon_sym_invoke_DASHinterface] = ACTIONS(143),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(141),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(141),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(141),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(141),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(141),
    [anon_sym_neg_DASHint] = ACTIONS(141),
    [anon_sym_not_DASHint] = ACTIONS(141),
    [anon_sym_neg_DASHlong] = ACTIONS(141),
    [anon_sym_not_DASHlong] = ACTIONS(141),
    [anon_sym_neg_DASHfloat] = ACTIONS(141),
    [anon_sym_neg_DASHdouble] = ACTIONS(141),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(141),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(141),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(141),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(141),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(141),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(141),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(141),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(141),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(141),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(141),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(141),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(141),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(141),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(141),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(141),
    [anon_sym_add_DASHint] = ACTIONS(143),
    [anon_sym_sub_DASHint] = ACTIONS(143),
    [anon_sym_mul_DASHint] = ACTIONS(143),
    [anon_sym_div_DASHint] = ACTIONS(143),
    [anon_sym_rem_DASHint] = ACTIONS(143),
    [anon_sym_and_DASHint] = ACTIONS(143),
    [anon_sym_or_DASHint] = ACTIONS(143),
    [anon_sym_xor_DASHint] = ACTIONS(143),
    [anon_sym_shl_DASHint] = ACTIONS(143),
    [anon_sym_shr_DASHint] = ACTIONS(143),
    [anon_sym_ushr_DASHint] = ACTIONS(143),
    [anon_sym_add_DASHlong] = ACTIONS(143),
    [anon_sym_sub_DASHlong] = ACTIONS(143),
    [anon_sym_mul_DASHlong] = ACTIONS(143),
    [anon_sym_div_DASHlong] = ACTIONS(143),
    [anon_sym_rem_DASHlong] = ACTIONS(143),
    [anon_sym_and_DASHlong] = ACTIONS(143),
    [anon_sym_or_DASHlong] = ACTIONS(143),
    [anon_sym_xor_DASHlong] = ACTIONS(143),
    [anon_sym_shl_DASHlong] = ACTIONS(143),
    [anon_sym_shr_DASHlong] = ACTIONS(143),
    [anon_sym_ushr_DASHlong] = ACTIONS(143),
    [anon_sym_add_DASHfloat] = ACTIONS(143),
    [anon_sym_sub_DASHfloat] = ACTIONS(143),
    [anon_sym_mul_DASHfloat] = ACTIONS(143),
    [anon_sym_div_DASHfloat] = ACTIONS(143),
    [anon_sym_rem_DASHfloat] = ACTIONS(143),
    [anon_sym_add_DASHdouble] = ACTIONS(143),
    [anon_sym_sub_DASHdouble] = ACTIONS(143),
    [anon_sym_mul_DASHdouble] = ACTIONS(143),
    [anon_sym_div_DASHdouble] = ACTIONS(143),
    [anon_sym_rem_DASHdouble] = ACTIONS(143),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(141),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(141),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(141),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(141),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(141),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(141),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(141),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(141),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(141),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(141),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(141),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(141),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(141),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(141),
    [anon_sym_execute_DASHinline] = ACTIONS(141),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(141),
    [anon_sym_iget_DASHquick] = ACTIONS(141),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(141),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(141),
    [anon_sym_iput_DASHquick] = ACTIONS(141),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(141),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(141),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(143),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(141),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(143),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(141),
    [anon_sym_DOTline] = ACTIONS(141),
    [anon_sym_DOTlocals] = ACTIONS(141),
    [anon_sym_DOTparam] = ACTIONS(141),
    [anon_sym_DOTcatch] = ACTIONS(143),
    [anon_sym_DOTcatchall] = ACTIONS(141),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(141),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(141),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_end_method] = ACTIONS(145),
    [anon_sym_DOTannotation] = ACTIONS(145),
    [sym_label] = ACTIONS(145),
    [anon_sym_nop] = ACTIONS(145),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_move_SLASHfrom16] = ACTIONS(145),
    [anon_sym_move_SLASH16] = ACTIONS(145),
    [anon_sym_move_DASHwide] = ACTIONS(147),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(145),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(145),
    [anon_sym_move_DASHobject] = ACTIONS(147),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(145),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(145),
    [anon_sym_move_DASHresult] = ACTIONS(147),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(145),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(145),
    [anon_sym_move_DASHexception] = ACTIONS(145),
    [anon_sym_return_DASHvoid] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_return_DASHwide] = ACTIONS(145),
    [anon_sym_return_DASHobject] = ACTIONS(145),
    [anon_sym_const_SLASH4] = ACTIONS(145),
    [anon_sym_const_SLASH16] = ACTIONS(145),
    [anon_sym_const] = ACTIONS(147),
    [anon_sym_const_SLASHhigh16] = ACTIONS(145),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(145),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(145),
    [anon_sym_const_DASHwide] = ACTIONS(147),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(145),
    [anon_sym_const_DASHstring] = ACTIONS(147),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(145),
    [anon_sym_const_DASHclass] = ACTIONS(145),
    [anon_sym_monitor_DASHenter] = ACTIONS(145),
    [anon_sym_monitor_DASHexit] = ACTIONS(145),
    [anon_sym_check_DASHcast] = ACTIONS(145),
    [anon_sym_instance_DASHof] = ACTIONS(145),
    [anon_sym_array_DASHlength] = ACTIONS(145),
    [anon_sym_new_DASHinstance] = ACTIONS(145),
    [anon_sym_new_DASHarray] = ACTIONS(145),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(147),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(145),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(145),
    [anon_sym_throw] = ACTIONS(145),
    [anon_sym_goto] = ACTIONS(147),
    [anon_sym_goto_SLASH16] = ACTIONS(145),
    [anon_sym_goto_SLASH32] = ACTIONS(145),
    [anon_sym_packed_DASHswitch] = ACTIONS(145),
    [anon_sym_sparse_DASHswitch] = ACTIONS(145),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(145),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(145),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(145),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(145),
    [anon_sym_cmp_DASHlong] = ACTIONS(145),
    [anon_sym_if_DASHeq] = ACTIONS(147),
    [anon_sym_if_DASHne] = ACTIONS(147),
    [anon_sym_if_DASHlt] = ACTIONS(147),
    [anon_sym_if_DASHge] = ACTIONS(147),
    [anon_sym_if_DASHgt] = ACTIONS(147),
    [anon_sym_if_DASHle] = ACTIONS(147),
    [anon_sym_if_DASHeqz] = ACTIONS(145),
    [anon_sym_if_DASHnez] = ACTIONS(145),
    [anon_sym_if_DASHltz] = ACTIONS(145),
    [anon_sym_if_DASHgez] = ACTIONS(145),
    [anon_sym_if_DASHgtz] = ACTIONS(145),
    [anon_sym_if_DASHlez] = ACTIONS(145),
    [anon_sym_aget] = ACTIONS(147),
    [anon_sym_aget_DASHwide] = ACTIONS(145),
    [anon_sym_aget_DASHobject] = ACTIONS(145),
    [anon_sym_aget_DASHboolean] = ACTIONS(145),
    [anon_sym_aget_DASHbyte] = ACTIONS(145),
    [anon_sym_aget_DASHchar] = ACTIONS(145),
    [anon_sym_aget_DASHshort] = ACTIONS(145),
    [anon_sym_aput] = ACTIONS(147),
    [anon_sym_aput_DASHwide] = ACTIONS(145),
    [anon_sym_aput_DASHobject] = ACTIONS(145),
    [anon_sym_aput_DASHboolean] = ACTIONS(145),
    [anon_sym_aput_DASHbyte] = ACTIONS(145),
    [anon_sym_aput_DASHchar] = ACTIONS(145),
    [anon_sym_aput_DASHshort] = ACTIONS(145),
    [anon_sym_iget] = ACTIONS(147),
    [anon_sym_iget_DASHwide] = ACTIONS(147),
    [anon_sym_iget_DASHobject] = ACTIONS(147),
    [anon_sym_iget_DASHboolean] = ACTIONS(145),
    [anon_sym_iget_DASHbyte] = ACTIONS(145),
    [anon_sym_iget_DASHchar] = ACTIONS(145),
    [anon_sym_iget_DASHshort] = ACTIONS(145),
    [anon_sym_iput] = ACTIONS(147),
    [anon_sym_iput_DASHwide] = ACTIONS(147),
    [anon_sym_iput_DASHobject] = ACTIONS(147),
    [anon_sym_iput_DASHboolean] = ACTIONS(145),
    [anon_sym_iput_DASHbyte] = ACTIONS(145),
    [anon_sym_iput_DASHchar] = ACTIONS(145),
    [anon_sym_iput_DASHshort] = ACTIONS(145),
    [anon_sym_sget] = ACTIONS(147),
    [anon_sym_sget_DASHwide] = ACTIONS(145),
    [anon_sym_sget_DASHobject] = ACTIONS(145),
    [anon_sym_sget_DASHboolean] = ACTIONS(145),
    [anon_sym_sget_DASHbyte] = ACTIONS(145),
    [anon_sym_sget_DASHchar] = ACTIONS(145),
    [anon_sym_sget_DASHshort] = ACTIONS(145),
    [anon_sym_sput] = ACTIONS(147),
    [anon_sym_sput_DASHwide] = ACTIONS(145),
    [anon_sym_sput_DASHobject] = ACTIONS(145),
    [anon_sym_sput_DASHboolean] = ACTIONS(145),
    [anon_sym_sput_DASHbyte] = ACTIONS(145),
    [anon_sym_sput_DASHchar] = ACTIONS(145),
    [anon_sym_sput_DASHshort] = ACTIONS(145),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(147),
    [anon_sym_invoke_DASHsuper] = ACTIONS(147),
    [anon_sym_invoke_DASHdirect] = ACTIONS(147),
    [anon_sym_invoke_DASHstatic] = ACTIONS(147),
    [anon_sym_invoke_DASHinterface] = ACTIONS(147),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(145),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(145),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(145),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(145),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(145),
    [anon_sym_neg_DASHint] = ACTIONS(145),
    [anon_sym_not_DASHint] = ACTIONS(145),
    [anon_sym_neg_DASHlong] = ACTIONS(145),
    [anon_sym_not_DASHlong] = ACTIONS(145),
    [anon_sym_neg_DASHfloat] = ACTIONS(145),
    [anon_sym_neg_DASHdouble] = ACTIONS(145),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(145),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(145),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(145),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(145),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(145),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(145),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(145),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(145),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(145),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(145),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(145),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(145),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(145),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(145),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(145),
    [anon_sym_add_DASHint] = ACTIONS(147),
    [anon_sym_sub_DASHint] = ACTIONS(147),
    [anon_sym_mul_DASHint] = ACTIONS(147),
    [anon_sym_div_DASHint] = ACTIONS(147),
    [anon_sym_rem_DASHint] = ACTIONS(147),
    [anon_sym_and_DASHint] = ACTIONS(147),
    [anon_sym_or_DASHint] = ACTIONS(147),
    [anon_sym_xor_DASHint] = ACTIONS(147),
    [anon_sym_shl_DASHint] = ACTIONS(147),
    [anon_sym_shr_DASHint] = ACTIONS(147),
    [anon_sym_ushr_DASHint] = ACTIONS(147),
    [anon_sym_add_DASHlong] = ACTIONS(147),
    [anon_sym_sub_DASHlong] = ACTIONS(147),
    [anon_sym_mul_DASHlong] = ACTIONS(147),
    [anon_sym_div_DASHlong] = ACTIONS(147),
    [anon_sym_rem_DASHlong] = ACTIONS(147),
    [anon_sym_and_DASHlong] = ACTIONS(147),
    [anon_sym_or_DASHlong] = ACTIONS(147),
    [anon_sym_xor_DASHlong] = ACTIONS(147),
    [anon_sym_shl_DASHlong] = ACTIONS(147),
    [anon_sym_shr_DASHlong] = ACTIONS(147),
    [anon_sym_ushr_DASHlong] = ACTIONS(147),
    [anon_sym_add_DASHfloat] = ACTIONS(147),
    [anon_sym_sub_DASHfloat] = ACTIONS(147),
    [anon_sym_mul_DASHfloat] = ACTIONS(147),
    [anon_sym_div_DASHfloat] = ACTIONS(147),
    [anon_sym_rem_DASHfloat] = ACTIONS(147),
    [anon_sym_add_DASHdouble] = ACTIONS(147),
    [anon_sym_sub_DASHdouble] = ACTIONS(147),
    [anon_sym_mul_DASHdouble] = ACTIONS(147),
    [anon_sym_div_DASHdouble] = ACTIONS(147),
    [anon_sym_rem_DASHdouble] = ACTIONS(147),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(145),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(145),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(145),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(145),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(145),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(145),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(145),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(145),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(145),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(145),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(145),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(145),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(145),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(145),
    [anon_sym_execute_DASHinline] = ACTIONS(145),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(145),
    [anon_sym_iget_DASHquick] = ACTIONS(145),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(145),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(145),
    [anon_sym_iput_DASHquick] = ACTIONS(145),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(145),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(145),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(147),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(145),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(147),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(145),
    [anon_sym_DOTline] = ACTIONS(145),
    [anon_sym_DOTlocals] = ACTIONS(145),
    [anon_sym_DOTparam] = ACTIONS(145),
    [anon_sym_DOTcatch] = ACTIONS(147),
    [anon_sym_DOTcatchall] = ACTIONS(145),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(145),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(145),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_end_method] = ACTIONS(149),
    [anon_sym_DOTannotation] = ACTIONS(149),
    [sym_label] = ACTIONS(149),
    [anon_sym_nop] = ACTIONS(149),
    [anon_sym_move] = ACTIONS(151),
    [anon_sym_move_SLASHfrom16] = ACTIONS(149),
    [anon_sym_move_SLASH16] = ACTIONS(149),
    [anon_sym_move_DASHwide] = ACTIONS(151),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(149),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(149),
    [anon_sym_move_DASHobject] = ACTIONS(151),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(149),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(149),
    [anon_sym_move_DASHresult] = ACTIONS(151),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(149),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(149),
    [anon_sym_move_DASHexception] = ACTIONS(149),
    [anon_sym_return_DASHvoid] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(151),
    [anon_sym_return_DASHwide] = ACTIONS(149),
    [anon_sym_return_DASHobject] = ACTIONS(149),
    [anon_sym_const_SLASH4] = ACTIONS(149),
    [anon_sym_const_SLASH16] = ACTIONS(149),
    [anon_sym_const] = ACTIONS(151),
    [anon_sym_const_SLASHhigh16] = ACTIONS(149),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(149),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(149),
    [anon_sym_const_DASHwide] = ACTIONS(151),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(149),
    [anon_sym_const_DASHstring] = ACTIONS(151),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(149),
    [anon_sym_const_DASHclass] = ACTIONS(149),
    [anon_sym_monitor_DASHenter] = ACTIONS(149),
    [anon_sym_monitor_DASHexit] = ACTIONS(149),
    [anon_sym_check_DASHcast] = ACTIONS(149),
    [anon_sym_instance_DASHof] = ACTIONS(149),
    [anon_sym_array_DASHlength] = ACTIONS(149),
    [anon_sym_new_DASHinstance] = ACTIONS(149),
    [anon_sym_new_DASHarray] = ACTIONS(149),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(151),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(149),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(149),
    [anon_sym_throw] = ACTIONS(149),
    [anon_sym_goto] = ACTIONS(151),
    [anon_sym_goto_SLASH16] = ACTIONS(149),
    [anon_sym_goto_SLASH32] = ACTIONS(149),
    [anon_sym_packed_DASHswitch] = ACTIONS(149),
    [anon_sym_sparse_DASHswitch] = ACTIONS(149),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(149),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(149),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(149),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(149),
    [anon_sym_cmp_DASHlong] = ACTIONS(149),
    [anon_sym_if_DASHeq] = ACTIONS(151),
    [anon_sym_if_DASHne] = ACTIONS(151),
    [anon_sym_if_DASHlt] = ACTIONS(151),
    [anon_sym_if_DASHge] = ACTIONS(151),
    [anon_sym_if_DASHgt] = ACTIONS(151),
    [anon_sym_if_DASHle] = ACTIONS(151),
    [anon_sym_if_DASHeqz] = ACTIONS(149),
    [anon_sym_if_DASHnez] = ACTIONS(149),
    [anon_sym_if_DASHltz] = ACTIONS(149),
    [anon_sym_if_DASHgez] = ACTIONS(149),
    [anon_sym_if_DASHgtz] = ACTIONS(149),
    [anon_sym_if_DASHlez] = ACTIONS(149),
    [anon_sym_aget] = ACTIONS(151),
    [anon_sym_aget_DASHwide] = ACTIONS(149),
    [anon_sym_aget_DASHobject] = ACTIONS(149),
    [anon_sym_aget_DASHboolean] = ACTIONS(149),
    [anon_sym_aget_DASHbyte] = ACTIONS(149),
    [anon_sym_aget_DASHchar] = ACTIONS(149),
    [anon_sym_aget_DASHshort] = ACTIONS(149),
    [anon_sym_aput] = ACTIONS(151),
    [anon_sym_aput_DASHwide] = ACTIONS(149),
    [anon_sym_aput_DASHobject] = ACTIONS(149),
    [anon_sym_aput_DASHboolean] = ACTIONS(149),
    [anon_sym_aput_DASHbyte] = ACTIONS(149),
    [anon_sym_aput_DASHchar] = ACTIONS(149),
    [anon_sym_aput_DASHshort] = ACTIONS(149),
    [anon_sym_iget] = ACTIONS(151),
    [anon_sym_iget_DASHwide] = ACTIONS(151),
    [anon_sym_iget_DASHobject] = ACTIONS(151),
    [anon_sym_iget_DASHboolean] = ACTIONS(149),
    [anon_sym_iget_DASHbyte] = ACTIONS(149),
    [anon_sym_iget_DASHchar] = ACTIONS(149),
    [anon_sym_iget_DASHshort] = ACTIONS(149),
    [anon_sym_iput] = ACTIONS(151),
    [anon_sym_iput_DASHwide] = ACTIONS(151),
    [anon_sym_iput_DASHobject] = ACTIONS(151),
    [anon_sym_iput_DASHboolean] = ACTIONS(149),
    [anon_sym_iput_DASHbyte] = ACTIONS(149),
    [anon_sym_iput_DASHchar] = ACTIONS(149),
    [anon_sym_iput_DASHshort] = ACTIONS(149),
    [anon_sym_sget] = ACTIONS(151),
    [anon_sym_sget_DASHwide] = ACTIONS(149),
    [anon_sym_sget_DASHobject] = ACTIONS(149),
    [anon_sym_sget_DASHboolean] = ACTIONS(149),
    [anon_sym_sget_DASHbyte] = ACTIONS(149),
    [anon_sym_sget_DASHchar] = ACTIONS(149),
    [anon_sym_sget_DASHshort] = ACTIONS(149),
    [anon_sym_sput] = ACTIONS(151),
    [anon_sym_sput_DASHwide] = ACTIONS(149),
    [anon_sym_sput_DASHobject] = ACTIONS(149),
    [anon_sym_sput_DASHboolean] = ACTIONS(149),
    [anon_sym_sput_DASHbyte] = ACTIONS(149),
    [anon_sym_sput_DASHchar] = ACTIONS(149),
    [anon_sym_sput_DASHshort] = ACTIONS(149),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(151),
    [anon_sym_invoke_DASHsuper] = ACTIONS(151),
    [anon_sym_invoke_DASHdirect] = ACTIONS(151),
    [anon_sym_invoke_DASHstatic] = ACTIONS(151),
    [anon_sym_invoke_DASHinterface] = ACTIONS(151),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(149),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(149),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(149),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(149),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(149),
    [anon_sym_neg_DASHint] = ACTIONS(149),
    [anon_sym_not_DASHint] = ACTIONS(149),
    [anon_sym_neg_DASHlong] = ACTIONS(149),
    [anon_sym_not_DASHlong] = ACTIONS(149),
    [anon_sym_neg_DASHfloat] = ACTIONS(149),
    [anon_sym_neg_DASHdouble] = ACTIONS(149),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(149),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(149),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(149),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(149),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(149),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(149),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(149),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(149),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(149),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(149),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(149),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(149),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(149),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(149),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(149),
    [anon_sym_add_DASHint] = ACTIONS(151),
    [anon_sym_sub_DASHint] = ACTIONS(151),
    [anon_sym_mul_DASHint] = ACTIONS(151),
    [anon_sym_div_DASHint] = ACTIONS(151),
    [anon_sym_rem_DASHint] = ACTIONS(151),
    [anon_sym_and_DASHint] = ACTIONS(151),
    [anon_sym_or_DASHint] = ACTIONS(151),
    [anon_sym_xor_DASHint] = ACTIONS(151),
    [anon_sym_shl_DASHint] = ACTIONS(151),
    [anon_sym_shr_DASHint] = ACTIONS(151),
    [anon_sym_ushr_DASHint] = ACTIONS(151),
    [anon_sym_add_DASHlong] = ACTIONS(151),
    [anon_sym_sub_DASHlong] = ACTIONS(151),
    [anon_sym_mul_DASHlong] = ACTIONS(151),
    [anon_sym_div_DASHlong] = ACTIONS(151),
    [anon_sym_rem_DASHlong] = ACTIONS(151),
    [anon_sym_and_DASHlong] = ACTIONS(151),
    [anon_sym_or_DASHlong] = ACTIONS(151),
    [anon_sym_xor_DASHlong] = ACTIONS(151),
    [anon_sym_shl_DASHlong] = ACTIONS(151),
    [anon_sym_shr_DASHlong] = ACTIONS(151),
    [anon_sym_ushr_DASHlong] = ACTIONS(151),
    [anon_sym_add_DASHfloat] = ACTIONS(151),
    [anon_sym_sub_DASHfloat] = ACTIONS(151),
    [anon_sym_mul_DASHfloat] = ACTIONS(151),
    [anon_sym_div_DASHfloat] = ACTIONS(151),
    [anon_sym_rem_DASHfloat] = ACTIONS(151),
    [anon_sym_add_DASHdouble] = ACTIONS(151),
    [anon_sym_sub_DASHdouble] = ACTIONS(151),
    [anon_sym_mul_DASHdouble] = ACTIONS(151),
    [anon_sym_div_DASHdouble] = ACTIONS(151),
    [anon_sym_rem_DASHdouble] = ACTIONS(151),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(149),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(149),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(149),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(149),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(149),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(149),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(149),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(149),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(149),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(149),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(149),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(149),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(149),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(149),
    [anon_sym_execute_DASHinline] = ACTIONS(149),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(149),
    [anon_sym_iget_DASHquick] = ACTIONS(149),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(149),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(149),
    [anon_sym_iput_DASHquick] = ACTIONS(149),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(149),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(149),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(151),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(149),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(151),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(149),
    [anon_sym_DOTline] = ACTIONS(149),
    [anon_sym_DOTlocals] = ACTIONS(149),
    [anon_sym_DOTparam] = ACTIONS(149),
    [anon_sym_DOTcatch] = ACTIONS(151),
    [anon_sym_DOTcatchall] = ACTIONS(149),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(149),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(149),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_end_method] = ACTIONS(153),
    [anon_sym_DOTannotation] = ACTIONS(153),
    [sym_label] = ACTIONS(153),
    [anon_sym_nop] = ACTIONS(153),
    [anon_sym_move] = ACTIONS(155),
    [anon_sym_move_SLASHfrom16] = ACTIONS(153),
    [anon_sym_move_SLASH16] = ACTIONS(153),
    [anon_sym_move_DASHwide] = ACTIONS(155),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(153),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(153),
    [anon_sym_move_DASHobject] = ACTIONS(155),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(153),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(153),
    [anon_sym_move_DASHresult] = ACTIONS(155),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(153),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(153),
    [anon_sym_move_DASHexception] = ACTIONS(153),
    [anon_sym_return_DASHvoid] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_return_DASHwide] = ACTIONS(153),
    [anon_sym_return_DASHobject] = ACTIONS(153),
    [anon_sym_const_SLASH4] = ACTIONS(153),
    [anon_sym_const_SLASH16] = ACTIONS(153),
    [anon_sym_const] = ACTIONS(155),
    [anon_sym_const_SLASHhigh16] = ACTIONS(153),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(153),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(153),
    [anon_sym_const_DASHwide] = ACTIONS(155),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(153),
    [anon_sym_const_DASHstring] = ACTIONS(155),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(153),
    [anon_sym_const_DASHclass] = ACTIONS(153),
    [anon_sym_monitor_DASHenter] = ACTIONS(153),
    [anon_sym_monitor_DASHexit] = ACTIONS(153),
    [anon_sym_check_DASHcast] = ACTIONS(153),
    [anon_sym_instance_DASHof] = ACTIONS(153),
    [anon_sym_array_DASHlength] = ACTIONS(153),
    [anon_sym_new_DASHinstance] = ACTIONS(153),
    [anon_sym_new_DASHarray] = ACTIONS(153),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(155),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(153),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(153),
    [anon_sym_throw] = ACTIONS(153),
    [anon_sym_goto] = ACTIONS(155),
    [anon_sym_goto_SLASH16] = ACTIONS(153),
    [anon_sym_goto_SLASH32] = ACTIONS(153),
    [anon_sym_packed_DASHswitch] = ACTIONS(153),
    [anon_sym_sparse_DASHswitch] = ACTIONS(153),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(153),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(153),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(153),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(153),
    [anon_sym_cmp_DASHlong] = ACTIONS(153),
    [anon_sym_if_DASHeq] = ACTIONS(155),
    [anon_sym_if_DASHne] = ACTIONS(155),
    [anon_sym_if_DASHlt] = ACTIONS(155),
    [anon_sym_if_DASHge] = ACTIONS(155),
    [anon_sym_if_DASHgt] = ACTIONS(155),
    [anon_sym_if_DASHle] = ACTIONS(155),
    [anon_sym_if_DASHeqz] = ACTIONS(153),
    [anon_sym_if_DASHnez] = ACTIONS(153),
    [anon_sym_if_DASHltz] = ACTIONS(153),
    [anon_sym_if_DASHgez] = ACTIONS(153),
    [anon_sym_if_DASHgtz] = ACTIONS(153),
    [anon_sym_if_DASHlez] = ACTIONS(153),
    [anon_sym_aget] = ACTIONS(155),
    [anon_sym_aget_DASHwide] = ACTIONS(153),
    [anon_sym_aget_DASHobject] = ACTIONS(153),
    [anon_sym_aget_DASHboolean] = ACTIONS(153),
    [anon_sym_aget_DASHbyte] = ACTIONS(153),
    [anon_sym_aget_DASHchar] = ACTIONS(153),
    [anon_sym_aget_DASHshort] = ACTIONS(153),
    [anon_sym_aput] = ACTIONS(155),
    [anon_sym_aput_DASHwide] = ACTIONS(153),
    [anon_sym_aput_DASHobject] = ACTIONS(153),
    [anon_sym_aput_DASHboolean] = ACTIONS(153),
    [anon_sym_aput_DASHbyte] = ACTIONS(153),
    [anon_sym_aput_DASHchar] = ACTIONS(153),
    [anon_sym_aput_DASHshort] = ACTIONS(153),
    [anon_sym_iget] = ACTIONS(155),
    [anon_sym_iget_DASHwide] = ACTIONS(155),
    [anon_sym_iget_DASHobject] = ACTIONS(155),
    [anon_sym_iget_DASHboolean] = ACTIONS(153),
    [anon_sym_iget_DASHbyte] = ACTIONS(153),
    [anon_sym_iget_DASHchar] = ACTIONS(153),
    [anon_sym_iget_DASHshort] = ACTIONS(153),
    [anon_sym_iput] = ACTIONS(155),
    [anon_sym_iput_DASHwide] = ACTIONS(155),
    [anon_sym_iput_DASHobject] = ACTIONS(155),
    [anon_sym_iput_DASHboolean] = ACTIONS(153),
    [anon_sym_iput_DASHbyte] = ACTIONS(153),
    [anon_sym_iput_DASHchar] = ACTIONS(153),
    [anon_sym_iput_DASHshort] = ACTIONS(153),
    [anon_sym_sget] = ACTIONS(155),
    [anon_sym_sget_DASHwide] = ACTIONS(153),
    [anon_sym_sget_DASHobject] = ACTIONS(153),
    [anon_sym_sget_DASHboolean] = ACTIONS(153),
    [anon_sym_sget_DASHbyte] = ACTIONS(153),
    [anon_sym_sget_DASHchar] = ACTIONS(153),
    [anon_sym_sget_DASHshort] = ACTIONS(153),
    [anon_sym_sput] = ACTIONS(155),
    [anon_sym_sput_DASHwide] = ACTIONS(153),
    [anon_sym_sput_DASHobject] = ACTIONS(153),
    [anon_sym_sput_DASHboolean] = ACTIONS(153),
    [anon_sym_sput_DASHbyte] = ACTIONS(153),
    [anon_sym_sput_DASHchar] = ACTIONS(153),
    [anon_sym_sput_DASHshort] = ACTIONS(153),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(155),
    [anon_sym_invoke_DASHsuper] = ACTIONS(155),
    [anon_sym_invoke_DASHdirect] = ACTIONS(155),
    [anon_sym_invoke_DASHstatic] = ACTIONS(155),
    [anon_sym_invoke_DASHinterface] = ACTIONS(155),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(153),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(153),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(153),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(153),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(153),
    [anon_sym_neg_DASHint] = ACTIONS(153),
    [anon_sym_not_DASHint] = ACTIONS(153),
    [anon_sym_neg_DASHlong] = ACTIONS(153),
    [anon_sym_not_DASHlong] = ACTIONS(153),
    [anon_sym_neg_DASHfloat] = ACTIONS(153),
    [anon_sym_neg_DASHdouble] = ACTIONS(153),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(153),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(153),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(153),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(153),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(153),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(153),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(153),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(153),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(153),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(153),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(153),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(153),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(153),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(153),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(153),
    [anon_sym_add_DASHint] = ACTIONS(155),
    [anon_sym_sub_DASHint] = ACTIONS(155),
    [anon_sym_mul_DASHint] = ACTIONS(155),
    [anon_sym_div_DASHint] = ACTIONS(155),
    [anon_sym_rem_DASHint] = ACTIONS(155),
    [anon_sym_and_DASHint] = ACTIONS(155),
    [anon_sym_or_DASHint] = ACTIONS(155),
    [anon_sym_xor_DASHint] = ACTIONS(155),
    [anon_sym_shl_DASHint] = ACTIONS(155),
    [anon_sym_shr_DASHint] = ACTIONS(155),
    [anon_sym_ushr_DASHint] = ACTIONS(155),
    [anon_sym_add_DASHlong] = ACTIONS(155),
    [anon_sym_sub_DASHlong] = ACTIONS(155),
    [anon_sym_mul_DASHlong] = ACTIONS(155),
    [anon_sym_div_DASHlong] = ACTIONS(155),
    [anon_sym_rem_DASHlong] = ACTIONS(155),
    [anon_sym_and_DASHlong] = ACTIONS(155),
    [anon_sym_or_DASHlong] = ACTIONS(155),
    [anon_sym_xor_DASHlong] = ACTIONS(155),
    [anon_sym_shl_DASHlong] = ACTIONS(155),
    [anon_sym_shr_DASHlong] = ACTIONS(155),
    [anon_sym_ushr_DASHlong] = ACTIONS(155),
    [anon_sym_add_DASHfloat] = ACTIONS(155),
    [anon_sym_sub_DASHfloat] = ACTIONS(155),
    [anon_sym_mul_DASHfloat] = ACTIONS(155),
    [anon_sym_div_DASHfloat] = ACTIONS(155),
    [anon_sym_rem_DASHfloat] = ACTIONS(155),
    [anon_sym_add_DASHdouble] = ACTIONS(155),
    [anon_sym_sub_DASHdouble] = ACTIONS(155),
    [anon_sym_mul_DASHdouble] = ACTIONS(155),
    [anon_sym_div_DASHdouble] = ACTIONS(155),
    [anon_sym_rem_DASHdouble] = ACTIONS(155),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(153),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(153),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(153),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(153),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(153),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(153),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(153),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(153),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(153),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(153),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(153),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(153),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(153),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(153),
    [anon_sym_execute_DASHinline] = ACTIONS(153),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(153),
    [anon_sym_iget_DASHquick] = ACTIONS(153),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(153),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(153),
    [anon_sym_iput_DASHquick] = ACTIONS(153),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(153),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(153),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(155),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(153),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(155),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(153),
    [anon_sym_DOTline] = ACTIONS(153),
    [anon_sym_DOTlocals] = ACTIONS(153),
    [anon_sym_DOTparam] = ACTIONS(153),
    [anon_sym_DOTcatch] = ACTIONS(155),
    [anon_sym_DOTcatchall] = ACTIONS(153),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(153),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(153),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_end_method] = ACTIONS(157),
    [anon_sym_DOTannotation] = ACTIONS(157),
    [sym_label] = ACTIONS(157),
    [anon_sym_nop] = ACTIONS(157),
    [anon_sym_move] = ACTIONS(159),
    [anon_sym_move_SLASHfrom16] = ACTIONS(157),
    [anon_sym_move_SLASH16] = ACTIONS(157),
    [anon_sym_move_DASHwide] = ACTIONS(159),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(157),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(157),
    [anon_sym_move_DASHobject] = ACTIONS(159),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(157),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(157),
    [anon_sym_move_DASHresult] = ACTIONS(159),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(157),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(157),
    [anon_sym_move_DASHexception] = ACTIONS(157),
    [anon_sym_return_DASHvoid] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(159),
    [anon_sym_return_DASHwide] = ACTIONS(157),
    [anon_sym_return_DASHobject] = ACTIONS(157),
    [anon_sym_const_SLASH4] = ACTIONS(157),
    [anon_sym_const_SLASH16] = ACTIONS(157),
    [anon_sym_const] = ACTIONS(159),
    [anon_sym_const_SLASHhigh16] = ACTIONS(157),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(157),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(157),
    [anon_sym_const_DASHwide] = ACTIONS(159),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(157),
    [anon_sym_const_DASHstring] = ACTIONS(159),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(157),
    [anon_sym_const_DASHclass] = ACTIONS(157),
    [anon_sym_monitor_DASHenter] = ACTIONS(157),
    [anon_sym_monitor_DASHexit] = ACTIONS(157),
    [anon_sym_check_DASHcast] = ACTIONS(157),
    [anon_sym_instance_DASHof] = ACTIONS(157),
    [anon_sym_array_DASHlength] = ACTIONS(157),
    [anon_sym_new_DASHinstance] = ACTIONS(157),
    [anon_sym_new_DASHarray] = ACTIONS(157),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(159),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(157),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(157),
    [anon_sym_throw] = ACTIONS(157),
    [anon_sym_goto] = ACTIONS(159),
    [anon_sym_goto_SLASH16] = ACTIONS(157),
    [anon_sym_goto_SLASH32] = ACTIONS(157),
    [anon_sym_packed_DASHswitch] = ACTIONS(157),
    [anon_sym_sparse_DASHswitch] = ACTIONS(157),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(157),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(157),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(157),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(157),
    [anon_sym_cmp_DASHlong] = ACTIONS(157),
    [anon_sym_if_DASHeq] = ACTIONS(159),
    [anon_sym_if_DASHne] = ACTIONS(159),
    [anon_sym_if_DASHlt] = ACTIONS(159),
    [anon_sym_if_DASHge] = ACTIONS(159),
    [anon_sym_if_DASHgt] = ACTIONS(159),
    [anon_sym_if_DASHle] = ACTIONS(159),
    [anon_sym_if_DASHeqz] = ACTIONS(157),
    [anon_sym_if_DASHnez] = ACTIONS(157),
    [anon_sym_if_DASHltz] = ACTIONS(157),
    [anon_sym_if_DASHgez] = ACTIONS(157),
    [anon_sym_if_DASHgtz] = ACTIONS(157),
    [anon_sym_if_DASHlez] = ACTIONS(157),
    [anon_sym_aget] = ACTIONS(159),
    [anon_sym_aget_DASHwide] = ACTIONS(157),
    [anon_sym_aget_DASHobject] = ACTIONS(157),
    [anon_sym_aget_DASHboolean] = ACTIONS(157),
    [anon_sym_aget_DASHbyte] = ACTIONS(157),
    [anon_sym_aget_DASHchar] = ACTIONS(157),
    [anon_sym_aget_DASHshort] = ACTIONS(157),
    [anon_sym_aput] = ACTIONS(159),
    [anon_sym_aput_DASHwide] = ACTIONS(157),
    [anon_sym_aput_DASHobject] = ACTIONS(157),
    [anon_sym_aput_DASHboolean] = ACTIONS(157),
    [anon_sym_aput_DASHbyte] = ACTIONS(157),
    [anon_sym_aput_DASHchar] = ACTIONS(157),
    [anon_sym_aput_DASHshort] = ACTIONS(157),
    [anon_sym_iget] = ACTIONS(159),
    [anon_sym_iget_DASHwide] = ACTIONS(159),
    [anon_sym_iget_DASHobject] = ACTIONS(159),
    [anon_sym_iget_DASHboolean] = ACTIONS(157),
    [anon_sym_iget_DASHbyte] = ACTIONS(157),
    [anon_sym_iget_DASHchar] = ACTIONS(157),
    [anon_sym_iget_DASHshort] = ACTIONS(157),
    [anon_sym_iput] = ACTIONS(159),
    [anon_sym_iput_DASHwide] = ACTIONS(159),
    [anon_sym_iput_DASHobject] = ACTIONS(159),
    [anon_sym_iput_DASHboolean] = ACTIONS(157),
    [anon_sym_iput_DASHbyte] = ACTIONS(157),
    [anon_sym_iput_DASHchar] = ACTIONS(157),
    [anon_sym_iput_DASHshort] = ACTIONS(157),
    [anon_sym_sget] = ACTIONS(159),
    [anon_sym_sget_DASHwide] = ACTIONS(157),
    [anon_sym_sget_DASHobject] = ACTIONS(157),
    [anon_sym_sget_DASHboolean] = ACTIONS(157),
    [anon_sym_sget_DASHbyte] = ACTIONS(157),
    [anon_sym_sget_DASHchar] = ACTIONS(157),
    [anon_sym_sget_DASHshort] = ACTIONS(157),
    [anon_sym_sput] = ACTIONS(159),
    [anon_sym_sput_DASHwide] = ACTIONS(157),
    [anon_sym_sput_DASHobject] = ACTIONS(157),
    [anon_sym_sput_DASHboolean] = ACTIONS(157),
    [anon_sym_sput_DASHbyte] = ACTIONS(157),
    [anon_sym_sput_DASHchar] = ACTIONS(157),
    [anon_sym_sput_DASHshort] = ACTIONS(157),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(159),
    [anon_sym_invoke_DASHsuper] = ACTIONS(159),
    [anon_sym_invoke_DASHdirect] = ACTIONS(159),
    [anon_sym_invoke_DASHstatic] = ACTIONS(159),
    [anon_sym_invoke_DASHinterface] = ACTIONS(159),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(157),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(157),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(157),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(157),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(157),
    [anon_sym_neg_DASHint] = ACTIONS(157),
    [anon_sym_not_DASHint] = ACTIONS(157),
    [anon_sym_neg_DASHlong] = ACTIONS(157),
    [anon_sym_not_DASHlong] = ACTIONS(157),
    [anon_sym_neg_DASHfloat] = ACTIONS(157),
    [anon_sym_neg_DASHdouble] = ACTIONS(157),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(157),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(157),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(157),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(157),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(157),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(157),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(157),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(157),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(157),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(157),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(157),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(157),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(157),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(157),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(157),
    [anon_sym_add_DASHint] = ACTIONS(159),
    [anon_sym_sub_DASHint] = ACTIONS(159),
    [anon_sym_mul_DASHint] = ACTIONS(159),
    [anon_sym_div_DASHint] = ACTIONS(159),
    [anon_sym_rem_DASHint] = ACTIONS(159),
    [anon_sym_and_DASHint] = ACTIONS(159),
    [anon_sym_or_DASHint] = ACTIONS(159),
    [anon_sym_xor_DASHint] = ACTIONS(159),
    [anon_sym_shl_DASHint] = ACTIONS(159),
    [anon_sym_shr_DASHint] = ACTIONS(159),
    [anon_sym_ushr_DASHint] = ACTIONS(159),
    [anon_sym_add_DASHlong] = ACTIONS(159),
    [anon_sym_sub_DASHlong] = ACTIONS(159),
    [anon_sym_mul_DASHlong] = ACTIONS(159),
    [anon_sym_div_DASHlong] = ACTIONS(159),
    [anon_sym_rem_DASHlong] = ACTIONS(159),
    [anon_sym_and_DASHlong] = ACTIONS(159),
    [anon_sym_or_DASHlong] = ACTIONS(159),
    [anon_sym_xor_DASHlong] = ACTIONS(159),
    [anon_sym_shl_DASHlong] = ACTIONS(159),
    [anon_sym_shr_DASHlong] = ACTIONS(159),
    [anon_sym_ushr_DASHlong] = ACTIONS(159),
    [anon_sym_add_DASHfloat] = ACTIONS(159),
    [anon_sym_sub_DASHfloat] = ACTIONS(159),
    [anon_sym_mul_DASHfloat] = ACTIONS(159),
    [anon_sym_div_DASHfloat] = ACTIONS(159),
    [anon_sym_rem_DASHfloat] = ACTIONS(159),
    [anon_sym_add_DASHdouble] = ACTIONS(159),
    [anon_sym_sub_DASHdouble] = ACTIONS(159),
    [anon_sym_mul_DASHdouble] = ACTIONS(159),
    [anon_sym_div_DASHdouble] = ACTIONS(159),
    [anon_sym_rem_DASHdouble] = ACTIONS(159),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(157),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(157),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(157),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(157),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(157),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(157),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(157),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(157),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(157),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(157),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(157),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(157),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(157),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(157),
    [anon_sym_execute_DASHinline] = ACTIONS(157),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(157),
    [anon_sym_iget_DASHquick] = ACTIONS(157),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(157),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(157),
    [anon_sym_iput_DASHquick] = ACTIONS(157),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(157),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(157),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(159),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(157),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(159),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(157),
    [anon_sym_DOTline] = ACTIONS(157),
    [anon_sym_DOTlocals] = ACTIONS(157),
    [anon_sym_DOTparam] = ACTIONS(157),
    [anon_sym_DOTcatch] = ACTIONS(159),
    [anon_sym_DOTcatchall] = ACTIONS(157),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(157),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(157),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_end_method] = ACTIONS(161),
    [anon_sym_DOTannotation] = ACTIONS(161),
    [sym_label] = ACTIONS(161),
    [anon_sym_nop] = ACTIONS(161),
    [anon_sym_move] = ACTIONS(163),
    [anon_sym_move_SLASHfrom16] = ACTIONS(161),
    [anon_sym_move_SLASH16] = ACTIONS(161),
    [anon_sym_move_DASHwide] = ACTIONS(163),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(161),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(161),
    [anon_sym_move_DASHobject] = ACTIONS(163),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(161),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(161),
    [anon_sym_move_DASHresult] = ACTIONS(163),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(161),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(161),
    [anon_sym_move_DASHexception] = ACTIONS(161),
    [anon_sym_return_DASHvoid] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(163),
    [anon_sym_return_DASHwide] = ACTIONS(161),
    [anon_sym_return_DASHobject] = ACTIONS(161),
    [anon_sym_const_SLASH4] = ACTIONS(161),
    [anon_sym_const_SLASH16] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(163),
    [anon_sym_const_SLASHhigh16] = ACTIONS(161),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(161),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(161),
    [anon_sym_const_DASHwide] = ACTIONS(163),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(161),
    [anon_sym_const_DASHstring] = ACTIONS(163),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(161),
    [anon_sym_const_DASHclass] = ACTIONS(161),
    [anon_sym_monitor_DASHenter] = ACTIONS(161),
    [anon_sym_monitor_DASHexit] = ACTIONS(161),
    [anon_sym_check_DASHcast] = ACTIONS(161),
    [anon_sym_instance_DASHof] = ACTIONS(161),
    [anon_sym_array_DASHlength] = ACTIONS(161),
    [anon_sym_new_DASHinstance] = ACTIONS(161),
    [anon_sym_new_DASHarray] = ACTIONS(161),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(163),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(161),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(161),
    [anon_sym_throw] = ACTIONS(161),
    [anon_sym_goto] = ACTIONS(163),
    [anon_sym_goto_SLASH16] = ACTIONS(161),
    [anon_sym_goto_SLASH32] = ACTIONS(161),
    [anon_sym_packed_DASHswitch] = ACTIONS(161),
    [anon_sym_sparse_DASHswitch] = ACTIONS(161),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(161),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(161),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(161),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(161),
    [anon_sym_cmp_DASHlong] = ACTIONS(161),
    [anon_sym_if_DASHeq] = ACTIONS(163),
    [anon_sym_if_DASHne] = ACTIONS(163),
    [anon_sym_if_DASHlt] = ACTIONS(163),
    [anon_sym_if_DASHge] = ACTIONS(163),
    [anon_sym_if_DASHgt] = ACTIONS(163),
    [anon_sym_if_DASHle] = ACTIONS(163),
    [anon_sym_if_DASHeqz] = ACTIONS(161),
    [anon_sym_if_DASHnez] = ACTIONS(161),
    [anon_sym_if_DASHltz] = ACTIONS(161),
    [anon_sym_if_DASHgez] = ACTIONS(161),
    [anon_sym_if_DASHgtz] = ACTIONS(161),
    [anon_sym_if_DASHlez] = ACTIONS(161),
    [anon_sym_aget] = ACTIONS(163),
    [anon_sym_aget_DASHwide] = ACTIONS(161),
    [anon_sym_aget_DASHobject] = ACTIONS(161),
    [anon_sym_aget_DASHboolean] = ACTIONS(161),
    [anon_sym_aget_DASHbyte] = ACTIONS(161),
    [anon_sym_aget_DASHchar] = ACTIONS(161),
    [anon_sym_aget_DASHshort] = ACTIONS(161),
    [anon_sym_aput] = ACTIONS(163),
    [anon_sym_aput_DASHwide] = ACTIONS(161),
    [anon_sym_aput_DASHobject] = ACTIONS(161),
    [anon_sym_aput_DASHboolean] = ACTIONS(161),
    [anon_sym_aput_DASHbyte] = ACTIONS(161),
    [anon_sym_aput_DASHchar] = ACTIONS(161),
    [anon_sym_aput_DASHshort] = ACTIONS(161),
    [anon_sym_iget] = ACTIONS(163),
    [anon_sym_iget_DASHwide] = ACTIONS(163),
    [anon_sym_iget_DASHobject] = ACTIONS(163),
    [anon_sym_iget_DASHboolean] = ACTIONS(161),
    [anon_sym_iget_DASHbyte] = ACTIONS(161),
    [anon_sym_iget_DASHchar] = ACTIONS(161),
    [anon_sym_iget_DASHshort] = ACTIONS(161),
    [anon_sym_iput] = ACTIONS(163),
    [anon_sym_iput_DASHwide] = ACTIONS(163),
    [anon_sym_iput_DASHobject] = ACTIONS(163),
    [anon_sym_iput_DASHboolean] = ACTIONS(161),
    [anon_sym_iput_DASHbyte] = ACTIONS(161),
    [anon_sym_iput_DASHchar] = ACTIONS(161),
    [anon_sym_iput_DASHshort] = ACTIONS(161),
    [anon_sym_sget] = ACTIONS(163),
    [anon_sym_sget_DASHwide] = ACTIONS(161),
    [anon_sym_sget_DASHobject] = ACTIONS(161),
    [anon_sym_sget_DASHboolean] = ACTIONS(161),
    [anon_sym_sget_DASHbyte] = ACTIONS(161),
    [anon_sym_sget_DASHchar] = ACTIONS(161),
    [anon_sym_sget_DASHshort] = ACTIONS(161),
    [anon_sym_sput] = ACTIONS(163),
    [anon_sym_sput_DASHwide] = ACTIONS(161),
    [anon_sym_sput_DASHobject] = ACTIONS(161),
    [anon_sym_sput_DASHboolean] = ACTIONS(161),
    [anon_sym_sput_DASHbyte] = ACTIONS(161),
    [anon_sym_sput_DASHchar] = ACTIONS(161),
    [anon_sym_sput_DASHshort] = ACTIONS(161),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(163),
    [anon_sym_invoke_DASHsuper] = ACTIONS(163),
    [anon_sym_invoke_DASHdirect] = ACTIONS(163),
    [anon_sym_invoke_DASHstatic] = ACTIONS(163),
    [anon_sym_invoke_DASHinterface] = ACTIONS(163),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(161),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(161),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(161),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(161),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(161),
    [anon_sym_neg_DASHint] = ACTIONS(161),
    [anon_sym_not_DASHint] = ACTIONS(161),
    [anon_sym_neg_DASHlong] = ACTIONS(161),
    [anon_sym_not_DASHlong] = ACTIONS(161),
    [anon_sym_neg_DASHfloat] = ACTIONS(161),
    [anon_sym_neg_DASHdouble] = ACTIONS(161),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(161),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(161),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(161),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(161),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(161),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(161),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(161),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(161),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(161),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(161),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(161),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(161),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(161),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(161),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(161),
    [anon_sym_add_DASHint] = ACTIONS(163),
    [anon_sym_sub_DASHint] = ACTIONS(163),
    [anon_sym_mul_DASHint] = ACTIONS(163),
    [anon_sym_div_DASHint] = ACTIONS(163),
    [anon_sym_rem_DASHint] = ACTIONS(163),
    [anon_sym_and_DASHint] = ACTIONS(163),
    [anon_sym_or_DASHint] = ACTIONS(163),
    [anon_sym_xor_DASHint] = ACTIONS(163),
    [anon_sym_shl_DASHint] = ACTIONS(163),
    [anon_sym_shr_DASHint] = ACTIONS(163),
    [anon_sym_ushr_DASHint] = ACTIONS(163),
    [anon_sym_add_DASHlong] = ACTIONS(163),
    [anon_sym_sub_DASHlong] = ACTIONS(163),
    [anon_sym_mul_DASHlong] = ACTIONS(163),
    [anon_sym_div_DASHlong] = ACTIONS(163),
    [anon_sym_rem_DASHlong] = ACTIONS(163),
    [anon_sym_and_DASHlong] = ACTIONS(163),
    [anon_sym_or_DASHlong] = ACTIONS(163),
    [anon_sym_xor_DASHlong] = ACTIONS(163),
    [anon_sym_shl_DASHlong] = ACTIONS(163),
    [anon_sym_shr_DASHlong] = ACTIONS(163),
    [anon_sym_ushr_DASHlong] = ACTIONS(163),
    [anon_sym_add_DASHfloat] = ACTIONS(163),
    [anon_sym_sub_DASHfloat] = ACTIONS(163),
    [anon_sym_mul_DASHfloat] = ACTIONS(163),
    [anon_sym_div_DASHfloat] = ACTIONS(163),
    [anon_sym_rem_DASHfloat] = ACTIONS(163),
    [anon_sym_add_DASHdouble] = ACTIONS(163),
    [anon_sym_sub_DASHdouble] = ACTIONS(163),
    [anon_sym_mul_DASHdouble] = ACTIONS(163),
    [anon_sym_div_DASHdouble] = ACTIONS(163),
    [anon_sym_rem_DASHdouble] = ACTIONS(163),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(161),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(161),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(161),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(161),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(161),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(161),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(161),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(161),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(161),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(161),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(161),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(161),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(161),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(161),
    [anon_sym_execute_DASHinline] = ACTIONS(161),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(161),
    [anon_sym_iget_DASHquick] = ACTIONS(161),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(161),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(161),
    [anon_sym_iput_DASHquick] = ACTIONS(161),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(161),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(161),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(163),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(161),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(163),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(161),
    [anon_sym_DOTline] = ACTIONS(161),
    [anon_sym_DOTlocals] = ACTIONS(161),
    [anon_sym_DOTparam] = ACTIONS(161),
    [anon_sym_DOTcatch] = ACTIONS(163),
    [anon_sym_DOTcatchall] = ACTIONS(161),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(161),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(161),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_end_method] = ACTIONS(165),
    [anon_sym_DOTannotation] = ACTIONS(165),
    [sym_label] = ACTIONS(165),
    [anon_sym_nop] = ACTIONS(165),
    [anon_sym_move] = ACTIONS(167),
    [anon_sym_move_SLASHfrom16] = ACTIONS(165),
    [anon_sym_move_SLASH16] = ACTIONS(165),
    [anon_sym_move_DASHwide] = ACTIONS(167),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(165),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(165),
    [anon_sym_move_DASHobject] = ACTIONS(167),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(165),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(165),
    [anon_sym_move_DASHresult] = ACTIONS(167),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(165),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(165),
    [anon_sym_move_DASHexception] = ACTIONS(165),
    [anon_sym_return_DASHvoid] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_return_DASHwide] = ACTIONS(165),
    [anon_sym_return_DASHobject] = ACTIONS(165),
    [anon_sym_const_SLASH4] = ACTIONS(165),
    [anon_sym_const_SLASH16] = ACTIONS(165),
    [anon_sym_const] = ACTIONS(167),
    [anon_sym_const_SLASHhigh16] = ACTIONS(165),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(165),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(165),
    [anon_sym_const_DASHwide] = ACTIONS(167),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(165),
    [anon_sym_const_DASHstring] = ACTIONS(167),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(165),
    [anon_sym_const_DASHclass] = ACTIONS(165),
    [anon_sym_monitor_DASHenter] = ACTIONS(165),
    [anon_sym_monitor_DASHexit] = ACTIONS(165),
    [anon_sym_check_DASHcast] = ACTIONS(165),
    [anon_sym_instance_DASHof] = ACTIONS(165),
    [anon_sym_array_DASHlength] = ACTIONS(165),
    [anon_sym_new_DASHinstance] = ACTIONS(165),
    [anon_sym_new_DASHarray] = ACTIONS(165),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(167),
    [anon_sym_filled_DASHnew_DASHarray_DASHrange] = ACTIONS(165),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(165),
    [anon_sym_throw] = ACTIONS(165),
    [anon_sym_goto] = ACTIONS(167),
    [anon_sym_goto_SLASH16] = ACTIONS(165),
    [anon_sym_goto_SLASH32] = ACTIONS(165),
    [anon_sym_packed_DASHswitch] = ACTIONS(165),
    [anon_sym_sparse_DASHswitch] = ACTIONS(165),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(165),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(165),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(165),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(165),
    [anon_sym_cmp_DASHlong] = ACTIONS(165),
    [anon_sym_if_DASHeq] = ACTIONS(167),
    [anon_sym_if_DASHne] = ACTIONS(167),
    [anon_sym_if_DASHlt] = ACTIONS(167),
    [anon_sym_if_DASHge] = ACTIONS(167),
    [anon_sym_if_DASHgt] = ACTIONS(167),
    [anon_sym_if_DASHle] = ACTIONS(167),
    [anon_sym_if_DASHeqz] = ACTIONS(165),
    [anon_sym_if_DASHnez] = ACTIONS(165),
    [anon_sym_if_DASHltz] = ACTIONS(165),
    [anon_sym_if_DASHgez] = ACTIONS(165),
    [anon_sym_if_DASHgtz] = ACTIONS(165),
    [anon_sym_if_DASHlez] = ACTIONS(165),
    [anon_sym_aget] = ACTIONS(167),
    [anon_sym_aget_DASHwide] = ACTIONS(165),
    [anon_sym_aget_DASHobject] = ACTIONS(165),
    [anon_sym_aget_DASHboolean] = ACTIONS(165),
    [anon_sym_aget_DASHbyte] = ACTIONS(165),
    [anon_sym_aget_DASHchar] = ACTIONS(165),
    [anon_sym_aget_DASHshort] = ACTIONS(165),
    [anon_sym_aput] = ACTIONS(167),
    [anon_sym_aput_DASHwide] = ACTIONS(165),
    [anon_sym_aput_DASHobject] = ACTIONS(165),
    [anon_sym_aput_DASHboolean] = ACTIONS(165),
    [anon_sym_aput_DASHbyte] = ACTIONS(165),
    [anon_sym_aput_DASHchar] = ACTIONS(165),
    [anon_sym_aput_DASHshort] = ACTIONS(165),
    [anon_sym_iget] = ACTIONS(167),
    [anon_sym_iget_DASHwide] = ACTIONS(167),
    [anon_sym_iget_DASHobject] = ACTIONS(167),
    [anon_sym_iget_DASHboolean] = ACTIONS(165),
    [anon_sym_iget_DASHbyte] = ACTIONS(165),
    [anon_sym_iget_DASHchar] = ACTIONS(165),
    [anon_sym_iget_DASHshort] = ACTIONS(165),
    [anon_sym_iput] = ACTIONS(167),
    [anon_sym_iput_DASHwide] = ACTIONS(167),
    [anon_sym_iput_DASHobject] = ACTIONS(167),
    [anon_sym_iput_DASHboolean] = ACTIONS(165),
    [anon_sym_iput_DASHbyte] = ACTIONS(165),
    [anon_sym_iput_DASHchar] = ACTIONS(165),
    [anon_sym_iput_DASHshort] = ACTIONS(165),
    [anon_sym_sget] = ACTIONS(167),
    [anon_sym_sget_DASHwide] = ACTIONS(165),
    [anon_sym_sget_DASHobject] = ACTIONS(165),
    [anon_sym_sget_DASHboolean] = ACTIONS(165),
    [anon_sym_sget_DASHbyte] = ACTIONS(165),
    [anon_sym_sget_DASHchar] = ACTIONS(165),
    [anon_sym_sget_DASHshort] = ACTIONS(165),
    [anon_sym_sput] = ACTIONS(167),
    [anon_sym_sput_DASHwide] = ACTIONS(165),
    [anon_sym_sput_DASHobject] = ACTIONS(165),
    [anon_sym_sput_DASHboolean] = ACTIONS(165),
    [anon_sym_sput_DASHbyte] = ACTIONS(165),
    [anon_sym_sput_DASHchar] = ACTIONS(165),
    [anon_sym_sput_DASHshort] = ACTIONS(165),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(167),
    [anon_sym_invoke_DASHsuper] = ACTIONS(167),
    [anon_sym_invoke_DASHdirect] = ACTIONS(167),
    [anon_sym_invoke_DASHstatic] = ACTIONS(167),
    [anon_sym_invoke_DASHinterface] = ACTIONS(167),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(165),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(165),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(165),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(165),
    [anon_sym_invoke_DASHinterface_DASHrange] = ACTIONS(165),
    [anon_sym_neg_DASHint] = ACTIONS(165),
    [anon_sym_not_DASHint] = ACTIONS(165),
    [anon_sym_neg_DASHlong] = ACTIONS(165),
    [anon_sym_not_DASHlong] = ACTIONS(165),
    [anon_sym_neg_DASHfloat] = ACTIONS(165),
    [anon_sym_neg_DASHdouble] = ACTIONS(165),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(165),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(165),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(165),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(165),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(165),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(165),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(165),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(165),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(165),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(165),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(165),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(165),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(165),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(165),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(165),
    [anon_sym_add_DASHint] = ACTIONS(167),
    [anon_sym_sub_DASHint] = ACTIONS(167),
    [anon_sym_mul_DASHint] = ACTIONS(167),
    [anon_sym_div_DASHint] = ACTIONS(167),
    [anon_sym_rem_DASHint] = ACTIONS(167),
    [anon_sym_and_DASHint] = ACTIONS(167),
    [anon_sym_or_DASHint] = ACTIONS(167),
    [anon_sym_xor_DASHint] = ACTIONS(167),
    [anon_sym_shl_DASHint] = ACTIONS(167),
    [anon_sym_shr_DASHint] = ACTIONS(167),
    [anon_sym_ushr_DASHint] = ACTIONS(167),
    [anon_sym_add_DASHlong] = ACTIONS(167),
    [anon_sym_sub_DASHlong] = ACTIONS(167),
    [anon_sym_mul_DASHlong] = ACTIONS(167),
    [anon_sym_div_DASHlong] = ACTIONS(167),
    [anon_sym_rem_DASHlong] = ACTIONS(167),
    [anon_sym_and_DASHlong] = ACTIONS(167),
    [anon_sym_or_DASHlong] = ACTIONS(167),
    [anon_sym_xor_DASHlong] = ACTIONS(167),
    [anon_sym_shl_DASHlong] = ACTIONS(167),
    [anon_sym_shr_DASHlong] = ACTIONS(167),
    [anon_sym_ushr_DASHlong] = ACTIONS(167),
    [anon_sym_add_DASHfloat] = ACTIONS(167),
    [anon_sym_sub_DASHfloat] = ACTIONS(167),
    [anon_sym_mul_DASHfloat] = ACTIONS(167),
    [anon_sym_div_DASHfloat] = ACTIONS(167),
    [anon_sym_rem_DASHfloat] = ACTIONS(167),
    [anon_sym_add_DASHdouble] = ACTIONS(167),
    [anon_sym_sub_DASHdouble] = ACTIONS(167),
    [anon_sym_mul_DASHdouble] = ACTIONS(167),
    [anon_sym_div_DASHdouble] = ACTIONS(167),
    [anon_sym_rem_DASHdouble] = ACTIONS(167),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(165),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(165),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(165),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(165),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(165),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(165),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(165),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(165),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(165),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(165),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(165),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(165),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(165),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(165),
    [anon_sym_execute_DASHinline] = ACTIONS(165),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(165),
    [anon_sym_iget_DASHquick] = ACTIONS(165),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(165),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(165),
    [anon_sym_iput_DASHquick] = ACTIONS(165),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(165),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(165),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(167),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(165),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(167),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(165),
    [anon_sym_DOTline] = ACTIONS(165),
    [anon_sym_DOTlocals] = ACTIONS(165),
    [anon_sym_DOTparam] = ACTIONS(165),
    [anon_sym_DOTcatch] = ACTIONS(167),
    [anon_sym_DOTcatchall] = ACTIONS(165),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(165),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(165),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      sym_class_identifier,
    ACTIONS(173), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(177), 1,
      sym_variable,
    ACTIONS(179), 1,
      sym_parameter,
    ACTIONS(183), 1,
      sym_string_literal,
    STATE(72), 1,
      aux_sym_list_repeat3,
    STATE(106), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      sym_number_literal,
    STATE(122), 1,
      aux_sym_list_repeat2,
    STATE(124), 1,
      aux_sym_list_repeat4,
    STATE(125), 1,
      aux_sym_list_repeat5,
    ACTIONS(175), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(181), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    STATE(88), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [55] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_class_identifier,
    ACTIONS(173), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(177), 1,
      sym_variable,
    ACTIONS(179), 1,
      sym_parameter,
    ACTIONS(183), 1,
      sym_string_literal,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_list_repeat3,
    STATE(112), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      sym_number_literal,
    STATE(120), 1,
      aux_sym_list_repeat5,
    STATE(121), 1,
      aux_sym_list_repeat4,
    STATE(126), 1,
      aux_sym_list_repeat2,
    ACTIONS(175), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(181), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    STATE(88), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [110] = 9,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      sym_class_identifier,
    ACTIONS(193), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(201), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(199), 3,
      sym_variable,
      sym_parameter,
      sym_string_literal,
    STATE(145), 8,
      sym__statement_argument,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_list,
      sym_number_literal,
  [149] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_DOTsource,
    ACTIONS(207), 1,
      anon_sym_DOTimplements,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    STATE(5), 1,
      sym_method_declaration,
    STATE(41), 1,
      sym_source_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(40), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(67), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(76), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(100), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [199] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_class_identifier,
    ACTIONS(217), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(223), 1,
      sym_string_literal,
    ACTIONS(201), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(219), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(221), 2,
      sym_variable,
      sym_parameter,
    STATE(159), 8,
      sym__statement_argument,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_list,
      sym_number_literal,
  [237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_constructor,
    STATE(34), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(227), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(229), 13,
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
  [266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_constructor,
    STATE(34), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(234), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(236), 13,
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
  [295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_class_identifier,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [327] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_class_identifier,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [359] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(207), 1,
      anon_sym_DOTimplements,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(68), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(77), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(82), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(109), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_class_identifier,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [435] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(207), 1,
      anon_sym_DOTimplements,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(65), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(78), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(82), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [479] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(207), 1,
      anon_sym_DOTimplements,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(38), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(65), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(78), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_class_identifier,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_class_identifier,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(264), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_class_identifier,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_class_identifier,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_method_identifier_repeat1,
    STATE(69), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(196), 1,
      sym_access_modifiers,
    ACTIONS(271), 13,
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
  [676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_field_identifier_token1,
    STATE(48), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(273), 13,
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
  [701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_field_identifier_token1,
    STATE(48), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(275), 13,
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
  [726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(113), 1,
      sym_access_modifiers,
    ACTIONS(278), 13,
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
  [751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(158), 1,
      sym_access_modifiers,
    ACTIONS(280), 13,
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
  [776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_class_identifier,
    STATE(51), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(282), 13,
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
  [801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_class_identifier,
    STATE(51), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(285), 13,
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
  [826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_class_identifier,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(160), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(291), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_class_identifier,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    STATE(80), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(297), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym_class_identifier,
    STATE(20), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym_class_identifier,
    STATE(66), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [930] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_class_identifier,
    STATE(89), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(297), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      sym_class_identifier,
    STATE(169), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(291), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_class_identifier,
    STATE(165), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(291), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_class_identifier,
    STATE(12), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      sym_class_identifier,
    STATE(168), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(291), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym_class_identifier,
    STATE(66), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(297), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      sym_class_identifier,
    STATE(2), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(244), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      sym_class_identifier,
    STATE(90), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(297), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(77), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(83), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(109), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_annotation_key,
    ACTIONS(317), 12,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_end_annotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1196] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(78), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(83), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1233] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(75), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(83), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 12,
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
  [1288] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      sym_class_identifier,
    ACTIONS(330), 1,
      aux_sym_field_identifier_token1,
    STATE(70), 1,
      aux_sym_list_repeat3,
    ACTIONS(333), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(88), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1315] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 10,
      anon_sym_LBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
      sym_variable,
      sym_parameter,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      sym_string_literal,
  [1334] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_class_identifier,
    ACTIONS(173), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_list_repeat3,
    ACTIONS(175), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(88), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1361] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_class_identifier,
    ACTIONS(173), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_list_repeat3,
    ACTIONS(175), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(88), 5,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
  [1388] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_DOTenum,
    ACTIONS(350), 1,
      aux_sym_number_literal_token1,
    ACTIONS(352), 1,
      aux_sym_number_literal_token2,
    STATE(155), 1,
      sym_annotation_value,
    ACTIONS(346), 2,
      sym_class_identifier,
      sym_string_literal,
    STATE(171), 3,
      sym_enum_reference,
      sym_list,
      sym_number_literal,
  [1416] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(86), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(107), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1443] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(86), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1470] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(86), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(92), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1497] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DOTfield,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(86), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(109), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_annotation_key,
    ACTIONS(11), 7,
      sym_end_annotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_annotation_key,
    ACTIONS(7), 7,
      sym_end_annotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DASH_GT,
    ACTIONS(356), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DOTimplements,
    STATE(82), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    ACTIONS(360), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DOTannotation,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(83), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(372), 1,
      sym_end_field,
    STATE(114), 1,
      sym_annotation_declaration,
    STATE(184), 1,
      sym_annotation_definition,
    ACTIONS(370), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DOTfield,
    STATE(84), 1,
      sym_field_declaration,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(86), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(391), 1,
      aux_sym_number_literal_token1,
    ACTIONS(394), 1,
      aux_sym_number_literal_token2,
    STATE(93), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [1754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(397), 1,
      anon_sym_DOTendsparse_DASHswitch,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(101), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(187), 1,
      sym_number_literal,
  [1773] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    ACTIONS(401), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(94), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(187), 1,
      sym_number_literal,
  [1792] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      aux_sym_number_literal_token1,
    ACTIONS(408), 1,
      aux_sym_number_literal_token2,
    STATE(96), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      sym_number_literal,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_RBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DOTendsparse_DASHswitch,
    ACTIONS(417), 1,
      aux_sym_number_literal_token1,
    ACTIONS(420), 1,
      aux_sym_number_literal_token2,
    STATE(101), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(187), 1,
      sym_number_literal,
  [1880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_field_identifier_token1,
    STATE(85), 1,
      sym_method_identifier,
    STATE(91), 1,
      sym_field_identifier,
    ACTIONS(175), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    ACTIONS(423), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(93), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [1914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    ACTIONS(425), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(103), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [1931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      anon_sym_DOTmethod,
    STATE(5), 1,
      sym_method_declaration,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(96), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      sym_number_literal,
  [1967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym_field_identifier_token1,
    STATE(149), 1,
      sym_method_identifier,
    STATE(157), 1,
      sym_field_identifier,
    ACTIONS(219), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [2001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2018] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOTmethod,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_method_declaration,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(96), 1,
      aux_sym_list_repeat1,
    STATE(116), 1,
      sym_number_literal,
  [2065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_constructor,
    STATE(19), 1,
      sym_method_identifier,
    ACTIONS(438), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [2079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_annotation_key,
    ACTIONS(442), 1,
      sym_end_annotation,
    STATE(115), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_annotation_key,
    ACTIONS(444), 1,
      sym_end_annotation,
    STATE(117), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      aux_sym_number_literal_token2,
    ACTIONS(448), 2,
      anon_sym_RBRACE,
      aux_sym_number_literal_token1,
  [2121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_annotation_key,
    ACTIONS(455), 1,
      sym_end_annotation,
    STATE(117), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_label,
    ACTIONS(459), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(130), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(140), 1,
      sym_number_literal,
  [2161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      sym_parameter,
    STATE(144), 1,
      aux_sym_list_repeat5,
  [2174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      sym_variable,
    STATE(143), 1,
      aux_sym_list_repeat4,
  [2187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_string_literal,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_list_repeat2,
  [2200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 2,
      anon_sym_RBRACE,
      sym_string_literal,
  [2211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      sym_variable,
    STATE(143), 1,
      aux_sym_list_repeat4,
  [2224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      sym_parameter,
    STATE(144), 1,
      aux_sym_list_repeat5,
  [2237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_string_literal,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_list_repeat2,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 2,
      anon_sym_RBRACE,
      sym_variable,
  [2279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_label,
    ACTIONS(480), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(130), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_number_literal_token2,
    ACTIONS(482), 2,
      anon_sym_DOTendsparse_DASHswitch,
      aux_sym_number_literal_token1,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 2,
      anon_sym_RBRACE,
      sym_parameter,
  [2314] = 4,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_statement_repeat1,
  [2327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(11), 1,
      sym_number_literal,
  [2340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(14), 1,
      sym_number_literal,
  [2353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_number_literal_token2,
    ACTIONS(399), 1,
      aux_sym_number_literal_token1,
    STATE(104), 1,
      sym_number_literal,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_method_identifier,
    ACTIONS(438), 2,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_number_literal_token2,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      aux_sym_number_literal_token1,
  [2388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_label,
    ACTIONS(500), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(118), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(504), 1,
      sym_string_literal,
    STATE(141), 1,
      aux_sym_list_repeat2,
  [2423] = 4,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_DASH_GT,
  [2436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_variable,
    STATE(143), 1,
      aux_sym_list_repeat4,
  [2449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(518), 1,
      sym_parameter,
    STATE(144), 1,
      aux_sym_list_repeat5,
  [2462] = 4,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_LF,
    STATE(133), 1,
      aux_sym_statement_repeat1,
  [2475] = 4,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_statement_repeat1,
  [2488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_RBRACE,
      sym_variable,
  [2504] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [2514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DOTsuper,
    STATE(32), 1,
      sym_super_declaration,
  [2540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_field_identifier_token1,
    STATE(150), 1,
      sym_field_identifier,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2566] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_LF,
  [2576] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(546), 1,
      anon_sym_COMMA,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_field_identifier_token1,
    STATE(111), 1,
      sym_field_identifier,
  [2596] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(550), 1,
      anon_sym_COMMA,
  [2606] = 3,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_comment,
  [2616] = 3,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_comment,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_RBRACE,
      sym_parameter,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2642] = 3,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_comment,
  [2652] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 1,
      anon_sym_COMMA,
  [2662] = 3,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(552), 1,
      anon_sym_COMMA,
  [2672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2680] = 3,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_comment,
  [2690] = 3,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_comment,
  [2700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_RBRACE,
      sym_string_literal,
  [2724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_parameter,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_label,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_label,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_label,
  [2752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [2759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [2766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_class_identifier,
  [2773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_label,
  [2794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_EQ,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_end_field,
  [2808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_label,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_class_identifier,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DASH_GT,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_DOT_DOT,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_class_identifier,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_DOT_DOT,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_string_literal,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_label,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_label,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_DOTsuper,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_class_identifier,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_class_identifier,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(29)] = 0,
  [SMALL_STATE(30)] = 55,
  [SMALL_STATE(31)] = 110,
  [SMALL_STATE(32)] = 149,
  [SMALL_STATE(33)] = 199,
  [SMALL_STATE(34)] = 237,
  [SMALL_STATE(35)] = 266,
  [SMALL_STATE(36)] = 295,
  [SMALL_STATE(37)] = 327,
  [SMALL_STATE(38)] = 359,
  [SMALL_STATE(39)] = 403,
  [SMALL_STATE(40)] = 435,
  [SMALL_STATE(41)] = 479,
  [SMALL_STATE(42)] = 523,
  [SMALL_STATE(43)] = 555,
  [SMALL_STATE(44)] = 587,
  [SMALL_STATE(45)] = 619,
  [SMALL_STATE(46)] = 651,
  [SMALL_STATE(47)] = 676,
  [SMALL_STATE(48)] = 701,
  [SMALL_STATE(49)] = 726,
  [SMALL_STATE(50)] = 751,
  [SMALL_STATE(51)] = 776,
  [SMALL_STATE(52)] = 801,
  [SMALL_STATE(53)] = 826,
  [SMALL_STATE(54)] = 852,
  [SMALL_STATE(55)] = 878,
  [SMALL_STATE(56)] = 904,
  [SMALL_STATE(57)] = 930,
  [SMALL_STATE(58)] = 956,
  [SMALL_STATE(59)] = 982,
  [SMALL_STATE(60)] = 1008,
  [SMALL_STATE(61)] = 1034,
  [SMALL_STATE(62)] = 1060,
  [SMALL_STATE(63)] = 1086,
  [SMALL_STATE(64)] = 1112,
  [SMALL_STATE(65)] = 1138,
  [SMALL_STATE(66)] = 1175,
  [SMALL_STATE(67)] = 1196,
  [SMALL_STATE(68)] = 1233,
  [SMALL_STATE(69)] = 1270,
  [SMALL_STATE(70)] = 1288,
  [SMALL_STATE(71)] = 1315,
  [SMALL_STATE(72)] = 1334,
  [SMALL_STATE(73)] = 1361,
  [SMALL_STATE(74)] = 1388,
  [SMALL_STATE(75)] = 1416,
  [SMALL_STATE(76)] = 1443,
  [SMALL_STATE(77)] = 1470,
  [SMALL_STATE(78)] = 1497,
  [SMALL_STATE(79)] = 1524,
  [SMALL_STATE(80)] = 1540,
  [SMALL_STATE(81)] = 1556,
  [SMALL_STATE(82)] = 1571,
  [SMALL_STATE(83)] = 1588,
  [SMALL_STATE(84)] = 1607,
  [SMALL_STATE(85)] = 1628,
  [SMALL_STATE(86)] = 1640,
  [SMALL_STATE(87)] = 1658,
  [SMALL_STATE(88)] = 1670,
  [SMALL_STATE(89)] = 1684,
  [SMALL_STATE(90)] = 1696,
  [SMALL_STATE(91)] = 1708,
  [SMALL_STATE(92)] = 1720,
  [SMALL_STATE(93)] = 1737,
  [SMALL_STATE(94)] = 1754,
  [SMALL_STATE(95)] = 1773,
  [SMALL_STATE(96)] = 1792,
  [SMALL_STATE(97)] = 1811,
  [SMALL_STATE(98)] = 1822,
  [SMALL_STATE(99)] = 1833,
  [SMALL_STATE(100)] = 1844,
  [SMALL_STATE(101)] = 1861,
  [SMALL_STATE(102)] = 1880,
  [SMALL_STATE(103)] = 1897,
  [SMALL_STATE(104)] = 1914,
  [SMALL_STATE(105)] = 1931,
  [SMALL_STATE(106)] = 1948,
  [SMALL_STATE(107)] = 1967,
  [SMALL_STATE(108)] = 1984,
  [SMALL_STATE(109)] = 2001,
  [SMALL_STATE(110)] = 2018,
  [SMALL_STATE(111)] = 2035,
  [SMALL_STATE(112)] = 2046,
  [SMALL_STATE(113)] = 2065,
  [SMALL_STATE(114)] = 2079,
  [SMALL_STATE(115)] = 2093,
  [SMALL_STATE(116)] = 2107,
  [SMALL_STATE(117)] = 2121,
  [SMALL_STATE(118)] = 2135,
  [SMALL_STATE(119)] = 2148,
  [SMALL_STATE(120)] = 2161,
  [SMALL_STATE(121)] = 2174,
  [SMALL_STATE(122)] = 2187,
  [SMALL_STATE(123)] = 2200,
  [SMALL_STATE(124)] = 2211,
  [SMALL_STATE(125)] = 2224,
  [SMALL_STATE(126)] = 2237,
  [SMALL_STATE(127)] = 2250,
  [SMALL_STATE(128)] = 2259,
  [SMALL_STATE(129)] = 2268,
  [SMALL_STATE(130)] = 2279,
  [SMALL_STATE(131)] = 2292,
  [SMALL_STATE(132)] = 2303,
  [SMALL_STATE(133)] = 2314,
  [SMALL_STATE(134)] = 2327,
  [SMALL_STATE(135)] = 2340,
  [SMALL_STATE(136)] = 2353,
  [SMALL_STATE(137)] = 2366,
  [SMALL_STATE(138)] = 2377,
  [SMALL_STATE(139)] = 2388,
  [SMALL_STATE(140)] = 2397,
  [SMALL_STATE(141)] = 2410,
  [SMALL_STATE(142)] = 2423,
  [SMALL_STATE(143)] = 2436,
  [SMALL_STATE(144)] = 2449,
  [SMALL_STATE(145)] = 2462,
  [SMALL_STATE(146)] = 2475,
  [SMALL_STATE(147)] = 2488,
  [SMALL_STATE(148)] = 2496,
  [SMALL_STATE(149)] = 2504,
  [SMALL_STATE(150)] = 2514,
  [SMALL_STATE(151)] = 2522,
  [SMALL_STATE(152)] = 2530,
  [SMALL_STATE(153)] = 2540,
  [SMALL_STATE(154)] = 2548,
  [SMALL_STATE(155)] = 2558,
  [SMALL_STATE(156)] = 2566,
  [SMALL_STATE(157)] = 2576,
  [SMALL_STATE(158)] = 2586,
  [SMALL_STATE(159)] = 2596,
  [SMALL_STATE(160)] = 2606,
  [SMALL_STATE(161)] = 2616,
  [SMALL_STATE(162)] = 2626,
  [SMALL_STATE(163)] = 2634,
  [SMALL_STATE(164)] = 2642,
  [SMALL_STATE(165)] = 2652,
  [SMALL_STATE(166)] = 2662,
  [SMALL_STATE(167)] = 2672,
  [SMALL_STATE(168)] = 2680,
  [SMALL_STATE(169)] = 2690,
  [SMALL_STATE(170)] = 2700,
  [SMALL_STATE(171)] = 2708,
  [SMALL_STATE(172)] = 2716,
  [SMALL_STATE(173)] = 2724,
  [SMALL_STATE(174)] = 2731,
  [SMALL_STATE(175)] = 2738,
  [SMALL_STATE(176)] = 2745,
  [SMALL_STATE(177)] = 2752,
  [SMALL_STATE(178)] = 2759,
  [SMALL_STATE(179)] = 2766,
  [SMALL_STATE(180)] = 2773,
  [SMALL_STATE(181)] = 2780,
  [SMALL_STATE(182)] = 2787,
  [SMALL_STATE(183)] = 2794,
  [SMALL_STATE(184)] = 2801,
  [SMALL_STATE(185)] = 2808,
  [SMALL_STATE(186)] = 2815,
  [SMALL_STATE(187)] = 2822,
  [SMALL_STATE(188)] = 2829,
  [SMALL_STATE(189)] = 2836,
  [SMALL_STATE(190)] = 2843,
  [SMALL_STATE(191)] = 2850,
  [SMALL_STATE(192)] = 2857,
  [SMALL_STATE(193)] = 2864,
  [SMALL_STATE(194)] = 2871,
  [SMALL_STATE(195)] = 2878,
  [SMALL_STATE(196)] = 2885,
  [SMALL_STATE(197)] = 2892,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(127),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(71),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(71),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(134),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(135),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(173),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(179),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(178),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(119),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(95),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(136),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_declaration, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_declaration, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 3, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 3, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_declaration, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_declaration, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_declaration, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_declaration, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_declaration, 7),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_declaration, 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_declaration, 8),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_declaration, 8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 4, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 4, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(34),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifiers, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(69),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(63),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(48),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(51),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(81),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(62),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 2), SHIFT_REPEAT(44),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(189),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(127),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_method_identifier, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(50),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_declaration, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat3, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_field_identifier, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_declaration, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(49),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2), SHIFT_REPEAT(183),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 1),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat5, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(123),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat4, 2), SHIFT_REPEAT(129),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat5, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat5, 2), SHIFT_REPEAT(132),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(33),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_method_identifier, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_reference, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3, .production_id = 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_field_identifier, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_declaration, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [572] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
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
