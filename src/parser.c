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
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 369
#define ALIAS_COUNT 2
#define TOKEN_COUNT 313
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
  anon_sym_EQ = 6,
  sym_end_field = 7,
  anon_sym_DOTmethod = 8,
  sym_end_method = 9,
  anon_sym_DOTannotation = 10,
  anon_sym_system = 11,
  anon_sym_build = 12,
  anon_sym_runtime = 13,
  sym_annotation_key = 14,
  sym_end_annotation = 15,
  anon_sym_DOTsubannotation = 16,
  sym_end_subannotation = 17,
  anon_sym_DOTparam = 18,
  sym_end_param = 19,
  sym_label = 20,
  anon_sym_COMMA = 21,
  anon_sym_LF = 22,
  anon_sym_nop = 23,
  anon_sym_move = 24,
  anon_sym_move_SLASHfrom16 = 25,
  anon_sym_move_SLASH16 = 26,
  anon_sym_move_DASHwide = 27,
  anon_sym_move_DASHwide_SLASHfrom16 = 28,
  anon_sym_move_DASHwide_SLASH16 = 29,
  anon_sym_move_DASHobject = 30,
  anon_sym_move_DASHobject_SLASHfrom16 = 31,
  anon_sym_move_DASHobject_SLASH16 = 32,
  anon_sym_move_DASHresult = 33,
  anon_sym_move_DASHresult_DASHwide = 34,
  anon_sym_move_DASHresult_DASHobject = 35,
  anon_sym_move_DASHexception = 36,
  anon_sym_return_DASHvoid = 37,
  anon_sym_return = 38,
  anon_sym_return_DASHwide = 39,
  anon_sym_return_DASHobject = 40,
  anon_sym_const_SLASH4 = 41,
  anon_sym_const_SLASH16 = 42,
  anon_sym_const = 43,
  anon_sym_const_SLASHhigh16 = 44,
  anon_sym_const_DASHwide_SLASH16 = 45,
  anon_sym_const_DASHwide_SLASH32 = 46,
  anon_sym_const_DASHwide = 47,
  anon_sym_const_DASHwide_SLASHhigh16 = 48,
  anon_sym_const_DASHstring = 49,
  anon_sym_const_DASHstring_DASHjumbo = 50,
  anon_sym_const_DASHclass = 51,
  anon_sym_monitor_DASHenter = 52,
  anon_sym_monitor_DASHexit = 53,
  anon_sym_check_DASHcast = 54,
  anon_sym_instance_DASHof = 55,
  anon_sym_array_DASHlength = 56,
  anon_sym_new_DASHinstance = 57,
  anon_sym_new_DASHarray = 58,
  anon_sym_filled_DASHnew_DASHarray = 59,
  anon_sym_filled_DASHnew_DASHarray_SLASHrange = 60,
  anon_sym_fill_DASHarray_DASHdata = 61,
  anon_sym_throw = 62,
  anon_sym_goto = 63,
  anon_sym_goto_SLASH16 = 64,
  anon_sym_goto_SLASH32 = 65,
  anon_sym_packed_DASHswitch = 66,
  anon_sym_sparse_DASHswitch = 67,
  anon_sym_cmpl_DASHfloat = 68,
  anon_sym_cmpg_DASHfloat = 69,
  anon_sym_cmpl_DASHdouble = 70,
  anon_sym_cmpg_DASHdouble = 71,
  anon_sym_cmp_DASHlong = 72,
  anon_sym_if_DASHeq = 73,
  anon_sym_if_DASHne = 74,
  anon_sym_if_DASHlt = 75,
  anon_sym_if_DASHge = 76,
  anon_sym_if_DASHgt = 77,
  anon_sym_if_DASHle = 78,
  anon_sym_if_DASHeqz = 79,
  anon_sym_if_DASHnez = 80,
  anon_sym_if_DASHltz = 81,
  anon_sym_if_DASHgez = 82,
  anon_sym_if_DASHgtz = 83,
  anon_sym_if_DASHlez = 84,
  anon_sym_aget = 85,
  anon_sym_aget_DASHwide = 86,
  anon_sym_aget_DASHobject = 87,
  anon_sym_aget_DASHboolean = 88,
  anon_sym_aget_DASHbyte = 89,
  anon_sym_aget_DASHchar = 90,
  anon_sym_aget_DASHshort = 91,
  anon_sym_aput = 92,
  anon_sym_aput_DASHwide = 93,
  anon_sym_aput_DASHobject = 94,
  anon_sym_aput_DASHboolean = 95,
  anon_sym_aput_DASHbyte = 96,
  anon_sym_aput_DASHchar = 97,
  anon_sym_aput_DASHshort = 98,
  anon_sym_iget = 99,
  anon_sym_iget_DASHwide = 100,
  anon_sym_iget_DASHobject = 101,
  anon_sym_iget_DASHboolean = 102,
  anon_sym_iget_DASHbyte = 103,
  anon_sym_iget_DASHchar = 104,
  anon_sym_iget_DASHshort = 105,
  anon_sym_iput = 106,
  anon_sym_iput_DASHwide = 107,
  anon_sym_iput_DASHobject = 108,
  anon_sym_iput_DASHboolean = 109,
  anon_sym_iput_DASHbyte = 110,
  anon_sym_iput_DASHchar = 111,
  anon_sym_iput_DASHshort = 112,
  anon_sym_sget = 113,
  anon_sym_sget_DASHwide = 114,
  anon_sym_sget_DASHobject = 115,
  anon_sym_sget_DASHboolean = 116,
  anon_sym_sget_DASHbyte = 117,
  anon_sym_sget_DASHchar = 118,
  anon_sym_sget_DASHshort = 119,
  anon_sym_sput = 120,
  anon_sym_sput_DASHwide = 121,
  anon_sym_sput_DASHobject = 122,
  anon_sym_sput_DASHboolean = 123,
  anon_sym_sput_DASHbyte = 124,
  anon_sym_sput_DASHchar = 125,
  anon_sym_sput_DASHshort = 126,
  anon_sym_invoke_DASHvirtual = 127,
  anon_sym_invoke_DASHsuper = 128,
  anon_sym_invoke_DASHdirect = 129,
  anon_sym_invoke_DASHstatic = 130,
  anon_sym_invoke_DASHinterface = 131,
  anon_sym_invoke_DASHvirtual_SLASHrange = 132,
  anon_sym_invoke_DASHsuper_SLASHrange = 133,
  anon_sym_invoke_DASHdirect_SLASHrange = 134,
  anon_sym_invoke_DASHstatic_SLASHrange = 135,
  anon_sym_invoke_DASHinterface_SLASHrange = 136,
  anon_sym_neg_DASHint = 137,
  anon_sym_not_DASHint = 138,
  anon_sym_neg_DASHlong = 139,
  anon_sym_not_DASHlong = 140,
  anon_sym_neg_DASHfloat = 141,
  anon_sym_neg_DASHdouble = 142,
  anon_sym_int_DASHto_DASHlong = 143,
  anon_sym_int_DASHto_DASHfloat = 144,
  anon_sym_int_DASHto_DASHdouble = 145,
  anon_sym_long_DASHto_DASHint = 146,
  anon_sym_long_DASHto_DASHfloat = 147,
  anon_sym_long_DASHto_DASHdouble = 148,
  anon_sym_float_DASHto_DASHint = 149,
  anon_sym_float_DASHto_DASHlong = 150,
  anon_sym_float_DASHto_DASHdouble = 151,
  anon_sym_double_DASHto_DASHint = 152,
  anon_sym_double_DASHto_DASHlong = 153,
  anon_sym_double_DASHto_DASHfloat = 154,
  anon_sym_int_DASHto_DASHbyte = 155,
  anon_sym_int_DASHto_DASHchar = 156,
  anon_sym_int_DASHto_DASHshort = 157,
  anon_sym_add_DASHint = 158,
  anon_sym_sub_DASHint = 159,
  anon_sym_mul_DASHint = 160,
  anon_sym_div_DASHint = 161,
  anon_sym_rem_DASHint = 162,
  anon_sym_and_DASHint = 163,
  anon_sym_or_DASHint = 164,
  anon_sym_xor_DASHint = 165,
  anon_sym_shl_DASHint = 166,
  anon_sym_shr_DASHint = 167,
  anon_sym_ushr_DASHint = 168,
  anon_sym_add_DASHlong = 169,
  anon_sym_sub_DASHlong = 170,
  anon_sym_mul_DASHlong = 171,
  anon_sym_div_DASHlong = 172,
  anon_sym_rem_DASHlong = 173,
  anon_sym_and_DASHlong = 174,
  anon_sym_or_DASHlong = 175,
  anon_sym_xor_DASHlong = 176,
  anon_sym_shl_DASHlong = 177,
  anon_sym_shr_DASHlong = 178,
  anon_sym_ushr_DASHlong = 179,
  anon_sym_add_DASHfloat = 180,
  anon_sym_sub_DASHfloat = 181,
  anon_sym_mul_DASHfloat = 182,
  anon_sym_div_DASHfloat = 183,
  anon_sym_rem_DASHfloat = 184,
  anon_sym_add_DASHdouble = 185,
  anon_sym_sub_DASHdouble = 186,
  anon_sym_mul_DASHdouble = 187,
  anon_sym_div_DASHdouble = 188,
  anon_sym_rem_DASHdouble = 189,
  anon_sym_add_DASHint_SLASH2addr = 190,
  anon_sym_sub_DASHint_SLASH2addr = 191,
  anon_sym_mul_DASHint_SLASH2addr = 192,
  anon_sym_div_DASHint_SLASH2addr = 193,
  anon_sym_rem_DASHint_SLASH2addr = 194,
  anon_sym_and_DASHint_SLASH2addr = 195,
  anon_sym_or_DASHint_SLASH2addr = 196,
  anon_sym_xor_DASHint_SLASH2addr = 197,
  anon_sym_shl_DASHint_SLASH2addr = 198,
  anon_sym_shr_DASHint_SLASH2addr = 199,
  anon_sym_ushr_DASHint_SLASH2addr = 200,
  anon_sym_add_DASHlong_SLASH2addr = 201,
  anon_sym_sub_DASHlong_SLASH2addr = 202,
  anon_sym_mul_DASHlong_SLASH2addr = 203,
  anon_sym_div_DASHlong_SLASH2addr = 204,
  anon_sym_rem_DASHlong_SLASH2addr = 205,
  anon_sym_and_DASHlong_SLASH2addr = 206,
  anon_sym_or_DASHlong_SLASH2addr = 207,
  anon_sym_xor_DASHlong_SLASH2addr = 208,
  anon_sym_shl_DASHlong_SLASH2addr = 209,
  anon_sym_shr_DASHlong_SLASH2addr = 210,
  anon_sym_ushr_DASHlong_SLASH2addr = 211,
  anon_sym_add_DASHfloat_SLASH2addr = 212,
  anon_sym_sub_DASHfloat_SLASH2addr = 213,
  anon_sym_mul_DASHfloat_SLASH2addr = 214,
  anon_sym_div_DASHfloat_SLASH2addr = 215,
  anon_sym_rem_DASHfloat_SLASH2addr = 216,
  anon_sym_add_DASHdouble_SLASH2addr = 217,
  anon_sym_sub_DASHdouble_SLASH2addr = 218,
  anon_sym_mul_DASHdouble_SLASH2addr = 219,
  anon_sym_div_DASHdouble_SLASH2addr = 220,
  anon_sym_rem_DASHdouble_SLASH2addr = 221,
  anon_sym_add_DASHint_SLASHlit16 = 222,
  anon_sym_sub_DASHint_SLASHlit16 = 223,
  anon_sym_mul_DASHint_SLASHlit16 = 224,
  anon_sym_div_DASHint_SLASHlit16 = 225,
  anon_sym_rem_DASHint_SLASHlit16 = 226,
  anon_sym_and_DASHint_SLASHlit16 = 227,
  anon_sym_or_DASHint_SLASHlit16 = 228,
  anon_sym_xor_DASHint_SLASHlit16 = 229,
  anon_sym_add_DASHint_SLASHlit8 = 230,
  anon_sym_sub_DASHint_SLASHlit8 = 231,
  anon_sym_mul_DASHint_SLASHlit8 = 232,
  anon_sym_div_DASHint_SLASHlit8 = 233,
  anon_sym_rem_DASHint_SLASHlit8 = 234,
  anon_sym_and_DASHint_SLASHlit8 = 235,
  anon_sym_or_DASHint_SLASHlit8 = 236,
  anon_sym_xor_DASHint_SLASHlit8 = 237,
  anon_sym_shl_DASHint_SLASHlit8 = 238,
  anon_sym_shr_DASHint_SLASHlit8 = 239,
  anon_sym_ushr_DASHint_SLASHlit8 = 240,
  anon_sym_execute_DASHinline = 241,
  anon_sym_invoke_DASHdirect_DASHempty = 242,
  anon_sym_iget_DASHquick = 243,
  anon_sym_iget_DASHwide_DASHquick = 244,
  anon_sym_iget_DASHobject_DASHquick = 245,
  anon_sym_iput_DASHquick = 246,
  anon_sym_iput_DASHwide_DASHquick = 247,
  anon_sym_iput_DASHobject_DASHquick = 248,
  anon_sym_invoke_DASHvirtual_DASHquick = 249,
  anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange = 250,
  anon_sym_invoke_DASHsuper_DASHquick = 251,
  anon_sym_invoke_DASHsuper_DASHquick_SLASHrange = 252,
  anon_sym_rsub_DASHint = 253,
  anon_sym_rsub_DASHint_SLASHlit8 = 254,
  anon_sym_DOTline = 255,
  anon_sym_DOTlocals = 256,
  anon_sym_DOTcatch = 257,
  anon_sym_LBRACE = 258,
  anon_sym_DOT_DOT = 259,
  anon_sym_RBRACE = 260,
  anon_sym_DOTcatchall = 261,
  anon_sym_DOTpacked_DASHswitch = 262,
  anon_sym_DOTendpacked_DASHswitch = 263,
  anon_sym_DOTsparse_DASHswitch = 264,
  anon_sym_DASH_GT = 265,
  anon_sym_DOTendsparse_DASHswitch = 266,
  anon_sym_DOTarray_DASHdata = 267,
  anon_sym_DOTendarray_DASHdata = 268,
  sym_class_identifier = 269,
  aux_sym_field_identifier_token1 = 270,
  anon_sym_LTclinit_GT_LPAREN = 271,
  anon_sym_LTinit_GT_LPAREN = 272,
  aux_sym_method_identifier_token1 = 273,
  anon_sym_RPAREN = 274,
  anon_sym_LBRACK = 275,
  anon_sym_V = 276,
  anon_sym_Z = 277,
  anon_sym_B = 278,
  anon_sym_S = 279,
  anon_sym_C = 280,
  anon_sym_I = 281,
  anon_sym_J = 282,
  anon_sym_F = 283,
  anon_sym_D = 284,
  anon_sym_public = 285,
  anon_sym_private = 286,
  anon_sym_protected = 287,
  anon_sym_static = 288,
  anon_sym_final = 289,
  anon_sym_synchronized = 290,
  anon_sym_volatile = 291,
  anon_sym_transient = 292,
  anon_sym_native = 293,
  anon_sym_interface = 294,
  anon_sym_abstract = 295,
  anon_sym_bridge = 296,
  anon_sym_synthetic = 297,
  anon_sym_enum = 298,
  anon_sym_constructor = 299,
  anon_sym_varargs = 300,
  anon_sym_declared_DASHsynchronized = 301,
  anon_sym_annotation = 302,
  sym_comment = 303,
  anon_sym_DOTenum = 304,
  sym_variable = 305,
  sym_parameter = 306,
  aux_sym_number_literal_token1 = 307,
  aux_sym_number_literal_token2 = 308,
  sym_string_literal = 309,
  anon_sym_true = 310,
  anon_sym_false = 311,
  sym_null_literal = 312,
  sym_class_definition = 313,
  sym_class_declaration = 314,
  sym_super_declaration = 315,
  sym_source_declaration = 316,
  sym_implements_declaration = 317,
  sym_field_definition = 318,
  sym_field_declaration = 319,
  sym_method_definition = 320,
  sym_method_declaration = 321,
  sym_annotation_definition = 322,
  sym_annotation_declaration = 323,
  sym_annotation_property = 324,
  sym_annotation_value = 325,
  sym_subannotation_definition = 326,
  sym_subannotation_declaration = 327,
  sym_param_definition = 328,
  sym_param_declaration = 329,
  sym__code_line = 330,
  sym_statement = 331,
  sym_opcode = 332,
  sym__statement_argument = 333,
  sym__declaration = 334,
  sym_line_declaration = 335,
  sym_locals_declaration = 336,
  sym_catch_declaration = 337,
  sym_catchall_declaration = 338,
  sym_packed_switch_declaration = 339,
  sym_sparse_switch_declaration = 340,
  sym_array_data_declaration = 341,
  sym__identifier = 342,
  sym_field_identifier = 343,
  sym_method_identifier = 344,
  sym_full_field_identifier = 345,
  sym_full_method_identifier = 346,
  sym__type = 347,
  sym_array_type = 348,
  sym_primitive_type = 349,
  sym_access_modifiers = 350,
  sym_enum_reference = 351,
  sym_list = 352,
  sym_range = 353,
  sym_number_literal = 354,
  sym_boolean_literal = 355,
  aux_sym_class_definition_repeat1 = 356,
  aux_sym_class_definition_repeat2 = 357,
  aux_sym_class_definition_repeat3 = 358,
  aux_sym_class_definition_repeat4 = 359,
  aux_sym_method_definition_repeat1 = 360,
  aux_sym_annotation_definition_repeat1 = 361,
  aux_sym_statement_repeat1 = 362,
  aux_sym_packed_switch_declaration_repeat1 = 363,
  aux_sym_sparse_switch_declaration_repeat1 = 364,
  aux_sym_array_data_declaration_repeat1 = 365,
  aux_sym_method_identifier_repeat1 = 366,
  aux_sym_access_modifiers_repeat1 = 367,
  aux_sym_list_repeat1 = 368,
  alias_sym_code_block = 369,
  alias_sym_parameters = 370,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTclass] = ".class",
  [anon_sym_DOTsuper] = ".super",
  [anon_sym_DOTsource] = ".source",
  [anon_sym_DOTimplements] = ".implements",
  [anon_sym_DOTfield] = ".field",
  [anon_sym_EQ] = "=",
  [sym_end_field] = "end_field",
  [anon_sym_DOTmethod] = ".method",
  [sym_end_method] = "end_method",
  [anon_sym_DOTannotation] = ".annotation",
  [anon_sym_system] = "system",
  [anon_sym_build] = "build",
  [anon_sym_runtime] = "runtime",
  [sym_annotation_key] = "annotation_key",
  [sym_end_annotation] = "end_annotation",
  [anon_sym_DOTsubannotation] = ".subannotation",
  [sym_end_subannotation] = "end_subannotation",
  [anon_sym_DOTparam] = ".param",
  [sym_end_param] = "end_param",
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
  [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = "filled-new-array/range",
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
  [anon_sym_invoke_DASHinterface_SLASHrange] = "invoke-interface/range",
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
  [anon_sym_rsub_DASHint] = "rsub-int",
  [anon_sym_rsub_DASHint_SLASHlit8] = "rsub-int/lit8",
  [anon_sym_DOTline] = ".line",
  [anon_sym_DOTlocals] = ".locals",
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
  [anon_sym_LTclinit_GT_LPAREN] = "<clinit>(",
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
  [anon_sym_enum] = "enum",
  [anon_sym_constructor] = "constructor",
  [anon_sym_varargs] = "varargs",
  [anon_sym_declared_DASHsynchronized] = "declared-synchronized",
  [anon_sym_annotation] = "annotation",
  [sym_comment] = "comment",
  [anon_sym_DOTenum] = ".enum",
  [sym_variable] = "variable",
  [sym_parameter] = "parameter",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [aux_sym_number_literal_token2] = "number_literal_token2",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_literal] = "null_literal",
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
  [sym_subannotation_definition] = "subannotation_definition",
  [sym_subannotation_declaration] = "subannotation_declaration",
  [sym_param_definition] = "param_definition",
  [sym_param_declaration] = "param_declaration",
  [sym__code_line] = "_code_line",
  [sym_statement] = "statement",
  [sym_opcode] = "opcode",
  [sym__statement_argument] = "_statement_argument",
  [sym__declaration] = "_declaration",
  [sym_line_declaration] = "line_declaration",
  [sym_locals_declaration] = "locals_declaration",
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
  [sym_range] = "range",
  [sym_number_literal] = "number_literal",
  [sym_boolean_literal] = "boolean_literal",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_end_field] = sym_end_field,
  [anon_sym_DOTmethod] = anon_sym_DOTmethod,
  [sym_end_method] = sym_end_method,
  [anon_sym_DOTannotation] = anon_sym_DOTannotation,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_build] = anon_sym_build,
  [anon_sym_runtime] = anon_sym_runtime,
  [sym_annotation_key] = sym_annotation_key,
  [sym_end_annotation] = sym_end_annotation,
  [anon_sym_DOTsubannotation] = anon_sym_DOTsubannotation,
  [sym_end_subannotation] = sym_end_subannotation,
  [anon_sym_DOTparam] = anon_sym_DOTparam,
  [sym_end_param] = sym_end_param,
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
  [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = anon_sym_filled_DASHnew_DASHarray_SLASHrange,
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
  [anon_sym_invoke_DASHinterface_SLASHrange] = anon_sym_invoke_DASHinterface_SLASHrange,
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
  [anon_sym_rsub_DASHint] = anon_sym_rsub_DASHint,
  [anon_sym_rsub_DASHint_SLASHlit8] = anon_sym_rsub_DASHint_SLASHlit8,
  [anon_sym_DOTline] = anon_sym_DOTline,
  [anon_sym_DOTlocals] = anon_sym_DOTlocals,
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
  [anon_sym_LTclinit_GT_LPAREN] = anon_sym_LTclinit_GT_LPAREN,
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
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_varargs] = anon_sym_varargs,
  [anon_sym_declared_DASHsynchronized] = anon_sym_declared_DASHsynchronized,
  [anon_sym_annotation] = anon_sym_annotation,
  [sym_comment] = sym_comment,
  [anon_sym_DOTenum] = anon_sym_DOTenum,
  [sym_variable] = sym_variable,
  [sym_parameter] = sym_parameter,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [aux_sym_number_literal_token2] = aux_sym_number_literal_token2,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_literal] = sym_null_literal,
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
  [sym_subannotation_definition] = sym_subannotation_definition,
  [sym_subannotation_declaration] = sym_subannotation_declaration,
  [sym_param_definition] = sym_param_definition,
  [sym_param_declaration] = sym_param_declaration,
  [sym__code_line] = sym__code_line,
  [sym_statement] = sym_statement,
  [sym_opcode] = sym_opcode,
  [sym__statement_argument] = sym__statement_argument,
  [sym__declaration] = sym__declaration,
  [sym_line_declaration] = sym_line_declaration,
  [sym_locals_declaration] = sym_locals_declaration,
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
  [sym_range] = sym_range,
  [sym_number_literal] = sym_number_literal,
  [sym_boolean_literal] = sym_boolean_literal,
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
  [anon_sym_EQ] = {
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
  [sym_annotation_key] = {
    .visible = true,
    .named = true,
  },
  [sym_end_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTsubannotation] = {
    .visible = true,
    .named = false,
  },
  [sym_end_subannotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTparam] = {
    .visible = true,
    .named = false,
  },
  [sym_end_param] = {
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
  [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = {
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
  [anon_sym_invoke_DASHinterface_SLASHrange] = {
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
  [anon_sym_rsub_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rsub_DASHint_SLASHlit8] = {
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
  [anon_sym_LTclinit_GT_LPAREN] = {
    .visible = true,
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declared_DASHsynchronized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_literal] = {
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
  [sym_subannotation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_subannotation_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_param_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_param_declaration] = {
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
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
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
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_return_type, 2},
  [1] =
    {field_element_type, 1},
  [2] =
    {field_key, 0},
    {field_value, 2},
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
      if (eof) ADVANCE(1591);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == ')') ADVANCE(1865);
      if (lookahead == ',') ADVANCE(1612);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '0') ADVANCE(1951);
      if (lookahead == ':') ADVANCE(1588);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(1597);
      if (lookahead == 'B') ADVANCE(1871);
      if (lookahead == 'C') ADVANCE(1875);
      if (lookahead == 'D') ADVANCE(1883);
      if (lookahead == 'F') ADVANCE(1881);
      if (lookahead == 'I') ADVANCE(1877);
      if (lookahead == 'J') ADVANCE(1879);
      if (lookahead == 'L') ADVANCE(1589);
      if (lookahead == 'S') ADVANCE(1873);
      if (lookahead == 'V') ADVANCE(1867);
      if (lookahead == 'Z') ADVANCE(1869);
      if (lookahead == '[') ADVANCE(1866);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'b') ADVANCE(1317);
      if (lookahead == 'c') ADVANCE(865);
      if (lookahead == 'd') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1080);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'g') ADVANCE(1161);
      if (lookahead == 'i') ADVANCE(818);
      if (lookahead == 'l') ADVANCE(1167);
      if (lookahead == 'm') ADVANCE(1162);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(1319);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(705);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead == 't') ADVANCE(866);
      if (lookahead == 'u') ADVANCE(1368);
      if (lookahead == 'v') ADVANCE(442);
      if (lookahead == 'x') ADVANCE(1242);
      if (lookahead == '{') ADVANCE(1849);
      if (lookahead == '}') ADVANCE(1851);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1613);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == ',') ADVANCE(1612);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '0') ADVANCE(1948);
      if (lookahead == ':') ADVANCE(1588);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == 'B') ADVANCE(1872);
      if (lookahead == 'C') ADVANCE(1876);
      if (lookahead == 'D') ADVANCE(1884);
      if (lookahead == 'F') ADVANCE(1882);
      if (lookahead == 'I') ADVANCE(1878);
      if (lookahead == 'J') ADVANCE(1880);
      if (lookahead == 'L') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(1874);
      if (lookahead == 'V') ADVANCE(1868);
      if (lookahead == 'Z') ADVANCE(1870);
      if (lookahead == '[') ADVANCE(1866);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '{') ADVANCE(1849);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1949);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(503);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(508);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(786);
      if (lookahead == '0') ADVANCE(1948);
      if (lookahead == ':') ADVANCE(1588);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == 'B') ADVANCE(1872);
      if (lookahead == 'C') ADVANCE(1876);
      if (lookahead == 'D') ADVANCE(1884);
      if (lookahead == 'F') ADVANCE(1882);
      if (lookahead == 'I') ADVANCE(1878);
      if (lookahead == 'J') ADVANCE(1880);
      if (lookahead == 'L') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(1874);
      if (lookahead == 'V') ADVANCE(1868);
      if (lookahead == 'Z') ADVANCE(1870);
      if (lookahead == '[') ADVANCE(1866);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '{') ADVANCE(1849);
      if (lookahead == '}') ADVANCE(1851);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1949);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1954);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == 'L') ADVANCE(1589);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'b') ADVANCE(1316);
      if (lookahead == 'c') ADVANCE(1235);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(918);
      if (lookahead == 'i') ADVANCE(1153);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(1318);
      if (lookahead == 's') ADVANCE(1455);
      if (lookahead == 't') ADVANCE(1332);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'v') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1863);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(1862);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '-') ADVANCE(1375);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == ';') ADVANCE(1860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1956);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1958);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(1960);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1941);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1939);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1944);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 36:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 37:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 43:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(1886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 44:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(1895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(1922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 49:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 50:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 51:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'd') ADVANCE(1892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'd') ADVANCE(1901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(1919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(1910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 58:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(1889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 59:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(1904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(1913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 62:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 65:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 77:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 79:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 80:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 83:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'l') ADVANCE(1898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 86:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 89:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'm') ADVANCE(1925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 91:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(1935);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 98:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 99:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 103:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(1928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 112:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 's') ADVANCE(1931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(1916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(1907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'v') ADVANCE(35);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == 'z') ADVANCE(65);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(706);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(699);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(513);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(701);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(702);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(822);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(1374);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(1375);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(1375);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(1166);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(1121);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(761);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(1474);
      if (lookahead == 'e') ADVANCE(1272);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(1009);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(1505);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(1511);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(1512);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(694);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(671);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(951);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(695);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(696);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(957);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(697);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(958);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(1387);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(1389);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(1390);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(1391);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(1392);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(700);
      END_STATE();
    case 189:
      if (lookahead == '.') ADVANCE(1850);
      if (lookahead == 'a') ADVANCE(1086);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(1062);
      if (lookahead == 'f') ADVANCE(892);
      if (lookahead == 'i') ADVANCE(1054);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'm') ADVANCE(765);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 's') ADVANCE(1168);
      END_STATE();
    case 190:
      if (lookahead == '0') ADVANCE(1951);
      if (lookahead == '>') ADVANCE(1856);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 191:
      if (lookahead == '0') ADVANCE(1951);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 192:
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '3') ADVANCE(211);
      END_STATE();
    case 193:
      if (lookahead == '1') ADVANCE(246);
      if (lookahead == 'f') ADVANCE(1327);
      END_STATE();
    case 194:
      if (lookahead == '1') ADVANCE(247);
      if (lookahead == '4') ADVANCE(1632);
      if (lookahead == 'h') ADVANCE(906);
      END_STATE();
    case 195:
      if (lookahead == '1') ADVANCE(248);
      END_STATE();
    case 196:
      if (lookahead == '1') ADVANCE(249);
      END_STATE();
    case 197:
      if (lookahead == '1') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(1343);
      END_STATE();
    case 198:
      if (lookahead == '1') ADVANCE(251);
      if (lookahead == '8') ADVANCE(1827);
      END_STATE();
    case 199:
      if (lookahead == '1') ADVANCE(252);
      if (lookahead == '8') ADVANCE(1821);
      END_STATE();
    case 200:
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '8') ADVANCE(1826);
      END_STATE();
    case 201:
      if (lookahead == '1') ADVANCE(254);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == 'h') ADVANCE(967);
      END_STATE();
    case 202:
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == '8') ADVANCE(1824);
      END_STATE();
    case 203:
      if (lookahead == '1') ADVANCE(256);
      if (lookahead == '8') ADVANCE(1823);
      END_STATE();
    case 204:
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '8') ADVANCE(1825);
      END_STATE();
    case 205:
      if (lookahead == '1') ADVANCE(258);
      if (lookahead == '8') ADVANCE(1822);
      END_STATE();
    case 206:
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '8') ADVANCE(1828);
      END_STATE();
    case 207:
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(1353);
      END_STATE();
    case 208:
      if (lookahead == '1') ADVANCE(261);
      END_STATE();
    case 209:
      if (lookahead == '1') ADVANCE(262);
      END_STATE();
    case 210:
      if (lookahead == '1') ADVANCE(263);
      END_STATE();
    case 211:
      if (lookahead == '2') ADVANCE(1656);
      END_STATE();
    case 212:
      if (lookahead == '2') ADVANCE(1637);
      END_STATE();
    case 213:
      if (lookahead == '2') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(919);
      END_STATE();
    case 214:
      if (lookahead == '2') ADVANCE(457);
      if (lookahead == 'l') ADVANCE(920);
      END_STATE();
    case 215:
      if (lookahead == '2') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(921);
      END_STATE();
    case 216:
      if (lookahead == '2') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 217:
      if (lookahead == '2') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 218:
      if (lookahead == '2') ADVANCE(472);
      END_STATE();
    case 219:
      if (lookahead == '2') ADVANCE(475);
      if (lookahead == 'l') ADVANCE(924);
      END_STATE();
    case 220:
      if (lookahead == '2') ADVANCE(477);
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 221:
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(926);
      END_STATE();
    case 222:
      if (lookahead == '2') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 223:
      if (lookahead == '2') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 224:
      if (lookahead == '2') ADVANCE(482);
      END_STATE();
    case 225:
      if (lookahead == '2') ADVANCE(483);
      END_STATE();
    case 226:
      if (lookahead == '2') ADVANCE(484);
      END_STATE();
    case 227:
      if (lookahead == '2') ADVANCE(485);
      END_STATE();
    case 228:
      if (lookahead == '2') ADVANCE(486);
      END_STATE();
    case 229:
      if (lookahead == '2') ADVANCE(487);
      END_STATE();
    case 230:
      if (lookahead == '2') ADVANCE(488);
      END_STATE();
    case 231:
      if (lookahead == '2') ADVANCE(489);
      END_STATE();
    case 232:
      if (lookahead == '2') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 233:
      if (lookahead == '2') ADVANCE(491);
      END_STATE();
    case 234:
      if (lookahead == '2') ADVANCE(492);
      END_STATE();
    case 235:
      if (lookahead == '2') ADVANCE(493);
      END_STATE();
    case 236:
      if (lookahead == '2') ADVANCE(494);
      END_STATE();
    case 237:
      if (lookahead == '2') ADVANCE(495);
      END_STATE();
    case 238:
      if (lookahead == '2') ADVANCE(496);
      END_STATE();
    case 239:
      if (lookahead == '2') ADVANCE(497);
      END_STATE();
    case 240:
      if (lookahead == '2') ADVANCE(498);
      END_STATE();
    case 241:
      if (lookahead == '2') ADVANCE(499);
      END_STATE();
    case 242:
      if (lookahead == '2') ADVANCE(500);
      END_STATE();
    case 243:
      if (lookahead == '2') ADVANCE(501);
      END_STATE();
    case 244:
      if (lookahead == '2') ADVANCE(502);
      END_STATE();
    case 245:
      if (lookahead == '6') ADVANCE(1655);
      END_STATE();
    case 246:
      if (lookahead == '6') ADVANCE(1617);
      END_STATE();
    case 247:
      if (lookahead == '6') ADVANCE(1633);
      END_STATE();
    case 248:
      if (lookahead == '6') ADVANCE(1616);
      END_STATE();
    case 249:
      if (lookahead == '6') ADVANCE(1635);
      END_STATE();
    case 250:
      if (lookahead == '6') ADVANCE(1620);
      END_STATE();
    case 251:
      if (lookahead == '6') ADVANCE(1819);
      END_STATE();
    case 252:
      if (lookahead == '6') ADVANCE(1813);
      END_STATE();
    case 253:
      if (lookahead == '6') ADVANCE(1818);
      END_STATE();
    case 254:
      if (lookahead == '6') ADVANCE(1636);
      END_STATE();
    case 255:
      if (lookahead == '6') ADVANCE(1816);
      END_STATE();
    case 256:
      if (lookahead == '6') ADVANCE(1815);
      END_STATE();
    case 257:
      if (lookahead == '6') ADVANCE(1817);
      END_STATE();
    case 258:
      if (lookahead == '6') ADVANCE(1814);
      END_STATE();
    case 259:
      if (lookahead == '6') ADVANCE(1820);
      END_STATE();
    case 260:
      if (lookahead == '6') ADVANCE(1623);
      END_STATE();
    case 261:
      if (lookahead == '6') ADVANCE(1619);
      END_STATE();
    case 262:
      if (lookahead == '6') ADVANCE(1639);
      END_STATE();
    case 263:
      if (lookahead == '6') ADVANCE(1622);
      END_STATE();
    case 264:
      if (lookahead == '8') ADVANCE(1829);
      END_STATE();
    case 265:
      if (lookahead == '8') ADVANCE(1830);
      END_STATE();
    case 266:
      if (lookahead == '8') ADVANCE(1845);
      END_STATE();
    case 267:
      if (lookahead == '8') ADVANCE(1831);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'b') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'b') ADVANCE(325);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(1887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(1896);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(1923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'd') ADVANCE(1893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'd') ADVANCE(1902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(1914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'g') ADVANCE(356);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(1899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'm') ADVANCE(1926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(1936);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(1929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 's') ADVANCE(1932);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(1917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(1908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 365:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 366:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 367:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 368:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 369:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 370:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 371:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 372:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 373:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 374:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'y') ADVANCE(332);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 375:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 376:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'u') ADVANCE(329);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 377:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 378:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'v') ADVANCE(297);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 379:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'v') ADVANCE(275);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 380:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'z') ADVANCE(305);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      if (lookahead == ';') ADVANCE(1860);
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      if (lookahead == '>') ADVANCE(1856);
      END_STATE();
    case 384:
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 385:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(1578);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1858);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1859);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(1652);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(1003);
      if (lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(891);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1942);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(1468);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(1468);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == 'o') ADVANCE(1259);
      if (lookahead == 'u') ADVANCE(1004);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(1465);
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(1575);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(1341);
      if (lookahead == 'u') ADVANCE(1400);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(1377);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(1050);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(1576);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(1320);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(1082);
      if (lookahead == 'u') ADVANCE(708);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(1053);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(1157);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(611);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(1345);
      if (lookahead == 'i') ADVANCE(1139);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(1137);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(993);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(1275);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(1276);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(1277);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1515);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(995);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(1279);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(1487);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(1280);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(1069);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(1070);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(1071);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(1072);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(1073);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(1074);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(1418);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(1419);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(1136);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(1420);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(1421);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(1422);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(1423);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(1428);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1429);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(1446);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(1451);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(1453);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(1579);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(1323);
      if (lookahead == 'o') ADVANCE(1033);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(1323);
      if (lookahead == 'o') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(1001);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(1381);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(1484);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(1504);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(1486);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(1503);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(1488);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(1475);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(1514);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(1346);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(1140);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(1582);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(1516);
      END_STATE();
    case 463:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(1143);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(1583);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(1519);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(1145);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(1147);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(1523);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(1148);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(1525);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 476:
      if (lookahead == 'a') ADVANCE(1149);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(1150);
      END_STATE();
    case 479:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 481:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 482:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 484:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 488:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 490:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 493:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 495:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 497:
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 498:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 499:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 500:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 501:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 502:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 503:
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == 'f') ADVANCE(933);
      if (lookahead == 'm') ADVANCE(788);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == 's') ADVANCE(1264);
      END_STATE();
    case 504:
      if (lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'e') ADVANCE(1102);
      if (lookahead == 'f') ADVANCE(892);
      if (lookahead == 'm') ADVANCE(765);
      END_STATE();
    case 505:
      if (lookahead == 'a') ADVANCE(1366);
      END_STATE();
    case 506:
      if (lookahead == 'a') ADVANCE(1160);
      END_STATE();
    case 507:
      if (lookahead == 'a') ADVANCE(1367);
      END_STATE();
    case 508:
      if (lookahead == 'a') ADVANCE(1158);
      if (lookahead == 'f') ADVANCE(933);
      if (lookahead == 's') ADVANCE(1533);
      END_STATE();
    case 509:
      if (lookahead == 'b') ADVANCE(1171);
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead == 'w') ADVANCE(897);
      END_STATE();
    case 510:
      if (lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 511:
      if (lookahead == 'b') ADVANCE(1376);
      if (lookahead == 'd') ADVANCE(608);
      if (lookahead == 'g') ADVANCE(769);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 'p') ADVANCE(1535);
      if (lookahead == 'r') ADVANCE(1321);
      END_STATE();
    case 512:
      if (lookahead == 'b') ADVANCE(1376);
      if (lookahead == 'n') ADVANCE(1133);
      END_STATE();
    case 513:
      if (lookahead == 'b') ADVANCE(1581);
      if (lookahead == 'c') ADVANCE(880);
      if (lookahead == 'd') ADVANCE(1255);
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == 's') ADVANCE(887);
      END_STATE();
    case 514:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 515:
      if (lookahead == 'b') ADVANCE(406);
      END_STATE();
    case 516:
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(773);
      END_STATE();
    case 517:
      if (lookahead == 'b') ADVANCE(1165);
      END_STATE();
    case 518:
      if (lookahead == 'b') ADVANCE(1002);
      END_STATE();
    case 519:
      if (lookahead == 'b') ADVANCE(1233);
      if (lookahead == 'c') ADVANCE(875);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(881);
      if (lookahead == 'w') ADVANCE(935);
      END_STATE();
    case 520:
      if (lookahead == 'b') ADVANCE(1007);
      END_STATE();
    case 521:
      if (lookahead == 'b') ADVANCE(1236);
      if (lookahead == 'c') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == 'q') ADVANCE(1543);
      if (lookahead == 's') ADVANCE(883);
      if (lookahead == 'w') ADVANCE(940);
      END_STATE();
    case 522:
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'c') ADVANCE(877);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 'q') ADVANCE(1544);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead == 'w') ADVANCE(943);
      END_STATE();
    case 523:
      if (lookahead == 'b') ADVANCE(1238);
      if (lookahead == 'c') ADVANCE(878);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == 's') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(948);
      END_STATE();
    case 524:
      if (lookahead == 'b') ADVANCE(1011);
      END_STATE();
    case 525:
      if (lookahead == 'b') ADVANCE(1239);
      if (lookahead == 'c') ADVANCE(879);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 's') ADVANCE(886);
      if (lookahead == 'w') ADVANCE(950);
      END_STATE();
    case 526:
      if (lookahead == 'b') ADVANCE(1013);
      END_STATE();
    case 527:
      if (lookahead == 'b') ADVANCE(1014);
      END_STATE();
    case 528:
      if (lookahead == 'b') ADVANCE(1015);
      END_STATE();
    case 529:
      if (lookahead == 'b') ADVANCE(1016);
      END_STATE();
    case 530:
      if (lookahead == 'b') ADVANCE(1017);
      END_STATE();
    case 531:
      if (lookahead == 'b') ADVANCE(1018);
      END_STATE();
    case 532:
      if (lookahead == 'b') ADVANCE(1019);
      END_STATE();
    case 533:
      if (lookahead == 'b') ADVANCE(1020);
      END_STATE();
    case 534:
      if (lookahead == 'b') ADVANCE(1021);
      END_STATE();
    case 535:
      if (lookahead == 'b') ADVANCE(1022);
      END_STATE();
    case 536:
      if (lookahead == 'b') ADVANCE(971);
      END_STATE();
    case 537:
      if (lookahead == 'b') ADVANCE(972);
      END_STATE();
    case 538:
      if (lookahead == 'b') ADVANCE(973);
      END_STATE();
    case 539:
      if (lookahead == 'b') ADVANCE(974);
      END_STATE();
    case 540:
      if (lookahead == 'b') ADVANCE(975);
      END_STATE();
    case 541:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 542:
      if (lookahead == 'b') ADVANCE(976);
      END_STATE();
    case 543:
      if (lookahead == 'b') ADVANCE(977);
      END_STATE();
    case 544:
      if (lookahead == 'b') ADVANCE(978);
      END_STATE();
    case 545:
      if (lookahead == 'b') ADVANCE(506);
      END_STATE();
    case 546:
      if (lookahead == 'c') ADVANCE(999);
      if (lookahead == 'i') ADVANCE(1083);
      END_STATE();
    case 547:
      if (lookahead == 'c') ADVANCE(988);
      END_STATE();
    case 548:
      if (lookahead == 'c') ADVANCE(1885);
      END_STATE();
    case 549:
      if (lookahead == 'c') ADVANCE(1894);
      END_STATE();
    case 550:
      if (lookahead == 'c') ADVANCE(1921);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(1721);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(987);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(869);
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(979);
      END_STATE();
    case 555:
      if (lookahead == 'c') ADVANCE(980);
      END_STATE();
    case 556:
      if (lookahead == 'c') ADVANCE(857);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(981);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(982);
      END_STATE();
    case 559:
      if (lookahead == 'c') ADVANCE(1024);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(983);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(984);
      END_STATE();
    case 563:
      if (lookahead == 'c') ADVANCE(859);
      END_STATE();
    case 564:
      if (lookahead == 'c') ADVANCE(985);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(860);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(986);
      END_STATE();
    case 567:
      if (lookahead == 'c') ADVANCE(861);
      END_STATE();
    case 568:
      if (lookahead == 'c') ADVANCE(862);
      END_STATE();
    case 569:
      if (lookahead == 'c') ADVANCE(863);
      END_STATE();
    case 570:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 571:
      if (lookahead == 'c') ADVANCE(864);
      END_STATE();
    case 572:
      if (lookahead == 'c') ADVANCE(1034);
      if (lookahead == 's') ADVANCE(1481);
      if (lookahead == 'w') ADVANCE(953);
      END_STATE();
    case 573:
      if (lookahead == 'c') ADVANCE(717);
      END_STATE();
    case 574:
      if (lookahead == 'c') ADVANCE(782);
      END_STATE();
    case 575:
      if (lookahead == 'c') ADVANCE(1491);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(1415);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 578:
      if (lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 579:
      if (lookahead == 'c') ADVANCE(746);
      END_STATE();
    case 580:
      if (lookahead == 'c') ADVANCE(1435);
      END_STATE();
    case 581:
      if (lookahead == 'c') ADVANCE(751);
      END_STATE();
    case 582:
      if (lookahead == 'c') ADVANCE(1436);
      END_STATE();
    case 583:
      if (lookahead == 'c') ADVANCE(1437);
      END_STATE();
    case 584:
      if (lookahead == 'c') ADVANCE(1438);
      END_STATE();
    case 585:
      if (lookahead == 'c') ADVANCE(1440);
      END_STATE();
    case 586:
      if (lookahead == 'c') ADVANCE(1442);
      END_STATE();
    case 587:
      if (lookahead == 'c') ADVANCE(1444);
      END_STATE();
    case 588:
      if (lookahead == 'c') ADVANCE(1450);
      END_STATE();
    case 589:
      if (lookahead == 'c') ADVANCE(1452);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(1454);
      END_STATE();
    case 591:
      if (lookahead == 'c') ADVANCE(1539);
      END_STATE();
    case 592:
      if (lookahead == 'c') ADVANCE(1506);
      END_STATE();
    case 593:
      if (lookahead == 'c') ADVANCE(882);
      END_STATE();
    case 594:
      if (lookahead == 'c') ADVANCE(990);
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 595:
      if (lookahead == 'c') ADVANCE(991);
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 596:
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(1049);
      END_STATE();
    case 597:
      if (lookahead == 'd') ADVANCE(1603);
      END_STATE();
    case 598:
      if (lookahead == 'd') ADVANCE(1596);
      END_STATE();
    case 599:
      if (lookahead == 'd') ADVANCE(1599);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(1891);
      END_STATE();
    case 601:
      if (lookahead == 'd') ADVANCE(1598);
      END_STATE();
    case 602:
      if (lookahead == 'd') ADVANCE(1600);
      END_STATE();
    case 603:
      if (lookahead == 'd') ADVANCE(1628);
      END_STATE();
    case 604:
      if (lookahead == 'd') ADVANCE(1900);
      END_STATE();
    case 605:
      if (lookahead == 'd') ADVANCE(1933);
      END_STATE();
    case 606:
      if (lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 607:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 608:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 609:
      if (lookahead == 'd') ADVANCE(1243);
      if (lookahead == 'f') ADVANCE(1035);
      if (lookahead == 'i') ADVANCE(1110);
      if (lookahead == 'l') ADVANCE(1176);
      END_STATE();
    case 610:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 611:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 612:
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 'i') ADVANCE(1141);
      if (lookahead == 's') ADVANCE(1524);
      if (lookahead == 'v') ADVANCE(952);
      END_STATE();
    case 613:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 614:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 615:
      if (lookahead == 'd') ADVANCE(1282);
      END_STATE();
    case 616:
      if (lookahead == 'd') ADVANCE(1283);
      END_STATE();
    case 617:
      if (lookahead == 'd') ADVANCE(1284);
      END_STATE();
    case 618:
      if (lookahead == 'd') ADVANCE(1285);
      END_STATE();
    case 619:
      if (lookahead == 'd') ADVANCE(1287);
      END_STATE();
    case 620:
      if (lookahead == 'd') ADVANCE(722);
      END_STATE();
    case 621:
      if (lookahead == 'd') ADVANCE(1288);
      END_STATE();
    case 622:
      if (lookahead == 'd') ADVANCE(1289);
      END_STATE();
    case 623:
      if (lookahead == 'd') ADVANCE(724);
      END_STATE();
    case 624:
      if (lookahead == 'd') ADVANCE(1290);
      END_STATE();
    case 625:
      if (lookahead == 'd') ADVANCE(1291);
      END_STATE();
    case 626:
      if (lookahead == 'd') ADVANCE(1292);
      END_STATE();
    case 627:
      if (lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 628:
      if (lookahead == 'd') ADVANCE(1293);
      END_STATE();
    case 629:
      if (lookahead == 'd') ADVANCE(1294);
      END_STATE();
    case 630:
      if (lookahead == 'd') ADVANCE(1295);
      END_STATE();
    case 631:
      if (lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 632:
      if (lookahead == 'd') ADVANCE(1296);
      END_STATE();
    case 633:
      if (lookahead == 'd') ADVANCE(1297);
      END_STATE();
    case 634:
      if (lookahead == 'd') ADVANCE(1298);
      END_STATE();
    case 635:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 636:
      if (lookahead == 'd') ADVANCE(1299);
      END_STATE();
    case 637:
      if (lookahead == 'd') ADVANCE(1300);
      END_STATE();
    case 638:
      if (lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 639:
      if (lookahead == 'd') ADVANCE(1301);
      END_STATE();
    case 640:
      if (lookahead == 'd') ADVANCE(1302);
      END_STATE();
    case 641:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 642:
      if (lookahead == 'd') ADVANCE(1303);
      END_STATE();
    case 643:
      if (lookahead == 'd') ADVANCE(1304);
      END_STATE();
    case 644:
      if (lookahead == 'd') ADVANCE(1305);
      END_STATE();
    case 645:
      if (lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 646:
      if (lookahead == 'd') ADVANCE(1306);
      END_STATE();
    case 647:
      if (lookahead == 'd') ADVANCE(1307);
      END_STATE();
    case 648:
      if (lookahead == 'd') ADVANCE(1308);
      END_STATE();
    case 649:
      if (lookahead == 'd') ADVANCE(1309);
      END_STATE();
    case 650:
      if (lookahead == 'd') ADVANCE(1310);
      END_STATE();
    case 651:
      if (lookahead == 'd') ADVANCE(1311);
      END_STATE();
    case 652:
      if (lookahead == 'd') ADVANCE(1312);
      END_STATE();
    case 653:
      if (lookahead == 'd') ADVANCE(1313);
      END_STATE();
    case 654:
      if (lookahead == 'd') ADVANCE(1314);
      END_STATE();
    case 655:
      if (lookahead == 'd') ADVANCE(745);
      END_STATE();
    case 656:
      if (lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 657:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 658:
      if (lookahead == 'd') ADVANCE(617);
      END_STATE();
    case 659:
      if (lookahead == 'd') ADVANCE(618);
      END_STATE();
    case 660:
      if (lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 661:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 662:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 663:
      if (lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 664:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 665:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 666:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 667:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 668:
      if (lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 670:
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 671:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 672:
      if (lookahead == 'd') ADVANCE(633);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 674:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 675:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 676:
      if (lookahead == 'd') ADVANCE(637);
      END_STATE();
    case 677:
      if (lookahead == 'd') ADVANCE(639);
      END_STATE();
    case 678:
      if (lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 679:
      if (lookahead == 'd') ADVANCE(642);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(643);
      END_STATE();
    case 681:
      if (lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 682:
      if (lookahead == 'd') ADVANCE(646);
      END_STATE();
    case 683:
      if (lookahead == 'd') ADVANCE(647);
      END_STATE();
    case 684:
      if (lookahead == 'd') ADVANCE(648);
      END_STATE();
    case 685:
      if (lookahead == 'd') ADVANCE(649);
      END_STATE();
    case 686:
      if (lookahead == 'd') ADVANCE(650);
      END_STATE();
    case 687:
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 688:
      if (lookahead == 'd') ADVANCE(652);
      END_STATE();
    case 689:
      if (lookahead == 'd') ADVANCE(653);
      END_STATE();
    case 690:
      if (lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 691:
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(1180);
      END_STATE();
    case 692:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 693:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 694:
      if (lookahead == 'd') ADVANCE(1245);
      if (lookahead == 'f') ADVANCE(1037);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'l') ADVANCE(1181);
      END_STATE();
    case 695:
      if (lookahead == 'd') ADVANCE(1247);
      if (lookahead == 'f') ADVANCE(1039);
      if (lookahead == 'i') ADVANCE(1115);
      if (lookahead == 'l') ADVANCE(1182);
      END_STATE();
    case 696:
      if (lookahead == 'd') ADVANCE(1249);
      if (lookahead == 'f') ADVANCE(1040);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == 'l') ADVANCE(1184);
      END_STATE();
    case 697:
      if (lookahead == 'd') ADVANCE(1251);
      if (lookahead == 'f') ADVANCE(1041);
      if (lookahead == 'i') ADVANCE(1118);
      if (lookahead == 'l') ADVANCE(1187);
      END_STATE();
    case 698:
      if (lookahead == 'd') ADVANCE(1252);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'i') ADVANCE(1122);
      if (lookahead == 'l') ADVANCE(1190);
      END_STATE();
    case 699:
      if (lookahead == 'd') ADVANCE(1253);
      if (lookahead == 'f') ADVANCE(1043);
      END_STATE();
    case 700:
      if (lookahead == 'd') ADVANCE(1254);
      if (lookahead == 'f') ADVANCE(1044);
      END_STATE();
    case 701:
      if (lookahead == 'd') ADVANCE(1256);
      if (lookahead == 'f') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1129);
      END_STATE();
    case 702:
      if (lookahead == 'd') ADVANCE(1257);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 703:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1541);
      if (lookahead == 'u') ADVANCE(1135);
      END_STATE();
    case 706:
      if (lookahead == 'e') ADVANCE(1265);
      if (lookahead == 'g') ADVANCE(711);
      if (lookahead == 'l') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(1615);
      END_STATE();
    case 708:
      if (lookahead == 'e') ADVANCE(1955);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(1846);
      END_STATE();
    case 710:
      if (lookahead == 'e') ADVANCE(1957);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(1667);
      if (lookahead == 't') ADVANCE(1668);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(1669);
      if (lookahead == 't') ADVANCE(1666);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(1665);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(1918);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(1909);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(1594);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(1888);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(1604);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(1903);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(1680);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(1677);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(1687);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(1684);
      END_STATE();
    case 725:
      if (lookahead == 'e') ADVANCE(1694);
      END_STATE();
    case 726:
      if (lookahead == 'e') ADVANCE(1691);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(1912);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(1701);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 730:
      if (lookahead == 'e') ADVANCE(1618);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(1708);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(1705);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(1715);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(1712);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(1638);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(1779);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(1733);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(1777);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(1662);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(1661);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(1746);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(1630);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(1648);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(1736);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(1739);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(1742);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(1722);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(1724);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(1725);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(1726);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(1723);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(1651);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(1727);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(1130);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(1263);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(1272);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(1397);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(1378);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(1286);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead == 's') ADVANCE(1562);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(1513);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(1365);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 818:
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(1380);
      if (lookahead == 'p') ADVANCE(1537);
      END_STATE();
    case 819:
      if (lookahead == 'f') ADVANCE(1646);
      END_STATE();
    case 820:
      if (lookahead == 'f') ADVANCE(449);
      END_STATE();
    case 821:
      if (lookahead == 'f') ADVANCE(455);
      END_STATE();
    case 822:
      if (lookahead == 'f') ADVANCE(1047);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 'l') ADVANCE(1197);
      END_STATE();
    case 823:
      if (lookahead == 'g') ADVANCE(1766);
      END_STATE();
    case 824:
      if (lookahead == 'g') ADVANCE(1760);
      END_STATE();
    case 825:
      if (lookahead == 'g') ADVANCE(1765);
      END_STATE();
    case 826:
      if (lookahead == 'g') ADVANCE(1663);
      END_STATE();
    case 827:
      if (lookahead == 'g') ADVANCE(1763);
      END_STATE();
    case 828:
      if (lookahead == 'g') ADVANCE(1762);
      END_STATE();
    case 829:
      if (lookahead == 'g') ADVANCE(1730);
      END_STATE();
    case 830:
      if (lookahead == 'g') ADVANCE(1731);
      END_STATE();
    case 831:
      if (lookahead == 'g') ADVANCE(1764);
      END_STATE();
    case 832:
      if (lookahead == 'g') ADVANCE(1768);
      END_STATE();
    case 833:
      if (lookahead == 'g') ADVANCE(1769);
      END_STATE();
    case 834:
      if (lookahead == 'g') ADVANCE(1761);
      END_STATE();
    case 835:
      if (lookahead == 'g') ADVANCE(1767);
      END_STATE();
    case 836:
      if (lookahead == 'g') ADVANCE(1770);
      END_STATE();
    case 837:
      if (lookahead == 'g') ADVANCE(1734);
      END_STATE();
    case 838:
      if (lookahead == 'g') ADVANCE(1640);
      END_STATE();
    case 839:
      if (lookahead == 'g') ADVANCE(1741);
      END_STATE();
    case 840:
      if (lookahead == 'g') ADVANCE(1744);
      END_STATE();
    case 841:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 842:
      if (lookahead == 'g') ADVANCE(871);
      END_STATE();
    case 843:
      if (lookahead == 'g') ADVANCE(1371);
      END_STATE();
    case 844:
      if (lookahead == 'g') ADVANCE(714);
      END_STATE();
    case 845:
      if (lookahead == 'g') ADVANCE(1471);
      END_STATE();
    case 846:
      if (lookahead == 'g') ADVANCE(753);
      END_STATE();
    case 847:
      if (lookahead == 'g') ADVANCE(754);
      END_STATE();
    case 848:
      if (lookahead == 'g') ADVANCE(755);
      END_STATE();
    case 849:
      if (lookahead == 'g') ADVANCE(756);
      END_STATE();
    case 850:
      if (lookahead == 'g') ADVANCE(757);
      END_STATE();
    case 851:
      if (lookahead == 'g') ADVANCE(758);
      END_STATE();
    case 852:
      if (lookahead == 'g') ADVANCE(759);
      END_STATE();
    case 853:
      if (lookahead == 'g') ADVANCE(760);
      END_STATE();
    case 854:
      if (lookahead == 'g') ADVANCE(776);
      if (lookahead == 'h') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'u') ADVANCE(541);
      if (lookahead == 'y') ADVANCE(1065);
      END_STATE();
    case 855:
      if (lookahead == 'g') ADVANCE(872);
      END_STATE();
    case 856:
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 857:
      if (lookahead == 'h') ADVANCE(1848);
      END_STATE();
    case 858:
      if (lookahead == 'h') ADVANCE(1647);
      END_STATE();
    case 859:
      if (lookahead == 'h') ADVANCE(1657);
      END_STATE();
    case 860:
      if (lookahead == 'h') ADVANCE(1658);
      END_STATE();
    case 861:
      if (lookahead == 'h') ADVANCE(1853);
      END_STATE();
    case 862:
      if (lookahead == 'h') ADVANCE(1855);
      END_STATE();
    case 863:
      if (lookahead == 'h') ADVANCE(1854);
      END_STATE();
    case 864:
      if (lookahead == 'h') ADVANCE(1857);
      END_STATE();
    case 865:
      if (lookahead == 'h') ADVANCE(764);
      if (lookahead == 'm') ADVANCE(1258);
      if (lookahead == 'o') ADVANCE(1134);
      END_STATE();
    case 866:
      if (lookahead == 'h') ADVANCE(1322);
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 867:
      if (lookahead == 'h') ADVANCE(1169);
      END_STATE();
    case 868:
      if (lookahead == 'h') ADVANCE(1175);
      END_STATE();
    case 869:
      if (lookahead == 'h') ADVANCE(1349);
      END_STATE();
    case 870:
      if (lookahead == 'h') ADVANCE(1172);
      END_STATE();
    case 871:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 872:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 873:
      if (lookahead == 'h') ADVANCE(410);
      END_STATE();
    case 874:
      if (lookahead == 'h') ADVANCE(800);
      END_STATE();
    case 875:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 876:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 877:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 878:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 879:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 880:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 881:
      if (lookahead == 'h') ADVANCE(1208);
      END_STATE();
    case 882:
      if (lookahead == 'h') ADVANCE(1350);
      END_STATE();
    case 883:
      if (lookahead == 'h') ADVANCE(1210);
      END_STATE();
    case 884:
      if (lookahead == 'h') ADVANCE(1212);
      END_STATE();
    case 885:
      if (lookahead == 'h') ADVANCE(1214);
      END_STATE();
    case 886:
      if (lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 887:
      if (lookahead == 'h') ADVANCE(1221);
      END_STATE();
    case 888:
      if (lookahead == 'h') ADVANCE(1362);
      END_STATE();
    case 889:
      if (lookahead == 'i') ADVANCE(1584);
      END_STATE();
    case 890:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 891:
      if (lookahead == 'i') ADVANCE(1564);
      if (lookahead == 'o') ADVANCE(1508);
      END_STATE();
    case 892:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 893:
      if (lookahead == 'i') ADVANCE(1563);
      END_STATE();
    case 894:
      if (lookahead == 'i') ADVANCE(1057);
      END_STATE();
    case 895:
      if (lookahead == 'i') ADVANCE(998);
      END_STATE();
    case 896:
      if (lookahead == 'i') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 897:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 898:
      if (lookahead == 'i') ADVANCE(1107);
      if (lookahead == 'l') ADVANCE(1173);
      END_STATE();
    case 899:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 900:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 901:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 902:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 903:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 904:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 905:
      if (lookahead == 'i') ADVANCE(1401);
      END_STATE();
    case 906:
      if (lookahead == 'i') ADVANCE(842);
      END_STATE();
    case 907:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 908:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 909:
      if (lookahead == 'i') ADVANCE(1348);
      END_STATE();
    case 910:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 911:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 912:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 913:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 914:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 915:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 916:
      if (lookahead == 'i') ADVANCE(1142);
      END_STATE();
    case 917:
      if (lookahead == 'i') ADVANCE(1109);
      END_STATE();
    case 918:
      if (lookahead == 'i') ADVANCE(1089);
      END_STATE();
    case 919:
      if (lookahead == 'i') ADVANCE(1432);
      END_STATE();
    case 920:
      if (lookahead == 'i') ADVANCE(1457);
      END_STATE();
    case 921:
      if (lookahead == 'i') ADVANCE(1459);
      END_STATE();
    case 922:
      if (lookahead == 'i') ADVANCE(1461);
      END_STATE();
    case 923:
      if (lookahead == 'i') ADVANCE(1464);
      END_STATE();
    case 924:
      if (lookahead == 'i') ADVANCE(1467);
      END_STATE();
    case 925:
      if (lookahead == 'i') ADVANCE(1443);
      END_STATE();
    case 926:
      if (lookahead == 'i') ADVANCE(1458);
      END_STATE();
    case 927:
      if (lookahead == 'i') ADVANCE(1470);
      END_STATE();
    case 928:
      if (lookahead == 'i') ADVANCE(1472);
      END_STATE();
    case 929:
      if (lookahead == 'i') ADVANCE(1448);
      END_STATE();
    case 930:
      if (lookahead == 'i') ADVANCE(1460);
      END_STATE();
    case 931:
      if (lookahead == 'i') ADVANCE(1462);
      END_STATE();
    case 932:
      if (lookahead == 'i') ADVANCE(1585);
      END_STATE();
    case 933:
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 934:
      if (lookahead == 'i') ADVANCE(1479);
      END_STATE();
    case 935:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 936:
      if (lookahead == 'i') ADVANCE(1501);
      END_STATE();
    case 937:
      if (lookahead == 'i') ADVANCE(1128);
      END_STATE();
    case 938:
      if (lookahead == 'i') ADVANCE(1502);
      END_STATE();
    case 939:
      if (lookahead == 'i') ADVANCE(1480);
      END_STATE();
    case 940:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 941:
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'l') ADVANCE(1177);
      END_STATE();
    case 942:
      if (lookahead == 'i') ADVANCE(1482);
      END_STATE();
    case 943:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 944:
      if (lookahead == 'i') ADVANCE(1010);
      END_STATE();
    case 945:
      if (lookahead == 'i') ADVANCE(1483);
      END_STATE();
    case 946:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 947:
      if (lookahead == 'i') ADVANCE(1489);
      END_STATE();
    case 948:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 949:
      if (lookahead == 'i') ADVANCE(1490);
      END_STATE();
    case 950:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 951:
      if (lookahead == 'i') ADVANCE(1117);
      if (lookahead == 'l') ADVANCE(1185);
      END_STATE();
    case 952:
      if (lookahead == 'i') ADVANCE(1339);
      END_STATE();
    case 953:
      if (lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 954:
      if (lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 955:
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead == 'l') ADVANCE(1188);
      END_STATE();
    case 956:
      if (lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 957:
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead == 'l') ADVANCE(1189);
      END_STATE();
    case 958:
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1191);
      END_STATE();
    case 959:
      if (lookahead == 'i') ADVANCE(1124);
      END_STATE();
    case 960:
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 'l') ADVANCE(1192);
      END_STATE();
    case 961:
      if (lookahead == 'i') ADVANCE(1193);
      END_STATE();
    case 962:
      if (lookahead == 'i') ADVANCE(1195);
      END_STATE();
    case 963:
      if (lookahead == 'i') ADVANCE(1198);
      END_STATE();
    case 964:
      if (lookahead == 'i') ADVANCE(1199);
      END_STATE();
    case 965:
      if (lookahead == 'i') ADVANCE(1200);
      END_STATE();
    case 966:
      if (lookahead == 'i') ADVANCE(1201);
      END_STATE();
    case 967:
      if (lookahead == 'i') ADVANCE(855);
      END_STATE();
    case 968:
      if (lookahead == 'i') ADVANCE(1151);
      END_STATE();
    case 969:
      if (lookahead == 'j') ADVANCE(1536);
      END_STATE();
    case 970:
      if (lookahead == 'j') ADVANCE(793);
      END_STATE();
    case 971:
      if (lookahead == 'j') ADVANCE(796);
      END_STATE();
    case 972:
      if (lookahead == 'j') ADVANCE(798);
      END_STATE();
    case 973:
      if (lookahead == 'j') ADVANCE(801);
      END_STATE();
    case 974:
      if (lookahead == 'j') ADVANCE(803);
      END_STATE();
    case 975:
      if (lookahead == 'j') ADVANCE(804);
      END_STATE();
    case 976:
      if (lookahead == 'j') ADVANCE(805);
      END_STATE();
    case 977:
      if (lookahead == 'j') ADVANCE(807);
      END_STATE();
    case 978:
      if (lookahead == 'j') ADVANCE(808);
      END_STATE();
    case 979:
      if (lookahead == 'k') ADVANCE(1834);
      END_STATE();
    case 980:
      if (lookahead == 'k') ADVANCE(1837);
      END_STATE();
    case 981:
      if (lookahead == 'k') ADVANCE(1835);
      END_STATE();
    case 982:
      if (lookahead == 'k') ADVANCE(1838);
      END_STATE();
    case 983:
      if (lookahead == 'k') ADVANCE(1836);
      END_STATE();
    case 984:
      if (lookahead == 'k') ADVANCE(1839);
      END_STATE();
    case 985:
      if (lookahead == 'k') ADVANCE(1842);
      END_STATE();
    case 986:
      if (lookahead == 'k') ADVANCE(1840);
      END_STATE();
    case 987:
      if (lookahead == 'k') ADVANCE(163);
      END_STATE();
    case 988:
      if (lookahead == 'k') ADVANCE(792);
      END_STATE();
    case 989:
      if (lookahead == 'k') ADVANCE(777);
      END_STATE();
    case 990:
      if (lookahead == 'k') ADVANCE(814);
      END_STATE();
    case 991:
      if (lookahead == 'k') ADVANCE(817);
      END_STATE();
    case 992:
      if (lookahead == 'l') ADVANCE(1959);
      END_STATE();
    case 993:
      if (lookahead == 'l') ADVANCE(1897);
      END_STATE();
    case 994:
      if (lookahead == 'l') ADVANCE(1852);
      END_STATE();
    case 995:
      if (lookahead == 'l') ADVANCE(1718);
      END_STATE();
    case 996:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 997:
      if (lookahead == 'l') ADVANCE(1379);
      END_STATE();
    case 998:
      if (lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 999:
      if (lookahead == 'l') ADVANCE(968);
      END_STATE();
    case 1000:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 1001:
      if (lookahead == 'l') ADVANCE(1370);
      END_STATE();
    case 1002:
      if (lookahead == 'l') ADVANCE(899);
      END_STATE();
    case 1003:
      if (lookahead == 'l') ADVANCE(996);
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 1004:
      if (lookahead == 'l') ADVANCE(992);
      END_STATE();
    case 1005:
      if (lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 1006:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 1007:
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 1008:
      if (lookahead == 'l') ADVANCE(994);
      END_STATE();
    case 1009:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 1010:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 1011:
      if (lookahead == 'l') ADVANCE(735);
      END_STATE();
    case 1012:
      if (lookahead == 'l') ADVANCE(781);
      END_STATE();
    case 1013:
      if (lookahead == 'l') ADVANCE(737);
      END_STATE();
    case 1014:
      if (lookahead == 'l') ADVANCE(738);
      END_STATE();
    case 1015:
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 1016:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 1017:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(742);
      END_STATE();
    case 1019:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 1020:
      if (lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 1021:
      if (lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 1022:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 1023:
      if (lookahead == 'l') ADVANCE(1441);
      END_STATE();
    case 1024:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 1025:
      if (lookahead == 'l') ADVANCE(791);
      END_STATE();
    case 1026:
      if (lookahead == 'l') ADVANCE(937);
      END_STATE();
    case 1027:
      if (lookahead == 'l') ADVANCE(794);
      END_STATE();
    case 1028:
      if (lookahead == 'l') ADVANCE(797);
      END_STATE();
    case 1029:
      if (lookahead == 'l') ADVANCE(1179);
      END_STATE();
    case 1030:
      if (lookahead == 'l') ADVANCE(799);
      END_STATE();
    case 1031:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 1032:
      if (lookahead == 'l') ADVANCE(930);
      END_STATE();
    case 1033:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 1034:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 1035:
      if (lookahead == 'l') ADVANCE(1211);
      END_STATE();
    case 1036:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 1037:
      if (lookahead == 'l') ADVANCE(1213);
      END_STATE();
    case 1038:
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 1039:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 1040:
      if (lookahead == 'l') ADVANCE(1218);
      END_STATE();
    case 1041:
      if (lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 1042:
      if (lookahead == 'l') ADVANCE(1222);
      END_STATE();
    case 1043:
      if (lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 1044:
      if (lookahead == 'l') ADVANCE(1227);
      END_STATE();
    case 1045:
      if (lookahead == 'l') ADVANCE(1228);
      END_STATE();
    case 1046:
      if (lookahead == 'l') ADVANCE(1229);
      END_STATE();
    case 1047:
      if (lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1048:
      if (lookahead == 'm') ADVANCE(1924);
      END_STATE();
    case 1049:
      if (lookahead == 'm') ADVANCE(1938);
      END_STATE();
    case 1050:
      if (lookahead == 'm') ADVANCE(1609);
      END_STATE();
    case 1051:
      if (lookahead == 'm') ADVANCE(1602);
      END_STATE();
    case 1052:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 1053:
      if (lookahead == 'm') ADVANCE(1610);
      END_STATE();
    case 1054:
      if (lookahead == 'm') ADVANCE(1260);
      END_STATE();
    case 1055:
      if (lookahead == 'm') ADVANCE(1261);
      END_STATE();
    case 1056:
      if (lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 1057:
      if (lookahead == 'm') ADVANCE(719);
      END_STATE();
    case 1058:
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 1059:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 1060:
      if (lookahead == 'm') ADVANCE(810);
      END_STATE();
    case 1061:
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 't') ADVANCE(1534);
      END_STATE();
    case 1062:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 1063:
      if (lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 1064:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 1065:
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(1476);
      END_STATE();
    case 1066:
      if (lookahead == 'n') ADVANCE(1629);
      END_STATE();
    case 1067:
      if (lookahead == 'n') ADVANCE(1934);
      END_STATE();
    case 1068:
      if (lookahead == 'n') ADVANCE(1601);
      END_STATE();
    case 1069:
      if (lookahead == 'n') ADVANCE(1679);
      END_STATE();
    case 1070:
      if (lookahead == 'n') ADVANCE(1686);
      END_STATE();
    case 1071:
      if (lookahead == 'n') ADVANCE(1693);
      END_STATE();
    case 1072:
      if (lookahead == 'n') ADVANCE(1700);
      END_STATE();
    case 1073:
      if (lookahead == 'n') ADVANCE(1707);
      END_STATE();
    case 1074:
      if (lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1075:
      if (lookahead == 'n') ADVANCE(1607);
      END_STATE();
    case 1076:
      if (lookahead == 'n') ADVANCE(1627);
      END_STATE();
    case 1077:
      if (lookahead == 'n') ADVANCE(1606);
      END_STATE();
    case 1078:
      if (lookahead == 'n') ADVANCE(1608);
      END_STATE();
    case 1079:
      if (lookahead == 'n') ADVANCE(1529);
      END_STATE();
    case 1080:
      if (lookahead == 'n') ADVANCE(1529);
      if (lookahead == 'x') ADVANCE(766);
      END_STATE();
    case 1081:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 1082:
      if (lookahead == 'n') ADVANCE(1386);
      END_STATE();
    case 1083:
      if (lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 1084:
      if (lookahead == 'n') ADVANCE(824);
      END_STATE();
    case 1085:
      if (lookahead == 'n') ADVANCE(1152);
      END_STATE();
    case 1086:
      if (lookahead == 'n') ADVANCE(1152);
      if (lookahead == 'r') ADVANCE(1342);
      END_STATE();
    case 1087:
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 'v') ADVANCE(707);
      END_STATE();
    case 1088:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 1089:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 1090:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 1091:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 1092:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 1093:
      if (lookahead == 'n') ADVANCE(1530);
      END_STATE();
    case 1094:
      if (lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 1095:
      if (lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 1096:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 1097:
      if (lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 1098:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 1099:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 1100:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 1101:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 1102:
      if (lookahead == 'n') ADVANCE(607);
      END_STATE();
    case 1103:
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 1104:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 1105:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 1106:
      if (lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 1107:
      if (lookahead == 'n') ADVANCE(1403);
      END_STATE();
    case 1108:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 1109:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 1110:
      if (lookahead == 'n') ADVANCE(1404);
      END_STATE();
    case 1111:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 1112:
      if (lookahead == 'n') ADVANCE(1405);
      END_STATE();
    case 1113:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 1114:
      if (lookahead == 'n') ADVANCE(1406);
      END_STATE();
    case 1115:
      if (lookahead == 'n') ADVANCE(1407);
      END_STATE();
    case 1116:
      if (lookahead == 'n') ADVANCE(1408);
      END_STATE();
    case 1117:
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 1118:
      if (lookahead == 'n') ADVANCE(1410);
      END_STATE();
    case 1119:
      if (lookahead == 'n') ADVANCE(1411);
      END_STATE();
    case 1120:
      if (lookahead == 'n') ADVANCE(1412);
      END_STATE();
    case 1121:
      if (lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 1122:
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 1123:
      if (lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 1124:
      if (lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1125:
      if (lookahead == 'n') ADVANCE(1417);
      END_STATE();
    case 1126:
      if (lookahead == 'n') ADVANCE(1424);
      END_STATE();
    case 1127:
      if (lookahead == 'n') ADVANCE(1478);
      END_STATE();
    case 1128:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 1129:
      if (lookahead == 'n') ADVANCE(1439);
      END_STATE();
    case 1130:
      if (lookahead == 'n') ADVANCE(1510);
      if (lookahead == 'x') ADVANCE(929);
      END_STATE();
    case 1131:
      if (lookahead == 'n') ADVANCE(1445);
      END_STATE();
    case 1132:
      if (lookahead == 'n') ADVANCE(1449);
      END_STATE();
    case 1133:
      if (lookahead == 'n') ADVANCE(1180);
      END_STATE();
    case 1134:
      if (lookahead == 'n') ADVANCE(1383);
      END_STATE();
    case 1135:
      if (lookahead == 'n') ADVANCE(1473);
      END_STATE();
    case 1136:
      if (lookahead == 'n') ADVANCE(846);
      END_STATE();
    case 1137:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 1138:
      if (lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 1139:
      if (lookahead == 'n') ADVANCE(1388);
      END_STATE();
    case 1140:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 1141:
      if (lookahead == 'n') ADVANCE(1499);
      END_STATE();
    case 1142:
      if (lookahead == 'n') ADVANCE(1026);
      END_STATE();
    case 1143:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 1144:
      if (lookahead == 'n') ADVANCE(1385);
      END_STATE();
    case 1145:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 1146:
      if (lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 1147:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 1148:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 1149:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 1150:
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 1151:
      if (lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 1152:
      if (lookahead == 'n') ADVANCE(1244);
      END_STATE();
    case 1153:
      if (lookahead == 'n') ADVANCE(1528);
      END_STATE();
    case 1154:
      if (lookahead == 'n') ADVANCE(1246);
      END_STATE();
    case 1155:
      if (lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 1156:
      if (lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 1157:
      if (lookahead == 'n') ADVANCE(1154);
      END_STATE();
    case 1158:
      if (lookahead == 'n') ADVANCE(1155);
      END_STATE();
    case 1159:
      if (lookahead == 'n') ADVANCE(1155);
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 1160:
      if (lookahead == 'n') ADVANCE(1156);
      END_STATE();
    case 1161:
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 1162:
      if (lookahead == 'o') ADVANCE(1087);
      if (lookahead == 'u') ADVANCE(1036);
      END_STATE();
    case 1163:
      if (lookahead == 'o') ADVANCE(1654);
      END_STATE();
    case 1164:
      if (lookahead == 'o') ADVANCE(1566);
      END_STATE();
    case 1165:
      if (lookahead == 'o') ADVANCE(1641);
      END_STATE();
    case 1166:
      if (lookahead == 'o') ADVANCE(819);
      END_STATE();
    case 1167:
      if (lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 1168:
      if (lookahead == 'o') ADVANCE(1532);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 1169:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 1170:
      if (lookahead == 'o') ADVANCE(1052);
      END_STATE();
    case 1171:
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'y') ADVANCE(1492);
      END_STATE();
    case 1172:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 1173:
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 1174:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 1175:
      if (lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1176:
      if (lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 1177:
      if (lookahead == 'o') ADVANCE(1090);
      END_STATE();
    case 1178:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 1179:
      if (lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 1180:
      if (lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1181:
      if (lookahead == 'o') ADVANCE(1092);
      END_STATE();
    case 1182:
      if (lookahead == 'o') ADVANCE(1094);
      END_STATE();
    case 1183:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 1184:
      if (lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 1185:
      if (lookahead == 'o') ADVANCE(1096);
      END_STATE();
    case 1186:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 1187:
      if (lookahead == 'o') ADVANCE(1097);
      END_STATE();
    case 1188:
      if (lookahead == 'o') ADVANCE(1098);
      END_STATE();
    case 1189:
      if (lookahead == 'o') ADVANCE(1099);
      END_STATE();
    case 1190:
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 1191:
      if (lookahead == 'o') ADVANCE(1103);
      END_STATE();
    case 1192:
      if (lookahead == 'o') ADVANCE(1105);
      END_STATE();
    case 1193:
      if (lookahead == 'o') ADVANCE(1067);
      END_STATE();
    case 1194:
      if (lookahead == 'o') ADVANCE(1108);
      END_STATE();
    case 1195:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 1196:
      if (lookahead == 'o') ADVANCE(1111);
      END_STATE();
    case 1197:
      if (lookahead == 'o') ADVANCE(1113);
      END_STATE();
    case 1198:
      if (lookahead == 'o') ADVANCE(1075);
      END_STATE();
    case 1199:
      if (lookahead == 'o') ADVANCE(1076);
      END_STATE();
    case 1200:
      if (lookahead == 'o') ADVANCE(1077);
      END_STATE();
    case 1201:
      if (lookahead == 'o') ADVANCE(1078);
      END_STATE();
    case 1202:
      if (lookahead == 'o') ADVANCE(1315);
      END_STATE();
    case 1203:
      if (lookahead == 'o') ADVANCE(1330);
      END_STATE();
    case 1204:
      if (lookahead == 'o') ADVANCE(989);
      END_STATE();
    case 1205:
      if (lookahead == 'o') ADVANCE(1101);
      END_STATE();
    case 1206:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 1207:
      if (lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 1208:
      if (lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1209:
      if (lookahead == 'o') ADVANCE(1138);
      END_STATE();
    case 1210:
      if (lookahead == 'o') ADVANCE(1335);
      END_STATE();
    case 1211:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 1212:
      if (lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1213:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 1214:
      if (lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 1215:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 1216:
      if (lookahead == 'o') ADVANCE(1012);
      END_STATE();
    case 1217:
      if (lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 1218:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 1219:
      if (lookahead == 'o') ADVANCE(1025);
      END_STATE();
    case 1220:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 1221:
      if (lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 1222:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 1223:
      if (lookahead == 'o') ADVANCE(1027);
      END_STATE();
    case 1224:
      if (lookahead == 'o') ADVANCE(1028);
      END_STATE();
    case 1225:
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 1226:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 1227:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 1228:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 1229:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 1230:
      if (lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 1231:
      if (lookahead == 'o') ADVANCE(1031);
      END_STATE();
    case 1232:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 1233:
      if (lookahead == 'o') ADVANCE(1219);
      if (lookahead == 'y') ADVANCE(1493);
      END_STATE();
    case 1234:
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 1235:
      if (lookahead == 'o') ADVANCE(1144);
      END_STATE();
    case 1236:
      if (lookahead == 'o') ADVANCE(1223);
      if (lookahead == 'y') ADVANCE(1494);
      END_STATE();
    case 1237:
      if (lookahead == 'o') ADVANCE(1224);
      if (lookahead == 'y') ADVANCE(1495);
      END_STATE();
    case 1238:
      if (lookahead == 'o') ADVANCE(1230);
      if (lookahead == 'y') ADVANCE(1496);
      END_STATE();
    case 1239:
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == 'y') ADVANCE(1497);
      END_STATE();
    case 1240:
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 'v') ADVANCE(1225);
      if (lookahead == 'w') ADVANCE(954);
      END_STATE();
    case 1241:
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead == 'w') ADVANCE(956);
      END_STATE();
    case 1242:
      if (lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1243:
      if (lookahead == 'o') ADVANCE(1551);
      END_STATE();
    case 1244:
      if (lookahead == 'o') ADVANCE(1520);
      END_STATE();
    case 1245:
      if (lookahead == 'o') ADVANCE(1552);
      END_STATE();
    case 1246:
      if (lookahead == 'o') ADVANCE(1522);
      END_STATE();
    case 1247:
      if (lookahead == 'o') ADVANCE(1553);
      END_STATE();
    case 1248:
      if (lookahead == 'o') ADVANCE(1526);
      END_STATE();
    case 1249:
      if (lookahead == 'o') ADVANCE(1554);
      END_STATE();
    case 1250:
      if (lookahead == 'o') ADVANCE(1527);
      END_STATE();
    case 1251:
      if (lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1252:
      if (lookahead == 'o') ADVANCE(1556);
      END_STATE();
    case 1253:
      if (lookahead == 'o') ADVANCE(1557);
      END_STATE();
    case 1254:
      if (lookahead == 'o') ADVANCE(1558);
      END_STATE();
    case 1255:
      if (lookahead == 'o') ADVANCE(1559);
      END_STATE();
    case 1256:
      if (lookahead == 'o') ADVANCE(1560);
      END_STATE();
    case 1257:
      if (lookahead == 'o') ADVANCE(1561);
      END_STATE();
    case 1258:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 1259:
      if (lookahead == 'p') ADVANCE(1614);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 1260:
      if (lookahead == 'p') ADVANCE(1006);
      END_STATE();
    case 1261:
      if (lookahead == 'p') ADVANCE(1466);
      END_STATE();
    case 1262:
      if (lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 1263:
      if (lookahead == 'p') ADVANCE(1521);
      END_STATE();
    case 1264:
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead == 'u') ADVANCE(545);
      END_STATE();
    case 1265:
      if (lookahead == 'q') ADVANCE(1664);
      END_STATE();
    case 1266:
      if (lookahead == 'q') ADVANCE(1545);
      END_STATE();
    case 1267:
      if (lookahead == 'q') ADVANCE(1546);
      END_STATE();
    case 1268:
      if (lookahead == 'q') ADVANCE(1547);
      END_STATE();
    case 1269:
      if (lookahead == 'q') ADVANCE(1548);
      END_STATE();
    case 1270:
      if (lookahead == 'q') ADVANCE(1549);
      END_STATE();
    case 1271:
      if (lookahead == 'q') ADVANCE(1550);
      END_STATE();
    case 1272:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 1273:
      if (lookahead == 'r') ADVANCE(1593);
      END_STATE();
    case 1274:
      if (lookahead == 'r') ADVANCE(1681);
      END_STATE();
    case 1275:
      if (lookahead == 'r') ADVANCE(1688);
      END_STATE();
    case 1276:
      if (lookahead == 'r') ADVANCE(1695);
      END_STATE();
    case 1277:
      if (lookahead == 'r') ADVANCE(1702);
      END_STATE();
    case 1278:
      if (lookahead == 'r') ADVANCE(1709);
      END_STATE();
    case 1279:
      if (lookahead == 'r') ADVANCE(1716);
      END_STATE();
    case 1280:
      if (lookahead == 'r') ADVANCE(1747);
      END_STATE();
    case 1281:
      if (lookahead == 'r') ADVANCE(1719);
      END_STATE();
    case 1282:
      if (lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 1283:
      if (lookahead == 'r') ADVANCE(1781);
      END_STATE();
    case 1284:
      if (lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1285:
      if (lookahead == 'r') ADVANCE(1784);
      END_STATE();
    case 1286:
      if (lookahead == 'r') ADVANCE(1643);
      END_STATE();
    case 1287:
      if (lookahead == 'r') ADVANCE(1783);
      END_STATE();
    case 1288:
      if (lookahead == 'r') ADVANCE(1798);
      END_STATE();
    case 1289:
      if (lookahead == 'r') ADVANCE(1785);
      END_STATE();
    case 1290:
      if (lookahead == 'r') ADVANCE(1789);
      END_STATE();
    case 1291:
      if (lookahead == 'r') ADVANCE(1790);
      END_STATE();
    case 1292:
      if (lookahead == 'r') ADVANCE(1782);
      END_STATE();
    case 1293:
      if (lookahead == 'r') ADVANCE(1788);
      END_STATE();
    case 1294:
      if (lookahead == 'r') ADVANCE(1792);
      END_STATE();
    case 1295:
      if (lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1296:
      if (lookahead == 'r') ADVANCE(1795);
      END_STATE();
    case 1297:
      if (lookahead == 'r') ADVANCE(1794);
      END_STATE();
    case 1298:
      if (lookahead == 'r') ADVANCE(1796);
      END_STATE();
    case 1299:
      if (lookahead == 'r') ADVANCE(1800);
      END_STATE();
    case 1300:
      if (lookahead == 'r') ADVANCE(1801);
      END_STATE();
    case 1301:
      if (lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 1302:
      if (lookahead == 'r') ADVANCE(1791);
      END_STATE();
    case 1303:
      if (lookahead == 'r') ADVANCE(1799);
      END_STATE();
    case 1304:
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 1305:
      if (lookahead == 'r') ADVANCE(1806);
      END_STATE();
    case 1306:
      if (lookahead == 'r') ADVANCE(1805);
      END_STATE();
    case 1307:
      if (lookahead == 'r') ADVANCE(1807);
      END_STATE();
    case 1308:
      if (lookahead == 'r') ADVANCE(1804);
      END_STATE();
    case 1309:
      if (lookahead == 'r') ADVANCE(1802);
      END_STATE();
    case 1310:
      if (lookahead == 'r') ADVANCE(1808);
      END_STATE();
    case 1311:
      if (lookahead == 'r') ADVANCE(1811);
      END_STATE();
    case 1312:
      if (lookahead == 'r') ADVANCE(1810);
      END_STATE();
    case 1313:
      if (lookahead == 'r') ADVANCE(1812);
      END_STATE();
    case 1314:
      if (lookahead == 'r') ADVANCE(1809);
      END_STATE();
    case 1315:
      if (lookahead == 'r') ADVANCE(1927);
      END_STATE();
    case 1316:
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 1317:
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead == 'u') ADVANCE(895);
      END_STATE();
    case 1318:
      if (lookahead == 'r') ADVANCE(891);
      if (lookahead == 'u') ADVANCE(518);
      END_STATE();
    case 1319:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 1320:
      if (lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 1321:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 1322:
      if (lookahead == 'r') ADVANCE(1164);
      END_STATE();
    case 1323:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 1324:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 1325:
      if (lookahead == 'r') ADVANCE(1540);
      END_STATE();
    case 1326:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 1327:
      if (lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 1328:
      if (lookahead == 'r') ADVANCE(1066);
      END_STATE();
    case 1329:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 1330:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 1331:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 1332:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 1333:
      if (lookahead == 'r') ADVANCE(1425);
      END_STATE();
    case 1334:
      if (lookahead == 'r') ADVANCE(1426);
      END_STATE();
    case 1335:
      if (lookahead == 'r') ADVANCE(1430);
      END_STATE();
    case 1336:
      if (lookahead == 'r') ADVANCE(1431);
      END_STATE();
    case 1337:
      if (lookahead == 'r') ADVANCE(1433);
      END_STATE();
    case 1338:
      if (lookahead == 'r') ADVANCE(1434);
      END_STATE();
    case 1339:
      if (lookahead == 'r') ADVANCE(1469);
      END_STATE();
    case 1340:
      if (lookahead == 'r') ADVANCE(1447);
      END_STATE();
    case 1341:
      if (lookahead == 'r') ADVANCE(1382);
      END_STATE();
    case 1342:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 1343:
      if (lookahead == 'r') ADVANCE(1207);
      END_STATE();
    case 1344:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1345:
      if (lookahead == 'r') ADVANCE(1329);
      END_STATE();
    case 1346:
      if (lookahead == 'r') ADVANCE(1331);
      END_STATE();
    case 1347:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 1348:
      if (lookahead == 'r') ADVANCE(806);
      END_STATE();
    case 1349:
      if (lookahead == 'r') ADVANCE(1205);
      END_STATE();
    case 1350:
      if (lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 1351:
      if (lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 1352:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(1234);
      END_STATE();
    case 1354:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 1355:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 1356:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 1357:
      if (lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 1358:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 1359:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 1360:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 1361:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 1362:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 1363:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 1364:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 1365:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 1366:
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 1367:
      if (lookahead == 'r') ADVANCE(1394);
      END_STATE();
    case 1368:
      if (lookahead == 's') ADVANCE(888);
      END_STATE();
    case 1369:
      if (lookahead == 's') ADVANCE(1592);
      END_STATE();
    case 1370:
      if (lookahead == 's') ADVANCE(1847);
      END_STATE();
    case 1371:
      if (lookahead == 's') ADVANCE(1930);
      END_STATE();
    case 1372:
      if (lookahead == 's') ADVANCE(1595);
      END_STATE();
    case 1373:
      if (lookahead == 's') ADVANCE(1642);
      END_STATE();
    case 1374:
      if (lookahead == 's') ADVANCE(1567);
      END_STATE();
    case 1375:
      if (lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1376:
      if (lookahead == 's') ADVANCE(1507);
      END_STATE();
    case 1377:
      if (lookahead == 's') ADVANCE(1369);
      END_STATE();
    case 1378:
      if (lookahead == 's') ADVANCE(1538);
      END_STATE();
    case 1379:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 1380:
      if (lookahead == 's') ADVANCE(1477);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(1204);
      END_STATE();
    case 1381:
      if (lookahead == 's') ADVANCE(1373);
      END_STATE();
    case 1382:
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 1383:
      if (lookahead == 's') ADVANCE(1402);
      END_STATE();
    case 1384:
      if (lookahead == 's') ADVANCE(1427);
      END_STATE();
    case 1385:
      if (lookahead == 's') ADVANCE(1500);
      END_STATE();
    case 1386:
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 1387:
      if (lookahead == 's') ADVANCE(1569);
      END_STATE();
    case 1388:
      if (lookahead == 's') ADVANCE(1517);
      END_STATE();
    case 1389:
      if (lookahead == 's') ADVANCE(1570);
      END_STATE();
    case 1390:
      if (lookahead == 's') ADVANCE(1571);
      END_STATE();
    case 1391:
      if (lookahead == 's') ADVANCE(1572);
      END_STATE();
    case 1392:
      if (lookahead == 's') ADVANCE(1573);
      END_STATE();
    case 1393:
      if (lookahead == 's') ADVANCE(815);
      END_STATE();
    case 1394:
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(1676);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1683);
      END_STATE();
    case 1397:
      if (lookahead == 't') ADVANCE(1690);
      END_STATE();
    case 1398:
      if (lookahead == 't') ADVANCE(1697);
      END_STATE();
    case 1399:
      if (lookahead == 't') ADVANCE(1704);
      END_STATE();
    case 1400:
      if (lookahead == 't') ADVANCE(1711);
      END_STATE();
    case 1401:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 1402:
      if (lookahead == 't') ADVANCE(1634);
      END_STATE();
    case 1403:
      if (lookahead == 't') ADVANCE(1755);
      END_STATE();
    case 1404:
      if (lookahead == 't') ADVANCE(1749);
      END_STATE();
    case 1405:
      if (lookahead == 't') ADVANCE(1754);
      END_STATE();
    case 1406:
      if (lookahead == 't') ADVANCE(1752);
      END_STATE();
    case 1407:
      if (lookahead == 't') ADVANCE(1751);
      END_STATE();
    case 1408:
      if (lookahead == 't') ADVANCE(1728);
      END_STATE();
    case 1409:
      if (lookahead == 't') ADVANCE(1729);
      END_STATE();
    case 1410:
      if (lookahead == 't') ADVANCE(1753);
      END_STATE();
    case 1411:
      if (lookahead == 't') ADVANCE(1757);
      END_STATE();
    case 1412:
      if (lookahead == 't') ADVANCE(1758);
      END_STATE();
    case 1413:
      if (lookahead == 't') ADVANCE(1750);
      END_STATE();
    case 1414:
      if (lookahead == 't') ADVANCE(1756);
      END_STATE();
    case 1415:
      if (lookahead == 't') ADVANCE(1915);
      END_STATE();
    case 1416:
      if (lookahead == 't') ADVANCE(1844);
      END_STATE();
    case 1417:
      if (lookahead == 't') ADVANCE(1759);
      END_STATE();
    case 1418:
      if (lookahead == 't') ADVANCE(1771);
      END_STATE();
    case 1419:
      if (lookahead == 't') ADVANCE(1774);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(1773);
      END_STATE();
    case 1421:
      if (lookahead == 't') ADVANCE(1732);
      END_STATE();
    case 1422:
      if (lookahead == 't') ADVANCE(1775);
      END_STATE();
    case 1423:
      if (lookahead == 't') ADVANCE(1772);
      END_STATE();
    case 1424:
      if (lookahead == 't') ADVANCE(1906);
      END_STATE();
    case 1425:
      if (lookahead == 't') ADVANCE(1682);
      END_STATE();
    case 1426:
      if (lookahead == 't') ADVANCE(1689);
      END_STATE();
    case 1427:
      if (lookahead == 't') ADVANCE(1645);
      END_STATE();
    case 1428:
      if (lookahead == 't') ADVANCE(1660);
      END_STATE();
    case 1429:
      if (lookahead == 't') ADVANCE(1659);
      END_STATE();
    case 1430:
      if (lookahead == 't') ADVANCE(1696);
      END_STATE();
    case 1431:
      if (lookahead == 't') ADVANCE(1703);
      END_STATE();
    case 1432:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 1433:
      if (lookahead == 't') ADVANCE(1710);
      END_STATE();
    case 1434:
      if (lookahead == 't') ADVANCE(1717);
      END_STATE();
    case 1435:
      if (lookahead == 't') ADVANCE(1678);
      END_STATE();
    case 1436:
      if (lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 1437:
      if (lookahead == 't') ADVANCE(1692);
      END_STATE();
    case 1438:
      if (lookahead == 't') ADVANCE(1699);
      END_STATE();
    case 1439:
      if (lookahead == 't') ADVANCE(1737);
      END_STATE();
    case 1440:
      if (lookahead == 't') ADVANCE(1621);
      END_STATE();
    case 1441:
      if (lookahead == 't') ADVANCE(1624);
      END_STATE();
    case 1442:
      if (lookahead == 't') ADVANCE(1706);
      END_STATE();
    case 1443:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 1444:
      if (lookahead == 't') ADVANCE(1713);
      END_STATE();
    case 1445:
      if (lookahead == 't') ADVANCE(1740);
      END_STATE();
    case 1446:
      if (lookahead == 't') ADVANCE(1735);
      END_STATE();
    case 1447:
      if (lookahead == 't') ADVANCE(1748);
      END_STATE();
    case 1448:
      if (lookahead == 't') ADVANCE(1644);
      END_STATE();
    case 1449:
      if (lookahead == 't') ADVANCE(1743);
      END_STATE();
    case 1450:
      if (lookahead == 't') ADVANCE(1720);
      END_STATE();
    case 1451:
      if (lookahead == 't') ADVANCE(1738);
      END_STATE();
    case 1452:
      if (lookahead == 't') ADVANCE(1631);
      END_STATE();
    case 1453:
      if (lookahead == 't') ADVANCE(1745);
      END_STATE();
    case 1454:
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 1455:
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'y') ADVANCE(1064);
      END_STATE();
    case 1456:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 1457:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 1458:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 1459:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 1460:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 1461:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 1462:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 1463:
      if (lookahead == 't') ADVANCE(1163);
      END_STATE();
    case 1464:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 1465:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 1466:
      if (lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 1467:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 1468:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 1469:
      if (lookahead == 't') ADVANCE(1542);
      END_STATE();
    case 1470:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 1471:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 1472:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 1473:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 1474:
      if (lookahead == 't') ADVANCE(1174);
      END_STATE();
    case 1475:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 1476:
      if (lookahead == 't') ADVANCE(768);
      END_STATE();
    case 1477:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 1478:
      if (lookahead == 't') ADVANCE(1372);
      END_STATE();
    case 1479:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 1480:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 1481:
      if (lookahead == 't') ADVANCE(1344);
      END_STATE();
    case 1482:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 1483:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 1484:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 1485:
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 1486:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 1487:
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 1488:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 1489:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 1490:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 1491:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 1492:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 1493:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 1494:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 1495:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 1496:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 1497:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 1498:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 1499:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 1500:
      if (lookahead == 't') ADVANCE(1325);
      END_STATE();
    case 1501:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 1502:
      if (lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 1503:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 1504:
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 1505:
      if (lookahead == 't') ADVANCE(1178);
      END_STATE();
    case 1506:
      if (lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1507:
      if (lookahead == 't') ADVANCE(1326);
      END_STATE();
    case 1508:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 1509:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 1510:
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 1511:
      if (lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 1512:
      if (lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1513:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 1514:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 1515:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 1516:
      if (lookahead == 't') ADVANCE(962);
      END_STATE();
    case 1517:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 1518:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 1519:
      if (lookahead == 't') ADVANCE(963);
      END_STATE();
    case 1520:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 1521:
      if (lookahead == 't') ADVANCE(964);
      END_STATE();
    case 1522:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 1523:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 1524:
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(1262);
      END_STATE();
    case 1525:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 1526:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 1527:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 1528:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 1529:
      if (lookahead == 'u') ADVANCE(1048);
      END_STATE();
    case 1530:
      if (lookahead == 'u') ADVANCE(1049);
      END_STATE();
    case 1531:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 1532:
      if (lookahead == 'u') ADVANCE(1324);
      END_STATE();
    case 1533:
      if (lookahead == 'u') ADVANCE(545);
      END_STATE();
    case 1534:
      if (lookahead == 'u') ADVANCE(1328);
      END_STATE();
    case 1535:
      if (lookahead == 'u') ADVANCE(1396);
      END_STATE();
    case 1536:
      if (lookahead == 'u') ADVANCE(1056);
      END_STATE();
    case 1537:
      if (lookahead == 'u') ADVANCE(1398);
      END_STATE();
    case 1538:
      if (lookahead == 'u') ADVANCE(1023);
      END_STATE();
    case 1539:
      if (lookahead == 'u') ADVANCE(1485);
      END_STATE();
    case 1540:
      if (lookahead == 'u') ADVANCE(592);
      END_STATE();
    case 1541:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 1542:
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 1543:
      if (lookahead == 'u') ADVANCE(901);
      END_STATE();
    case 1544:
      if (lookahead == 'u') ADVANCE(902);
      END_STATE();
    case 1545:
      if (lookahead == 'u') ADVANCE(908);
      END_STATE();
    case 1546:
      if (lookahead == 'u') ADVANCE(910);
      END_STATE();
    case 1547:
      if (lookahead == 'u') ADVANCE(911);
      END_STATE();
    case 1548:
      if (lookahead == 'u') ADVANCE(913);
      END_STATE();
    case 1549:
      if (lookahead == 'u') ADVANCE(914);
      END_STATE();
    case 1550:
      if (lookahead == 'u') ADVANCE(915);
      END_STATE();
    case 1551:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 1552:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 1553:
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 1554:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 1555:
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 1556:
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 1557:
      if (lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 1558:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 1559:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 1560:
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 1561:
      if (lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 1562:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 1563:
      if (lookahead == 'v') ADVANCE(716);
      END_STATE();
    case 1564:
      if (lookahead == 'v') ADVANCE(419);
      END_STATE();
    case 1565:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 1566:
      if (lookahead == 'w') ADVANCE(1653);
      END_STATE();
    case 1567:
      if (lookahead == 'w') ADVANCE(934);
      END_STATE();
    case 1568:
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 1569:
      if (lookahead == 'w') ADVANCE(939);
      END_STATE();
    case 1570:
      if (lookahead == 'w') ADVANCE(942);
      END_STATE();
    case 1571:
      if (lookahead == 'w') ADVANCE(945);
      END_STATE();
    case 1572:
      if (lookahead == 'w') ADVANCE(947);
      END_STATE();
    case 1573:
      if (lookahead == 'w') ADVANCE(949);
      END_STATE();
    case 1574:
      if (lookahead == 'x') ADVANCE(578);
      END_STATE();
    case 1575:
      if (lookahead == 'y') ADVANCE(1649);
      END_STATE();
    case 1576:
      if (lookahead == 'y') ADVANCE(1650);
      END_STATE();
    case 1577:
      if (lookahead == 'y') ADVANCE(1833);
      END_STATE();
    case 1578:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 1579:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 1580:
      if (lookahead == 'y') ADVANCE(1104);
      END_STATE();
    case 1581:
      if (lookahead == 'y') ADVANCE(1498);
      END_STATE();
    case 1582:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 1583:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 1584:
      if (lookahead == 'z') ADVANCE(778);
      END_STATE();
    case 1585:
      if (lookahead == 'z') ADVANCE(779);
      END_STATE();
    case 1586:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1953);
      END_STATE();
    case 1587:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1946);
      END_STATE();
    case 1588:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1611);
      END_STATE();
    case 1589:
      if (lookahead == '$' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1590:
      if (eof) ADVANCE(1591);
      if (lookahead == '#') ADVANCE(1937);
      if (lookahead == ',') ADVANCE(1612);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '=') ADVANCE(1597);
      if (lookahead == '}') ADVANCE(1851);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1590)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1605);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_DOTclass);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_DOTsuper);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_DOTsource);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_DOTimplements);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_DOTfield);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym_end_field);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym_end_method);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_DOTannotation);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym_annotation_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1605);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(sym_end_annotation);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_DOTsubannotation);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(sym_end_subannotation);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(sym_end_param);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1611);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1613);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_move);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '/') ADVANCE(193);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_move_SLASHfrom16);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_move_SLASH16);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_move_DASHwide);
      if (lookahead == '/') ADVANCE(197);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_move_DASHwide_SLASHfrom16);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_move_DASHwide_SLASH16);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_move_DASHobject);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_move_DASHobject_SLASHfrom16);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_move_DASHobject_SLASH16);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_move_DASHresult);
      if (lookahead == '-') ADVANCE(1241);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_move_DASHresult_DASHwide);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_move_DASHresult_DASHobject);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_move_DASHexception);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_return_DASHvoid);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-') ADVANCE(1240);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_return_DASHwide);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_return_DASHobject);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_const_SLASH4);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_const_SLASH16);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '-') ADVANCE(572);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_const_SLASHhigh16);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASH16);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASH32);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_const_DASHwide);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASHhigh16);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_const_DASHstring);
      if (lookahead == '-') ADVANCE(969);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_const_DASHstring_DASHjumbo);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_const_DASHclass);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_monitor_DASHenter);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_monitor_DASHexit);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_check_DASHcast);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_instance_DASHof);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_array_DASHlength);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_new_DASHinstance);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_new_DASHarray);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_filled_DASHnew_DASHarray);
      if (lookahead == '/') ADVANCE(1359);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_filled_DASHnew_DASHarray_SLASHrange);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_fill_DASHarray_DASHdata);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '/') ADVANCE(192);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_goto_SLASH16);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_goto_SLASH32);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_packed_DASHswitch);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_sparse_DASHswitch);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_cmpl_DASHfloat);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_cmpg_DASHfloat);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_cmpl_DASHdouble);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_cmpg_DASHdouble);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_cmp_DASHlong);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_if_DASHeq);
      if (lookahead == 'z') ADVANCE(1670);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_if_DASHne);
      if (lookahead == 'z') ADVANCE(1671);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_if_DASHlt);
      if (lookahead == 'z') ADVANCE(1672);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_if_DASHge);
      if (lookahead == 'z') ADVANCE(1673);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_if_DASHgt);
      if (lookahead == 'z') ADVANCE(1674);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_if_DASHle);
      if (lookahead == 'z') ADVANCE(1675);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_if_DASHeqz);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_if_DASHnez);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_if_DASHltz);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_if_DASHgez);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_if_DASHgtz);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_if_DASHlez);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_aget);
      if (lookahead == '-') ADVANCE(509);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_aget_DASHwide);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_aget_DASHobject);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_aget_DASHboolean);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_aget_DASHbyte);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_aget_DASHchar);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_aget_DASHshort);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_aput);
      if (lookahead == '-') ADVANCE(519);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_aput_DASHwide);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_aput_DASHobject);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_aput_DASHboolean);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_aput_DASHbyte);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_aput_DASHchar);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_aput_DASHshort);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_iget);
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_iget_DASHwide);
      if (lookahead == '-') ADVANCE(1266);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_iget_DASHobject);
      if (lookahead == '-') ADVANCE(1268);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_iget_DASHboolean);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_iget_DASHbyte);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_iget_DASHchar);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_iget_DASHshort);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_iput);
      if (lookahead == '-') ADVANCE(522);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_iput_DASHwide);
      if (lookahead == '-') ADVANCE(1267);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_iput_DASHobject);
      if (lookahead == '-') ADVANCE(1269);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_iput_DASHboolean);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_iput_DASHbyte);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_iput_DASHchar);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_iput_DASHshort);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_sget);
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_sget_DASHwide);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_sget_DASHobject);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_sget_DASHboolean);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_sget_DASHbyte);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_sget_DASHchar);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_sget_DASHshort);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_sput);
      if (lookahead == '-') ADVANCE(525);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_sput_DASHwide);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_sput_DASHobject);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_sput_DASHboolean);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_sput_DASHbyte);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_sput_DASHchar);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_sput_DASHshort);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead == '/') ADVANCE(1358);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '/') ADVANCE(1347);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead == '/') ADVANCE(1354);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_invoke_DASHstatic);
      if (lookahead == '/') ADVANCE(1356);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_invoke_DASHinterface);
      if (lookahead == '/') ADVANCE(1361);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_SLASHrange);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_SLASHrange);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect_SLASHrange);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_invoke_DASHstatic_SLASHrange);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_invoke_DASHinterface_SLASHrange);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_neg_DASHint);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_not_DASHint);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_neg_DASHlong);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_not_DASHlong);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_neg_DASHfloat);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_neg_DASHdouble);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHlong);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHfloat);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHdouble);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHint);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHfloat);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHdouble);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHint);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHlong);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHdouble);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHint);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHlong);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHfloat);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHbyte);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHchar);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHshort);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_add_DASHint);
      if (lookahead == '/') ADVANCE(214);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_sub_DASHint);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_mul_DASHint);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(anon_sym_div_DASHint);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(anon_sym_rem_DASHint);
      if (lookahead == '/') ADVANCE(219);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_and_DASHint);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_or_DASHint);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_xor_DASHint);
      if (lookahead == '/') ADVANCE(223);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_shl_DASHint);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_shr_DASHint);
      if (lookahead == '/') ADVANCE(221);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint);
      if (lookahead == '/') ADVANCE(232);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_add_DASHlong);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_sub_DASHlong);
      if (lookahead == '/') ADVANCE(231);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_mul_DASHlong);
      if (lookahead == '/') ADVANCE(227);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_div_DASHlong);
      if (lookahead == '/') ADVANCE(226);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_rem_DASHlong);
      if (lookahead == '/') ADVANCE(228);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_and_DASHlong);
      if (lookahead == '/') ADVANCE(225);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_or_DASHlong);
      if (lookahead == '/') ADVANCE(218);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_xor_DASHlong);
      if (lookahead == '/') ADVANCE(233);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_shl_DASHlong);
      if (lookahead == '/') ADVANCE(229);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_shr_DASHlong);
      if (lookahead == '/') ADVANCE(230);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_ushr_DASHlong);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_add_DASHfloat);
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_sub_DASHfloat);
      if (lookahead == '/') ADVANCE(238);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_mul_DASHfloat);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_div_DASHfloat);
      if (lookahead == '/') ADVANCE(235);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_rem_DASHfloat);
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_add_DASHdouble);
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_sub_DASHdouble);
      if (lookahead == '/') ADVANCE(244);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_mul_DASHdouble);
      if (lookahead == '/') ADVANCE(242);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_div_DASHdouble);
      if (lookahead == '/') ADVANCE(241);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_rem_DASHdouble);
      if (lookahead == '/') ADVANCE(243);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASH2addr);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASH2addr);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASH2addr);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASH2addr);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASH2addr);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASH2addr);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASH2addr);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASH2addr);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_shl_DASHint_SLASH2addr);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_shr_DASHint_SLASH2addr);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint_SLASH2addr);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_add_DASHlong_SLASH2addr);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_sub_DASHlong_SLASH2addr);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_mul_DASHlong_SLASH2addr);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_div_DASHlong_SLASH2addr);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_rem_DASHlong_SLASH2addr);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_and_DASHlong_SLASH2addr);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_or_DASHlong_SLASH2addr);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(anon_sym_xor_DASHlong_SLASH2addr);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(anon_sym_shl_DASHlong_SLASH2addr);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_shr_DASHlong_SLASH2addr);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(anon_sym_ushr_DASHlong_SLASH2addr);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(anon_sym_add_DASHfloat_SLASH2addr);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_sub_DASHfloat_SLASH2addr);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_mul_DASHfloat_SLASH2addr);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(anon_sym_div_DASHfloat_SLASH2addr);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(anon_sym_rem_DASHfloat_SLASH2addr);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(anon_sym_add_DASHdouble_SLASH2addr);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(anon_sym_sub_DASHdouble_SLASH2addr);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(anon_sym_mul_DASHdouble_SLASH2addr);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(anon_sym_div_DASHdouble_SLASH2addr);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(anon_sym_rem_DASHdouble_SLASH2addr);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASHlit16);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASHlit16);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASHlit16);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASHlit16);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASHlit16);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASHlit16);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASHlit16);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASHlit16);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASHlit8);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASHlit8);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASHlit8);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASHlit8);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASHlit8);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASHlit8);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASHlit8);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASHlit8);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_shl_DASHint_SLASHlit8);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_shr_DASHint_SLASHlit8);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint_SLASHlit8);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_execute_DASHinline);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect_DASHempty);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_iget_DASHquick);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_iget_DASHwide_DASHquick);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_iget_DASHobject_DASHquick);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_iput_DASHquick);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_iput_DASHwide_DASHquick);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_iput_DASHobject_DASHquick);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_DASHquick);
      if (lookahead == '/') ADVANCE(1364);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_DASHquick);
      if (lookahead == '/') ADVANCE(1363);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_DASHquick_SLASHrange);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_rsub_DASHint);
      if (lookahead == '/') ADVANCE(1032);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_rsub_DASHint_SLASHlit8);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_DOTline);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_DOTlocals);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_DOTcatch);
      if (lookahead == 'a') ADVANCE(1008);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_DOTcatchall);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_DOTpacked_DASHswitch);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_DOTendpacked_DASHswitch);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_DOTsparse_DASHswitch);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_DOTendsparse_DASHswitch);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_DOTarray_DASHdata);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_DOTendarray_DASHdata);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(sym_class_identifier);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_LTclinit_GT_LPAREN);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_LTinit_GT_LPAREN);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_V);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_J);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_synthetic);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_declared_DASHsynchronized);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1937);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_DOTenum);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1939);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1941);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1942);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'L' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(1945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1944);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == 'L' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(1943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1946);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '.') ADVANCE(1586);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'f') ADVANCE(1950);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1949);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == '.') ADVANCE(1586);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == 'f') ADVANCE(1950);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1949);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '.') ADVANCE(1586);
      if (lookahead == 'f') ADVANCE(1947);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '.') ADVANCE(1586);
      if (lookahead == 'f') ADVANCE(1947);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == 'f') ADVANCE(1947);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1953);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(1954);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '(') ADVANCE(1864);
      if (lookahead == ':') ADVANCE(1861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
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
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1590},
  [76] = {.lex_state = 1590},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1590},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1590},
  [101] = {.lex_state = 1590},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1590},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1590},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1590},
  [117] = {.lex_state = 1590},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1590},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1590},
  [122] = {.lex_state = 1590},
  [123] = {.lex_state = 1590},
  [124] = {.lex_state = 1590},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1590},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1590},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1590},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1590},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1590},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1590},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1590},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1590},
  [155] = {.lex_state = 1590},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1590},
  [171] = {.lex_state = 1590},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 4},
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
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTclass] = ACTIONS(1),
    [anon_sym_DOTsuper] = ACTIONS(1),
    [anon_sym_DOTsource] = ACTIONS(1),
    [anon_sym_DOTimplements] = ACTIONS(1),
    [anon_sym_DOTfield] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_end_field] = ACTIONS(1),
    [anon_sym_DOTmethod] = ACTIONS(1),
    [sym_end_method] = ACTIONS(1),
    [anon_sym_DOTannotation] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_build] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [sym_end_annotation] = ACTIONS(1),
    [anon_sym_DOTsubannotation] = ACTIONS(1),
    [sym_end_subannotation] = ACTIONS(1),
    [anon_sym_DOTparam] = ACTIONS(1),
    [sym_end_param] = ACTIONS(1),
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
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(1),
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
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(1),
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
    [anon_sym_rsub_DASHint] = ACTIONS(1),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(1),
    [anon_sym_DOTline] = ACTIONS(1),
    [anon_sym_DOTlocals] = ACTIONS(1),
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
    [anon_sym_LTclinit_GT_LPAREN] = ACTIONS(1),
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
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_varargs] = ACTIONS(1),
    [anon_sym_declared_DASHsynchronized] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTenum] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_parameter] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [aux_sym_number_literal_token2] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_class_definition] = STATE(184),
    [sym_class_declaration] = STATE(164),
    [anon_sym_DOTclass] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DOTfield] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [sym_end_field] = ACTIONS(7),
    [anon_sym_DOTmethod] = ACTIONS(7),
    [sym_end_method] = ACTIONS(7),
    [anon_sym_DOTannotation] = ACTIONS(7),
    [anon_sym_DOTparam] = ACTIONS(7),
    [sym_label] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
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
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(7),
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
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(7),
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
    [anon_sym_rsub_DASHint] = ACTIONS(9),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(7),
    [anon_sym_DOTline] = ACTIONS(7),
    [anon_sym_DOTlocals] = ACTIONS(7),
    [anon_sym_DOTcatch] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_DOTcatchall] = ACTIONS(7),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(7),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(7),
    [anon_sym_DASH_GT] = ACTIONS(7),
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
    [anon_sym_EQ] = ACTIONS(11),
    [sym_end_field] = ACTIONS(11),
    [anon_sym_DOTmethod] = ACTIONS(11),
    [sym_end_method] = ACTIONS(11),
    [anon_sym_DOTannotation] = ACTIONS(11),
    [anon_sym_DOTparam] = ACTIONS(11),
    [sym_label] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
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
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(11),
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
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(11),
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
    [anon_sym_rsub_DASHint] = ACTIONS(13),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(11),
    [anon_sym_DOTline] = ACTIONS(11),
    [anon_sym_DOTlocals] = ACTIONS(11),
    [anon_sym_DOTcatch] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_DOTcatchall] = ACTIONS(11),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(11),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
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
    [sym_annotation_definition] = STATE(24),
    [sym_annotation_declaration] = STATE(123),
    [sym_param_definition] = STATE(24),
    [sym_param_declaration] = STATE(10),
    [sym__code_line] = STATE(24),
    [sym_statement] = STATE(24),
    [sym_opcode] = STATE(32),
    [sym__declaration] = STATE(24),
    [sym_line_declaration] = STATE(24),
    [sym_locals_declaration] = STATE(24),
    [sym_catch_declaration] = STATE(24),
    [sym_catchall_declaration] = STATE(24),
    [sym_packed_switch_declaration] = STATE(24),
    [sym_sparse_switch_declaration] = STATE(24),
    [sym_array_data_declaration] = STATE(24),
    [aux_sym_method_definition_repeat1] = STATE(4),
    [sym_end_method] = ACTIONS(15),
    [anon_sym_DOTannotation] = ACTIONS(17),
    [anon_sym_DOTparam] = ACTIONS(20),
    [sym_label] = ACTIONS(23),
    [anon_sym_nop] = ACTIONS(26),
    [anon_sym_move] = ACTIONS(29),
    [anon_sym_move_SLASHfrom16] = ACTIONS(26),
    [anon_sym_move_SLASH16] = ACTIONS(26),
    [anon_sym_move_DASHwide] = ACTIONS(29),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(26),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(26),
    [anon_sym_move_DASHobject] = ACTIONS(29),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(26),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(26),
    [anon_sym_move_DASHresult] = ACTIONS(29),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(26),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(26),
    [anon_sym_move_DASHexception] = ACTIONS(26),
    [anon_sym_return_DASHvoid] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_return_DASHwide] = ACTIONS(26),
    [anon_sym_return_DASHobject] = ACTIONS(26),
    [anon_sym_const_SLASH4] = ACTIONS(26),
    [anon_sym_const_SLASH16] = ACTIONS(26),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_const_SLASHhigh16] = ACTIONS(26),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(26),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(26),
    [anon_sym_const_DASHwide] = ACTIONS(29),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(26),
    [anon_sym_const_DASHstring] = ACTIONS(29),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(26),
    [anon_sym_const_DASHclass] = ACTIONS(26),
    [anon_sym_monitor_DASHenter] = ACTIONS(26),
    [anon_sym_monitor_DASHexit] = ACTIONS(26),
    [anon_sym_check_DASHcast] = ACTIONS(26),
    [anon_sym_instance_DASHof] = ACTIONS(26),
    [anon_sym_array_DASHlength] = ACTIONS(26),
    [anon_sym_new_DASHinstance] = ACTIONS(26),
    [anon_sym_new_DASHarray] = ACTIONS(26),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(29),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(26),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(26),
    [anon_sym_throw] = ACTIONS(26),
    [anon_sym_goto] = ACTIONS(29),
    [anon_sym_goto_SLASH16] = ACTIONS(26),
    [anon_sym_goto_SLASH32] = ACTIONS(26),
    [anon_sym_packed_DASHswitch] = ACTIONS(26),
    [anon_sym_sparse_DASHswitch] = ACTIONS(26),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(26),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(26),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(26),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(26),
    [anon_sym_cmp_DASHlong] = ACTIONS(26),
    [anon_sym_if_DASHeq] = ACTIONS(29),
    [anon_sym_if_DASHne] = ACTIONS(29),
    [anon_sym_if_DASHlt] = ACTIONS(29),
    [anon_sym_if_DASHge] = ACTIONS(29),
    [anon_sym_if_DASHgt] = ACTIONS(29),
    [anon_sym_if_DASHle] = ACTIONS(29),
    [anon_sym_if_DASHeqz] = ACTIONS(26),
    [anon_sym_if_DASHnez] = ACTIONS(26),
    [anon_sym_if_DASHltz] = ACTIONS(26),
    [anon_sym_if_DASHgez] = ACTIONS(26),
    [anon_sym_if_DASHgtz] = ACTIONS(26),
    [anon_sym_if_DASHlez] = ACTIONS(26),
    [anon_sym_aget] = ACTIONS(29),
    [anon_sym_aget_DASHwide] = ACTIONS(26),
    [anon_sym_aget_DASHobject] = ACTIONS(26),
    [anon_sym_aget_DASHboolean] = ACTIONS(26),
    [anon_sym_aget_DASHbyte] = ACTIONS(26),
    [anon_sym_aget_DASHchar] = ACTIONS(26),
    [anon_sym_aget_DASHshort] = ACTIONS(26),
    [anon_sym_aput] = ACTIONS(29),
    [anon_sym_aput_DASHwide] = ACTIONS(26),
    [anon_sym_aput_DASHobject] = ACTIONS(26),
    [anon_sym_aput_DASHboolean] = ACTIONS(26),
    [anon_sym_aput_DASHbyte] = ACTIONS(26),
    [anon_sym_aput_DASHchar] = ACTIONS(26),
    [anon_sym_aput_DASHshort] = ACTIONS(26),
    [anon_sym_iget] = ACTIONS(29),
    [anon_sym_iget_DASHwide] = ACTIONS(29),
    [anon_sym_iget_DASHobject] = ACTIONS(29),
    [anon_sym_iget_DASHboolean] = ACTIONS(26),
    [anon_sym_iget_DASHbyte] = ACTIONS(26),
    [anon_sym_iget_DASHchar] = ACTIONS(26),
    [anon_sym_iget_DASHshort] = ACTIONS(26),
    [anon_sym_iput] = ACTIONS(29),
    [anon_sym_iput_DASHwide] = ACTIONS(29),
    [anon_sym_iput_DASHobject] = ACTIONS(29),
    [anon_sym_iput_DASHboolean] = ACTIONS(26),
    [anon_sym_iput_DASHbyte] = ACTIONS(26),
    [anon_sym_iput_DASHchar] = ACTIONS(26),
    [anon_sym_iput_DASHshort] = ACTIONS(26),
    [anon_sym_sget] = ACTIONS(29),
    [anon_sym_sget_DASHwide] = ACTIONS(26),
    [anon_sym_sget_DASHobject] = ACTIONS(26),
    [anon_sym_sget_DASHboolean] = ACTIONS(26),
    [anon_sym_sget_DASHbyte] = ACTIONS(26),
    [anon_sym_sget_DASHchar] = ACTIONS(26),
    [anon_sym_sget_DASHshort] = ACTIONS(26),
    [anon_sym_sput] = ACTIONS(29),
    [anon_sym_sput_DASHwide] = ACTIONS(26),
    [anon_sym_sput_DASHobject] = ACTIONS(26),
    [anon_sym_sput_DASHboolean] = ACTIONS(26),
    [anon_sym_sput_DASHbyte] = ACTIONS(26),
    [anon_sym_sput_DASHchar] = ACTIONS(26),
    [anon_sym_sput_DASHshort] = ACTIONS(26),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(29),
    [anon_sym_invoke_DASHsuper] = ACTIONS(29),
    [anon_sym_invoke_DASHdirect] = ACTIONS(29),
    [anon_sym_invoke_DASHstatic] = ACTIONS(29),
    [anon_sym_invoke_DASHinterface] = ACTIONS(29),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(26),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(26),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(26),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(26),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(26),
    [anon_sym_neg_DASHint] = ACTIONS(26),
    [anon_sym_not_DASHint] = ACTIONS(26),
    [anon_sym_neg_DASHlong] = ACTIONS(26),
    [anon_sym_not_DASHlong] = ACTIONS(26),
    [anon_sym_neg_DASHfloat] = ACTIONS(26),
    [anon_sym_neg_DASHdouble] = ACTIONS(26),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(26),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(26),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(26),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(26),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(26),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(26),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(26),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(26),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(26),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(26),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(26),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(26),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(26),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(26),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(26),
    [anon_sym_add_DASHint] = ACTIONS(29),
    [anon_sym_sub_DASHint] = ACTIONS(29),
    [anon_sym_mul_DASHint] = ACTIONS(29),
    [anon_sym_div_DASHint] = ACTIONS(29),
    [anon_sym_rem_DASHint] = ACTIONS(29),
    [anon_sym_and_DASHint] = ACTIONS(29),
    [anon_sym_or_DASHint] = ACTIONS(29),
    [anon_sym_xor_DASHint] = ACTIONS(29),
    [anon_sym_shl_DASHint] = ACTIONS(29),
    [anon_sym_shr_DASHint] = ACTIONS(29),
    [anon_sym_ushr_DASHint] = ACTIONS(29),
    [anon_sym_add_DASHlong] = ACTIONS(29),
    [anon_sym_sub_DASHlong] = ACTIONS(29),
    [anon_sym_mul_DASHlong] = ACTIONS(29),
    [anon_sym_div_DASHlong] = ACTIONS(29),
    [anon_sym_rem_DASHlong] = ACTIONS(29),
    [anon_sym_and_DASHlong] = ACTIONS(29),
    [anon_sym_or_DASHlong] = ACTIONS(29),
    [anon_sym_xor_DASHlong] = ACTIONS(29),
    [anon_sym_shl_DASHlong] = ACTIONS(29),
    [anon_sym_shr_DASHlong] = ACTIONS(29),
    [anon_sym_ushr_DASHlong] = ACTIONS(29),
    [anon_sym_add_DASHfloat] = ACTIONS(29),
    [anon_sym_sub_DASHfloat] = ACTIONS(29),
    [anon_sym_mul_DASHfloat] = ACTIONS(29),
    [anon_sym_div_DASHfloat] = ACTIONS(29),
    [anon_sym_rem_DASHfloat] = ACTIONS(29),
    [anon_sym_add_DASHdouble] = ACTIONS(29),
    [anon_sym_sub_DASHdouble] = ACTIONS(29),
    [anon_sym_mul_DASHdouble] = ACTIONS(29),
    [anon_sym_div_DASHdouble] = ACTIONS(29),
    [anon_sym_rem_DASHdouble] = ACTIONS(29),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(26),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(26),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(26),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(26),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(26),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(26),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(26),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(26),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(26),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(26),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(26),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(26),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(26),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_execute_DASHinline] = ACTIONS(26),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(26),
    [anon_sym_iget_DASHquick] = ACTIONS(26),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(26),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(26),
    [anon_sym_iput_DASHquick] = ACTIONS(26),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(26),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(26),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(29),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(26),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(29),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(26),
    [anon_sym_rsub_DASHint] = ACTIONS(29),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(26),
    [anon_sym_DOTline] = ACTIONS(32),
    [anon_sym_DOTlocals] = ACTIONS(35),
    [anon_sym_DOTcatch] = ACTIONS(38),
    [anon_sym_DOTcatchall] = ACTIONS(41),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(44),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(47),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_annotation_definition] = STATE(24),
    [sym_annotation_declaration] = STATE(123),
    [sym_param_definition] = STATE(24),
    [sym_param_declaration] = STATE(10),
    [sym__code_line] = STATE(24),
    [sym_statement] = STATE(24),
    [sym_opcode] = STATE(32),
    [sym__declaration] = STATE(24),
    [sym_line_declaration] = STATE(24),
    [sym_locals_declaration] = STATE(24),
    [sym_catch_declaration] = STATE(24),
    [sym_catchall_declaration] = STATE(24),
    [sym_packed_switch_declaration] = STATE(24),
    [sym_sparse_switch_declaration] = STATE(24),
    [sym_array_data_declaration] = STATE(24),
    [aux_sym_method_definition_repeat1] = STATE(4),
    [sym_end_method] = ACTIONS(53),
    [anon_sym_DOTannotation] = ACTIONS(55),
    [anon_sym_DOTparam] = ACTIONS(57),
    [sym_label] = ACTIONS(59),
    [anon_sym_nop] = ACTIONS(61),
    [anon_sym_move] = ACTIONS(63),
    [anon_sym_move_SLASHfrom16] = ACTIONS(61),
    [anon_sym_move_SLASH16] = ACTIONS(61),
    [anon_sym_move_DASHwide] = ACTIONS(63),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(61),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(61),
    [anon_sym_move_DASHobject] = ACTIONS(63),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(61),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(61),
    [anon_sym_move_DASHresult] = ACTIONS(63),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(61),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(61),
    [anon_sym_move_DASHexception] = ACTIONS(61),
    [anon_sym_return_DASHvoid] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_return_DASHwide] = ACTIONS(61),
    [anon_sym_return_DASHobject] = ACTIONS(61),
    [anon_sym_const_SLASH4] = ACTIONS(61),
    [anon_sym_const_SLASH16] = ACTIONS(61),
    [anon_sym_const] = ACTIONS(63),
    [anon_sym_const_SLASHhigh16] = ACTIONS(61),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(61),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(61),
    [anon_sym_const_DASHwide] = ACTIONS(63),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(61),
    [anon_sym_const_DASHstring] = ACTIONS(63),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(61),
    [anon_sym_const_DASHclass] = ACTIONS(61),
    [anon_sym_monitor_DASHenter] = ACTIONS(61),
    [anon_sym_monitor_DASHexit] = ACTIONS(61),
    [anon_sym_check_DASHcast] = ACTIONS(61),
    [anon_sym_instance_DASHof] = ACTIONS(61),
    [anon_sym_array_DASHlength] = ACTIONS(61),
    [anon_sym_new_DASHinstance] = ACTIONS(61),
    [anon_sym_new_DASHarray] = ACTIONS(61),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(63),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(61),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(61),
    [anon_sym_throw] = ACTIONS(61),
    [anon_sym_goto] = ACTIONS(63),
    [anon_sym_goto_SLASH16] = ACTIONS(61),
    [anon_sym_goto_SLASH32] = ACTIONS(61),
    [anon_sym_packed_DASHswitch] = ACTIONS(61),
    [anon_sym_sparse_DASHswitch] = ACTIONS(61),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(61),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(61),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(61),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(61),
    [anon_sym_cmp_DASHlong] = ACTIONS(61),
    [anon_sym_if_DASHeq] = ACTIONS(63),
    [anon_sym_if_DASHne] = ACTIONS(63),
    [anon_sym_if_DASHlt] = ACTIONS(63),
    [anon_sym_if_DASHge] = ACTIONS(63),
    [anon_sym_if_DASHgt] = ACTIONS(63),
    [anon_sym_if_DASHle] = ACTIONS(63),
    [anon_sym_if_DASHeqz] = ACTIONS(61),
    [anon_sym_if_DASHnez] = ACTIONS(61),
    [anon_sym_if_DASHltz] = ACTIONS(61),
    [anon_sym_if_DASHgez] = ACTIONS(61),
    [anon_sym_if_DASHgtz] = ACTIONS(61),
    [anon_sym_if_DASHlez] = ACTIONS(61),
    [anon_sym_aget] = ACTIONS(63),
    [anon_sym_aget_DASHwide] = ACTIONS(61),
    [anon_sym_aget_DASHobject] = ACTIONS(61),
    [anon_sym_aget_DASHboolean] = ACTIONS(61),
    [anon_sym_aget_DASHbyte] = ACTIONS(61),
    [anon_sym_aget_DASHchar] = ACTIONS(61),
    [anon_sym_aget_DASHshort] = ACTIONS(61),
    [anon_sym_aput] = ACTIONS(63),
    [anon_sym_aput_DASHwide] = ACTIONS(61),
    [anon_sym_aput_DASHobject] = ACTIONS(61),
    [anon_sym_aput_DASHboolean] = ACTIONS(61),
    [anon_sym_aput_DASHbyte] = ACTIONS(61),
    [anon_sym_aput_DASHchar] = ACTIONS(61),
    [anon_sym_aput_DASHshort] = ACTIONS(61),
    [anon_sym_iget] = ACTIONS(63),
    [anon_sym_iget_DASHwide] = ACTIONS(63),
    [anon_sym_iget_DASHobject] = ACTIONS(63),
    [anon_sym_iget_DASHboolean] = ACTIONS(61),
    [anon_sym_iget_DASHbyte] = ACTIONS(61),
    [anon_sym_iget_DASHchar] = ACTIONS(61),
    [anon_sym_iget_DASHshort] = ACTIONS(61),
    [anon_sym_iput] = ACTIONS(63),
    [anon_sym_iput_DASHwide] = ACTIONS(63),
    [anon_sym_iput_DASHobject] = ACTIONS(63),
    [anon_sym_iput_DASHboolean] = ACTIONS(61),
    [anon_sym_iput_DASHbyte] = ACTIONS(61),
    [anon_sym_iput_DASHchar] = ACTIONS(61),
    [anon_sym_iput_DASHshort] = ACTIONS(61),
    [anon_sym_sget] = ACTIONS(63),
    [anon_sym_sget_DASHwide] = ACTIONS(61),
    [anon_sym_sget_DASHobject] = ACTIONS(61),
    [anon_sym_sget_DASHboolean] = ACTIONS(61),
    [anon_sym_sget_DASHbyte] = ACTIONS(61),
    [anon_sym_sget_DASHchar] = ACTIONS(61),
    [anon_sym_sget_DASHshort] = ACTIONS(61),
    [anon_sym_sput] = ACTIONS(63),
    [anon_sym_sput_DASHwide] = ACTIONS(61),
    [anon_sym_sput_DASHobject] = ACTIONS(61),
    [anon_sym_sput_DASHboolean] = ACTIONS(61),
    [anon_sym_sput_DASHbyte] = ACTIONS(61),
    [anon_sym_sput_DASHchar] = ACTIONS(61),
    [anon_sym_sput_DASHshort] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(63),
    [anon_sym_invoke_DASHsuper] = ACTIONS(63),
    [anon_sym_invoke_DASHdirect] = ACTIONS(63),
    [anon_sym_invoke_DASHstatic] = ACTIONS(63),
    [anon_sym_invoke_DASHinterface] = ACTIONS(63),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(61),
    [anon_sym_neg_DASHint] = ACTIONS(61),
    [anon_sym_not_DASHint] = ACTIONS(61),
    [anon_sym_neg_DASHlong] = ACTIONS(61),
    [anon_sym_not_DASHlong] = ACTIONS(61),
    [anon_sym_neg_DASHfloat] = ACTIONS(61),
    [anon_sym_neg_DASHdouble] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(61),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(61),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(61),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(61),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(61),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(61),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(61),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(61),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(61),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(61),
    [anon_sym_add_DASHint] = ACTIONS(63),
    [anon_sym_sub_DASHint] = ACTIONS(63),
    [anon_sym_mul_DASHint] = ACTIONS(63),
    [anon_sym_div_DASHint] = ACTIONS(63),
    [anon_sym_rem_DASHint] = ACTIONS(63),
    [anon_sym_and_DASHint] = ACTIONS(63),
    [anon_sym_or_DASHint] = ACTIONS(63),
    [anon_sym_xor_DASHint] = ACTIONS(63),
    [anon_sym_shl_DASHint] = ACTIONS(63),
    [anon_sym_shr_DASHint] = ACTIONS(63),
    [anon_sym_ushr_DASHint] = ACTIONS(63),
    [anon_sym_add_DASHlong] = ACTIONS(63),
    [anon_sym_sub_DASHlong] = ACTIONS(63),
    [anon_sym_mul_DASHlong] = ACTIONS(63),
    [anon_sym_div_DASHlong] = ACTIONS(63),
    [anon_sym_rem_DASHlong] = ACTIONS(63),
    [anon_sym_and_DASHlong] = ACTIONS(63),
    [anon_sym_or_DASHlong] = ACTIONS(63),
    [anon_sym_xor_DASHlong] = ACTIONS(63),
    [anon_sym_shl_DASHlong] = ACTIONS(63),
    [anon_sym_shr_DASHlong] = ACTIONS(63),
    [anon_sym_ushr_DASHlong] = ACTIONS(63),
    [anon_sym_add_DASHfloat] = ACTIONS(63),
    [anon_sym_sub_DASHfloat] = ACTIONS(63),
    [anon_sym_mul_DASHfloat] = ACTIONS(63),
    [anon_sym_div_DASHfloat] = ACTIONS(63),
    [anon_sym_rem_DASHfloat] = ACTIONS(63),
    [anon_sym_add_DASHdouble] = ACTIONS(63),
    [anon_sym_sub_DASHdouble] = ACTIONS(63),
    [anon_sym_mul_DASHdouble] = ACTIONS(63),
    [anon_sym_div_DASHdouble] = ACTIONS(63),
    [anon_sym_rem_DASHdouble] = ACTIONS(63),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_execute_DASHinline] = ACTIONS(61),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(61),
    [anon_sym_iget_DASHquick] = ACTIONS(61),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(61),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(61),
    [anon_sym_iput_DASHquick] = ACTIONS(61),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(61),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(63),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(63),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(61),
    [anon_sym_rsub_DASHint] = ACTIONS(63),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_DOTline] = ACTIONS(65),
    [anon_sym_DOTlocals] = ACTIONS(67),
    [anon_sym_DOTcatch] = ACTIONS(69),
    [anon_sym_DOTcatchall] = ACTIONS(71),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(73),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(75),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_annotation_definition] = STATE(24),
    [sym_annotation_declaration] = STATE(123),
    [sym_param_definition] = STATE(24),
    [sym_param_declaration] = STATE(10),
    [sym__code_line] = STATE(24),
    [sym_statement] = STATE(24),
    [sym_opcode] = STATE(32),
    [sym__declaration] = STATE(24),
    [sym_line_declaration] = STATE(24),
    [sym_locals_declaration] = STATE(24),
    [sym_catch_declaration] = STATE(24),
    [sym_catchall_declaration] = STATE(24),
    [sym_packed_switch_declaration] = STATE(24),
    [sym_sparse_switch_declaration] = STATE(24),
    [sym_array_data_declaration] = STATE(24),
    [aux_sym_method_definition_repeat1] = STATE(5),
    [sym_end_method] = ACTIONS(79),
    [anon_sym_DOTannotation] = ACTIONS(55),
    [anon_sym_DOTparam] = ACTIONS(57),
    [sym_label] = ACTIONS(59),
    [anon_sym_nop] = ACTIONS(61),
    [anon_sym_move] = ACTIONS(63),
    [anon_sym_move_SLASHfrom16] = ACTIONS(61),
    [anon_sym_move_SLASH16] = ACTIONS(61),
    [anon_sym_move_DASHwide] = ACTIONS(63),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(61),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(61),
    [anon_sym_move_DASHobject] = ACTIONS(63),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(61),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(61),
    [anon_sym_move_DASHresult] = ACTIONS(63),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(61),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(61),
    [anon_sym_move_DASHexception] = ACTIONS(61),
    [anon_sym_return_DASHvoid] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_return_DASHwide] = ACTIONS(61),
    [anon_sym_return_DASHobject] = ACTIONS(61),
    [anon_sym_const_SLASH4] = ACTIONS(61),
    [anon_sym_const_SLASH16] = ACTIONS(61),
    [anon_sym_const] = ACTIONS(63),
    [anon_sym_const_SLASHhigh16] = ACTIONS(61),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(61),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(61),
    [anon_sym_const_DASHwide] = ACTIONS(63),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(61),
    [anon_sym_const_DASHstring] = ACTIONS(63),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(61),
    [anon_sym_const_DASHclass] = ACTIONS(61),
    [anon_sym_monitor_DASHenter] = ACTIONS(61),
    [anon_sym_monitor_DASHexit] = ACTIONS(61),
    [anon_sym_check_DASHcast] = ACTIONS(61),
    [anon_sym_instance_DASHof] = ACTIONS(61),
    [anon_sym_array_DASHlength] = ACTIONS(61),
    [anon_sym_new_DASHinstance] = ACTIONS(61),
    [anon_sym_new_DASHarray] = ACTIONS(61),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(63),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(61),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(61),
    [anon_sym_throw] = ACTIONS(61),
    [anon_sym_goto] = ACTIONS(63),
    [anon_sym_goto_SLASH16] = ACTIONS(61),
    [anon_sym_goto_SLASH32] = ACTIONS(61),
    [anon_sym_packed_DASHswitch] = ACTIONS(61),
    [anon_sym_sparse_DASHswitch] = ACTIONS(61),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(61),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(61),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(61),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(61),
    [anon_sym_cmp_DASHlong] = ACTIONS(61),
    [anon_sym_if_DASHeq] = ACTIONS(63),
    [anon_sym_if_DASHne] = ACTIONS(63),
    [anon_sym_if_DASHlt] = ACTIONS(63),
    [anon_sym_if_DASHge] = ACTIONS(63),
    [anon_sym_if_DASHgt] = ACTIONS(63),
    [anon_sym_if_DASHle] = ACTIONS(63),
    [anon_sym_if_DASHeqz] = ACTIONS(61),
    [anon_sym_if_DASHnez] = ACTIONS(61),
    [anon_sym_if_DASHltz] = ACTIONS(61),
    [anon_sym_if_DASHgez] = ACTIONS(61),
    [anon_sym_if_DASHgtz] = ACTIONS(61),
    [anon_sym_if_DASHlez] = ACTIONS(61),
    [anon_sym_aget] = ACTIONS(63),
    [anon_sym_aget_DASHwide] = ACTIONS(61),
    [anon_sym_aget_DASHobject] = ACTIONS(61),
    [anon_sym_aget_DASHboolean] = ACTIONS(61),
    [anon_sym_aget_DASHbyte] = ACTIONS(61),
    [anon_sym_aget_DASHchar] = ACTIONS(61),
    [anon_sym_aget_DASHshort] = ACTIONS(61),
    [anon_sym_aput] = ACTIONS(63),
    [anon_sym_aput_DASHwide] = ACTIONS(61),
    [anon_sym_aput_DASHobject] = ACTIONS(61),
    [anon_sym_aput_DASHboolean] = ACTIONS(61),
    [anon_sym_aput_DASHbyte] = ACTIONS(61),
    [anon_sym_aput_DASHchar] = ACTIONS(61),
    [anon_sym_aput_DASHshort] = ACTIONS(61),
    [anon_sym_iget] = ACTIONS(63),
    [anon_sym_iget_DASHwide] = ACTIONS(63),
    [anon_sym_iget_DASHobject] = ACTIONS(63),
    [anon_sym_iget_DASHboolean] = ACTIONS(61),
    [anon_sym_iget_DASHbyte] = ACTIONS(61),
    [anon_sym_iget_DASHchar] = ACTIONS(61),
    [anon_sym_iget_DASHshort] = ACTIONS(61),
    [anon_sym_iput] = ACTIONS(63),
    [anon_sym_iput_DASHwide] = ACTIONS(63),
    [anon_sym_iput_DASHobject] = ACTIONS(63),
    [anon_sym_iput_DASHboolean] = ACTIONS(61),
    [anon_sym_iput_DASHbyte] = ACTIONS(61),
    [anon_sym_iput_DASHchar] = ACTIONS(61),
    [anon_sym_iput_DASHshort] = ACTIONS(61),
    [anon_sym_sget] = ACTIONS(63),
    [anon_sym_sget_DASHwide] = ACTIONS(61),
    [anon_sym_sget_DASHobject] = ACTIONS(61),
    [anon_sym_sget_DASHboolean] = ACTIONS(61),
    [anon_sym_sget_DASHbyte] = ACTIONS(61),
    [anon_sym_sget_DASHchar] = ACTIONS(61),
    [anon_sym_sget_DASHshort] = ACTIONS(61),
    [anon_sym_sput] = ACTIONS(63),
    [anon_sym_sput_DASHwide] = ACTIONS(61),
    [anon_sym_sput_DASHobject] = ACTIONS(61),
    [anon_sym_sput_DASHboolean] = ACTIONS(61),
    [anon_sym_sput_DASHbyte] = ACTIONS(61),
    [anon_sym_sput_DASHchar] = ACTIONS(61),
    [anon_sym_sput_DASHshort] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(63),
    [anon_sym_invoke_DASHsuper] = ACTIONS(63),
    [anon_sym_invoke_DASHdirect] = ACTIONS(63),
    [anon_sym_invoke_DASHstatic] = ACTIONS(63),
    [anon_sym_invoke_DASHinterface] = ACTIONS(63),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(61),
    [anon_sym_neg_DASHint] = ACTIONS(61),
    [anon_sym_not_DASHint] = ACTIONS(61),
    [anon_sym_neg_DASHlong] = ACTIONS(61),
    [anon_sym_not_DASHlong] = ACTIONS(61),
    [anon_sym_neg_DASHfloat] = ACTIONS(61),
    [anon_sym_neg_DASHdouble] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(61),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(61),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(61),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(61),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(61),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(61),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(61),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(61),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(61),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(61),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(61),
    [anon_sym_add_DASHint] = ACTIONS(63),
    [anon_sym_sub_DASHint] = ACTIONS(63),
    [anon_sym_mul_DASHint] = ACTIONS(63),
    [anon_sym_div_DASHint] = ACTIONS(63),
    [anon_sym_rem_DASHint] = ACTIONS(63),
    [anon_sym_and_DASHint] = ACTIONS(63),
    [anon_sym_or_DASHint] = ACTIONS(63),
    [anon_sym_xor_DASHint] = ACTIONS(63),
    [anon_sym_shl_DASHint] = ACTIONS(63),
    [anon_sym_shr_DASHint] = ACTIONS(63),
    [anon_sym_ushr_DASHint] = ACTIONS(63),
    [anon_sym_add_DASHlong] = ACTIONS(63),
    [anon_sym_sub_DASHlong] = ACTIONS(63),
    [anon_sym_mul_DASHlong] = ACTIONS(63),
    [anon_sym_div_DASHlong] = ACTIONS(63),
    [anon_sym_rem_DASHlong] = ACTIONS(63),
    [anon_sym_and_DASHlong] = ACTIONS(63),
    [anon_sym_or_DASHlong] = ACTIONS(63),
    [anon_sym_xor_DASHlong] = ACTIONS(63),
    [anon_sym_shl_DASHlong] = ACTIONS(63),
    [anon_sym_shr_DASHlong] = ACTIONS(63),
    [anon_sym_ushr_DASHlong] = ACTIONS(63),
    [anon_sym_add_DASHfloat] = ACTIONS(63),
    [anon_sym_sub_DASHfloat] = ACTIONS(63),
    [anon_sym_mul_DASHfloat] = ACTIONS(63),
    [anon_sym_div_DASHfloat] = ACTIONS(63),
    [anon_sym_rem_DASHfloat] = ACTIONS(63),
    [anon_sym_add_DASHdouble] = ACTIONS(63),
    [anon_sym_sub_DASHdouble] = ACTIONS(63),
    [anon_sym_mul_DASHdouble] = ACTIONS(63),
    [anon_sym_div_DASHdouble] = ACTIONS(63),
    [anon_sym_rem_DASHdouble] = ACTIONS(63),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(61),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(61),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_execute_DASHinline] = ACTIONS(61),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(61),
    [anon_sym_iget_DASHquick] = ACTIONS(61),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(61),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(61),
    [anon_sym_iput_DASHquick] = ACTIONS(61),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(61),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(61),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(63),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(61),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(63),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(61),
    [anon_sym_rsub_DASHint] = ACTIONS(63),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(61),
    [anon_sym_DOTline] = ACTIONS(65),
    [anon_sym_DOTlocals] = ACTIONS(67),
    [anon_sym_DOTcatch] = ACTIONS(69),
    [anon_sym_DOTcatchall] = ACTIONS(71),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(73),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(75),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_DOTfield] = ACTIONS(81),
    [sym_end_field] = ACTIONS(81),
    [anon_sym_DOTmethod] = ACTIONS(81),
    [sym_end_method] = ACTIONS(81),
    [anon_sym_DOTannotation] = ACTIONS(81),
    [anon_sym_DOTparam] = ACTIONS(81),
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
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(81),
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
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(81),
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
    [anon_sym_rsub_DASHint] = ACTIONS(83),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(81),
    [anon_sym_DOTline] = ACTIONS(81),
    [anon_sym_DOTlocals] = ACTIONS(81),
    [anon_sym_DOTcatch] = ACTIONS(83),
    [anon_sym_DOT_DOT] = ACTIONS(81),
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
    [anon_sym_DOTparam] = ACTIONS(85),
    [sym_end_param] = ACTIONS(85),
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
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(85),
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
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(85),
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
    [anon_sym_rsub_DASHint] = ACTIONS(87),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(85),
    [anon_sym_DOTline] = ACTIONS(85),
    [anon_sym_DOTlocals] = ACTIONS(85),
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
    [anon_sym_DOTparam] = ACTIONS(89),
    [sym_end_param] = ACTIONS(89),
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
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(89),
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
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(89),
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
    [anon_sym_rsub_DASHint] = ACTIONS(91),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(89),
    [anon_sym_DOTline] = ACTIONS(89),
    [anon_sym_DOTlocals] = ACTIONS(89),
    [anon_sym_DOTcatch] = ACTIONS(91),
    [anon_sym_DOTcatchall] = ACTIONS(89),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(89),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(89),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_annotation_definition] = STATE(107),
    [sym_annotation_declaration] = STATE(123),
    [aux_sym_class_definition_repeat2] = STATE(107),
    [sym_end_method] = ACTIONS(93),
    [anon_sym_DOTannotation] = ACTIONS(55),
    [anon_sym_DOTparam] = ACTIONS(93),
    [sym_end_param] = ACTIONS(95),
    [sym_label] = ACTIONS(93),
    [anon_sym_nop] = ACTIONS(93),
    [anon_sym_move] = ACTIONS(97),
    [anon_sym_move_SLASHfrom16] = ACTIONS(93),
    [anon_sym_move_SLASH16] = ACTIONS(93),
    [anon_sym_move_DASHwide] = ACTIONS(97),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(93),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(93),
    [anon_sym_move_DASHobject] = ACTIONS(97),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(93),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(93),
    [anon_sym_move_DASHresult] = ACTIONS(97),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(93),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(93),
    [anon_sym_move_DASHexception] = ACTIONS(93),
    [anon_sym_return_DASHvoid] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(97),
    [anon_sym_return_DASHwide] = ACTIONS(93),
    [anon_sym_return_DASHobject] = ACTIONS(93),
    [anon_sym_const_SLASH4] = ACTIONS(93),
    [anon_sym_const_SLASH16] = ACTIONS(93),
    [anon_sym_const] = ACTIONS(97),
    [anon_sym_const_SLASHhigh16] = ACTIONS(93),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(93),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(93),
    [anon_sym_const_DASHwide] = ACTIONS(97),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(93),
    [anon_sym_const_DASHstring] = ACTIONS(97),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(93),
    [anon_sym_const_DASHclass] = ACTIONS(93),
    [anon_sym_monitor_DASHenter] = ACTIONS(93),
    [anon_sym_monitor_DASHexit] = ACTIONS(93),
    [anon_sym_check_DASHcast] = ACTIONS(93),
    [anon_sym_instance_DASHof] = ACTIONS(93),
    [anon_sym_array_DASHlength] = ACTIONS(93),
    [anon_sym_new_DASHinstance] = ACTIONS(93),
    [anon_sym_new_DASHarray] = ACTIONS(93),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(97),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(93),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(93),
    [anon_sym_throw] = ACTIONS(93),
    [anon_sym_goto] = ACTIONS(97),
    [anon_sym_goto_SLASH16] = ACTIONS(93),
    [anon_sym_goto_SLASH32] = ACTIONS(93),
    [anon_sym_packed_DASHswitch] = ACTIONS(93),
    [anon_sym_sparse_DASHswitch] = ACTIONS(93),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(93),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(93),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(93),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(93),
    [anon_sym_cmp_DASHlong] = ACTIONS(93),
    [anon_sym_if_DASHeq] = ACTIONS(97),
    [anon_sym_if_DASHne] = ACTIONS(97),
    [anon_sym_if_DASHlt] = ACTIONS(97),
    [anon_sym_if_DASHge] = ACTIONS(97),
    [anon_sym_if_DASHgt] = ACTIONS(97),
    [anon_sym_if_DASHle] = ACTIONS(97),
    [anon_sym_if_DASHeqz] = ACTIONS(93),
    [anon_sym_if_DASHnez] = ACTIONS(93),
    [anon_sym_if_DASHltz] = ACTIONS(93),
    [anon_sym_if_DASHgez] = ACTIONS(93),
    [anon_sym_if_DASHgtz] = ACTIONS(93),
    [anon_sym_if_DASHlez] = ACTIONS(93),
    [anon_sym_aget] = ACTIONS(97),
    [anon_sym_aget_DASHwide] = ACTIONS(93),
    [anon_sym_aget_DASHobject] = ACTIONS(93),
    [anon_sym_aget_DASHboolean] = ACTIONS(93),
    [anon_sym_aget_DASHbyte] = ACTIONS(93),
    [anon_sym_aget_DASHchar] = ACTIONS(93),
    [anon_sym_aget_DASHshort] = ACTIONS(93),
    [anon_sym_aput] = ACTIONS(97),
    [anon_sym_aput_DASHwide] = ACTIONS(93),
    [anon_sym_aput_DASHobject] = ACTIONS(93),
    [anon_sym_aput_DASHboolean] = ACTIONS(93),
    [anon_sym_aput_DASHbyte] = ACTIONS(93),
    [anon_sym_aput_DASHchar] = ACTIONS(93),
    [anon_sym_aput_DASHshort] = ACTIONS(93),
    [anon_sym_iget] = ACTIONS(97),
    [anon_sym_iget_DASHwide] = ACTIONS(97),
    [anon_sym_iget_DASHobject] = ACTIONS(97),
    [anon_sym_iget_DASHboolean] = ACTIONS(93),
    [anon_sym_iget_DASHbyte] = ACTIONS(93),
    [anon_sym_iget_DASHchar] = ACTIONS(93),
    [anon_sym_iget_DASHshort] = ACTIONS(93),
    [anon_sym_iput] = ACTIONS(97),
    [anon_sym_iput_DASHwide] = ACTIONS(97),
    [anon_sym_iput_DASHobject] = ACTIONS(97),
    [anon_sym_iput_DASHboolean] = ACTIONS(93),
    [anon_sym_iput_DASHbyte] = ACTIONS(93),
    [anon_sym_iput_DASHchar] = ACTIONS(93),
    [anon_sym_iput_DASHshort] = ACTIONS(93),
    [anon_sym_sget] = ACTIONS(97),
    [anon_sym_sget_DASHwide] = ACTIONS(93),
    [anon_sym_sget_DASHobject] = ACTIONS(93),
    [anon_sym_sget_DASHboolean] = ACTIONS(93),
    [anon_sym_sget_DASHbyte] = ACTIONS(93),
    [anon_sym_sget_DASHchar] = ACTIONS(93),
    [anon_sym_sget_DASHshort] = ACTIONS(93),
    [anon_sym_sput] = ACTIONS(97),
    [anon_sym_sput_DASHwide] = ACTIONS(93),
    [anon_sym_sput_DASHobject] = ACTIONS(93),
    [anon_sym_sput_DASHboolean] = ACTIONS(93),
    [anon_sym_sput_DASHbyte] = ACTIONS(93),
    [anon_sym_sput_DASHchar] = ACTIONS(93),
    [anon_sym_sput_DASHshort] = ACTIONS(93),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(97),
    [anon_sym_invoke_DASHsuper] = ACTIONS(97),
    [anon_sym_invoke_DASHdirect] = ACTIONS(97),
    [anon_sym_invoke_DASHstatic] = ACTIONS(97),
    [anon_sym_invoke_DASHinterface] = ACTIONS(97),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(93),
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
    [anon_sym_add_DASHint] = ACTIONS(97),
    [anon_sym_sub_DASHint] = ACTIONS(97),
    [anon_sym_mul_DASHint] = ACTIONS(97),
    [anon_sym_div_DASHint] = ACTIONS(97),
    [anon_sym_rem_DASHint] = ACTIONS(97),
    [anon_sym_and_DASHint] = ACTIONS(97),
    [anon_sym_or_DASHint] = ACTIONS(97),
    [anon_sym_xor_DASHint] = ACTIONS(97),
    [anon_sym_shl_DASHint] = ACTIONS(97),
    [anon_sym_shr_DASHint] = ACTIONS(97),
    [anon_sym_ushr_DASHint] = ACTIONS(97),
    [anon_sym_add_DASHlong] = ACTIONS(97),
    [anon_sym_sub_DASHlong] = ACTIONS(97),
    [anon_sym_mul_DASHlong] = ACTIONS(97),
    [anon_sym_div_DASHlong] = ACTIONS(97),
    [anon_sym_rem_DASHlong] = ACTIONS(97),
    [anon_sym_and_DASHlong] = ACTIONS(97),
    [anon_sym_or_DASHlong] = ACTIONS(97),
    [anon_sym_xor_DASHlong] = ACTIONS(97),
    [anon_sym_shl_DASHlong] = ACTIONS(97),
    [anon_sym_shr_DASHlong] = ACTIONS(97),
    [anon_sym_ushr_DASHlong] = ACTIONS(97),
    [anon_sym_add_DASHfloat] = ACTIONS(97),
    [anon_sym_sub_DASHfloat] = ACTIONS(97),
    [anon_sym_mul_DASHfloat] = ACTIONS(97),
    [anon_sym_div_DASHfloat] = ACTIONS(97),
    [anon_sym_rem_DASHfloat] = ACTIONS(97),
    [anon_sym_add_DASHdouble] = ACTIONS(97),
    [anon_sym_sub_DASHdouble] = ACTIONS(97),
    [anon_sym_mul_DASHdouble] = ACTIONS(97),
    [anon_sym_div_DASHdouble] = ACTIONS(97),
    [anon_sym_rem_DASHdouble] = ACTIONS(97),
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
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(97),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(93),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(97),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(93),
    [anon_sym_rsub_DASHint] = ACTIONS(97),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(93),
    [anon_sym_DOTline] = ACTIONS(93),
    [anon_sym_DOTlocals] = ACTIONS(93),
    [anon_sym_DOTcatch] = ACTIONS(97),
    [anon_sym_DOTcatchall] = ACTIONS(93),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(93),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(93),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_end_method] = ACTIONS(99),
    [anon_sym_DOTannotation] = ACTIONS(99),
    [anon_sym_DOTparam] = ACTIONS(99),
    [sym_label] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_nop] = ACTIONS(99),
    [anon_sym_move] = ACTIONS(101),
    [anon_sym_move_SLASHfrom16] = ACTIONS(99),
    [anon_sym_move_SLASH16] = ACTIONS(99),
    [anon_sym_move_DASHwide] = ACTIONS(101),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(99),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(99),
    [anon_sym_move_DASHobject] = ACTIONS(101),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(99),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(99),
    [anon_sym_move_DASHresult] = ACTIONS(101),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(99),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(99),
    [anon_sym_move_DASHexception] = ACTIONS(99),
    [anon_sym_return_DASHvoid] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(101),
    [anon_sym_return_DASHwide] = ACTIONS(99),
    [anon_sym_return_DASHobject] = ACTIONS(99),
    [anon_sym_const_SLASH4] = ACTIONS(99),
    [anon_sym_const_SLASH16] = ACTIONS(99),
    [anon_sym_const] = ACTIONS(101),
    [anon_sym_const_SLASHhigh16] = ACTIONS(99),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(99),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(99),
    [anon_sym_const_DASHwide] = ACTIONS(101),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(99),
    [anon_sym_const_DASHstring] = ACTIONS(101),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(99),
    [anon_sym_const_DASHclass] = ACTIONS(99),
    [anon_sym_monitor_DASHenter] = ACTIONS(99),
    [anon_sym_monitor_DASHexit] = ACTIONS(99),
    [anon_sym_check_DASHcast] = ACTIONS(99),
    [anon_sym_instance_DASHof] = ACTIONS(99),
    [anon_sym_array_DASHlength] = ACTIONS(99),
    [anon_sym_new_DASHinstance] = ACTIONS(99),
    [anon_sym_new_DASHarray] = ACTIONS(99),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(101),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(99),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_goto] = ACTIONS(101),
    [anon_sym_goto_SLASH16] = ACTIONS(99),
    [anon_sym_goto_SLASH32] = ACTIONS(99),
    [anon_sym_packed_DASHswitch] = ACTIONS(99),
    [anon_sym_sparse_DASHswitch] = ACTIONS(99),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(99),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(99),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(99),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(99),
    [anon_sym_cmp_DASHlong] = ACTIONS(99),
    [anon_sym_if_DASHeq] = ACTIONS(101),
    [anon_sym_if_DASHne] = ACTIONS(101),
    [anon_sym_if_DASHlt] = ACTIONS(101),
    [anon_sym_if_DASHge] = ACTIONS(101),
    [anon_sym_if_DASHgt] = ACTIONS(101),
    [anon_sym_if_DASHle] = ACTIONS(101),
    [anon_sym_if_DASHeqz] = ACTIONS(99),
    [anon_sym_if_DASHnez] = ACTIONS(99),
    [anon_sym_if_DASHltz] = ACTIONS(99),
    [anon_sym_if_DASHgez] = ACTIONS(99),
    [anon_sym_if_DASHgtz] = ACTIONS(99),
    [anon_sym_if_DASHlez] = ACTIONS(99),
    [anon_sym_aget] = ACTIONS(101),
    [anon_sym_aget_DASHwide] = ACTIONS(99),
    [anon_sym_aget_DASHobject] = ACTIONS(99),
    [anon_sym_aget_DASHboolean] = ACTIONS(99),
    [anon_sym_aget_DASHbyte] = ACTIONS(99),
    [anon_sym_aget_DASHchar] = ACTIONS(99),
    [anon_sym_aget_DASHshort] = ACTIONS(99),
    [anon_sym_aput] = ACTIONS(101),
    [anon_sym_aput_DASHwide] = ACTIONS(99),
    [anon_sym_aput_DASHobject] = ACTIONS(99),
    [anon_sym_aput_DASHboolean] = ACTIONS(99),
    [anon_sym_aput_DASHbyte] = ACTIONS(99),
    [anon_sym_aput_DASHchar] = ACTIONS(99),
    [anon_sym_aput_DASHshort] = ACTIONS(99),
    [anon_sym_iget] = ACTIONS(101),
    [anon_sym_iget_DASHwide] = ACTIONS(101),
    [anon_sym_iget_DASHobject] = ACTIONS(101),
    [anon_sym_iget_DASHboolean] = ACTIONS(99),
    [anon_sym_iget_DASHbyte] = ACTIONS(99),
    [anon_sym_iget_DASHchar] = ACTIONS(99),
    [anon_sym_iget_DASHshort] = ACTIONS(99),
    [anon_sym_iput] = ACTIONS(101),
    [anon_sym_iput_DASHwide] = ACTIONS(101),
    [anon_sym_iput_DASHobject] = ACTIONS(101),
    [anon_sym_iput_DASHboolean] = ACTIONS(99),
    [anon_sym_iput_DASHbyte] = ACTIONS(99),
    [anon_sym_iput_DASHchar] = ACTIONS(99),
    [anon_sym_iput_DASHshort] = ACTIONS(99),
    [anon_sym_sget] = ACTIONS(101),
    [anon_sym_sget_DASHwide] = ACTIONS(99),
    [anon_sym_sget_DASHobject] = ACTIONS(99),
    [anon_sym_sget_DASHboolean] = ACTIONS(99),
    [anon_sym_sget_DASHbyte] = ACTIONS(99),
    [anon_sym_sget_DASHchar] = ACTIONS(99),
    [anon_sym_sget_DASHshort] = ACTIONS(99),
    [anon_sym_sput] = ACTIONS(101),
    [anon_sym_sput_DASHwide] = ACTIONS(99),
    [anon_sym_sput_DASHobject] = ACTIONS(99),
    [anon_sym_sput_DASHboolean] = ACTIONS(99),
    [anon_sym_sput_DASHbyte] = ACTIONS(99),
    [anon_sym_sput_DASHchar] = ACTIONS(99),
    [anon_sym_sput_DASHshort] = ACTIONS(99),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(101),
    [anon_sym_invoke_DASHsuper] = ACTIONS(101),
    [anon_sym_invoke_DASHdirect] = ACTIONS(101),
    [anon_sym_invoke_DASHstatic] = ACTIONS(101),
    [anon_sym_invoke_DASHinterface] = ACTIONS(101),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(99),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(99),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(99),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(99),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(99),
    [anon_sym_neg_DASHint] = ACTIONS(99),
    [anon_sym_not_DASHint] = ACTIONS(99),
    [anon_sym_neg_DASHlong] = ACTIONS(99),
    [anon_sym_not_DASHlong] = ACTIONS(99),
    [anon_sym_neg_DASHfloat] = ACTIONS(99),
    [anon_sym_neg_DASHdouble] = ACTIONS(99),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(99),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(99),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(99),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(99),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(99),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(99),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(99),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(99),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(99),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(99),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(99),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(99),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(99),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(99),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(99),
    [anon_sym_add_DASHint] = ACTIONS(101),
    [anon_sym_sub_DASHint] = ACTIONS(101),
    [anon_sym_mul_DASHint] = ACTIONS(101),
    [anon_sym_div_DASHint] = ACTIONS(101),
    [anon_sym_rem_DASHint] = ACTIONS(101),
    [anon_sym_and_DASHint] = ACTIONS(101),
    [anon_sym_or_DASHint] = ACTIONS(101),
    [anon_sym_xor_DASHint] = ACTIONS(101),
    [anon_sym_shl_DASHint] = ACTIONS(101),
    [anon_sym_shr_DASHint] = ACTIONS(101),
    [anon_sym_ushr_DASHint] = ACTIONS(101),
    [anon_sym_add_DASHlong] = ACTIONS(101),
    [anon_sym_sub_DASHlong] = ACTIONS(101),
    [anon_sym_mul_DASHlong] = ACTIONS(101),
    [anon_sym_div_DASHlong] = ACTIONS(101),
    [anon_sym_rem_DASHlong] = ACTIONS(101),
    [anon_sym_and_DASHlong] = ACTIONS(101),
    [anon_sym_or_DASHlong] = ACTIONS(101),
    [anon_sym_xor_DASHlong] = ACTIONS(101),
    [anon_sym_shl_DASHlong] = ACTIONS(101),
    [anon_sym_shr_DASHlong] = ACTIONS(101),
    [anon_sym_ushr_DASHlong] = ACTIONS(101),
    [anon_sym_add_DASHfloat] = ACTIONS(101),
    [anon_sym_sub_DASHfloat] = ACTIONS(101),
    [anon_sym_mul_DASHfloat] = ACTIONS(101),
    [anon_sym_div_DASHfloat] = ACTIONS(101),
    [anon_sym_rem_DASHfloat] = ACTIONS(101),
    [anon_sym_add_DASHdouble] = ACTIONS(101),
    [anon_sym_sub_DASHdouble] = ACTIONS(101),
    [anon_sym_mul_DASHdouble] = ACTIONS(101),
    [anon_sym_div_DASHdouble] = ACTIONS(101),
    [anon_sym_rem_DASHdouble] = ACTIONS(101),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(99),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(99),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(99),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(99),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(99),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(99),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(99),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(99),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(99),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(99),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(99),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(99),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(99),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_execute_DASHinline] = ACTIONS(99),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(99),
    [anon_sym_iget_DASHquick] = ACTIONS(99),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(99),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(99),
    [anon_sym_iput_DASHquick] = ACTIONS(99),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(99),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(99),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(101),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(99),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(101),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(99),
    [anon_sym_rsub_DASHint] = ACTIONS(101),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(99),
    [anon_sym_DOTline] = ACTIONS(99),
    [anon_sym_DOTlocals] = ACTIONS(99),
    [anon_sym_DOTcatch] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_DOTcatchall] = ACTIONS(99),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(99),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(99),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_end_method] = ACTIONS(103),
    [anon_sym_DOTannotation] = ACTIONS(103),
    [anon_sym_DOTparam] = ACTIONS(103),
    [sym_label] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_nop] = ACTIONS(103),
    [anon_sym_move] = ACTIONS(105),
    [anon_sym_move_SLASHfrom16] = ACTIONS(103),
    [anon_sym_move_SLASH16] = ACTIONS(103),
    [anon_sym_move_DASHwide] = ACTIONS(105),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(103),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(103),
    [anon_sym_move_DASHobject] = ACTIONS(105),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(103),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(103),
    [anon_sym_move_DASHresult] = ACTIONS(105),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(103),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(103),
    [anon_sym_move_DASHexception] = ACTIONS(103),
    [anon_sym_return_DASHvoid] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_return_DASHwide] = ACTIONS(103),
    [anon_sym_return_DASHobject] = ACTIONS(103),
    [anon_sym_const_SLASH4] = ACTIONS(103),
    [anon_sym_const_SLASH16] = ACTIONS(103),
    [anon_sym_const] = ACTIONS(105),
    [anon_sym_const_SLASHhigh16] = ACTIONS(103),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(103),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(103),
    [anon_sym_const_DASHwide] = ACTIONS(105),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(103),
    [anon_sym_const_DASHstring] = ACTIONS(105),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(103),
    [anon_sym_const_DASHclass] = ACTIONS(103),
    [anon_sym_monitor_DASHenter] = ACTIONS(103),
    [anon_sym_monitor_DASHexit] = ACTIONS(103),
    [anon_sym_check_DASHcast] = ACTIONS(103),
    [anon_sym_instance_DASHof] = ACTIONS(103),
    [anon_sym_array_DASHlength] = ACTIONS(103),
    [anon_sym_new_DASHinstance] = ACTIONS(103),
    [anon_sym_new_DASHarray] = ACTIONS(103),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(105),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(103),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_goto_SLASH16] = ACTIONS(103),
    [anon_sym_goto_SLASH32] = ACTIONS(103),
    [anon_sym_packed_DASHswitch] = ACTIONS(103),
    [anon_sym_sparse_DASHswitch] = ACTIONS(103),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(103),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(103),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(103),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(103),
    [anon_sym_cmp_DASHlong] = ACTIONS(103),
    [anon_sym_if_DASHeq] = ACTIONS(105),
    [anon_sym_if_DASHne] = ACTIONS(105),
    [anon_sym_if_DASHlt] = ACTIONS(105),
    [anon_sym_if_DASHge] = ACTIONS(105),
    [anon_sym_if_DASHgt] = ACTIONS(105),
    [anon_sym_if_DASHle] = ACTIONS(105),
    [anon_sym_if_DASHeqz] = ACTIONS(103),
    [anon_sym_if_DASHnez] = ACTIONS(103),
    [anon_sym_if_DASHltz] = ACTIONS(103),
    [anon_sym_if_DASHgez] = ACTIONS(103),
    [anon_sym_if_DASHgtz] = ACTIONS(103),
    [anon_sym_if_DASHlez] = ACTIONS(103),
    [anon_sym_aget] = ACTIONS(105),
    [anon_sym_aget_DASHwide] = ACTIONS(103),
    [anon_sym_aget_DASHobject] = ACTIONS(103),
    [anon_sym_aget_DASHboolean] = ACTIONS(103),
    [anon_sym_aget_DASHbyte] = ACTIONS(103),
    [anon_sym_aget_DASHchar] = ACTIONS(103),
    [anon_sym_aget_DASHshort] = ACTIONS(103),
    [anon_sym_aput] = ACTIONS(105),
    [anon_sym_aput_DASHwide] = ACTIONS(103),
    [anon_sym_aput_DASHobject] = ACTIONS(103),
    [anon_sym_aput_DASHboolean] = ACTIONS(103),
    [anon_sym_aput_DASHbyte] = ACTIONS(103),
    [anon_sym_aput_DASHchar] = ACTIONS(103),
    [anon_sym_aput_DASHshort] = ACTIONS(103),
    [anon_sym_iget] = ACTIONS(105),
    [anon_sym_iget_DASHwide] = ACTIONS(105),
    [anon_sym_iget_DASHobject] = ACTIONS(105),
    [anon_sym_iget_DASHboolean] = ACTIONS(103),
    [anon_sym_iget_DASHbyte] = ACTIONS(103),
    [anon_sym_iget_DASHchar] = ACTIONS(103),
    [anon_sym_iget_DASHshort] = ACTIONS(103),
    [anon_sym_iput] = ACTIONS(105),
    [anon_sym_iput_DASHwide] = ACTIONS(105),
    [anon_sym_iput_DASHobject] = ACTIONS(105),
    [anon_sym_iput_DASHboolean] = ACTIONS(103),
    [anon_sym_iput_DASHbyte] = ACTIONS(103),
    [anon_sym_iput_DASHchar] = ACTIONS(103),
    [anon_sym_iput_DASHshort] = ACTIONS(103),
    [anon_sym_sget] = ACTIONS(105),
    [anon_sym_sget_DASHwide] = ACTIONS(103),
    [anon_sym_sget_DASHobject] = ACTIONS(103),
    [anon_sym_sget_DASHboolean] = ACTIONS(103),
    [anon_sym_sget_DASHbyte] = ACTIONS(103),
    [anon_sym_sget_DASHchar] = ACTIONS(103),
    [anon_sym_sget_DASHshort] = ACTIONS(103),
    [anon_sym_sput] = ACTIONS(105),
    [anon_sym_sput_DASHwide] = ACTIONS(103),
    [anon_sym_sput_DASHobject] = ACTIONS(103),
    [anon_sym_sput_DASHboolean] = ACTIONS(103),
    [anon_sym_sput_DASHbyte] = ACTIONS(103),
    [anon_sym_sput_DASHchar] = ACTIONS(103),
    [anon_sym_sput_DASHshort] = ACTIONS(103),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(105),
    [anon_sym_invoke_DASHsuper] = ACTIONS(105),
    [anon_sym_invoke_DASHdirect] = ACTIONS(105),
    [anon_sym_invoke_DASHstatic] = ACTIONS(105),
    [anon_sym_invoke_DASHinterface] = ACTIONS(105),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(103),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(103),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(103),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(103),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(103),
    [anon_sym_neg_DASHint] = ACTIONS(103),
    [anon_sym_not_DASHint] = ACTIONS(103),
    [anon_sym_neg_DASHlong] = ACTIONS(103),
    [anon_sym_not_DASHlong] = ACTIONS(103),
    [anon_sym_neg_DASHfloat] = ACTIONS(103),
    [anon_sym_neg_DASHdouble] = ACTIONS(103),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(103),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(103),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(103),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(103),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(103),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(103),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(103),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(103),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(103),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(103),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(103),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(103),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(103),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(103),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(103),
    [anon_sym_add_DASHint] = ACTIONS(105),
    [anon_sym_sub_DASHint] = ACTIONS(105),
    [anon_sym_mul_DASHint] = ACTIONS(105),
    [anon_sym_div_DASHint] = ACTIONS(105),
    [anon_sym_rem_DASHint] = ACTIONS(105),
    [anon_sym_and_DASHint] = ACTIONS(105),
    [anon_sym_or_DASHint] = ACTIONS(105),
    [anon_sym_xor_DASHint] = ACTIONS(105),
    [anon_sym_shl_DASHint] = ACTIONS(105),
    [anon_sym_shr_DASHint] = ACTIONS(105),
    [anon_sym_ushr_DASHint] = ACTIONS(105),
    [anon_sym_add_DASHlong] = ACTIONS(105),
    [anon_sym_sub_DASHlong] = ACTIONS(105),
    [anon_sym_mul_DASHlong] = ACTIONS(105),
    [anon_sym_div_DASHlong] = ACTIONS(105),
    [anon_sym_rem_DASHlong] = ACTIONS(105),
    [anon_sym_and_DASHlong] = ACTIONS(105),
    [anon_sym_or_DASHlong] = ACTIONS(105),
    [anon_sym_xor_DASHlong] = ACTIONS(105),
    [anon_sym_shl_DASHlong] = ACTIONS(105),
    [anon_sym_shr_DASHlong] = ACTIONS(105),
    [anon_sym_ushr_DASHlong] = ACTIONS(105),
    [anon_sym_add_DASHfloat] = ACTIONS(105),
    [anon_sym_sub_DASHfloat] = ACTIONS(105),
    [anon_sym_mul_DASHfloat] = ACTIONS(105),
    [anon_sym_div_DASHfloat] = ACTIONS(105),
    [anon_sym_rem_DASHfloat] = ACTIONS(105),
    [anon_sym_add_DASHdouble] = ACTIONS(105),
    [anon_sym_sub_DASHdouble] = ACTIONS(105),
    [anon_sym_mul_DASHdouble] = ACTIONS(105),
    [anon_sym_div_DASHdouble] = ACTIONS(105),
    [anon_sym_rem_DASHdouble] = ACTIONS(105),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(103),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(103),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(103),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(103),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(103),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(103),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(103),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(103),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(103),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(103),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(103),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(103),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(103),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_execute_DASHinline] = ACTIONS(103),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(103),
    [anon_sym_iget_DASHquick] = ACTIONS(103),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(103),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(103),
    [anon_sym_iput_DASHquick] = ACTIONS(103),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(103),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(103),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(105),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(103),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(105),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(103),
    [anon_sym_rsub_DASHint] = ACTIONS(105),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(103),
    [anon_sym_DOTline] = ACTIONS(103),
    [anon_sym_DOTlocals] = ACTIONS(103),
    [anon_sym_DOTcatch] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_DOTcatchall] = ACTIONS(103),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(103),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(103),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_end_method] = ACTIONS(107),
    [anon_sym_DOTannotation] = ACTIONS(107),
    [anon_sym_DOTparam] = ACTIONS(107),
    [sym_end_param] = ACTIONS(107),
    [sym_label] = ACTIONS(107),
    [anon_sym_nop] = ACTIONS(107),
    [anon_sym_move] = ACTIONS(109),
    [anon_sym_move_SLASHfrom16] = ACTIONS(107),
    [anon_sym_move_SLASH16] = ACTIONS(107),
    [anon_sym_move_DASHwide] = ACTIONS(109),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(107),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(107),
    [anon_sym_move_DASHobject] = ACTIONS(109),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(107),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(107),
    [anon_sym_move_DASHresult] = ACTIONS(109),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(107),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(107),
    [anon_sym_move_DASHexception] = ACTIONS(107),
    [anon_sym_return_DASHvoid] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_return_DASHwide] = ACTIONS(107),
    [anon_sym_return_DASHobject] = ACTIONS(107),
    [anon_sym_const_SLASH4] = ACTIONS(107),
    [anon_sym_const_SLASH16] = ACTIONS(107),
    [anon_sym_const] = ACTIONS(109),
    [anon_sym_const_SLASHhigh16] = ACTIONS(107),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(107),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(107),
    [anon_sym_const_DASHwide] = ACTIONS(109),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(107),
    [anon_sym_const_DASHstring] = ACTIONS(109),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(107),
    [anon_sym_const_DASHclass] = ACTIONS(107),
    [anon_sym_monitor_DASHenter] = ACTIONS(107),
    [anon_sym_monitor_DASHexit] = ACTIONS(107),
    [anon_sym_check_DASHcast] = ACTIONS(107),
    [anon_sym_instance_DASHof] = ACTIONS(107),
    [anon_sym_array_DASHlength] = ACTIONS(107),
    [anon_sym_new_DASHinstance] = ACTIONS(107),
    [anon_sym_new_DASHarray] = ACTIONS(107),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(109),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(107),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(107),
    [anon_sym_throw] = ACTIONS(107),
    [anon_sym_goto] = ACTIONS(109),
    [anon_sym_goto_SLASH16] = ACTIONS(107),
    [anon_sym_goto_SLASH32] = ACTIONS(107),
    [anon_sym_packed_DASHswitch] = ACTIONS(107),
    [anon_sym_sparse_DASHswitch] = ACTIONS(107),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(107),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(107),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(107),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(107),
    [anon_sym_cmp_DASHlong] = ACTIONS(107),
    [anon_sym_if_DASHeq] = ACTIONS(109),
    [anon_sym_if_DASHne] = ACTIONS(109),
    [anon_sym_if_DASHlt] = ACTIONS(109),
    [anon_sym_if_DASHge] = ACTIONS(109),
    [anon_sym_if_DASHgt] = ACTIONS(109),
    [anon_sym_if_DASHle] = ACTIONS(109),
    [anon_sym_if_DASHeqz] = ACTIONS(107),
    [anon_sym_if_DASHnez] = ACTIONS(107),
    [anon_sym_if_DASHltz] = ACTIONS(107),
    [anon_sym_if_DASHgez] = ACTIONS(107),
    [anon_sym_if_DASHgtz] = ACTIONS(107),
    [anon_sym_if_DASHlez] = ACTIONS(107),
    [anon_sym_aget] = ACTIONS(109),
    [anon_sym_aget_DASHwide] = ACTIONS(107),
    [anon_sym_aget_DASHobject] = ACTIONS(107),
    [anon_sym_aget_DASHboolean] = ACTIONS(107),
    [anon_sym_aget_DASHbyte] = ACTIONS(107),
    [anon_sym_aget_DASHchar] = ACTIONS(107),
    [anon_sym_aget_DASHshort] = ACTIONS(107),
    [anon_sym_aput] = ACTIONS(109),
    [anon_sym_aput_DASHwide] = ACTIONS(107),
    [anon_sym_aput_DASHobject] = ACTIONS(107),
    [anon_sym_aput_DASHboolean] = ACTIONS(107),
    [anon_sym_aput_DASHbyte] = ACTIONS(107),
    [anon_sym_aput_DASHchar] = ACTIONS(107),
    [anon_sym_aput_DASHshort] = ACTIONS(107),
    [anon_sym_iget] = ACTIONS(109),
    [anon_sym_iget_DASHwide] = ACTIONS(109),
    [anon_sym_iget_DASHobject] = ACTIONS(109),
    [anon_sym_iget_DASHboolean] = ACTIONS(107),
    [anon_sym_iget_DASHbyte] = ACTIONS(107),
    [anon_sym_iget_DASHchar] = ACTIONS(107),
    [anon_sym_iget_DASHshort] = ACTIONS(107),
    [anon_sym_iput] = ACTIONS(109),
    [anon_sym_iput_DASHwide] = ACTIONS(109),
    [anon_sym_iput_DASHobject] = ACTIONS(109),
    [anon_sym_iput_DASHboolean] = ACTIONS(107),
    [anon_sym_iput_DASHbyte] = ACTIONS(107),
    [anon_sym_iput_DASHchar] = ACTIONS(107),
    [anon_sym_iput_DASHshort] = ACTIONS(107),
    [anon_sym_sget] = ACTIONS(109),
    [anon_sym_sget_DASHwide] = ACTIONS(107),
    [anon_sym_sget_DASHobject] = ACTIONS(107),
    [anon_sym_sget_DASHboolean] = ACTIONS(107),
    [anon_sym_sget_DASHbyte] = ACTIONS(107),
    [anon_sym_sget_DASHchar] = ACTIONS(107),
    [anon_sym_sget_DASHshort] = ACTIONS(107),
    [anon_sym_sput] = ACTIONS(109),
    [anon_sym_sput_DASHwide] = ACTIONS(107),
    [anon_sym_sput_DASHobject] = ACTIONS(107),
    [anon_sym_sput_DASHboolean] = ACTIONS(107),
    [anon_sym_sput_DASHbyte] = ACTIONS(107),
    [anon_sym_sput_DASHchar] = ACTIONS(107),
    [anon_sym_sput_DASHshort] = ACTIONS(107),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(109),
    [anon_sym_invoke_DASHsuper] = ACTIONS(109),
    [anon_sym_invoke_DASHdirect] = ACTIONS(109),
    [anon_sym_invoke_DASHstatic] = ACTIONS(109),
    [anon_sym_invoke_DASHinterface] = ACTIONS(109),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(107),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(107),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(107),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(107),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(107),
    [anon_sym_neg_DASHint] = ACTIONS(107),
    [anon_sym_not_DASHint] = ACTIONS(107),
    [anon_sym_neg_DASHlong] = ACTIONS(107),
    [anon_sym_not_DASHlong] = ACTIONS(107),
    [anon_sym_neg_DASHfloat] = ACTIONS(107),
    [anon_sym_neg_DASHdouble] = ACTIONS(107),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(107),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(107),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(107),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(107),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(107),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(107),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(107),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(107),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(107),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(107),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(107),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(107),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(107),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(107),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(107),
    [anon_sym_add_DASHint] = ACTIONS(109),
    [anon_sym_sub_DASHint] = ACTIONS(109),
    [anon_sym_mul_DASHint] = ACTIONS(109),
    [anon_sym_div_DASHint] = ACTIONS(109),
    [anon_sym_rem_DASHint] = ACTIONS(109),
    [anon_sym_and_DASHint] = ACTIONS(109),
    [anon_sym_or_DASHint] = ACTIONS(109),
    [anon_sym_xor_DASHint] = ACTIONS(109),
    [anon_sym_shl_DASHint] = ACTIONS(109),
    [anon_sym_shr_DASHint] = ACTIONS(109),
    [anon_sym_ushr_DASHint] = ACTIONS(109),
    [anon_sym_add_DASHlong] = ACTIONS(109),
    [anon_sym_sub_DASHlong] = ACTIONS(109),
    [anon_sym_mul_DASHlong] = ACTIONS(109),
    [anon_sym_div_DASHlong] = ACTIONS(109),
    [anon_sym_rem_DASHlong] = ACTIONS(109),
    [anon_sym_and_DASHlong] = ACTIONS(109),
    [anon_sym_or_DASHlong] = ACTIONS(109),
    [anon_sym_xor_DASHlong] = ACTIONS(109),
    [anon_sym_shl_DASHlong] = ACTIONS(109),
    [anon_sym_shr_DASHlong] = ACTIONS(109),
    [anon_sym_ushr_DASHlong] = ACTIONS(109),
    [anon_sym_add_DASHfloat] = ACTIONS(109),
    [anon_sym_sub_DASHfloat] = ACTIONS(109),
    [anon_sym_mul_DASHfloat] = ACTIONS(109),
    [anon_sym_div_DASHfloat] = ACTIONS(109),
    [anon_sym_rem_DASHfloat] = ACTIONS(109),
    [anon_sym_add_DASHdouble] = ACTIONS(109),
    [anon_sym_sub_DASHdouble] = ACTIONS(109),
    [anon_sym_mul_DASHdouble] = ACTIONS(109),
    [anon_sym_div_DASHdouble] = ACTIONS(109),
    [anon_sym_rem_DASHdouble] = ACTIONS(109),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(107),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(107),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(107),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(107),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(107),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(107),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(107),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(107),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(107),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(107),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(107),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(107),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(107),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_execute_DASHinline] = ACTIONS(107),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(107),
    [anon_sym_iget_DASHquick] = ACTIONS(107),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(107),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(107),
    [anon_sym_iput_DASHquick] = ACTIONS(107),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(107),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(107),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(109),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(107),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(109),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(107),
    [anon_sym_rsub_DASHint] = ACTIONS(109),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(107),
    [anon_sym_DOTline] = ACTIONS(107),
    [anon_sym_DOTlocals] = ACTIONS(107),
    [anon_sym_DOTcatch] = ACTIONS(109),
    [anon_sym_DOTcatchall] = ACTIONS(107),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(107),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(107),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_end_method] = ACTIONS(111),
    [anon_sym_DOTannotation] = ACTIONS(111),
    [anon_sym_DOTparam] = ACTIONS(111),
    [sym_label] = ACTIONS(111),
    [anon_sym_nop] = ACTIONS(111),
    [anon_sym_move] = ACTIONS(113),
    [anon_sym_move_SLASHfrom16] = ACTIONS(111),
    [anon_sym_move_SLASH16] = ACTIONS(111),
    [anon_sym_move_DASHwide] = ACTIONS(113),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(111),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(111),
    [anon_sym_move_DASHobject] = ACTIONS(113),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(111),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(111),
    [anon_sym_move_DASHresult] = ACTIONS(113),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(111),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(111),
    [anon_sym_move_DASHexception] = ACTIONS(111),
    [anon_sym_return_DASHvoid] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_return_DASHwide] = ACTIONS(111),
    [anon_sym_return_DASHobject] = ACTIONS(111),
    [anon_sym_const_SLASH4] = ACTIONS(111),
    [anon_sym_const_SLASH16] = ACTIONS(111),
    [anon_sym_const] = ACTIONS(113),
    [anon_sym_const_SLASHhigh16] = ACTIONS(111),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(111),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(111),
    [anon_sym_const_DASHwide] = ACTIONS(113),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(111),
    [anon_sym_const_DASHstring] = ACTIONS(113),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(111),
    [anon_sym_const_DASHclass] = ACTIONS(111),
    [anon_sym_monitor_DASHenter] = ACTIONS(111),
    [anon_sym_monitor_DASHexit] = ACTIONS(111),
    [anon_sym_check_DASHcast] = ACTIONS(111),
    [anon_sym_instance_DASHof] = ACTIONS(111),
    [anon_sym_array_DASHlength] = ACTIONS(111),
    [anon_sym_new_DASHinstance] = ACTIONS(111),
    [anon_sym_new_DASHarray] = ACTIONS(111),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(113),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(111),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(111),
    [anon_sym_throw] = ACTIONS(111),
    [anon_sym_goto] = ACTIONS(113),
    [anon_sym_goto_SLASH16] = ACTIONS(111),
    [anon_sym_goto_SLASH32] = ACTIONS(111),
    [anon_sym_packed_DASHswitch] = ACTIONS(111),
    [anon_sym_sparse_DASHswitch] = ACTIONS(111),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(111),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(111),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(111),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(111),
    [anon_sym_cmp_DASHlong] = ACTIONS(111),
    [anon_sym_if_DASHeq] = ACTIONS(113),
    [anon_sym_if_DASHne] = ACTIONS(113),
    [anon_sym_if_DASHlt] = ACTIONS(113),
    [anon_sym_if_DASHge] = ACTIONS(113),
    [anon_sym_if_DASHgt] = ACTIONS(113),
    [anon_sym_if_DASHle] = ACTIONS(113),
    [anon_sym_if_DASHeqz] = ACTIONS(111),
    [anon_sym_if_DASHnez] = ACTIONS(111),
    [anon_sym_if_DASHltz] = ACTIONS(111),
    [anon_sym_if_DASHgez] = ACTIONS(111),
    [anon_sym_if_DASHgtz] = ACTIONS(111),
    [anon_sym_if_DASHlez] = ACTIONS(111),
    [anon_sym_aget] = ACTIONS(113),
    [anon_sym_aget_DASHwide] = ACTIONS(111),
    [anon_sym_aget_DASHobject] = ACTIONS(111),
    [anon_sym_aget_DASHboolean] = ACTIONS(111),
    [anon_sym_aget_DASHbyte] = ACTIONS(111),
    [anon_sym_aget_DASHchar] = ACTIONS(111),
    [anon_sym_aget_DASHshort] = ACTIONS(111),
    [anon_sym_aput] = ACTIONS(113),
    [anon_sym_aput_DASHwide] = ACTIONS(111),
    [anon_sym_aput_DASHobject] = ACTIONS(111),
    [anon_sym_aput_DASHboolean] = ACTIONS(111),
    [anon_sym_aput_DASHbyte] = ACTIONS(111),
    [anon_sym_aput_DASHchar] = ACTIONS(111),
    [anon_sym_aput_DASHshort] = ACTIONS(111),
    [anon_sym_iget] = ACTIONS(113),
    [anon_sym_iget_DASHwide] = ACTIONS(113),
    [anon_sym_iget_DASHobject] = ACTIONS(113),
    [anon_sym_iget_DASHboolean] = ACTIONS(111),
    [anon_sym_iget_DASHbyte] = ACTIONS(111),
    [anon_sym_iget_DASHchar] = ACTIONS(111),
    [anon_sym_iget_DASHshort] = ACTIONS(111),
    [anon_sym_iput] = ACTIONS(113),
    [anon_sym_iput_DASHwide] = ACTIONS(113),
    [anon_sym_iput_DASHobject] = ACTIONS(113),
    [anon_sym_iput_DASHboolean] = ACTIONS(111),
    [anon_sym_iput_DASHbyte] = ACTIONS(111),
    [anon_sym_iput_DASHchar] = ACTIONS(111),
    [anon_sym_iput_DASHshort] = ACTIONS(111),
    [anon_sym_sget] = ACTIONS(113),
    [anon_sym_sget_DASHwide] = ACTIONS(111),
    [anon_sym_sget_DASHobject] = ACTIONS(111),
    [anon_sym_sget_DASHboolean] = ACTIONS(111),
    [anon_sym_sget_DASHbyte] = ACTIONS(111),
    [anon_sym_sget_DASHchar] = ACTIONS(111),
    [anon_sym_sget_DASHshort] = ACTIONS(111),
    [anon_sym_sput] = ACTIONS(113),
    [anon_sym_sput_DASHwide] = ACTIONS(111),
    [anon_sym_sput_DASHobject] = ACTIONS(111),
    [anon_sym_sput_DASHboolean] = ACTIONS(111),
    [anon_sym_sput_DASHbyte] = ACTIONS(111),
    [anon_sym_sput_DASHchar] = ACTIONS(111),
    [anon_sym_sput_DASHshort] = ACTIONS(111),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(113),
    [anon_sym_invoke_DASHsuper] = ACTIONS(113),
    [anon_sym_invoke_DASHdirect] = ACTIONS(113),
    [anon_sym_invoke_DASHstatic] = ACTIONS(113),
    [anon_sym_invoke_DASHinterface] = ACTIONS(113),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(111),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(111),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(111),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(111),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(111),
    [anon_sym_neg_DASHint] = ACTIONS(111),
    [anon_sym_not_DASHint] = ACTIONS(111),
    [anon_sym_neg_DASHlong] = ACTIONS(111),
    [anon_sym_not_DASHlong] = ACTIONS(111),
    [anon_sym_neg_DASHfloat] = ACTIONS(111),
    [anon_sym_neg_DASHdouble] = ACTIONS(111),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(111),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(111),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(111),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(111),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(111),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(111),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(111),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(111),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(111),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(111),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(111),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(111),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(111),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(111),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(111),
    [anon_sym_add_DASHint] = ACTIONS(113),
    [anon_sym_sub_DASHint] = ACTIONS(113),
    [anon_sym_mul_DASHint] = ACTIONS(113),
    [anon_sym_div_DASHint] = ACTIONS(113),
    [anon_sym_rem_DASHint] = ACTIONS(113),
    [anon_sym_and_DASHint] = ACTIONS(113),
    [anon_sym_or_DASHint] = ACTIONS(113),
    [anon_sym_xor_DASHint] = ACTIONS(113),
    [anon_sym_shl_DASHint] = ACTIONS(113),
    [anon_sym_shr_DASHint] = ACTIONS(113),
    [anon_sym_ushr_DASHint] = ACTIONS(113),
    [anon_sym_add_DASHlong] = ACTIONS(113),
    [anon_sym_sub_DASHlong] = ACTIONS(113),
    [anon_sym_mul_DASHlong] = ACTIONS(113),
    [anon_sym_div_DASHlong] = ACTIONS(113),
    [anon_sym_rem_DASHlong] = ACTIONS(113),
    [anon_sym_and_DASHlong] = ACTIONS(113),
    [anon_sym_or_DASHlong] = ACTIONS(113),
    [anon_sym_xor_DASHlong] = ACTIONS(113),
    [anon_sym_shl_DASHlong] = ACTIONS(113),
    [anon_sym_shr_DASHlong] = ACTIONS(113),
    [anon_sym_ushr_DASHlong] = ACTIONS(113),
    [anon_sym_add_DASHfloat] = ACTIONS(113),
    [anon_sym_sub_DASHfloat] = ACTIONS(113),
    [anon_sym_mul_DASHfloat] = ACTIONS(113),
    [anon_sym_div_DASHfloat] = ACTIONS(113),
    [anon_sym_rem_DASHfloat] = ACTIONS(113),
    [anon_sym_add_DASHdouble] = ACTIONS(113),
    [anon_sym_sub_DASHdouble] = ACTIONS(113),
    [anon_sym_mul_DASHdouble] = ACTIONS(113),
    [anon_sym_div_DASHdouble] = ACTIONS(113),
    [anon_sym_rem_DASHdouble] = ACTIONS(113),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(111),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(111),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(111),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(111),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(111),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(111),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(111),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(111),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(111),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(111),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(111),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(111),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(111),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_execute_DASHinline] = ACTIONS(111),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(111),
    [anon_sym_iget_DASHquick] = ACTIONS(111),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(111),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(111),
    [anon_sym_iput_DASHquick] = ACTIONS(111),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(111),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(111),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(113),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(111),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(113),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(111),
    [anon_sym_rsub_DASHint] = ACTIONS(113),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(111),
    [anon_sym_DOTline] = ACTIONS(111),
    [anon_sym_DOTlocals] = ACTIONS(111),
    [anon_sym_DOTcatch] = ACTIONS(113),
    [anon_sym_DOTcatchall] = ACTIONS(111),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(111),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(111),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_end_method] = ACTIONS(115),
    [anon_sym_DOTannotation] = ACTIONS(115),
    [anon_sym_DOTparam] = ACTIONS(115),
    [sym_label] = ACTIONS(115),
    [anon_sym_nop] = ACTIONS(115),
    [anon_sym_move] = ACTIONS(117),
    [anon_sym_move_SLASHfrom16] = ACTIONS(115),
    [anon_sym_move_SLASH16] = ACTIONS(115),
    [anon_sym_move_DASHwide] = ACTIONS(117),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(115),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(115),
    [anon_sym_move_DASHobject] = ACTIONS(117),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(115),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(115),
    [anon_sym_move_DASHresult] = ACTIONS(117),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(115),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(115),
    [anon_sym_move_DASHexception] = ACTIONS(115),
    [anon_sym_return_DASHvoid] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_return_DASHwide] = ACTIONS(115),
    [anon_sym_return_DASHobject] = ACTIONS(115),
    [anon_sym_const_SLASH4] = ACTIONS(115),
    [anon_sym_const_SLASH16] = ACTIONS(115),
    [anon_sym_const] = ACTIONS(117),
    [anon_sym_const_SLASHhigh16] = ACTIONS(115),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(115),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(115),
    [anon_sym_const_DASHwide] = ACTIONS(117),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(115),
    [anon_sym_const_DASHstring] = ACTIONS(117),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(115),
    [anon_sym_const_DASHclass] = ACTIONS(115),
    [anon_sym_monitor_DASHenter] = ACTIONS(115),
    [anon_sym_monitor_DASHexit] = ACTIONS(115),
    [anon_sym_check_DASHcast] = ACTIONS(115),
    [anon_sym_instance_DASHof] = ACTIONS(115),
    [anon_sym_array_DASHlength] = ACTIONS(115),
    [anon_sym_new_DASHinstance] = ACTIONS(115),
    [anon_sym_new_DASHarray] = ACTIONS(115),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(117),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(115),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(115),
    [anon_sym_throw] = ACTIONS(115),
    [anon_sym_goto] = ACTIONS(117),
    [anon_sym_goto_SLASH16] = ACTIONS(115),
    [anon_sym_goto_SLASH32] = ACTIONS(115),
    [anon_sym_packed_DASHswitch] = ACTIONS(115),
    [anon_sym_sparse_DASHswitch] = ACTIONS(115),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(115),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(115),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(115),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(115),
    [anon_sym_cmp_DASHlong] = ACTIONS(115),
    [anon_sym_if_DASHeq] = ACTIONS(117),
    [anon_sym_if_DASHne] = ACTIONS(117),
    [anon_sym_if_DASHlt] = ACTIONS(117),
    [anon_sym_if_DASHge] = ACTIONS(117),
    [anon_sym_if_DASHgt] = ACTIONS(117),
    [anon_sym_if_DASHle] = ACTIONS(117),
    [anon_sym_if_DASHeqz] = ACTIONS(115),
    [anon_sym_if_DASHnez] = ACTIONS(115),
    [anon_sym_if_DASHltz] = ACTIONS(115),
    [anon_sym_if_DASHgez] = ACTIONS(115),
    [anon_sym_if_DASHgtz] = ACTIONS(115),
    [anon_sym_if_DASHlez] = ACTIONS(115),
    [anon_sym_aget] = ACTIONS(117),
    [anon_sym_aget_DASHwide] = ACTIONS(115),
    [anon_sym_aget_DASHobject] = ACTIONS(115),
    [anon_sym_aget_DASHboolean] = ACTIONS(115),
    [anon_sym_aget_DASHbyte] = ACTIONS(115),
    [anon_sym_aget_DASHchar] = ACTIONS(115),
    [anon_sym_aget_DASHshort] = ACTIONS(115),
    [anon_sym_aput] = ACTIONS(117),
    [anon_sym_aput_DASHwide] = ACTIONS(115),
    [anon_sym_aput_DASHobject] = ACTIONS(115),
    [anon_sym_aput_DASHboolean] = ACTIONS(115),
    [anon_sym_aput_DASHbyte] = ACTIONS(115),
    [anon_sym_aput_DASHchar] = ACTIONS(115),
    [anon_sym_aput_DASHshort] = ACTIONS(115),
    [anon_sym_iget] = ACTIONS(117),
    [anon_sym_iget_DASHwide] = ACTIONS(117),
    [anon_sym_iget_DASHobject] = ACTIONS(117),
    [anon_sym_iget_DASHboolean] = ACTIONS(115),
    [anon_sym_iget_DASHbyte] = ACTIONS(115),
    [anon_sym_iget_DASHchar] = ACTIONS(115),
    [anon_sym_iget_DASHshort] = ACTIONS(115),
    [anon_sym_iput] = ACTIONS(117),
    [anon_sym_iput_DASHwide] = ACTIONS(117),
    [anon_sym_iput_DASHobject] = ACTIONS(117),
    [anon_sym_iput_DASHboolean] = ACTIONS(115),
    [anon_sym_iput_DASHbyte] = ACTIONS(115),
    [anon_sym_iput_DASHchar] = ACTIONS(115),
    [anon_sym_iput_DASHshort] = ACTIONS(115),
    [anon_sym_sget] = ACTIONS(117),
    [anon_sym_sget_DASHwide] = ACTIONS(115),
    [anon_sym_sget_DASHobject] = ACTIONS(115),
    [anon_sym_sget_DASHboolean] = ACTIONS(115),
    [anon_sym_sget_DASHbyte] = ACTIONS(115),
    [anon_sym_sget_DASHchar] = ACTIONS(115),
    [anon_sym_sget_DASHshort] = ACTIONS(115),
    [anon_sym_sput] = ACTIONS(117),
    [anon_sym_sput_DASHwide] = ACTIONS(115),
    [anon_sym_sput_DASHobject] = ACTIONS(115),
    [anon_sym_sput_DASHboolean] = ACTIONS(115),
    [anon_sym_sput_DASHbyte] = ACTIONS(115),
    [anon_sym_sput_DASHchar] = ACTIONS(115),
    [anon_sym_sput_DASHshort] = ACTIONS(115),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(117),
    [anon_sym_invoke_DASHsuper] = ACTIONS(117),
    [anon_sym_invoke_DASHdirect] = ACTIONS(117),
    [anon_sym_invoke_DASHstatic] = ACTIONS(117),
    [anon_sym_invoke_DASHinterface] = ACTIONS(117),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(115),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(115),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(115),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(115),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(115),
    [anon_sym_neg_DASHint] = ACTIONS(115),
    [anon_sym_not_DASHint] = ACTIONS(115),
    [anon_sym_neg_DASHlong] = ACTIONS(115),
    [anon_sym_not_DASHlong] = ACTIONS(115),
    [anon_sym_neg_DASHfloat] = ACTIONS(115),
    [anon_sym_neg_DASHdouble] = ACTIONS(115),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(115),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(115),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(115),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(115),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(115),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(115),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(115),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(115),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(115),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(115),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(115),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(115),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(115),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(115),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(115),
    [anon_sym_add_DASHint] = ACTIONS(117),
    [anon_sym_sub_DASHint] = ACTIONS(117),
    [anon_sym_mul_DASHint] = ACTIONS(117),
    [anon_sym_div_DASHint] = ACTIONS(117),
    [anon_sym_rem_DASHint] = ACTIONS(117),
    [anon_sym_and_DASHint] = ACTIONS(117),
    [anon_sym_or_DASHint] = ACTIONS(117),
    [anon_sym_xor_DASHint] = ACTIONS(117),
    [anon_sym_shl_DASHint] = ACTIONS(117),
    [anon_sym_shr_DASHint] = ACTIONS(117),
    [anon_sym_ushr_DASHint] = ACTIONS(117),
    [anon_sym_add_DASHlong] = ACTIONS(117),
    [anon_sym_sub_DASHlong] = ACTIONS(117),
    [anon_sym_mul_DASHlong] = ACTIONS(117),
    [anon_sym_div_DASHlong] = ACTIONS(117),
    [anon_sym_rem_DASHlong] = ACTIONS(117),
    [anon_sym_and_DASHlong] = ACTIONS(117),
    [anon_sym_or_DASHlong] = ACTIONS(117),
    [anon_sym_xor_DASHlong] = ACTIONS(117),
    [anon_sym_shl_DASHlong] = ACTIONS(117),
    [anon_sym_shr_DASHlong] = ACTIONS(117),
    [anon_sym_ushr_DASHlong] = ACTIONS(117),
    [anon_sym_add_DASHfloat] = ACTIONS(117),
    [anon_sym_sub_DASHfloat] = ACTIONS(117),
    [anon_sym_mul_DASHfloat] = ACTIONS(117),
    [anon_sym_div_DASHfloat] = ACTIONS(117),
    [anon_sym_rem_DASHfloat] = ACTIONS(117),
    [anon_sym_add_DASHdouble] = ACTIONS(117),
    [anon_sym_sub_DASHdouble] = ACTIONS(117),
    [anon_sym_mul_DASHdouble] = ACTIONS(117),
    [anon_sym_div_DASHdouble] = ACTIONS(117),
    [anon_sym_rem_DASHdouble] = ACTIONS(117),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(115),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(115),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(115),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(115),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(115),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(115),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(115),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(115),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(115),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(115),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(115),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(115),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(115),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_execute_DASHinline] = ACTIONS(115),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(115),
    [anon_sym_iget_DASHquick] = ACTIONS(115),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(115),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(115),
    [anon_sym_iput_DASHquick] = ACTIONS(115),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(115),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(115),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(117),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(115),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(117),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(115),
    [anon_sym_rsub_DASHint] = ACTIONS(117),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(115),
    [anon_sym_DOTline] = ACTIONS(115),
    [anon_sym_DOTlocals] = ACTIONS(115),
    [anon_sym_DOTcatch] = ACTIONS(117),
    [anon_sym_DOTcatchall] = ACTIONS(115),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(115),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(115),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_end_method] = ACTIONS(119),
    [anon_sym_DOTannotation] = ACTIONS(119),
    [anon_sym_DOTparam] = ACTIONS(119),
    [sym_label] = ACTIONS(119),
    [anon_sym_nop] = ACTIONS(119),
    [anon_sym_move] = ACTIONS(121),
    [anon_sym_move_SLASHfrom16] = ACTIONS(119),
    [anon_sym_move_SLASH16] = ACTIONS(119),
    [anon_sym_move_DASHwide] = ACTIONS(121),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(119),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(119),
    [anon_sym_move_DASHobject] = ACTIONS(121),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(119),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(119),
    [anon_sym_move_DASHresult] = ACTIONS(121),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(119),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(119),
    [anon_sym_move_DASHexception] = ACTIONS(119),
    [anon_sym_return_DASHvoid] = ACTIONS(119),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_return_DASHwide] = ACTIONS(119),
    [anon_sym_return_DASHobject] = ACTIONS(119),
    [anon_sym_const_SLASH4] = ACTIONS(119),
    [anon_sym_const_SLASH16] = ACTIONS(119),
    [anon_sym_const] = ACTIONS(121),
    [anon_sym_const_SLASHhigh16] = ACTIONS(119),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(119),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(119),
    [anon_sym_const_DASHwide] = ACTIONS(121),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(119),
    [anon_sym_const_DASHstring] = ACTIONS(121),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(119),
    [anon_sym_const_DASHclass] = ACTIONS(119),
    [anon_sym_monitor_DASHenter] = ACTIONS(119),
    [anon_sym_monitor_DASHexit] = ACTIONS(119),
    [anon_sym_check_DASHcast] = ACTIONS(119),
    [anon_sym_instance_DASHof] = ACTIONS(119),
    [anon_sym_array_DASHlength] = ACTIONS(119),
    [anon_sym_new_DASHinstance] = ACTIONS(119),
    [anon_sym_new_DASHarray] = ACTIONS(119),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(121),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(119),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(119),
    [anon_sym_throw] = ACTIONS(119),
    [anon_sym_goto] = ACTIONS(121),
    [anon_sym_goto_SLASH16] = ACTIONS(119),
    [anon_sym_goto_SLASH32] = ACTIONS(119),
    [anon_sym_packed_DASHswitch] = ACTIONS(119),
    [anon_sym_sparse_DASHswitch] = ACTIONS(119),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(119),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(119),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(119),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(119),
    [anon_sym_cmp_DASHlong] = ACTIONS(119),
    [anon_sym_if_DASHeq] = ACTIONS(121),
    [anon_sym_if_DASHne] = ACTIONS(121),
    [anon_sym_if_DASHlt] = ACTIONS(121),
    [anon_sym_if_DASHge] = ACTIONS(121),
    [anon_sym_if_DASHgt] = ACTIONS(121),
    [anon_sym_if_DASHle] = ACTIONS(121),
    [anon_sym_if_DASHeqz] = ACTIONS(119),
    [anon_sym_if_DASHnez] = ACTIONS(119),
    [anon_sym_if_DASHltz] = ACTIONS(119),
    [anon_sym_if_DASHgez] = ACTIONS(119),
    [anon_sym_if_DASHgtz] = ACTIONS(119),
    [anon_sym_if_DASHlez] = ACTIONS(119),
    [anon_sym_aget] = ACTIONS(121),
    [anon_sym_aget_DASHwide] = ACTIONS(119),
    [anon_sym_aget_DASHobject] = ACTIONS(119),
    [anon_sym_aget_DASHboolean] = ACTIONS(119),
    [anon_sym_aget_DASHbyte] = ACTIONS(119),
    [anon_sym_aget_DASHchar] = ACTIONS(119),
    [anon_sym_aget_DASHshort] = ACTIONS(119),
    [anon_sym_aput] = ACTIONS(121),
    [anon_sym_aput_DASHwide] = ACTIONS(119),
    [anon_sym_aput_DASHobject] = ACTIONS(119),
    [anon_sym_aput_DASHboolean] = ACTIONS(119),
    [anon_sym_aput_DASHbyte] = ACTIONS(119),
    [anon_sym_aput_DASHchar] = ACTIONS(119),
    [anon_sym_aput_DASHshort] = ACTIONS(119),
    [anon_sym_iget] = ACTIONS(121),
    [anon_sym_iget_DASHwide] = ACTIONS(121),
    [anon_sym_iget_DASHobject] = ACTIONS(121),
    [anon_sym_iget_DASHboolean] = ACTIONS(119),
    [anon_sym_iget_DASHbyte] = ACTIONS(119),
    [anon_sym_iget_DASHchar] = ACTIONS(119),
    [anon_sym_iget_DASHshort] = ACTIONS(119),
    [anon_sym_iput] = ACTIONS(121),
    [anon_sym_iput_DASHwide] = ACTIONS(121),
    [anon_sym_iput_DASHobject] = ACTIONS(121),
    [anon_sym_iput_DASHboolean] = ACTIONS(119),
    [anon_sym_iput_DASHbyte] = ACTIONS(119),
    [anon_sym_iput_DASHchar] = ACTIONS(119),
    [anon_sym_iput_DASHshort] = ACTIONS(119),
    [anon_sym_sget] = ACTIONS(121),
    [anon_sym_sget_DASHwide] = ACTIONS(119),
    [anon_sym_sget_DASHobject] = ACTIONS(119),
    [anon_sym_sget_DASHboolean] = ACTIONS(119),
    [anon_sym_sget_DASHbyte] = ACTIONS(119),
    [anon_sym_sget_DASHchar] = ACTIONS(119),
    [anon_sym_sget_DASHshort] = ACTIONS(119),
    [anon_sym_sput] = ACTIONS(121),
    [anon_sym_sput_DASHwide] = ACTIONS(119),
    [anon_sym_sput_DASHobject] = ACTIONS(119),
    [anon_sym_sput_DASHboolean] = ACTIONS(119),
    [anon_sym_sput_DASHbyte] = ACTIONS(119),
    [anon_sym_sput_DASHchar] = ACTIONS(119),
    [anon_sym_sput_DASHshort] = ACTIONS(119),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(121),
    [anon_sym_invoke_DASHsuper] = ACTIONS(121),
    [anon_sym_invoke_DASHdirect] = ACTIONS(121),
    [anon_sym_invoke_DASHstatic] = ACTIONS(121),
    [anon_sym_invoke_DASHinterface] = ACTIONS(121),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(119),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(119),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(119),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(119),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(119),
    [anon_sym_neg_DASHint] = ACTIONS(119),
    [anon_sym_not_DASHint] = ACTIONS(119),
    [anon_sym_neg_DASHlong] = ACTIONS(119),
    [anon_sym_not_DASHlong] = ACTIONS(119),
    [anon_sym_neg_DASHfloat] = ACTIONS(119),
    [anon_sym_neg_DASHdouble] = ACTIONS(119),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(119),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(119),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(119),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(119),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(119),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(119),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(119),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(119),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(119),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(119),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(119),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(119),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(119),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(119),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(119),
    [anon_sym_add_DASHint] = ACTIONS(121),
    [anon_sym_sub_DASHint] = ACTIONS(121),
    [anon_sym_mul_DASHint] = ACTIONS(121),
    [anon_sym_div_DASHint] = ACTIONS(121),
    [anon_sym_rem_DASHint] = ACTIONS(121),
    [anon_sym_and_DASHint] = ACTIONS(121),
    [anon_sym_or_DASHint] = ACTIONS(121),
    [anon_sym_xor_DASHint] = ACTIONS(121),
    [anon_sym_shl_DASHint] = ACTIONS(121),
    [anon_sym_shr_DASHint] = ACTIONS(121),
    [anon_sym_ushr_DASHint] = ACTIONS(121),
    [anon_sym_add_DASHlong] = ACTIONS(121),
    [anon_sym_sub_DASHlong] = ACTIONS(121),
    [anon_sym_mul_DASHlong] = ACTIONS(121),
    [anon_sym_div_DASHlong] = ACTIONS(121),
    [anon_sym_rem_DASHlong] = ACTIONS(121),
    [anon_sym_and_DASHlong] = ACTIONS(121),
    [anon_sym_or_DASHlong] = ACTIONS(121),
    [anon_sym_xor_DASHlong] = ACTIONS(121),
    [anon_sym_shl_DASHlong] = ACTIONS(121),
    [anon_sym_shr_DASHlong] = ACTIONS(121),
    [anon_sym_ushr_DASHlong] = ACTIONS(121),
    [anon_sym_add_DASHfloat] = ACTIONS(121),
    [anon_sym_sub_DASHfloat] = ACTIONS(121),
    [anon_sym_mul_DASHfloat] = ACTIONS(121),
    [anon_sym_div_DASHfloat] = ACTIONS(121),
    [anon_sym_rem_DASHfloat] = ACTIONS(121),
    [anon_sym_add_DASHdouble] = ACTIONS(121),
    [anon_sym_sub_DASHdouble] = ACTIONS(121),
    [anon_sym_mul_DASHdouble] = ACTIONS(121),
    [anon_sym_div_DASHdouble] = ACTIONS(121),
    [anon_sym_rem_DASHdouble] = ACTIONS(121),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(119),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(119),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(119),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(119),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(119),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(119),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(119),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(119),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(119),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(119),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(119),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(119),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(119),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_execute_DASHinline] = ACTIONS(119),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(119),
    [anon_sym_iget_DASHquick] = ACTIONS(119),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(119),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(119),
    [anon_sym_iput_DASHquick] = ACTIONS(119),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(119),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(119),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(121),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(119),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(121),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(119),
    [anon_sym_rsub_DASHint] = ACTIONS(121),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(119),
    [anon_sym_DOTline] = ACTIONS(119),
    [anon_sym_DOTlocals] = ACTIONS(119),
    [anon_sym_DOTcatch] = ACTIONS(121),
    [anon_sym_DOTcatchall] = ACTIONS(119),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(119),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(119),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_end_method] = ACTIONS(123),
    [anon_sym_DOTannotation] = ACTIONS(123),
    [anon_sym_DOTparam] = ACTIONS(123),
    [sym_label] = ACTIONS(123),
    [anon_sym_nop] = ACTIONS(123),
    [anon_sym_move] = ACTIONS(125),
    [anon_sym_move_SLASHfrom16] = ACTIONS(123),
    [anon_sym_move_SLASH16] = ACTIONS(123),
    [anon_sym_move_DASHwide] = ACTIONS(125),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(123),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(123),
    [anon_sym_move_DASHobject] = ACTIONS(125),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(123),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(123),
    [anon_sym_move_DASHresult] = ACTIONS(125),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(123),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(123),
    [anon_sym_move_DASHexception] = ACTIONS(123),
    [anon_sym_return_DASHvoid] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_return_DASHwide] = ACTIONS(123),
    [anon_sym_return_DASHobject] = ACTIONS(123),
    [anon_sym_const_SLASH4] = ACTIONS(123),
    [anon_sym_const_SLASH16] = ACTIONS(123),
    [anon_sym_const] = ACTIONS(125),
    [anon_sym_const_SLASHhigh16] = ACTIONS(123),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(123),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(123),
    [anon_sym_const_DASHwide] = ACTIONS(125),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(123),
    [anon_sym_const_DASHstring] = ACTIONS(125),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(123),
    [anon_sym_const_DASHclass] = ACTIONS(123),
    [anon_sym_monitor_DASHenter] = ACTIONS(123),
    [anon_sym_monitor_DASHexit] = ACTIONS(123),
    [anon_sym_check_DASHcast] = ACTIONS(123),
    [anon_sym_instance_DASHof] = ACTIONS(123),
    [anon_sym_array_DASHlength] = ACTIONS(123),
    [anon_sym_new_DASHinstance] = ACTIONS(123),
    [anon_sym_new_DASHarray] = ACTIONS(123),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(125),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(123),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(123),
    [anon_sym_throw] = ACTIONS(123),
    [anon_sym_goto] = ACTIONS(125),
    [anon_sym_goto_SLASH16] = ACTIONS(123),
    [anon_sym_goto_SLASH32] = ACTIONS(123),
    [anon_sym_packed_DASHswitch] = ACTIONS(123),
    [anon_sym_sparse_DASHswitch] = ACTIONS(123),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(123),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(123),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(123),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(123),
    [anon_sym_cmp_DASHlong] = ACTIONS(123),
    [anon_sym_if_DASHeq] = ACTIONS(125),
    [anon_sym_if_DASHne] = ACTIONS(125),
    [anon_sym_if_DASHlt] = ACTIONS(125),
    [anon_sym_if_DASHge] = ACTIONS(125),
    [anon_sym_if_DASHgt] = ACTIONS(125),
    [anon_sym_if_DASHle] = ACTIONS(125),
    [anon_sym_if_DASHeqz] = ACTIONS(123),
    [anon_sym_if_DASHnez] = ACTIONS(123),
    [anon_sym_if_DASHltz] = ACTIONS(123),
    [anon_sym_if_DASHgez] = ACTIONS(123),
    [anon_sym_if_DASHgtz] = ACTIONS(123),
    [anon_sym_if_DASHlez] = ACTIONS(123),
    [anon_sym_aget] = ACTIONS(125),
    [anon_sym_aget_DASHwide] = ACTIONS(123),
    [anon_sym_aget_DASHobject] = ACTIONS(123),
    [anon_sym_aget_DASHboolean] = ACTIONS(123),
    [anon_sym_aget_DASHbyte] = ACTIONS(123),
    [anon_sym_aget_DASHchar] = ACTIONS(123),
    [anon_sym_aget_DASHshort] = ACTIONS(123),
    [anon_sym_aput] = ACTIONS(125),
    [anon_sym_aput_DASHwide] = ACTIONS(123),
    [anon_sym_aput_DASHobject] = ACTIONS(123),
    [anon_sym_aput_DASHboolean] = ACTIONS(123),
    [anon_sym_aput_DASHbyte] = ACTIONS(123),
    [anon_sym_aput_DASHchar] = ACTIONS(123),
    [anon_sym_aput_DASHshort] = ACTIONS(123),
    [anon_sym_iget] = ACTIONS(125),
    [anon_sym_iget_DASHwide] = ACTIONS(125),
    [anon_sym_iget_DASHobject] = ACTIONS(125),
    [anon_sym_iget_DASHboolean] = ACTIONS(123),
    [anon_sym_iget_DASHbyte] = ACTIONS(123),
    [anon_sym_iget_DASHchar] = ACTIONS(123),
    [anon_sym_iget_DASHshort] = ACTIONS(123),
    [anon_sym_iput] = ACTIONS(125),
    [anon_sym_iput_DASHwide] = ACTIONS(125),
    [anon_sym_iput_DASHobject] = ACTIONS(125),
    [anon_sym_iput_DASHboolean] = ACTIONS(123),
    [anon_sym_iput_DASHbyte] = ACTIONS(123),
    [anon_sym_iput_DASHchar] = ACTIONS(123),
    [anon_sym_iput_DASHshort] = ACTIONS(123),
    [anon_sym_sget] = ACTIONS(125),
    [anon_sym_sget_DASHwide] = ACTIONS(123),
    [anon_sym_sget_DASHobject] = ACTIONS(123),
    [anon_sym_sget_DASHboolean] = ACTIONS(123),
    [anon_sym_sget_DASHbyte] = ACTIONS(123),
    [anon_sym_sget_DASHchar] = ACTIONS(123),
    [anon_sym_sget_DASHshort] = ACTIONS(123),
    [anon_sym_sput] = ACTIONS(125),
    [anon_sym_sput_DASHwide] = ACTIONS(123),
    [anon_sym_sput_DASHobject] = ACTIONS(123),
    [anon_sym_sput_DASHboolean] = ACTIONS(123),
    [anon_sym_sput_DASHbyte] = ACTIONS(123),
    [anon_sym_sput_DASHchar] = ACTIONS(123),
    [anon_sym_sput_DASHshort] = ACTIONS(123),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(125),
    [anon_sym_invoke_DASHsuper] = ACTIONS(125),
    [anon_sym_invoke_DASHdirect] = ACTIONS(125),
    [anon_sym_invoke_DASHstatic] = ACTIONS(125),
    [anon_sym_invoke_DASHinterface] = ACTIONS(125),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(123),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(123),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(123),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(123),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(123),
    [anon_sym_neg_DASHint] = ACTIONS(123),
    [anon_sym_not_DASHint] = ACTIONS(123),
    [anon_sym_neg_DASHlong] = ACTIONS(123),
    [anon_sym_not_DASHlong] = ACTIONS(123),
    [anon_sym_neg_DASHfloat] = ACTIONS(123),
    [anon_sym_neg_DASHdouble] = ACTIONS(123),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(123),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(123),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(123),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(123),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(123),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(123),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(123),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(123),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(123),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(123),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(123),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(123),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(123),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(123),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(123),
    [anon_sym_add_DASHint] = ACTIONS(125),
    [anon_sym_sub_DASHint] = ACTIONS(125),
    [anon_sym_mul_DASHint] = ACTIONS(125),
    [anon_sym_div_DASHint] = ACTIONS(125),
    [anon_sym_rem_DASHint] = ACTIONS(125),
    [anon_sym_and_DASHint] = ACTIONS(125),
    [anon_sym_or_DASHint] = ACTIONS(125),
    [anon_sym_xor_DASHint] = ACTIONS(125),
    [anon_sym_shl_DASHint] = ACTIONS(125),
    [anon_sym_shr_DASHint] = ACTIONS(125),
    [anon_sym_ushr_DASHint] = ACTIONS(125),
    [anon_sym_add_DASHlong] = ACTIONS(125),
    [anon_sym_sub_DASHlong] = ACTIONS(125),
    [anon_sym_mul_DASHlong] = ACTIONS(125),
    [anon_sym_div_DASHlong] = ACTIONS(125),
    [anon_sym_rem_DASHlong] = ACTIONS(125),
    [anon_sym_and_DASHlong] = ACTIONS(125),
    [anon_sym_or_DASHlong] = ACTIONS(125),
    [anon_sym_xor_DASHlong] = ACTIONS(125),
    [anon_sym_shl_DASHlong] = ACTIONS(125),
    [anon_sym_shr_DASHlong] = ACTIONS(125),
    [anon_sym_ushr_DASHlong] = ACTIONS(125),
    [anon_sym_add_DASHfloat] = ACTIONS(125),
    [anon_sym_sub_DASHfloat] = ACTIONS(125),
    [anon_sym_mul_DASHfloat] = ACTIONS(125),
    [anon_sym_div_DASHfloat] = ACTIONS(125),
    [anon_sym_rem_DASHfloat] = ACTIONS(125),
    [anon_sym_add_DASHdouble] = ACTIONS(125),
    [anon_sym_sub_DASHdouble] = ACTIONS(125),
    [anon_sym_mul_DASHdouble] = ACTIONS(125),
    [anon_sym_div_DASHdouble] = ACTIONS(125),
    [anon_sym_rem_DASHdouble] = ACTIONS(125),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(123),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(123),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(123),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(123),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(123),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(123),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(123),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(123),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(123),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(123),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(123),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(123),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(123),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_execute_DASHinline] = ACTIONS(123),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(123),
    [anon_sym_iget_DASHquick] = ACTIONS(123),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(123),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(123),
    [anon_sym_iput_DASHquick] = ACTIONS(123),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(123),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(123),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(125),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(123),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(125),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(123),
    [anon_sym_rsub_DASHint] = ACTIONS(125),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(123),
    [anon_sym_DOTline] = ACTIONS(123),
    [anon_sym_DOTlocals] = ACTIONS(123),
    [anon_sym_DOTcatch] = ACTIONS(125),
    [anon_sym_DOTcatchall] = ACTIONS(123),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(123),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(123),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_end_method] = ACTIONS(127),
    [anon_sym_DOTannotation] = ACTIONS(127),
    [anon_sym_DOTparam] = ACTIONS(127),
    [sym_label] = ACTIONS(127),
    [anon_sym_nop] = ACTIONS(127),
    [anon_sym_move] = ACTIONS(129),
    [anon_sym_move_SLASHfrom16] = ACTIONS(127),
    [anon_sym_move_SLASH16] = ACTIONS(127),
    [anon_sym_move_DASHwide] = ACTIONS(129),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(127),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(127),
    [anon_sym_move_DASHobject] = ACTIONS(129),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(127),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(127),
    [anon_sym_move_DASHresult] = ACTIONS(129),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(127),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(127),
    [anon_sym_move_DASHexception] = ACTIONS(127),
    [anon_sym_return_DASHvoid] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_return_DASHwide] = ACTIONS(127),
    [anon_sym_return_DASHobject] = ACTIONS(127),
    [anon_sym_const_SLASH4] = ACTIONS(127),
    [anon_sym_const_SLASH16] = ACTIONS(127),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_const_SLASHhigh16] = ACTIONS(127),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(127),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(127),
    [anon_sym_const_DASHwide] = ACTIONS(129),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(127),
    [anon_sym_const_DASHstring] = ACTIONS(129),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(127),
    [anon_sym_const_DASHclass] = ACTIONS(127),
    [anon_sym_monitor_DASHenter] = ACTIONS(127),
    [anon_sym_monitor_DASHexit] = ACTIONS(127),
    [anon_sym_check_DASHcast] = ACTIONS(127),
    [anon_sym_instance_DASHof] = ACTIONS(127),
    [anon_sym_array_DASHlength] = ACTIONS(127),
    [anon_sym_new_DASHinstance] = ACTIONS(127),
    [anon_sym_new_DASHarray] = ACTIONS(127),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(129),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(127),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(127),
    [anon_sym_throw] = ACTIONS(127),
    [anon_sym_goto] = ACTIONS(129),
    [anon_sym_goto_SLASH16] = ACTIONS(127),
    [anon_sym_goto_SLASH32] = ACTIONS(127),
    [anon_sym_packed_DASHswitch] = ACTIONS(127),
    [anon_sym_sparse_DASHswitch] = ACTIONS(127),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(127),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(127),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(127),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(127),
    [anon_sym_cmp_DASHlong] = ACTIONS(127),
    [anon_sym_if_DASHeq] = ACTIONS(129),
    [anon_sym_if_DASHne] = ACTIONS(129),
    [anon_sym_if_DASHlt] = ACTIONS(129),
    [anon_sym_if_DASHge] = ACTIONS(129),
    [anon_sym_if_DASHgt] = ACTIONS(129),
    [anon_sym_if_DASHle] = ACTIONS(129),
    [anon_sym_if_DASHeqz] = ACTIONS(127),
    [anon_sym_if_DASHnez] = ACTIONS(127),
    [anon_sym_if_DASHltz] = ACTIONS(127),
    [anon_sym_if_DASHgez] = ACTIONS(127),
    [anon_sym_if_DASHgtz] = ACTIONS(127),
    [anon_sym_if_DASHlez] = ACTIONS(127),
    [anon_sym_aget] = ACTIONS(129),
    [anon_sym_aget_DASHwide] = ACTIONS(127),
    [anon_sym_aget_DASHobject] = ACTIONS(127),
    [anon_sym_aget_DASHboolean] = ACTIONS(127),
    [anon_sym_aget_DASHbyte] = ACTIONS(127),
    [anon_sym_aget_DASHchar] = ACTIONS(127),
    [anon_sym_aget_DASHshort] = ACTIONS(127),
    [anon_sym_aput] = ACTIONS(129),
    [anon_sym_aput_DASHwide] = ACTIONS(127),
    [anon_sym_aput_DASHobject] = ACTIONS(127),
    [anon_sym_aput_DASHboolean] = ACTIONS(127),
    [anon_sym_aput_DASHbyte] = ACTIONS(127),
    [anon_sym_aput_DASHchar] = ACTIONS(127),
    [anon_sym_aput_DASHshort] = ACTIONS(127),
    [anon_sym_iget] = ACTIONS(129),
    [anon_sym_iget_DASHwide] = ACTIONS(129),
    [anon_sym_iget_DASHobject] = ACTIONS(129),
    [anon_sym_iget_DASHboolean] = ACTIONS(127),
    [anon_sym_iget_DASHbyte] = ACTIONS(127),
    [anon_sym_iget_DASHchar] = ACTIONS(127),
    [anon_sym_iget_DASHshort] = ACTIONS(127),
    [anon_sym_iput] = ACTIONS(129),
    [anon_sym_iput_DASHwide] = ACTIONS(129),
    [anon_sym_iput_DASHobject] = ACTIONS(129),
    [anon_sym_iput_DASHboolean] = ACTIONS(127),
    [anon_sym_iput_DASHbyte] = ACTIONS(127),
    [anon_sym_iput_DASHchar] = ACTIONS(127),
    [anon_sym_iput_DASHshort] = ACTIONS(127),
    [anon_sym_sget] = ACTIONS(129),
    [anon_sym_sget_DASHwide] = ACTIONS(127),
    [anon_sym_sget_DASHobject] = ACTIONS(127),
    [anon_sym_sget_DASHboolean] = ACTIONS(127),
    [anon_sym_sget_DASHbyte] = ACTIONS(127),
    [anon_sym_sget_DASHchar] = ACTIONS(127),
    [anon_sym_sget_DASHshort] = ACTIONS(127),
    [anon_sym_sput] = ACTIONS(129),
    [anon_sym_sput_DASHwide] = ACTIONS(127),
    [anon_sym_sput_DASHobject] = ACTIONS(127),
    [anon_sym_sput_DASHboolean] = ACTIONS(127),
    [anon_sym_sput_DASHbyte] = ACTIONS(127),
    [anon_sym_sput_DASHchar] = ACTIONS(127),
    [anon_sym_sput_DASHshort] = ACTIONS(127),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(129),
    [anon_sym_invoke_DASHsuper] = ACTIONS(129),
    [anon_sym_invoke_DASHdirect] = ACTIONS(129),
    [anon_sym_invoke_DASHstatic] = ACTIONS(129),
    [anon_sym_invoke_DASHinterface] = ACTIONS(129),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(127),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(127),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(127),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(127),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(127),
    [anon_sym_neg_DASHint] = ACTIONS(127),
    [anon_sym_not_DASHint] = ACTIONS(127),
    [anon_sym_neg_DASHlong] = ACTIONS(127),
    [anon_sym_not_DASHlong] = ACTIONS(127),
    [anon_sym_neg_DASHfloat] = ACTIONS(127),
    [anon_sym_neg_DASHdouble] = ACTIONS(127),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(127),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(127),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(127),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(127),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(127),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(127),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(127),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(127),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(127),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(127),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(127),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(127),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(127),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(127),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(127),
    [anon_sym_add_DASHint] = ACTIONS(129),
    [anon_sym_sub_DASHint] = ACTIONS(129),
    [anon_sym_mul_DASHint] = ACTIONS(129),
    [anon_sym_div_DASHint] = ACTIONS(129),
    [anon_sym_rem_DASHint] = ACTIONS(129),
    [anon_sym_and_DASHint] = ACTIONS(129),
    [anon_sym_or_DASHint] = ACTIONS(129),
    [anon_sym_xor_DASHint] = ACTIONS(129),
    [anon_sym_shl_DASHint] = ACTIONS(129),
    [anon_sym_shr_DASHint] = ACTIONS(129),
    [anon_sym_ushr_DASHint] = ACTIONS(129),
    [anon_sym_add_DASHlong] = ACTIONS(129),
    [anon_sym_sub_DASHlong] = ACTIONS(129),
    [anon_sym_mul_DASHlong] = ACTIONS(129),
    [anon_sym_div_DASHlong] = ACTIONS(129),
    [anon_sym_rem_DASHlong] = ACTIONS(129),
    [anon_sym_and_DASHlong] = ACTIONS(129),
    [anon_sym_or_DASHlong] = ACTIONS(129),
    [anon_sym_xor_DASHlong] = ACTIONS(129),
    [anon_sym_shl_DASHlong] = ACTIONS(129),
    [anon_sym_shr_DASHlong] = ACTIONS(129),
    [anon_sym_ushr_DASHlong] = ACTIONS(129),
    [anon_sym_add_DASHfloat] = ACTIONS(129),
    [anon_sym_sub_DASHfloat] = ACTIONS(129),
    [anon_sym_mul_DASHfloat] = ACTIONS(129),
    [anon_sym_div_DASHfloat] = ACTIONS(129),
    [anon_sym_rem_DASHfloat] = ACTIONS(129),
    [anon_sym_add_DASHdouble] = ACTIONS(129),
    [anon_sym_sub_DASHdouble] = ACTIONS(129),
    [anon_sym_mul_DASHdouble] = ACTIONS(129),
    [anon_sym_div_DASHdouble] = ACTIONS(129),
    [anon_sym_rem_DASHdouble] = ACTIONS(129),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(127),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(127),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(127),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(127),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(127),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(127),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(127),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(127),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(127),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(127),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(127),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(127),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(127),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_execute_DASHinline] = ACTIONS(127),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(127),
    [anon_sym_iget_DASHquick] = ACTIONS(127),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(127),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(127),
    [anon_sym_iput_DASHquick] = ACTIONS(127),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(127),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(127),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(129),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(127),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(129),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(127),
    [anon_sym_rsub_DASHint] = ACTIONS(129),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(127),
    [anon_sym_DOTline] = ACTIONS(127),
    [anon_sym_DOTlocals] = ACTIONS(127),
    [anon_sym_DOTcatch] = ACTIONS(129),
    [anon_sym_DOTcatchall] = ACTIONS(127),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(127),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(127),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_end_method] = ACTIONS(131),
    [anon_sym_DOTannotation] = ACTIONS(131),
    [anon_sym_DOTparam] = ACTIONS(131),
    [sym_label] = ACTIONS(131),
    [anon_sym_nop] = ACTIONS(131),
    [anon_sym_move] = ACTIONS(133),
    [anon_sym_move_SLASHfrom16] = ACTIONS(131),
    [anon_sym_move_SLASH16] = ACTIONS(131),
    [anon_sym_move_DASHwide] = ACTIONS(133),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(131),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(131),
    [anon_sym_move_DASHobject] = ACTIONS(133),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(131),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(131),
    [anon_sym_move_DASHresult] = ACTIONS(133),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(131),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(131),
    [anon_sym_move_DASHexception] = ACTIONS(131),
    [anon_sym_return_DASHvoid] = ACTIONS(131),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_return_DASHwide] = ACTIONS(131),
    [anon_sym_return_DASHobject] = ACTIONS(131),
    [anon_sym_const_SLASH4] = ACTIONS(131),
    [anon_sym_const_SLASH16] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_const_SLASHhigh16] = ACTIONS(131),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(131),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(131),
    [anon_sym_const_DASHwide] = ACTIONS(133),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(131),
    [anon_sym_const_DASHstring] = ACTIONS(133),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(131),
    [anon_sym_const_DASHclass] = ACTIONS(131),
    [anon_sym_monitor_DASHenter] = ACTIONS(131),
    [anon_sym_monitor_DASHexit] = ACTIONS(131),
    [anon_sym_check_DASHcast] = ACTIONS(131),
    [anon_sym_instance_DASHof] = ACTIONS(131),
    [anon_sym_array_DASHlength] = ACTIONS(131),
    [anon_sym_new_DASHinstance] = ACTIONS(131),
    [anon_sym_new_DASHarray] = ACTIONS(131),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(133),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(131),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(131),
    [anon_sym_throw] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_goto_SLASH16] = ACTIONS(131),
    [anon_sym_goto_SLASH32] = ACTIONS(131),
    [anon_sym_packed_DASHswitch] = ACTIONS(131),
    [anon_sym_sparse_DASHswitch] = ACTIONS(131),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(131),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(131),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(131),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(131),
    [anon_sym_cmp_DASHlong] = ACTIONS(131),
    [anon_sym_if_DASHeq] = ACTIONS(133),
    [anon_sym_if_DASHne] = ACTIONS(133),
    [anon_sym_if_DASHlt] = ACTIONS(133),
    [anon_sym_if_DASHge] = ACTIONS(133),
    [anon_sym_if_DASHgt] = ACTIONS(133),
    [anon_sym_if_DASHle] = ACTIONS(133),
    [anon_sym_if_DASHeqz] = ACTIONS(131),
    [anon_sym_if_DASHnez] = ACTIONS(131),
    [anon_sym_if_DASHltz] = ACTIONS(131),
    [anon_sym_if_DASHgez] = ACTIONS(131),
    [anon_sym_if_DASHgtz] = ACTIONS(131),
    [anon_sym_if_DASHlez] = ACTIONS(131),
    [anon_sym_aget] = ACTIONS(133),
    [anon_sym_aget_DASHwide] = ACTIONS(131),
    [anon_sym_aget_DASHobject] = ACTIONS(131),
    [anon_sym_aget_DASHboolean] = ACTIONS(131),
    [anon_sym_aget_DASHbyte] = ACTIONS(131),
    [anon_sym_aget_DASHchar] = ACTIONS(131),
    [anon_sym_aget_DASHshort] = ACTIONS(131),
    [anon_sym_aput] = ACTIONS(133),
    [anon_sym_aput_DASHwide] = ACTIONS(131),
    [anon_sym_aput_DASHobject] = ACTIONS(131),
    [anon_sym_aput_DASHboolean] = ACTIONS(131),
    [anon_sym_aput_DASHbyte] = ACTIONS(131),
    [anon_sym_aput_DASHchar] = ACTIONS(131),
    [anon_sym_aput_DASHshort] = ACTIONS(131),
    [anon_sym_iget] = ACTIONS(133),
    [anon_sym_iget_DASHwide] = ACTIONS(133),
    [anon_sym_iget_DASHobject] = ACTIONS(133),
    [anon_sym_iget_DASHboolean] = ACTIONS(131),
    [anon_sym_iget_DASHbyte] = ACTIONS(131),
    [anon_sym_iget_DASHchar] = ACTIONS(131),
    [anon_sym_iget_DASHshort] = ACTIONS(131),
    [anon_sym_iput] = ACTIONS(133),
    [anon_sym_iput_DASHwide] = ACTIONS(133),
    [anon_sym_iput_DASHobject] = ACTIONS(133),
    [anon_sym_iput_DASHboolean] = ACTIONS(131),
    [anon_sym_iput_DASHbyte] = ACTIONS(131),
    [anon_sym_iput_DASHchar] = ACTIONS(131),
    [anon_sym_iput_DASHshort] = ACTIONS(131),
    [anon_sym_sget] = ACTIONS(133),
    [anon_sym_sget_DASHwide] = ACTIONS(131),
    [anon_sym_sget_DASHobject] = ACTIONS(131),
    [anon_sym_sget_DASHboolean] = ACTIONS(131),
    [anon_sym_sget_DASHbyte] = ACTIONS(131),
    [anon_sym_sget_DASHchar] = ACTIONS(131),
    [anon_sym_sget_DASHshort] = ACTIONS(131),
    [anon_sym_sput] = ACTIONS(133),
    [anon_sym_sput_DASHwide] = ACTIONS(131),
    [anon_sym_sput_DASHobject] = ACTIONS(131),
    [anon_sym_sput_DASHboolean] = ACTIONS(131),
    [anon_sym_sput_DASHbyte] = ACTIONS(131),
    [anon_sym_sput_DASHchar] = ACTIONS(131),
    [anon_sym_sput_DASHshort] = ACTIONS(131),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(133),
    [anon_sym_invoke_DASHsuper] = ACTIONS(133),
    [anon_sym_invoke_DASHdirect] = ACTIONS(133),
    [anon_sym_invoke_DASHstatic] = ACTIONS(133),
    [anon_sym_invoke_DASHinterface] = ACTIONS(133),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(131),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(131),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(131),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(131),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(131),
    [anon_sym_neg_DASHint] = ACTIONS(131),
    [anon_sym_not_DASHint] = ACTIONS(131),
    [anon_sym_neg_DASHlong] = ACTIONS(131),
    [anon_sym_not_DASHlong] = ACTIONS(131),
    [anon_sym_neg_DASHfloat] = ACTIONS(131),
    [anon_sym_neg_DASHdouble] = ACTIONS(131),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(131),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(131),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(131),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(131),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(131),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(131),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(131),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(131),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(131),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(131),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(131),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(131),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(131),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(131),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(131),
    [anon_sym_add_DASHint] = ACTIONS(133),
    [anon_sym_sub_DASHint] = ACTIONS(133),
    [anon_sym_mul_DASHint] = ACTIONS(133),
    [anon_sym_div_DASHint] = ACTIONS(133),
    [anon_sym_rem_DASHint] = ACTIONS(133),
    [anon_sym_and_DASHint] = ACTIONS(133),
    [anon_sym_or_DASHint] = ACTIONS(133),
    [anon_sym_xor_DASHint] = ACTIONS(133),
    [anon_sym_shl_DASHint] = ACTIONS(133),
    [anon_sym_shr_DASHint] = ACTIONS(133),
    [anon_sym_ushr_DASHint] = ACTIONS(133),
    [anon_sym_add_DASHlong] = ACTIONS(133),
    [anon_sym_sub_DASHlong] = ACTIONS(133),
    [anon_sym_mul_DASHlong] = ACTIONS(133),
    [anon_sym_div_DASHlong] = ACTIONS(133),
    [anon_sym_rem_DASHlong] = ACTIONS(133),
    [anon_sym_and_DASHlong] = ACTIONS(133),
    [anon_sym_or_DASHlong] = ACTIONS(133),
    [anon_sym_xor_DASHlong] = ACTIONS(133),
    [anon_sym_shl_DASHlong] = ACTIONS(133),
    [anon_sym_shr_DASHlong] = ACTIONS(133),
    [anon_sym_ushr_DASHlong] = ACTIONS(133),
    [anon_sym_add_DASHfloat] = ACTIONS(133),
    [anon_sym_sub_DASHfloat] = ACTIONS(133),
    [anon_sym_mul_DASHfloat] = ACTIONS(133),
    [anon_sym_div_DASHfloat] = ACTIONS(133),
    [anon_sym_rem_DASHfloat] = ACTIONS(133),
    [anon_sym_add_DASHdouble] = ACTIONS(133),
    [anon_sym_sub_DASHdouble] = ACTIONS(133),
    [anon_sym_mul_DASHdouble] = ACTIONS(133),
    [anon_sym_div_DASHdouble] = ACTIONS(133),
    [anon_sym_rem_DASHdouble] = ACTIONS(133),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(131),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(131),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(131),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(131),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(131),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(131),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(131),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(131),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(131),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(131),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(131),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(131),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(131),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_execute_DASHinline] = ACTIONS(131),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(131),
    [anon_sym_iget_DASHquick] = ACTIONS(131),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(131),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(131),
    [anon_sym_iput_DASHquick] = ACTIONS(131),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(131),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(131),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(133),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(131),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(133),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(131),
    [anon_sym_rsub_DASHint] = ACTIONS(133),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(131),
    [anon_sym_DOTline] = ACTIONS(131),
    [anon_sym_DOTlocals] = ACTIONS(131),
    [anon_sym_DOTcatch] = ACTIONS(133),
    [anon_sym_DOTcatchall] = ACTIONS(131),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(131),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(131),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_end_method] = ACTIONS(135),
    [anon_sym_DOTannotation] = ACTIONS(135),
    [anon_sym_DOTparam] = ACTIONS(135),
    [sym_label] = ACTIONS(135),
    [anon_sym_nop] = ACTIONS(135),
    [anon_sym_move] = ACTIONS(137),
    [anon_sym_move_SLASHfrom16] = ACTIONS(135),
    [anon_sym_move_SLASH16] = ACTIONS(135),
    [anon_sym_move_DASHwide] = ACTIONS(137),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(135),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(135),
    [anon_sym_move_DASHobject] = ACTIONS(137),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(135),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(135),
    [anon_sym_move_DASHresult] = ACTIONS(137),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(135),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(135),
    [anon_sym_move_DASHexception] = ACTIONS(135),
    [anon_sym_return_DASHvoid] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(137),
    [anon_sym_return_DASHwide] = ACTIONS(135),
    [anon_sym_return_DASHobject] = ACTIONS(135),
    [anon_sym_const_SLASH4] = ACTIONS(135),
    [anon_sym_const_SLASH16] = ACTIONS(135),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_const_SLASHhigh16] = ACTIONS(135),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(135),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(135),
    [anon_sym_const_DASHwide] = ACTIONS(137),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(135),
    [anon_sym_const_DASHstring] = ACTIONS(137),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(135),
    [anon_sym_const_DASHclass] = ACTIONS(135),
    [anon_sym_monitor_DASHenter] = ACTIONS(135),
    [anon_sym_monitor_DASHexit] = ACTIONS(135),
    [anon_sym_check_DASHcast] = ACTIONS(135),
    [anon_sym_instance_DASHof] = ACTIONS(135),
    [anon_sym_array_DASHlength] = ACTIONS(135),
    [anon_sym_new_DASHinstance] = ACTIONS(135),
    [anon_sym_new_DASHarray] = ACTIONS(135),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(137),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(135),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(135),
    [anon_sym_throw] = ACTIONS(135),
    [anon_sym_goto] = ACTIONS(137),
    [anon_sym_goto_SLASH16] = ACTIONS(135),
    [anon_sym_goto_SLASH32] = ACTIONS(135),
    [anon_sym_packed_DASHswitch] = ACTIONS(135),
    [anon_sym_sparse_DASHswitch] = ACTIONS(135),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(135),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(135),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(135),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(135),
    [anon_sym_cmp_DASHlong] = ACTIONS(135),
    [anon_sym_if_DASHeq] = ACTIONS(137),
    [anon_sym_if_DASHne] = ACTIONS(137),
    [anon_sym_if_DASHlt] = ACTIONS(137),
    [anon_sym_if_DASHge] = ACTIONS(137),
    [anon_sym_if_DASHgt] = ACTIONS(137),
    [anon_sym_if_DASHle] = ACTIONS(137),
    [anon_sym_if_DASHeqz] = ACTIONS(135),
    [anon_sym_if_DASHnez] = ACTIONS(135),
    [anon_sym_if_DASHltz] = ACTIONS(135),
    [anon_sym_if_DASHgez] = ACTIONS(135),
    [anon_sym_if_DASHgtz] = ACTIONS(135),
    [anon_sym_if_DASHlez] = ACTIONS(135),
    [anon_sym_aget] = ACTIONS(137),
    [anon_sym_aget_DASHwide] = ACTIONS(135),
    [anon_sym_aget_DASHobject] = ACTIONS(135),
    [anon_sym_aget_DASHboolean] = ACTIONS(135),
    [anon_sym_aget_DASHbyte] = ACTIONS(135),
    [anon_sym_aget_DASHchar] = ACTIONS(135),
    [anon_sym_aget_DASHshort] = ACTIONS(135),
    [anon_sym_aput] = ACTIONS(137),
    [anon_sym_aput_DASHwide] = ACTIONS(135),
    [anon_sym_aput_DASHobject] = ACTIONS(135),
    [anon_sym_aput_DASHboolean] = ACTIONS(135),
    [anon_sym_aput_DASHbyte] = ACTIONS(135),
    [anon_sym_aput_DASHchar] = ACTIONS(135),
    [anon_sym_aput_DASHshort] = ACTIONS(135),
    [anon_sym_iget] = ACTIONS(137),
    [anon_sym_iget_DASHwide] = ACTIONS(137),
    [anon_sym_iget_DASHobject] = ACTIONS(137),
    [anon_sym_iget_DASHboolean] = ACTIONS(135),
    [anon_sym_iget_DASHbyte] = ACTIONS(135),
    [anon_sym_iget_DASHchar] = ACTIONS(135),
    [anon_sym_iget_DASHshort] = ACTIONS(135),
    [anon_sym_iput] = ACTIONS(137),
    [anon_sym_iput_DASHwide] = ACTIONS(137),
    [anon_sym_iput_DASHobject] = ACTIONS(137),
    [anon_sym_iput_DASHboolean] = ACTIONS(135),
    [anon_sym_iput_DASHbyte] = ACTIONS(135),
    [anon_sym_iput_DASHchar] = ACTIONS(135),
    [anon_sym_iput_DASHshort] = ACTIONS(135),
    [anon_sym_sget] = ACTIONS(137),
    [anon_sym_sget_DASHwide] = ACTIONS(135),
    [anon_sym_sget_DASHobject] = ACTIONS(135),
    [anon_sym_sget_DASHboolean] = ACTIONS(135),
    [anon_sym_sget_DASHbyte] = ACTIONS(135),
    [anon_sym_sget_DASHchar] = ACTIONS(135),
    [anon_sym_sget_DASHshort] = ACTIONS(135),
    [anon_sym_sput] = ACTIONS(137),
    [anon_sym_sput_DASHwide] = ACTIONS(135),
    [anon_sym_sput_DASHobject] = ACTIONS(135),
    [anon_sym_sput_DASHboolean] = ACTIONS(135),
    [anon_sym_sput_DASHbyte] = ACTIONS(135),
    [anon_sym_sput_DASHchar] = ACTIONS(135),
    [anon_sym_sput_DASHshort] = ACTIONS(135),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(137),
    [anon_sym_invoke_DASHsuper] = ACTIONS(137),
    [anon_sym_invoke_DASHdirect] = ACTIONS(137),
    [anon_sym_invoke_DASHstatic] = ACTIONS(137),
    [anon_sym_invoke_DASHinterface] = ACTIONS(137),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(135),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(135),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(135),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(135),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(135),
    [anon_sym_neg_DASHint] = ACTIONS(135),
    [anon_sym_not_DASHint] = ACTIONS(135),
    [anon_sym_neg_DASHlong] = ACTIONS(135),
    [anon_sym_not_DASHlong] = ACTIONS(135),
    [anon_sym_neg_DASHfloat] = ACTIONS(135),
    [anon_sym_neg_DASHdouble] = ACTIONS(135),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(135),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(135),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(135),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(135),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(135),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(135),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(135),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(135),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(135),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(135),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(135),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(135),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(135),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(135),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(135),
    [anon_sym_add_DASHint] = ACTIONS(137),
    [anon_sym_sub_DASHint] = ACTIONS(137),
    [anon_sym_mul_DASHint] = ACTIONS(137),
    [anon_sym_div_DASHint] = ACTIONS(137),
    [anon_sym_rem_DASHint] = ACTIONS(137),
    [anon_sym_and_DASHint] = ACTIONS(137),
    [anon_sym_or_DASHint] = ACTIONS(137),
    [anon_sym_xor_DASHint] = ACTIONS(137),
    [anon_sym_shl_DASHint] = ACTIONS(137),
    [anon_sym_shr_DASHint] = ACTIONS(137),
    [anon_sym_ushr_DASHint] = ACTIONS(137),
    [anon_sym_add_DASHlong] = ACTIONS(137),
    [anon_sym_sub_DASHlong] = ACTIONS(137),
    [anon_sym_mul_DASHlong] = ACTIONS(137),
    [anon_sym_div_DASHlong] = ACTIONS(137),
    [anon_sym_rem_DASHlong] = ACTIONS(137),
    [anon_sym_and_DASHlong] = ACTIONS(137),
    [anon_sym_or_DASHlong] = ACTIONS(137),
    [anon_sym_xor_DASHlong] = ACTIONS(137),
    [anon_sym_shl_DASHlong] = ACTIONS(137),
    [anon_sym_shr_DASHlong] = ACTIONS(137),
    [anon_sym_ushr_DASHlong] = ACTIONS(137),
    [anon_sym_add_DASHfloat] = ACTIONS(137),
    [anon_sym_sub_DASHfloat] = ACTIONS(137),
    [anon_sym_mul_DASHfloat] = ACTIONS(137),
    [anon_sym_div_DASHfloat] = ACTIONS(137),
    [anon_sym_rem_DASHfloat] = ACTIONS(137),
    [anon_sym_add_DASHdouble] = ACTIONS(137),
    [anon_sym_sub_DASHdouble] = ACTIONS(137),
    [anon_sym_mul_DASHdouble] = ACTIONS(137),
    [anon_sym_div_DASHdouble] = ACTIONS(137),
    [anon_sym_rem_DASHdouble] = ACTIONS(137),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(135),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(135),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(135),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(135),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(135),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(135),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(135),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(135),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(135),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(135),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(135),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(135),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(135),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_execute_DASHinline] = ACTIONS(135),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(135),
    [anon_sym_iget_DASHquick] = ACTIONS(135),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(135),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(135),
    [anon_sym_iput_DASHquick] = ACTIONS(135),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(135),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(135),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(137),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(135),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(137),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(135),
    [anon_sym_rsub_DASHint] = ACTIONS(137),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(135),
    [anon_sym_DOTline] = ACTIONS(135),
    [anon_sym_DOTlocals] = ACTIONS(135),
    [anon_sym_DOTcatch] = ACTIONS(137),
    [anon_sym_DOTcatchall] = ACTIONS(135),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(135),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(135),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_end_method] = ACTIONS(139),
    [anon_sym_DOTannotation] = ACTIONS(139),
    [anon_sym_DOTparam] = ACTIONS(139),
    [sym_label] = ACTIONS(139),
    [anon_sym_nop] = ACTIONS(139),
    [anon_sym_move] = ACTIONS(141),
    [anon_sym_move_SLASHfrom16] = ACTIONS(139),
    [anon_sym_move_SLASH16] = ACTIONS(139),
    [anon_sym_move_DASHwide] = ACTIONS(141),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(139),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(139),
    [anon_sym_move_DASHobject] = ACTIONS(141),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(139),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(139),
    [anon_sym_move_DASHresult] = ACTIONS(141),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(139),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(139),
    [anon_sym_move_DASHexception] = ACTIONS(139),
    [anon_sym_return_DASHvoid] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(141),
    [anon_sym_return_DASHwide] = ACTIONS(139),
    [anon_sym_return_DASHobject] = ACTIONS(139),
    [anon_sym_const_SLASH4] = ACTIONS(139),
    [anon_sym_const_SLASH16] = ACTIONS(139),
    [anon_sym_const] = ACTIONS(141),
    [anon_sym_const_SLASHhigh16] = ACTIONS(139),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(139),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(139),
    [anon_sym_const_DASHwide] = ACTIONS(141),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(139),
    [anon_sym_const_DASHstring] = ACTIONS(141),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(139),
    [anon_sym_const_DASHclass] = ACTIONS(139),
    [anon_sym_monitor_DASHenter] = ACTIONS(139),
    [anon_sym_monitor_DASHexit] = ACTIONS(139),
    [anon_sym_check_DASHcast] = ACTIONS(139),
    [anon_sym_instance_DASHof] = ACTIONS(139),
    [anon_sym_array_DASHlength] = ACTIONS(139),
    [anon_sym_new_DASHinstance] = ACTIONS(139),
    [anon_sym_new_DASHarray] = ACTIONS(139),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(141),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(139),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(139),
    [anon_sym_throw] = ACTIONS(139),
    [anon_sym_goto] = ACTIONS(141),
    [anon_sym_goto_SLASH16] = ACTIONS(139),
    [anon_sym_goto_SLASH32] = ACTIONS(139),
    [anon_sym_packed_DASHswitch] = ACTIONS(139),
    [anon_sym_sparse_DASHswitch] = ACTIONS(139),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(139),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(139),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(139),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(139),
    [anon_sym_cmp_DASHlong] = ACTIONS(139),
    [anon_sym_if_DASHeq] = ACTIONS(141),
    [anon_sym_if_DASHne] = ACTIONS(141),
    [anon_sym_if_DASHlt] = ACTIONS(141),
    [anon_sym_if_DASHge] = ACTIONS(141),
    [anon_sym_if_DASHgt] = ACTIONS(141),
    [anon_sym_if_DASHle] = ACTIONS(141),
    [anon_sym_if_DASHeqz] = ACTIONS(139),
    [anon_sym_if_DASHnez] = ACTIONS(139),
    [anon_sym_if_DASHltz] = ACTIONS(139),
    [anon_sym_if_DASHgez] = ACTIONS(139),
    [anon_sym_if_DASHgtz] = ACTIONS(139),
    [anon_sym_if_DASHlez] = ACTIONS(139),
    [anon_sym_aget] = ACTIONS(141),
    [anon_sym_aget_DASHwide] = ACTIONS(139),
    [anon_sym_aget_DASHobject] = ACTIONS(139),
    [anon_sym_aget_DASHboolean] = ACTIONS(139),
    [anon_sym_aget_DASHbyte] = ACTIONS(139),
    [anon_sym_aget_DASHchar] = ACTIONS(139),
    [anon_sym_aget_DASHshort] = ACTIONS(139),
    [anon_sym_aput] = ACTIONS(141),
    [anon_sym_aput_DASHwide] = ACTIONS(139),
    [anon_sym_aput_DASHobject] = ACTIONS(139),
    [anon_sym_aput_DASHboolean] = ACTIONS(139),
    [anon_sym_aput_DASHbyte] = ACTIONS(139),
    [anon_sym_aput_DASHchar] = ACTIONS(139),
    [anon_sym_aput_DASHshort] = ACTIONS(139),
    [anon_sym_iget] = ACTIONS(141),
    [anon_sym_iget_DASHwide] = ACTIONS(141),
    [anon_sym_iget_DASHobject] = ACTIONS(141),
    [anon_sym_iget_DASHboolean] = ACTIONS(139),
    [anon_sym_iget_DASHbyte] = ACTIONS(139),
    [anon_sym_iget_DASHchar] = ACTIONS(139),
    [anon_sym_iget_DASHshort] = ACTIONS(139),
    [anon_sym_iput] = ACTIONS(141),
    [anon_sym_iput_DASHwide] = ACTIONS(141),
    [anon_sym_iput_DASHobject] = ACTIONS(141),
    [anon_sym_iput_DASHboolean] = ACTIONS(139),
    [anon_sym_iput_DASHbyte] = ACTIONS(139),
    [anon_sym_iput_DASHchar] = ACTIONS(139),
    [anon_sym_iput_DASHshort] = ACTIONS(139),
    [anon_sym_sget] = ACTIONS(141),
    [anon_sym_sget_DASHwide] = ACTIONS(139),
    [anon_sym_sget_DASHobject] = ACTIONS(139),
    [anon_sym_sget_DASHboolean] = ACTIONS(139),
    [anon_sym_sget_DASHbyte] = ACTIONS(139),
    [anon_sym_sget_DASHchar] = ACTIONS(139),
    [anon_sym_sget_DASHshort] = ACTIONS(139),
    [anon_sym_sput] = ACTIONS(141),
    [anon_sym_sput_DASHwide] = ACTIONS(139),
    [anon_sym_sput_DASHobject] = ACTIONS(139),
    [anon_sym_sput_DASHboolean] = ACTIONS(139),
    [anon_sym_sput_DASHbyte] = ACTIONS(139),
    [anon_sym_sput_DASHchar] = ACTIONS(139),
    [anon_sym_sput_DASHshort] = ACTIONS(139),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(141),
    [anon_sym_invoke_DASHsuper] = ACTIONS(141),
    [anon_sym_invoke_DASHdirect] = ACTIONS(141),
    [anon_sym_invoke_DASHstatic] = ACTIONS(141),
    [anon_sym_invoke_DASHinterface] = ACTIONS(141),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(139),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(139),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(139),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(139),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(139),
    [anon_sym_neg_DASHint] = ACTIONS(139),
    [anon_sym_not_DASHint] = ACTIONS(139),
    [anon_sym_neg_DASHlong] = ACTIONS(139),
    [anon_sym_not_DASHlong] = ACTIONS(139),
    [anon_sym_neg_DASHfloat] = ACTIONS(139),
    [anon_sym_neg_DASHdouble] = ACTIONS(139),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(139),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(139),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(139),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(139),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(139),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(139),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(139),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(139),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(139),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(139),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(139),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(139),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(139),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(139),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(139),
    [anon_sym_add_DASHint] = ACTIONS(141),
    [anon_sym_sub_DASHint] = ACTIONS(141),
    [anon_sym_mul_DASHint] = ACTIONS(141),
    [anon_sym_div_DASHint] = ACTIONS(141),
    [anon_sym_rem_DASHint] = ACTIONS(141),
    [anon_sym_and_DASHint] = ACTIONS(141),
    [anon_sym_or_DASHint] = ACTIONS(141),
    [anon_sym_xor_DASHint] = ACTIONS(141),
    [anon_sym_shl_DASHint] = ACTIONS(141),
    [anon_sym_shr_DASHint] = ACTIONS(141),
    [anon_sym_ushr_DASHint] = ACTIONS(141),
    [anon_sym_add_DASHlong] = ACTIONS(141),
    [anon_sym_sub_DASHlong] = ACTIONS(141),
    [anon_sym_mul_DASHlong] = ACTIONS(141),
    [anon_sym_div_DASHlong] = ACTIONS(141),
    [anon_sym_rem_DASHlong] = ACTIONS(141),
    [anon_sym_and_DASHlong] = ACTIONS(141),
    [anon_sym_or_DASHlong] = ACTIONS(141),
    [anon_sym_xor_DASHlong] = ACTIONS(141),
    [anon_sym_shl_DASHlong] = ACTIONS(141),
    [anon_sym_shr_DASHlong] = ACTIONS(141),
    [anon_sym_ushr_DASHlong] = ACTIONS(141),
    [anon_sym_add_DASHfloat] = ACTIONS(141),
    [anon_sym_sub_DASHfloat] = ACTIONS(141),
    [anon_sym_mul_DASHfloat] = ACTIONS(141),
    [anon_sym_div_DASHfloat] = ACTIONS(141),
    [anon_sym_rem_DASHfloat] = ACTIONS(141),
    [anon_sym_add_DASHdouble] = ACTIONS(141),
    [anon_sym_sub_DASHdouble] = ACTIONS(141),
    [anon_sym_mul_DASHdouble] = ACTIONS(141),
    [anon_sym_div_DASHdouble] = ACTIONS(141),
    [anon_sym_rem_DASHdouble] = ACTIONS(141),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(139),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(139),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(139),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(139),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(139),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(139),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(139),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(139),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(139),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(139),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(139),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(139),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(139),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_execute_DASHinline] = ACTIONS(139),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(139),
    [anon_sym_iget_DASHquick] = ACTIONS(139),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(139),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(139),
    [anon_sym_iput_DASHquick] = ACTIONS(139),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(139),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(139),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(141),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(139),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(141),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(139),
    [anon_sym_rsub_DASHint] = ACTIONS(141),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(139),
    [anon_sym_DOTline] = ACTIONS(139),
    [anon_sym_DOTlocals] = ACTIONS(139),
    [anon_sym_DOTcatch] = ACTIONS(141),
    [anon_sym_DOTcatchall] = ACTIONS(139),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(139),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(139),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_end_method] = ACTIONS(143),
    [anon_sym_DOTannotation] = ACTIONS(143),
    [anon_sym_DOTparam] = ACTIONS(143),
    [sym_label] = ACTIONS(143),
    [anon_sym_nop] = ACTIONS(143),
    [anon_sym_move] = ACTIONS(145),
    [anon_sym_move_SLASHfrom16] = ACTIONS(143),
    [anon_sym_move_SLASH16] = ACTIONS(143),
    [anon_sym_move_DASHwide] = ACTIONS(145),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(143),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(143),
    [anon_sym_move_DASHobject] = ACTIONS(145),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(143),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(143),
    [anon_sym_move_DASHresult] = ACTIONS(145),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(143),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(143),
    [anon_sym_move_DASHexception] = ACTIONS(143),
    [anon_sym_return_DASHvoid] = ACTIONS(143),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_return_DASHwide] = ACTIONS(143),
    [anon_sym_return_DASHobject] = ACTIONS(143),
    [anon_sym_const_SLASH4] = ACTIONS(143),
    [anon_sym_const_SLASH16] = ACTIONS(143),
    [anon_sym_const] = ACTIONS(145),
    [anon_sym_const_SLASHhigh16] = ACTIONS(143),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(143),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(143),
    [anon_sym_const_DASHwide] = ACTIONS(145),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(143),
    [anon_sym_const_DASHstring] = ACTIONS(145),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(143),
    [anon_sym_const_DASHclass] = ACTIONS(143),
    [anon_sym_monitor_DASHenter] = ACTIONS(143),
    [anon_sym_monitor_DASHexit] = ACTIONS(143),
    [anon_sym_check_DASHcast] = ACTIONS(143),
    [anon_sym_instance_DASHof] = ACTIONS(143),
    [anon_sym_array_DASHlength] = ACTIONS(143),
    [anon_sym_new_DASHinstance] = ACTIONS(143),
    [anon_sym_new_DASHarray] = ACTIONS(143),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(145),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(143),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(143),
    [anon_sym_throw] = ACTIONS(143),
    [anon_sym_goto] = ACTIONS(145),
    [anon_sym_goto_SLASH16] = ACTIONS(143),
    [anon_sym_goto_SLASH32] = ACTIONS(143),
    [anon_sym_packed_DASHswitch] = ACTIONS(143),
    [anon_sym_sparse_DASHswitch] = ACTIONS(143),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(143),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(143),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(143),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(143),
    [anon_sym_cmp_DASHlong] = ACTIONS(143),
    [anon_sym_if_DASHeq] = ACTIONS(145),
    [anon_sym_if_DASHne] = ACTIONS(145),
    [anon_sym_if_DASHlt] = ACTIONS(145),
    [anon_sym_if_DASHge] = ACTIONS(145),
    [anon_sym_if_DASHgt] = ACTIONS(145),
    [anon_sym_if_DASHle] = ACTIONS(145),
    [anon_sym_if_DASHeqz] = ACTIONS(143),
    [anon_sym_if_DASHnez] = ACTIONS(143),
    [anon_sym_if_DASHltz] = ACTIONS(143),
    [anon_sym_if_DASHgez] = ACTIONS(143),
    [anon_sym_if_DASHgtz] = ACTIONS(143),
    [anon_sym_if_DASHlez] = ACTIONS(143),
    [anon_sym_aget] = ACTIONS(145),
    [anon_sym_aget_DASHwide] = ACTIONS(143),
    [anon_sym_aget_DASHobject] = ACTIONS(143),
    [anon_sym_aget_DASHboolean] = ACTIONS(143),
    [anon_sym_aget_DASHbyte] = ACTIONS(143),
    [anon_sym_aget_DASHchar] = ACTIONS(143),
    [anon_sym_aget_DASHshort] = ACTIONS(143),
    [anon_sym_aput] = ACTIONS(145),
    [anon_sym_aput_DASHwide] = ACTIONS(143),
    [anon_sym_aput_DASHobject] = ACTIONS(143),
    [anon_sym_aput_DASHboolean] = ACTIONS(143),
    [anon_sym_aput_DASHbyte] = ACTIONS(143),
    [anon_sym_aput_DASHchar] = ACTIONS(143),
    [anon_sym_aput_DASHshort] = ACTIONS(143),
    [anon_sym_iget] = ACTIONS(145),
    [anon_sym_iget_DASHwide] = ACTIONS(145),
    [anon_sym_iget_DASHobject] = ACTIONS(145),
    [anon_sym_iget_DASHboolean] = ACTIONS(143),
    [anon_sym_iget_DASHbyte] = ACTIONS(143),
    [anon_sym_iget_DASHchar] = ACTIONS(143),
    [anon_sym_iget_DASHshort] = ACTIONS(143),
    [anon_sym_iput] = ACTIONS(145),
    [anon_sym_iput_DASHwide] = ACTIONS(145),
    [anon_sym_iput_DASHobject] = ACTIONS(145),
    [anon_sym_iput_DASHboolean] = ACTIONS(143),
    [anon_sym_iput_DASHbyte] = ACTIONS(143),
    [anon_sym_iput_DASHchar] = ACTIONS(143),
    [anon_sym_iput_DASHshort] = ACTIONS(143),
    [anon_sym_sget] = ACTIONS(145),
    [anon_sym_sget_DASHwide] = ACTIONS(143),
    [anon_sym_sget_DASHobject] = ACTIONS(143),
    [anon_sym_sget_DASHboolean] = ACTIONS(143),
    [anon_sym_sget_DASHbyte] = ACTIONS(143),
    [anon_sym_sget_DASHchar] = ACTIONS(143),
    [anon_sym_sget_DASHshort] = ACTIONS(143),
    [anon_sym_sput] = ACTIONS(145),
    [anon_sym_sput_DASHwide] = ACTIONS(143),
    [anon_sym_sput_DASHobject] = ACTIONS(143),
    [anon_sym_sput_DASHboolean] = ACTIONS(143),
    [anon_sym_sput_DASHbyte] = ACTIONS(143),
    [anon_sym_sput_DASHchar] = ACTIONS(143),
    [anon_sym_sput_DASHshort] = ACTIONS(143),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(145),
    [anon_sym_invoke_DASHsuper] = ACTIONS(145),
    [anon_sym_invoke_DASHdirect] = ACTIONS(145),
    [anon_sym_invoke_DASHstatic] = ACTIONS(145),
    [anon_sym_invoke_DASHinterface] = ACTIONS(145),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(143),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(143),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(143),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(143),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(143),
    [anon_sym_neg_DASHint] = ACTIONS(143),
    [anon_sym_not_DASHint] = ACTIONS(143),
    [anon_sym_neg_DASHlong] = ACTIONS(143),
    [anon_sym_not_DASHlong] = ACTIONS(143),
    [anon_sym_neg_DASHfloat] = ACTIONS(143),
    [anon_sym_neg_DASHdouble] = ACTIONS(143),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(143),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(143),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(143),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(143),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(143),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(143),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(143),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(143),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(143),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(143),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(143),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(143),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(143),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(143),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(143),
    [anon_sym_add_DASHint] = ACTIONS(145),
    [anon_sym_sub_DASHint] = ACTIONS(145),
    [anon_sym_mul_DASHint] = ACTIONS(145),
    [anon_sym_div_DASHint] = ACTIONS(145),
    [anon_sym_rem_DASHint] = ACTIONS(145),
    [anon_sym_and_DASHint] = ACTIONS(145),
    [anon_sym_or_DASHint] = ACTIONS(145),
    [anon_sym_xor_DASHint] = ACTIONS(145),
    [anon_sym_shl_DASHint] = ACTIONS(145),
    [anon_sym_shr_DASHint] = ACTIONS(145),
    [anon_sym_ushr_DASHint] = ACTIONS(145),
    [anon_sym_add_DASHlong] = ACTIONS(145),
    [anon_sym_sub_DASHlong] = ACTIONS(145),
    [anon_sym_mul_DASHlong] = ACTIONS(145),
    [anon_sym_div_DASHlong] = ACTIONS(145),
    [anon_sym_rem_DASHlong] = ACTIONS(145),
    [anon_sym_and_DASHlong] = ACTIONS(145),
    [anon_sym_or_DASHlong] = ACTIONS(145),
    [anon_sym_xor_DASHlong] = ACTIONS(145),
    [anon_sym_shl_DASHlong] = ACTIONS(145),
    [anon_sym_shr_DASHlong] = ACTIONS(145),
    [anon_sym_ushr_DASHlong] = ACTIONS(145),
    [anon_sym_add_DASHfloat] = ACTIONS(145),
    [anon_sym_sub_DASHfloat] = ACTIONS(145),
    [anon_sym_mul_DASHfloat] = ACTIONS(145),
    [anon_sym_div_DASHfloat] = ACTIONS(145),
    [anon_sym_rem_DASHfloat] = ACTIONS(145),
    [anon_sym_add_DASHdouble] = ACTIONS(145),
    [anon_sym_sub_DASHdouble] = ACTIONS(145),
    [anon_sym_mul_DASHdouble] = ACTIONS(145),
    [anon_sym_div_DASHdouble] = ACTIONS(145),
    [anon_sym_rem_DASHdouble] = ACTIONS(145),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(143),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(143),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(143),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(143),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(143),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(143),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(143),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(143),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(143),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(143),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(143),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(143),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(143),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_execute_DASHinline] = ACTIONS(143),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(143),
    [anon_sym_iget_DASHquick] = ACTIONS(143),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(143),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(143),
    [anon_sym_iput_DASHquick] = ACTIONS(143),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(143),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(143),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(145),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(143),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(145),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(143),
    [anon_sym_rsub_DASHint] = ACTIONS(145),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(143),
    [anon_sym_DOTline] = ACTIONS(143),
    [anon_sym_DOTlocals] = ACTIONS(143),
    [anon_sym_DOTcatch] = ACTIONS(145),
    [anon_sym_DOTcatchall] = ACTIONS(143),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(143),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(143),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_end_method] = ACTIONS(147),
    [anon_sym_DOTannotation] = ACTIONS(147),
    [anon_sym_DOTparam] = ACTIONS(147),
    [sym_label] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(149),
    [anon_sym_move_SLASHfrom16] = ACTIONS(147),
    [anon_sym_move_SLASH16] = ACTIONS(147),
    [anon_sym_move_DASHwide] = ACTIONS(149),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(147),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(147),
    [anon_sym_move_DASHobject] = ACTIONS(149),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(147),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(147),
    [anon_sym_move_DASHresult] = ACTIONS(149),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(147),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(147),
    [anon_sym_move_DASHexception] = ACTIONS(147),
    [anon_sym_return_DASHvoid] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_return_DASHwide] = ACTIONS(147),
    [anon_sym_return_DASHobject] = ACTIONS(147),
    [anon_sym_const_SLASH4] = ACTIONS(147),
    [anon_sym_const_SLASH16] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_const_SLASHhigh16] = ACTIONS(147),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(147),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(147),
    [anon_sym_const_DASHwide] = ACTIONS(149),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(147),
    [anon_sym_const_DASHstring] = ACTIONS(149),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(147),
    [anon_sym_const_DASHclass] = ACTIONS(147),
    [anon_sym_monitor_DASHenter] = ACTIONS(147),
    [anon_sym_monitor_DASHexit] = ACTIONS(147),
    [anon_sym_check_DASHcast] = ACTIONS(147),
    [anon_sym_instance_DASHof] = ACTIONS(147),
    [anon_sym_array_DASHlength] = ACTIONS(147),
    [anon_sym_new_DASHinstance] = ACTIONS(147),
    [anon_sym_new_DASHarray] = ACTIONS(147),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(149),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(147),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(147),
    [anon_sym_throw] = ACTIONS(147),
    [anon_sym_goto] = ACTIONS(149),
    [anon_sym_goto_SLASH16] = ACTIONS(147),
    [anon_sym_goto_SLASH32] = ACTIONS(147),
    [anon_sym_packed_DASHswitch] = ACTIONS(147),
    [anon_sym_sparse_DASHswitch] = ACTIONS(147),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(147),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(147),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(147),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(147),
    [anon_sym_cmp_DASHlong] = ACTIONS(147),
    [anon_sym_if_DASHeq] = ACTIONS(149),
    [anon_sym_if_DASHne] = ACTIONS(149),
    [anon_sym_if_DASHlt] = ACTIONS(149),
    [anon_sym_if_DASHge] = ACTIONS(149),
    [anon_sym_if_DASHgt] = ACTIONS(149),
    [anon_sym_if_DASHle] = ACTIONS(149),
    [anon_sym_if_DASHeqz] = ACTIONS(147),
    [anon_sym_if_DASHnez] = ACTIONS(147),
    [anon_sym_if_DASHltz] = ACTIONS(147),
    [anon_sym_if_DASHgez] = ACTIONS(147),
    [anon_sym_if_DASHgtz] = ACTIONS(147),
    [anon_sym_if_DASHlez] = ACTIONS(147),
    [anon_sym_aget] = ACTIONS(149),
    [anon_sym_aget_DASHwide] = ACTIONS(147),
    [anon_sym_aget_DASHobject] = ACTIONS(147),
    [anon_sym_aget_DASHboolean] = ACTIONS(147),
    [anon_sym_aget_DASHbyte] = ACTIONS(147),
    [anon_sym_aget_DASHchar] = ACTIONS(147),
    [anon_sym_aget_DASHshort] = ACTIONS(147),
    [anon_sym_aput] = ACTIONS(149),
    [anon_sym_aput_DASHwide] = ACTIONS(147),
    [anon_sym_aput_DASHobject] = ACTIONS(147),
    [anon_sym_aput_DASHboolean] = ACTIONS(147),
    [anon_sym_aput_DASHbyte] = ACTIONS(147),
    [anon_sym_aput_DASHchar] = ACTIONS(147),
    [anon_sym_aput_DASHshort] = ACTIONS(147),
    [anon_sym_iget] = ACTIONS(149),
    [anon_sym_iget_DASHwide] = ACTIONS(149),
    [anon_sym_iget_DASHobject] = ACTIONS(149),
    [anon_sym_iget_DASHboolean] = ACTIONS(147),
    [anon_sym_iget_DASHbyte] = ACTIONS(147),
    [anon_sym_iget_DASHchar] = ACTIONS(147),
    [anon_sym_iget_DASHshort] = ACTIONS(147),
    [anon_sym_iput] = ACTIONS(149),
    [anon_sym_iput_DASHwide] = ACTIONS(149),
    [anon_sym_iput_DASHobject] = ACTIONS(149),
    [anon_sym_iput_DASHboolean] = ACTIONS(147),
    [anon_sym_iput_DASHbyte] = ACTIONS(147),
    [anon_sym_iput_DASHchar] = ACTIONS(147),
    [anon_sym_iput_DASHshort] = ACTIONS(147),
    [anon_sym_sget] = ACTIONS(149),
    [anon_sym_sget_DASHwide] = ACTIONS(147),
    [anon_sym_sget_DASHobject] = ACTIONS(147),
    [anon_sym_sget_DASHboolean] = ACTIONS(147),
    [anon_sym_sget_DASHbyte] = ACTIONS(147),
    [anon_sym_sget_DASHchar] = ACTIONS(147),
    [anon_sym_sget_DASHshort] = ACTIONS(147),
    [anon_sym_sput] = ACTIONS(149),
    [anon_sym_sput_DASHwide] = ACTIONS(147),
    [anon_sym_sput_DASHobject] = ACTIONS(147),
    [anon_sym_sput_DASHboolean] = ACTIONS(147),
    [anon_sym_sput_DASHbyte] = ACTIONS(147),
    [anon_sym_sput_DASHchar] = ACTIONS(147),
    [anon_sym_sput_DASHshort] = ACTIONS(147),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(149),
    [anon_sym_invoke_DASHsuper] = ACTIONS(149),
    [anon_sym_invoke_DASHdirect] = ACTIONS(149),
    [anon_sym_invoke_DASHstatic] = ACTIONS(149),
    [anon_sym_invoke_DASHinterface] = ACTIONS(149),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(147),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(147),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(147),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(147),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(147),
    [anon_sym_neg_DASHint] = ACTIONS(147),
    [anon_sym_not_DASHint] = ACTIONS(147),
    [anon_sym_neg_DASHlong] = ACTIONS(147),
    [anon_sym_not_DASHlong] = ACTIONS(147),
    [anon_sym_neg_DASHfloat] = ACTIONS(147),
    [anon_sym_neg_DASHdouble] = ACTIONS(147),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(147),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(147),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(147),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(147),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(147),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(147),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(147),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(147),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(147),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(147),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(147),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(147),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(147),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(147),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(147),
    [anon_sym_add_DASHint] = ACTIONS(149),
    [anon_sym_sub_DASHint] = ACTIONS(149),
    [anon_sym_mul_DASHint] = ACTIONS(149),
    [anon_sym_div_DASHint] = ACTIONS(149),
    [anon_sym_rem_DASHint] = ACTIONS(149),
    [anon_sym_and_DASHint] = ACTIONS(149),
    [anon_sym_or_DASHint] = ACTIONS(149),
    [anon_sym_xor_DASHint] = ACTIONS(149),
    [anon_sym_shl_DASHint] = ACTIONS(149),
    [anon_sym_shr_DASHint] = ACTIONS(149),
    [anon_sym_ushr_DASHint] = ACTIONS(149),
    [anon_sym_add_DASHlong] = ACTIONS(149),
    [anon_sym_sub_DASHlong] = ACTIONS(149),
    [anon_sym_mul_DASHlong] = ACTIONS(149),
    [anon_sym_div_DASHlong] = ACTIONS(149),
    [anon_sym_rem_DASHlong] = ACTIONS(149),
    [anon_sym_and_DASHlong] = ACTIONS(149),
    [anon_sym_or_DASHlong] = ACTIONS(149),
    [anon_sym_xor_DASHlong] = ACTIONS(149),
    [anon_sym_shl_DASHlong] = ACTIONS(149),
    [anon_sym_shr_DASHlong] = ACTIONS(149),
    [anon_sym_ushr_DASHlong] = ACTIONS(149),
    [anon_sym_add_DASHfloat] = ACTIONS(149),
    [anon_sym_sub_DASHfloat] = ACTIONS(149),
    [anon_sym_mul_DASHfloat] = ACTIONS(149),
    [anon_sym_div_DASHfloat] = ACTIONS(149),
    [anon_sym_rem_DASHfloat] = ACTIONS(149),
    [anon_sym_add_DASHdouble] = ACTIONS(149),
    [anon_sym_sub_DASHdouble] = ACTIONS(149),
    [anon_sym_mul_DASHdouble] = ACTIONS(149),
    [anon_sym_div_DASHdouble] = ACTIONS(149),
    [anon_sym_rem_DASHdouble] = ACTIONS(149),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(147),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(147),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(147),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(147),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(147),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(147),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(147),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(147),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(147),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(147),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(147),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(147),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(147),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_execute_DASHinline] = ACTIONS(147),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(147),
    [anon_sym_iget_DASHquick] = ACTIONS(147),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(147),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(147),
    [anon_sym_iput_DASHquick] = ACTIONS(147),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(147),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(147),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(149),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(147),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(149),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(147),
    [anon_sym_rsub_DASHint] = ACTIONS(149),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(147),
    [anon_sym_DOTline] = ACTIONS(147),
    [anon_sym_DOTlocals] = ACTIONS(147),
    [anon_sym_DOTcatch] = ACTIONS(149),
    [anon_sym_DOTcatchall] = ACTIONS(147),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(147),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(147),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_end_method] = ACTIONS(151),
    [anon_sym_DOTannotation] = ACTIONS(151),
    [anon_sym_DOTparam] = ACTIONS(151),
    [sym_label] = ACTIONS(151),
    [anon_sym_nop] = ACTIONS(151),
    [anon_sym_move] = ACTIONS(153),
    [anon_sym_move_SLASHfrom16] = ACTIONS(151),
    [anon_sym_move_SLASH16] = ACTIONS(151),
    [anon_sym_move_DASHwide] = ACTIONS(153),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(151),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(151),
    [anon_sym_move_DASHobject] = ACTIONS(153),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(151),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(151),
    [anon_sym_move_DASHresult] = ACTIONS(153),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(151),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(151),
    [anon_sym_move_DASHexception] = ACTIONS(151),
    [anon_sym_return_DASHvoid] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_return_DASHwide] = ACTIONS(151),
    [anon_sym_return_DASHobject] = ACTIONS(151),
    [anon_sym_const_SLASH4] = ACTIONS(151),
    [anon_sym_const_SLASH16] = ACTIONS(151),
    [anon_sym_const] = ACTIONS(153),
    [anon_sym_const_SLASHhigh16] = ACTIONS(151),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(151),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(151),
    [anon_sym_const_DASHwide] = ACTIONS(153),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(151),
    [anon_sym_const_DASHstring] = ACTIONS(153),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(151),
    [anon_sym_const_DASHclass] = ACTIONS(151),
    [anon_sym_monitor_DASHenter] = ACTIONS(151),
    [anon_sym_monitor_DASHexit] = ACTIONS(151),
    [anon_sym_check_DASHcast] = ACTIONS(151),
    [anon_sym_instance_DASHof] = ACTIONS(151),
    [anon_sym_array_DASHlength] = ACTIONS(151),
    [anon_sym_new_DASHinstance] = ACTIONS(151),
    [anon_sym_new_DASHarray] = ACTIONS(151),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(153),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(151),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(151),
    [anon_sym_throw] = ACTIONS(151),
    [anon_sym_goto] = ACTIONS(153),
    [anon_sym_goto_SLASH16] = ACTIONS(151),
    [anon_sym_goto_SLASH32] = ACTIONS(151),
    [anon_sym_packed_DASHswitch] = ACTIONS(151),
    [anon_sym_sparse_DASHswitch] = ACTIONS(151),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(151),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(151),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(151),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(151),
    [anon_sym_cmp_DASHlong] = ACTIONS(151),
    [anon_sym_if_DASHeq] = ACTIONS(153),
    [anon_sym_if_DASHne] = ACTIONS(153),
    [anon_sym_if_DASHlt] = ACTIONS(153),
    [anon_sym_if_DASHge] = ACTIONS(153),
    [anon_sym_if_DASHgt] = ACTIONS(153),
    [anon_sym_if_DASHle] = ACTIONS(153),
    [anon_sym_if_DASHeqz] = ACTIONS(151),
    [anon_sym_if_DASHnez] = ACTIONS(151),
    [anon_sym_if_DASHltz] = ACTIONS(151),
    [anon_sym_if_DASHgez] = ACTIONS(151),
    [anon_sym_if_DASHgtz] = ACTIONS(151),
    [anon_sym_if_DASHlez] = ACTIONS(151),
    [anon_sym_aget] = ACTIONS(153),
    [anon_sym_aget_DASHwide] = ACTIONS(151),
    [anon_sym_aget_DASHobject] = ACTIONS(151),
    [anon_sym_aget_DASHboolean] = ACTIONS(151),
    [anon_sym_aget_DASHbyte] = ACTIONS(151),
    [anon_sym_aget_DASHchar] = ACTIONS(151),
    [anon_sym_aget_DASHshort] = ACTIONS(151),
    [anon_sym_aput] = ACTIONS(153),
    [anon_sym_aput_DASHwide] = ACTIONS(151),
    [anon_sym_aput_DASHobject] = ACTIONS(151),
    [anon_sym_aput_DASHboolean] = ACTIONS(151),
    [anon_sym_aput_DASHbyte] = ACTIONS(151),
    [anon_sym_aput_DASHchar] = ACTIONS(151),
    [anon_sym_aput_DASHshort] = ACTIONS(151),
    [anon_sym_iget] = ACTIONS(153),
    [anon_sym_iget_DASHwide] = ACTIONS(153),
    [anon_sym_iget_DASHobject] = ACTIONS(153),
    [anon_sym_iget_DASHboolean] = ACTIONS(151),
    [anon_sym_iget_DASHbyte] = ACTIONS(151),
    [anon_sym_iget_DASHchar] = ACTIONS(151),
    [anon_sym_iget_DASHshort] = ACTIONS(151),
    [anon_sym_iput] = ACTIONS(153),
    [anon_sym_iput_DASHwide] = ACTIONS(153),
    [anon_sym_iput_DASHobject] = ACTIONS(153),
    [anon_sym_iput_DASHboolean] = ACTIONS(151),
    [anon_sym_iput_DASHbyte] = ACTIONS(151),
    [anon_sym_iput_DASHchar] = ACTIONS(151),
    [anon_sym_iput_DASHshort] = ACTIONS(151),
    [anon_sym_sget] = ACTIONS(153),
    [anon_sym_sget_DASHwide] = ACTIONS(151),
    [anon_sym_sget_DASHobject] = ACTIONS(151),
    [anon_sym_sget_DASHboolean] = ACTIONS(151),
    [anon_sym_sget_DASHbyte] = ACTIONS(151),
    [anon_sym_sget_DASHchar] = ACTIONS(151),
    [anon_sym_sget_DASHshort] = ACTIONS(151),
    [anon_sym_sput] = ACTIONS(153),
    [anon_sym_sput_DASHwide] = ACTIONS(151),
    [anon_sym_sput_DASHobject] = ACTIONS(151),
    [anon_sym_sput_DASHboolean] = ACTIONS(151),
    [anon_sym_sput_DASHbyte] = ACTIONS(151),
    [anon_sym_sput_DASHchar] = ACTIONS(151),
    [anon_sym_sput_DASHshort] = ACTIONS(151),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(153),
    [anon_sym_invoke_DASHsuper] = ACTIONS(153),
    [anon_sym_invoke_DASHdirect] = ACTIONS(153),
    [anon_sym_invoke_DASHstatic] = ACTIONS(153),
    [anon_sym_invoke_DASHinterface] = ACTIONS(153),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(151),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(151),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(151),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(151),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(151),
    [anon_sym_neg_DASHint] = ACTIONS(151),
    [anon_sym_not_DASHint] = ACTIONS(151),
    [anon_sym_neg_DASHlong] = ACTIONS(151),
    [anon_sym_not_DASHlong] = ACTIONS(151),
    [anon_sym_neg_DASHfloat] = ACTIONS(151),
    [anon_sym_neg_DASHdouble] = ACTIONS(151),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(151),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(151),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(151),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(151),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(151),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(151),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(151),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(151),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(151),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(151),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(151),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(151),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(151),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(151),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(151),
    [anon_sym_add_DASHint] = ACTIONS(153),
    [anon_sym_sub_DASHint] = ACTIONS(153),
    [anon_sym_mul_DASHint] = ACTIONS(153),
    [anon_sym_div_DASHint] = ACTIONS(153),
    [anon_sym_rem_DASHint] = ACTIONS(153),
    [anon_sym_and_DASHint] = ACTIONS(153),
    [anon_sym_or_DASHint] = ACTIONS(153),
    [anon_sym_xor_DASHint] = ACTIONS(153),
    [anon_sym_shl_DASHint] = ACTIONS(153),
    [anon_sym_shr_DASHint] = ACTIONS(153),
    [anon_sym_ushr_DASHint] = ACTIONS(153),
    [anon_sym_add_DASHlong] = ACTIONS(153),
    [anon_sym_sub_DASHlong] = ACTIONS(153),
    [anon_sym_mul_DASHlong] = ACTIONS(153),
    [anon_sym_div_DASHlong] = ACTIONS(153),
    [anon_sym_rem_DASHlong] = ACTIONS(153),
    [anon_sym_and_DASHlong] = ACTIONS(153),
    [anon_sym_or_DASHlong] = ACTIONS(153),
    [anon_sym_xor_DASHlong] = ACTIONS(153),
    [anon_sym_shl_DASHlong] = ACTIONS(153),
    [anon_sym_shr_DASHlong] = ACTIONS(153),
    [anon_sym_ushr_DASHlong] = ACTIONS(153),
    [anon_sym_add_DASHfloat] = ACTIONS(153),
    [anon_sym_sub_DASHfloat] = ACTIONS(153),
    [anon_sym_mul_DASHfloat] = ACTIONS(153),
    [anon_sym_div_DASHfloat] = ACTIONS(153),
    [anon_sym_rem_DASHfloat] = ACTIONS(153),
    [anon_sym_add_DASHdouble] = ACTIONS(153),
    [anon_sym_sub_DASHdouble] = ACTIONS(153),
    [anon_sym_mul_DASHdouble] = ACTIONS(153),
    [anon_sym_div_DASHdouble] = ACTIONS(153),
    [anon_sym_rem_DASHdouble] = ACTIONS(153),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(151),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(151),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(151),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(151),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(151),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(151),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(151),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(151),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(151),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(151),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(151),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(151),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(151),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_execute_DASHinline] = ACTIONS(151),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(151),
    [anon_sym_iget_DASHquick] = ACTIONS(151),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(151),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(151),
    [anon_sym_iput_DASHquick] = ACTIONS(151),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(151),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(151),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(153),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(151),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(153),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(151),
    [anon_sym_rsub_DASHint] = ACTIONS(153),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(151),
    [anon_sym_DOTline] = ACTIONS(151),
    [anon_sym_DOTlocals] = ACTIONS(151),
    [anon_sym_DOTcatch] = ACTIONS(153),
    [anon_sym_DOTcatchall] = ACTIONS(151),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(151),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(151),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_end_method] = ACTIONS(155),
    [anon_sym_DOTannotation] = ACTIONS(155),
    [anon_sym_DOTparam] = ACTIONS(155),
    [sym_label] = ACTIONS(155),
    [anon_sym_nop] = ACTIONS(155),
    [anon_sym_move] = ACTIONS(157),
    [anon_sym_move_SLASHfrom16] = ACTIONS(155),
    [anon_sym_move_SLASH16] = ACTIONS(155),
    [anon_sym_move_DASHwide] = ACTIONS(157),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(155),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(155),
    [anon_sym_move_DASHobject] = ACTIONS(157),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(155),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(155),
    [anon_sym_move_DASHresult] = ACTIONS(157),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(155),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(155),
    [anon_sym_move_DASHexception] = ACTIONS(155),
    [anon_sym_return_DASHvoid] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_return_DASHwide] = ACTIONS(155),
    [anon_sym_return_DASHobject] = ACTIONS(155),
    [anon_sym_const_SLASH4] = ACTIONS(155),
    [anon_sym_const_SLASH16] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(157),
    [anon_sym_const_SLASHhigh16] = ACTIONS(155),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(155),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(155),
    [anon_sym_const_DASHwide] = ACTIONS(157),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(155),
    [anon_sym_const_DASHstring] = ACTIONS(157),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(155),
    [anon_sym_const_DASHclass] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [anon_sym_check_DASHcast] = ACTIONS(155),
    [anon_sym_instance_DASHof] = ACTIONS(155),
    [anon_sym_array_DASHlength] = ACTIONS(155),
    [anon_sym_new_DASHinstance] = ACTIONS(155),
    [anon_sym_new_DASHarray] = ACTIONS(155),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(157),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(155),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_goto] = ACTIONS(157),
    [anon_sym_goto_SLASH16] = ACTIONS(155),
    [anon_sym_goto_SLASH32] = ACTIONS(155),
    [anon_sym_packed_DASHswitch] = ACTIONS(155),
    [anon_sym_sparse_DASHswitch] = ACTIONS(155),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(155),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(155),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(155),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(155),
    [anon_sym_cmp_DASHlong] = ACTIONS(155),
    [anon_sym_if_DASHeq] = ACTIONS(157),
    [anon_sym_if_DASHne] = ACTIONS(157),
    [anon_sym_if_DASHlt] = ACTIONS(157),
    [anon_sym_if_DASHge] = ACTIONS(157),
    [anon_sym_if_DASHgt] = ACTIONS(157),
    [anon_sym_if_DASHle] = ACTIONS(157),
    [anon_sym_if_DASHeqz] = ACTIONS(155),
    [anon_sym_if_DASHnez] = ACTIONS(155),
    [anon_sym_if_DASHltz] = ACTIONS(155),
    [anon_sym_if_DASHgez] = ACTIONS(155),
    [anon_sym_if_DASHgtz] = ACTIONS(155),
    [anon_sym_if_DASHlez] = ACTIONS(155),
    [anon_sym_aget] = ACTIONS(157),
    [anon_sym_aget_DASHwide] = ACTIONS(155),
    [anon_sym_aget_DASHobject] = ACTIONS(155),
    [anon_sym_aget_DASHboolean] = ACTIONS(155),
    [anon_sym_aget_DASHbyte] = ACTIONS(155),
    [anon_sym_aget_DASHchar] = ACTIONS(155),
    [anon_sym_aget_DASHshort] = ACTIONS(155),
    [anon_sym_aput] = ACTIONS(157),
    [anon_sym_aput_DASHwide] = ACTIONS(155),
    [anon_sym_aput_DASHobject] = ACTIONS(155),
    [anon_sym_aput_DASHboolean] = ACTIONS(155),
    [anon_sym_aput_DASHbyte] = ACTIONS(155),
    [anon_sym_aput_DASHchar] = ACTIONS(155),
    [anon_sym_aput_DASHshort] = ACTIONS(155),
    [anon_sym_iget] = ACTIONS(157),
    [anon_sym_iget_DASHwide] = ACTIONS(157),
    [anon_sym_iget_DASHobject] = ACTIONS(157),
    [anon_sym_iget_DASHboolean] = ACTIONS(155),
    [anon_sym_iget_DASHbyte] = ACTIONS(155),
    [anon_sym_iget_DASHchar] = ACTIONS(155),
    [anon_sym_iget_DASHshort] = ACTIONS(155),
    [anon_sym_iput] = ACTIONS(157),
    [anon_sym_iput_DASHwide] = ACTIONS(157),
    [anon_sym_iput_DASHobject] = ACTIONS(157),
    [anon_sym_iput_DASHboolean] = ACTIONS(155),
    [anon_sym_iput_DASHbyte] = ACTIONS(155),
    [anon_sym_iput_DASHchar] = ACTIONS(155),
    [anon_sym_iput_DASHshort] = ACTIONS(155),
    [anon_sym_sget] = ACTIONS(157),
    [anon_sym_sget_DASHwide] = ACTIONS(155),
    [anon_sym_sget_DASHobject] = ACTIONS(155),
    [anon_sym_sget_DASHboolean] = ACTIONS(155),
    [anon_sym_sget_DASHbyte] = ACTIONS(155),
    [anon_sym_sget_DASHchar] = ACTIONS(155),
    [anon_sym_sget_DASHshort] = ACTIONS(155),
    [anon_sym_sput] = ACTIONS(157),
    [anon_sym_sput_DASHwide] = ACTIONS(155),
    [anon_sym_sput_DASHobject] = ACTIONS(155),
    [anon_sym_sput_DASHboolean] = ACTIONS(155),
    [anon_sym_sput_DASHbyte] = ACTIONS(155),
    [anon_sym_sput_DASHchar] = ACTIONS(155),
    [anon_sym_sput_DASHshort] = ACTIONS(155),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(157),
    [anon_sym_invoke_DASHsuper] = ACTIONS(157),
    [anon_sym_invoke_DASHdirect] = ACTIONS(157),
    [anon_sym_invoke_DASHstatic] = ACTIONS(157),
    [anon_sym_invoke_DASHinterface] = ACTIONS(157),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(155),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(155),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(155),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(155),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(155),
    [anon_sym_neg_DASHint] = ACTIONS(155),
    [anon_sym_not_DASHint] = ACTIONS(155),
    [anon_sym_neg_DASHlong] = ACTIONS(155),
    [anon_sym_not_DASHlong] = ACTIONS(155),
    [anon_sym_neg_DASHfloat] = ACTIONS(155),
    [anon_sym_neg_DASHdouble] = ACTIONS(155),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(155),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(155),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(155),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(155),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(155),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(155),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(155),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(155),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(155),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(155),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(155),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(155),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(155),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(155),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(155),
    [anon_sym_add_DASHint] = ACTIONS(157),
    [anon_sym_sub_DASHint] = ACTIONS(157),
    [anon_sym_mul_DASHint] = ACTIONS(157),
    [anon_sym_div_DASHint] = ACTIONS(157),
    [anon_sym_rem_DASHint] = ACTIONS(157),
    [anon_sym_and_DASHint] = ACTIONS(157),
    [anon_sym_or_DASHint] = ACTIONS(157),
    [anon_sym_xor_DASHint] = ACTIONS(157),
    [anon_sym_shl_DASHint] = ACTIONS(157),
    [anon_sym_shr_DASHint] = ACTIONS(157),
    [anon_sym_ushr_DASHint] = ACTIONS(157),
    [anon_sym_add_DASHlong] = ACTIONS(157),
    [anon_sym_sub_DASHlong] = ACTIONS(157),
    [anon_sym_mul_DASHlong] = ACTIONS(157),
    [anon_sym_div_DASHlong] = ACTIONS(157),
    [anon_sym_rem_DASHlong] = ACTIONS(157),
    [anon_sym_and_DASHlong] = ACTIONS(157),
    [anon_sym_or_DASHlong] = ACTIONS(157),
    [anon_sym_xor_DASHlong] = ACTIONS(157),
    [anon_sym_shl_DASHlong] = ACTIONS(157),
    [anon_sym_shr_DASHlong] = ACTIONS(157),
    [anon_sym_ushr_DASHlong] = ACTIONS(157),
    [anon_sym_add_DASHfloat] = ACTIONS(157),
    [anon_sym_sub_DASHfloat] = ACTIONS(157),
    [anon_sym_mul_DASHfloat] = ACTIONS(157),
    [anon_sym_div_DASHfloat] = ACTIONS(157),
    [anon_sym_rem_DASHfloat] = ACTIONS(157),
    [anon_sym_add_DASHdouble] = ACTIONS(157),
    [anon_sym_sub_DASHdouble] = ACTIONS(157),
    [anon_sym_mul_DASHdouble] = ACTIONS(157),
    [anon_sym_div_DASHdouble] = ACTIONS(157),
    [anon_sym_rem_DASHdouble] = ACTIONS(157),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(155),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(155),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(155),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(155),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(155),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(155),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(155),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(155),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(155),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(155),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(155),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(155),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(155),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_execute_DASHinline] = ACTIONS(155),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(155),
    [anon_sym_iget_DASHquick] = ACTIONS(155),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(155),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(155),
    [anon_sym_iput_DASHquick] = ACTIONS(155),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(155),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(155),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(157),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(155),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(157),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(155),
    [anon_sym_rsub_DASHint] = ACTIONS(157),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(155),
    [anon_sym_DOTline] = ACTIONS(155),
    [anon_sym_DOTlocals] = ACTIONS(155),
    [anon_sym_DOTcatch] = ACTIONS(157),
    [anon_sym_DOTcatchall] = ACTIONS(155),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(155),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(155),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_end_method] = ACTIONS(159),
    [anon_sym_DOTannotation] = ACTIONS(159),
    [anon_sym_DOTparam] = ACTIONS(159),
    [sym_label] = ACTIONS(159),
    [anon_sym_nop] = ACTIONS(159),
    [anon_sym_move] = ACTIONS(161),
    [anon_sym_move_SLASHfrom16] = ACTIONS(159),
    [anon_sym_move_SLASH16] = ACTIONS(159),
    [anon_sym_move_DASHwide] = ACTIONS(161),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(159),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(159),
    [anon_sym_move_DASHobject] = ACTIONS(161),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(159),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(159),
    [anon_sym_move_DASHresult] = ACTIONS(161),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(159),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(159),
    [anon_sym_move_DASHexception] = ACTIONS(159),
    [anon_sym_return_DASHvoid] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(161),
    [anon_sym_return_DASHwide] = ACTIONS(159),
    [anon_sym_return_DASHobject] = ACTIONS(159),
    [anon_sym_const_SLASH4] = ACTIONS(159),
    [anon_sym_const_SLASH16] = ACTIONS(159),
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_const_SLASHhigh16] = ACTIONS(159),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(159),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(159),
    [anon_sym_const_DASHwide] = ACTIONS(161),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(159),
    [anon_sym_const_DASHstring] = ACTIONS(161),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(159),
    [anon_sym_const_DASHclass] = ACTIONS(159),
    [anon_sym_monitor_DASHenter] = ACTIONS(159),
    [anon_sym_monitor_DASHexit] = ACTIONS(159),
    [anon_sym_check_DASHcast] = ACTIONS(159),
    [anon_sym_instance_DASHof] = ACTIONS(159),
    [anon_sym_array_DASHlength] = ACTIONS(159),
    [anon_sym_new_DASHinstance] = ACTIONS(159),
    [anon_sym_new_DASHarray] = ACTIONS(159),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(161),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(159),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(159),
    [anon_sym_throw] = ACTIONS(159),
    [anon_sym_goto] = ACTIONS(161),
    [anon_sym_goto_SLASH16] = ACTIONS(159),
    [anon_sym_goto_SLASH32] = ACTIONS(159),
    [anon_sym_packed_DASHswitch] = ACTIONS(159),
    [anon_sym_sparse_DASHswitch] = ACTIONS(159),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(159),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(159),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(159),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(159),
    [anon_sym_cmp_DASHlong] = ACTIONS(159),
    [anon_sym_if_DASHeq] = ACTIONS(161),
    [anon_sym_if_DASHne] = ACTIONS(161),
    [anon_sym_if_DASHlt] = ACTIONS(161),
    [anon_sym_if_DASHge] = ACTIONS(161),
    [anon_sym_if_DASHgt] = ACTIONS(161),
    [anon_sym_if_DASHle] = ACTIONS(161),
    [anon_sym_if_DASHeqz] = ACTIONS(159),
    [anon_sym_if_DASHnez] = ACTIONS(159),
    [anon_sym_if_DASHltz] = ACTIONS(159),
    [anon_sym_if_DASHgez] = ACTIONS(159),
    [anon_sym_if_DASHgtz] = ACTIONS(159),
    [anon_sym_if_DASHlez] = ACTIONS(159),
    [anon_sym_aget] = ACTIONS(161),
    [anon_sym_aget_DASHwide] = ACTIONS(159),
    [anon_sym_aget_DASHobject] = ACTIONS(159),
    [anon_sym_aget_DASHboolean] = ACTIONS(159),
    [anon_sym_aget_DASHbyte] = ACTIONS(159),
    [anon_sym_aget_DASHchar] = ACTIONS(159),
    [anon_sym_aget_DASHshort] = ACTIONS(159),
    [anon_sym_aput] = ACTIONS(161),
    [anon_sym_aput_DASHwide] = ACTIONS(159),
    [anon_sym_aput_DASHobject] = ACTIONS(159),
    [anon_sym_aput_DASHboolean] = ACTIONS(159),
    [anon_sym_aput_DASHbyte] = ACTIONS(159),
    [anon_sym_aput_DASHchar] = ACTIONS(159),
    [anon_sym_aput_DASHshort] = ACTIONS(159),
    [anon_sym_iget] = ACTIONS(161),
    [anon_sym_iget_DASHwide] = ACTIONS(161),
    [anon_sym_iget_DASHobject] = ACTIONS(161),
    [anon_sym_iget_DASHboolean] = ACTIONS(159),
    [anon_sym_iget_DASHbyte] = ACTIONS(159),
    [anon_sym_iget_DASHchar] = ACTIONS(159),
    [anon_sym_iget_DASHshort] = ACTIONS(159),
    [anon_sym_iput] = ACTIONS(161),
    [anon_sym_iput_DASHwide] = ACTIONS(161),
    [anon_sym_iput_DASHobject] = ACTIONS(161),
    [anon_sym_iput_DASHboolean] = ACTIONS(159),
    [anon_sym_iput_DASHbyte] = ACTIONS(159),
    [anon_sym_iput_DASHchar] = ACTIONS(159),
    [anon_sym_iput_DASHshort] = ACTIONS(159),
    [anon_sym_sget] = ACTIONS(161),
    [anon_sym_sget_DASHwide] = ACTIONS(159),
    [anon_sym_sget_DASHobject] = ACTIONS(159),
    [anon_sym_sget_DASHboolean] = ACTIONS(159),
    [anon_sym_sget_DASHbyte] = ACTIONS(159),
    [anon_sym_sget_DASHchar] = ACTIONS(159),
    [anon_sym_sget_DASHshort] = ACTIONS(159),
    [anon_sym_sput] = ACTIONS(161),
    [anon_sym_sput_DASHwide] = ACTIONS(159),
    [anon_sym_sput_DASHobject] = ACTIONS(159),
    [anon_sym_sput_DASHboolean] = ACTIONS(159),
    [anon_sym_sput_DASHbyte] = ACTIONS(159),
    [anon_sym_sput_DASHchar] = ACTIONS(159),
    [anon_sym_sput_DASHshort] = ACTIONS(159),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(161),
    [anon_sym_invoke_DASHsuper] = ACTIONS(161),
    [anon_sym_invoke_DASHdirect] = ACTIONS(161),
    [anon_sym_invoke_DASHstatic] = ACTIONS(161),
    [anon_sym_invoke_DASHinterface] = ACTIONS(161),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(159),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(159),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(159),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(159),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(159),
    [anon_sym_neg_DASHint] = ACTIONS(159),
    [anon_sym_not_DASHint] = ACTIONS(159),
    [anon_sym_neg_DASHlong] = ACTIONS(159),
    [anon_sym_not_DASHlong] = ACTIONS(159),
    [anon_sym_neg_DASHfloat] = ACTIONS(159),
    [anon_sym_neg_DASHdouble] = ACTIONS(159),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(159),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(159),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(159),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(159),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(159),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(159),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(159),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(159),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(159),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(159),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(159),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(159),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(159),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(159),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(159),
    [anon_sym_add_DASHint] = ACTIONS(161),
    [anon_sym_sub_DASHint] = ACTIONS(161),
    [anon_sym_mul_DASHint] = ACTIONS(161),
    [anon_sym_div_DASHint] = ACTIONS(161),
    [anon_sym_rem_DASHint] = ACTIONS(161),
    [anon_sym_and_DASHint] = ACTIONS(161),
    [anon_sym_or_DASHint] = ACTIONS(161),
    [anon_sym_xor_DASHint] = ACTIONS(161),
    [anon_sym_shl_DASHint] = ACTIONS(161),
    [anon_sym_shr_DASHint] = ACTIONS(161),
    [anon_sym_ushr_DASHint] = ACTIONS(161),
    [anon_sym_add_DASHlong] = ACTIONS(161),
    [anon_sym_sub_DASHlong] = ACTIONS(161),
    [anon_sym_mul_DASHlong] = ACTIONS(161),
    [anon_sym_div_DASHlong] = ACTIONS(161),
    [anon_sym_rem_DASHlong] = ACTIONS(161),
    [anon_sym_and_DASHlong] = ACTIONS(161),
    [anon_sym_or_DASHlong] = ACTIONS(161),
    [anon_sym_xor_DASHlong] = ACTIONS(161),
    [anon_sym_shl_DASHlong] = ACTIONS(161),
    [anon_sym_shr_DASHlong] = ACTIONS(161),
    [anon_sym_ushr_DASHlong] = ACTIONS(161),
    [anon_sym_add_DASHfloat] = ACTIONS(161),
    [anon_sym_sub_DASHfloat] = ACTIONS(161),
    [anon_sym_mul_DASHfloat] = ACTIONS(161),
    [anon_sym_div_DASHfloat] = ACTIONS(161),
    [anon_sym_rem_DASHfloat] = ACTIONS(161),
    [anon_sym_add_DASHdouble] = ACTIONS(161),
    [anon_sym_sub_DASHdouble] = ACTIONS(161),
    [anon_sym_mul_DASHdouble] = ACTIONS(161),
    [anon_sym_div_DASHdouble] = ACTIONS(161),
    [anon_sym_rem_DASHdouble] = ACTIONS(161),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(159),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(159),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(159),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(159),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(159),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(159),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(159),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(159),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(159),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(159),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(159),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(159),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(159),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_execute_DASHinline] = ACTIONS(159),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(159),
    [anon_sym_iget_DASHquick] = ACTIONS(159),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(159),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(159),
    [anon_sym_iput_DASHquick] = ACTIONS(159),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(159),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(159),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(161),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(159),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(161),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(159),
    [anon_sym_rsub_DASHint] = ACTIONS(161),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(159),
    [anon_sym_DOTline] = ACTIONS(159),
    [anon_sym_DOTlocals] = ACTIONS(159),
    [anon_sym_DOTcatch] = ACTIONS(161),
    [anon_sym_DOTcatchall] = ACTIONS(159),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(159),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(159),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_end_method] = ACTIONS(163),
    [anon_sym_DOTannotation] = ACTIONS(163),
    [anon_sym_DOTparam] = ACTIONS(163),
    [sym_label] = ACTIONS(163),
    [anon_sym_nop] = ACTIONS(163),
    [anon_sym_move] = ACTIONS(165),
    [anon_sym_move_SLASHfrom16] = ACTIONS(163),
    [anon_sym_move_SLASH16] = ACTIONS(163),
    [anon_sym_move_DASHwide] = ACTIONS(165),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(163),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(163),
    [anon_sym_move_DASHobject] = ACTIONS(165),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(163),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(163),
    [anon_sym_move_DASHresult] = ACTIONS(165),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(163),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(163),
    [anon_sym_move_DASHexception] = ACTIONS(163),
    [anon_sym_return_DASHvoid] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_return_DASHwide] = ACTIONS(163),
    [anon_sym_return_DASHobject] = ACTIONS(163),
    [anon_sym_const_SLASH4] = ACTIONS(163),
    [anon_sym_const_SLASH16] = ACTIONS(163),
    [anon_sym_const] = ACTIONS(165),
    [anon_sym_const_SLASHhigh16] = ACTIONS(163),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(163),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(163),
    [anon_sym_const_DASHwide] = ACTIONS(165),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(163),
    [anon_sym_const_DASHstring] = ACTIONS(165),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(163),
    [anon_sym_const_DASHclass] = ACTIONS(163),
    [anon_sym_monitor_DASHenter] = ACTIONS(163),
    [anon_sym_monitor_DASHexit] = ACTIONS(163),
    [anon_sym_check_DASHcast] = ACTIONS(163),
    [anon_sym_instance_DASHof] = ACTIONS(163),
    [anon_sym_array_DASHlength] = ACTIONS(163),
    [anon_sym_new_DASHinstance] = ACTIONS(163),
    [anon_sym_new_DASHarray] = ACTIONS(163),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(165),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(163),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(163),
    [anon_sym_throw] = ACTIONS(163),
    [anon_sym_goto] = ACTIONS(165),
    [anon_sym_goto_SLASH16] = ACTIONS(163),
    [anon_sym_goto_SLASH32] = ACTIONS(163),
    [anon_sym_packed_DASHswitch] = ACTIONS(163),
    [anon_sym_sparse_DASHswitch] = ACTIONS(163),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(163),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(163),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(163),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(163),
    [anon_sym_cmp_DASHlong] = ACTIONS(163),
    [anon_sym_if_DASHeq] = ACTIONS(165),
    [anon_sym_if_DASHne] = ACTIONS(165),
    [anon_sym_if_DASHlt] = ACTIONS(165),
    [anon_sym_if_DASHge] = ACTIONS(165),
    [anon_sym_if_DASHgt] = ACTIONS(165),
    [anon_sym_if_DASHle] = ACTIONS(165),
    [anon_sym_if_DASHeqz] = ACTIONS(163),
    [anon_sym_if_DASHnez] = ACTIONS(163),
    [anon_sym_if_DASHltz] = ACTIONS(163),
    [anon_sym_if_DASHgez] = ACTIONS(163),
    [anon_sym_if_DASHgtz] = ACTIONS(163),
    [anon_sym_if_DASHlez] = ACTIONS(163),
    [anon_sym_aget] = ACTIONS(165),
    [anon_sym_aget_DASHwide] = ACTIONS(163),
    [anon_sym_aget_DASHobject] = ACTIONS(163),
    [anon_sym_aget_DASHboolean] = ACTIONS(163),
    [anon_sym_aget_DASHbyte] = ACTIONS(163),
    [anon_sym_aget_DASHchar] = ACTIONS(163),
    [anon_sym_aget_DASHshort] = ACTIONS(163),
    [anon_sym_aput] = ACTIONS(165),
    [anon_sym_aput_DASHwide] = ACTIONS(163),
    [anon_sym_aput_DASHobject] = ACTIONS(163),
    [anon_sym_aput_DASHboolean] = ACTIONS(163),
    [anon_sym_aput_DASHbyte] = ACTIONS(163),
    [anon_sym_aput_DASHchar] = ACTIONS(163),
    [anon_sym_aput_DASHshort] = ACTIONS(163),
    [anon_sym_iget] = ACTIONS(165),
    [anon_sym_iget_DASHwide] = ACTIONS(165),
    [anon_sym_iget_DASHobject] = ACTIONS(165),
    [anon_sym_iget_DASHboolean] = ACTIONS(163),
    [anon_sym_iget_DASHbyte] = ACTIONS(163),
    [anon_sym_iget_DASHchar] = ACTIONS(163),
    [anon_sym_iget_DASHshort] = ACTIONS(163),
    [anon_sym_iput] = ACTIONS(165),
    [anon_sym_iput_DASHwide] = ACTIONS(165),
    [anon_sym_iput_DASHobject] = ACTIONS(165),
    [anon_sym_iput_DASHboolean] = ACTIONS(163),
    [anon_sym_iput_DASHbyte] = ACTIONS(163),
    [anon_sym_iput_DASHchar] = ACTIONS(163),
    [anon_sym_iput_DASHshort] = ACTIONS(163),
    [anon_sym_sget] = ACTIONS(165),
    [anon_sym_sget_DASHwide] = ACTIONS(163),
    [anon_sym_sget_DASHobject] = ACTIONS(163),
    [anon_sym_sget_DASHboolean] = ACTIONS(163),
    [anon_sym_sget_DASHbyte] = ACTIONS(163),
    [anon_sym_sget_DASHchar] = ACTIONS(163),
    [anon_sym_sget_DASHshort] = ACTIONS(163),
    [anon_sym_sput] = ACTIONS(165),
    [anon_sym_sput_DASHwide] = ACTIONS(163),
    [anon_sym_sput_DASHobject] = ACTIONS(163),
    [anon_sym_sput_DASHboolean] = ACTIONS(163),
    [anon_sym_sput_DASHbyte] = ACTIONS(163),
    [anon_sym_sput_DASHchar] = ACTIONS(163),
    [anon_sym_sput_DASHshort] = ACTIONS(163),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(165),
    [anon_sym_invoke_DASHsuper] = ACTIONS(165),
    [anon_sym_invoke_DASHdirect] = ACTIONS(165),
    [anon_sym_invoke_DASHstatic] = ACTIONS(165),
    [anon_sym_invoke_DASHinterface] = ACTIONS(165),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(163),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(163),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(163),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(163),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(163),
    [anon_sym_neg_DASHint] = ACTIONS(163),
    [anon_sym_not_DASHint] = ACTIONS(163),
    [anon_sym_neg_DASHlong] = ACTIONS(163),
    [anon_sym_not_DASHlong] = ACTIONS(163),
    [anon_sym_neg_DASHfloat] = ACTIONS(163),
    [anon_sym_neg_DASHdouble] = ACTIONS(163),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(163),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(163),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(163),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(163),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(163),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(163),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(163),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(163),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(163),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(163),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(163),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(163),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(163),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(163),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(163),
    [anon_sym_add_DASHint] = ACTIONS(165),
    [anon_sym_sub_DASHint] = ACTIONS(165),
    [anon_sym_mul_DASHint] = ACTIONS(165),
    [anon_sym_div_DASHint] = ACTIONS(165),
    [anon_sym_rem_DASHint] = ACTIONS(165),
    [anon_sym_and_DASHint] = ACTIONS(165),
    [anon_sym_or_DASHint] = ACTIONS(165),
    [anon_sym_xor_DASHint] = ACTIONS(165),
    [anon_sym_shl_DASHint] = ACTIONS(165),
    [anon_sym_shr_DASHint] = ACTIONS(165),
    [anon_sym_ushr_DASHint] = ACTIONS(165),
    [anon_sym_add_DASHlong] = ACTIONS(165),
    [anon_sym_sub_DASHlong] = ACTIONS(165),
    [anon_sym_mul_DASHlong] = ACTIONS(165),
    [anon_sym_div_DASHlong] = ACTIONS(165),
    [anon_sym_rem_DASHlong] = ACTIONS(165),
    [anon_sym_and_DASHlong] = ACTIONS(165),
    [anon_sym_or_DASHlong] = ACTIONS(165),
    [anon_sym_xor_DASHlong] = ACTIONS(165),
    [anon_sym_shl_DASHlong] = ACTIONS(165),
    [anon_sym_shr_DASHlong] = ACTIONS(165),
    [anon_sym_ushr_DASHlong] = ACTIONS(165),
    [anon_sym_add_DASHfloat] = ACTIONS(165),
    [anon_sym_sub_DASHfloat] = ACTIONS(165),
    [anon_sym_mul_DASHfloat] = ACTIONS(165),
    [anon_sym_div_DASHfloat] = ACTIONS(165),
    [anon_sym_rem_DASHfloat] = ACTIONS(165),
    [anon_sym_add_DASHdouble] = ACTIONS(165),
    [anon_sym_sub_DASHdouble] = ACTIONS(165),
    [anon_sym_mul_DASHdouble] = ACTIONS(165),
    [anon_sym_div_DASHdouble] = ACTIONS(165),
    [anon_sym_rem_DASHdouble] = ACTIONS(165),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(163),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(163),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(163),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(163),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(163),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(163),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(163),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(163),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(163),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(163),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(163),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(163),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(163),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_execute_DASHinline] = ACTIONS(163),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(163),
    [anon_sym_iget_DASHquick] = ACTIONS(163),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(163),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(163),
    [anon_sym_iput_DASHquick] = ACTIONS(163),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(163),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(163),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(165),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(163),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(165),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(163),
    [anon_sym_rsub_DASHint] = ACTIONS(165),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(163),
    [anon_sym_DOTline] = ACTIONS(163),
    [anon_sym_DOTlocals] = ACTIONS(163),
    [anon_sym_DOTcatch] = ACTIONS(165),
    [anon_sym_DOTcatchall] = ACTIONS(163),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(163),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(163),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_end_method] = ACTIONS(167),
    [anon_sym_DOTannotation] = ACTIONS(167),
    [anon_sym_DOTparam] = ACTIONS(167),
    [sym_label] = ACTIONS(167),
    [anon_sym_nop] = ACTIONS(167),
    [anon_sym_move] = ACTIONS(169),
    [anon_sym_move_SLASHfrom16] = ACTIONS(167),
    [anon_sym_move_SLASH16] = ACTIONS(167),
    [anon_sym_move_DASHwide] = ACTIONS(169),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(167),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(167),
    [anon_sym_move_DASHobject] = ACTIONS(169),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(167),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(167),
    [anon_sym_move_DASHresult] = ACTIONS(169),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(167),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(167),
    [anon_sym_move_DASHexception] = ACTIONS(167),
    [anon_sym_return_DASHvoid] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(169),
    [anon_sym_return_DASHwide] = ACTIONS(167),
    [anon_sym_return_DASHobject] = ACTIONS(167),
    [anon_sym_const_SLASH4] = ACTIONS(167),
    [anon_sym_const_SLASH16] = ACTIONS(167),
    [anon_sym_const] = ACTIONS(169),
    [anon_sym_const_SLASHhigh16] = ACTIONS(167),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(167),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(167),
    [anon_sym_const_DASHwide] = ACTIONS(169),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(167),
    [anon_sym_const_DASHstring] = ACTIONS(169),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(167),
    [anon_sym_const_DASHclass] = ACTIONS(167),
    [anon_sym_monitor_DASHenter] = ACTIONS(167),
    [anon_sym_monitor_DASHexit] = ACTIONS(167),
    [anon_sym_check_DASHcast] = ACTIONS(167),
    [anon_sym_instance_DASHof] = ACTIONS(167),
    [anon_sym_array_DASHlength] = ACTIONS(167),
    [anon_sym_new_DASHinstance] = ACTIONS(167),
    [anon_sym_new_DASHarray] = ACTIONS(167),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(169),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(167),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(167),
    [anon_sym_throw] = ACTIONS(167),
    [anon_sym_goto] = ACTIONS(169),
    [anon_sym_goto_SLASH16] = ACTIONS(167),
    [anon_sym_goto_SLASH32] = ACTIONS(167),
    [anon_sym_packed_DASHswitch] = ACTIONS(167),
    [anon_sym_sparse_DASHswitch] = ACTIONS(167),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(167),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(167),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(167),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(167),
    [anon_sym_cmp_DASHlong] = ACTIONS(167),
    [anon_sym_if_DASHeq] = ACTIONS(169),
    [anon_sym_if_DASHne] = ACTIONS(169),
    [anon_sym_if_DASHlt] = ACTIONS(169),
    [anon_sym_if_DASHge] = ACTIONS(169),
    [anon_sym_if_DASHgt] = ACTIONS(169),
    [anon_sym_if_DASHle] = ACTIONS(169),
    [anon_sym_if_DASHeqz] = ACTIONS(167),
    [anon_sym_if_DASHnez] = ACTIONS(167),
    [anon_sym_if_DASHltz] = ACTIONS(167),
    [anon_sym_if_DASHgez] = ACTIONS(167),
    [anon_sym_if_DASHgtz] = ACTIONS(167),
    [anon_sym_if_DASHlez] = ACTIONS(167),
    [anon_sym_aget] = ACTIONS(169),
    [anon_sym_aget_DASHwide] = ACTIONS(167),
    [anon_sym_aget_DASHobject] = ACTIONS(167),
    [anon_sym_aget_DASHboolean] = ACTIONS(167),
    [anon_sym_aget_DASHbyte] = ACTIONS(167),
    [anon_sym_aget_DASHchar] = ACTIONS(167),
    [anon_sym_aget_DASHshort] = ACTIONS(167),
    [anon_sym_aput] = ACTIONS(169),
    [anon_sym_aput_DASHwide] = ACTIONS(167),
    [anon_sym_aput_DASHobject] = ACTIONS(167),
    [anon_sym_aput_DASHboolean] = ACTIONS(167),
    [anon_sym_aput_DASHbyte] = ACTIONS(167),
    [anon_sym_aput_DASHchar] = ACTIONS(167),
    [anon_sym_aput_DASHshort] = ACTIONS(167),
    [anon_sym_iget] = ACTIONS(169),
    [anon_sym_iget_DASHwide] = ACTIONS(169),
    [anon_sym_iget_DASHobject] = ACTIONS(169),
    [anon_sym_iget_DASHboolean] = ACTIONS(167),
    [anon_sym_iget_DASHbyte] = ACTIONS(167),
    [anon_sym_iget_DASHchar] = ACTIONS(167),
    [anon_sym_iget_DASHshort] = ACTIONS(167),
    [anon_sym_iput] = ACTIONS(169),
    [anon_sym_iput_DASHwide] = ACTIONS(169),
    [anon_sym_iput_DASHobject] = ACTIONS(169),
    [anon_sym_iput_DASHboolean] = ACTIONS(167),
    [anon_sym_iput_DASHbyte] = ACTIONS(167),
    [anon_sym_iput_DASHchar] = ACTIONS(167),
    [anon_sym_iput_DASHshort] = ACTIONS(167),
    [anon_sym_sget] = ACTIONS(169),
    [anon_sym_sget_DASHwide] = ACTIONS(167),
    [anon_sym_sget_DASHobject] = ACTIONS(167),
    [anon_sym_sget_DASHboolean] = ACTIONS(167),
    [anon_sym_sget_DASHbyte] = ACTIONS(167),
    [anon_sym_sget_DASHchar] = ACTIONS(167),
    [anon_sym_sget_DASHshort] = ACTIONS(167),
    [anon_sym_sput] = ACTIONS(169),
    [anon_sym_sput_DASHwide] = ACTIONS(167),
    [anon_sym_sput_DASHobject] = ACTIONS(167),
    [anon_sym_sput_DASHboolean] = ACTIONS(167),
    [anon_sym_sput_DASHbyte] = ACTIONS(167),
    [anon_sym_sput_DASHchar] = ACTIONS(167),
    [anon_sym_sput_DASHshort] = ACTIONS(167),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(169),
    [anon_sym_invoke_DASHsuper] = ACTIONS(169),
    [anon_sym_invoke_DASHdirect] = ACTIONS(169),
    [anon_sym_invoke_DASHstatic] = ACTIONS(169),
    [anon_sym_invoke_DASHinterface] = ACTIONS(169),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(167),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(167),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(167),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(167),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(167),
    [anon_sym_neg_DASHint] = ACTIONS(167),
    [anon_sym_not_DASHint] = ACTIONS(167),
    [anon_sym_neg_DASHlong] = ACTIONS(167),
    [anon_sym_not_DASHlong] = ACTIONS(167),
    [anon_sym_neg_DASHfloat] = ACTIONS(167),
    [anon_sym_neg_DASHdouble] = ACTIONS(167),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(167),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(167),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(167),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(167),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(167),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(167),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(167),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(167),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(167),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(167),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(167),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(167),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(167),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(167),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(167),
    [anon_sym_add_DASHint] = ACTIONS(169),
    [anon_sym_sub_DASHint] = ACTIONS(169),
    [anon_sym_mul_DASHint] = ACTIONS(169),
    [anon_sym_div_DASHint] = ACTIONS(169),
    [anon_sym_rem_DASHint] = ACTIONS(169),
    [anon_sym_and_DASHint] = ACTIONS(169),
    [anon_sym_or_DASHint] = ACTIONS(169),
    [anon_sym_xor_DASHint] = ACTIONS(169),
    [anon_sym_shl_DASHint] = ACTIONS(169),
    [anon_sym_shr_DASHint] = ACTIONS(169),
    [anon_sym_ushr_DASHint] = ACTIONS(169),
    [anon_sym_add_DASHlong] = ACTIONS(169),
    [anon_sym_sub_DASHlong] = ACTIONS(169),
    [anon_sym_mul_DASHlong] = ACTIONS(169),
    [anon_sym_div_DASHlong] = ACTIONS(169),
    [anon_sym_rem_DASHlong] = ACTIONS(169),
    [anon_sym_and_DASHlong] = ACTIONS(169),
    [anon_sym_or_DASHlong] = ACTIONS(169),
    [anon_sym_xor_DASHlong] = ACTIONS(169),
    [anon_sym_shl_DASHlong] = ACTIONS(169),
    [anon_sym_shr_DASHlong] = ACTIONS(169),
    [anon_sym_ushr_DASHlong] = ACTIONS(169),
    [anon_sym_add_DASHfloat] = ACTIONS(169),
    [anon_sym_sub_DASHfloat] = ACTIONS(169),
    [anon_sym_mul_DASHfloat] = ACTIONS(169),
    [anon_sym_div_DASHfloat] = ACTIONS(169),
    [anon_sym_rem_DASHfloat] = ACTIONS(169),
    [anon_sym_add_DASHdouble] = ACTIONS(169),
    [anon_sym_sub_DASHdouble] = ACTIONS(169),
    [anon_sym_mul_DASHdouble] = ACTIONS(169),
    [anon_sym_div_DASHdouble] = ACTIONS(169),
    [anon_sym_rem_DASHdouble] = ACTIONS(169),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(167),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(167),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(167),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(167),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(167),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(167),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(167),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(167),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(167),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(167),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(167),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(167),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(167),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_execute_DASHinline] = ACTIONS(167),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(167),
    [anon_sym_iget_DASHquick] = ACTIONS(167),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(167),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(167),
    [anon_sym_iput_DASHquick] = ACTIONS(167),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(167),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(167),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(169),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(167),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(169),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(167),
    [anon_sym_rsub_DASHint] = ACTIONS(169),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(167),
    [anon_sym_DOTline] = ACTIONS(167),
    [anon_sym_DOTlocals] = ACTIONS(167),
    [anon_sym_DOTcatch] = ACTIONS(169),
    [anon_sym_DOTcatchall] = ACTIONS(167),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(167),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(167),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_end_method] = ACTIONS(171),
    [anon_sym_DOTannotation] = ACTIONS(171),
    [anon_sym_DOTparam] = ACTIONS(171),
    [sym_label] = ACTIONS(171),
    [anon_sym_nop] = ACTIONS(171),
    [anon_sym_move] = ACTIONS(173),
    [anon_sym_move_SLASHfrom16] = ACTIONS(171),
    [anon_sym_move_SLASH16] = ACTIONS(171),
    [anon_sym_move_DASHwide] = ACTIONS(173),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(171),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(171),
    [anon_sym_move_DASHobject] = ACTIONS(173),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(171),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(171),
    [anon_sym_move_DASHresult] = ACTIONS(173),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(171),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(171),
    [anon_sym_move_DASHexception] = ACTIONS(171),
    [anon_sym_return_DASHvoid] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(173),
    [anon_sym_return_DASHwide] = ACTIONS(171),
    [anon_sym_return_DASHobject] = ACTIONS(171),
    [anon_sym_const_SLASH4] = ACTIONS(171),
    [anon_sym_const_SLASH16] = ACTIONS(171),
    [anon_sym_const] = ACTIONS(173),
    [anon_sym_const_SLASHhigh16] = ACTIONS(171),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(171),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(171),
    [anon_sym_const_DASHwide] = ACTIONS(173),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(171),
    [anon_sym_const_DASHstring] = ACTIONS(173),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(171),
    [anon_sym_const_DASHclass] = ACTIONS(171),
    [anon_sym_monitor_DASHenter] = ACTIONS(171),
    [anon_sym_monitor_DASHexit] = ACTIONS(171),
    [anon_sym_check_DASHcast] = ACTIONS(171),
    [anon_sym_instance_DASHof] = ACTIONS(171),
    [anon_sym_array_DASHlength] = ACTIONS(171),
    [anon_sym_new_DASHinstance] = ACTIONS(171),
    [anon_sym_new_DASHarray] = ACTIONS(171),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(173),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(171),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(171),
    [anon_sym_throw] = ACTIONS(171),
    [anon_sym_goto] = ACTIONS(173),
    [anon_sym_goto_SLASH16] = ACTIONS(171),
    [anon_sym_goto_SLASH32] = ACTIONS(171),
    [anon_sym_packed_DASHswitch] = ACTIONS(171),
    [anon_sym_sparse_DASHswitch] = ACTIONS(171),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(171),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(171),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(171),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(171),
    [anon_sym_cmp_DASHlong] = ACTIONS(171),
    [anon_sym_if_DASHeq] = ACTIONS(173),
    [anon_sym_if_DASHne] = ACTIONS(173),
    [anon_sym_if_DASHlt] = ACTIONS(173),
    [anon_sym_if_DASHge] = ACTIONS(173),
    [anon_sym_if_DASHgt] = ACTIONS(173),
    [anon_sym_if_DASHle] = ACTIONS(173),
    [anon_sym_if_DASHeqz] = ACTIONS(171),
    [anon_sym_if_DASHnez] = ACTIONS(171),
    [anon_sym_if_DASHltz] = ACTIONS(171),
    [anon_sym_if_DASHgez] = ACTIONS(171),
    [anon_sym_if_DASHgtz] = ACTIONS(171),
    [anon_sym_if_DASHlez] = ACTIONS(171),
    [anon_sym_aget] = ACTIONS(173),
    [anon_sym_aget_DASHwide] = ACTIONS(171),
    [anon_sym_aget_DASHobject] = ACTIONS(171),
    [anon_sym_aget_DASHboolean] = ACTIONS(171),
    [anon_sym_aget_DASHbyte] = ACTIONS(171),
    [anon_sym_aget_DASHchar] = ACTIONS(171),
    [anon_sym_aget_DASHshort] = ACTIONS(171),
    [anon_sym_aput] = ACTIONS(173),
    [anon_sym_aput_DASHwide] = ACTIONS(171),
    [anon_sym_aput_DASHobject] = ACTIONS(171),
    [anon_sym_aput_DASHboolean] = ACTIONS(171),
    [anon_sym_aput_DASHbyte] = ACTIONS(171),
    [anon_sym_aput_DASHchar] = ACTIONS(171),
    [anon_sym_aput_DASHshort] = ACTIONS(171),
    [anon_sym_iget] = ACTIONS(173),
    [anon_sym_iget_DASHwide] = ACTIONS(173),
    [anon_sym_iget_DASHobject] = ACTIONS(173),
    [anon_sym_iget_DASHboolean] = ACTIONS(171),
    [anon_sym_iget_DASHbyte] = ACTIONS(171),
    [anon_sym_iget_DASHchar] = ACTIONS(171),
    [anon_sym_iget_DASHshort] = ACTIONS(171),
    [anon_sym_iput] = ACTIONS(173),
    [anon_sym_iput_DASHwide] = ACTIONS(173),
    [anon_sym_iput_DASHobject] = ACTIONS(173),
    [anon_sym_iput_DASHboolean] = ACTIONS(171),
    [anon_sym_iput_DASHbyte] = ACTIONS(171),
    [anon_sym_iput_DASHchar] = ACTIONS(171),
    [anon_sym_iput_DASHshort] = ACTIONS(171),
    [anon_sym_sget] = ACTIONS(173),
    [anon_sym_sget_DASHwide] = ACTIONS(171),
    [anon_sym_sget_DASHobject] = ACTIONS(171),
    [anon_sym_sget_DASHboolean] = ACTIONS(171),
    [anon_sym_sget_DASHbyte] = ACTIONS(171),
    [anon_sym_sget_DASHchar] = ACTIONS(171),
    [anon_sym_sget_DASHshort] = ACTIONS(171),
    [anon_sym_sput] = ACTIONS(173),
    [anon_sym_sput_DASHwide] = ACTIONS(171),
    [anon_sym_sput_DASHobject] = ACTIONS(171),
    [anon_sym_sput_DASHboolean] = ACTIONS(171),
    [anon_sym_sput_DASHbyte] = ACTIONS(171),
    [anon_sym_sput_DASHchar] = ACTIONS(171),
    [anon_sym_sput_DASHshort] = ACTIONS(171),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(173),
    [anon_sym_invoke_DASHsuper] = ACTIONS(173),
    [anon_sym_invoke_DASHdirect] = ACTIONS(173),
    [anon_sym_invoke_DASHstatic] = ACTIONS(173),
    [anon_sym_invoke_DASHinterface] = ACTIONS(173),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(171),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(171),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(171),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(171),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(171),
    [anon_sym_neg_DASHint] = ACTIONS(171),
    [anon_sym_not_DASHint] = ACTIONS(171),
    [anon_sym_neg_DASHlong] = ACTIONS(171),
    [anon_sym_not_DASHlong] = ACTIONS(171),
    [anon_sym_neg_DASHfloat] = ACTIONS(171),
    [anon_sym_neg_DASHdouble] = ACTIONS(171),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(171),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(171),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(171),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(171),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(171),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(171),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(171),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(171),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(171),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(171),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(171),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(171),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(171),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(171),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(171),
    [anon_sym_add_DASHint] = ACTIONS(173),
    [anon_sym_sub_DASHint] = ACTIONS(173),
    [anon_sym_mul_DASHint] = ACTIONS(173),
    [anon_sym_div_DASHint] = ACTIONS(173),
    [anon_sym_rem_DASHint] = ACTIONS(173),
    [anon_sym_and_DASHint] = ACTIONS(173),
    [anon_sym_or_DASHint] = ACTIONS(173),
    [anon_sym_xor_DASHint] = ACTIONS(173),
    [anon_sym_shl_DASHint] = ACTIONS(173),
    [anon_sym_shr_DASHint] = ACTIONS(173),
    [anon_sym_ushr_DASHint] = ACTIONS(173),
    [anon_sym_add_DASHlong] = ACTIONS(173),
    [anon_sym_sub_DASHlong] = ACTIONS(173),
    [anon_sym_mul_DASHlong] = ACTIONS(173),
    [anon_sym_div_DASHlong] = ACTIONS(173),
    [anon_sym_rem_DASHlong] = ACTIONS(173),
    [anon_sym_and_DASHlong] = ACTIONS(173),
    [anon_sym_or_DASHlong] = ACTIONS(173),
    [anon_sym_xor_DASHlong] = ACTIONS(173),
    [anon_sym_shl_DASHlong] = ACTIONS(173),
    [anon_sym_shr_DASHlong] = ACTIONS(173),
    [anon_sym_ushr_DASHlong] = ACTIONS(173),
    [anon_sym_add_DASHfloat] = ACTIONS(173),
    [anon_sym_sub_DASHfloat] = ACTIONS(173),
    [anon_sym_mul_DASHfloat] = ACTIONS(173),
    [anon_sym_div_DASHfloat] = ACTIONS(173),
    [anon_sym_rem_DASHfloat] = ACTIONS(173),
    [anon_sym_add_DASHdouble] = ACTIONS(173),
    [anon_sym_sub_DASHdouble] = ACTIONS(173),
    [anon_sym_mul_DASHdouble] = ACTIONS(173),
    [anon_sym_div_DASHdouble] = ACTIONS(173),
    [anon_sym_rem_DASHdouble] = ACTIONS(173),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(171),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(171),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(171),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(171),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(171),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(171),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(171),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(171),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(171),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(171),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(171),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(171),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(171),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_execute_DASHinline] = ACTIONS(171),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(171),
    [anon_sym_iget_DASHquick] = ACTIONS(171),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(171),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(171),
    [anon_sym_iput_DASHquick] = ACTIONS(171),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(171),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(171),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(173),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(171),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(173),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(171),
    [anon_sym_rsub_DASHint] = ACTIONS(173),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(171),
    [anon_sym_DOTline] = ACTIONS(171),
    [anon_sym_DOTlocals] = ACTIONS(171),
    [anon_sym_DOTcatch] = ACTIONS(173),
    [anon_sym_DOTcatchall] = ACTIONS(171),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(171),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(171),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_end_method] = ACTIONS(175),
    [anon_sym_DOTannotation] = ACTIONS(175),
    [anon_sym_DOTparam] = ACTIONS(175),
    [sym_label] = ACTIONS(175),
    [anon_sym_nop] = ACTIONS(175),
    [anon_sym_move] = ACTIONS(177),
    [anon_sym_move_SLASHfrom16] = ACTIONS(175),
    [anon_sym_move_SLASH16] = ACTIONS(175),
    [anon_sym_move_DASHwide] = ACTIONS(177),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(175),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(175),
    [anon_sym_move_DASHobject] = ACTIONS(177),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(175),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(175),
    [anon_sym_move_DASHresult] = ACTIONS(177),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(175),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(175),
    [anon_sym_move_DASHexception] = ACTIONS(175),
    [anon_sym_return_DASHvoid] = ACTIONS(175),
    [anon_sym_return] = ACTIONS(177),
    [anon_sym_return_DASHwide] = ACTIONS(175),
    [anon_sym_return_DASHobject] = ACTIONS(175),
    [anon_sym_const_SLASH4] = ACTIONS(175),
    [anon_sym_const_SLASH16] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(177),
    [anon_sym_const_SLASHhigh16] = ACTIONS(175),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(175),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(175),
    [anon_sym_const_DASHwide] = ACTIONS(177),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(175),
    [anon_sym_const_DASHstring] = ACTIONS(177),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(175),
    [anon_sym_const_DASHclass] = ACTIONS(175),
    [anon_sym_monitor_DASHenter] = ACTIONS(175),
    [anon_sym_monitor_DASHexit] = ACTIONS(175),
    [anon_sym_check_DASHcast] = ACTIONS(175),
    [anon_sym_instance_DASHof] = ACTIONS(175),
    [anon_sym_array_DASHlength] = ACTIONS(175),
    [anon_sym_new_DASHinstance] = ACTIONS(175),
    [anon_sym_new_DASHarray] = ACTIONS(175),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(177),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(175),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(175),
    [anon_sym_throw] = ACTIONS(175),
    [anon_sym_goto] = ACTIONS(177),
    [anon_sym_goto_SLASH16] = ACTIONS(175),
    [anon_sym_goto_SLASH32] = ACTIONS(175),
    [anon_sym_packed_DASHswitch] = ACTIONS(175),
    [anon_sym_sparse_DASHswitch] = ACTIONS(175),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(175),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(175),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(175),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(175),
    [anon_sym_cmp_DASHlong] = ACTIONS(175),
    [anon_sym_if_DASHeq] = ACTIONS(177),
    [anon_sym_if_DASHne] = ACTIONS(177),
    [anon_sym_if_DASHlt] = ACTIONS(177),
    [anon_sym_if_DASHge] = ACTIONS(177),
    [anon_sym_if_DASHgt] = ACTIONS(177),
    [anon_sym_if_DASHle] = ACTIONS(177),
    [anon_sym_if_DASHeqz] = ACTIONS(175),
    [anon_sym_if_DASHnez] = ACTIONS(175),
    [anon_sym_if_DASHltz] = ACTIONS(175),
    [anon_sym_if_DASHgez] = ACTIONS(175),
    [anon_sym_if_DASHgtz] = ACTIONS(175),
    [anon_sym_if_DASHlez] = ACTIONS(175),
    [anon_sym_aget] = ACTIONS(177),
    [anon_sym_aget_DASHwide] = ACTIONS(175),
    [anon_sym_aget_DASHobject] = ACTIONS(175),
    [anon_sym_aget_DASHboolean] = ACTIONS(175),
    [anon_sym_aget_DASHbyte] = ACTIONS(175),
    [anon_sym_aget_DASHchar] = ACTIONS(175),
    [anon_sym_aget_DASHshort] = ACTIONS(175),
    [anon_sym_aput] = ACTIONS(177),
    [anon_sym_aput_DASHwide] = ACTIONS(175),
    [anon_sym_aput_DASHobject] = ACTIONS(175),
    [anon_sym_aput_DASHboolean] = ACTIONS(175),
    [anon_sym_aput_DASHbyte] = ACTIONS(175),
    [anon_sym_aput_DASHchar] = ACTIONS(175),
    [anon_sym_aput_DASHshort] = ACTIONS(175),
    [anon_sym_iget] = ACTIONS(177),
    [anon_sym_iget_DASHwide] = ACTIONS(177),
    [anon_sym_iget_DASHobject] = ACTIONS(177),
    [anon_sym_iget_DASHboolean] = ACTIONS(175),
    [anon_sym_iget_DASHbyte] = ACTIONS(175),
    [anon_sym_iget_DASHchar] = ACTIONS(175),
    [anon_sym_iget_DASHshort] = ACTIONS(175),
    [anon_sym_iput] = ACTIONS(177),
    [anon_sym_iput_DASHwide] = ACTIONS(177),
    [anon_sym_iput_DASHobject] = ACTIONS(177),
    [anon_sym_iput_DASHboolean] = ACTIONS(175),
    [anon_sym_iput_DASHbyte] = ACTIONS(175),
    [anon_sym_iput_DASHchar] = ACTIONS(175),
    [anon_sym_iput_DASHshort] = ACTIONS(175),
    [anon_sym_sget] = ACTIONS(177),
    [anon_sym_sget_DASHwide] = ACTIONS(175),
    [anon_sym_sget_DASHobject] = ACTIONS(175),
    [anon_sym_sget_DASHboolean] = ACTIONS(175),
    [anon_sym_sget_DASHbyte] = ACTIONS(175),
    [anon_sym_sget_DASHchar] = ACTIONS(175),
    [anon_sym_sget_DASHshort] = ACTIONS(175),
    [anon_sym_sput] = ACTIONS(177),
    [anon_sym_sput_DASHwide] = ACTIONS(175),
    [anon_sym_sput_DASHobject] = ACTIONS(175),
    [anon_sym_sput_DASHboolean] = ACTIONS(175),
    [anon_sym_sput_DASHbyte] = ACTIONS(175),
    [anon_sym_sput_DASHchar] = ACTIONS(175),
    [anon_sym_sput_DASHshort] = ACTIONS(175),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(177),
    [anon_sym_invoke_DASHsuper] = ACTIONS(177),
    [anon_sym_invoke_DASHdirect] = ACTIONS(177),
    [anon_sym_invoke_DASHstatic] = ACTIONS(177),
    [anon_sym_invoke_DASHinterface] = ACTIONS(177),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(175),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(175),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(175),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(175),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(175),
    [anon_sym_neg_DASHint] = ACTIONS(175),
    [anon_sym_not_DASHint] = ACTIONS(175),
    [anon_sym_neg_DASHlong] = ACTIONS(175),
    [anon_sym_not_DASHlong] = ACTIONS(175),
    [anon_sym_neg_DASHfloat] = ACTIONS(175),
    [anon_sym_neg_DASHdouble] = ACTIONS(175),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(175),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(175),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(175),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(175),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(175),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(175),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(175),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(175),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(175),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(175),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(175),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(175),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(175),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(175),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(175),
    [anon_sym_add_DASHint] = ACTIONS(177),
    [anon_sym_sub_DASHint] = ACTIONS(177),
    [anon_sym_mul_DASHint] = ACTIONS(177),
    [anon_sym_div_DASHint] = ACTIONS(177),
    [anon_sym_rem_DASHint] = ACTIONS(177),
    [anon_sym_and_DASHint] = ACTIONS(177),
    [anon_sym_or_DASHint] = ACTIONS(177),
    [anon_sym_xor_DASHint] = ACTIONS(177),
    [anon_sym_shl_DASHint] = ACTIONS(177),
    [anon_sym_shr_DASHint] = ACTIONS(177),
    [anon_sym_ushr_DASHint] = ACTIONS(177),
    [anon_sym_add_DASHlong] = ACTIONS(177),
    [anon_sym_sub_DASHlong] = ACTIONS(177),
    [anon_sym_mul_DASHlong] = ACTIONS(177),
    [anon_sym_div_DASHlong] = ACTIONS(177),
    [anon_sym_rem_DASHlong] = ACTIONS(177),
    [anon_sym_and_DASHlong] = ACTIONS(177),
    [anon_sym_or_DASHlong] = ACTIONS(177),
    [anon_sym_xor_DASHlong] = ACTIONS(177),
    [anon_sym_shl_DASHlong] = ACTIONS(177),
    [anon_sym_shr_DASHlong] = ACTIONS(177),
    [anon_sym_ushr_DASHlong] = ACTIONS(177),
    [anon_sym_add_DASHfloat] = ACTIONS(177),
    [anon_sym_sub_DASHfloat] = ACTIONS(177),
    [anon_sym_mul_DASHfloat] = ACTIONS(177),
    [anon_sym_div_DASHfloat] = ACTIONS(177),
    [anon_sym_rem_DASHfloat] = ACTIONS(177),
    [anon_sym_add_DASHdouble] = ACTIONS(177),
    [anon_sym_sub_DASHdouble] = ACTIONS(177),
    [anon_sym_mul_DASHdouble] = ACTIONS(177),
    [anon_sym_div_DASHdouble] = ACTIONS(177),
    [anon_sym_rem_DASHdouble] = ACTIONS(177),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(175),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(175),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(175),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(175),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(175),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(175),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(175),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(175),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(175),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(175),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(175),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(175),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(175),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_execute_DASHinline] = ACTIONS(175),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(175),
    [anon_sym_iget_DASHquick] = ACTIONS(175),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(175),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(175),
    [anon_sym_iput_DASHquick] = ACTIONS(175),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(175),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(175),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(177),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(175),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(177),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(175),
    [anon_sym_rsub_DASHint] = ACTIONS(177),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(175),
    [anon_sym_DOTline] = ACTIONS(175),
    [anon_sym_DOTlocals] = ACTIONS(175),
    [anon_sym_DOTcatch] = ACTIONS(177),
    [anon_sym_DOTcatchall] = ACTIONS(175),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(175),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(175),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_end_method] = ACTIONS(179),
    [anon_sym_DOTannotation] = ACTIONS(179),
    [anon_sym_DOTparam] = ACTIONS(179),
    [sym_label] = ACTIONS(179),
    [anon_sym_nop] = ACTIONS(179),
    [anon_sym_move] = ACTIONS(181),
    [anon_sym_move_SLASHfrom16] = ACTIONS(179),
    [anon_sym_move_SLASH16] = ACTIONS(179),
    [anon_sym_move_DASHwide] = ACTIONS(181),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(179),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(179),
    [anon_sym_move_DASHobject] = ACTIONS(181),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(179),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(179),
    [anon_sym_move_DASHresult] = ACTIONS(181),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(179),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(179),
    [anon_sym_move_DASHexception] = ACTIONS(179),
    [anon_sym_return_DASHvoid] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(181),
    [anon_sym_return_DASHwide] = ACTIONS(179),
    [anon_sym_return_DASHobject] = ACTIONS(179),
    [anon_sym_const_SLASH4] = ACTIONS(179),
    [anon_sym_const_SLASH16] = ACTIONS(179),
    [anon_sym_const] = ACTIONS(181),
    [anon_sym_const_SLASHhigh16] = ACTIONS(179),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(179),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(179),
    [anon_sym_const_DASHwide] = ACTIONS(181),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(179),
    [anon_sym_const_DASHstring] = ACTIONS(181),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(179),
    [anon_sym_const_DASHclass] = ACTIONS(179),
    [anon_sym_monitor_DASHenter] = ACTIONS(179),
    [anon_sym_monitor_DASHexit] = ACTIONS(179),
    [anon_sym_check_DASHcast] = ACTIONS(179),
    [anon_sym_instance_DASHof] = ACTIONS(179),
    [anon_sym_array_DASHlength] = ACTIONS(179),
    [anon_sym_new_DASHinstance] = ACTIONS(179),
    [anon_sym_new_DASHarray] = ACTIONS(179),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(181),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(179),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(179),
    [anon_sym_throw] = ACTIONS(179),
    [anon_sym_goto] = ACTIONS(181),
    [anon_sym_goto_SLASH16] = ACTIONS(179),
    [anon_sym_goto_SLASH32] = ACTIONS(179),
    [anon_sym_packed_DASHswitch] = ACTIONS(179),
    [anon_sym_sparse_DASHswitch] = ACTIONS(179),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(179),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(179),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(179),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(179),
    [anon_sym_cmp_DASHlong] = ACTIONS(179),
    [anon_sym_if_DASHeq] = ACTIONS(181),
    [anon_sym_if_DASHne] = ACTIONS(181),
    [anon_sym_if_DASHlt] = ACTIONS(181),
    [anon_sym_if_DASHge] = ACTIONS(181),
    [anon_sym_if_DASHgt] = ACTIONS(181),
    [anon_sym_if_DASHle] = ACTIONS(181),
    [anon_sym_if_DASHeqz] = ACTIONS(179),
    [anon_sym_if_DASHnez] = ACTIONS(179),
    [anon_sym_if_DASHltz] = ACTIONS(179),
    [anon_sym_if_DASHgez] = ACTIONS(179),
    [anon_sym_if_DASHgtz] = ACTIONS(179),
    [anon_sym_if_DASHlez] = ACTIONS(179),
    [anon_sym_aget] = ACTIONS(181),
    [anon_sym_aget_DASHwide] = ACTIONS(179),
    [anon_sym_aget_DASHobject] = ACTIONS(179),
    [anon_sym_aget_DASHboolean] = ACTIONS(179),
    [anon_sym_aget_DASHbyte] = ACTIONS(179),
    [anon_sym_aget_DASHchar] = ACTIONS(179),
    [anon_sym_aget_DASHshort] = ACTIONS(179),
    [anon_sym_aput] = ACTIONS(181),
    [anon_sym_aput_DASHwide] = ACTIONS(179),
    [anon_sym_aput_DASHobject] = ACTIONS(179),
    [anon_sym_aput_DASHboolean] = ACTIONS(179),
    [anon_sym_aput_DASHbyte] = ACTIONS(179),
    [anon_sym_aput_DASHchar] = ACTIONS(179),
    [anon_sym_aput_DASHshort] = ACTIONS(179),
    [anon_sym_iget] = ACTIONS(181),
    [anon_sym_iget_DASHwide] = ACTIONS(181),
    [anon_sym_iget_DASHobject] = ACTIONS(181),
    [anon_sym_iget_DASHboolean] = ACTIONS(179),
    [anon_sym_iget_DASHbyte] = ACTIONS(179),
    [anon_sym_iget_DASHchar] = ACTIONS(179),
    [anon_sym_iget_DASHshort] = ACTIONS(179),
    [anon_sym_iput] = ACTIONS(181),
    [anon_sym_iput_DASHwide] = ACTIONS(181),
    [anon_sym_iput_DASHobject] = ACTIONS(181),
    [anon_sym_iput_DASHboolean] = ACTIONS(179),
    [anon_sym_iput_DASHbyte] = ACTIONS(179),
    [anon_sym_iput_DASHchar] = ACTIONS(179),
    [anon_sym_iput_DASHshort] = ACTIONS(179),
    [anon_sym_sget] = ACTIONS(181),
    [anon_sym_sget_DASHwide] = ACTIONS(179),
    [anon_sym_sget_DASHobject] = ACTIONS(179),
    [anon_sym_sget_DASHboolean] = ACTIONS(179),
    [anon_sym_sget_DASHbyte] = ACTIONS(179),
    [anon_sym_sget_DASHchar] = ACTIONS(179),
    [anon_sym_sget_DASHshort] = ACTIONS(179),
    [anon_sym_sput] = ACTIONS(181),
    [anon_sym_sput_DASHwide] = ACTIONS(179),
    [anon_sym_sput_DASHobject] = ACTIONS(179),
    [anon_sym_sput_DASHboolean] = ACTIONS(179),
    [anon_sym_sput_DASHbyte] = ACTIONS(179),
    [anon_sym_sput_DASHchar] = ACTIONS(179),
    [anon_sym_sput_DASHshort] = ACTIONS(179),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(181),
    [anon_sym_invoke_DASHsuper] = ACTIONS(181),
    [anon_sym_invoke_DASHdirect] = ACTIONS(181),
    [anon_sym_invoke_DASHstatic] = ACTIONS(181),
    [anon_sym_invoke_DASHinterface] = ACTIONS(181),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(179),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(179),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(179),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(179),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(179),
    [anon_sym_neg_DASHint] = ACTIONS(179),
    [anon_sym_not_DASHint] = ACTIONS(179),
    [anon_sym_neg_DASHlong] = ACTIONS(179),
    [anon_sym_not_DASHlong] = ACTIONS(179),
    [anon_sym_neg_DASHfloat] = ACTIONS(179),
    [anon_sym_neg_DASHdouble] = ACTIONS(179),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(179),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(179),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(179),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(179),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(179),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(179),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(179),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(179),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(179),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(179),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(179),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(179),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(179),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(179),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(179),
    [anon_sym_add_DASHint] = ACTIONS(181),
    [anon_sym_sub_DASHint] = ACTIONS(181),
    [anon_sym_mul_DASHint] = ACTIONS(181),
    [anon_sym_div_DASHint] = ACTIONS(181),
    [anon_sym_rem_DASHint] = ACTIONS(181),
    [anon_sym_and_DASHint] = ACTIONS(181),
    [anon_sym_or_DASHint] = ACTIONS(181),
    [anon_sym_xor_DASHint] = ACTIONS(181),
    [anon_sym_shl_DASHint] = ACTIONS(181),
    [anon_sym_shr_DASHint] = ACTIONS(181),
    [anon_sym_ushr_DASHint] = ACTIONS(181),
    [anon_sym_add_DASHlong] = ACTIONS(181),
    [anon_sym_sub_DASHlong] = ACTIONS(181),
    [anon_sym_mul_DASHlong] = ACTIONS(181),
    [anon_sym_div_DASHlong] = ACTIONS(181),
    [anon_sym_rem_DASHlong] = ACTIONS(181),
    [anon_sym_and_DASHlong] = ACTIONS(181),
    [anon_sym_or_DASHlong] = ACTIONS(181),
    [anon_sym_xor_DASHlong] = ACTIONS(181),
    [anon_sym_shl_DASHlong] = ACTIONS(181),
    [anon_sym_shr_DASHlong] = ACTIONS(181),
    [anon_sym_ushr_DASHlong] = ACTIONS(181),
    [anon_sym_add_DASHfloat] = ACTIONS(181),
    [anon_sym_sub_DASHfloat] = ACTIONS(181),
    [anon_sym_mul_DASHfloat] = ACTIONS(181),
    [anon_sym_div_DASHfloat] = ACTIONS(181),
    [anon_sym_rem_DASHfloat] = ACTIONS(181),
    [anon_sym_add_DASHdouble] = ACTIONS(181),
    [anon_sym_sub_DASHdouble] = ACTIONS(181),
    [anon_sym_mul_DASHdouble] = ACTIONS(181),
    [anon_sym_div_DASHdouble] = ACTIONS(181),
    [anon_sym_rem_DASHdouble] = ACTIONS(181),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(179),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(179),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(179),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(179),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(179),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(179),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(179),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(179),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(179),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(179),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(179),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(179),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(179),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_execute_DASHinline] = ACTIONS(179),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(179),
    [anon_sym_iget_DASHquick] = ACTIONS(179),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(179),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(179),
    [anon_sym_iput_DASHquick] = ACTIONS(179),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(179),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(179),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(181),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(179),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(181),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(179),
    [anon_sym_rsub_DASHint] = ACTIONS(181),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(179),
    [anon_sym_DOTline] = ACTIONS(179),
    [anon_sym_DOTlocals] = ACTIONS(179),
    [anon_sym_DOTcatch] = ACTIONS(181),
    [anon_sym_DOTcatchall] = ACTIONS(179),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(179),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(179),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      sym_class_identifier,
    ACTIONS(191), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_comment,
    STATE(156), 1,
      sym_array_type,
    ACTIONS(201), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(183), 5,
      sym_label,
      sym_variable,
      sym_parameter,
      sym_string_literal,
      sym_null_literal,
    ACTIONS(197), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
    STATE(157), 11,
      sym__statement_argument,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_primitive_type,
      sym_list,
      sym_range,
      sym_number_literal,
      sym_boolean_literal,
  [66] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      sym_class_identifier,
    ACTIONS(211), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      sym_array_type,
    ACTIONS(201), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      sym_label,
      sym_string_literal,
    ACTIONS(213), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(217), 3,
      sym_variable,
      sym_parameter,
      sym_null_literal,
    ACTIONS(197), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
    STATE(168), 11,
      sym__statement_argument,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_primitive_type,
      sym_list,
      sym_range,
      sym_number_literal,
      sym_boolean_literal,
  [131] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      sym_class_identifier,
    ACTIONS(225), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_DOTenum,
    ACTIONS(235), 1,
      sym_string_literal,
    ACTIONS(239), 1,
      sym_null_literal,
    STATE(119), 1,
      sym_subannotation_declaration,
    STATE(126), 1,
      sym_annotation_value,
    STATE(206), 1,
      sym_array_type,
    ACTIONS(233), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(124), 10,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym_list,
      sym_number_literal,
      sym_boolean_literal,
  [193] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      sym_class_identifier,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(249), 1,
      anon_sym_DOTenum,
    ACTIONS(255), 1,
      sym_string_literal,
    STATE(119), 1,
      sym_subannotation_declaration,
    STATE(187), 1,
      sym_array_type,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_variable,
      sym_parameter,
    ACTIONS(253), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(247), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(138), 9,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym_number_literal,
      sym_boolean_literal,
  [252] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym_class_identifier,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(249), 1,
      anon_sym_DOTenum,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      sym_string_literal,
    STATE(119), 1,
      sym_subannotation_declaration,
    STATE(120), 1,
      sym_number_literal,
    STATE(187), 1,
      sym_array_type,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(253), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(259), 2,
      sym_variable,
      sym_parameter,
    ACTIONS(247), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(134), 8,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym_boolean_literal,
  [313] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym_class_identifier,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(249), 1,
      anon_sym_DOTenum,
    ACTIONS(265), 1,
      sym_string_literal,
    STATE(119), 1,
      sym_subannotation_declaration,
    STATE(187), 1,
      sym_array_type,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(253), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(263), 2,
      sym_variable,
      sym_parameter,
    ACTIONS(247), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    STATE(176), 9,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym_number_literal,
      sym_boolean_literal,
  [369] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(267), 25,
      sym_label,
      anon_sym_LBRACE,
      sym_class_identifier,
      aux_sym_field_identifier_token1,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
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
      sym_variable,
      sym_parameter,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_null_literal,
  [403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(29), 1,
      sym_method_identifier,
    STATE(41), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(118), 1,
      sym_access_modifiers,
    ACTIONS(247), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(271), 17,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_annotation,
  [443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(40), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(275), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(277), 17,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_annotation,
  [477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(40), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(283), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(285), 17,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_annotation,
  [511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(205), 1,
      sym_access_modifiers,
    ACTIONS(289), 18,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_declared_DASHsynchronized,
      anon_sym_annotation,
  [541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_class_identifier,
    STATE(44), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(291), 18,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_declared_DASHsynchronized,
      anon_sym_annotation,
  [571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_class_identifier,
    STATE(44), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(293), 18,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_declared_DASHsynchronized,
      anon_sym_annotation,
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(298), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(47), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(296), 17,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_annotation,
  [633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(166), 1,
      sym_access_modifiers,
    ACTIONS(300), 18,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_declared_DASHsynchronized,
      anon_sym_annotation,
  [663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(305), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(47), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(302), 17,
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
      anon_sym_enum,
      anon_sym_constructor,
      anon_sym_varargs,
      anon_sym_annotation,
  [695] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      anon_sym_DOTsource,
    ACTIONS(312), 1,
      anon_sym_DOTimplements,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    STATE(6), 1,
      sym_method_declaration,
    STATE(52), 1,
      sym_source_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(49), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(72), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(77), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(97), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [745] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(312), 1,
      anon_sym_DOTimplements,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(71), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(79), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(84), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [789] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_class_identifier,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_class_identifier,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [853] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(312), 1,
      anon_sym_DOTimplements,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(55), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(71), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(79), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [897] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_class_identifier,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_class_identifier,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [961] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(312), 1,
      anon_sym_DOTimplements,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(73), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(78), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(84), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    STATE(99), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1005] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_class_identifier,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_class_identifier,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1069] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_class_identifier,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      aux_sym_method_identifier_repeat1,
    STATE(74), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(346), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_class_identifier,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(145), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(353), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(355), 1,
      sym_class_identifier,
    STATE(11), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      sym_class_identifier,
    STATE(12), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      sym_class_identifier,
    STATE(3), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_class_identifier,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(353), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(363), 1,
      sym_class_identifier,
    STATE(136), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(353), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_class_identifier,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(324), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(365), 1,
      sym_class_identifier,
    STATE(159), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(367), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      sym_class_identifier,
    STATE(143), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(353), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      sym_class_identifier,
    STATE(152), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(367), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      sym_class_identifier,
    STATE(175), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(367), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      sym_class_identifier,
    STATE(174), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(367), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1413] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(78), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(81), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(99), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1450] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(79), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(81), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1487] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(80), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(81), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    STATE(114), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 12,
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
  [1542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 11,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_EQ,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 10,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1575] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(110), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1602] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(114), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(99), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1656] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOTfield,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(82), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(113), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOTannotation,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(81), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(387), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      sym_end_param,
  [1704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(394), 1,
      sym_end_field,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(93), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
    ACTIONS(392), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1726] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    ACTIONS(398), 2,
      sym_string_literal,
      sym_null_literal,
    ACTIONS(400), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(104), 2,
      sym_number_literal,
      sym_boolean_literal,
  [1748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOTimplements,
    STATE(84), 2,
      sym_implements_declaration,
      aux_sym_class_definition_repeat1,
    ACTIONS(402), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_field_identifier_token1,
    STATE(162), 1,
      sym_field_identifier,
    STATE(163), 1,
      sym_method_identifier,
    ACTIONS(213), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(407), 1,
      sym_class_identifier,
    STATE(188), 1,
      sym_array_type,
    STATE(103), 2,
      sym_field_identifier,
      sym_full_field_identifier,
  [1803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      sym_class_identifier,
    STATE(207), 1,
      sym_array_type,
    STATE(103), 2,
      sym_field_identifier,
      sym_full_field_identifier,
  [1823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOTfield,
    STATE(82), 1,
      sym_field_declaration,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_field_identifier_token1,
    STATE(101), 1,
      sym_field_identifier,
    STATE(116), 1,
      sym_method_identifier,
    ACTIONS(227), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    STATE(101), 1,
      sym_field_identifier,
    STATE(116), 1,
      sym_method_identifier,
    ACTIONS(247), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(422), 1,
      sym_end_field,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(81), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
  [1920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 1,
      anon_sym_DOTmethod,
    STATE(6), 1,
      sym_method_declaration,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_annotation_key,
    ACTIONS(432), 2,
      sym_end_annotation,
      sym_end_subannotation,
    STATE(95), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [1952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    ACTIONS(434), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(109), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(189), 1,
      sym_number_literal,
  [1971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    ACTIONS(442), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(111), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOTannotation,
    ACTIONS(452), 1,
      sym_end_param,
    STATE(123), 1,
      sym_annotation_declaration,
    STATE(81), 2,
      sym_annotation_definition,
      aux_sym_class_definition_repeat2,
  [2116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    ACTIONS(454), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(96), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(189), 1,
      sym_number_literal,
  [2135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_DOTendsparse_DASHswitch,
    ACTIONS(458), 1,
      aux_sym_number_literal_token1,
    ACTIONS(461), 1,
      aux_sym_number_literal_token2,
    STATE(109), 1,
      aux_sym_sparse_switch_declaration_repeat1,
    STATE(189), 1,
      sym_number_literal,
  [2154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    ACTIONS(464), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(115), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    STATE(182), 1,
      sym_number_literal,
    ACTIONS(466), 2,
      sym_variable,
      sym_parameter,
  [2205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOTmethod,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_method_declaration,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(472), 1,
      aux_sym_number_literal_token1,
    ACTIONS(475), 1,
      aux_sym_number_literal_token2,
    STATE(115), 2,
      sym_number_literal,
      aux_sym_array_data_declaration_repeat1,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_annotation_key,
    ACTIONS(482), 1,
      sym_end_subannotation,
    STATE(95), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_method_identifier,
    ACTIONS(247), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [2293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_annotation_key,
    ACTIONS(484), 1,
      sym_end_subannotation,
    STATE(117), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_DOT_DOT,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      aux_sym_list_repeat1,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DASH_GT,
    ACTIONS(492), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_annotation_key,
    ACTIONS(496), 1,
      sym_end_annotation,
    STATE(95), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_annotation_key,
    ACTIONS(498), 1,
      sym_end_annotation,
    STATE(122), 2,
      sym_annotation_property,
      aux_sym_annotation_definition_repeat1,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2390] = 4,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
  [2403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_label,
    ACTIONS(513), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(128), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_number_literal_token2,
    ACTIONS(515), 2,
      anon_sym_DOTendsparse_DASHswitch,
      aux_sym_number_literal_token1,
  [2427] = 4,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_statement_repeat1,
  [2440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    STATE(21), 1,
      sym_number_literal,
  [2453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    STATE(16), 1,
      sym_number_literal,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      aux_sym_list_repeat1,
  [2488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_list_repeat1,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    STATE(153), 1,
      sym_number_literal,
  [2523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_list_repeat1,
  [2536] = 4,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_statement_repeat1,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_label,
    ACTIONS(536), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(128), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_list_repeat1,
  [2575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_number_literal_token2,
    ACTIONS(396), 1,
      aux_sym_number_literal_token1,
    STATE(102), 1,
      sym_number_literal,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_list_repeat1,
  [2646] = 3,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DASH_GT,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2677] = 3,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_label,
    ACTIONS(553), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(140), 1,
      aux_sym_packed_switch_declaration_repeat1,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2719] = 4,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_LF,
  [2732] = 4,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_LF,
    STATE(130), 1,
      aux_sym_statement_repeat1,
  [2745] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      anon_sym_COMMA,
  [2755] = 3,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      sym_comment,
  [2765] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      anon_sym_COMMA,
  [2775] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      anon_sym_COMMA,
  [2785] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      anon_sym_COMMA,
  [2795] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_COMMA,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_DOTsuper,
    STATE(48), 1,
      sym_super_declaration,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_field_identifier_token1,
    STATE(101), 1,
      sym_field_identifier,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    STATE(89), 1,
      sym_field_identifier,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2843] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      anon_sym_COMMA,
  [2853] = 3,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      sym_comment,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      sym_annotation_key,
      sym_end_subannotation,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2879] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      anon_sym_COMMA,
  [2889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2897] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      anon_sym_COMMA,
  [2907] = 3,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      sym_comment,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2925] = 3,
    ACTIONS(199), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_LF,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_field_identifier_token1,
    STATE(101), 1,
      sym_field_identifier,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_label,
  [2952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
  [2959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_label,
  [2980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
  [2987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT_DOT,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_label,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DASH_GT,
  [3008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_DASH_GT,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DASH_GT,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_label,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_DOT_DOT,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_EQ,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_label,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_class_identifier,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_parameter,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_class_identifier,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_class_identifier,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_label,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_class_identifier,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_label,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_string_literal,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_DOTsuper,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_class_identifier,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_class_identifier,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DASH_GT,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DASH_GT,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 66,
  [SMALL_STATE(34)] = 131,
  [SMALL_STATE(35)] = 193,
  [SMALL_STATE(36)] = 252,
  [SMALL_STATE(37)] = 313,
  [SMALL_STATE(38)] = 369,
  [SMALL_STATE(39)] = 403,
  [SMALL_STATE(40)] = 443,
  [SMALL_STATE(41)] = 477,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 541,
  [SMALL_STATE(44)] = 571,
  [SMALL_STATE(45)] = 601,
  [SMALL_STATE(46)] = 633,
  [SMALL_STATE(47)] = 663,
  [SMALL_STATE(48)] = 695,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 789,
  [SMALL_STATE(51)] = 821,
  [SMALL_STATE(52)] = 853,
  [SMALL_STATE(53)] = 897,
  [SMALL_STATE(54)] = 929,
  [SMALL_STATE(55)] = 961,
  [SMALL_STATE(56)] = 1005,
  [SMALL_STATE(57)] = 1037,
  [SMALL_STATE(58)] = 1069,
  [SMALL_STATE(59)] = 1101,
  [SMALL_STATE(60)] = 1127,
  [SMALL_STATE(61)] = 1153,
  [SMALL_STATE(62)] = 1179,
  [SMALL_STATE(63)] = 1205,
  [SMALL_STATE(64)] = 1231,
  [SMALL_STATE(65)] = 1257,
  [SMALL_STATE(66)] = 1283,
  [SMALL_STATE(67)] = 1309,
  [SMALL_STATE(68)] = 1335,
  [SMALL_STATE(69)] = 1361,
  [SMALL_STATE(70)] = 1387,
  [SMALL_STATE(71)] = 1413,
  [SMALL_STATE(72)] = 1450,
  [SMALL_STATE(73)] = 1487,
  [SMALL_STATE(74)] = 1524,
  [SMALL_STATE(75)] = 1542,
  [SMALL_STATE(76)] = 1559,
  [SMALL_STATE(77)] = 1575,
  [SMALL_STATE(78)] = 1602,
  [SMALL_STATE(79)] = 1629,
  [SMALL_STATE(80)] = 1656,
  [SMALL_STATE(81)] = 1683,
  [SMALL_STATE(82)] = 1704,
  [SMALL_STATE(83)] = 1726,
  [SMALL_STATE(84)] = 1748,
  [SMALL_STATE(85)] = 1765,
  [SMALL_STATE(86)] = 1783,
  [SMALL_STATE(87)] = 1803,
  [SMALL_STATE(88)] = 1823,
  [SMALL_STATE(89)] = 1841,
  [SMALL_STATE(90)] = 1855,
  [SMALL_STATE(91)] = 1873,
  [SMALL_STATE(92)] = 1885,
  [SMALL_STATE(93)] = 1903,
  [SMALL_STATE(94)] = 1920,
  [SMALL_STATE(95)] = 1937,
  [SMALL_STATE(96)] = 1952,
  [SMALL_STATE(97)] = 1971,
  [SMALL_STATE(98)] = 1988,
  [SMALL_STATE(99)] = 1999,
  [SMALL_STATE(100)] = 2016,
  [SMALL_STATE(101)] = 2027,
  [SMALL_STATE(102)] = 2038,
  [SMALL_STATE(103)] = 2055,
  [SMALL_STATE(104)] = 2066,
  [SMALL_STATE(105)] = 2077,
  [SMALL_STATE(106)] = 2088,
  [SMALL_STATE(107)] = 2099,
  [SMALL_STATE(108)] = 2116,
  [SMALL_STATE(109)] = 2135,
  [SMALL_STATE(110)] = 2154,
  [SMALL_STATE(111)] = 2171,
  [SMALL_STATE(112)] = 2188,
  [SMALL_STATE(113)] = 2205,
  [SMALL_STATE(114)] = 2222,
  [SMALL_STATE(115)] = 2239,
  [SMALL_STATE(116)] = 2256,
  [SMALL_STATE(117)] = 2267,
  [SMALL_STATE(118)] = 2281,
  [SMALL_STATE(119)] = 2293,
  [SMALL_STATE(120)] = 2307,
  [SMALL_STATE(121)] = 2323,
  [SMALL_STATE(122)] = 2335,
  [SMALL_STATE(123)] = 2349,
  [SMALL_STATE(124)] = 2363,
  [SMALL_STATE(125)] = 2372,
  [SMALL_STATE(126)] = 2381,
  [SMALL_STATE(127)] = 2390,
  [SMALL_STATE(128)] = 2403,
  [SMALL_STATE(129)] = 2416,
  [SMALL_STATE(130)] = 2427,
  [SMALL_STATE(131)] = 2440,
  [SMALL_STATE(132)] = 2453,
  [SMALL_STATE(133)] = 2466,
  [SMALL_STATE(134)] = 2475,
  [SMALL_STATE(135)] = 2488,
  [SMALL_STATE(136)] = 2501,
  [SMALL_STATE(137)] = 2510,
  [SMALL_STATE(138)] = 2523,
  [SMALL_STATE(139)] = 2536,
  [SMALL_STATE(140)] = 2549,
  [SMALL_STATE(141)] = 2562,
  [SMALL_STATE(142)] = 2575,
  [SMALL_STATE(143)] = 2588,
  [SMALL_STATE(144)] = 2597,
  [SMALL_STATE(145)] = 2606,
  [SMALL_STATE(146)] = 2615,
  [SMALL_STATE(147)] = 2624,
  [SMALL_STATE(148)] = 2633,
  [SMALL_STATE(149)] = 2646,
  [SMALL_STATE(150)] = 2657,
  [SMALL_STATE(151)] = 2668,
  [SMALL_STATE(152)] = 2677,
  [SMALL_STATE(153)] = 2688,
  [SMALL_STATE(154)] = 2701,
  [SMALL_STATE(155)] = 2710,
  [SMALL_STATE(156)] = 2719,
  [SMALL_STATE(157)] = 2732,
  [SMALL_STATE(158)] = 2745,
  [SMALL_STATE(159)] = 2755,
  [SMALL_STATE(160)] = 2765,
  [SMALL_STATE(161)] = 2775,
  [SMALL_STATE(162)] = 2785,
  [SMALL_STATE(163)] = 2795,
  [SMALL_STATE(164)] = 2805,
  [SMALL_STATE(165)] = 2815,
  [SMALL_STATE(166)] = 2825,
  [SMALL_STATE(167)] = 2835,
  [SMALL_STATE(168)] = 2843,
  [SMALL_STATE(169)] = 2853,
  [SMALL_STATE(170)] = 2863,
  [SMALL_STATE(171)] = 2871,
  [SMALL_STATE(172)] = 2879,
  [SMALL_STATE(173)] = 2889,
  [SMALL_STATE(174)] = 2897,
  [SMALL_STATE(175)] = 2907,
  [SMALL_STATE(176)] = 2917,
  [SMALL_STATE(177)] = 2925,
  [SMALL_STATE(178)] = 2935,
  [SMALL_STATE(179)] = 2945,
  [SMALL_STATE(180)] = 2952,
  [SMALL_STATE(181)] = 2959,
  [SMALL_STATE(182)] = 2966,
  [SMALL_STATE(183)] = 2973,
  [SMALL_STATE(184)] = 2980,
  [SMALL_STATE(185)] = 2987,
  [SMALL_STATE(186)] = 2994,
  [SMALL_STATE(187)] = 3001,
  [SMALL_STATE(188)] = 3008,
  [SMALL_STATE(189)] = 3015,
  [SMALL_STATE(190)] = 3022,
  [SMALL_STATE(191)] = 3029,
  [SMALL_STATE(192)] = 3036,
  [SMALL_STATE(193)] = 3043,
  [SMALL_STATE(194)] = 3050,
  [SMALL_STATE(195)] = 3057,
  [SMALL_STATE(196)] = 3064,
  [SMALL_STATE(197)] = 3071,
  [SMALL_STATE(198)] = 3078,
  [SMALL_STATE(199)] = 3085,
  [SMALL_STATE(200)] = 3092,
  [SMALL_STATE(201)] = 3099,
  [SMALL_STATE(202)] = 3106,
  [SMALL_STATE(203)] = 3113,
  [SMALL_STATE(204)] = 3120,
  [SMALL_STATE(205)] = 3127,
  [SMALL_STATE(206)] = 3134,
  [SMALL_STATE(207)] = 3141,
  [SMALL_STATE(208)] = 3148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(146),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(196),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(38),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(38),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(131),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(132),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(195),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(180),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(137),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(108),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(142),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_definition, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_definition, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_definition, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_definition, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 4, .production_id = 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 4, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 3, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_declaration, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_declaration, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_declaration, 7),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_declaration, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_declaration, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_declaration, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_definition, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_definition, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_declaration, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_declaration, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_declaration, 8),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_declaration, 8),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_definition, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_definition, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_declaration, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_declaration, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_declaration, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_declaration, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_declaration, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_declaration, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(40),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(40),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(44),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(47),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(47),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(74),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(62),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(146),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(200),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(46),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_declaration, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(39),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2), SHIFT_REPEAT(193),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_definition_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_declaration, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subannotation_definition, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_field_identifier, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_reference, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subannotation_definition, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_declaration, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_data_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_method_identifier, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2), SHIFT_REPEAT(128),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_declaration_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sparse_switch_declaration_repeat1, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(33),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_argument, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_argument, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_field_identifier, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_method_identifier, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subannotation_declaration, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_declaration, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3, .production_id = 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [605] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
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
