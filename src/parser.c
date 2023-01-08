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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 373
#define ALIAS_COUNT 2
#define TOKEN_COUNT 314
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_DOTregisters = 257,
  anon_sym_DOTcatch = 258,
  anon_sym_LBRACE = 259,
  anon_sym_DOT_DOT = 260,
  anon_sym_RBRACE = 261,
  anon_sym_DOTcatchall = 262,
  anon_sym_DOTpacked_DASHswitch = 263,
  anon_sym_DOTendpacked_DASHswitch = 264,
  anon_sym_DOTsparse_DASHswitch = 265,
  anon_sym_DASH_GT = 266,
  anon_sym_DOTendsparse_DASHswitch = 267,
  anon_sym_DOTarray_DASHdata = 268,
  anon_sym_DOTendarray_DASHdata = 269,
  sym_class_identifier = 270,
  aux_sym_field_identifier_token1 = 271,
  anon_sym_LTclinit_GT_LPAREN = 272,
  anon_sym_LTinit_GT_LPAREN = 273,
  aux_sym_method_identifier_token1 = 274,
  anon_sym_RPAREN = 275,
  anon_sym_LBRACK = 276,
  anon_sym_V = 277,
  anon_sym_Z = 278,
  anon_sym_B = 279,
  anon_sym_S = 280,
  anon_sym_C = 281,
  anon_sym_I = 282,
  anon_sym_J = 283,
  anon_sym_F = 284,
  anon_sym_D = 285,
  anon_sym_public = 286,
  anon_sym_private = 287,
  anon_sym_protected = 288,
  anon_sym_static = 289,
  anon_sym_final = 290,
  anon_sym_synchronized = 291,
  anon_sym_volatile = 292,
  anon_sym_transient = 293,
  anon_sym_native = 294,
  anon_sym_interface = 295,
  anon_sym_abstract = 296,
  anon_sym_bridge = 297,
  anon_sym_synthetic = 298,
  anon_sym_enum = 299,
  anon_sym_constructor = 300,
  anon_sym_varargs = 301,
  anon_sym_declared_DASHsynchronized = 302,
  anon_sym_annotation = 303,
  sym_comment = 304,
  anon_sym_DOTenum = 305,
  sym_variable = 306,
  sym_parameter = 307,
  aux_sym_number_literal_token1 = 308,
  aux_sym_number_literal_token2 = 309,
  sym_string_literal = 310,
  anon_sym_true = 311,
  anon_sym_false = 312,
  sym_null_literal = 313,
  sym_class_definition = 314,
  sym_class_directive = 315,
  sym_super_directive = 316,
  sym_source_directive = 317,
  sym_implements_directive = 318,
  sym_field_definition = 319,
  sym_field_declaration = 320,
  sym_method_definition = 321,
  sym_method_declaration = 322,
  sym_annotation_directive = 323,
  sym_start_annotation = 324,
  sym_annotation_visibility = 325,
  sym_annotation_property = 326,
  sym_annotation_value = 327,
  sym_subannotation_definition = 328,
  sym_subannotation_declaration = 329,
  sym_param_directive = 330,
  sym_start_param = 331,
  sym__code_line = 332,
  sym_statement = 333,
  sym_opcode = 334,
  sym__statement_argument = 335,
  sym__directive = 336,
  sym_line_directive = 337,
  sym_locals_directive = 338,
  sym_registers_directive = 339,
  sym_catch_directive = 340,
  sym_catchall_directive = 341,
  sym_packed_switch_directive = 342,
  sym_sparse_switch_directive = 343,
  sym_array_data_directive = 344,
  sym__identifier = 345,
  sym_field_identifier = 346,
  sym_method_identifier = 347,
  sym_full_field_identifier = 348,
  sym_full_method_identifier = 349,
  sym__type = 350,
  sym_array_type = 351,
  sym_primitive_type = 352,
  sym_access_modifiers = 353,
  sym_enum_reference = 354,
  sym_list = 355,
  sym_range = 356,
  sym__literal = 357,
  sym_number_literal = 358,
  sym_boolean_literal = 359,
  aux_sym_class_definition_repeat1 = 360,
  aux_sym_class_definition_repeat2 = 361,
  aux_sym_class_definition_repeat3 = 362,
  aux_sym_class_definition_repeat4 = 363,
  aux_sym_method_definition_repeat1 = 364,
  aux_sym_annotation_directive_repeat1 = 365,
  aux_sym_statement_repeat1 = 366,
  aux_sym_packed_switch_directive_repeat1 = 367,
  aux_sym_sparse_switch_directive_repeat1 = 368,
  aux_sym_array_data_directive_repeat1 = 369,
  aux_sym_method_identifier_repeat1 = 370,
  aux_sym_access_modifiers_repeat1 = 371,
  aux_sym_list_repeat1 = 372,
  alias_sym_code_block = 373,
  alias_sym_parameters = 374,
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
  [anon_sym_DOTregisters] = ".registers",
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
  [sym_class_directive] = "class_directive",
  [sym_super_directive] = "super_directive",
  [sym_source_directive] = "source_directive",
  [sym_implements_directive] = "implements_directive",
  [sym_field_definition] = "field_definition",
  [sym_field_declaration] = "field_declaration",
  [sym_method_definition] = "method_definition",
  [sym_method_declaration] = "method_declaration",
  [sym_annotation_directive] = "annotation_directive",
  [sym_start_annotation] = "start_annotation",
  [sym_annotation_visibility] = "annotation_visibility",
  [sym_annotation_property] = "annotation_property",
  [sym_annotation_value] = "annotation_value",
  [sym_subannotation_definition] = "subannotation_definition",
  [sym_subannotation_declaration] = "subannotation_declaration",
  [sym_param_directive] = "param_directive",
  [sym_start_param] = "start_param",
  [sym__code_line] = "_code_line",
  [sym_statement] = "statement",
  [sym_opcode] = "opcode",
  [sym__statement_argument] = "_statement_argument",
  [sym__directive] = "_directive",
  [sym_line_directive] = "line_directive",
  [sym_locals_directive] = "locals_directive",
  [sym_registers_directive] = "registers_directive",
  [sym_catch_directive] = "catch_directive",
  [sym_catchall_directive] = "catchall_directive",
  [sym_packed_switch_directive] = "packed_switch_directive",
  [sym_sparse_switch_directive] = "sparse_switch_directive",
  [sym_array_data_directive] = "array_data_directive",
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
  [sym__literal] = "_literal",
  [sym_number_literal] = "number_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_class_definition_repeat3] = "class_definition_repeat3",
  [aux_sym_class_definition_repeat4] = "class_definition_repeat4",
  [aux_sym_method_definition_repeat1] = "method_definition_repeat1",
  [aux_sym_annotation_directive_repeat1] = "annotation_directive_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_packed_switch_directive_repeat1] = "packed_switch_directive_repeat1",
  [aux_sym_sparse_switch_directive_repeat1] = "sparse_switch_directive_repeat1",
  [aux_sym_array_data_directive_repeat1] = "array_data_directive_repeat1",
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
  [anon_sym_DOTregisters] = anon_sym_DOTregisters,
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
  [sym_class_directive] = sym_class_directive,
  [sym_super_directive] = sym_super_directive,
  [sym_source_directive] = sym_source_directive,
  [sym_implements_directive] = sym_implements_directive,
  [sym_field_definition] = sym_field_definition,
  [sym_field_declaration] = sym_field_declaration,
  [sym_method_definition] = sym_method_definition,
  [sym_method_declaration] = sym_method_declaration,
  [sym_annotation_directive] = sym_annotation_directive,
  [sym_start_annotation] = sym_start_annotation,
  [sym_annotation_visibility] = sym_annotation_visibility,
  [sym_annotation_property] = sym_annotation_property,
  [sym_annotation_value] = sym_annotation_value,
  [sym_subannotation_definition] = sym_subannotation_definition,
  [sym_subannotation_declaration] = sym_subannotation_declaration,
  [sym_param_directive] = sym_param_directive,
  [sym_start_param] = sym_start_param,
  [sym__code_line] = sym__code_line,
  [sym_statement] = sym_statement,
  [sym_opcode] = sym_opcode,
  [sym__statement_argument] = sym__statement_argument,
  [sym__directive] = sym__directive,
  [sym_line_directive] = sym_line_directive,
  [sym_locals_directive] = sym_locals_directive,
  [sym_registers_directive] = sym_registers_directive,
  [sym_catch_directive] = sym_catch_directive,
  [sym_catchall_directive] = sym_catchall_directive,
  [sym_packed_switch_directive] = sym_packed_switch_directive,
  [sym_sparse_switch_directive] = sym_sparse_switch_directive,
  [sym_array_data_directive] = sym_array_data_directive,
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
  [sym__literal] = sym__literal,
  [sym_number_literal] = sym_number_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_class_definition_repeat3] = aux_sym_class_definition_repeat3,
  [aux_sym_class_definition_repeat4] = aux_sym_class_definition_repeat4,
  [aux_sym_method_definition_repeat1] = aux_sym_method_definition_repeat1,
  [aux_sym_annotation_directive_repeat1] = aux_sym_annotation_directive_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_packed_switch_directive_repeat1] = aux_sym_packed_switch_directive_repeat1,
  [aux_sym_sparse_switch_directive_repeat1] = aux_sym_sparse_switch_directive_repeat1,
  [aux_sym_array_data_directive_repeat1] = aux_sym_array_data_directive_repeat1,
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
  [anon_sym_DOTregisters] = {
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
  [sym_class_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_super_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_source_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_implements_directive] = {
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
  [sym_annotation_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_start_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_visibility] = {
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
  [sym_param_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_start_param] = {
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
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_line_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_locals_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_registers_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_catchall_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_packed_switch_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sparse_switch_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_array_data_directive] = {
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
  [sym__literal] = {
    .visible = false,
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
  [aux_sym_annotation_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_packed_switch_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sparse_switch_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_data_directive_repeat1] = {
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
  field_argument = 1,
  field_element_type = 2,
  field_element_width = 3,
  field_end = 4,
  field_identifier = 5,
  field_key = 6,
  field_modifiers = 7,
  field_opcode = 8,
  field_parameter = 9,
  field_parameters = 10,
  field_return_type = 11,
  field_start = 12,
  field_value = 13,
  field_visibility = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_element_type] = "element_type",
  [field_element_width] = "element_width",
  [field_end] = "end",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_modifiers] = "modifiers",
  [field_opcode] = "opcode",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_start] = "start",
  [field_value] = "value",
  [field_visibility] = "visibility",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 3},
  [15] = {.index = 21, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 1},
  [1] =
    {field_identifier, 2},
    {field_modifiers, 1},
  [3] =
    {field_identifier, 2},
    {field_visibility, 1},
  [5] =
    {field_parameter, 1},
  [6] =
    {field_opcode, 0},
  [7] =
    {field_return_type, 2},
  [8] =
    {field_element_type, 1},
  [9] =
    {field_element_width, 1},
  [10] =
    {field_argument, 1},
    {field_opcode, 0},
  [12] =
    {field_key, 0},
    {field_value, 2},
  [14] =
    {field_parameters, 1},
    {field_return_type, 3},
  [16] =
    {field_element_width, 1},
    {field_value, 2},
  [18] =
    {field_argument, 1},
    {field_argument, 2},
    {field_opcode, 0},
  [21] =
    {field_end, 3},
    {field_start, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [1] = alias_sym_code_block,
  },
  [12] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 42,
  [47] = 41,
  [48] = 42,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 50,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 62,
  [67] = 65,
  [68] = 63,
  [69] = 62,
  [70] = 65,
  [71] = 60,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 87,
  [91] = 87,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 12,
  [137] = 137,
  [138] = 138,
  [139] = 3,
  [140] = 11,
  [141] = 7,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 2,
  [146] = 146,
  [147] = 147,
  [148] = 125,
  [149] = 128,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 3,
  [156] = 156,
  [157] = 2,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 150,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 164,
  [169] = 153,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 152,
  [174] = 99,
  [175] = 12,
  [176] = 7,
  [177] = 100,
  [178] = 178,
  [179] = 76,
  [180] = 11,
  [181] = 77,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 203,
  [212] = 191,
  [213] = 213,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1600);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == ')') ADVANCE(1877);
      if (lookahead == ',') ADVANCE(1621);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '0') ADVANCE(1963);
      if (lookahead == ':') ADVANCE(1597);
      if (lookahead == '<') ADVANCE(547);
      if (lookahead == '=') ADVANCE(1606);
      if (lookahead == 'B') ADVANCE(1883);
      if (lookahead == 'C') ADVANCE(1887);
      if (lookahead == 'D') ADVANCE(1895);
      if (lookahead == 'F') ADVANCE(1893);
      if (lookahead == 'I') ADVANCE(1889);
      if (lookahead == 'J') ADVANCE(1891);
      if (lookahead == 'L') ADVANCE(1598);
      if (lookahead == 'S') ADVANCE(1885);
      if (lookahead == 'V') ADVANCE(1879);
      if (lookahead == 'Z') ADVANCE(1881);
      if (lookahead == '[') ADVANCE(1878);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'b') ADVANCE(1322);
      if (lookahead == 'c') ADVANCE(870);
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 'e') ADVANCE(1085);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'l') ADVANCE(1172);
      if (lookahead == 'm') ADVANCE(1167);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(1324);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(706);
      if (lookahead == 's') ADVANCE(858);
      if (lookahead == 't') ADVANCE(869);
      if (lookahead == 'u') ADVANCE(1374);
      if (lookahead == 'v') ADVANCE(442);
      if (lookahead == 'x') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1859);
      if (lookahead == '}') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1964);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1622);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == ',') ADVANCE(1621);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '0') ADVANCE(1960);
      if (lookahead == ':') ADVANCE(1597);
      if (lookahead == '<') ADVANCE(547);
      if (lookahead == 'B') ADVANCE(1884);
      if (lookahead == 'C') ADVANCE(1888);
      if (lookahead == 'D') ADVANCE(1896);
      if (lookahead == 'F') ADVANCE(1894);
      if (lookahead == 'I') ADVANCE(1890);
      if (lookahead == 'J') ADVANCE(1892);
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(1886);
      if (lookahead == 'V') ADVANCE(1880);
      if (lookahead == 'Z') ADVANCE(1882);
      if (lookahead == '[') ADVANCE(1878);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == '{') ADVANCE(1859);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1961);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(504);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(509);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(789);
      if (lookahead == '0') ADVANCE(1960);
      if (lookahead == ':') ADVANCE(1597);
      if (lookahead == '<') ADVANCE(547);
      if (lookahead == 'B') ADVANCE(1884);
      if (lookahead == 'C') ADVANCE(1888);
      if (lookahead == 'D') ADVANCE(1896);
      if (lookahead == 'F') ADVANCE(1894);
      if (lookahead == 'I') ADVANCE(1890);
      if (lookahead == 'J') ADVANCE(1892);
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(1886);
      if (lookahead == 'V') ADVANCE(1880);
      if (lookahead == 'Z') ADVANCE(1882);
      if (lookahead == '[') ADVANCE(1878);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == '{') ADVANCE(1859);
      if (lookahead == '}') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1961);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == '<') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == '<') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == 'L') ADVANCE(1598);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'b') ADVANCE(1321);
      if (lookahead == 'c') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1084);
      if (lookahead == 'f') ADVANCE(922);
      if (lookahead == 'i') ADVANCE(1158);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(1323);
      if (lookahead == 's') ADVANCE(1463);
      if (lookahead == 't') ADVANCE(1338);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(1874);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(1873);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '-') ADVANCE(1382);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1968);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1970);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(1972);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1953);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1951);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1956);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 35:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 36:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(1898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 43:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(1907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(1934);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 48:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 49:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 50:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 51:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'd') ADVANCE(1904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'd') ADVANCE(1913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 54:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 55:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(1931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(1922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(1901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 58:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(1916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(1925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 60:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 61:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 62:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 63:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 65:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 67:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 76:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 81:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 82:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'l') ADVANCE(1910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 84:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 85:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 87:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'm') ADVANCE(1937);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 91:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 92:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(1947);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 94:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 96:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 98:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 102:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 103:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 105:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(1940);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 110:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 111:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 's') ADVANCE(1943);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(1928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(1919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'y') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == 'z') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '(') ADVANCE(1876);
      if (lookahead == ':') ADVANCE(1872);
      if (lookahead == ';') ADVANCE(1870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 142:
      if (lookahead == '(') ADVANCE(1876);
      if (lookahead == ':') ADVANCE(1872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(383);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(708);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(700);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(514);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(702);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(703);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(825);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(666);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(1381);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(964);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(1382);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(1382);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(1034);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(920);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(1171);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(763);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(1481);
      if (lookahead == 'e') ADVANCE(1277);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(1128);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(1015);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(1514);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(1519);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(1521);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(695);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(696);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(697);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(962);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(963);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(699);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(1395);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(1397);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(1398);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(1399);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(1400);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(701);
      END_STATE();
    case 190:
      if (lookahead == '.') ADVANCE(1860);
      if (lookahead == 'a') ADVANCE(1090);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(1067);
      if (lookahead == 'f') ADVANCE(897);
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == 'm') ADVANCE(767);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(707);
      if (lookahead == 's') ADVANCE(1173);
      END_STATE();
    case 191:
      if (lookahead == '0') ADVANCE(1963);
      if (lookahead == '>') ADVANCE(1866);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1964);
      END_STATE();
    case 192:
      if (lookahead == '0') ADVANCE(1963);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1964);
      END_STATE();
    case 193:
      if (lookahead == '1') ADVANCE(246);
      if (lookahead == '3') ADVANCE(212);
      END_STATE();
    case 194:
      if (lookahead == '1') ADVANCE(247);
      if (lookahead == 'f') ADVANCE(1333);
      END_STATE();
    case 195:
      if (lookahead == '1') ADVANCE(248);
      if (lookahead == '4') ADVANCE(1641);
      if (lookahead == 'h') ADVANCE(910);
      END_STATE();
    case 196:
      if (lookahead == '1') ADVANCE(249);
      END_STATE();
    case 197:
      if (lookahead == '1') ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead == '1') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(1349);
      END_STATE();
    case 199:
      if (lookahead == '1') ADVANCE(252);
      if (lookahead == '8') ADVANCE(1836);
      END_STATE();
    case 200:
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '8') ADVANCE(1830);
      END_STATE();
    case 201:
      if (lookahead == '1') ADVANCE(254);
      if (lookahead == '8') ADVANCE(1835);
      END_STATE();
    case 202:
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(972);
      END_STATE();
    case 203:
      if (lookahead == '1') ADVANCE(256);
      if (lookahead == '8') ADVANCE(1833);
      END_STATE();
    case 204:
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '8') ADVANCE(1832);
      END_STATE();
    case 205:
      if (lookahead == '1') ADVANCE(258);
      if (lookahead == '8') ADVANCE(1834);
      END_STATE();
    case 206:
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '8') ADVANCE(1831);
      END_STATE();
    case 207:
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '8') ADVANCE(1837);
      END_STATE();
    case 208:
      if (lookahead == '1') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(1359);
      END_STATE();
    case 209:
      if (lookahead == '1') ADVANCE(262);
      END_STATE();
    case 210:
      if (lookahead == '1') ADVANCE(263);
      END_STATE();
    case 211:
      if (lookahead == '1') ADVANCE(264);
      END_STATE();
    case 212:
      if (lookahead == '2') ADVANCE(1665);
      END_STATE();
    case 213:
      if (lookahead == '2') ADVANCE(1646);
      END_STATE();
    case 214:
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 215:
      if (lookahead == '2') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(924);
      END_STATE();
    case 216:
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 217:
      if (lookahead == '2') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(926);
      END_STATE();
    case 218:
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 219:
      if (lookahead == '2') ADVANCE(473);
      END_STATE();
    case 220:
      if (lookahead == '2') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 221:
      if (lookahead == '2') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 222:
      if (lookahead == '2') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(930);
      END_STATE();
    case 223:
      if (lookahead == '2') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 224:
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(932);
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
      END_STATE();
    case 233:
      if (lookahead == '2') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(935);
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
      if (lookahead == '2') ADVANCE(503);
      END_STATE();
    case 246:
      if (lookahead == '6') ADVANCE(1664);
      END_STATE();
    case 247:
      if (lookahead == '6') ADVANCE(1626);
      END_STATE();
    case 248:
      if (lookahead == '6') ADVANCE(1642);
      END_STATE();
    case 249:
      if (lookahead == '6') ADVANCE(1625);
      END_STATE();
    case 250:
      if (lookahead == '6') ADVANCE(1644);
      END_STATE();
    case 251:
      if (lookahead == '6') ADVANCE(1629);
      END_STATE();
    case 252:
      if (lookahead == '6') ADVANCE(1828);
      END_STATE();
    case 253:
      if (lookahead == '6') ADVANCE(1822);
      END_STATE();
    case 254:
      if (lookahead == '6') ADVANCE(1827);
      END_STATE();
    case 255:
      if (lookahead == '6') ADVANCE(1645);
      END_STATE();
    case 256:
      if (lookahead == '6') ADVANCE(1825);
      END_STATE();
    case 257:
      if (lookahead == '6') ADVANCE(1824);
      END_STATE();
    case 258:
      if (lookahead == '6') ADVANCE(1826);
      END_STATE();
    case 259:
      if (lookahead == '6') ADVANCE(1823);
      END_STATE();
    case 260:
      if (lookahead == '6') ADVANCE(1829);
      END_STATE();
    case 261:
      if (lookahead == '6') ADVANCE(1632);
      END_STATE();
    case 262:
      if (lookahead == '6') ADVANCE(1628);
      END_STATE();
    case 263:
      if (lookahead == '6') ADVANCE(1648);
      END_STATE();
    case 264:
      if (lookahead == '6') ADVANCE(1631);
      END_STATE();
    case 265:
      if (lookahead == '8') ADVANCE(1838);
      END_STATE();
    case 266:
      if (lookahead == '8') ADVANCE(1839);
      END_STATE();
    case 267:
      if (lookahead == '8') ADVANCE(1854);
      END_STATE();
    case 268:
      if (lookahead == '8') ADVANCE(1840);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(1899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(1908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(1935);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'd') ADVANCE(1905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'd') ADVANCE(1914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1932);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(1926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'g') ADVANCE(357);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(1911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'm') ADVANCE(1938);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(1948);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(282);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(1941);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 's') ADVANCE(1944);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(1929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(1920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 365:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 366:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 367:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 368:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 369:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 370:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 371:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 372:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 373:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 374:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 375:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == 'y') ADVANCE(333);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 376:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 377:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 378:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 379:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'v') ADVANCE(298);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 380:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'v') ADVANCE(276);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 381:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'z') ADVANCE(306);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      if (lookahead == ';') ADVANCE(1870);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      if (lookahead == '>') ADVANCE(1866);
      END_STATE();
    case 385:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 386:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1587);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1868);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(1869);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(1661);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(1002);
      if (lookahead == 'i') ADVANCE(1007);
      if (lookahead == 'l') ADVANCE(1211);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == 'u') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1954);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(1476);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(1476);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == 'o') ADVANCE(1264);
      if (lookahead == 'u') ADVANCE(1009);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(1473);
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(1584);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(1347);
      if (lookahead == 'u') ADVANCE(1408);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(1585);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(1325);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(1086);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(1086);
      if (lookahead == 'u') ADVANCE(710);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(1058);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(1162);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(1351);
      if (lookahead == 'i') ADVANCE(1145);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(1141);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(1279);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(1280);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1524);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(1282);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(1000);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(1283);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(1073);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(1074);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(1075);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(1426);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(1076);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(1427);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(1077);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(1428);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(1078);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(1429);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(1430);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(1140);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(1436);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1437);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(1454);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(1459);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(1461);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(1588);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(1328);
      if (lookahead == 'o') ADVANCE(1038);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(1328);
      if (lookahead == 'o') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(1006);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(1388);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(1492);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(1363);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(1496);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(1513);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(1494);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(1511);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(1495);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(1392);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(1484);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(1523);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(1148);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(1143);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(1591);
      END_STATE();
    case 463:
      if (lookahead == 'a') ADVANCE(1526);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(1592);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(1528);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(1147);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(1150);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(1532);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(1151);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(1534);
      END_STATE();
    case 476:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(1152);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 479:
      if (lookahead == 'a') ADVANCE(1153);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(665);
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
      if (lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(673);
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
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 504:
      if (lookahead == 'a') ADVANCE(1164);
      if (lookahead == 'f') ADVANCE(938);
      if (lookahead == 'm') ADVANCE(791);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == 's') ADVANCE(1269);
      END_STATE();
    case 505:
      if (lookahead == 'a') ADVANCE(1089);
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == 'f') ADVANCE(897);
      if (lookahead == 'm') ADVANCE(767);
      END_STATE();
    case 506:
      if (lookahead == 'a') ADVANCE(1372);
      END_STATE();
    case 507:
      if (lookahead == 'a') ADVANCE(1165);
      END_STATE();
    case 508:
      if (lookahead == 'a') ADVANCE(1373);
      END_STATE();
    case 509:
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == 'f') ADVANCE(938);
      if (lookahead == 's') ADVANCE(1542);
      END_STATE();
    case 510:
      if (lookahead == 'b') ADVANCE(1176);
      if (lookahead == 'c') ADVANCE(877);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == 'w') ADVANCE(901);
      END_STATE();
    case 511:
      if (lookahead == 'b') ADVANCE(975);
      END_STATE();
    case 512:
      if (lookahead == 'b') ADVANCE(1383);
      if (lookahead == 'd') ADVANCE(608);
      if (lookahead == 'g') ADVANCE(771);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead == 'p') ADVANCE(1544);
      if (lookahead == 'r') ADVANCE(1326);
      END_STATE();
    case 513:
      if (lookahead == 'b') ADVANCE(1383);
      if (lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 514:
      if (lookahead == 'b') ADVANCE(1590);
      if (lookahead == 'c') ADVANCE(884);
      if (lookahead == 'd') ADVANCE(1260);
      if (lookahead == 'f') ADVANCE(1050);
      if (lookahead == 'l') ADVANCE(1199);
      if (lookahead == 's') ADVANCE(891);
      END_STATE();
    case 515:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 516:
      if (lookahead == 'b') ADVANCE(407);
      END_STATE();
    case 517:
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(775);
      END_STATE();
    case 518:
      if (lookahead == 'b') ADVANCE(1170);
      END_STATE();
    case 519:
      if (lookahead == 'b') ADVANCE(1008);
      END_STATE();
    case 520:
      if (lookahead == 'b') ADVANCE(1012);
      END_STATE();
    case 521:
      if (lookahead == 'b') ADVANCE(1017);
      END_STATE();
    case 522:
      if (lookahead == 'b') ADVANCE(1019);
      END_STATE();
    case 523:
      if (lookahead == 'b') ADVANCE(1020);
      END_STATE();
    case 524:
      if (lookahead == 'b') ADVANCE(1021);
      END_STATE();
    case 525:
      if (lookahead == 'b') ADVANCE(1022);
      END_STATE();
    case 526:
      if (lookahead == 'b') ADVANCE(1023);
      END_STATE();
    case 527:
      if (lookahead == 'b') ADVANCE(1024);
      END_STATE();
    case 528:
      if (lookahead == 'b') ADVANCE(1025);
      END_STATE();
    case 529:
      if (lookahead == 'b') ADVANCE(1026);
      END_STATE();
    case 530:
      if (lookahead == 'b') ADVANCE(1027);
      END_STATE();
    case 531:
      if (lookahead == 'b') ADVANCE(1028);
      END_STATE();
    case 532:
      if (lookahead == 'b') ADVANCE(1238);
      if (lookahead == 'c') ADVANCE(879);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == 's') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(939);
      END_STATE();
    case 533:
      if (lookahead == 'b') ADVANCE(976);
      END_STATE();
    case 534:
      if (lookahead == 'b') ADVANCE(1241);
      if (lookahead == 'c') ADVANCE(880);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == 'q') ADVANCE(1552);
      if (lookahead == 's') ADVANCE(887);
      if (lookahead == 'w') ADVANCE(945);
      END_STATE();
    case 535:
      if (lookahead == 'b') ADVANCE(977);
      END_STATE();
    case 536:
      if (lookahead == 'b') ADVANCE(1242);
      if (lookahead == 'c') ADVANCE(881);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == 'q') ADVANCE(1553);
      if (lookahead == 's') ADVANCE(888);
      if (lookahead == 'w') ADVANCE(948);
      END_STATE();
    case 537:
      if (lookahead == 'b') ADVANCE(978);
      END_STATE();
    case 538:
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'c') ADVANCE(882);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 'w') ADVANCE(953);
      END_STATE();
    case 539:
      if (lookahead == 'b') ADVANCE(979);
      END_STATE();
    case 540:
      if (lookahead == 'b') ADVANCE(1244);
      if (lookahead == 'c') ADVANCE(883);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 's') ADVANCE(890);
      if (lookahead == 'w') ADVANCE(955);
      END_STATE();
    case 541:
      if (lookahead == 'b') ADVANCE(980);
      END_STATE();
    case 542:
      if (lookahead == 'b') ADVANCE(182);
      END_STATE();
    case 543:
      if (lookahead == 'b') ADVANCE(981);
      END_STATE();
    case 544:
      if (lookahead == 'b') ADVANCE(982);
      END_STATE();
    case 545:
      if (lookahead == 'b') ADVANCE(983);
      END_STATE();
    case 546:
      if (lookahead == 'b') ADVANCE(507);
      END_STATE();
    case 547:
      if (lookahead == 'c') ADVANCE(1004);
      if (lookahead == 'i') ADVANCE(1087);
      END_STATE();
    case 548:
      if (lookahead == 'c') ADVANCE(993);
      END_STATE();
    case 549:
      if (lookahead == 'c') ADVANCE(1897);
      END_STATE();
    case 550:
      if (lookahead == 'c') ADVANCE(1906);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(1933);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(1730);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(992);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 555:
      if (lookahead == 'c') ADVANCE(984);
      END_STATE();
    case 556:
      if (lookahead == 'c') ADVANCE(985);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(861);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(986);
      END_STATE();
    case 559:
      if (lookahead == 'c') ADVANCE(987);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(1030);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(988);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 563:
      if (lookahead == 'c') ADVANCE(989);
      END_STATE();
    case 564:
      if (lookahead == 'c') ADVANCE(863);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(990);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(864);
      END_STATE();
    case 567:
      if (lookahead == 'c') ADVANCE(991);
      END_STATE();
    case 568:
      if (lookahead == 'c') ADVANCE(865);
      END_STATE();
    case 569:
      if (lookahead == 'c') ADVANCE(866);
      END_STATE();
    case 570:
      if (lookahead == 'c') ADVANCE(867);
      END_STATE();
    case 571:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 572:
      if (lookahead == 'c') ADVANCE(868);
      END_STATE();
    case 573:
      if (lookahead == 'c') ADVANCE(1039);
      if (lookahead == 's') ADVANCE(1490);
      if (lookahead == 'w') ADVANCE(958);
      END_STATE();
    case 574:
      if (lookahead == 'c') ADVANCE(719);
      END_STATE();
    case 575:
      if (lookahead == 'c') ADVANCE(785);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(1423);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 578:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 579:
      if (lookahead == 'c') ADVANCE(1443);
      END_STATE();
    case 580:
      if (lookahead == 'c') ADVANCE(1444);
      END_STATE();
    case 581:
      if (lookahead == 'c') ADVANCE(748);
      END_STATE();
    case 582:
      if (lookahead == 'c') ADVANCE(1445);
      END_STATE();
    case 583:
      if (lookahead == 'c') ADVANCE(1446);
      END_STATE();
    case 584:
      if (lookahead == 'c') ADVANCE(1448);
      END_STATE();
    case 585:
      if (lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 586:
      if (lookahead == 'c') ADVANCE(1450);
      END_STATE();
    case 587:
      if (lookahead == 'c') ADVANCE(1452);
      END_STATE();
    case 588:
      if (lookahead == 'c') ADVANCE(1458);
      END_STATE();
    case 589:
      if (lookahead == 'c') ADVANCE(1460);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(1462);
      END_STATE();
    case 591:
      if (lookahead == 'c') ADVANCE(1548);
      END_STATE();
    case 592:
      if (lookahead == 'c') ADVANCE(1499);
      END_STATE();
    case 593:
      if (lookahead == 'c') ADVANCE(1515);
      END_STATE();
    case 594:
      if (lookahead == 'c') ADVANCE(886);
      END_STATE();
    case 595:
      if (lookahead == 'c') ADVANCE(995);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 596:
      if (lookahead == 'c') ADVANCE(996);
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 597:
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(1054);
      END_STATE();
    case 598:
      if (lookahead == 'd') ADVANCE(1612);
      END_STATE();
    case 599:
      if (lookahead == 'd') ADVANCE(1605);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(1608);
      END_STATE();
    case 601:
      if (lookahead == 'd') ADVANCE(1903);
      END_STATE();
    case 602:
      if (lookahead == 'd') ADVANCE(1607);
      END_STATE();
    case 603:
      if (lookahead == 'd') ADVANCE(1609);
      END_STATE();
    case 604:
      if (lookahead == 'd') ADVANCE(1637);
      END_STATE();
    case 605:
      if (lookahead == 'd') ADVANCE(1912);
      END_STATE();
    case 606:
      if (lookahead == 'd') ADVANCE(1945);
      END_STATE();
    case 607:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 608:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 609:
      if (lookahead == 'd') ADVANCE(848);
      END_STATE();
    case 610:
      if (lookahead == 'd') ADVANCE(1248);
      if (lookahead == 'f') ADVANCE(1040);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'l') ADVANCE(1180);
      END_STATE();
    case 611:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 612:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 613:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 614:
      if (lookahead == 'd') ADVANCE(914);
      if (lookahead == 'i') ADVANCE(1154);
      if (lookahead == 's') ADVANCE(1533);
      if (lookahead == 'v') ADVANCE(957);
      END_STATE();
    case 615:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 616:
      if (lookahead == 'd') ADVANCE(1287);
      END_STATE();
    case 617:
      if (lookahead == 'd') ADVANCE(1288);
      END_STATE();
    case 618:
      if (lookahead == 'd') ADVANCE(1289);
      END_STATE();
    case 619:
      if (lookahead == 'd') ADVANCE(1290);
      END_STATE();
    case 620:
      if (lookahead == 'd') ADVANCE(1292);
      END_STATE();
    case 621:
      if (lookahead == 'd') ADVANCE(724);
      END_STATE();
    case 622:
      if (lookahead == 'd') ADVANCE(1293);
      END_STATE();
    case 623:
      if (lookahead == 'd') ADVANCE(1294);
      END_STATE();
    case 624:
      if (lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 625:
      if (lookahead == 'd') ADVANCE(1295);
      END_STATE();
    case 626:
      if (lookahead == 'd') ADVANCE(1296);
      END_STATE();
    case 627:
      if (lookahead == 'd') ADVANCE(1297);
      END_STATE();
    case 628:
      if (lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 629:
      if (lookahead == 'd') ADVANCE(1298);
      END_STATE();
    case 630:
      if (lookahead == 'd') ADVANCE(1299);
      END_STATE();
    case 631:
      if (lookahead == 'd') ADVANCE(1300);
      END_STATE();
    case 632:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 633:
      if (lookahead == 'd') ADVANCE(1301);
      END_STATE();
    case 634:
      if (lookahead == 'd') ADVANCE(1302);
      END_STATE();
    case 635:
      if (lookahead == 'd') ADVANCE(1303);
      END_STATE();
    case 636:
      if (lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 637:
      if (lookahead == 'd') ADVANCE(1304);
      END_STATE();
    case 638:
      if (lookahead == 'd') ADVANCE(1305);
      END_STATE();
    case 639:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 640:
      if (lookahead == 'd') ADVANCE(1306);
      END_STATE();
    case 641:
      if (lookahead == 'd') ADVANCE(1307);
      END_STATE();
    case 642:
      if (lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 643:
      if (lookahead == 'd') ADVANCE(1308);
      END_STATE();
    case 644:
      if (lookahead == 'd') ADVANCE(1309);
      END_STATE();
    case 645:
      if (lookahead == 'd') ADVANCE(1310);
      END_STATE();
    case 646:
      if (lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 647:
      if (lookahead == 'd') ADVANCE(1311);
      END_STATE();
    case 648:
      if (lookahead == 'd') ADVANCE(1312);
      END_STATE();
    case 649:
      if (lookahead == 'd') ADVANCE(1313);
      END_STATE();
    case 650:
      if (lookahead == 'd') ADVANCE(1314);
      END_STATE();
    case 651:
      if (lookahead == 'd') ADVANCE(1315);
      END_STATE();
    case 652:
      if (lookahead == 'd') ADVANCE(1316);
      END_STATE();
    case 653:
      if (lookahead == 'd') ADVANCE(1317);
      END_STATE();
    case 654:
      if (lookahead == 'd') ADVANCE(1318);
      END_STATE();
    case 655:
      if (lookahead == 'd') ADVANCE(1319);
      END_STATE();
    case 656:
      if (lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 657:
      if (lookahead == 'd') ADVANCE(754);
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
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 662:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 663:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 664:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 665:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 666:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 667:
      if (lookahead == 'd') ADVANCE(627);
      END_STATE();
    case 668:
      if (lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 670:
      if (lookahead == 'd') ADVANCE(631);
      END_STATE();
    case 671:
      if (lookahead == 'd') ADVANCE(633);
      END_STATE();
    case 672:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 674:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 675:
      if (lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 676:
      if (lookahead == 'd') ADVANCE(637);
      END_STATE();
    case 677:
      if (lookahead == 'd') ADVANCE(638);
      END_STATE();
    case 678:
      if (lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 679:
      if (lookahead == 'd') ADVANCE(641);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(643);
      END_STATE();
    case 681:
      if (lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 682:
      if (lookahead == 'd') ADVANCE(645);
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
      if (lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 692:
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(1185);
      END_STATE();
    case 693:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 694:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 695:
      if (lookahead == 'd') ADVANCE(1250);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'i') ADVANCE(1118);
      if (lookahead == 'l') ADVANCE(1186);
      END_STATE();
    case 696:
      if (lookahead == 'd') ADVANCE(1252);
      if (lookahead == 'f') ADVANCE(1044);
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead == 'l') ADVANCE(1187);
      END_STATE();
    case 697:
      if (lookahead == 'd') ADVANCE(1254);
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'i') ADVANCE(1121);
      if (lookahead == 'l') ADVANCE(1189);
      END_STATE();
    case 698:
      if (lookahead == 'd') ADVANCE(1256);
      if (lookahead == 'f') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == 'l') ADVANCE(1192);
      END_STATE();
    case 699:
      if (lookahead == 'd') ADVANCE(1257);
      if (lookahead == 'f') ADVANCE(1047);
      if (lookahead == 'i') ADVANCE(1126);
      if (lookahead == 'l') ADVANCE(1195);
      END_STATE();
    case 700:
      if (lookahead == 'd') ADVANCE(1258);
      if (lookahead == 'f') ADVANCE(1048);
      END_STATE();
    case 701:
      if (lookahead == 'd') ADVANCE(1259);
      if (lookahead == 'f') ADVANCE(1049);
      END_STATE();
    case 702:
      if (lookahead == 'd') ADVANCE(1261);
      if (lookahead == 'f') ADVANCE(1051);
      if (lookahead == 'i') ADVANCE(1134);
      END_STATE();
    case 703:
      if (lookahead == 'd') ADVANCE(1262);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == 'l') ADVANCE(1201);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1540);
      END_STATE();
    case 706:
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == 's') ADVANCE(1550);
      if (lookahead == 'u') ADVANCE(1139);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 708:
      if (lookahead == 'e') ADVANCE(1270);
      if (lookahead == 'g') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(1624);
      END_STATE();
    case 710:
      if (lookahead == 'e') ADVANCE(1967);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(1855);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(1676);
      if (lookahead == 't') ADVANCE(1677);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(1678);
      if (lookahead == 't') ADVANCE(1675);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(1674);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(1930);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(1583);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead == 'w') ADVANCE(951);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(1921);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(1603);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(1900);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(1613);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(1689);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(1686);
      END_STATE();
    case 725:
      if (lookahead == 'e') ADVANCE(1696);
      END_STATE();
    case 726:
      if (lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(1703);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(1924);
      END_STATE();
    case 730:
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(1707);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(1627);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(1717);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(1724);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(1721);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(1785);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(1647);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(1742);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(1789);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(1786);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(1671);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(1670);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(1755);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(1639);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(1657);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(1745);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(1748);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(1731);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(1733);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(1734);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(1735);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(1732);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(1660);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(1736);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(1850);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(1156);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(1577);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(1464);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(1277);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(1278);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(1385);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(1331);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(1286);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(1112);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(1291);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(1097);
      if (lookahead == 's') ADVANCE(1571);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(1517);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 821:
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(774);
      if (lookahead == 'n') ADVANCE(1387);
      if (lookahead == 'p') ADVANCE(1546);
      END_STATE();
    case 822:
      if (lookahead == 'f') ADVANCE(1655);
      END_STATE();
    case 823:
      if (lookahead == 'f') ADVANCE(450);
      END_STATE();
    case 824:
      if (lookahead == 'f') ADVANCE(456);
      END_STATE();
    case 825:
      if (lookahead == 'f') ADVANCE(1052);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == 'l') ADVANCE(1202);
      END_STATE();
    case 826:
      if (lookahead == 'g') ADVANCE(1775);
      END_STATE();
    case 827:
      if (lookahead == 'g') ADVANCE(1769);
      END_STATE();
    case 828:
      if (lookahead == 'g') ADVANCE(1774);
      END_STATE();
    case 829:
      if (lookahead == 'g') ADVANCE(1672);
      END_STATE();
    case 830:
      if (lookahead == 'g') ADVANCE(1772);
      END_STATE();
    case 831:
      if (lookahead == 'g') ADVANCE(1771);
      END_STATE();
    case 832:
      if (lookahead == 'g') ADVANCE(1739);
      END_STATE();
    case 833:
      if (lookahead == 'g') ADVANCE(1740);
      END_STATE();
    case 834:
      if (lookahead == 'g') ADVANCE(1773);
      END_STATE();
    case 835:
      if (lookahead == 'g') ADVANCE(1777);
      END_STATE();
    case 836:
      if (lookahead == 'g') ADVANCE(1778);
      END_STATE();
    case 837:
      if (lookahead == 'g') ADVANCE(1770);
      END_STATE();
    case 838:
      if (lookahead == 'g') ADVANCE(1776);
      END_STATE();
    case 839:
      if (lookahead == 'g') ADVANCE(1779);
      END_STATE();
    case 840:
      if (lookahead == 'g') ADVANCE(1743);
      END_STATE();
    case 841:
      if (lookahead == 'g') ADVANCE(1649);
      END_STATE();
    case 842:
      if (lookahead == 'g') ADVANCE(1750);
      END_STATE();
    case 843:
      if (lookahead == 'g') ADVANCE(1753);
      END_STATE();
    case 844:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 845:
      if (lookahead == 'g') ADVANCE(875);
      END_STATE();
    case 846:
      if (lookahead == 'g') ADVANCE(1377);
      END_STATE();
    case 847:
      if (lookahead == 'g') ADVANCE(942);
      END_STATE();
    case 848:
      if (lookahead == 'g') ADVANCE(716);
      END_STATE();
    case 849:
      if (lookahead == 'g') ADVANCE(1479);
      END_STATE();
    case 850:
      if (lookahead == 'g') ADVANCE(755);
      END_STATE();
    case 851:
      if (lookahead == 'g') ADVANCE(756);
      END_STATE();
    case 852:
      if (lookahead == 'g') ADVANCE(757);
      END_STATE();
    case 853:
      if (lookahead == 'g') ADVANCE(758);
      END_STATE();
    case 854:
      if (lookahead == 'g') ADVANCE(759);
      END_STATE();
    case 855:
      if (lookahead == 'g') ADVANCE(760);
      END_STATE();
    case 856:
      if (lookahead == 'g') ADVANCE(761);
      END_STATE();
    case 857:
      if (lookahead == 'g') ADVANCE(762);
      END_STATE();
    case 858:
      if (lookahead == 'g') ADVANCE(778);
      if (lookahead == 'h') ADVANCE(1043);
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'u') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(1069);
      END_STATE();
    case 859:
      if (lookahead == 'g') ADVANCE(876);
      END_STATE();
    case 860:
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 861:
      if (lookahead == 'h') ADVANCE(1858);
      END_STATE();
    case 862:
      if (lookahead == 'h') ADVANCE(1656);
      END_STATE();
    case 863:
      if (lookahead == 'h') ADVANCE(1666);
      END_STATE();
    case 864:
      if (lookahead == 'h') ADVANCE(1667);
      END_STATE();
    case 865:
      if (lookahead == 'h') ADVANCE(1863);
      END_STATE();
    case 866:
      if (lookahead == 'h') ADVANCE(1865);
      END_STATE();
    case 867:
      if (lookahead == 'h') ADVANCE(1864);
      END_STATE();
    case 868:
      if (lookahead == 'h') ADVANCE(1867);
      END_STATE();
    case 869:
      if (lookahead == 'h') ADVANCE(1327);
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 870:
      if (lookahead == 'h') ADVANCE(766);
      if (lookahead == 'm') ADVANCE(1263);
      if (lookahead == 'o') ADVANCE(1138);
      END_STATE();
    case 871:
      if (lookahead == 'h') ADVANCE(1174);
      END_STATE();
    case 872:
      if (lookahead == 'h') ADVANCE(1181);
      END_STATE();
    case 873:
      if (lookahead == 'h') ADVANCE(1355);
      END_STATE();
    case 874:
      if (lookahead == 'h') ADVANCE(1177);
      END_STATE();
    case 875:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 876:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 877:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 878:
      if (lookahead == 'h') ADVANCE(803);
      END_STATE();
    case 879:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 880:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 881:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 882:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 883:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 884:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 885:
      if (lookahead == 'h') ADVANCE(1213);
      END_STATE();
    case 886:
      if (lookahead == 'h') ADVANCE(1356);
      END_STATE();
    case 887:
      if (lookahead == 'h') ADVANCE(1215);
      END_STATE();
    case 888:
      if (lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 889:
      if (lookahead == 'h') ADVANCE(1219);
      END_STATE();
    case 890:
      if (lookahead == 'h') ADVANCE(1222);
      END_STATE();
    case 891:
      if (lookahead == 'h') ADVANCE(1226);
      END_STATE();
    case 892:
      if (lookahead == 'h') ADVANCE(1368);
      END_STATE();
    case 893:
      if (lookahead == 'i') ADVANCE(1593);
      END_STATE();
    case 894:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 895:
      if (lookahead == 'i') ADVANCE(1573);
      if (lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 896:
      if (lookahead == 'i') ADVANCE(1572);
      END_STATE();
    case 897:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 898:
      if (lookahead == 'i') ADVANCE(1062);
      END_STATE();
    case 899:
      if (lookahead == 'i') ADVANCE(1003);
      END_STATE();
    case 900:
      if (lookahead == 'i') ADVANCE(1094);
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 901:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 902:
      if (lookahead == 'i') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(1178);
      END_STATE();
    case 903:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 904:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 905:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 906:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 907:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 908:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 909:
      if (lookahead == 'i') ADVANCE(1409);
      END_STATE();
    case 910:
      if (lookahead == 'i') ADVANCE(845);
      END_STATE();
    case 911:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 912:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 913:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 914:
      if (lookahead == 'i') ADVANCE(1354);
      END_STATE();
    case 915:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 916:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 917:
      if (lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 918:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 919:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 920:
      if (lookahead == 'i') ADVANCE(1144);
      END_STATE();
    case 921:
      if (lookahead == 'i') ADVANCE(1115);
      END_STATE();
    case 922:
      if (lookahead == 'i') ADVANCE(1092);
      END_STATE();
    case 923:
      if (lookahead == 'i') ADVANCE(1440);
      END_STATE();
    case 924:
      if (lookahead == 'i') ADVANCE(1465);
      END_STATE();
    case 925:
      if (lookahead == 'i') ADVANCE(1467);
      END_STATE();
    case 926:
      if (lookahead == 'i') ADVANCE(1469);
      END_STATE();
    case 927:
      if (lookahead == 'i') ADVANCE(1472);
      END_STATE();
    case 928:
      if (lookahead == 'i') ADVANCE(1475);
      END_STATE();
    case 929:
      if (lookahead == 'i') ADVANCE(1451);
      END_STATE();
    case 930:
      if (lookahead == 'i') ADVANCE(1466);
      END_STATE();
    case 931:
      if (lookahead == 'i') ADVANCE(1478);
      END_STATE();
    case 932:
      if (lookahead == 'i') ADVANCE(1480);
      END_STATE();
    case 933:
      if (lookahead == 'i') ADVANCE(1456);
      END_STATE();
    case 934:
      if (lookahead == 'i') ADVANCE(1468);
      END_STATE();
    case 935:
      if (lookahead == 'i') ADVANCE(1470);
      END_STATE();
    case 936:
      if (lookahead == 'i') ADVANCE(1594);
      END_STATE();
    case 937:
      if (lookahead == 'i') ADVANCE(1487);
      END_STATE();
    case 938:
      if (lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 939:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 940:
      if (lookahead == 'i') ADVANCE(1509);
      END_STATE();
    case 941:
      if (lookahead == 'i') ADVANCE(1510);
      END_STATE();
    case 942:
      if (lookahead == 'i') ADVANCE(1391);
      END_STATE();
    case 943:
      if (lookahead == 'i') ADVANCE(1488);
      END_STATE();
    case 944:
      if (lookahead == 'i') ADVANCE(1133);
      END_STATE();
    case 945:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 946:
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == 'l') ADVANCE(1182);
      END_STATE();
    case 947:
      if (lookahead == 'i') ADVANCE(1489);
      END_STATE();
    case 948:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 949:
      if (lookahead == 'i') ADVANCE(1016);
      END_STATE();
    case 950:
      if (lookahead == 'i') ADVANCE(1491);
      END_STATE();
    case 951:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 952:
      if (lookahead == 'i') ADVANCE(1497);
      END_STATE();
    case 953:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 954:
      if (lookahead == 'i') ADVANCE(1498);
      END_STATE();
    case 955:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 956:
      if (lookahead == 'i') ADVANCE(1122);
      if (lookahead == 'l') ADVANCE(1190);
      END_STATE();
    case 957:
      if (lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 958:
      if (lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 959:
      if (lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 960:
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'l') ADVANCE(1193);
      END_STATE();
    case 961:
      if (lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 962:
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 'l') ADVANCE(1194);
      END_STATE();
    case 963:
      if (lookahead == 'i') ADVANCE(1127);
      if (lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 964:
      if (lookahead == 'i') ADVANCE(1129);
      END_STATE();
    case 965:
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == 'l') ADVANCE(1197);
      END_STATE();
    case 966:
      if (lookahead == 'i') ADVANCE(1198);
      END_STATE();
    case 967:
      if (lookahead == 'i') ADVANCE(1200);
      END_STATE();
    case 968:
      if (lookahead == 'i') ADVANCE(1203);
      END_STATE();
    case 969:
      if (lookahead == 'i') ADVANCE(1204);
      END_STATE();
    case 970:
      if (lookahead == 'i') ADVANCE(1205);
      END_STATE();
    case 971:
      if (lookahead == 'i') ADVANCE(1206);
      END_STATE();
    case 972:
      if (lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 973:
      if (lookahead == 'i') ADVANCE(1155);
      END_STATE();
    case 974:
      if (lookahead == 'j') ADVANCE(1545);
      END_STATE();
    case 975:
      if (lookahead == 'j') ADVANCE(796);
      END_STATE();
    case 976:
      if (lookahead == 'j') ADVANCE(799);
      END_STATE();
    case 977:
      if (lookahead == 'j') ADVANCE(801);
      END_STATE();
    case 978:
      if (lookahead == 'j') ADVANCE(804);
      END_STATE();
    case 979:
      if (lookahead == 'j') ADVANCE(806);
      END_STATE();
    case 980:
      if (lookahead == 'j') ADVANCE(807);
      END_STATE();
    case 981:
      if (lookahead == 'j') ADVANCE(808);
      END_STATE();
    case 982:
      if (lookahead == 'j') ADVANCE(810);
      END_STATE();
    case 983:
      if (lookahead == 'j') ADVANCE(811);
      END_STATE();
    case 984:
      if (lookahead == 'k') ADVANCE(1843);
      END_STATE();
    case 985:
      if (lookahead == 'k') ADVANCE(1846);
      END_STATE();
    case 986:
      if (lookahead == 'k') ADVANCE(1844);
      END_STATE();
    case 987:
      if (lookahead == 'k') ADVANCE(1847);
      END_STATE();
    case 988:
      if (lookahead == 'k') ADVANCE(1845);
      END_STATE();
    case 989:
      if (lookahead == 'k') ADVANCE(1848);
      END_STATE();
    case 990:
      if (lookahead == 'k') ADVANCE(1851);
      END_STATE();
    case 991:
      if (lookahead == 'k') ADVANCE(1849);
      END_STATE();
    case 992:
      if (lookahead == 'k') ADVANCE(163);
      END_STATE();
    case 993:
      if (lookahead == 'k') ADVANCE(795);
      END_STATE();
    case 994:
      if (lookahead == 'k') ADVANCE(780);
      END_STATE();
    case 995:
      if (lookahead == 'k') ADVANCE(817);
      END_STATE();
    case 996:
      if (lookahead == 'k') ADVANCE(820);
      END_STATE();
    case 997:
      if (lookahead == 'l') ADVANCE(1971);
      END_STATE();
    case 998:
      if (lookahead == 'l') ADVANCE(1909);
      END_STATE();
    case 999:
      if (lookahead == 'l') ADVANCE(1862);
      END_STATE();
    case 1000:
      if (lookahead == 'l') ADVANCE(1727);
      END_STATE();
    case 1001:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 1002:
      if (lookahead == 'l') ADVANCE(1386);
      END_STATE();
    case 1003:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 1004:
      if (lookahead == 'l') ADVANCE(973);
      END_STATE();
    case 1005:
      if (lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 1006:
      if (lookahead == 'l') ADVANCE(1376);
      END_STATE();
    case 1007:
      if (lookahead == 'l') ADVANCE(1001);
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 1008:
      if (lookahead == 'l') ADVANCE(903);
      END_STATE();
    case 1009:
      if (lookahead == 'l') ADVANCE(997);
      END_STATE();
    case 1010:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 1011:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 1012:
      if (lookahead == 'l') ADVANCE(814);
      END_STATE();
    case 1013:
      if (lookahead == 'l') ADVANCE(999);
      END_STATE();
    case 1014:
      if (lookahead == 'l') ADVANCE(944);
      END_STATE();
    case 1015:
      if (lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 1016:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 1017:
      if (lookahead == 'l') ADVANCE(737);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(784);
      END_STATE();
    case 1019:
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 1020:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 1021:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 1022:
      if (lookahead == 'l') ADVANCE(742);
      END_STATE();
    case 1023:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 1024:
      if (lookahead == 'l') ADVANCE(744);
      END_STATE();
    case 1025:
      if (lookahead == 'l') ADVANCE(745);
      END_STATE();
    case 1026:
      if (lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 1027:
      if (lookahead == 'l') ADVANCE(751);
      END_STATE();
    case 1028:
      if (lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 1029:
      if (lookahead == 'l') ADVANCE(1449);
      END_STATE();
    case 1030:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 1031:
      if (lookahead == 'l') ADVANCE(794);
      END_STATE();
    case 1032:
      if (lookahead == 'l') ADVANCE(797);
      END_STATE();
    case 1033:
      if (lookahead == 'l') ADVANCE(800);
      END_STATE();
    case 1034:
      if (lookahead == 'l') ADVANCE(1184);
      END_STATE();
    case 1035:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 1036:
      if (lookahead == 'l') ADVANCE(805);
      END_STATE();
    case 1037:
      if (lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 1038:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 1039:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 1040:
      if (lookahead == 'l') ADVANCE(1216);
      END_STATE();
    case 1041:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 1042:
      if (lookahead == 'l') ADVANCE(1218);
      END_STATE();
    case 1043:
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 1044:
      if (lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 1045:
      if (lookahead == 'l') ADVANCE(1223);
      END_STATE();
    case 1046:
      if (lookahead == 'l') ADVANCE(1225);
      END_STATE();
    case 1047:
      if (lookahead == 'l') ADVANCE(1227);
      END_STATE();
    case 1048:
      if (lookahead == 'l') ADVANCE(1231);
      END_STATE();
    case 1049:
      if (lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1050:
      if (lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 1051:
      if (lookahead == 'l') ADVANCE(1234);
      END_STATE();
    case 1052:
      if (lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 1053:
      if (lookahead == 'm') ADVANCE(1936);
      END_STATE();
    case 1054:
      if (lookahead == 'm') ADVANCE(1950);
      END_STATE();
    case 1055:
      if (lookahead == 'm') ADVANCE(1618);
      END_STATE();
    case 1056:
      if (lookahead == 'm') ADVANCE(1611);
      END_STATE();
    case 1057:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 1058:
      if (lookahead == 'm') ADVANCE(1619);
      END_STATE();
    case 1059:
      if (lookahead == 'm') ADVANCE(1265);
      END_STATE();
    case 1060:
      if (lookahead == 'm') ADVANCE(1266);
      END_STATE();
    case 1061:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 1062:
      if (lookahead == 'm') ADVANCE(721);
      END_STATE();
    case 1063:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 1064:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 1065:
      if (lookahead == 'm') ADVANCE(813);
      END_STATE();
    case 1066:
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 't') ADVANCE(1543);
      END_STATE();
    case 1067:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 1068:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 1069:
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 's') ADVANCE(1485);
      END_STATE();
    case 1070:
      if (lookahead == 'n') ADVANCE(1638);
      END_STATE();
    case 1071:
      if (lookahead == 'n') ADVANCE(1946);
      END_STATE();
    case 1072:
      if (lookahead == 'n') ADVANCE(1610);
      END_STATE();
    case 1073:
      if (lookahead == 'n') ADVANCE(1688);
      END_STATE();
    case 1074:
      if (lookahead == 'n') ADVANCE(1695);
      END_STATE();
    case 1075:
      if (lookahead == 'n') ADVANCE(1702);
      END_STATE();
    case 1076:
      if (lookahead == 'n') ADVANCE(1709);
      END_STATE();
    case 1077:
      if (lookahead == 'n') ADVANCE(1716);
      END_STATE();
    case 1078:
      if (lookahead == 'n') ADVANCE(1723);
      END_STATE();
    case 1079:
      if (lookahead == 'n') ADVANCE(1616);
      END_STATE();
    case 1080:
      if (lookahead == 'n') ADVANCE(1636);
      END_STATE();
    case 1081:
      if (lookahead == 'n') ADVANCE(1615);
      END_STATE();
    case 1082:
      if (lookahead == 'n') ADVANCE(1617);
      END_STATE();
    case 1083:
      if (lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 1084:
      if (lookahead == 'n') ADVANCE(1538);
      END_STATE();
    case 1085:
      if (lookahead == 'n') ADVANCE(1538);
      if (lookahead == 'x') ADVANCE(768);
      END_STATE();
    case 1086:
      if (lookahead == 'n') ADVANCE(1394);
      END_STATE();
    case 1087:
      if (lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 1088:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 1089:
      if (lookahead == 'n') ADVANCE(1157);
      END_STATE();
    case 1090:
      if (lookahead == 'n') ADVANCE(1157);
      if (lookahead == 'r') ADVANCE(1348);
      END_STATE();
    case 1091:
      if (lookahead == 'n') ADVANCE(941);
      if (lookahead == 'v') ADVANCE(709);
      END_STATE();
    case 1092:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 1093:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 1094:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 1095:
      if (lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 1096:
      if (lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 1097:
      if (lookahead == 'n') ADVANCE(1539);
      END_STATE();
    case 1098:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 1099:
      if (lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 1100:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 1101:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 1102:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 1103:
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 1104:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 1105:
      if (lookahead == 'n') ADVANCE(607);
      END_STATE();
    case 1106:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 1107:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 1108:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 1109:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 1110:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 1111:
      if (lookahead == 'n') ADVANCE(1411);
      END_STATE();
    case 1112:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 1113:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 1114:
      if (lookahead == 'n') ADVANCE(1412);
      END_STATE();
    case 1115:
      if (lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 1116:
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 1117:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 1118:
      if (lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 1119:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 1120:
      if (lookahead == 'n') ADVANCE(1415);
      END_STATE();
    case 1121:
      if (lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1122:
      if (lookahead == 'n') ADVANCE(1417);
      END_STATE();
    case 1123:
      if (lookahead == 'n') ADVANCE(1418);
      END_STATE();
    case 1124:
      if (lookahead == 'n') ADVANCE(1419);
      END_STATE();
    case 1125:
      if (lookahead == 'n') ADVANCE(1420);
      END_STATE();
    case 1126:
      if (lookahead == 'n') ADVANCE(1421);
      END_STATE();
    case 1127:
      if (lookahead == 'n') ADVANCE(1422);
      END_STATE();
    case 1128:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 1129:
      if (lookahead == 'n') ADVANCE(1424);
      END_STATE();
    case 1130:
      if (lookahead == 'n') ADVANCE(1425);
      END_STATE();
    case 1131:
      if (lookahead == 'n') ADVANCE(1432);
      END_STATE();
    case 1132:
      if (lookahead == 'n') ADVANCE(1486);
      END_STATE();
    case 1133:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 1134:
      if (lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 1135:
      if (lookahead == 'n') ADVANCE(1453);
      END_STATE();
    case 1136:
      if (lookahead == 'n') ADVANCE(1457);
      END_STATE();
    case 1137:
      if (lookahead == 'n') ADVANCE(1185);
      END_STATE();
    case 1138:
      if (lookahead == 'n') ADVANCE(1389);
      END_STATE();
    case 1139:
      if (lookahead == 'n') ADVANCE(1482);
      END_STATE();
    case 1140:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 1141:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 1142:
      if (lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 1143:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 1144:
      if (lookahead == 'n') ADVANCE(1014);
      END_STATE();
    case 1145:
      if (lookahead == 'n') ADVANCE(1396);
      END_STATE();
    case 1146:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 1147:
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 1148:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 1149:
      if (lookahead == 'n') ADVANCE(1393);
      END_STATE();
    case 1150:
      if (lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 1151:
      if (lookahead == 'n') ADVANCE(855);
      END_STATE();
    case 1152:
      if (lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 1153:
      if (lookahead == 'n') ADVANCE(857);
      END_STATE();
    case 1154:
      if (lookahead == 'n') ADVANCE(1507);
      END_STATE();
    case 1155:
      if (lookahead == 'n') ADVANCE(940);
      END_STATE();
    case 1156:
      if (lookahead == 'n') ADVANCE(1520);
      if (lookahead == 'x') ADVANCE(933);
      END_STATE();
    case 1157:
      if (lookahead == 'n') ADVANCE(1249);
      END_STATE();
    case 1158:
      if (lookahead == 'n') ADVANCE(1537);
      END_STATE();
    case 1159:
      if (lookahead == 'n') ADVANCE(1251);
      END_STATE();
    case 1160:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 1161:
      if (lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 1162:
      if (lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 1163:
      if (lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 1164:
      if (lookahead == 'n') ADVANCE(1160);
      if (lookahead == 'r') ADVANCE(1358);
      END_STATE();
    case 1165:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 1166:
      if (lookahead == 'o') ADVANCE(1471);
      END_STATE();
    case 1167:
      if (lookahead == 'o') ADVANCE(1091);
      if (lookahead == 'u') ADVANCE(1041);
      END_STATE();
    case 1168:
      if (lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 1169:
      if (lookahead == 'o') ADVANCE(1575);
      END_STATE();
    case 1170:
      if (lookahead == 'o') ADVANCE(1650);
      END_STATE();
    case 1171:
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 1172:
      if (lookahead == 'o') ADVANCE(1083);
      END_STATE();
    case 1173:
      if (lookahead == 'o') ADVANCE(1541);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 1174:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 1175:
      if (lookahead == 'o') ADVANCE(1057);
      END_STATE();
    case 1176:
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == 'y') ADVANCE(1500);
      END_STATE();
    case 1177:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 1178:
      if (lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 1179:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 1180:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 1181:
      if (lookahead == 'o') ADVANCE(1339);
      END_STATE();
    case 1182:
      if (lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 1183:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 1184:
      if (lookahead == 'o') ADVANCE(1096);
      END_STATE();
    case 1185:
      if (lookahead == 'o') ADVANCE(1527);
      END_STATE();
    case 1186:
      if (lookahead == 'o') ADVANCE(1098);
      END_STATE();
    case 1187:
      if (lookahead == 'o') ADVANCE(1099);
      END_STATE();
    case 1188:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 1189:
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 1190:
      if (lookahead == 'o') ADVANCE(1101);
      END_STATE();
    case 1191:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 1192:
      if (lookahead == 'o') ADVANCE(1102);
      END_STATE();
    case 1193:
      if (lookahead == 'o') ADVANCE(1103);
      END_STATE();
    case 1194:
      if (lookahead == 'o') ADVANCE(1104);
      END_STATE();
    case 1195:
      if (lookahead == 'o') ADVANCE(1106);
      END_STATE();
    case 1196:
      if (lookahead == 'o') ADVANCE(1108);
      END_STATE();
    case 1197:
      if (lookahead == 'o') ADVANCE(1110);
      END_STATE();
    case 1198:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 1199:
      if (lookahead == 'o') ADVANCE(1113);
      END_STATE();
    case 1200:
      if (lookahead == 'o') ADVANCE(1072);
      END_STATE();
    case 1201:
      if (lookahead == 'o') ADVANCE(1117);
      END_STATE();
    case 1202:
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 1203:
      if (lookahead == 'o') ADVANCE(1079);
      END_STATE();
    case 1204:
      if (lookahead == 'o') ADVANCE(1080);
      END_STATE();
    case 1205:
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 1206:
      if (lookahead == 'o') ADVANCE(1082);
      END_STATE();
    case 1207:
      if (lookahead == 'o') ADVANCE(1320);
      END_STATE();
    case 1208:
      if (lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1209:
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 1210:
      if (lookahead == 'o') ADVANCE(1107);
      END_STATE();
    case 1211:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 1212:
      if (lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 1213:
      if (lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 1214:
      if (lookahead == 'o') ADVANCE(1142);
      END_STATE();
    case 1215:
      if (lookahead == 'o') ADVANCE(1341);
      END_STATE();
    case 1216:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 1217:
      if (lookahead == 'o') ADVANCE(1342);
      END_STATE();
    case 1218:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 1219:
      if (lookahead == 'o') ADVANCE(1343);
      END_STATE();
    case 1220:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 1221:
      if (lookahead == 'o') ADVANCE(1018);
      END_STATE();
    case 1222:
      if (lookahead == 'o') ADVANCE(1344);
      END_STATE();
    case 1223:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 1224:
      if (lookahead == 'o') ADVANCE(1031);
      END_STATE();
    case 1225:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 1226:
      if (lookahead == 'o') ADVANCE(1346);
      END_STATE();
    case 1227:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 1228:
      if (lookahead == 'o') ADVANCE(1032);
      END_STATE();
    case 1229:
      if (lookahead == 'o') ADVANCE(1033);
      END_STATE();
    case 1230:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 1231:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 1232:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 1233:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 1234:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 1235:
      if (lookahead == 'o') ADVANCE(1035);
      END_STATE();
    case 1236:
      if (lookahead == 'o') ADVANCE(1036);
      END_STATE();
    case 1237:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 1238:
      if (lookahead == 'o') ADVANCE(1224);
      if (lookahead == 'y') ADVANCE(1501);
      END_STATE();
    case 1239:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 1240:
      if (lookahead == 'o') ADVANCE(1149);
      END_STATE();
    case 1241:
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'y') ADVANCE(1502);
      END_STATE();
    case 1242:
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == 'y') ADVANCE(1503);
      END_STATE();
    case 1243:
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == 'y') ADVANCE(1504);
      END_STATE();
    case 1244:
      if (lookahead == 'o') ADVANCE(1236);
      if (lookahead == 'y') ADVANCE(1505);
      END_STATE();
    case 1245:
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead == 'v') ADVANCE(1230);
      if (lookahead == 'w') ADVANCE(959);
      END_STATE();
    case 1246:
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 'w') ADVANCE(961);
      END_STATE();
    case 1247:
      if (lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1248:
      if (lookahead == 'o') ADVANCE(1560);
      END_STATE();
    case 1249:
      if (lookahead == 'o') ADVANCE(1529);
      END_STATE();
    case 1250:
      if (lookahead == 'o') ADVANCE(1561);
      END_STATE();
    case 1251:
      if (lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1252:
      if (lookahead == 'o') ADVANCE(1562);
      END_STATE();
    case 1253:
      if (lookahead == 'o') ADVANCE(1535);
      END_STATE();
    case 1254:
      if (lookahead == 'o') ADVANCE(1563);
      END_STATE();
    case 1255:
      if (lookahead == 'o') ADVANCE(1536);
      END_STATE();
    case 1256:
      if (lookahead == 'o') ADVANCE(1564);
      END_STATE();
    case 1257:
      if (lookahead == 'o') ADVANCE(1565);
      END_STATE();
    case 1258:
      if (lookahead == 'o') ADVANCE(1566);
      END_STATE();
    case 1259:
      if (lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 1260:
      if (lookahead == 'o') ADVANCE(1568);
      END_STATE();
    case 1261:
      if (lookahead == 'o') ADVANCE(1569);
      END_STATE();
    case 1262:
      if (lookahead == 'o') ADVANCE(1570);
      END_STATE();
    case 1263:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 1264:
      if (lookahead == 'p') ADVANCE(1623);
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 1265:
      if (lookahead == 'p') ADVANCE(1011);
      END_STATE();
    case 1266:
      if (lookahead == 'p') ADVANCE(1474);
      END_STATE();
    case 1267:
      if (lookahead == 'p') ADVANCE(786);
      END_STATE();
    case 1268:
      if (lookahead == 'p') ADVANCE(1530);
      END_STATE();
    case 1269:
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(546);
      END_STATE();
    case 1270:
      if (lookahead == 'q') ADVANCE(1673);
      END_STATE();
    case 1271:
      if (lookahead == 'q') ADVANCE(1554);
      END_STATE();
    case 1272:
      if (lookahead == 'q') ADVANCE(1555);
      END_STATE();
    case 1273:
      if (lookahead == 'q') ADVANCE(1556);
      END_STATE();
    case 1274:
      if (lookahead == 'q') ADVANCE(1557);
      END_STATE();
    case 1275:
      if (lookahead == 'q') ADVANCE(1558);
      END_STATE();
    case 1276:
      if (lookahead == 'q') ADVANCE(1559);
      END_STATE();
    case 1277:
      if (lookahead == 'r') ADVANCE(823);
      END_STATE();
    case 1278:
      if (lookahead == 'r') ADVANCE(1602);
      END_STATE();
    case 1279:
      if (lookahead == 'r') ADVANCE(1690);
      END_STATE();
    case 1280:
      if (lookahead == 'r') ADVANCE(1697);
      END_STATE();
    case 1281:
      if (lookahead == 'r') ADVANCE(1704);
      END_STATE();
    case 1282:
      if (lookahead == 'r') ADVANCE(1711);
      END_STATE();
    case 1283:
      if (lookahead == 'r') ADVANCE(1718);
      END_STATE();
    case 1284:
      if (lookahead == 'r') ADVANCE(1725);
      END_STATE();
    case 1285:
      if (lookahead == 'r') ADVANCE(1756);
      END_STATE();
    case 1286:
      if (lookahead == 'r') ADVANCE(1728);
      END_STATE();
    case 1287:
      if (lookahead == 'r') ADVANCE(1796);
      END_STATE();
    case 1288:
      if (lookahead == 'r') ADVANCE(1790);
      END_STATE();
    case 1289:
      if (lookahead == 'r') ADVANCE(1795);
      END_STATE();
    case 1290:
      if (lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 1291:
      if (lookahead == 'r') ADVANCE(1652);
      END_STATE();
    case 1292:
      if (lookahead == 'r') ADVANCE(1792);
      END_STATE();
    case 1293:
      if (lookahead == 'r') ADVANCE(1807);
      END_STATE();
    case 1294:
      if (lookahead == 'r') ADVANCE(1794);
      END_STATE();
    case 1295:
      if (lookahead == 'r') ADVANCE(1798);
      END_STATE();
    case 1296:
      if (lookahead == 'r') ADVANCE(1799);
      END_STATE();
    case 1297:
      if (lookahead == 'r') ADVANCE(1791);
      END_STATE();
    case 1298:
      if (lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1299:
      if (lookahead == 'r') ADVANCE(1801);
      END_STATE();
    case 1300:
      if (lookahead == 'r') ADVANCE(1806);
      END_STATE();
    case 1301:
      if (lookahead == 'r') ADVANCE(1804);
      END_STATE();
    case 1302:
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 1303:
      if (lookahead == 'r') ADVANCE(1805);
      END_STATE();
    case 1304:
      if (lookahead == 'r') ADVANCE(1809);
      END_STATE();
    case 1305:
      if (lookahead == 'r') ADVANCE(1810);
      END_STATE();
    case 1306:
      if (lookahead == 'r') ADVANCE(1802);
      END_STATE();
    case 1307:
      if (lookahead == 'r') ADVANCE(1800);
      END_STATE();
    case 1308:
      if (lookahead == 'r') ADVANCE(1808);
      END_STATE();
    case 1309:
      if (lookahead == 'r') ADVANCE(1812);
      END_STATE();
    case 1310:
      if (lookahead == 'r') ADVANCE(1815);
      END_STATE();
    case 1311:
      if (lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1312:
      if (lookahead == 'r') ADVANCE(1816);
      END_STATE();
    case 1313:
      if (lookahead == 'r') ADVANCE(1813);
      END_STATE();
    case 1314:
      if (lookahead == 'r') ADVANCE(1811);
      END_STATE();
    case 1315:
      if (lookahead == 'r') ADVANCE(1817);
      END_STATE();
    case 1316:
      if (lookahead == 'r') ADVANCE(1820);
      END_STATE();
    case 1317:
      if (lookahead == 'r') ADVANCE(1819);
      END_STATE();
    case 1318:
      if (lookahead == 'r') ADVANCE(1821);
      END_STATE();
    case 1319:
      if (lookahead == 'r') ADVANCE(1818);
      END_STATE();
    case 1320:
      if (lookahead == 'r') ADVANCE(1939);
      END_STATE();
    case 1321:
      if (lookahead == 'r') ADVANCE(894);
      END_STATE();
    case 1322:
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == 'u') ADVANCE(899);
      END_STATE();
    case 1323:
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 1324:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 1325:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 1326:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 1327:
      if (lookahead == 'r') ADVANCE(1169);
      END_STATE();
    case 1328:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 1329:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 1330:
      if (lookahead == 'r') ADVANCE(1549);
      END_STATE();
    case 1331:
      if (lookahead == 'r') ADVANCE(1378);
      END_STATE();
    case 1332:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 1333:
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1334:
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 1335:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 1336:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 1337:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 1338:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 1339:
      if (lookahead == 'r') ADVANCE(1433);
      END_STATE();
    case 1340:
      if (lookahead == 'r') ADVANCE(1434);
      END_STATE();
    case 1341:
      if (lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1342:
      if (lookahead == 'r') ADVANCE(1439);
      END_STATE();
    case 1343:
      if (lookahead == 'r') ADVANCE(1441);
      END_STATE();
    case 1344:
      if (lookahead == 'r') ADVANCE(1442);
      END_STATE();
    case 1345:
      if (lookahead == 'r') ADVANCE(1477);
      END_STATE();
    case 1346:
      if (lookahead == 'r') ADVANCE(1455);
      END_STATE();
    case 1347:
      if (lookahead == 'r') ADVANCE(1390);
      END_STATE();
    case 1348:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 1349:
      if (lookahead == 'r') ADVANCE(1212);
      END_STATE();
    case 1350:
      if (lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 1351:
      if (lookahead == 'r') ADVANCE(1335);
      END_STATE();
    case 1352:
      if (lookahead == 'r') ADVANCE(1337);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 1354:
      if (lookahead == 'r') ADVANCE(809);
      END_STATE();
    case 1355:
      if (lookahead == 'r') ADVANCE(1210);
      END_STATE();
    case 1356:
      if (lookahead == 'r') ADVANCE(1214);
      END_STATE();
    case 1357:
      if (lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 1358:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 1359:
      if (lookahead == 'r') ADVANCE(1239);
      END_STATE();
    case 1360:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 1361:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 1362:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 1363:
      if (lookahead == 'r') ADVANCE(1361);
      END_STATE();
    case 1364:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 1365:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 1366:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 1367:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 1368:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 1369:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 1370:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 1371:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 1372:
      if (lookahead == 'r') ADVANCE(1401);
      END_STATE();
    case 1373:
      if (lookahead == 'r') ADVANCE(1402);
      END_STATE();
    case 1374:
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 1375:
      if (lookahead == 's') ADVANCE(1601);
      END_STATE();
    case 1376:
      if (lookahead == 's') ADVANCE(1856);
      END_STATE();
    case 1377:
      if (lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 1378:
      if (lookahead == 's') ADVANCE(1857);
      END_STATE();
    case 1379:
      if (lookahead == 's') ADVANCE(1604);
      END_STATE();
    case 1380:
      if (lookahead == 's') ADVANCE(1651);
      END_STATE();
    case 1381:
      if (lookahead == 's') ADVANCE(1576);
      END_STATE();
    case 1382:
      if (lookahead == 's') ADVANCE(1589);
      END_STATE();
    case 1383:
      if (lookahead == 's') ADVANCE(1516);
      END_STATE();
    case 1384:
      if (lookahead == 's') ADVANCE(1375);
      END_STATE();
    case 1385:
      if (lookahead == 's') ADVANCE(1547);
      END_STATE();
    case 1386:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 1387:
      if (lookahead == 's') ADVANCE(1483);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(1209);
      END_STATE();
    case 1388:
      if (lookahead == 's') ADVANCE(1380);
      END_STATE();
    case 1389:
      if (lookahead == 's') ADVANCE(1410);
      END_STATE();
    case 1390:
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 1391:
      if (lookahead == 's') ADVANCE(1512);
      END_STATE();
    case 1392:
      if (lookahead == 's') ADVANCE(1435);
      END_STATE();
    case 1393:
      if (lookahead == 's') ADVANCE(1508);
      END_STATE();
    case 1394:
      if (lookahead == 's') ADVANCE(917);
      END_STATE();
    case 1395:
      if (lookahead == 's') ADVANCE(1578);
      END_STATE();
    case 1396:
      if (lookahead == 's') ADVANCE(1525);
      END_STATE();
    case 1397:
      if (lookahead == 's') ADVANCE(1579);
      END_STATE();
    case 1398:
      if (lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1399:
      if (lookahead == 's') ADVANCE(1581);
      END_STATE();
    case 1400:
      if (lookahead == 's') ADVANCE(1582);
      END_STATE();
    case 1401:
      if (lookahead == 's') ADVANCE(818);
      END_STATE();
    case 1402:
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 1403:
      if (lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 1404:
      if (lookahead == 't') ADVANCE(1692);
      END_STATE();
    case 1405:
      if (lookahead == 't') ADVANCE(1699);
      END_STATE();
    case 1406:
      if (lookahead == 't') ADVANCE(1706);
      END_STATE();
    case 1407:
      if (lookahead == 't') ADVANCE(1713);
      END_STATE();
    case 1408:
      if (lookahead == 't') ADVANCE(1720);
      END_STATE();
    case 1409:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 1410:
      if (lookahead == 't') ADVANCE(1643);
      END_STATE();
    case 1411:
      if (lookahead == 't') ADVANCE(1764);
      END_STATE();
    case 1412:
      if (lookahead == 't') ADVANCE(1758);
      END_STATE();
    case 1413:
      if (lookahead == 't') ADVANCE(1763);
      END_STATE();
    case 1414:
      if (lookahead == 't') ADVANCE(1761);
      END_STATE();
    case 1415:
      if (lookahead == 't') ADVANCE(1760);
      END_STATE();
    case 1416:
      if (lookahead == 't') ADVANCE(1737);
      END_STATE();
    case 1417:
      if (lookahead == 't') ADVANCE(1738);
      END_STATE();
    case 1418:
      if (lookahead == 't') ADVANCE(1762);
      END_STATE();
    case 1419:
      if (lookahead == 't') ADVANCE(1766);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(1767);
      END_STATE();
    case 1421:
      if (lookahead == 't') ADVANCE(1759);
      END_STATE();
    case 1422:
      if (lookahead == 't') ADVANCE(1765);
      END_STATE();
    case 1423:
      if (lookahead == 't') ADVANCE(1927);
      END_STATE();
    case 1424:
      if (lookahead == 't') ADVANCE(1853);
      END_STATE();
    case 1425:
      if (lookahead == 't') ADVANCE(1768);
      END_STATE();
    case 1426:
      if (lookahead == 't') ADVANCE(1780);
      END_STATE();
    case 1427:
      if (lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1428:
      if (lookahead == 't') ADVANCE(1782);
      END_STATE();
    case 1429:
      if (lookahead == 't') ADVANCE(1741);
      END_STATE();
    case 1430:
      if (lookahead == 't') ADVANCE(1784);
      END_STATE();
    case 1431:
      if (lookahead == 't') ADVANCE(1781);
      END_STATE();
    case 1432:
      if (lookahead == 't') ADVANCE(1918);
      END_STATE();
    case 1433:
      if (lookahead == 't') ADVANCE(1691);
      END_STATE();
    case 1434:
      if (lookahead == 't') ADVANCE(1698);
      END_STATE();
    case 1435:
      if (lookahead == 't') ADVANCE(1654);
      END_STATE();
    case 1436:
      if (lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1437:
      if (lookahead == 't') ADVANCE(1668);
      END_STATE();
    case 1438:
      if (lookahead == 't') ADVANCE(1705);
      END_STATE();
    case 1439:
      if (lookahead == 't') ADVANCE(1712);
      END_STATE();
    case 1440:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 1441:
      if (lookahead == 't') ADVANCE(1719);
      END_STATE();
    case 1442:
      if (lookahead == 't') ADVANCE(1726);
      END_STATE();
    case 1443:
      if (lookahead == 't') ADVANCE(1687);
      END_STATE();
    case 1444:
      if (lookahead == 't') ADVANCE(1694);
      END_STATE();
    case 1445:
      if (lookahead == 't') ADVANCE(1701);
      END_STATE();
    case 1446:
      if (lookahead == 't') ADVANCE(1708);
      END_STATE();
    case 1447:
      if (lookahead == 't') ADVANCE(1746);
      END_STATE();
    case 1448:
      if (lookahead == 't') ADVANCE(1630);
      END_STATE();
    case 1449:
      if (lookahead == 't') ADVANCE(1633);
      END_STATE();
    case 1450:
      if (lookahead == 't') ADVANCE(1715);
      END_STATE();
    case 1451:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 1452:
      if (lookahead == 't') ADVANCE(1722);
      END_STATE();
    case 1453:
      if (lookahead == 't') ADVANCE(1749);
      END_STATE();
    case 1454:
      if (lookahead == 't') ADVANCE(1744);
      END_STATE();
    case 1455:
      if (lookahead == 't') ADVANCE(1757);
      END_STATE();
    case 1456:
      if (lookahead == 't') ADVANCE(1653);
      END_STATE();
    case 1457:
      if (lookahead == 't') ADVANCE(1752);
      END_STATE();
    case 1458:
      if (lookahead == 't') ADVANCE(1729);
      END_STATE();
    case 1459:
      if (lookahead == 't') ADVANCE(1747);
      END_STATE();
    case 1460:
      if (lookahead == 't') ADVANCE(1640);
      END_STATE();
    case 1461:
      if (lookahead == 't') ADVANCE(1754);
      END_STATE();
    case 1462:
      if (lookahead == 't') ADVANCE(1635);
      END_STATE();
    case 1463:
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'y') ADVANCE(1068);
      END_STATE();
    case 1464:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 1465:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 1466:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 1467:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 1468:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 1469:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 1470:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 1471:
      if (lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1472:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 1473:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 1474:
      if (lookahead == 't') ADVANCE(1586);
      END_STATE();
    case 1475:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 1476:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 1477:
      if (lookahead == 't') ADVANCE(1551);
      END_STATE();
    case 1478:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 1479:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 1480:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 1481:
      if (lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 1482:
      if (lookahead == 't') ADVANCE(898);
      END_STATE();
    case 1483:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 1484:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 1485:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 1486:
      if (lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 1487:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 1488:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 1489:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 1490:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 1491:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 1492:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 1493:
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 1494:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 1495:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 1496:
      if (lookahead == 't') ADVANCE(720);
      END_STATE();
    case 1497:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 1498:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 1499:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 1500:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 1501:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 1502:
      if (lookahead == 't') ADVANCE(727);
      END_STATE();
    case 1503:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 1504:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 1505:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 1506:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 1507:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 1508:
      if (lookahead == 't') ADVANCE(1330);
      END_STATE();
    case 1509:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 1510:
      if (lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 1511:
      if (lookahead == 't') ADVANCE(949);
      END_STATE();
    case 1512:
      if (lookahead == 't') ADVANCE(779);
      END_STATE();
    case 1513:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 1514:
      if (lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 1515:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1516:
      if (lookahead == 't') ADVANCE(1332);
      END_STATE();
    case 1517:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 1518:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 1519:
      if (lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1520:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 1521:
      if (lookahead == 't') ADVANCE(1191);
      END_STATE();
    case 1522:
      if (lookahead == 't') ADVANCE(908);
      END_STATE();
    case 1523:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 1524:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 1525:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 1526:
      if (lookahead == 't') ADVANCE(967);
      END_STATE();
    case 1527:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 1528:
      if (lookahead == 't') ADVANCE(968);
      END_STATE();
    case 1529:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 1530:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 1531:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 1532:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1533:
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(1267);
      END_STATE();
    case 1534:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 1535:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 1536:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 1537:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 1538:
      if (lookahead == 'u') ADVANCE(1053);
      END_STATE();
    case 1539:
      if (lookahead == 'u') ADVANCE(1054);
      END_STATE();
    case 1540:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 1541:
      if (lookahead == 'u') ADVANCE(1329);
      END_STATE();
    case 1542:
      if (lookahead == 'u') ADVANCE(546);
      END_STATE();
    case 1543:
      if (lookahead == 'u') ADVANCE(1334);
      END_STATE();
    case 1544:
      if (lookahead == 'u') ADVANCE(1404);
      END_STATE();
    case 1545:
      if (lookahead == 'u') ADVANCE(1061);
      END_STATE();
    case 1546:
      if (lookahead == 'u') ADVANCE(1406);
      END_STATE();
    case 1547:
      if (lookahead == 'u') ADVANCE(1029);
      END_STATE();
    case 1548:
      if (lookahead == 'u') ADVANCE(1493);
      END_STATE();
    case 1549:
      if (lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 1550:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 1551:
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 1552:
      if (lookahead == 'u') ADVANCE(905);
      END_STATE();
    case 1553:
      if (lookahead == 'u') ADVANCE(906);
      END_STATE();
    case 1554:
      if (lookahead == 'u') ADVANCE(912);
      END_STATE();
    case 1555:
      if (lookahead == 'u') ADVANCE(913);
      END_STATE();
    case 1556:
      if (lookahead == 'u') ADVANCE(915);
      END_STATE();
    case 1557:
      if (lookahead == 'u') ADVANCE(916);
      END_STATE();
    case 1558:
      if (lookahead == 'u') ADVANCE(918);
      END_STATE();
    case 1559:
      if (lookahead == 'u') ADVANCE(919);
      END_STATE();
    case 1560:
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 1561:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 1562:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 1563:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 1564:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 1565:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 1566:
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 1567:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 1568:
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 1569:
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 1570:
      if (lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 1571:
      if (lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 1572:
      if (lookahead == 'v') ADVANCE(718);
      END_STATE();
    case 1573:
      if (lookahead == 'v') ADVANCE(448);
      END_STATE();
    case 1574:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 1575:
      if (lookahead == 'w') ADVANCE(1662);
      END_STATE();
    case 1576:
      if (lookahead == 'w') ADVANCE(937);
      END_STATE();
    case 1577:
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 1578:
      if (lookahead == 'w') ADVANCE(943);
      END_STATE();
    case 1579:
      if (lookahead == 'w') ADVANCE(947);
      END_STATE();
    case 1580:
      if (lookahead == 'w') ADVANCE(950);
      END_STATE();
    case 1581:
      if (lookahead == 'w') ADVANCE(952);
      END_STATE();
    case 1582:
      if (lookahead == 'w') ADVANCE(954);
      END_STATE();
    case 1583:
      if (lookahead == 'x') ADVANCE(578);
      END_STATE();
    case 1584:
      if (lookahead == 'y') ADVANCE(1658);
      END_STATE();
    case 1585:
      if (lookahead == 'y') ADVANCE(1659);
      END_STATE();
    case 1586:
      if (lookahead == 'y') ADVANCE(1842);
      END_STATE();
    case 1587:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 1588:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 1589:
      if (lookahead == 'y') ADVANCE(1109);
      END_STATE();
    case 1590:
      if (lookahead == 'y') ADVANCE(1506);
      END_STATE();
    case 1591:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 1592:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 1593:
      if (lookahead == 'z') ADVANCE(781);
      END_STATE();
    case 1594:
      if (lookahead == 'z') ADVANCE(782);
      END_STATE();
    case 1595:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      END_STATE();
    case 1596:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1958);
      END_STATE();
    case 1597:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1620);
      END_STATE();
    case 1598:
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(383);
      END_STATE();
    case 1599:
      if (eof) ADVANCE(1600);
      if (lookahead == '#') ADVANCE(1949);
      if (lookahead == ',') ADVANCE(1621);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '.') ADVANCE(505);
      if (lookahead == '=') ADVANCE(1606);
      if (lookahead == '}') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1599)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1614);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_DOTclass);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_DOTsuper);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_DOTsource);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_DOTimplements);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_DOTfield);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym_end_field);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(sym_end_method);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_DOTannotation);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym_annotation_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1614);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(sym_end_annotation);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_DOTsubannotation);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym_end_subannotation);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym_end_param);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1620);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1622);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_move);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_move_SLASHfrom16);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_move_SLASH16);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_move_DASHwide);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_move_DASHwide_SLASHfrom16);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_move_DASHwide_SLASH16);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_move_DASHobject);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_move_DASHobject_SLASHfrom16);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_move_DASHobject_SLASH16);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_move_DASHresult);
      if (lookahead == '-') ADVANCE(1246);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_move_DASHresult_DASHwide);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_move_DASHresult_DASHobject);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_move_DASHexception);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_return_DASHvoid);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-') ADVANCE(1245);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_return_DASHwide);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_return_DASHobject);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_const_SLASH4);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_const_SLASH16);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_const_SLASHhigh16);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASH16);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASH32);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_const_DASHwide);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_const_DASHwide_SLASHhigh16);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_const_DASHstring);
      if (lookahead == '-') ADVANCE(974);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_const_DASHstring_DASHjumbo);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_const_DASHclass);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_monitor_DASHenter);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_monitor_DASHexit);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_check_DASHcast);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_instance_DASHof);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_array_DASHlength);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_new_DASHinstance);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_new_DASHarray);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_filled_DASHnew_DASHarray);
      if (lookahead == '/') ADVANCE(1365);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_filled_DASHnew_DASHarray_SLASHrange);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_fill_DASHarray_DASHdata);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '/') ADVANCE(193);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_goto_SLASH16);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_goto_SLASH32);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_packed_DASHswitch);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_sparse_DASHswitch);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_cmpl_DASHfloat);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_cmpg_DASHfloat);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_cmpl_DASHdouble);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_cmpg_DASHdouble);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_cmp_DASHlong);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_if_DASHeq);
      if (lookahead == 'z') ADVANCE(1679);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_if_DASHne);
      if (lookahead == 'z') ADVANCE(1680);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_if_DASHlt);
      if (lookahead == 'z') ADVANCE(1681);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_if_DASHge);
      if (lookahead == 'z') ADVANCE(1682);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_if_DASHgt);
      if (lookahead == 'z') ADVANCE(1683);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_if_DASHle);
      if (lookahead == 'z') ADVANCE(1684);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_if_DASHeqz);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_if_DASHnez);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_if_DASHltz);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_if_DASHgez);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_if_DASHgtz);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_if_DASHlez);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_aget);
      if (lookahead == '-') ADVANCE(510);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_aget_DASHwide);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_aget_DASHobject);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_aget_DASHboolean);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_aget_DASHbyte);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_aget_DASHchar);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_aget_DASHshort);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_aput);
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_aput_DASHwide);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_aput_DASHobject);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_aput_DASHboolean);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_aput_DASHbyte);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_aput_DASHchar);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_aput_DASHshort);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_iget);
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_iget_DASHwide);
      if (lookahead == '-') ADVANCE(1271);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_iget_DASHobject);
      if (lookahead == '-') ADVANCE(1273);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_iget_DASHboolean);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_iget_DASHbyte);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_iget_DASHchar);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_iget_DASHshort);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_iput);
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_iput_DASHwide);
      if (lookahead == '-') ADVANCE(1272);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_iput_DASHobject);
      if (lookahead == '-') ADVANCE(1274);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_iput_DASHboolean);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_iput_DASHbyte);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_iput_DASHchar);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_iput_DASHshort);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_sget);
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_sget_DASHwide);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_sget_DASHobject);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_sget_DASHboolean);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_sget_DASHbyte);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_sget_DASHchar);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_sget_DASHshort);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_sput);
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_sput_DASHwide);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_sput_DASHobject);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_sput_DASHboolean);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_sput_DASHbyte);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_sput_DASHchar);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_sput_DASHshort);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '/') ADVANCE(1364);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper);
      if (lookahead == '-') ADVANCE(1275);
      if (lookahead == '/') ADVANCE(1353);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == '/') ADVANCE(1360);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_invoke_DASHstatic);
      if (lookahead == '/') ADVANCE(1362);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_invoke_DASHinterface);
      if (lookahead == '/') ADVANCE(1367);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_SLASHrange);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_SLASHrange);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect_SLASHrange);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_invoke_DASHstatic_SLASHrange);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_invoke_DASHinterface_SLASHrange);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_neg_DASHint);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_not_DASHint);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_neg_DASHlong);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_not_DASHlong);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_neg_DASHfloat);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_neg_DASHdouble);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHlong);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHfloat);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHdouble);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHint);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHfloat);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_long_DASHto_DASHdouble);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHint);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHlong);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_float_DASHto_DASHdouble);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHint);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHlong);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_double_DASHto_DASHfloat);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHbyte);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHchar);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHshort);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_add_DASHint);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_sub_DASHint);
      if (lookahead == '/') ADVANCE(223);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_mul_DASHint);
      if (lookahead == '/') ADVANCE(218);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_div_DASHint);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_rem_DASHint);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_and_DASHint);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_or_DASHint);
      if (lookahead == '/') ADVANCE(214);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_xor_DASHint);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_shl_DASHint);
      if (lookahead == '/') ADVANCE(221);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_shr_DASHint);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint);
      if (lookahead == '/') ADVANCE(233);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_add_DASHlong);
      if (lookahead == '/') ADVANCE(225);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_sub_DASHlong);
      if (lookahead == '/') ADVANCE(232);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_mul_DASHlong);
      if (lookahead == '/') ADVANCE(228);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_div_DASHlong);
      if (lookahead == '/') ADVANCE(227);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_rem_DASHlong);
      if (lookahead == '/') ADVANCE(229);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_and_DASHlong);
      if (lookahead == '/') ADVANCE(226);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_or_DASHlong);
      if (lookahead == '/') ADVANCE(219);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_xor_DASHlong);
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_shl_DASHlong);
      if (lookahead == '/') ADVANCE(230);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_shr_DASHlong);
      if (lookahead == '/') ADVANCE(231);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_ushr_DASHlong);
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_add_DASHfloat);
      if (lookahead == '/') ADVANCE(235);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_sub_DASHfloat);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_mul_DASHfloat);
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_div_DASHfloat);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_rem_DASHfloat);
      if (lookahead == '/') ADVANCE(238);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_add_DASHdouble);
      if (lookahead == '/') ADVANCE(241);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_sub_DASHdouble);
      if (lookahead == '/') ADVANCE(245);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_mul_DASHdouble);
      if (lookahead == '/') ADVANCE(243);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_div_DASHdouble);
      if (lookahead == '/') ADVANCE(242);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_rem_DASHdouble);
      if (lookahead == '/') ADVANCE(244);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASH2addr);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASH2addr);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASH2addr);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASH2addr);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASH2addr);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASH2addr);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASH2addr);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASH2addr);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_shl_DASHint_SLASH2addr);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(anon_sym_shr_DASHint_SLASH2addr);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint_SLASH2addr);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_add_DASHlong_SLASH2addr);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(anon_sym_sub_DASHlong_SLASH2addr);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(anon_sym_mul_DASHlong_SLASH2addr);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_div_DASHlong_SLASH2addr);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_rem_DASHlong_SLASH2addr);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(anon_sym_and_DASHlong_SLASH2addr);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(anon_sym_or_DASHlong_SLASH2addr);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(anon_sym_xor_DASHlong_SLASH2addr);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(anon_sym_shl_DASHlong_SLASH2addr);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(anon_sym_shr_DASHlong_SLASH2addr);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(anon_sym_ushr_DASHlong_SLASH2addr);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(anon_sym_add_DASHfloat_SLASH2addr);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(anon_sym_sub_DASHfloat_SLASH2addr);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_mul_DASHfloat_SLASH2addr);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_div_DASHfloat_SLASH2addr);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_rem_DASHfloat_SLASH2addr);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(anon_sym_add_DASHdouble_SLASH2addr);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_sub_DASHdouble_SLASH2addr);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_mul_DASHdouble_SLASH2addr);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_div_DASHdouble_SLASH2addr);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_rem_DASHdouble_SLASH2addr);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASHlit16);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASHlit16);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASHlit16);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASHlit16);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASHlit16);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASHlit16);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASHlit16);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASHlit16);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_add_DASHint_SLASHlit8);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_sub_DASHint_SLASHlit8);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_mul_DASHint_SLASHlit8);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_div_DASHint_SLASHlit8);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_rem_DASHint_SLASHlit8);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_and_DASHint_SLASHlit8);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_or_DASHint_SLASHlit8);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_xor_DASHint_SLASHlit8);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_shl_DASHint_SLASHlit8);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_shr_DASHint_SLASHlit8);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_ushr_DASHint_SLASHlit8);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_execute_DASHinline);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_invoke_DASHdirect_DASHempty);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_iget_DASHquick);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_iget_DASHwide_DASHquick);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_iget_DASHobject_DASHquick);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_iput_DASHquick);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_iput_DASHwide_DASHquick);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_iput_DASHobject_DASHquick);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_DASHquick);
      if (lookahead == '/') ADVANCE(1370);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_DASHquick);
      if (lookahead == '/') ADVANCE(1369);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_invoke_DASHsuper_DASHquick_SLASHrange);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_rsub_DASHint);
      if (lookahead == '/') ADVANCE(1037);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_rsub_DASHint_SLASHlit8);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_DOTline);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_DOTlocals);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_DOTregisters);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_DOTcatch);
      if (lookahead == 'a') ADVANCE(1013);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_DOTcatchall);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_DOTpacked_DASHswitch);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_DOTendpacked_DASHswitch);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_DOTsparse_DASHswitch);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_DOTendsparse_DASHswitch);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_DOTarray_DASHdata);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_DOTendarray_DASHdata);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_class_identifier);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym_field_identifier_token1);
      if (lookahead == ';') ADVANCE(1870);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_LTclinit_GT_LPAREN);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_LTinit_GT_LPAREN);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym_method_identifier_token1);
      if (lookahead == ';') ADVANCE(1870);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_V);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_J);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_transient);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_synthetic);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_declared_DASHsynchronized);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1949);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_DOTenum);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1951);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1952);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1953);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1954);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'L' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(1957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1956);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == 'L' ||
          lookahead == 's' ||
          lookahead == 't') ADVANCE(1955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1958);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(1595);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'f') ADVANCE(1962);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1961);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(1595);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == 'f') ADVANCE(1962);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1961);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '.') ADVANCE(1595);
      if (lookahead == 'f') ADVANCE(1959);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1964);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == '.') ADVANCE(1595);
      if (lookahead == 'f') ADVANCE(1959);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1964);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (lookahead == 'f') ADVANCE(1959);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '(') ADVANCE(1875);
      if (lookahead == ':') ADVANCE(1871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
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
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 8},
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
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1599},
  [77] = {.lex_state = 1599},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1599},
  [100] = {.lex_state = 1599},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1599},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1599},
  [110] = {.lex_state = 1599},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1599},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1599},
  [119] = {.lex_state = 1599},
  [120] = {.lex_state = 1599},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 1599},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1599},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1599},
  [137] = {.lex_state = 1599},
  [138] = {.lex_state = 1599},
  [139] = {.lex_state = 1599},
  [140] = {.lex_state = 1599},
  [141] = {.lex_state = 1599},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1599},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1599},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1599},
  [153] = {.lex_state = 1599},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 1599},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1599},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
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
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
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
    [anon_sym_DOTregisters] = ACTIONS(1),
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
    [sym_class_definition] = STATE(185),
    [sym_class_directive] = STATE(166),
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
    [anon_sym_DOTregisters] = ACTIONS(7),
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
    [anon_sym_DOTregisters] = ACTIONS(11),
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
    [sym_annotation_directive] = STATE(21),
    [sym_start_annotation] = STATE(118),
    [sym_param_directive] = STATE(21),
    [sym_start_param] = STATE(10),
    [sym__code_line] = STATE(21),
    [sym_statement] = STATE(21),
    [sym_opcode] = STATE(33),
    [sym__directive] = STATE(21),
    [sym_line_directive] = STATE(21),
    [sym_locals_directive] = STATE(21),
    [sym_registers_directive] = STATE(21),
    [sym_catch_directive] = STATE(21),
    [sym_catchall_directive] = STATE(21),
    [sym_packed_switch_directive] = STATE(21),
    [sym_sparse_switch_directive] = STATE(21),
    [sym_array_data_directive] = STATE(21),
    [aux_sym_method_definition_repeat1] = STATE(6),
    [sym_end_method] = ACTIONS(15),
    [anon_sym_DOTannotation] = ACTIONS(17),
    [anon_sym_DOTparam] = ACTIONS(19),
    [sym_label] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_move] = ACTIONS(25),
    [anon_sym_move_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHwide] = ACTIONS(25),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHobject] = ACTIONS(25),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHresult] = ACTIONS(25),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(23),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(23),
    [anon_sym_move_DASHexception] = ACTIONS(23),
    [anon_sym_return_DASHvoid] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_return_DASHwide] = ACTIONS(23),
    [anon_sym_return_DASHobject] = ACTIONS(23),
    [anon_sym_const_SLASH4] = ACTIONS(23),
    [anon_sym_const_SLASH16] = ACTIONS(23),
    [anon_sym_const] = ACTIONS(25),
    [anon_sym_const_SLASHhigh16] = ACTIONS(23),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(23),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(23),
    [anon_sym_const_DASHwide] = ACTIONS(25),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(23),
    [anon_sym_const_DASHstring] = ACTIONS(25),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(23),
    [anon_sym_const_DASHclass] = ACTIONS(23),
    [anon_sym_monitor_DASHenter] = ACTIONS(23),
    [anon_sym_monitor_DASHexit] = ACTIONS(23),
    [anon_sym_check_DASHcast] = ACTIONS(23),
    [anon_sym_instance_DASHof] = ACTIONS(23),
    [anon_sym_array_DASHlength] = ACTIONS(23),
    [anon_sym_new_DASHinstance] = ACTIONS(23),
    [anon_sym_new_DASHarray] = ACTIONS(23),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(25),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(23),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_goto_SLASH16] = ACTIONS(23),
    [anon_sym_goto_SLASH32] = ACTIONS(23),
    [anon_sym_packed_DASHswitch] = ACTIONS(23),
    [anon_sym_sparse_DASHswitch] = ACTIONS(23),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(23),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(23),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(23),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(23),
    [anon_sym_cmp_DASHlong] = ACTIONS(23),
    [anon_sym_if_DASHeq] = ACTIONS(25),
    [anon_sym_if_DASHne] = ACTIONS(25),
    [anon_sym_if_DASHlt] = ACTIONS(25),
    [anon_sym_if_DASHge] = ACTIONS(25),
    [anon_sym_if_DASHgt] = ACTIONS(25),
    [anon_sym_if_DASHle] = ACTIONS(25),
    [anon_sym_if_DASHeqz] = ACTIONS(23),
    [anon_sym_if_DASHnez] = ACTIONS(23),
    [anon_sym_if_DASHltz] = ACTIONS(23),
    [anon_sym_if_DASHgez] = ACTIONS(23),
    [anon_sym_if_DASHgtz] = ACTIONS(23),
    [anon_sym_if_DASHlez] = ACTIONS(23),
    [anon_sym_aget] = ACTIONS(25),
    [anon_sym_aget_DASHwide] = ACTIONS(23),
    [anon_sym_aget_DASHobject] = ACTIONS(23),
    [anon_sym_aget_DASHboolean] = ACTIONS(23),
    [anon_sym_aget_DASHbyte] = ACTIONS(23),
    [anon_sym_aget_DASHchar] = ACTIONS(23),
    [anon_sym_aget_DASHshort] = ACTIONS(23),
    [anon_sym_aput] = ACTIONS(25),
    [anon_sym_aput_DASHwide] = ACTIONS(23),
    [anon_sym_aput_DASHobject] = ACTIONS(23),
    [anon_sym_aput_DASHboolean] = ACTIONS(23),
    [anon_sym_aput_DASHbyte] = ACTIONS(23),
    [anon_sym_aput_DASHchar] = ACTIONS(23),
    [anon_sym_aput_DASHshort] = ACTIONS(23),
    [anon_sym_iget] = ACTIONS(25),
    [anon_sym_iget_DASHwide] = ACTIONS(25),
    [anon_sym_iget_DASHobject] = ACTIONS(25),
    [anon_sym_iget_DASHboolean] = ACTIONS(23),
    [anon_sym_iget_DASHbyte] = ACTIONS(23),
    [anon_sym_iget_DASHchar] = ACTIONS(23),
    [anon_sym_iget_DASHshort] = ACTIONS(23),
    [anon_sym_iput] = ACTIONS(25),
    [anon_sym_iput_DASHwide] = ACTIONS(25),
    [anon_sym_iput_DASHobject] = ACTIONS(25),
    [anon_sym_iput_DASHboolean] = ACTIONS(23),
    [anon_sym_iput_DASHbyte] = ACTIONS(23),
    [anon_sym_iput_DASHchar] = ACTIONS(23),
    [anon_sym_iput_DASHshort] = ACTIONS(23),
    [anon_sym_sget] = ACTIONS(25),
    [anon_sym_sget_DASHwide] = ACTIONS(23),
    [anon_sym_sget_DASHobject] = ACTIONS(23),
    [anon_sym_sget_DASHboolean] = ACTIONS(23),
    [anon_sym_sget_DASHbyte] = ACTIONS(23),
    [anon_sym_sget_DASHchar] = ACTIONS(23),
    [anon_sym_sget_DASHshort] = ACTIONS(23),
    [anon_sym_sput] = ACTIONS(25),
    [anon_sym_sput_DASHwide] = ACTIONS(23),
    [anon_sym_sput_DASHobject] = ACTIONS(23),
    [anon_sym_sput_DASHboolean] = ACTIONS(23),
    [anon_sym_sput_DASHbyte] = ACTIONS(23),
    [anon_sym_sput_DASHchar] = ACTIONS(23),
    [anon_sym_sput_DASHshort] = ACTIONS(23),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(25),
    [anon_sym_invoke_DASHsuper] = ACTIONS(25),
    [anon_sym_invoke_DASHdirect] = ACTIONS(25),
    [anon_sym_invoke_DASHstatic] = ACTIONS(25),
    [anon_sym_invoke_DASHinterface] = ACTIONS(25),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(23),
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
    [anon_sym_add_DASHint] = ACTIONS(25),
    [anon_sym_sub_DASHint] = ACTIONS(25),
    [anon_sym_mul_DASHint] = ACTIONS(25),
    [anon_sym_div_DASHint] = ACTIONS(25),
    [anon_sym_rem_DASHint] = ACTIONS(25),
    [anon_sym_and_DASHint] = ACTIONS(25),
    [anon_sym_or_DASHint] = ACTIONS(25),
    [anon_sym_xor_DASHint] = ACTIONS(25),
    [anon_sym_shl_DASHint] = ACTIONS(25),
    [anon_sym_shr_DASHint] = ACTIONS(25),
    [anon_sym_ushr_DASHint] = ACTIONS(25),
    [anon_sym_add_DASHlong] = ACTIONS(25),
    [anon_sym_sub_DASHlong] = ACTIONS(25),
    [anon_sym_mul_DASHlong] = ACTIONS(25),
    [anon_sym_div_DASHlong] = ACTIONS(25),
    [anon_sym_rem_DASHlong] = ACTIONS(25),
    [anon_sym_and_DASHlong] = ACTIONS(25),
    [anon_sym_or_DASHlong] = ACTIONS(25),
    [anon_sym_xor_DASHlong] = ACTIONS(25),
    [anon_sym_shl_DASHlong] = ACTIONS(25),
    [anon_sym_shr_DASHlong] = ACTIONS(25),
    [anon_sym_ushr_DASHlong] = ACTIONS(25),
    [anon_sym_add_DASHfloat] = ACTIONS(25),
    [anon_sym_sub_DASHfloat] = ACTIONS(25),
    [anon_sym_mul_DASHfloat] = ACTIONS(25),
    [anon_sym_div_DASHfloat] = ACTIONS(25),
    [anon_sym_rem_DASHfloat] = ACTIONS(25),
    [anon_sym_add_DASHdouble] = ACTIONS(25),
    [anon_sym_sub_DASHdouble] = ACTIONS(25),
    [anon_sym_mul_DASHdouble] = ACTIONS(25),
    [anon_sym_div_DASHdouble] = ACTIONS(25),
    [anon_sym_rem_DASHdouble] = ACTIONS(25),
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
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(25),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(25),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(23),
    [anon_sym_rsub_DASHint] = ACTIONS(25),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_DOTline] = ACTIONS(27),
    [anon_sym_DOTlocals] = ACTIONS(29),
    [anon_sym_DOTregisters] = ACTIONS(31),
    [anon_sym_DOTcatch] = ACTIONS(33),
    [anon_sym_DOTcatchall] = ACTIONS(35),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(37),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(39),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_annotation_directive] = STATE(21),
    [sym_start_annotation] = STATE(118),
    [sym_param_directive] = STATE(21),
    [sym_start_param] = STATE(10),
    [sym__code_line] = STATE(21),
    [sym_statement] = STATE(21),
    [sym_opcode] = STATE(33),
    [sym__directive] = STATE(21),
    [sym_line_directive] = STATE(21),
    [sym_locals_directive] = STATE(21),
    [sym_registers_directive] = STATE(21),
    [sym_catch_directive] = STATE(21),
    [sym_catchall_directive] = STATE(21),
    [sym_packed_switch_directive] = STATE(21),
    [sym_sparse_switch_directive] = STATE(21),
    [sym_array_data_directive] = STATE(21),
    [aux_sym_method_definition_repeat1] = STATE(5),
    [sym_end_method] = ACTIONS(43),
    [anon_sym_DOTannotation] = ACTIONS(45),
    [anon_sym_DOTparam] = ACTIONS(48),
    [sym_label] = ACTIONS(51),
    [anon_sym_nop] = ACTIONS(54),
    [anon_sym_move] = ACTIONS(57),
    [anon_sym_move_SLASHfrom16] = ACTIONS(54),
    [anon_sym_move_SLASH16] = ACTIONS(54),
    [anon_sym_move_DASHwide] = ACTIONS(57),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(54),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(54),
    [anon_sym_move_DASHobject] = ACTIONS(57),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(54),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(54),
    [anon_sym_move_DASHresult] = ACTIONS(57),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(54),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(54),
    [anon_sym_move_DASHexception] = ACTIONS(54),
    [anon_sym_return_DASHvoid] = ACTIONS(54),
    [anon_sym_return] = ACTIONS(57),
    [anon_sym_return_DASHwide] = ACTIONS(54),
    [anon_sym_return_DASHobject] = ACTIONS(54),
    [anon_sym_const_SLASH4] = ACTIONS(54),
    [anon_sym_const_SLASH16] = ACTIONS(54),
    [anon_sym_const] = ACTIONS(57),
    [anon_sym_const_SLASHhigh16] = ACTIONS(54),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(54),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(54),
    [anon_sym_const_DASHwide] = ACTIONS(57),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(54),
    [anon_sym_const_DASHstring] = ACTIONS(57),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(54),
    [anon_sym_const_DASHclass] = ACTIONS(54),
    [anon_sym_monitor_DASHenter] = ACTIONS(54),
    [anon_sym_monitor_DASHexit] = ACTIONS(54),
    [anon_sym_check_DASHcast] = ACTIONS(54),
    [anon_sym_instance_DASHof] = ACTIONS(54),
    [anon_sym_array_DASHlength] = ACTIONS(54),
    [anon_sym_new_DASHinstance] = ACTIONS(54),
    [anon_sym_new_DASHarray] = ACTIONS(54),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(57),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(54),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(54),
    [anon_sym_throw] = ACTIONS(54),
    [anon_sym_goto] = ACTIONS(57),
    [anon_sym_goto_SLASH16] = ACTIONS(54),
    [anon_sym_goto_SLASH32] = ACTIONS(54),
    [anon_sym_packed_DASHswitch] = ACTIONS(54),
    [anon_sym_sparse_DASHswitch] = ACTIONS(54),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(54),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(54),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(54),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(54),
    [anon_sym_cmp_DASHlong] = ACTIONS(54),
    [anon_sym_if_DASHeq] = ACTIONS(57),
    [anon_sym_if_DASHne] = ACTIONS(57),
    [anon_sym_if_DASHlt] = ACTIONS(57),
    [anon_sym_if_DASHge] = ACTIONS(57),
    [anon_sym_if_DASHgt] = ACTIONS(57),
    [anon_sym_if_DASHle] = ACTIONS(57),
    [anon_sym_if_DASHeqz] = ACTIONS(54),
    [anon_sym_if_DASHnez] = ACTIONS(54),
    [anon_sym_if_DASHltz] = ACTIONS(54),
    [anon_sym_if_DASHgez] = ACTIONS(54),
    [anon_sym_if_DASHgtz] = ACTIONS(54),
    [anon_sym_if_DASHlez] = ACTIONS(54),
    [anon_sym_aget] = ACTIONS(57),
    [anon_sym_aget_DASHwide] = ACTIONS(54),
    [anon_sym_aget_DASHobject] = ACTIONS(54),
    [anon_sym_aget_DASHboolean] = ACTIONS(54),
    [anon_sym_aget_DASHbyte] = ACTIONS(54),
    [anon_sym_aget_DASHchar] = ACTIONS(54),
    [anon_sym_aget_DASHshort] = ACTIONS(54),
    [anon_sym_aput] = ACTIONS(57),
    [anon_sym_aput_DASHwide] = ACTIONS(54),
    [anon_sym_aput_DASHobject] = ACTIONS(54),
    [anon_sym_aput_DASHboolean] = ACTIONS(54),
    [anon_sym_aput_DASHbyte] = ACTIONS(54),
    [anon_sym_aput_DASHchar] = ACTIONS(54),
    [anon_sym_aput_DASHshort] = ACTIONS(54),
    [anon_sym_iget] = ACTIONS(57),
    [anon_sym_iget_DASHwide] = ACTIONS(57),
    [anon_sym_iget_DASHobject] = ACTIONS(57),
    [anon_sym_iget_DASHboolean] = ACTIONS(54),
    [anon_sym_iget_DASHbyte] = ACTIONS(54),
    [anon_sym_iget_DASHchar] = ACTIONS(54),
    [anon_sym_iget_DASHshort] = ACTIONS(54),
    [anon_sym_iput] = ACTIONS(57),
    [anon_sym_iput_DASHwide] = ACTIONS(57),
    [anon_sym_iput_DASHobject] = ACTIONS(57),
    [anon_sym_iput_DASHboolean] = ACTIONS(54),
    [anon_sym_iput_DASHbyte] = ACTIONS(54),
    [anon_sym_iput_DASHchar] = ACTIONS(54),
    [anon_sym_iput_DASHshort] = ACTIONS(54),
    [anon_sym_sget] = ACTIONS(57),
    [anon_sym_sget_DASHwide] = ACTIONS(54),
    [anon_sym_sget_DASHobject] = ACTIONS(54),
    [anon_sym_sget_DASHboolean] = ACTIONS(54),
    [anon_sym_sget_DASHbyte] = ACTIONS(54),
    [anon_sym_sget_DASHchar] = ACTIONS(54),
    [anon_sym_sget_DASHshort] = ACTIONS(54),
    [anon_sym_sput] = ACTIONS(57),
    [anon_sym_sput_DASHwide] = ACTIONS(54),
    [anon_sym_sput_DASHobject] = ACTIONS(54),
    [anon_sym_sput_DASHboolean] = ACTIONS(54),
    [anon_sym_sput_DASHbyte] = ACTIONS(54),
    [anon_sym_sput_DASHchar] = ACTIONS(54),
    [anon_sym_sput_DASHshort] = ACTIONS(54),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(57),
    [anon_sym_invoke_DASHsuper] = ACTIONS(57),
    [anon_sym_invoke_DASHdirect] = ACTIONS(57),
    [anon_sym_invoke_DASHstatic] = ACTIONS(57),
    [anon_sym_invoke_DASHinterface] = ACTIONS(57),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(54),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(54),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(54),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(54),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(54),
    [anon_sym_neg_DASHint] = ACTIONS(54),
    [anon_sym_not_DASHint] = ACTIONS(54),
    [anon_sym_neg_DASHlong] = ACTIONS(54),
    [anon_sym_not_DASHlong] = ACTIONS(54),
    [anon_sym_neg_DASHfloat] = ACTIONS(54),
    [anon_sym_neg_DASHdouble] = ACTIONS(54),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(54),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(54),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(54),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(54),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(54),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(54),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(54),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(54),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(54),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(54),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(54),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(54),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(54),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(54),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(54),
    [anon_sym_add_DASHint] = ACTIONS(57),
    [anon_sym_sub_DASHint] = ACTIONS(57),
    [anon_sym_mul_DASHint] = ACTIONS(57),
    [anon_sym_div_DASHint] = ACTIONS(57),
    [anon_sym_rem_DASHint] = ACTIONS(57),
    [anon_sym_and_DASHint] = ACTIONS(57),
    [anon_sym_or_DASHint] = ACTIONS(57),
    [anon_sym_xor_DASHint] = ACTIONS(57),
    [anon_sym_shl_DASHint] = ACTIONS(57),
    [anon_sym_shr_DASHint] = ACTIONS(57),
    [anon_sym_ushr_DASHint] = ACTIONS(57),
    [anon_sym_add_DASHlong] = ACTIONS(57),
    [anon_sym_sub_DASHlong] = ACTIONS(57),
    [anon_sym_mul_DASHlong] = ACTIONS(57),
    [anon_sym_div_DASHlong] = ACTIONS(57),
    [anon_sym_rem_DASHlong] = ACTIONS(57),
    [anon_sym_and_DASHlong] = ACTIONS(57),
    [anon_sym_or_DASHlong] = ACTIONS(57),
    [anon_sym_xor_DASHlong] = ACTIONS(57),
    [anon_sym_shl_DASHlong] = ACTIONS(57),
    [anon_sym_shr_DASHlong] = ACTIONS(57),
    [anon_sym_ushr_DASHlong] = ACTIONS(57),
    [anon_sym_add_DASHfloat] = ACTIONS(57),
    [anon_sym_sub_DASHfloat] = ACTIONS(57),
    [anon_sym_mul_DASHfloat] = ACTIONS(57),
    [anon_sym_div_DASHfloat] = ACTIONS(57),
    [anon_sym_rem_DASHfloat] = ACTIONS(57),
    [anon_sym_add_DASHdouble] = ACTIONS(57),
    [anon_sym_sub_DASHdouble] = ACTIONS(57),
    [anon_sym_mul_DASHdouble] = ACTIONS(57),
    [anon_sym_div_DASHdouble] = ACTIONS(57),
    [anon_sym_rem_DASHdouble] = ACTIONS(57),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(54),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(54),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(54),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(54),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(54),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(54),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(54),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(54),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(54),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(54),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(54),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(54),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(54),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_execute_DASHinline] = ACTIONS(54),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(54),
    [anon_sym_iget_DASHquick] = ACTIONS(54),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(54),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(54),
    [anon_sym_iput_DASHquick] = ACTIONS(54),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(54),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(54),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(57),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(54),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(57),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(54),
    [anon_sym_rsub_DASHint] = ACTIONS(57),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(54),
    [anon_sym_DOTline] = ACTIONS(60),
    [anon_sym_DOTlocals] = ACTIONS(63),
    [anon_sym_DOTregisters] = ACTIONS(66),
    [anon_sym_DOTcatch] = ACTIONS(69),
    [anon_sym_DOTcatchall] = ACTIONS(72),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(75),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(78),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_annotation_directive] = STATE(21),
    [sym_start_annotation] = STATE(118),
    [sym_param_directive] = STATE(21),
    [sym_start_param] = STATE(10),
    [sym__code_line] = STATE(21),
    [sym_statement] = STATE(21),
    [sym_opcode] = STATE(33),
    [sym__directive] = STATE(21),
    [sym_line_directive] = STATE(21),
    [sym_locals_directive] = STATE(21),
    [sym_registers_directive] = STATE(21),
    [sym_catch_directive] = STATE(21),
    [sym_catchall_directive] = STATE(21),
    [sym_packed_switch_directive] = STATE(21),
    [sym_sparse_switch_directive] = STATE(21),
    [sym_array_data_directive] = STATE(21),
    [aux_sym_method_definition_repeat1] = STATE(5),
    [sym_end_method] = ACTIONS(84),
    [anon_sym_DOTannotation] = ACTIONS(17),
    [anon_sym_DOTparam] = ACTIONS(19),
    [sym_label] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_move] = ACTIONS(25),
    [anon_sym_move_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHwide] = ACTIONS(25),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHobject] = ACTIONS(25),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(23),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(23),
    [anon_sym_move_DASHresult] = ACTIONS(25),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(23),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(23),
    [anon_sym_move_DASHexception] = ACTIONS(23),
    [anon_sym_return_DASHvoid] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_return_DASHwide] = ACTIONS(23),
    [anon_sym_return_DASHobject] = ACTIONS(23),
    [anon_sym_const_SLASH4] = ACTIONS(23),
    [anon_sym_const_SLASH16] = ACTIONS(23),
    [anon_sym_const] = ACTIONS(25),
    [anon_sym_const_SLASHhigh16] = ACTIONS(23),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(23),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(23),
    [anon_sym_const_DASHwide] = ACTIONS(25),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(23),
    [anon_sym_const_DASHstring] = ACTIONS(25),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(23),
    [anon_sym_const_DASHclass] = ACTIONS(23),
    [anon_sym_monitor_DASHenter] = ACTIONS(23),
    [anon_sym_monitor_DASHexit] = ACTIONS(23),
    [anon_sym_check_DASHcast] = ACTIONS(23),
    [anon_sym_instance_DASHof] = ACTIONS(23),
    [anon_sym_array_DASHlength] = ACTIONS(23),
    [anon_sym_new_DASHinstance] = ACTIONS(23),
    [anon_sym_new_DASHarray] = ACTIONS(23),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(25),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(23),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_goto_SLASH16] = ACTIONS(23),
    [anon_sym_goto_SLASH32] = ACTIONS(23),
    [anon_sym_packed_DASHswitch] = ACTIONS(23),
    [anon_sym_sparse_DASHswitch] = ACTIONS(23),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(23),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(23),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(23),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(23),
    [anon_sym_cmp_DASHlong] = ACTIONS(23),
    [anon_sym_if_DASHeq] = ACTIONS(25),
    [anon_sym_if_DASHne] = ACTIONS(25),
    [anon_sym_if_DASHlt] = ACTIONS(25),
    [anon_sym_if_DASHge] = ACTIONS(25),
    [anon_sym_if_DASHgt] = ACTIONS(25),
    [anon_sym_if_DASHle] = ACTIONS(25),
    [anon_sym_if_DASHeqz] = ACTIONS(23),
    [anon_sym_if_DASHnez] = ACTIONS(23),
    [anon_sym_if_DASHltz] = ACTIONS(23),
    [anon_sym_if_DASHgez] = ACTIONS(23),
    [anon_sym_if_DASHgtz] = ACTIONS(23),
    [anon_sym_if_DASHlez] = ACTIONS(23),
    [anon_sym_aget] = ACTIONS(25),
    [anon_sym_aget_DASHwide] = ACTIONS(23),
    [anon_sym_aget_DASHobject] = ACTIONS(23),
    [anon_sym_aget_DASHboolean] = ACTIONS(23),
    [anon_sym_aget_DASHbyte] = ACTIONS(23),
    [anon_sym_aget_DASHchar] = ACTIONS(23),
    [anon_sym_aget_DASHshort] = ACTIONS(23),
    [anon_sym_aput] = ACTIONS(25),
    [anon_sym_aput_DASHwide] = ACTIONS(23),
    [anon_sym_aput_DASHobject] = ACTIONS(23),
    [anon_sym_aput_DASHboolean] = ACTIONS(23),
    [anon_sym_aput_DASHbyte] = ACTIONS(23),
    [anon_sym_aput_DASHchar] = ACTIONS(23),
    [anon_sym_aput_DASHshort] = ACTIONS(23),
    [anon_sym_iget] = ACTIONS(25),
    [anon_sym_iget_DASHwide] = ACTIONS(25),
    [anon_sym_iget_DASHobject] = ACTIONS(25),
    [anon_sym_iget_DASHboolean] = ACTIONS(23),
    [anon_sym_iget_DASHbyte] = ACTIONS(23),
    [anon_sym_iget_DASHchar] = ACTIONS(23),
    [anon_sym_iget_DASHshort] = ACTIONS(23),
    [anon_sym_iput] = ACTIONS(25),
    [anon_sym_iput_DASHwide] = ACTIONS(25),
    [anon_sym_iput_DASHobject] = ACTIONS(25),
    [anon_sym_iput_DASHboolean] = ACTIONS(23),
    [anon_sym_iput_DASHbyte] = ACTIONS(23),
    [anon_sym_iput_DASHchar] = ACTIONS(23),
    [anon_sym_iput_DASHshort] = ACTIONS(23),
    [anon_sym_sget] = ACTIONS(25),
    [anon_sym_sget_DASHwide] = ACTIONS(23),
    [anon_sym_sget_DASHobject] = ACTIONS(23),
    [anon_sym_sget_DASHboolean] = ACTIONS(23),
    [anon_sym_sget_DASHbyte] = ACTIONS(23),
    [anon_sym_sget_DASHchar] = ACTIONS(23),
    [anon_sym_sget_DASHshort] = ACTIONS(23),
    [anon_sym_sput] = ACTIONS(25),
    [anon_sym_sput_DASHwide] = ACTIONS(23),
    [anon_sym_sput_DASHobject] = ACTIONS(23),
    [anon_sym_sput_DASHboolean] = ACTIONS(23),
    [anon_sym_sput_DASHbyte] = ACTIONS(23),
    [anon_sym_sput_DASHchar] = ACTIONS(23),
    [anon_sym_sput_DASHshort] = ACTIONS(23),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(25),
    [anon_sym_invoke_DASHsuper] = ACTIONS(25),
    [anon_sym_invoke_DASHdirect] = ACTIONS(25),
    [anon_sym_invoke_DASHstatic] = ACTIONS(25),
    [anon_sym_invoke_DASHinterface] = ACTIONS(25),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(23),
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
    [anon_sym_add_DASHint] = ACTIONS(25),
    [anon_sym_sub_DASHint] = ACTIONS(25),
    [anon_sym_mul_DASHint] = ACTIONS(25),
    [anon_sym_div_DASHint] = ACTIONS(25),
    [anon_sym_rem_DASHint] = ACTIONS(25),
    [anon_sym_and_DASHint] = ACTIONS(25),
    [anon_sym_or_DASHint] = ACTIONS(25),
    [anon_sym_xor_DASHint] = ACTIONS(25),
    [anon_sym_shl_DASHint] = ACTIONS(25),
    [anon_sym_shr_DASHint] = ACTIONS(25),
    [anon_sym_ushr_DASHint] = ACTIONS(25),
    [anon_sym_add_DASHlong] = ACTIONS(25),
    [anon_sym_sub_DASHlong] = ACTIONS(25),
    [anon_sym_mul_DASHlong] = ACTIONS(25),
    [anon_sym_div_DASHlong] = ACTIONS(25),
    [anon_sym_rem_DASHlong] = ACTIONS(25),
    [anon_sym_and_DASHlong] = ACTIONS(25),
    [anon_sym_or_DASHlong] = ACTIONS(25),
    [anon_sym_xor_DASHlong] = ACTIONS(25),
    [anon_sym_shl_DASHlong] = ACTIONS(25),
    [anon_sym_shr_DASHlong] = ACTIONS(25),
    [anon_sym_ushr_DASHlong] = ACTIONS(25),
    [anon_sym_add_DASHfloat] = ACTIONS(25),
    [anon_sym_sub_DASHfloat] = ACTIONS(25),
    [anon_sym_mul_DASHfloat] = ACTIONS(25),
    [anon_sym_div_DASHfloat] = ACTIONS(25),
    [anon_sym_rem_DASHfloat] = ACTIONS(25),
    [anon_sym_add_DASHdouble] = ACTIONS(25),
    [anon_sym_sub_DASHdouble] = ACTIONS(25),
    [anon_sym_mul_DASHdouble] = ACTIONS(25),
    [anon_sym_div_DASHdouble] = ACTIONS(25),
    [anon_sym_rem_DASHdouble] = ACTIONS(25),
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
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(25),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(23),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(25),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(23),
    [anon_sym_rsub_DASHint] = ACTIONS(25),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(23),
    [anon_sym_DOTline] = ACTIONS(27),
    [anon_sym_DOTlocals] = ACTIONS(29),
    [anon_sym_DOTregisters] = ACTIONS(31),
    [anon_sym_DOTcatch] = ACTIONS(33),
    [anon_sym_DOTcatchall] = ACTIONS(35),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(37),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(39),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_DOTfield] = ACTIONS(86),
    [sym_end_field] = ACTIONS(86),
    [anon_sym_DOTmethod] = ACTIONS(86),
    [sym_end_method] = ACTIONS(86),
    [anon_sym_DOTannotation] = ACTIONS(86),
    [anon_sym_DOTparam] = ACTIONS(86),
    [sym_label] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_nop] = ACTIONS(86),
    [anon_sym_move] = ACTIONS(88),
    [anon_sym_move_SLASHfrom16] = ACTIONS(86),
    [anon_sym_move_SLASH16] = ACTIONS(86),
    [anon_sym_move_DASHwide] = ACTIONS(88),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(86),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(86),
    [anon_sym_move_DASHobject] = ACTIONS(88),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(86),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(86),
    [anon_sym_move_DASHresult] = ACTIONS(88),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(86),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(86),
    [anon_sym_move_DASHexception] = ACTIONS(86),
    [anon_sym_return_DASHvoid] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_return_DASHwide] = ACTIONS(86),
    [anon_sym_return_DASHobject] = ACTIONS(86),
    [anon_sym_const_SLASH4] = ACTIONS(86),
    [anon_sym_const_SLASH16] = ACTIONS(86),
    [anon_sym_const] = ACTIONS(88),
    [anon_sym_const_SLASHhigh16] = ACTIONS(86),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(86),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(86),
    [anon_sym_const_DASHwide] = ACTIONS(88),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(86),
    [anon_sym_const_DASHstring] = ACTIONS(88),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(86),
    [anon_sym_const_DASHclass] = ACTIONS(86),
    [anon_sym_monitor_DASHenter] = ACTIONS(86),
    [anon_sym_monitor_DASHexit] = ACTIONS(86),
    [anon_sym_check_DASHcast] = ACTIONS(86),
    [anon_sym_instance_DASHof] = ACTIONS(86),
    [anon_sym_array_DASHlength] = ACTIONS(86),
    [anon_sym_new_DASHinstance] = ACTIONS(86),
    [anon_sym_new_DASHarray] = ACTIONS(86),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(88),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(86),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(86),
    [anon_sym_throw] = ACTIONS(86),
    [anon_sym_goto] = ACTIONS(88),
    [anon_sym_goto_SLASH16] = ACTIONS(86),
    [anon_sym_goto_SLASH32] = ACTIONS(86),
    [anon_sym_packed_DASHswitch] = ACTIONS(86),
    [anon_sym_sparse_DASHswitch] = ACTIONS(86),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(86),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(86),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(86),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(86),
    [anon_sym_cmp_DASHlong] = ACTIONS(86),
    [anon_sym_if_DASHeq] = ACTIONS(88),
    [anon_sym_if_DASHne] = ACTIONS(88),
    [anon_sym_if_DASHlt] = ACTIONS(88),
    [anon_sym_if_DASHge] = ACTIONS(88),
    [anon_sym_if_DASHgt] = ACTIONS(88),
    [anon_sym_if_DASHle] = ACTIONS(88),
    [anon_sym_if_DASHeqz] = ACTIONS(86),
    [anon_sym_if_DASHnez] = ACTIONS(86),
    [anon_sym_if_DASHltz] = ACTIONS(86),
    [anon_sym_if_DASHgez] = ACTIONS(86),
    [anon_sym_if_DASHgtz] = ACTIONS(86),
    [anon_sym_if_DASHlez] = ACTIONS(86),
    [anon_sym_aget] = ACTIONS(88),
    [anon_sym_aget_DASHwide] = ACTIONS(86),
    [anon_sym_aget_DASHobject] = ACTIONS(86),
    [anon_sym_aget_DASHboolean] = ACTIONS(86),
    [anon_sym_aget_DASHbyte] = ACTIONS(86),
    [anon_sym_aget_DASHchar] = ACTIONS(86),
    [anon_sym_aget_DASHshort] = ACTIONS(86),
    [anon_sym_aput] = ACTIONS(88),
    [anon_sym_aput_DASHwide] = ACTIONS(86),
    [anon_sym_aput_DASHobject] = ACTIONS(86),
    [anon_sym_aput_DASHboolean] = ACTIONS(86),
    [anon_sym_aput_DASHbyte] = ACTIONS(86),
    [anon_sym_aput_DASHchar] = ACTIONS(86),
    [anon_sym_aput_DASHshort] = ACTIONS(86),
    [anon_sym_iget] = ACTIONS(88),
    [anon_sym_iget_DASHwide] = ACTIONS(88),
    [anon_sym_iget_DASHobject] = ACTIONS(88),
    [anon_sym_iget_DASHboolean] = ACTIONS(86),
    [anon_sym_iget_DASHbyte] = ACTIONS(86),
    [anon_sym_iget_DASHchar] = ACTIONS(86),
    [anon_sym_iget_DASHshort] = ACTIONS(86),
    [anon_sym_iput] = ACTIONS(88),
    [anon_sym_iput_DASHwide] = ACTIONS(88),
    [anon_sym_iput_DASHobject] = ACTIONS(88),
    [anon_sym_iput_DASHboolean] = ACTIONS(86),
    [anon_sym_iput_DASHbyte] = ACTIONS(86),
    [anon_sym_iput_DASHchar] = ACTIONS(86),
    [anon_sym_iput_DASHshort] = ACTIONS(86),
    [anon_sym_sget] = ACTIONS(88),
    [anon_sym_sget_DASHwide] = ACTIONS(86),
    [anon_sym_sget_DASHobject] = ACTIONS(86),
    [anon_sym_sget_DASHboolean] = ACTIONS(86),
    [anon_sym_sget_DASHbyte] = ACTIONS(86),
    [anon_sym_sget_DASHchar] = ACTIONS(86),
    [anon_sym_sget_DASHshort] = ACTIONS(86),
    [anon_sym_sput] = ACTIONS(88),
    [anon_sym_sput_DASHwide] = ACTIONS(86),
    [anon_sym_sput_DASHobject] = ACTIONS(86),
    [anon_sym_sput_DASHboolean] = ACTIONS(86),
    [anon_sym_sput_DASHbyte] = ACTIONS(86),
    [anon_sym_sput_DASHchar] = ACTIONS(86),
    [anon_sym_sput_DASHshort] = ACTIONS(86),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(88),
    [anon_sym_invoke_DASHsuper] = ACTIONS(88),
    [anon_sym_invoke_DASHdirect] = ACTIONS(88),
    [anon_sym_invoke_DASHstatic] = ACTIONS(88),
    [anon_sym_invoke_DASHinterface] = ACTIONS(88),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(86),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(86),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(86),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(86),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(86),
    [anon_sym_neg_DASHint] = ACTIONS(86),
    [anon_sym_not_DASHint] = ACTIONS(86),
    [anon_sym_neg_DASHlong] = ACTIONS(86),
    [anon_sym_not_DASHlong] = ACTIONS(86),
    [anon_sym_neg_DASHfloat] = ACTIONS(86),
    [anon_sym_neg_DASHdouble] = ACTIONS(86),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(86),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(86),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(86),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(86),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(86),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(86),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(86),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(86),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(86),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(86),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(86),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(86),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(86),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(86),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(86),
    [anon_sym_add_DASHint] = ACTIONS(88),
    [anon_sym_sub_DASHint] = ACTIONS(88),
    [anon_sym_mul_DASHint] = ACTIONS(88),
    [anon_sym_div_DASHint] = ACTIONS(88),
    [anon_sym_rem_DASHint] = ACTIONS(88),
    [anon_sym_and_DASHint] = ACTIONS(88),
    [anon_sym_or_DASHint] = ACTIONS(88),
    [anon_sym_xor_DASHint] = ACTIONS(88),
    [anon_sym_shl_DASHint] = ACTIONS(88),
    [anon_sym_shr_DASHint] = ACTIONS(88),
    [anon_sym_ushr_DASHint] = ACTIONS(88),
    [anon_sym_add_DASHlong] = ACTIONS(88),
    [anon_sym_sub_DASHlong] = ACTIONS(88),
    [anon_sym_mul_DASHlong] = ACTIONS(88),
    [anon_sym_div_DASHlong] = ACTIONS(88),
    [anon_sym_rem_DASHlong] = ACTIONS(88),
    [anon_sym_and_DASHlong] = ACTIONS(88),
    [anon_sym_or_DASHlong] = ACTIONS(88),
    [anon_sym_xor_DASHlong] = ACTIONS(88),
    [anon_sym_shl_DASHlong] = ACTIONS(88),
    [anon_sym_shr_DASHlong] = ACTIONS(88),
    [anon_sym_ushr_DASHlong] = ACTIONS(88),
    [anon_sym_add_DASHfloat] = ACTIONS(88),
    [anon_sym_sub_DASHfloat] = ACTIONS(88),
    [anon_sym_mul_DASHfloat] = ACTIONS(88),
    [anon_sym_div_DASHfloat] = ACTIONS(88),
    [anon_sym_rem_DASHfloat] = ACTIONS(88),
    [anon_sym_add_DASHdouble] = ACTIONS(88),
    [anon_sym_sub_DASHdouble] = ACTIONS(88),
    [anon_sym_mul_DASHdouble] = ACTIONS(88),
    [anon_sym_div_DASHdouble] = ACTIONS(88),
    [anon_sym_rem_DASHdouble] = ACTIONS(88),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(86),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(86),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(86),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(86),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(86),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(86),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(86),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(86),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(86),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(86),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(86),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(86),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(86),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_execute_DASHinline] = ACTIONS(86),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(86),
    [anon_sym_iget_DASHquick] = ACTIONS(86),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(86),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(86),
    [anon_sym_iput_DASHquick] = ACTIONS(86),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(86),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(86),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(88),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(86),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(88),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(86),
    [anon_sym_rsub_DASHint] = ACTIONS(88),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(86),
    [anon_sym_DOTline] = ACTIONS(86),
    [anon_sym_DOTlocals] = ACTIONS(86),
    [anon_sym_DOTregisters] = ACTIONS(86),
    [anon_sym_DOTcatch] = ACTIONS(88),
    [anon_sym_DOT_DOT] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_DOTcatchall] = ACTIONS(86),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(86),
    [anon_sym_DOTendpacked_DASHswitch] = ACTIONS(86),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(86),
    [anon_sym_DOTendarray_DASHdata] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_literal_token1] = ACTIONS(86),
    [aux_sym_number_literal_token2] = ACTIONS(88),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_DOTfield] = ACTIONS(90),
    [sym_end_field] = ACTIONS(90),
    [anon_sym_DOTmethod] = ACTIONS(90),
    [sym_end_method] = ACTIONS(90),
    [anon_sym_DOTannotation] = ACTIONS(90),
    [anon_sym_DOTparam] = ACTIONS(90),
    [sym_end_param] = ACTIONS(90),
    [sym_label] = ACTIONS(90),
    [anon_sym_nop] = ACTIONS(90),
    [anon_sym_move] = ACTIONS(92),
    [anon_sym_move_SLASHfrom16] = ACTIONS(90),
    [anon_sym_move_SLASH16] = ACTIONS(90),
    [anon_sym_move_DASHwide] = ACTIONS(92),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(90),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(90),
    [anon_sym_move_DASHobject] = ACTIONS(92),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(90),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(90),
    [anon_sym_move_DASHresult] = ACTIONS(92),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(90),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(90),
    [anon_sym_move_DASHexception] = ACTIONS(90),
    [anon_sym_return_DASHvoid] = ACTIONS(90),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_return_DASHwide] = ACTIONS(90),
    [anon_sym_return_DASHobject] = ACTIONS(90),
    [anon_sym_const_SLASH4] = ACTIONS(90),
    [anon_sym_const_SLASH16] = ACTIONS(90),
    [anon_sym_const] = ACTIONS(92),
    [anon_sym_const_SLASHhigh16] = ACTIONS(90),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(90),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(90),
    [anon_sym_const_DASHwide] = ACTIONS(92),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(90),
    [anon_sym_const_DASHstring] = ACTIONS(92),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(90),
    [anon_sym_const_DASHclass] = ACTIONS(90),
    [anon_sym_monitor_DASHenter] = ACTIONS(90),
    [anon_sym_monitor_DASHexit] = ACTIONS(90),
    [anon_sym_check_DASHcast] = ACTIONS(90),
    [anon_sym_instance_DASHof] = ACTIONS(90),
    [anon_sym_array_DASHlength] = ACTIONS(90),
    [anon_sym_new_DASHinstance] = ACTIONS(90),
    [anon_sym_new_DASHarray] = ACTIONS(90),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(92),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(90),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(90),
    [anon_sym_throw] = ACTIONS(90),
    [anon_sym_goto] = ACTIONS(92),
    [anon_sym_goto_SLASH16] = ACTIONS(90),
    [anon_sym_goto_SLASH32] = ACTIONS(90),
    [anon_sym_packed_DASHswitch] = ACTIONS(90),
    [anon_sym_sparse_DASHswitch] = ACTIONS(90),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(90),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(90),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(90),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(90),
    [anon_sym_cmp_DASHlong] = ACTIONS(90),
    [anon_sym_if_DASHeq] = ACTIONS(92),
    [anon_sym_if_DASHne] = ACTIONS(92),
    [anon_sym_if_DASHlt] = ACTIONS(92),
    [anon_sym_if_DASHge] = ACTIONS(92),
    [anon_sym_if_DASHgt] = ACTIONS(92),
    [anon_sym_if_DASHle] = ACTIONS(92),
    [anon_sym_if_DASHeqz] = ACTIONS(90),
    [anon_sym_if_DASHnez] = ACTIONS(90),
    [anon_sym_if_DASHltz] = ACTIONS(90),
    [anon_sym_if_DASHgez] = ACTIONS(90),
    [anon_sym_if_DASHgtz] = ACTIONS(90),
    [anon_sym_if_DASHlez] = ACTIONS(90),
    [anon_sym_aget] = ACTIONS(92),
    [anon_sym_aget_DASHwide] = ACTIONS(90),
    [anon_sym_aget_DASHobject] = ACTIONS(90),
    [anon_sym_aget_DASHboolean] = ACTIONS(90),
    [anon_sym_aget_DASHbyte] = ACTIONS(90),
    [anon_sym_aget_DASHchar] = ACTIONS(90),
    [anon_sym_aget_DASHshort] = ACTIONS(90),
    [anon_sym_aput] = ACTIONS(92),
    [anon_sym_aput_DASHwide] = ACTIONS(90),
    [anon_sym_aput_DASHobject] = ACTIONS(90),
    [anon_sym_aput_DASHboolean] = ACTIONS(90),
    [anon_sym_aput_DASHbyte] = ACTIONS(90),
    [anon_sym_aput_DASHchar] = ACTIONS(90),
    [anon_sym_aput_DASHshort] = ACTIONS(90),
    [anon_sym_iget] = ACTIONS(92),
    [anon_sym_iget_DASHwide] = ACTIONS(92),
    [anon_sym_iget_DASHobject] = ACTIONS(92),
    [anon_sym_iget_DASHboolean] = ACTIONS(90),
    [anon_sym_iget_DASHbyte] = ACTIONS(90),
    [anon_sym_iget_DASHchar] = ACTIONS(90),
    [anon_sym_iget_DASHshort] = ACTIONS(90),
    [anon_sym_iput] = ACTIONS(92),
    [anon_sym_iput_DASHwide] = ACTIONS(92),
    [anon_sym_iput_DASHobject] = ACTIONS(92),
    [anon_sym_iput_DASHboolean] = ACTIONS(90),
    [anon_sym_iput_DASHbyte] = ACTIONS(90),
    [anon_sym_iput_DASHchar] = ACTIONS(90),
    [anon_sym_iput_DASHshort] = ACTIONS(90),
    [anon_sym_sget] = ACTIONS(92),
    [anon_sym_sget_DASHwide] = ACTIONS(90),
    [anon_sym_sget_DASHobject] = ACTIONS(90),
    [anon_sym_sget_DASHboolean] = ACTIONS(90),
    [anon_sym_sget_DASHbyte] = ACTIONS(90),
    [anon_sym_sget_DASHchar] = ACTIONS(90),
    [anon_sym_sget_DASHshort] = ACTIONS(90),
    [anon_sym_sput] = ACTIONS(92),
    [anon_sym_sput_DASHwide] = ACTIONS(90),
    [anon_sym_sput_DASHobject] = ACTIONS(90),
    [anon_sym_sput_DASHboolean] = ACTIONS(90),
    [anon_sym_sput_DASHbyte] = ACTIONS(90),
    [anon_sym_sput_DASHchar] = ACTIONS(90),
    [anon_sym_sput_DASHshort] = ACTIONS(90),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(92),
    [anon_sym_invoke_DASHsuper] = ACTIONS(92),
    [anon_sym_invoke_DASHdirect] = ACTIONS(92),
    [anon_sym_invoke_DASHstatic] = ACTIONS(92),
    [anon_sym_invoke_DASHinterface] = ACTIONS(92),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(90),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(90),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(90),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(90),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(90),
    [anon_sym_neg_DASHint] = ACTIONS(90),
    [anon_sym_not_DASHint] = ACTIONS(90),
    [anon_sym_neg_DASHlong] = ACTIONS(90),
    [anon_sym_not_DASHlong] = ACTIONS(90),
    [anon_sym_neg_DASHfloat] = ACTIONS(90),
    [anon_sym_neg_DASHdouble] = ACTIONS(90),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(90),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(90),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(90),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(90),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(90),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(90),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(90),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(90),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(90),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(90),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(90),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(90),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(90),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(90),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(90),
    [anon_sym_add_DASHint] = ACTIONS(92),
    [anon_sym_sub_DASHint] = ACTIONS(92),
    [anon_sym_mul_DASHint] = ACTIONS(92),
    [anon_sym_div_DASHint] = ACTIONS(92),
    [anon_sym_rem_DASHint] = ACTIONS(92),
    [anon_sym_and_DASHint] = ACTIONS(92),
    [anon_sym_or_DASHint] = ACTIONS(92),
    [anon_sym_xor_DASHint] = ACTIONS(92),
    [anon_sym_shl_DASHint] = ACTIONS(92),
    [anon_sym_shr_DASHint] = ACTIONS(92),
    [anon_sym_ushr_DASHint] = ACTIONS(92),
    [anon_sym_add_DASHlong] = ACTIONS(92),
    [anon_sym_sub_DASHlong] = ACTIONS(92),
    [anon_sym_mul_DASHlong] = ACTIONS(92),
    [anon_sym_div_DASHlong] = ACTIONS(92),
    [anon_sym_rem_DASHlong] = ACTIONS(92),
    [anon_sym_and_DASHlong] = ACTIONS(92),
    [anon_sym_or_DASHlong] = ACTIONS(92),
    [anon_sym_xor_DASHlong] = ACTIONS(92),
    [anon_sym_shl_DASHlong] = ACTIONS(92),
    [anon_sym_shr_DASHlong] = ACTIONS(92),
    [anon_sym_ushr_DASHlong] = ACTIONS(92),
    [anon_sym_add_DASHfloat] = ACTIONS(92),
    [anon_sym_sub_DASHfloat] = ACTIONS(92),
    [anon_sym_mul_DASHfloat] = ACTIONS(92),
    [anon_sym_div_DASHfloat] = ACTIONS(92),
    [anon_sym_rem_DASHfloat] = ACTIONS(92),
    [anon_sym_add_DASHdouble] = ACTIONS(92),
    [anon_sym_sub_DASHdouble] = ACTIONS(92),
    [anon_sym_mul_DASHdouble] = ACTIONS(92),
    [anon_sym_div_DASHdouble] = ACTIONS(92),
    [anon_sym_rem_DASHdouble] = ACTIONS(92),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(90),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(90),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(90),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(90),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(90),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(90),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(90),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(90),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(90),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(90),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(90),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(90),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(90),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_execute_DASHinline] = ACTIONS(90),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(90),
    [anon_sym_iget_DASHquick] = ACTIONS(90),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(90),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(90),
    [anon_sym_iput_DASHquick] = ACTIONS(90),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(90),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(90),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(92),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(90),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(92),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(90),
    [anon_sym_rsub_DASHint] = ACTIONS(92),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(90),
    [anon_sym_DOTline] = ACTIONS(90),
    [anon_sym_DOTlocals] = ACTIONS(90),
    [anon_sym_DOTregisters] = ACTIONS(90),
    [anon_sym_DOTcatch] = ACTIONS(92),
    [anon_sym_DOTcatchall] = ACTIONS(90),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(90),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(90),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_DOTfield] = ACTIONS(94),
    [sym_end_field] = ACTIONS(94),
    [anon_sym_DOTmethod] = ACTIONS(94),
    [sym_end_method] = ACTIONS(94),
    [anon_sym_DOTannotation] = ACTIONS(94),
    [anon_sym_DOTparam] = ACTIONS(94),
    [sym_end_param] = ACTIONS(94),
    [sym_label] = ACTIONS(94),
    [anon_sym_nop] = ACTIONS(94),
    [anon_sym_move] = ACTIONS(96),
    [anon_sym_move_SLASHfrom16] = ACTIONS(94),
    [anon_sym_move_SLASH16] = ACTIONS(94),
    [anon_sym_move_DASHwide] = ACTIONS(96),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(94),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(94),
    [anon_sym_move_DASHobject] = ACTIONS(96),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(94),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(94),
    [anon_sym_move_DASHresult] = ACTIONS(96),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(94),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(94),
    [anon_sym_move_DASHexception] = ACTIONS(94),
    [anon_sym_return_DASHvoid] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(96),
    [anon_sym_return_DASHwide] = ACTIONS(94),
    [anon_sym_return_DASHobject] = ACTIONS(94),
    [anon_sym_const_SLASH4] = ACTIONS(94),
    [anon_sym_const_SLASH16] = ACTIONS(94),
    [anon_sym_const] = ACTIONS(96),
    [anon_sym_const_SLASHhigh16] = ACTIONS(94),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(94),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(94),
    [anon_sym_const_DASHwide] = ACTIONS(96),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(94),
    [anon_sym_const_DASHstring] = ACTIONS(96),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(94),
    [anon_sym_const_DASHclass] = ACTIONS(94),
    [anon_sym_monitor_DASHenter] = ACTIONS(94),
    [anon_sym_monitor_DASHexit] = ACTIONS(94),
    [anon_sym_check_DASHcast] = ACTIONS(94),
    [anon_sym_instance_DASHof] = ACTIONS(94),
    [anon_sym_array_DASHlength] = ACTIONS(94),
    [anon_sym_new_DASHinstance] = ACTIONS(94),
    [anon_sym_new_DASHarray] = ACTIONS(94),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(96),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(94),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(94),
    [anon_sym_throw] = ACTIONS(94),
    [anon_sym_goto] = ACTIONS(96),
    [anon_sym_goto_SLASH16] = ACTIONS(94),
    [anon_sym_goto_SLASH32] = ACTIONS(94),
    [anon_sym_packed_DASHswitch] = ACTIONS(94),
    [anon_sym_sparse_DASHswitch] = ACTIONS(94),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(94),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(94),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(94),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(94),
    [anon_sym_cmp_DASHlong] = ACTIONS(94),
    [anon_sym_if_DASHeq] = ACTIONS(96),
    [anon_sym_if_DASHne] = ACTIONS(96),
    [anon_sym_if_DASHlt] = ACTIONS(96),
    [anon_sym_if_DASHge] = ACTIONS(96),
    [anon_sym_if_DASHgt] = ACTIONS(96),
    [anon_sym_if_DASHle] = ACTIONS(96),
    [anon_sym_if_DASHeqz] = ACTIONS(94),
    [anon_sym_if_DASHnez] = ACTIONS(94),
    [anon_sym_if_DASHltz] = ACTIONS(94),
    [anon_sym_if_DASHgez] = ACTIONS(94),
    [anon_sym_if_DASHgtz] = ACTIONS(94),
    [anon_sym_if_DASHlez] = ACTIONS(94),
    [anon_sym_aget] = ACTIONS(96),
    [anon_sym_aget_DASHwide] = ACTIONS(94),
    [anon_sym_aget_DASHobject] = ACTIONS(94),
    [anon_sym_aget_DASHboolean] = ACTIONS(94),
    [anon_sym_aget_DASHbyte] = ACTIONS(94),
    [anon_sym_aget_DASHchar] = ACTIONS(94),
    [anon_sym_aget_DASHshort] = ACTIONS(94),
    [anon_sym_aput] = ACTIONS(96),
    [anon_sym_aput_DASHwide] = ACTIONS(94),
    [anon_sym_aput_DASHobject] = ACTIONS(94),
    [anon_sym_aput_DASHboolean] = ACTIONS(94),
    [anon_sym_aput_DASHbyte] = ACTIONS(94),
    [anon_sym_aput_DASHchar] = ACTIONS(94),
    [anon_sym_aput_DASHshort] = ACTIONS(94),
    [anon_sym_iget] = ACTIONS(96),
    [anon_sym_iget_DASHwide] = ACTIONS(96),
    [anon_sym_iget_DASHobject] = ACTIONS(96),
    [anon_sym_iget_DASHboolean] = ACTIONS(94),
    [anon_sym_iget_DASHbyte] = ACTIONS(94),
    [anon_sym_iget_DASHchar] = ACTIONS(94),
    [anon_sym_iget_DASHshort] = ACTIONS(94),
    [anon_sym_iput] = ACTIONS(96),
    [anon_sym_iput_DASHwide] = ACTIONS(96),
    [anon_sym_iput_DASHobject] = ACTIONS(96),
    [anon_sym_iput_DASHboolean] = ACTIONS(94),
    [anon_sym_iput_DASHbyte] = ACTIONS(94),
    [anon_sym_iput_DASHchar] = ACTIONS(94),
    [anon_sym_iput_DASHshort] = ACTIONS(94),
    [anon_sym_sget] = ACTIONS(96),
    [anon_sym_sget_DASHwide] = ACTIONS(94),
    [anon_sym_sget_DASHobject] = ACTIONS(94),
    [anon_sym_sget_DASHboolean] = ACTIONS(94),
    [anon_sym_sget_DASHbyte] = ACTIONS(94),
    [anon_sym_sget_DASHchar] = ACTIONS(94),
    [anon_sym_sget_DASHshort] = ACTIONS(94),
    [anon_sym_sput] = ACTIONS(96),
    [anon_sym_sput_DASHwide] = ACTIONS(94),
    [anon_sym_sput_DASHobject] = ACTIONS(94),
    [anon_sym_sput_DASHboolean] = ACTIONS(94),
    [anon_sym_sput_DASHbyte] = ACTIONS(94),
    [anon_sym_sput_DASHchar] = ACTIONS(94),
    [anon_sym_sput_DASHshort] = ACTIONS(94),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(96),
    [anon_sym_invoke_DASHsuper] = ACTIONS(96),
    [anon_sym_invoke_DASHdirect] = ACTIONS(96),
    [anon_sym_invoke_DASHstatic] = ACTIONS(96),
    [anon_sym_invoke_DASHinterface] = ACTIONS(96),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(94),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(94),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(94),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(94),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(94),
    [anon_sym_neg_DASHint] = ACTIONS(94),
    [anon_sym_not_DASHint] = ACTIONS(94),
    [anon_sym_neg_DASHlong] = ACTIONS(94),
    [anon_sym_not_DASHlong] = ACTIONS(94),
    [anon_sym_neg_DASHfloat] = ACTIONS(94),
    [anon_sym_neg_DASHdouble] = ACTIONS(94),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(94),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(94),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(94),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(94),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(94),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(94),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(94),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(94),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(94),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(94),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(94),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(94),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(94),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(94),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(94),
    [anon_sym_add_DASHint] = ACTIONS(96),
    [anon_sym_sub_DASHint] = ACTIONS(96),
    [anon_sym_mul_DASHint] = ACTIONS(96),
    [anon_sym_div_DASHint] = ACTIONS(96),
    [anon_sym_rem_DASHint] = ACTIONS(96),
    [anon_sym_and_DASHint] = ACTIONS(96),
    [anon_sym_or_DASHint] = ACTIONS(96),
    [anon_sym_xor_DASHint] = ACTIONS(96),
    [anon_sym_shl_DASHint] = ACTIONS(96),
    [anon_sym_shr_DASHint] = ACTIONS(96),
    [anon_sym_ushr_DASHint] = ACTIONS(96),
    [anon_sym_add_DASHlong] = ACTIONS(96),
    [anon_sym_sub_DASHlong] = ACTIONS(96),
    [anon_sym_mul_DASHlong] = ACTIONS(96),
    [anon_sym_div_DASHlong] = ACTIONS(96),
    [anon_sym_rem_DASHlong] = ACTIONS(96),
    [anon_sym_and_DASHlong] = ACTIONS(96),
    [anon_sym_or_DASHlong] = ACTIONS(96),
    [anon_sym_xor_DASHlong] = ACTIONS(96),
    [anon_sym_shl_DASHlong] = ACTIONS(96),
    [anon_sym_shr_DASHlong] = ACTIONS(96),
    [anon_sym_ushr_DASHlong] = ACTIONS(96),
    [anon_sym_add_DASHfloat] = ACTIONS(96),
    [anon_sym_sub_DASHfloat] = ACTIONS(96),
    [anon_sym_mul_DASHfloat] = ACTIONS(96),
    [anon_sym_div_DASHfloat] = ACTIONS(96),
    [anon_sym_rem_DASHfloat] = ACTIONS(96),
    [anon_sym_add_DASHdouble] = ACTIONS(96),
    [anon_sym_sub_DASHdouble] = ACTIONS(96),
    [anon_sym_mul_DASHdouble] = ACTIONS(96),
    [anon_sym_div_DASHdouble] = ACTIONS(96),
    [anon_sym_rem_DASHdouble] = ACTIONS(96),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(94),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(94),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(94),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(94),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(94),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(94),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(94),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(94),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(94),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(94),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(94),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(94),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(94),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_execute_DASHinline] = ACTIONS(94),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(94),
    [anon_sym_iget_DASHquick] = ACTIONS(94),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(94),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(94),
    [anon_sym_iput_DASHquick] = ACTIONS(94),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(94),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(94),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(96),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(94),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(96),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(94),
    [anon_sym_rsub_DASHint] = ACTIONS(96),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(94),
    [anon_sym_DOTline] = ACTIONS(94),
    [anon_sym_DOTlocals] = ACTIONS(94),
    [anon_sym_DOTregisters] = ACTIONS(94),
    [anon_sym_DOTcatch] = ACTIONS(96),
    [anon_sym_DOTcatchall] = ACTIONS(94),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(94),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(94),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_annotation_directive] = STATE(98),
    [sym_start_annotation] = STATE(118),
    [aux_sym_class_definition_repeat2] = STATE(98),
    [sym_end_method] = ACTIONS(98),
    [anon_sym_DOTannotation] = ACTIONS(17),
    [anon_sym_DOTparam] = ACTIONS(98),
    [sym_end_param] = ACTIONS(100),
    [sym_label] = ACTIONS(98),
    [anon_sym_nop] = ACTIONS(98),
    [anon_sym_move] = ACTIONS(102),
    [anon_sym_move_SLASHfrom16] = ACTIONS(98),
    [anon_sym_move_SLASH16] = ACTIONS(98),
    [anon_sym_move_DASHwide] = ACTIONS(102),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(98),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(98),
    [anon_sym_move_DASHobject] = ACTIONS(102),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(98),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(98),
    [anon_sym_move_DASHresult] = ACTIONS(102),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(98),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(98),
    [anon_sym_move_DASHexception] = ACTIONS(98),
    [anon_sym_return_DASHvoid] = ACTIONS(98),
    [anon_sym_return] = ACTIONS(102),
    [anon_sym_return_DASHwide] = ACTIONS(98),
    [anon_sym_return_DASHobject] = ACTIONS(98),
    [anon_sym_const_SLASH4] = ACTIONS(98),
    [anon_sym_const_SLASH16] = ACTIONS(98),
    [anon_sym_const] = ACTIONS(102),
    [anon_sym_const_SLASHhigh16] = ACTIONS(98),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(98),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(98),
    [anon_sym_const_DASHwide] = ACTIONS(102),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(98),
    [anon_sym_const_DASHstring] = ACTIONS(102),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(98),
    [anon_sym_const_DASHclass] = ACTIONS(98),
    [anon_sym_monitor_DASHenter] = ACTIONS(98),
    [anon_sym_monitor_DASHexit] = ACTIONS(98),
    [anon_sym_check_DASHcast] = ACTIONS(98),
    [anon_sym_instance_DASHof] = ACTIONS(98),
    [anon_sym_array_DASHlength] = ACTIONS(98),
    [anon_sym_new_DASHinstance] = ACTIONS(98),
    [anon_sym_new_DASHarray] = ACTIONS(98),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(102),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(98),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(98),
    [anon_sym_throw] = ACTIONS(98),
    [anon_sym_goto] = ACTIONS(102),
    [anon_sym_goto_SLASH16] = ACTIONS(98),
    [anon_sym_goto_SLASH32] = ACTIONS(98),
    [anon_sym_packed_DASHswitch] = ACTIONS(98),
    [anon_sym_sparse_DASHswitch] = ACTIONS(98),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(98),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(98),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(98),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(98),
    [anon_sym_cmp_DASHlong] = ACTIONS(98),
    [anon_sym_if_DASHeq] = ACTIONS(102),
    [anon_sym_if_DASHne] = ACTIONS(102),
    [anon_sym_if_DASHlt] = ACTIONS(102),
    [anon_sym_if_DASHge] = ACTIONS(102),
    [anon_sym_if_DASHgt] = ACTIONS(102),
    [anon_sym_if_DASHle] = ACTIONS(102),
    [anon_sym_if_DASHeqz] = ACTIONS(98),
    [anon_sym_if_DASHnez] = ACTIONS(98),
    [anon_sym_if_DASHltz] = ACTIONS(98),
    [anon_sym_if_DASHgez] = ACTIONS(98),
    [anon_sym_if_DASHgtz] = ACTIONS(98),
    [anon_sym_if_DASHlez] = ACTIONS(98),
    [anon_sym_aget] = ACTIONS(102),
    [anon_sym_aget_DASHwide] = ACTIONS(98),
    [anon_sym_aget_DASHobject] = ACTIONS(98),
    [anon_sym_aget_DASHboolean] = ACTIONS(98),
    [anon_sym_aget_DASHbyte] = ACTIONS(98),
    [anon_sym_aget_DASHchar] = ACTIONS(98),
    [anon_sym_aget_DASHshort] = ACTIONS(98),
    [anon_sym_aput] = ACTIONS(102),
    [anon_sym_aput_DASHwide] = ACTIONS(98),
    [anon_sym_aput_DASHobject] = ACTIONS(98),
    [anon_sym_aput_DASHboolean] = ACTIONS(98),
    [anon_sym_aput_DASHbyte] = ACTIONS(98),
    [anon_sym_aput_DASHchar] = ACTIONS(98),
    [anon_sym_aput_DASHshort] = ACTIONS(98),
    [anon_sym_iget] = ACTIONS(102),
    [anon_sym_iget_DASHwide] = ACTIONS(102),
    [anon_sym_iget_DASHobject] = ACTIONS(102),
    [anon_sym_iget_DASHboolean] = ACTIONS(98),
    [anon_sym_iget_DASHbyte] = ACTIONS(98),
    [anon_sym_iget_DASHchar] = ACTIONS(98),
    [anon_sym_iget_DASHshort] = ACTIONS(98),
    [anon_sym_iput] = ACTIONS(102),
    [anon_sym_iput_DASHwide] = ACTIONS(102),
    [anon_sym_iput_DASHobject] = ACTIONS(102),
    [anon_sym_iput_DASHboolean] = ACTIONS(98),
    [anon_sym_iput_DASHbyte] = ACTIONS(98),
    [anon_sym_iput_DASHchar] = ACTIONS(98),
    [anon_sym_iput_DASHshort] = ACTIONS(98),
    [anon_sym_sget] = ACTIONS(102),
    [anon_sym_sget_DASHwide] = ACTIONS(98),
    [anon_sym_sget_DASHobject] = ACTIONS(98),
    [anon_sym_sget_DASHboolean] = ACTIONS(98),
    [anon_sym_sget_DASHbyte] = ACTIONS(98),
    [anon_sym_sget_DASHchar] = ACTIONS(98),
    [anon_sym_sget_DASHshort] = ACTIONS(98),
    [anon_sym_sput] = ACTIONS(102),
    [anon_sym_sput_DASHwide] = ACTIONS(98),
    [anon_sym_sput_DASHobject] = ACTIONS(98),
    [anon_sym_sput_DASHboolean] = ACTIONS(98),
    [anon_sym_sput_DASHbyte] = ACTIONS(98),
    [anon_sym_sput_DASHchar] = ACTIONS(98),
    [anon_sym_sput_DASHshort] = ACTIONS(98),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(102),
    [anon_sym_invoke_DASHsuper] = ACTIONS(102),
    [anon_sym_invoke_DASHdirect] = ACTIONS(102),
    [anon_sym_invoke_DASHstatic] = ACTIONS(102),
    [anon_sym_invoke_DASHinterface] = ACTIONS(102),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(98),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(98),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(98),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(98),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(98),
    [anon_sym_neg_DASHint] = ACTIONS(98),
    [anon_sym_not_DASHint] = ACTIONS(98),
    [anon_sym_neg_DASHlong] = ACTIONS(98),
    [anon_sym_not_DASHlong] = ACTIONS(98),
    [anon_sym_neg_DASHfloat] = ACTIONS(98),
    [anon_sym_neg_DASHdouble] = ACTIONS(98),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(98),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(98),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(98),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(98),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(98),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(98),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(98),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(98),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(98),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(98),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(98),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(98),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(98),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(98),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(98),
    [anon_sym_add_DASHint] = ACTIONS(102),
    [anon_sym_sub_DASHint] = ACTIONS(102),
    [anon_sym_mul_DASHint] = ACTIONS(102),
    [anon_sym_div_DASHint] = ACTIONS(102),
    [anon_sym_rem_DASHint] = ACTIONS(102),
    [anon_sym_and_DASHint] = ACTIONS(102),
    [anon_sym_or_DASHint] = ACTIONS(102),
    [anon_sym_xor_DASHint] = ACTIONS(102),
    [anon_sym_shl_DASHint] = ACTIONS(102),
    [anon_sym_shr_DASHint] = ACTIONS(102),
    [anon_sym_ushr_DASHint] = ACTIONS(102),
    [anon_sym_add_DASHlong] = ACTIONS(102),
    [anon_sym_sub_DASHlong] = ACTIONS(102),
    [anon_sym_mul_DASHlong] = ACTIONS(102),
    [anon_sym_div_DASHlong] = ACTIONS(102),
    [anon_sym_rem_DASHlong] = ACTIONS(102),
    [anon_sym_and_DASHlong] = ACTIONS(102),
    [anon_sym_or_DASHlong] = ACTIONS(102),
    [anon_sym_xor_DASHlong] = ACTIONS(102),
    [anon_sym_shl_DASHlong] = ACTIONS(102),
    [anon_sym_shr_DASHlong] = ACTIONS(102),
    [anon_sym_ushr_DASHlong] = ACTIONS(102),
    [anon_sym_add_DASHfloat] = ACTIONS(102),
    [anon_sym_sub_DASHfloat] = ACTIONS(102),
    [anon_sym_mul_DASHfloat] = ACTIONS(102),
    [anon_sym_div_DASHfloat] = ACTIONS(102),
    [anon_sym_rem_DASHfloat] = ACTIONS(102),
    [anon_sym_add_DASHdouble] = ACTIONS(102),
    [anon_sym_sub_DASHdouble] = ACTIONS(102),
    [anon_sym_mul_DASHdouble] = ACTIONS(102),
    [anon_sym_div_DASHdouble] = ACTIONS(102),
    [anon_sym_rem_DASHdouble] = ACTIONS(102),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(98),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(98),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(98),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(98),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(98),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(98),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(98),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(98),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(98),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(98),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(98),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(98),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(98),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_execute_DASHinline] = ACTIONS(98),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(98),
    [anon_sym_iget_DASHquick] = ACTIONS(98),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(98),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(98),
    [anon_sym_iput_DASHquick] = ACTIONS(98),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(98),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(98),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(102),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(98),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(102),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(98),
    [anon_sym_rsub_DASHint] = ACTIONS(102),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(98),
    [anon_sym_DOTline] = ACTIONS(98),
    [anon_sym_DOTlocals] = ACTIONS(98),
    [anon_sym_DOTregisters] = ACTIONS(98),
    [anon_sym_DOTcatch] = ACTIONS(102),
    [anon_sym_DOTcatchall] = ACTIONS(98),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(98),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(98),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_end_method] = ACTIONS(104),
    [anon_sym_DOTannotation] = ACTIONS(104),
    [anon_sym_DOTparam] = ACTIONS(104),
    [sym_label] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_nop] = ACTIONS(104),
    [anon_sym_move] = ACTIONS(106),
    [anon_sym_move_SLASHfrom16] = ACTIONS(104),
    [anon_sym_move_SLASH16] = ACTIONS(104),
    [anon_sym_move_DASHwide] = ACTIONS(106),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(104),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(104),
    [anon_sym_move_DASHobject] = ACTIONS(106),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(104),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(104),
    [anon_sym_move_DASHresult] = ACTIONS(106),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(104),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(104),
    [anon_sym_move_DASHexception] = ACTIONS(104),
    [anon_sym_return_DASHvoid] = ACTIONS(104),
    [anon_sym_return] = ACTIONS(106),
    [anon_sym_return_DASHwide] = ACTIONS(104),
    [anon_sym_return_DASHobject] = ACTIONS(104),
    [anon_sym_const_SLASH4] = ACTIONS(104),
    [anon_sym_const_SLASH16] = ACTIONS(104),
    [anon_sym_const] = ACTIONS(106),
    [anon_sym_const_SLASHhigh16] = ACTIONS(104),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(104),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(104),
    [anon_sym_const_DASHwide] = ACTIONS(106),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(104),
    [anon_sym_const_DASHstring] = ACTIONS(106),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(104),
    [anon_sym_const_DASHclass] = ACTIONS(104),
    [anon_sym_monitor_DASHenter] = ACTIONS(104),
    [anon_sym_monitor_DASHexit] = ACTIONS(104),
    [anon_sym_check_DASHcast] = ACTIONS(104),
    [anon_sym_instance_DASHof] = ACTIONS(104),
    [anon_sym_array_DASHlength] = ACTIONS(104),
    [anon_sym_new_DASHinstance] = ACTIONS(104),
    [anon_sym_new_DASHarray] = ACTIONS(104),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(106),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(104),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(104),
    [anon_sym_throw] = ACTIONS(104),
    [anon_sym_goto] = ACTIONS(106),
    [anon_sym_goto_SLASH16] = ACTIONS(104),
    [anon_sym_goto_SLASH32] = ACTIONS(104),
    [anon_sym_packed_DASHswitch] = ACTIONS(104),
    [anon_sym_sparse_DASHswitch] = ACTIONS(104),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(104),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(104),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(104),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(104),
    [anon_sym_cmp_DASHlong] = ACTIONS(104),
    [anon_sym_if_DASHeq] = ACTIONS(106),
    [anon_sym_if_DASHne] = ACTIONS(106),
    [anon_sym_if_DASHlt] = ACTIONS(106),
    [anon_sym_if_DASHge] = ACTIONS(106),
    [anon_sym_if_DASHgt] = ACTIONS(106),
    [anon_sym_if_DASHle] = ACTIONS(106),
    [anon_sym_if_DASHeqz] = ACTIONS(104),
    [anon_sym_if_DASHnez] = ACTIONS(104),
    [anon_sym_if_DASHltz] = ACTIONS(104),
    [anon_sym_if_DASHgez] = ACTIONS(104),
    [anon_sym_if_DASHgtz] = ACTIONS(104),
    [anon_sym_if_DASHlez] = ACTIONS(104),
    [anon_sym_aget] = ACTIONS(106),
    [anon_sym_aget_DASHwide] = ACTIONS(104),
    [anon_sym_aget_DASHobject] = ACTIONS(104),
    [anon_sym_aget_DASHboolean] = ACTIONS(104),
    [anon_sym_aget_DASHbyte] = ACTIONS(104),
    [anon_sym_aget_DASHchar] = ACTIONS(104),
    [anon_sym_aget_DASHshort] = ACTIONS(104),
    [anon_sym_aput] = ACTIONS(106),
    [anon_sym_aput_DASHwide] = ACTIONS(104),
    [anon_sym_aput_DASHobject] = ACTIONS(104),
    [anon_sym_aput_DASHboolean] = ACTIONS(104),
    [anon_sym_aput_DASHbyte] = ACTIONS(104),
    [anon_sym_aput_DASHchar] = ACTIONS(104),
    [anon_sym_aput_DASHshort] = ACTIONS(104),
    [anon_sym_iget] = ACTIONS(106),
    [anon_sym_iget_DASHwide] = ACTIONS(106),
    [anon_sym_iget_DASHobject] = ACTIONS(106),
    [anon_sym_iget_DASHboolean] = ACTIONS(104),
    [anon_sym_iget_DASHbyte] = ACTIONS(104),
    [anon_sym_iget_DASHchar] = ACTIONS(104),
    [anon_sym_iget_DASHshort] = ACTIONS(104),
    [anon_sym_iput] = ACTIONS(106),
    [anon_sym_iput_DASHwide] = ACTIONS(106),
    [anon_sym_iput_DASHobject] = ACTIONS(106),
    [anon_sym_iput_DASHboolean] = ACTIONS(104),
    [anon_sym_iput_DASHbyte] = ACTIONS(104),
    [anon_sym_iput_DASHchar] = ACTIONS(104),
    [anon_sym_iput_DASHshort] = ACTIONS(104),
    [anon_sym_sget] = ACTIONS(106),
    [anon_sym_sget_DASHwide] = ACTIONS(104),
    [anon_sym_sget_DASHobject] = ACTIONS(104),
    [anon_sym_sget_DASHboolean] = ACTIONS(104),
    [anon_sym_sget_DASHbyte] = ACTIONS(104),
    [anon_sym_sget_DASHchar] = ACTIONS(104),
    [anon_sym_sget_DASHshort] = ACTIONS(104),
    [anon_sym_sput] = ACTIONS(106),
    [anon_sym_sput_DASHwide] = ACTIONS(104),
    [anon_sym_sput_DASHobject] = ACTIONS(104),
    [anon_sym_sput_DASHboolean] = ACTIONS(104),
    [anon_sym_sput_DASHbyte] = ACTIONS(104),
    [anon_sym_sput_DASHchar] = ACTIONS(104),
    [anon_sym_sput_DASHshort] = ACTIONS(104),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(106),
    [anon_sym_invoke_DASHsuper] = ACTIONS(106),
    [anon_sym_invoke_DASHdirect] = ACTIONS(106),
    [anon_sym_invoke_DASHstatic] = ACTIONS(106),
    [anon_sym_invoke_DASHinterface] = ACTIONS(106),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(104),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(104),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(104),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(104),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(104),
    [anon_sym_neg_DASHint] = ACTIONS(104),
    [anon_sym_not_DASHint] = ACTIONS(104),
    [anon_sym_neg_DASHlong] = ACTIONS(104),
    [anon_sym_not_DASHlong] = ACTIONS(104),
    [anon_sym_neg_DASHfloat] = ACTIONS(104),
    [anon_sym_neg_DASHdouble] = ACTIONS(104),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(104),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(104),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(104),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(104),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(104),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(104),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(104),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(104),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(104),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(104),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(104),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(104),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(104),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(104),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(104),
    [anon_sym_add_DASHint] = ACTIONS(106),
    [anon_sym_sub_DASHint] = ACTIONS(106),
    [anon_sym_mul_DASHint] = ACTIONS(106),
    [anon_sym_div_DASHint] = ACTIONS(106),
    [anon_sym_rem_DASHint] = ACTIONS(106),
    [anon_sym_and_DASHint] = ACTIONS(106),
    [anon_sym_or_DASHint] = ACTIONS(106),
    [anon_sym_xor_DASHint] = ACTIONS(106),
    [anon_sym_shl_DASHint] = ACTIONS(106),
    [anon_sym_shr_DASHint] = ACTIONS(106),
    [anon_sym_ushr_DASHint] = ACTIONS(106),
    [anon_sym_add_DASHlong] = ACTIONS(106),
    [anon_sym_sub_DASHlong] = ACTIONS(106),
    [anon_sym_mul_DASHlong] = ACTIONS(106),
    [anon_sym_div_DASHlong] = ACTIONS(106),
    [anon_sym_rem_DASHlong] = ACTIONS(106),
    [anon_sym_and_DASHlong] = ACTIONS(106),
    [anon_sym_or_DASHlong] = ACTIONS(106),
    [anon_sym_xor_DASHlong] = ACTIONS(106),
    [anon_sym_shl_DASHlong] = ACTIONS(106),
    [anon_sym_shr_DASHlong] = ACTIONS(106),
    [anon_sym_ushr_DASHlong] = ACTIONS(106),
    [anon_sym_add_DASHfloat] = ACTIONS(106),
    [anon_sym_sub_DASHfloat] = ACTIONS(106),
    [anon_sym_mul_DASHfloat] = ACTIONS(106),
    [anon_sym_div_DASHfloat] = ACTIONS(106),
    [anon_sym_rem_DASHfloat] = ACTIONS(106),
    [anon_sym_add_DASHdouble] = ACTIONS(106),
    [anon_sym_sub_DASHdouble] = ACTIONS(106),
    [anon_sym_mul_DASHdouble] = ACTIONS(106),
    [anon_sym_div_DASHdouble] = ACTIONS(106),
    [anon_sym_rem_DASHdouble] = ACTIONS(106),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(104),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(104),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(104),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(104),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(104),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(104),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(104),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(104),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(104),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(104),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(104),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(104),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(104),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_execute_DASHinline] = ACTIONS(104),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(104),
    [anon_sym_iget_DASHquick] = ACTIONS(104),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(104),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(104),
    [anon_sym_iput_DASHquick] = ACTIONS(104),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(104),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(104),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(106),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(104),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(106),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(104),
    [anon_sym_rsub_DASHint] = ACTIONS(106),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(104),
    [anon_sym_DOTline] = ACTIONS(104),
    [anon_sym_DOTlocals] = ACTIONS(104),
    [anon_sym_DOTregisters] = ACTIONS(104),
    [anon_sym_DOTcatch] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_DOTcatchall] = ACTIONS(104),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(104),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(104),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_end_method] = ACTIONS(108),
    [anon_sym_DOTannotation] = ACTIONS(108),
    [anon_sym_DOTparam] = ACTIONS(108),
    [sym_label] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_nop] = ACTIONS(108),
    [anon_sym_move] = ACTIONS(110),
    [anon_sym_move_SLASHfrom16] = ACTIONS(108),
    [anon_sym_move_SLASH16] = ACTIONS(108),
    [anon_sym_move_DASHwide] = ACTIONS(110),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(108),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(108),
    [anon_sym_move_DASHobject] = ACTIONS(110),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(108),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(108),
    [anon_sym_move_DASHresult] = ACTIONS(110),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(108),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(108),
    [anon_sym_move_DASHexception] = ACTIONS(108),
    [anon_sym_return_DASHvoid] = ACTIONS(108),
    [anon_sym_return] = ACTIONS(110),
    [anon_sym_return_DASHwide] = ACTIONS(108),
    [anon_sym_return_DASHobject] = ACTIONS(108),
    [anon_sym_const_SLASH4] = ACTIONS(108),
    [anon_sym_const_SLASH16] = ACTIONS(108),
    [anon_sym_const] = ACTIONS(110),
    [anon_sym_const_SLASHhigh16] = ACTIONS(108),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(108),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(108),
    [anon_sym_const_DASHwide] = ACTIONS(110),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(108),
    [anon_sym_const_DASHstring] = ACTIONS(110),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(108),
    [anon_sym_const_DASHclass] = ACTIONS(108),
    [anon_sym_monitor_DASHenter] = ACTIONS(108),
    [anon_sym_monitor_DASHexit] = ACTIONS(108),
    [anon_sym_check_DASHcast] = ACTIONS(108),
    [anon_sym_instance_DASHof] = ACTIONS(108),
    [anon_sym_array_DASHlength] = ACTIONS(108),
    [anon_sym_new_DASHinstance] = ACTIONS(108),
    [anon_sym_new_DASHarray] = ACTIONS(108),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(110),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(108),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(108),
    [anon_sym_throw] = ACTIONS(108),
    [anon_sym_goto] = ACTIONS(110),
    [anon_sym_goto_SLASH16] = ACTIONS(108),
    [anon_sym_goto_SLASH32] = ACTIONS(108),
    [anon_sym_packed_DASHswitch] = ACTIONS(108),
    [anon_sym_sparse_DASHswitch] = ACTIONS(108),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(108),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(108),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(108),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(108),
    [anon_sym_cmp_DASHlong] = ACTIONS(108),
    [anon_sym_if_DASHeq] = ACTIONS(110),
    [anon_sym_if_DASHne] = ACTIONS(110),
    [anon_sym_if_DASHlt] = ACTIONS(110),
    [anon_sym_if_DASHge] = ACTIONS(110),
    [anon_sym_if_DASHgt] = ACTIONS(110),
    [anon_sym_if_DASHle] = ACTIONS(110),
    [anon_sym_if_DASHeqz] = ACTIONS(108),
    [anon_sym_if_DASHnez] = ACTIONS(108),
    [anon_sym_if_DASHltz] = ACTIONS(108),
    [anon_sym_if_DASHgez] = ACTIONS(108),
    [anon_sym_if_DASHgtz] = ACTIONS(108),
    [anon_sym_if_DASHlez] = ACTIONS(108),
    [anon_sym_aget] = ACTIONS(110),
    [anon_sym_aget_DASHwide] = ACTIONS(108),
    [anon_sym_aget_DASHobject] = ACTIONS(108),
    [anon_sym_aget_DASHboolean] = ACTIONS(108),
    [anon_sym_aget_DASHbyte] = ACTIONS(108),
    [anon_sym_aget_DASHchar] = ACTIONS(108),
    [anon_sym_aget_DASHshort] = ACTIONS(108),
    [anon_sym_aput] = ACTIONS(110),
    [anon_sym_aput_DASHwide] = ACTIONS(108),
    [anon_sym_aput_DASHobject] = ACTIONS(108),
    [anon_sym_aput_DASHboolean] = ACTIONS(108),
    [anon_sym_aput_DASHbyte] = ACTIONS(108),
    [anon_sym_aput_DASHchar] = ACTIONS(108),
    [anon_sym_aput_DASHshort] = ACTIONS(108),
    [anon_sym_iget] = ACTIONS(110),
    [anon_sym_iget_DASHwide] = ACTIONS(110),
    [anon_sym_iget_DASHobject] = ACTIONS(110),
    [anon_sym_iget_DASHboolean] = ACTIONS(108),
    [anon_sym_iget_DASHbyte] = ACTIONS(108),
    [anon_sym_iget_DASHchar] = ACTIONS(108),
    [anon_sym_iget_DASHshort] = ACTIONS(108),
    [anon_sym_iput] = ACTIONS(110),
    [anon_sym_iput_DASHwide] = ACTIONS(110),
    [anon_sym_iput_DASHobject] = ACTIONS(110),
    [anon_sym_iput_DASHboolean] = ACTIONS(108),
    [anon_sym_iput_DASHbyte] = ACTIONS(108),
    [anon_sym_iput_DASHchar] = ACTIONS(108),
    [anon_sym_iput_DASHshort] = ACTIONS(108),
    [anon_sym_sget] = ACTIONS(110),
    [anon_sym_sget_DASHwide] = ACTIONS(108),
    [anon_sym_sget_DASHobject] = ACTIONS(108),
    [anon_sym_sget_DASHboolean] = ACTIONS(108),
    [anon_sym_sget_DASHbyte] = ACTIONS(108),
    [anon_sym_sget_DASHchar] = ACTIONS(108),
    [anon_sym_sget_DASHshort] = ACTIONS(108),
    [anon_sym_sput] = ACTIONS(110),
    [anon_sym_sput_DASHwide] = ACTIONS(108),
    [anon_sym_sput_DASHobject] = ACTIONS(108),
    [anon_sym_sput_DASHboolean] = ACTIONS(108),
    [anon_sym_sput_DASHbyte] = ACTIONS(108),
    [anon_sym_sput_DASHchar] = ACTIONS(108),
    [anon_sym_sput_DASHshort] = ACTIONS(108),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(110),
    [anon_sym_invoke_DASHsuper] = ACTIONS(110),
    [anon_sym_invoke_DASHdirect] = ACTIONS(110),
    [anon_sym_invoke_DASHstatic] = ACTIONS(110),
    [anon_sym_invoke_DASHinterface] = ACTIONS(110),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(108),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(108),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(108),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(108),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(108),
    [anon_sym_neg_DASHint] = ACTIONS(108),
    [anon_sym_not_DASHint] = ACTIONS(108),
    [anon_sym_neg_DASHlong] = ACTIONS(108),
    [anon_sym_not_DASHlong] = ACTIONS(108),
    [anon_sym_neg_DASHfloat] = ACTIONS(108),
    [anon_sym_neg_DASHdouble] = ACTIONS(108),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(108),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(108),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(108),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(108),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(108),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(108),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(108),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(108),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(108),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(108),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(108),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(108),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(108),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(108),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(108),
    [anon_sym_add_DASHint] = ACTIONS(110),
    [anon_sym_sub_DASHint] = ACTIONS(110),
    [anon_sym_mul_DASHint] = ACTIONS(110),
    [anon_sym_div_DASHint] = ACTIONS(110),
    [anon_sym_rem_DASHint] = ACTIONS(110),
    [anon_sym_and_DASHint] = ACTIONS(110),
    [anon_sym_or_DASHint] = ACTIONS(110),
    [anon_sym_xor_DASHint] = ACTIONS(110),
    [anon_sym_shl_DASHint] = ACTIONS(110),
    [anon_sym_shr_DASHint] = ACTIONS(110),
    [anon_sym_ushr_DASHint] = ACTIONS(110),
    [anon_sym_add_DASHlong] = ACTIONS(110),
    [anon_sym_sub_DASHlong] = ACTIONS(110),
    [anon_sym_mul_DASHlong] = ACTIONS(110),
    [anon_sym_div_DASHlong] = ACTIONS(110),
    [anon_sym_rem_DASHlong] = ACTIONS(110),
    [anon_sym_and_DASHlong] = ACTIONS(110),
    [anon_sym_or_DASHlong] = ACTIONS(110),
    [anon_sym_xor_DASHlong] = ACTIONS(110),
    [anon_sym_shl_DASHlong] = ACTIONS(110),
    [anon_sym_shr_DASHlong] = ACTIONS(110),
    [anon_sym_ushr_DASHlong] = ACTIONS(110),
    [anon_sym_add_DASHfloat] = ACTIONS(110),
    [anon_sym_sub_DASHfloat] = ACTIONS(110),
    [anon_sym_mul_DASHfloat] = ACTIONS(110),
    [anon_sym_div_DASHfloat] = ACTIONS(110),
    [anon_sym_rem_DASHfloat] = ACTIONS(110),
    [anon_sym_add_DASHdouble] = ACTIONS(110),
    [anon_sym_sub_DASHdouble] = ACTIONS(110),
    [anon_sym_mul_DASHdouble] = ACTIONS(110),
    [anon_sym_div_DASHdouble] = ACTIONS(110),
    [anon_sym_rem_DASHdouble] = ACTIONS(110),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(108),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(108),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(108),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(108),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(108),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(108),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(108),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(108),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(108),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(108),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(108),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(108),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(108),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_execute_DASHinline] = ACTIONS(108),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(108),
    [anon_sym_iget_DASHquick] = ACTIONS(108),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(108),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(108),
    [anon_sym_iput_DASHquick] = ACTIONS(108),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(108),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(108),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(110),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(108),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(110),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(108),
    [anon_sym_rsub_DASHint] = ACTIONS(110),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(108),
    [anon_sym_DOTline] = ACTIONS(108),
    [anon_sym_DOTlocals] = ACTIONS(108),
    [anon_sym_DOTregisters] = ACTIONS(108),
    [anon_sym_DOTcatch] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_DOTcatchall] = ACTIONS(108),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(108),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(108),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_end_method] = ACTIONS(112),
    [anon_sym_DOTannotation] = ACTIONS(112),
    [anon_sym_DOTparam] = ACTIONS(112),
    [sym_end_param] = ACTIONS(112),
    [sym_label] = ACTIONS(112),
    [anon_sym_nop] = ACTIONS(112),
    [anon_sym_move] = ACTIONS(114),
    [anon_sym_move_SLASHfrom16] = ACTIONS(112),
    [anon_sym_move_SLASH16] = ACTIONS(112),
    [anon_sym_move_DASHwide] = ACTIONS(114),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(112),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(112),
    [anon_sym_move_DASHobject] = ACTIONS(114),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(112),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(112),
    [anon_sym_move_DASHresult] = ACTIONS(114),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(112),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(112),
    [anon_sym_move_DASHexception] = ACTIONS(112),
    [anon_sym_return_DASHvoid] = ACTIONS(112),
    [anon_sym_return] = ACTIONS(114),
    [anon_sym_return_DASHwide] = ACTIONS(112),
    [anon_sym_return_DASHobject] = ACTIONS(112),
    [anon_sym_const_SLASH4] = ACTIONS(112),
    [anon_sym_const_SLASH16] = ACTIONS(112),
    [anon_sym_const] = ACTIONS(114),
    [anon_sym_const_SLASHhigh16] = ACTIONS(112),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(112),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(112),
    [anon_sym_const_DASHwide] = ACTIONS(114),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(112),
    [anon_sym_const_DASHstring] = ACTIONS(114),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(112),
    [anon_sym_const_DASHclass] = ACTIONS(112),
    [anon_sym_monitor_DASHenter] = ACTIONS(112),
    [anon_sym_monitor_DASHexit] = ACTIONS(112),
    [anon_sym_check_DASHcast] = ACTIONS(112),
    [anon_sym_instance_DASHof] = ACTIONS(112),
    [anon_sym_array_DASHlength] = ACTIONS(112),
    [anon_sym_new_DASHinstance] = ACTIONS(112),
    [anon_sym_new_DASHarray] = ACTIONS(112),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(114),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(112),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(112),
    [anon_sym_throw] = ACTIONS(112),
    [anon_sym_goto] = ACTIONS(114),
    [anon_sym_goto_SLASH16] = ACTIONS(112),
    [anon_sym_goto_SLASH32] = ACTIONS(112),
    [anon_sym_packed_DASHswitch] = ACTIONS(112),
    [anon_sym_sparse_DASHswitch] = ACTIONS(112),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(112),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(112),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(112),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(112),
    [anon_sym_cmp_DASHlong] = ACTIONS(112),
    [anon_sym_if_DASHeq] = ACTIONS(114),
    [anon_sym_if_DASHne] = ACTIONS(114),
    [anon_sym_if_DASHlt] = ACTIONS(114),
    [anon_sym_if_DASHge] = ACTIONS(114),
    [anon_sym_if_DASHgt] = ACTIONS(114),
    [anon_sym_if_DASHle] = ACTIONS(114),
    [anon_sym_if_DASHeqz] = ACTIONS(112),
    [anon_sym_if_DASHnez] = ACTIONS(112),
    [anon_sym_if_DASHltz] = ACTIONS(112),
    [anon_sym_if_DASHgez] = ACTIONS(112),
    [anon_sym_if_DASHgtz] = ACTIONS(112),
    [anon_sym_if_DASHlez] = ACTIONS(112),
    [anon_sym_aget] = ACTIONS(114),
    [anon_sym_aget_DASHwide] = ACTIONS(112),
    [anon_sym_aget_DASHobject] = ACTIONS(112),
    [anon_sym_aget_DASHboolean] = ACTIONS(112),
    [anon_sym_aget_DASHbyte] = ACTIONS(112),
    [anon_sym_aget_DASHchar] = ACTIONS(112),
    [anon_sym_aget_DASHshort] = ACTIONS(112),
    [anon_sym_aput] = ACTIONS(114),
    [anon_sym_aput_DASHwide] = ACTIONS(112),
    [anon_sym_aput_DASHobject] = ACTIONS(112),
    [anon_sym_aput_DASHboolean] = ACTIONS(112),
    [anon_sym_aput_DASHbyte] = ACTIONS(112),
    [anon_sym_aput_DASHchar] = ACTIONS(112),
    [anon_sym_aput_DASHshort] = ACTIONS(112),
    [anon_sym_iget] = ACTIONS(114),
    [anon_sym_iget_DASHwide] = ACTIONS(114),
    [anon_sym_iget_DASHobject] = ACTIONS(114),
    [anon_sym_iget_DASHboolean] = ACTIONS(112),
    [anon_sym_iget_DASHbyte] = ACTIONS(112),
    [anon_sym_iget_DASHchar] = ACTIONS(112),
    [anon_sym_iget_DASHshort] = ACTIONS(112),
    [anon_sym_iput] = ACTIONS(114),
    [anon_sym_iput_DASHwide] = ACTIONS(114),
    [anon_sym_iput_DASHobject] = ACTIONS(114),
    [anon_sym_iput_DASHboolean] = ACTIONS(112),
    [anon_sym_iput_DASHbyte] = ACTIONS(112),
    [anon_sym_iput_DASHchar] = ACTIONS(112),
    [anon_sym_iput_DASHshort] = ACTIONS(112),
    [anon_sym_sget] = ACTIONS(114),
    [anon_sym_sget_DASHwide] = ACTIONS(112),
    [anon_sym_sget_DASHobject] = ACTIONS(112),
    [anon_sym_sget_DASHboolean] = ACTIONS(112),
    [anon_sym_sget_DASHbyte] = ACTIONS(112),
    [anon_sym_sget_DASHchar] = ACTIONS(112),
    [anon_sym_sget_DASHshort] = ACTIONS(112),
    [anon_sym_sput] = ACTIONS(114),
    [anon_sym_sput_DASHwide] = ACTIONS(112),
    [anon_sym_sput_DASHobject] = ACTIONS(112),
    [anon_sym_sput_DASHboolean] = ACTIONS(112),
    [anon_sym_sput_DASHbyte] = ACTIONS(112),
    [anon_sym_sput_DASHchar] = ACTIONS(112),
    [anon_sym_sput_DASHshort] = ACTIONS(112),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(114),
    [anon_sym_invoke_DASHsuper] = ACTIONS(114),
    [anon_sym_invoke_DASHdirect] = ACTIONS(114),
    [anon_sym_invoke_DASHstatic] = ACTIONS(114),
    [anon_sym_invoke_DASHinterface] = ACTIONS(114),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(112),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(112),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(112),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(112),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(112),
    [anon_sym_neg_DASHint] = ACTIONS(112),
    [anon_sym_not_DASHint] = ACTIONS(112),
    [anon_sym_neg_DASHlong] = ACTIONS(112),
    [anon_sym_not_DASHlong] = ACTIONS(112),
    [anon_sym_neg_DASHfloat] = ACTIONS(112),
    [anon_sym_neg_DASHdouble] = ACTIONS(112),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(112),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(112),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(112),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(112),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(112),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(112),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(112),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(112),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(112),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(112),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(112),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(112),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(112),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(112),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(112),
    [anon_sym_add_DASHint] = ACTIONS(114),
    [anon_sym_sub_DASHint] = ACTIONS(114),
    [anon_sym_mul_DASHint] = ACTIONS(114),
    [anon_sym_div_DASHint] = ACTIONS(114),
    [anon_sym_rem_DASHint] = ACTIONS(114),
    [anon_sym_and_DASHint] = ACTIONS(114),
    [anon_sym_or_DASHint] = ACTIONS(114),
    [anon_sym_xor_DASHint] = ACTIONS(114),
    [anon_sym_shl_DASHint] = ACTIONS(114),
    [anon_sym_shr_DASHint] = ACTIONS(114),
    [anon_sym_ushr_DASHint] = ACTIONS(114),
    [anon_sym_add_DASHlong] = ACTIONS(114),
    [anon_sym_sub_DASHlong] = ACTIONS(114),
    [anon_sym_mul_DASHlong] = ACTIONS(114),
    [anon_sym_div_DASHlong] = ACTIONS(114),
    [anon_sym_rem_DASHlong] = ACTIONS(114),
    [anon_sym_and_DASHlong] = ACTIONS(114),
    [anon_sym_or_DASHlong] = ACTIONS(114),
    [anon_sym_xor_DASHlong] = ACTIONS(114),
    [anon_sym_shl_DASHlong] = ACTIONS(114),
    [anon_sym_shr_DASHlong] = ACTIONS(114),
    [anon_sym_ushr_DASHlong] = ACTIONS(114),
    [anon_sym_add_DASHfloat] = ACTIONS(114),
    [anon_sym_sub_DASHfloat] = ACTIONS(114),
    [anon_sym_mul_DASHfloat] = ACTIONS(114),
    [anon_sym_div_DASHfloat] = ACTIONS(114),
    [anon_sym_rem_DASHfloat] = ACTIONS(114),
    [anon_sym_add_DASHdouble] = ACTIONS(114),
    [anon_sym_sub_DASHdouble] = ACTIONS(114),
    [anon_sym_mul_DASHdouble] = ACTIONS(114),
    [anon_sym_div_DASHdouble] = ACTIONS(114),
    [anon_sym_rem_DASHdouble] = ACTIONS(114),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(112),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(112),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(112),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(112),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(112),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(112),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(112),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(112),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(112),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(112),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(112),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(112),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(112),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_execute_DASHinline] = ACTIONS(112),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(112),
    [anon_sym_iget_DASHquick] = ACTIONS(112),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(112),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(112),
    [anon_sym_iput_DASHquick] = ACTIONS(112),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(112),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(112),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(114),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(112),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(114),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(112),
    [anon_sym_rsub_DASHint] = ACTIONS(114),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(112),
    [anon_sym_DOTline] = ACTIONS(112),
    [anon_sym_DOTlocals] = ACTIONS(112),
    [anon_sym_DOTregisters] = ACTIONS(112),
    [anon_sym_DOTcatch] = ACTIONS(114),
    [anon_sym_DOTcatchall] = ACTIONS(112),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(112),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(112),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_end_method] = ACTIONS(116),
    [anon_sym_DOTannotation] = ACTIONS(116),
    [anon_sym_DOTparam] = ACTIONS(116),
    [sym_label] = ACTIONS(116),
    [anon_sym_nop] = ACTIONS(116),
    [anon_sym_move] = ACTIONS(118),
    [anon_sym_move_SLASHfrom16] = ACTIONS(116),
    [anon_sym_move_SLASH16] = ACTIONS(116),
    [anon_sym_move_DASHwide] = ACTIONS(118),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(116),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(116),
    [anon_sym_move_DASHobject] = ACTIONS(118),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(116),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(116),
    [anon_sym_move_DASHresult] = ACTIONS(118),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(116),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(116),
    [anon_sym_move_DASHexception] = ACTIONS(116),
    [anon_sym_return_DASHvoid] = ACTIONS(116),
    [anon_sym_return] = ACTIONS(118),
    [anon_sym_return_DASHwide] = ACTIONS(116),
    [anon_sym_return_DASHobject] = ACTIONS(116),
    [anon_sym_const_SLASH4] = ACTIONS(116),
    [anon_sym_const_SLASH16] = ACTIONS(116),
    [anon_sym_const] = ACTIONS(118),
    [anon_sym_const_SLASHhigh16] = ACTIONS(116),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(116),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(116),
    [anon_sym_const_DASHwide] = ACTIONS(118),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(116),
    [anon_sym_const_DASHstring] = ACTIONS(118),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(116),
    [anon_sym_const_DASHclass] = ACTIONS(116),
    [anon_sym_monitor_DASHenter] = ACTIONS(116),
    [anon_sym_monitor_DASHexit] = ACTIONS(116),
    [anon_sym_check_DASHcast] = ACTIONS(116),
    [anon_sym_instance_DASHof] = ACTIONS(116),
    [anon_sym_array_DASHlength] = ACTIONS(116),
    [anon_sym_new_DASHinstance] = ACTIONS(116),
    [anon_sym_new_DASHarray] = ACTIONS(116),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(118),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(116),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(116),
    [anon_sym_throw] = ACTIONS(116),
    [anon_sym_goto] = ACTIONS(118),
    [anon_sym_goto_SLASH16] = ACTIONS(116),
    [anon_sym_goto_SLASH32] = ACTIONS(116),
    [anon_sym_packed_DASHswitch] = ACTIONS(116),
    [anon_sym_sparse_DASHswitch] = ACTIONS(116),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(116),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(116),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(116),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(116),
    [anon_sym_cmp_DASHlong] = ACTIONS(116),
    [anon_sym_if_DASHeq] = ACTIONS(118),
    [anon_sym_if_DASHne] = ACTIONS(118),
    [anon_sym_if_DASHlt] = ACTIONS(118),
    [anon_sym_if_DASHge] = ACTIONS(118),
    [anon_sym_if_DASHgt] = ACTIONS(118),
    [anon_sym_if_DASHle] = ACTIONS(118),
    [anon_sym_if_DASHeqz] = ACTIONS(116),
    [anon_sym_if_DASHnez] = ACTIONS(116),
    [anon_sym_if_DASHltz] = ACTIONS(116),
    [anon_sym_if_DASHgez] = ACTIONS(116),
    [anon_sym_if_DASHgtz] = ACTIONS(116),
    [anon_sym_if_DASHlez] = ACTIONS(116),
    [anon_sym_aget] = ACTIONS(118),
    [anon_sym_aget_DASHwide] = ACTIONS(116),
    [anon_sym_aget_DASHobject] = ACTIONS(116),
    [anon_sym_aget_DASHboolean] = ACTIONS(116),
    [anon_sym_aget_DASHbyte] = ACTIONS(116),
    [anon_sym_aget_DASHchar] = ACTIONS(116),
    [anon_sym_aget_DASHshort] = ACTIONS(116),
    [anon_sym_aput] = ACTIONS(118),
    [anon_sym_aput_DASHwide] = ACTIONS(116),
    [anon_sym_aput_DASHobject] = ACTIONS(116),
    [anon_sym_aput_DASHboolean] = ACTIONS(116),
    [anon_sym_aput_DASHbyte] = ACTIONS(116),
    [anon_sym_aput_DASHchar] = ACTIONS(116),
    [anon_sym_aput_DASHshort] = ACTIONS(116),
    [anon_sym_iget] = ACTIONS(118),
    [anon_sym_iget_DASHwide] = ACTIONS(118),
    [anon_sym_iget_DASHobject] = ACTIONS(118),
    [anon_sym_iget_DASHboolean] = ACTIONS(116),
    [anon_sym_iget_DASHbyte] = ACTIONS(116),
    [anon_sym_iget_DASHchar] = ACTIONS(116),
    [anon_sym_iget_DASHshort] = ACTIONS(116),
    [anon_sym_iput] = ACTIONS(118),
    [anon_sym_iput_DASHwide] = ACTIONS(118),
    [anon_sym_iput_DASHobject] = ACTIONS(118),
    [anon_sym_iput_DASHboolean] = ACTIONS(116),
    [anon_sym_iput_DASHbyte] = ACTIONS(116),
    [anon_sym_iput_DASHchar] = ACTIONS(116),
    [anon_sym_iput_DASHshort] = ACTIONS(116),
    [anon_sym_sget] = ACTIONS(118),
    [anon_sym_sget_DASHwide] = ACTIONS(116),
    [anon_sym_sget_DASHobject] = ACTIONS(116),
    [anon_sym_sget_DASHboolean] = ACTIONS(116),
    [anon_sym_sget_DASHbyte] = ACTIONS(116),
    [anon_sym_sget_DASHchar] = ACTIONS(116),
    [anon_sym_sget_DASHshort] = ACTIONS(116),
    [anon_sym_sput] = ACTIONS(118),
    [anon_sym_sput_DASHwide] = ACTIONS(116),
    [anon_sym_sput_DASHobject] = ACTIONS(116),
    [anon_sym_sput_DASHboolean] = ACTIONS(116),
    [anon_sym_sput_DASHbyte] = ACTIONS(116),
    [anon_sym_sput_DASHchar] = ACTIONS(116),
    [anon_sym_sput_DASHshort] = ACTIONS(116),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(118),
    [anon_sym_invoke_DASHsuper] = ACTIONS(118),
    [anon_sym_invoke_DASHdirect] = ACTIONS(118),
    [anon_sym_invoke_DASHstatic] = ACTIONS(118),
    [anon_sym_invoke_DASHinterface] = ACTIONS(118),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(116),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(116),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(116),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(116),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(116),
    [anon_sym_neg_DASHint] = ACTIONS(116),
    [anon_sym_not_DASHint] = ACTIONS(116),
    [anon_sym_neg_DASHlong] = ACTIONS(116),
    [anon_sym_not_DASHlong] = ACTIONS(116),
    [anon_sym_neg_DASHfloat] = ACTIONS(116),
    [anon_sym_neg_DASHdouble] = ACTIONS(116),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(116),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(116),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(116),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(116),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(116),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(116),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(116),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(116),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(116),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(116),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(116),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(116),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(116),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(116),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(116),
    [anon_sym_add_DASHint] = ACTIONS(118),
    [anon_sym_sub_DASHint] = ACTIONS(118),
    [anon_sym_mul_DASHint] = ACTIONS(118),
    [anon_sym_div_DASHint] = ACTIONS(118),
    [anon_sym_rem_DASHint] = ACTIONS(118),
    [anon_sym_and_DASHint] = ACTIONS(118),
    [anon_sym_or_DASHint] = ACTIONS(118),
    [anon_sym_xor_DASHint] = ACTIONS(118),
    [anon_sym_shl_DASHint] = ACTIONS(118),
    [anon_sym_shr_DASHint] = ACTIONS(118),
    [anon_sym_ushr_DASHint] = ACTIONS(118),
    [anon_sym_add_DASHlong] = ACTIONS(118),
    [anon_sym_sub_DASHlong] = ACTIONS(118),
    [anon_sym_mul_DASHlong] = ACTIONS(118),
    [anon_sym_div_DASHlong] = ACTIONS(118),
    [anon_sym_rem_DASHlong] = ACTIONS(118),
    [anon_sym_and_DASHlong] = ACTIONS(118),
    [anon_sym_or_DASHlong] = ACTIONS(118),
    [anon_sym_xor_DASHlong] = ACTIONS(118),
    [anon_sym_shl_DASHlong] = ACTIONS(118),
    [anon_sym_shr_DASHlong] = ACTIONS(118),
    [anon_sym_ushr_DASHlong] = ACTIONS(118),
    [anon_sym_add_DASHfloat] = ACTIONS(118),
    [anon_sym_sub_DASHfloat] = ACTIONS(118),
    [anon_sym_mul_DASHfloat] = ACTIONS(118),
    [anon_sym_div_DASHfloat] = ACTIONS(118),
    [anon_sym_rem_DASHfloat] = ACTIONS(118),
    [anon_sym_add_DASHdouble] = ACTIONS(118),
    [anon_sym_sub_DASHdouble] = ACTIONS(118),
    [anon_sym_mul_DASHdouble] = ACTIONS(118),
    [anon_sym_div_DASHdouble] = ACTIONS(118),
    [anon_sym_rem_DASHdouble] = ACTIONS(118),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(116),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(116),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(116),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(116),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(116),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(116),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(116),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(116),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(116),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(116),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(116),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(116),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(116),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_execute_DASHinline] = ACTIONS(116),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(116),
    [anon_sym_iget_DASHquick] = ACTIONS(116),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(116),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(116),
    [anon_sym_iput_DASHquick] = ACTIONS(116),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(116),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(116),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(118),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(116),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(118),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(116),
    [anon_sym_rsub_DASHint] = ACTIONS(118),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(116),
    [anon_sym_DOTline] = ACTIONS(116),
    [anon_sym_DOTlocals] = ACTIONS(116),
    [anon_sym_DOTregisters] = ACTIONS(116),
    [anon_sym_DOTcatch] = ACTIONS(118),
    [anon_sym_DOTcatchall] = ACTIONS(116),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(116),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(116),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_end_method] = ACTIONS(120),
    [anon_sym_DOTannotation] = ACTIONS(120),
    [anon_sym_DOTparam] = ACTIONS(120),
    [sym_label] = ACTIONS(120),
    [anon_sym_nop] = ACTIONS(120),
    [anon_sym_move] = ACTIONS(122),
    [anon_sym_move_SLASHfrom16] = ACTIONS(120),
    [anon_sym_move_SLASH16] = ACTIONS(120),
    [anon_sym_move_DASHwide] = ACTIONS(122),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(120),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(120),
    [anon_sym_move_DASHobject] = ACTIONS(122),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(120),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(120),
    [anon_sym_move_DASHresult] = ACTIONS(122),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(120),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(120),
    [anon_sym_move_DASHexception] = ACTIONS(120),
    [anon_sym_return_DASHvoid] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(122),
    [anon_sym_return_DASHwide] = ACTIONS(120),
    [anon_sym_return_DASHobject] = ACTIONS(120),
    [anon_sym_const_SLASH4] = ACTIONS(120),
    [anon_sym_const_SLASH16] = ACTIONS(120),
    [anon_sym_const] = ACTIONS(122),
    [anon_sym_const_SLASHhigh16] = ACTIONS(120),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(120),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(120),
    [anon_sym_const_DASHwide] = ACTIONS(122),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(120),
    [anon_sym_const_DASHstring] = ACTIONS(122),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(120),
    [anon_sym_const_DASHclass] = ACTIONS(120),
    [anon_sym_monitor_DASHenter] = ACTIONS(120),
    [anon_sym_monitor_DASHexit] = ACTIONS(120),
    [anon_sym_check_DASHcast] = ACTIONS(120),
    [anon_sym_instance_DASHof] = ACTIONS(120),
    [anon_sym_array_DASHlength] = ACTIONS(120),
    [anon_sym_new_DASHinstance] = ACTIONS(120),
    [anon_sym_new_DASHarray] = ACTIONS(120),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(122),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(120),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(120),
    [anon_sym_throw] = ACTIONS(120),
    [anon_sym_goto] = ACTIONS(122),
    [anon_sym_goto_SLASH16] = ACTIONS(120),
    [anon_sym_goto_SLASH32] = ACTIONS(120),
    [anon_sym_packed_DASHswitch] = ACTIONS(120),
    [anon_sym_sparse_DASHswitch] = ACTIONS(120),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(120),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(120),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(120),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(120),
    [anon_sym_cmp_DASHlong] = ACTIONS(120),
    [anon_sym_if_DASHeq] = ACTIONS(122),
    [anon_sym_if_DASHne] = ACTIONS(122),
    [anon_sym_if_DASHlt] = ACTIONS(122),
    [anon_sym_if_DASHge] = ACTIONS(122),
    [anon_sym_if_DASHgt] = ACTIONS(122),
    [anon_sym_if_DASHle] = ACTIONS(122),
    [anon_sym_if_DASHeqz] = ACTIONS(120),
    [anon_sym_if_DASHnez] = ACTIONS(120),
    [anon_sym_if_DASHltz] = ACTIONS(120),
    [anon_sym_if_DASHgez] = ACTIONS(120),
    [anon_sym_if_DASHgtz] = ACTIONS(120),
    [anon_sym_if_DASHlez] = ACTIONS(120),
    [anon_sym_aget] = ACTIONS(122),
    [anon_sym_aget_DASHwide] = ACTIONS(120),
    [anon_sym_aget_DASHobject] = ACTIONS(120),
    [anon_sym_aget_DASHboolean] = ACTIONS(120),
    [anon_sym_aget_DASHbyte] = ACTIONS(120),
    [anon_sym_aget_DASHchar] = ACTIONS(120),
    [anon_sym_aget_DASHshort] = ACTIONS(120),
    [anon_sym_aput] = ACTIONS(122),
    [anon_sym_aput_DASHwide] = ACTIONS(120),
    [anon_sym_aput_DASHobject] = ACTIONS(120),
    [anon_sym_aput_DASHboolean] = ACTIONS(120),
    [anon_sym_aput_DASHbyte] = ACTIONS(120),
    [anon_sym_aput_DASHchar] = ACTIONS(120),
    [anon_sym_aput_DASHshort] = ACTIONS(120),
    [anon_sym_iget] = ACTIONS(122),
    [anon_sym_iget_DASHwide] = ACTIONS(122),
    [anon_sym_iget_DASHobject] = ACTIONS(122),
    [anon_sym_iget_DASHboolean] = ACTIONS(120),
    [anon_sym_iget_DASHbyte] = ACTIONS(120),
    [anon_sym_iget_DASHchar] = ACTIONS(120),
    [anon_sym_iget_DASHshort] = ACTIONS(120),
    [anon_sym_iput] = ACTIONS(122),
    [anon_sym_iput_DASHwide] = ACTIONS(122),
    [anon_sym_iput_DASHobject] = ACTIONS(122),
    [anon_sym_iput_DASHboolean] = ACTIONS(120),
    [anon_sym_iput_DASHbyte] = ACTIONS(120),
    [anon_sym_iput_DASHchar] = ACTIONS(120),
    [anon_sym_iput_DASHshort] = ACTIONS(120),
    [anon_sym_sget] = ACTIONS(122),
    [anon_sym_sget_DASHwide] = ACTIONS(120),
    [anon_sym_sget_DASHobject] = ACTIONS(120),
    [anon_sym_sget_DASHboolean] = ACTIONS(120),
    [anon_sym_sget_DASHbyte] = ACTIONS(120),
    [anon_sym_sget_DASHchar] = ACTIONS(120),
    [anon_sym_sget_DASHshort] = ACTIONS(120),
    [anon_sym_sput] = ACTIONS(122),
    [anon_sym_sput_DASHwide] = ACTIONS(120),
    [anon_sym_sput_DASHobject] = ACTIONS(120),
    [anon_sym_sput_DASHboolean] = ACTIONS(120),
    [anon_sym_sput_DASHbyte] = ACTIONS(120),
    [anon_sym_sput_DASHchar] = ACTIONS(120),
    [anon_sym_sput_DASHshort] = ACTIONS(120),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(122),
    [anon_sym_invoke_DASHsuper] = ACTIONS(122),
    [anon_sym_invoke_DASHdirect] = ACTIONS(122),
    [anon_sym_invoke_DASHstatic] = ACTIONS(122),
    [anon_sym_invoke_DASHinterface] = ACTIONS(122),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(120),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(120),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(120),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(120),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(120),
    [anon_sym_neg_DASHint] = ACTIONS(120),
    [anon_sym_not_DASHint] = ACTIONS(120),
    [anon_sym_neg_DASHlong] = ACTIONS(120),
    [anon_sym_not_DASHlong] = ACTIONS(120),
    [anon_sym_neg_DASHfloat] = ACTIONS(120),
    [anon_sym_neg_DASHdouble] = ACTIONS(120),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(120),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(120),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(120),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(120),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(120),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(120),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(120),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(120),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(120),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(120),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(120),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(120),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(120),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(120),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(120),
    [anon_sym_add_DASHint] = ACTIONS(122),
    [anon_sym_sub_DASHint] = ACTIONS(122),
    [anon_sym_mul_DASHint] = ACTIONS(122),
    [anon_sym_div_DASHint] = ACTIONS(122),
    [anon_sym_rem_DASHint] = ACTIONS(122),
    [anon_sym_and_DASHint] = ACTIONS(122),
    [anon_sym_or_DASHint] = ACTIONS(122),
    [anon_sym_xor_DASHint] = ACTIONS(122),
    [anon_sym_shl_DASHint] = ACTIONS(122),
    [anon_sym_shr_DASHint] = ACTIONS(122),
    [anon_sym_ushr_DASHint] = ACTIONS(122),
    [anon_sym_add_DASHlong] = ACTIONS(122),
    [anon_sym_sub_DASHlong] = ACTIONS(122),
    [anon_sym_mul_DASHlong] = ACTIONS(122),
    [anon_sym_div_DASHlong] = ACTIONS(122),
    [anon_sym_rem_DASHlong] = ACTIONS(122),
    [anon_sym_and_DASHlong] = ACTIONS(122),
    [anon_sym_or_DASHlong] = ACTIONS(122),
    [anon_sym_xor_DASHlong] = ACTIONS(122),
    [anon_sym_shl_DASHlong] = ACTIONS(122),
    [anon_sym_shr_DASHlong] = ACTIONS(122),
    [anon_sym_ushr_DASHlong] = ACTIONS(122),
    [anon_sym_add_DASHfloat] = ACTIONS(122),
    [anon_sym_sub_DASHfloat] = ACTIONS(122),
    [anon_sym_mul_DASHfloat] = ACTIONS(122),
    [anon_sym_div_DASHfloat] = ACTIONS(122),
    [anon_sym_rem_DASHfloat] = ACTIONS(122),
    [anon_sym_add_DASHdouble] = ACTIONS(122),
    [anon_sym_sub_DASHdouble] = ACTIONS(122),
    [anon_sym_mul_DASHdouble] = ACTIONS(122),
    [anon_sym_div_DASHdouble] = ACTIONS(122),
    [anon_sym_rem_DASHdouble] = ACTIONS(122),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(120),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(120),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(120),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(120),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(120),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(120),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(120),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(120),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(120),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(120),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(120),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(120),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(120),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_execute_DASHinline] = ACTIONS(120),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(120),
    [anon_sym_iget_DASHquick] = ACTIONS(120),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(120),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(120),
    [anon_sym_iput_DASHquick] = ACTIONS(120),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(120),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(120),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(122),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(120),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(122),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(120),
    [anon_sym_rsub_DASHint] = ACTIONS(122),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(120),
    [anon_sym_DOTline] = ACTIONS(120),
    [anon_sym_DOTlocals] = ACTIONS(120),
    [anon_sym_DOTregisters] = ACTIONS(120),
    [anon_sym_DOTcatch] = ACTIONS(122),
    [anon_sym_DOTcatchall] = ACTIONS(120),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(120),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(120),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_end_method] = ACTIONS(124),
    [anon_sym_DOTannotation] = ACTIONS(124),
    [anon_sym_DOTparam] = ACTIONS(124),
    [sym_label] = ACTIONS(124),
    [anon_sym_nop] = ACTIONS(124),
    [anon_sym_move] = ACTIONS(126),
    [anon_sym_move_SLASHfrom16] = ACTIONS(124),
    [anon_sym_move_SLASH16] = ACTIONS(124),
    [anon_sym_move_DASHwide] = ACTIONS(126),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(124),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(124),
    [anon_sym_move_DASHobject] = ACTIONS(126),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(124),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(124),
    [anon_sym_move_DASHresult] = ACTIONS(126),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(124),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(124),
    [anon_sym_move_DASHexception] = ACTIONS(124),
    [anon_sym_return_DASHvoid] = ACTIONS(124),
    [anon_sym_return] = ACTIONS(126),
    [anon_sym_return_DASHwide] = ACTIONS(124),
    [anon_sym_return_DASHobject] = ACTIONS(124),
    [anon_sym_const_SLASH4] = ACTIONS(124),
    [anon_sym_const_SLASH16] = ACTIONS(124),
    [anon_sym_const] = ACTIONS(126),
    [anon_sym_const_SLASHhigh16] = ACTIONS(124),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(124),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(124),
    [anon_sym_const_DASHwide] = ACTIONS(126),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(124),
    [anon_sym_const_DASHstring] = ACTIONS(126),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(124),
    [anon_sym_const_DASHclass] = ACTIONS(124),
    [anon_sym_monitor_DASHenter] = ACTIONS(124),
    [anon_sym_monitor_DASHexit] = ACTIONS(124),
    [anon_sym_check_DASHcast] = ACTIONS(124),
    [anon_sym_instance_DASHof] = ACTIONS(124),
    [anon_sym_array_DASHlength] = ACTIONS(124),
    [anon_sym_new_DASHinstance] = ACTIONS(124),
    [anon_sym_new_DASHarray] = ACTIONS(124),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(126),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(124),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(124),
    [anon_sym_throw] = ACTIONS(124),
    [anon_sym_goto] = ACTIONS(126),
    [anon_sym_goto_SLASH16] = ACTIONS(124),
    [anon_sym_goto_SLASH32] = ACTIONS(124),
    [anon_sym_packed_DASHswitch] = ACTIONS(124),
    [anon_sym_sparse_DASHswitch] = ACTIONS(124),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(124),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(124),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(124),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(124),
    [anon_sym_cmp_DASHlong] = ACTIONS(124),
    [anon_sym_if_DASHeq] = ACTIONS(126),
    [anon_sym_if_DASHne] = ACTIONS(126),
    [anon_sym_if_DASHlt] = ACTIONS(126),
    [anon_sym_if_DASHge] = ACTIONS(126),
    [anon_sym_if_DASHgt] = ACTIONS(126),
    [anon_sym_if_DASHle] = ACTIONS(126),
    [anon_sym_if_DASHeqz] = ACTIONS(124),
    [anon_sym_if_DASHnez] = ACTIONS(124),
    [anon_sym_if_DASHltz] = ACTIONS(124),
    [anon_sym_if_DASHgez] = ACTIONS(124),
    [anon_sym_if_DASHgtz] = ACTIONS(124),
    [anon_sym_if_DASHlez] = ACTIONS(124),
    [anon_sym_aget] = ACTIONS(126),
    [anon_sym_aget_DASHwide] = ACTIONS(124),
    [anon_sym_aget_DASHobject] = ACTIONS(124),
    [anon_sym_aget_DASHboolean] = ACTIONS(124),
    [anon_sym_aget_DASHbyte] = ACTIONS(124),
    [anon_sym_aget_DASHchar] = ACTIONS(124),
    [anon_sym_aget_DASHshort] = ACTIONS(124),
    [anon_sym_aput] = ACTIONS(126),
    [anon_sym_aput_DASHwide] = ACTIONS(124),
    [anon_sym_aput_DASHobject] = ACTIONS(124),
    [anon_sym_aput_DASHboolean] = ACTIONS(124),
    [anon_sym_aput_DASHbyte] = ACTIONS(124),
    [anon_sym_aput_DASHchar] = ACTIONS(124),
    [anon_sym_aput_DASHshort] = ACTIONS(124),
    [anon_sym_iget] = ACTIONS(126),
    [anon_sym_iget_DASHwide] = ACTIONS(126),
    [anon_sym_iget_DASHobject] = ACTIONS(126),
    [anon_sym_iget_DASHboolean] = ACTIONS(124),
    [anon_sym_iget_DASHbyte] = ACTIONS(124),
    [anon_sym_iget_DASHchar] = ACTIONS(124),
    [anon_sym_iget_DASHshort] = ACTIONS(124),
    [anon_sym_iput] = ACTIONS(126),
    [anon_sym_iput_DASHwide] = ACTIONS(126),
    [anon_sym_iput_DASHobject] = ACTIONS(126),
    [anon_sym_iput_DASHboolean] = ACTIONS(124),
    [anon_sym_iput_DASHbyte] = ACTIONS(124),
    [anon_sym_iput_DASHchar] = ACTIONS(124),
    [anon_sym_iput_DASHshort] = ACTIONS(124),
    [anon_sym_sget] = ACTIONS(126),
    [anon_sym_sget_DASHwide] = ACTIONS(124),
    [anon_sym_sget_DASHobject] = ACTIONS(124),
    [anon_sym_sget_DASHboolean] = ACTIONS(124),
    [anon_sym_sget_DASHbyte] = ACTIONS(124),
    [anon_sym_sget_DASHchar] = ACTIONS(124),
    [anon_sym_sget_DASHshort] = ACTIONS(124),
    [anon_sym_sput] = ACTIONS(126),
    [anon_sym_sput_DASHwide] = ACTIONS(124),
    [anon_sym_sput_DASHobject] = ACTIONS(124),
    [anon_sym_sput_DASHboolean] = ACTIONS(124),
    [anon_sym_sput_DASHbyte] = ACTIONS(124),
    [anon_sym_sput_DASHchar] = ACTIONS(124),
    [anon_sym_sput_DASHshort] = ACTIONS(124),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(126),
    [anon_sym_invoke_DASHsuper] = ACTIONS(126),
    [anon_sym_invoke_DASHdirect] = ACTIONS(126),
    [anon_sym_invoke_DASHstatic] = ACTIONS(126),
    [anon_sym_invoke_DASHinterface] = ACTIONS(126),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(124),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(124),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(124),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(124),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(124),
    [anon_sym_neg_DASHint] = ACTIONS(124),
    [anon_sym_not_DASHint] = ACTIONS(124),
    [anon_sym_neg_DASHlong] = ACTIONS(124),
    [anon_sym_not_DASHlong] = ACTIONS(124),
    [anon_sym_neg_DASHfloat] = ACTIONS(124),
    [anon_sym_neg_DASHdouble] = ACTIONS(124),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(124),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(124),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(124),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(124),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(124),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(124),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(124),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(124),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(124),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(124),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(124),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(124),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(124),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(124),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(124),
    [anon_sym_add_DASHint] = ACTIONS(126),
    [anon_sym_sub_DASHint] = ACTIONS(126),
    [anon_sym_mul_DASHint] = ACTIONS(126),
    [anon_sym_div_DASHint] = ACTIONS(126),
    [anon_sym_rem_DASHint] = ACTIONS(126),
    [anon_sym_and_DASHint] = ACTIONS(126),
    [anon_sym_or_DASHint] = ACTIONS(126),
    [anon_sym_xor_DASHint] = ACTIONS(126),
    [anon_sym_shl_DASHint] = ACTIONS(126),
    [anon_sym_shr_DASHint] = ACTIONS(126),
    [anon_sym_ushr_DASHint] = ACTIONS(126),
    [anon_sym_add_DASHlong] = ACTIONS(126),
    [anon_sym_sub_DASHlong] = ACTIONS(126),
    [anon_sym_mul_DASHlong] = ACTIONS(126),
    [anon_sym_div_DASHlong] = ACTIONS(126),
    [anon_sym_rem_DASHlong] = ACTIONS(126),
    [anon_sym_and_DASHlong] = ACTIONS(126),
    [anon_sym_or_DASHlong] = ACTIONS(126),
    [anon_sym_xor_DASHlong] = ACTIONS(126),
    [anon_sym_shl_DASHlong] = ACTIONS(126),
    [anon_sym_shr_DASHlong] = ACTIONS(126),
    [anon_sym_ushr_DASHlong] = ACTIONS(126),
    [anon_sym_add_DASHfloat] = ACTIONS(126),
    [anon_sym_sub_DASHfloat] = ACTIONS(126),
    [anon_sym_mul_DASHfloat] = ACTIONS(126),
    [anon_sym_div_DASHfloat] = ACTIONS(126),
    [anon_sym_rem_DASHfloat] = ACTIONS(126),
    [anon_sym_add_DASHdouble] = ACTIONS(126),
    [anon_sym_sub_DASHdouble] = ACTIONS(126),
    [anon_sym_mul_DASHdouble] = ACTIONS(126),
    [anon_sym_div_DASHdouble] = ACTIONS(126),
    [anon_sym_rem_DASHdouble] = ACTIONS(126),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(124),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(124),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(124),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(124),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(124),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(124),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(124),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(124),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(124),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(124),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(124),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(124),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(124),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_execute_DASHinline] = ACTIONS(124),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(124),
    [anon_sym_iget_DASHquick] = ACTIONS(124),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(124),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(124),
    [anon_sym_iput_DASHquick] = ACTIONS(124),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(124),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(124),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(126),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(124),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(126),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(124),
    [anon_sym_rsub_DASHint] = ACTIONS(126),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(124),
    [anon_sym_DOTline] = ACTIONS(124),
    [anon_sym_DOTlocals] = ACTIONS(124),
    [anon_sym_DOTregisters] = ACTIONS(124),
    [anon_sym_DOTcatch] = ACTIONS(126),
    [anon_sym_DOTcatchall] = ACTIONS(124),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(124),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(124),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_end_method] = ACTIONS(128),
    [anon_sym_DOTannotation] = ACTIONS(128),
    [anon_sym_DOTparam] = ACTIONS(128),
    [sym_label] = ACTIONS(128),
    [anon_sym_nop] = ACTIONS(128),
    [anon_sym_move] = ACTIONS(130),
    [anon_sym_move_SLASHfrom16] = ACTIONS(128),
    [anon_sym_move_SLASH16] = ACTIONS(128),
    [anon_sym_move_DASHwide] = ACTIONS(130),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(128),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(128),
    [anon_sym_move_DASHobject] = ACTIONS(130),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(128),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(128),
    [anon_sym_move_DASHresult] = ACTIONS(130),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(128),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(128),
    [anon_sym_move_DASHexception] = ACTIONS(128),
    [anon_sym_return_DASHvoid] = ACTIONS(128),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_return_DASHwide] = ACTIONS(128),
    [anon_sym_return_DASHobject] = ACTIONS(128),
    [anon_sym_const_SLASH4] = ACTIONS(128),
    [anon_sym_const_SLASH16] = ACTIONS(128),
    [anon_sym_const] = ACTIONS(130),
    [anon_sym_const_SLASHhigh16] = ACTIONS(128),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(128),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(128),
    [anon_sym_const_DASHwide] = ACTIONS(130),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(128),
    [anon_sym_const_DASHstring] = ACTIONS(130),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(128),
    [anon_sym_const_DASHclass] = ACTIONS(128),
    [anon_sym_monitor_DASHenter] = ACTIONS(128),
    [anon_sym_monitor_DASHexit] = ACTIONS(128),
    [anon_sym_check_DASHcast] = ACTIONS(128),
    [anon_sym_instance_DASHof] = ACTIONS(128),
    [anon_sym_array_DASHlength] = ACTIONS(128),
    [anon_sym_new_DASHinstance] = ACTIONS(128),
    [anon_sym_new_DASHarray] = ACTIONS(128),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(130),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(128),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(128),
    [anon_sym_throw] = ACTIONS(128),
    [anon_sym_goto] = ACTIONS(130),
    [anon_sym_goto_SLASH16] = ACTIONS(128),
    [anon_sym_goto_SLASH32] = ACTIONS(128),
    [anon_sym_packed_DASHswitch] = ACTIONS(128),
    [anon_sym_sparse_DASHswitch] = ACTIONS(128),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(128),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(128),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(128),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(128),
    [anon_sym_cmp_DASHlong] = ACTIONS(128),
    [anon_sym_if_DASHeq] = ACTIONS(130),
    [anon_sym_if_DASHne] = ACTIONS(130),
    [anon_sym_if_DASHlt] = ACTIONS(130),
    [anon_sym_if_DASHge] = ACTIONS(130),
    [anon_sym_if_DASHgt] = ACTIONS(130),
    [anon_sym_if_DASHle] = ACTIONS(130),
    [anon_sym_if_DASHeqz] = ACTIONS(128),
    [anon_sym_if_DASHnez] = ACTIONS(128),
    [anon_sym_if_DASHltz] = ACTIONS(128),
    [anon_sym_if_DASHgez] = ACTIONS(128),
    [anon_sym_if_DASHgtz] = ACTIONS(128),
    [anon_sym_if_DASHlez] = ACTIONS(128),
    [anon_sym_aget] = ACTIONS(130),
    [anon_sym_aget_DASHwide] = ACTIONS(128),
    [anon_sym_aget_DASHobject] = ACTIONS(128),
    [anon_sym_aget_DASHboolean] = ACTIONS(128),
    [anon_sym_aget_DASHbyte] = ACTIONS(128),
    [anon_sym_aget_DASHchar] = ACTIONS(128),
    [anon_sym_aget_DASHshort] = ACTIONS(128),
    [anon_sym_aput] = ACTIONS(130),
    [anon_sym_aput_DASHwide] = ACTIONS(128),
    [anon_sym_aput_DASHobject] = ACTIONS(128),
    [anon_sym_aput_DASHboolean] = ACTIONS(128),
    [anon_sym_aput_DASHbyte] = ACTIONS(128),
    [anon_sym_aput_DASHchar] = ACTIONS(128),
    [anon_sym_aput_DASHshort] = ACTIONS(128),
    [anon_sym_iget] = ACTIONS(130),
    [anon_sym_iget_DASHwide] = ACTIONS(130),
    [anon_sym_iget_DASHobject] = ACTIONS(130),
    [anon_sym_iget_DASHboolean] = ACTIONS(128),
    [anon_sym_iget_DASHbyte] = ACTIONS(128),
    [anon_sym_iget_DASHchar] = ACTIONS(128),
    [anon_sym_iget_DASHshort] = ACTIONS(128),
    [anon_sym_iput] = ACTIONS(130),
    [anon_sym_iput_DASHwide] = ACTIONS(130),
    [anon_sym_iput_DASHobject] = ACTIONS(130),
    [anon_sym_iput_DASHboolean] = ACTIONS(128),
    [anon_sym_iput_DASHbyte] = ACTIONS(128),
    [anon_sym_iput_DASHchar] = ACTIONS(128),
    [anon_sym_iput_DASHshort] = ACTIONS(128),
    [anon_sym_sget] = ACTIONS(130),
    [anon_sym_sget_DASHwide] = ACTIONS(128),
    [anon_sym_sget_DASHobject] = ACTIONS(128),
    [anon_sym_sget_DASHboolean] = ACTIONS(128),
    [anon_sym_sget_DASHbyte] = ACTIONS(128),
    [anon_sym_sget_DASHchar] = ACTIONS(128),
    [anon_sym_sget_DASHshort] = ACTIONS(128),
    [anon_sym_sput] = ACTIONS(130),
    [anon_sym_sput_DASHwide] = ACTIONS(128),
    [anon_sym_sput_DASHobject] = ACTIONS(128),
    [anon_sym_sput_DASHboolean] = ACTIONS(128),
    [anon_sym_sput_DASHbyte] = ACTIONS(128),
    [anon_sym_sput_DASHchar] = ACTIONS(128),
    [anon_sym_sput_DASHshort] = ACTIONS(128),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(130),
    [anon_sym_invoke_DASHsuper] = ACTIONS(130),
    [anon_sym_invoke_DASHdirect] = ACTIONS(130),
    [anon_sym_invoke_DASHstatic] = ACTIONS(130),
    [anon_sym_invoke_DASHinterface] = ACTIONS(130),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(128),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(128),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(128),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(128),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(128),
    [anon_sym_neg_DASHint] = ACTIONS(128),
    [anon_sym_not_DASHint] = ACTIONS(128),
    [anon_sym_neg_DASHlong] = ACTIONS(128),
    [anon_sym_not_DASHlong] = ACTIONS(128),
    [anon_sym_neg_DASHfloat] = ACTIONS(128),
    [anon_sym_neg_DASHdouble] = ACTIONS(128),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(128),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(128),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(128),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(128),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(128),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(128),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(128),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(128),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(128),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(128),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(128),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(128),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(128),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(128),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(128),
    [anon_sym_add_DASHint] = ACTIONS(130),
    [anon_sym_sub_DASHint] = ACTIONS(130),
    [anon_sym_mul_DASHint] = ACTIONS(130),
    [anon_sym_div_DASHint] = ACTIONS(130),
    [anon_sym_rem_DASHint] = ACTIONS(130),
    [anon_sym_and_DASHint] = ACTIONS(130),
    [anon_sym_or_DASHint] = ACTIONS(130),
    [anon_sym_xor_DASHint] = ACTIONS(130),
    [anon_sym_shl_DASHint] = ACTIONS(130),
    [anon_sym_shr_DASHint] = ACTIONS(130),
    [anon_sym_ushr_DASHint] = ACTIONS(130),
    [anon_sym_add_DASHlong] = ACTIONS(130),
    [anon_sym_sub_DASHlong] = ACTIONS(130),
    [anon_sym_mul_DASHlong] = ACTIONS(130),
    [anon_sym_div_DASHlong] = ACTIONS(130),
    [anon_sym_rem_DASHlong] = ACTIONS(130),
    [anon_sym_and_DASHlong] = ACTIONS(130),
    [anon_sym_or_DASHlong] = ACTIONS(130),
    [anon_sym_xor_DASHlong] = ACTIONS(130),
    [anon_sym_shl_DASHlong] = ACTIONS(130),
    [anon_sym_shr_DASHlong] = ACTIONS(130),
    [anon_sym_ushr_DASHlong] = ACTIONS(130),
    [anon_sym_add_DASHfloat] = ACTIONS(130),
    [anon_sym_sub_DASHfloat] = ACTIONS(130),
    [anon_sym_mul_DASHfloat] = ACTIONS(130),
    [anon_sym_div_DASHfloat] = ACTIONS(130),
    [anon_sym_rem_DASHfloat] = ACTIONS(130),
    [anon_sym_add_DASHdouble] = ACTIONS(130),
    [anon_sym_sub_DASHdouble] = ACTIONS(130),
    [anon_sym_mul_DASHdouble] = ACTIONS(130),
    [anon_sym_div_DASHdouble] = ACTIONS(130),
    [anon_sym_rem_DASHdouble] = ACTIONS(130),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(128),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(128),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(128),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(128),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(128),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(128),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(128),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(128),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(128),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(128),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(128),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(128),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(128),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_execute_DASHinline] = ACTIONS(128),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(128),
    [anon_sym_iget_DASHquick] = ACTIONS(128),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(128),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(128),
    [anon_sym_iput_DASHquick] = ACTIONS(128),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(128),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(128),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(130),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(128),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(130),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(128),
    [anon_sym_rsub_DASHint] = ACTIONS(130),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(128),
    [anon_sym_DOTline] = ACTIONS(128),
    [anon_sym_DOTlocals] = ACTIONS(128),
    [anon_sym_DOTregisters] = ACTIONS(128),
    [anon_sym_DOTcatch] = ACTIONS(130),
    [anon_sym_DOTcatchall] = ACTIONS(128),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(128),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(128),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_end_method] = ACTIONS(132),
    [anon_sym_DOTannotation] = ACTIONS(132),
    [anon_sym_DOTparam] = ACTIONS(132),
    [sym_label] = ACTIONS(132),
    [anon_sym_nop] = ACTIONS(132),
    [anon_sym_move] = ACTIONS(134),
    [anon_sym_move_SLASHfrom16] = ACTIONS(132),
    [anon_sym_move_SLASH16] = ACTIONS(132),
    [anon_sym_move_DASHwide] = ACTIONS(134),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(132),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(132),
    [anon_sym_move_DASHobject] = ACTIONS(134),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(132),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(132),
    [anon_sym_move_DASHresult] = ACTIONS(134),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(132),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(132),
    [anon_sym_move_DASHexception] = ACTIONS(132),
    [anon_sym_return_DASHvoid] = ACTIONS(132),
    [anon_sym_return] = ACTIONS(134),
    [anon_sym_return_DASHwide] = ACTIONS(132),
    [anon_sym_return_DASHobject] = ACTIONS(132),
    [anon_sym_const_SLASH4] = ACTIONS(132),
    [anon_sym_const_SLASH16] = ACTIONS(132),
    [anon_sym_const] = ACTIONS(134),
    [anon_sym_const_SLASHhigh16] = ACTIONS(132),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(132),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(132),
    [anon_sym_const_DASHwide] = ACTIONS(134),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(132),
    [anon_sym_const_DASHstring] = ACTIONS(134),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(132),
    [anon_sym_const_DASHclass] = ACTIONS(132),
    [anon_sym_monitor_DASHenter] = ACTIONS(132),
    [anon_sym_monitor_DASHexit] = ACTIONS(132),
    [anon_sym_check_DASHcast] = ACTIONS(132),
    [anon_sym_instance_DASHof] = ACTIONS(132),
    [anon_sym_array_DASHlength] = ACTIONS(132),
    [anon_sym_new_DASHinstance] = ACTIONS(132),
    [anon_sym_new_DASHarray] = ACTIONS(132),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(134),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(132),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(132),
    [anon_sym_throw] = ACTIONS(132),
    [anon_sym_goto] = ACTIONS(134),
    [anon_sym_goto_SLASH16] = ACTIONS(132),
    [anon_sym_goto_SLASH32] = ACTIONS(132),
    [anon_sym_packed_DASHswitch] = ACTIONS(132),
    [anon_sym_sparse_DASHswitch] = ACTIONS(132),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(132),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(132),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(132),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(132),
    [anon_sym_cmp_DASHlong] = ACTIONS(132),
    [anon_sym_if_DASHeq] = ACTIONS(134),
    [anon_sym_if_DASHne] = ACTIONS(134),
    [anon_sym_if_DASHlt] = ACTIONS(134),
    [anon_sym_if_DASHge] = ACTIONS(134),
    [anon_sym_if_DASHgt] = ACTIONS(134),
    [anon_sym_if_DASHle] = ACTIONS(134),
    [anon_sym_if_DASHeqz] = ACTIONS(132),
    [anon_sym_if_DASHnez] = ACTIONS(132),
    [anon_sym_if_DASHltz] = ACTIONS(132),
    [anon_sym_if_DASHgez] = ACTIONS(132),
    [anon_sym_if_DASHgtz] = ACTIONS(132),
    [anon_sym_if_DASHlez] = ACTIONS(132),
    [anon_sym_aget] = ACTIONS(134),
    [anon_sym_aget_DASHwide] = ACTIONS(132),
    [anon_sym_aget_DASHobject] = ACTIONS(132),
    [anon_sym_aget_DASHboolean] = ACTIONS(132),
    [anon_sym_aget_DASHbyte] = ACTIONS(132),
    [anon_sym_aget_DASHchar] = ACTIONS(132),
    [anon_sym_aget_DASHshort] = ACTIONS(132),
    [anon_sym_aput] = ACTIONS(134),
    [anon_sym_aput_DASHwide] = ACTIONS(132),
    [anon_sym_aput_DASHobject] = ACTIONS(132),
    [anon_sym_aput_DASHboolean] = ACTIONS(132),
    [anon_sym_aput_DASHbyte] = ACTIONS(132),
    [anon_sym_aput_DASHchar] = ACTIONS(132),
    [anon_sym_aput_DASHshort] = ACTIONS(132),
    [anon_sym_iget] = ACTIONS(134),
    [anon_sym_iget_DASHwide] = ACTIONS(134),
    [anon_sym_iget_DASHobject] = ACTIONS(134),
    [anon_sym_iget_DASHboolean] = ACTIONS(132),
    [anon_sym_iget_DASHbyte] = ACTIONS(132),
    [anon_sym_iget_DASHchar] = ACTIONS(132),
    [anon_sym_iget_DASHshort] = ACTIONS(132),
    [anon_sym_iput] = ACTIONS(134),
    [anon_sym_iput_DASHwide] = ACTIONS(134),
    [anon_sym_iput_DASHobject] = ACTIONS(134),
    [anon_sym_iput_DASHboolean] = ACTIONS(132),
    [anon_sym_iput_DASHbyte] = ACTIONS(132),
    [anon_sym_iput_DASHchar] = ACTIONS(132),
    [anon_sym_iput_DASHshort] = ACTIONS(132),
    [anon_sym_sget] = ACTIONS(134),
    [anon_sym_sget_DASHwide] = ACTIONS(132),
    [anon_sym_sget_DASHobject] = ACTIONS(132),
    [anon_sym_sget_DASHboolean] = ACTIONS(132),
    [anon_sym_sget_DASHbyte] = ACTIONS(132),
    [anon_sym_sget_DASHchar] = ACTIONS(132),
    [anon_sym_sget_DASHshort] = ACTIONS(132),
    [anon_sym_sput] = ACTIONS(134),
    [anon_sym_sput_DASHwide] = ACTIONS(132),
    [anon_sym_sput_DASHobject] = ACTIONS(132),
    [anon_sym_sput_DASHboolean] = ACTIONS(132),
    [anon_sym_sput_DASHbyte] = ACTIONS(132),
    [anon_sym_sput_DASHchar] = ACTIONS(132),
    [anon_sym_sput_DASHshort] = ACTIONS(132),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(134),
    [anon_sym_invoke_DASHsuper] = ACTIONS(134),
    [anon_sym_invoke_DASHdirect] = ACTIONS(134),
    [anon_sym_invoke_DASHstatic] = ACTIONS(134),
    [anon_sym_invoke_DASHinterface] = ACTIONS(134),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(132),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(132),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(132),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(132),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(132),
    [anon_sym_neg_DASHint] = ACTIONS(132),
    [anon_sym_not_DASHint] = ACTIONS(132),
    [anon_sym_neg_DASHlong] = ACTIONS(132),
    [anon_sym_not_DASHlong] = ACTIONS(132),
    [anon_sym_neg_DASHfloat] = ACTIONS(132),
    [anon_sym_neg_DASHdouble] = ACTIONS(132),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(132),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(132),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(132),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(132),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(132),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(132),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(132),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(132),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(132),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(132),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(132),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(132),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(132),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(132),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(132),
    [anon_sym_add_DASHint] = ACTIONS(134),
    [anon_sym_sub_DASHint] = ACTIONS(134),
    [anon_sym_mul_DASHint] = ACTIONS(134),
    [anon_sym_div_DASHint] = ACTIONS(134),
    [anon_sym_rem_DASHint] = ACTIONS(134),
    [anon_sym_and_DASHint] = ACTIONS(134),
    [anon_sym_or_DASHint] = ACTIONS(134),
    [anon_sym_xor_DASHint] = ACTIONS(134),
    [anon_sym_shl_DASHint] = ACTIONS(134),
    [anon_sym_shr_DASHint] = ACTIONS(134),
    [anon_sym_ushr_DASHint] = ACTIONS(134),
    [anon_sym_add_DASHlong] = ACTIONS(134),
    [anon_sym_sub_DASHlong] = ACTIONS(134),
    [anon_sym_mul_DASHlong] = ACTIONS(134),
    [anon_sym_div_DASHlong] = ACTIONS(134),
    [anon_sym_rem_DASHlong] = ACTIONS(134),
    [anon_sym_and_DASHlong] = ACTIONS(134),
    [anon_sym_or_DASHlong] = ACTIONS(134),
    [anon_sym_xor_DASHlong] = ACTIONS(134),
    [anon_sym_shl_DASHlong] = ACTIONS(134),
    [anon_sym_shr_DASHlong] = ACTIONS(134),
    [anon_sym_ushr_DASHlong] = ACTIONS(134),
    [anon_sym_add_DASHfloat] = ACTIONS(134),
    [anon_sym_sub_DASHfloat] = ACTIONS(134),
    [anon_sym_mul_DASHfloat] = ACTIONS(134),
    [anon_sym_div_DASHfloat] = ACTIONS(134),
    [anon_sym_rem_DASHfloat] = ACTIONS(134),
    [anon_sym_add_DASHdouble] = ACTIONS(134),
    [anon_sym_sub_DASHdouble] = ACTIONS(134),
    [anon_sym_mul_DASHdouble] = ACTIONS(134),
    [anon_sym_div_DASHdouble] = ACTIONS(134),
    [anon_sym_rem_DASHdouble] = ACTIONS(134),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(132),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(132),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(132),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(132),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(132),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(132),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(132),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(132),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(132),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(132),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(132),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(132),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(132),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_execute_DASHinline] = ACTIONS(132),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(132),
    [anon_sym_iget_DASHquick] = ACTIONS(132),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(132),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(132),
    [anon_sym_iput_DASHquick] = ACTIONS(132),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(132),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(132),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(134),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(132),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(134),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(132),
    [anon_sym_rsub_DASHint] = ACTIONS(134),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(132),
    [anon_sym_DOTline] = ACTIONS(132),
    [anon_sym_DOTlocals] = ACTIONS(132),
    [anon_sym_DOTregisters] = ACTIONS(132),
    [anon_sym_DOTcatch] = ACTIONS(134),
    [anon_sym_DOTcatchall] = ACTIONS(132),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(132),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(132),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_end_method] = ACTIONS(136),
    [anon_sym_DOTannotation] = ACTIONS(136),
    [anon_sym_DOTparam] = ACTIONS(136),
    [sym_label] = ACTIONS(136),
    [anon_sym_nop] = ACTIONS(136),
    [anon_sym_move] = ACTIONS(138),
    [anon_sym_move_SLASHfrom16] = ACTIONS(136),
    [anon_sym_move_SLASH16] = ACTIONS(136),
    [anon_sym_move_DASHwide] = ACTIONS(138),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(136),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(136),
    [anon_sym_move_DASHobject] = ACTIONS(138),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(136),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(136),
    [anon_sym_move_DASHresult] = ACTIONS(138),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(136),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(136),
    [anon_sym_move_DASHexception] = ACTIONS(136),
    [anon_sym_return_DASHvoid] = ACTIONS(136),
    [anon_sym_return] = ACTIONS(138),
    [anon_sym_return_DASHwide] = ACTIONS(136),
    [anon_sym_return_DASHobject] = ACTIONS(136),
    [anon_sym_const_SLASH4] = ACTIONS(136),
    [anon_sym_const_SLASH16] = ACTIONS(136),
    [anon_sym_const] = ACTIONS(138),
    [anon_sym_const_SLASHhigh16] = ACTIONS(136),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(136),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(136),
    [anon_sym_const_DASHwide] = ACTIONS(138),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(136),
    [anon_sym_const_DASHstring] = ACTIONS(138),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(136),
    [anon_sym_const_DASHclass] = ACTIONS(136),
    [anon_sym_monitor_DASHenter] = ACTIONS(136),
    [anon_sym_monitor_DASHexit] = ACTIONS(136),
    [anon_sym_check_DASHcast] = ACTIONS(136),
    [anon_sym_instance_DASHof] = ACTIONS(136),
    [anon_sym_array_DASHlength] = ACTIONS(136),
    [anon_sym_new_DASHinstance] = ACTIONS(136),
    [anon_sym_new_DASHarray] = ACTIONS(136),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(138),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(136),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(136),
    [anon_sym_throw] = ACTIONS(136),
    [anon_sym_goto] = ACTIONS(138),
    [anon_sym_goto_SLASH16] = ACTIONS(136),
    [anon_sym_goto_SLASH32] = ACTIONS(136),
    [anon_sym_packed_DASHswitch] = ACTIONS(136),
    [anon_sym_sparse_DASHswitch] = ACTIONS(136),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(136),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(136),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(136),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(136),
    [anon_sym_cmp_DASHlong] = ACTIONS(136),
    [anon_sym_if_DASHeq] = ACTIONS(138),
    [anon_sym_if_DASHne] = ACTIONS(138),
    [anon_sym_if_DASHlt] = ACTIONS(138),
    [anon_sym_if_DASHge] = ACTIONS(138),
    [anon_sym_if_DASHgt] = ACTIONS(138),
    [anon_sym_if_DASHle] = ACTIONS(138),
    [anon_sym_if_DASHeqz] = ACTIONS(136),
    [anon_sym_if_DASHnez] = ACTIONS(136),
    [anon_sym_if_DASHltz] = ACTIONS(136),
    [anon_sym_if_DASHgez] = ACTIONS(136),
    [anon_sym_if_DASHgtz] = ACTIONS(136),
    [anon_sym_if_DASHlez] = ACTIONS(136),
    [anon_sym_aget] = ACTIONS(138),
    [anon_sym_aget_DASHwide] = ACTIONS(136),
    [anon_sym_aget_DASHobject] = ACTIONS(136),
    [anon_sym_aget_DASHboolean] = ACTIONS(136),
    [anon_sym_aget_DASHbyte] = ACTIONS(136),
    [anon_sym_aget_DASHchar] = ACTIONS(136),
    [anon_sym_aget_DASHshort] = ACTIONS(136),
    [anon_sym_aput] = ACTIONS(138),
    [anon_sym_aput_DASHwide] = ACTIONS(136),
    [anon_sym_aput_DASHobject] = ACTIONS(136),
    [anon_sym_aput_DASHboolean] = ACTIONS(136),
    [anon_sym_aput_DASHbyte] = ACTIONS(136),
    [anon_sym_aput_DASHchar] = ACTIONS(136),
    [anon_sym_aput_DASHshort] = ACTIONS(136),
    [anon_sym_iget] = ACTIONS(138),
    [anon_sym_iget_DASHwide] = ACTIONS(138),
    [anon_sym_iget_DASHobject] = ACTIONS(138),
    [anon_sym_iget_DASHboolean] = ACTIONS(136),
    [anon_sym_iget_DASHbyte] = ACTIONS(136),
    [anon_sym_iget_DASHchar] = ACTIONS(136),
    [anon_sym_iget_DASHshort] = ACTIONS(136),
    [anon_sym_iput] = ACTIONS(138),
    [anon_sym_iput_DASHwide] = ACTIONS(138),
    [anon_sym_iput_DASHobject] = ACTIONS(138),
    [anon_sym_iput_DASHboolean] = ACTIONS(136),
    [anon_sym_iput_DASHbyte] = ACTIONS(136),
    [anon_sym_iput_DASHchar] = ACTIONS(136),
    [anon_sym_iput_DASHshort] = ACTIONS(136),
    [anon_sym_sget] = ACTIONS(138),
    [anon_sym_sget_DASHwide] = ACTIONS(136),
    [anon_sym_sget_DASHobject] = ACTIONS(136),
    [anon_sym_sget_DASHboolean] = ACTIONS(136),
    [anon_sym_sget_DASHbyte] = ACTIONS(136),
    [anon_sym_sget_DASHchar] = ACTIONS(136),
    [anon_sym_sget_DASHshort] = ACTIONS(136),
    [anon_sym_sput] = ACTIONS(138),
    [anon_sym_sput_DASHwide] = ACTIONS(136),
    [anon_sym_sput_DASHobject] = ACTIONS(136),
    [anon_sym_sput_DASHboolean] = ACTIONS(136),
    [anon_sym_sput_DASHbyte] = ACTIONS(136),
    [anon_sym_sput_DASHchar] = ACTIONS(136),
    [anon_sym_sput_DASHshort] = ACTIONS(136),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(138),
    [anon_sym_invoke_DASHsuper] = ACTIONS(138),
    [anon_sym_invoke_DASHdirect] = ACTIONS(138),
    [anon_sym_invoke_DASHstatic] = ACTIONS(138),
    [anon_sym_invoke_DASHinterface] = ACTIONS(138),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(136),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(136),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(136),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(136),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(136),
    [anon_sym_neg_DASHint] = ACTIONS(136),
    [anon_sym_not_DASHint] = ACTIONS(136),
    [anon_sym_neg_DASHlong] = ACTIONS(136),
    [anon_sym_not_DASHlong] = ACTIONS(136),
    [anon_sym_neg_DASHfloat] = ACTIONS(136),
    [anon_sym_neg_DASHdouble] = ACTIONS(136),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(136),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(136),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(136),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(136),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(136),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(136),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(136),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(136),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(136),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(136),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(136),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(136),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(136),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(136),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(136),
    [anon_sym_add_DASHint] = ACTIONS(138),
    [anon_sym_sub_DASHint] = ACTIONS(138),
    [anon_sym_mul_DASHint] = ACTIONS(138),
    [anon_sym_div_DASHint] = ACTIONS(138),
    [anon_sym_rem_DASHint] = ACTIONS(138),
    [anon_sym_and_DASHint] = ACTIONS(138),
    [anon_sym_or_DASHint] = ACTIONS(138),
    [anon_sym_xor_DASHint] = ACTIONS(138),
    [anon_sym_shl_DASHint] = ACTIONS(138),
    [anon_sym_shr_DASHint] = ACTIONS(138),
    [anon_sym_ushr_DASHint] = ACTIONS(138),
    [anon_sym_add_DASHlong] = ACTIONS(138),
    [anon_sym_sub_DASHlong] = ACTIONS(138),
    [anon_sym_mul_DASHlong] = ACTIONS(138),
    [anon_sym_div_DASHlong] = ACTIONS(138),
    [anon_sym_rem_DASHlong] = ACTIONS(138),
    [anon_sym_and_DASHlong] = ACTIONS(138),
    [anon_sym_or_DASHlong] = ACTIONS(138),
    [anon_sym_xor_DASHlong] = ACTIONS(138),
    [anon_sym_shl_DASHlong] = ACTIONS(138),
    [anon_sym_shr_DASHlong] = ACTIONS(138),
    [anon_sym_ushr_DASHlong] = ACTIONS(138),
    [anon_sym_add_DASHfloat] = ACTIONS(138),
    [anon_sym_sub_DASHfloat] = ACTIONS(138),
    [anon_sym_mul_DASHfloat] = ACTIONS(138),
    [anon_sym_div_DASHfloat] = ACTIONS(138),
    [anon_sym_rem_DASHfloat] = ACTIONS(138),
    [anon_sym_add_DASHdouble] = ACTIONS(138),
    [anon_sym_sub_DASHdouble] = ACTIONS(138),
    [anon_sym_mul_DASHdouble] = ACTIONS(138),
    [anon_sym_div_DASHdouble] = ACTIONS(138),
    [anon_sym_rem_DASHdouble] = ACTIONS(138),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(136),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(136),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(136),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(136),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(136),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(136),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(136),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(136),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(136),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(136),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(136),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(136),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(136),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_execute_DASHinline] = ACTIONS(136),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(136),
    [anon_sym_iget_DASHquick] = ACTIONS(136),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(136),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(136),
    [anon_sym_iput_DASHquick] = ACTIONS(136),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(136),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(136),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(138),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(136),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(138),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(136),
    [anon_sym_rsub_DASHint] = ACTIONS(138),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(136),
    [anon_sym_DOTline] = ACTIONS(136),
    [anon_sym_DOTlocals] = ACTIONS(136),
    [anon_sym_DOTregisters] = ACTIONS(136),
    [anon_sym_DOTcatch] = ACTIONS(138),
    [anon_sym_DOTcatchall] = ACTIONS(136),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(136),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(136),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_end_method] = ACTIONS(140),
    [anon_sym_DOTannotation] = ACTIONS(140),
    [anon_sym_DOTparam] = ACTIONS(140),
    [sym_label] = ACTIONS(140),
    [anon_sym_nop] = ACTIONS(140),
    [anon_sym_move] = ACTIONS(142),
    [anon_sym_move_SLASHfrom16] = ACTIONS(140),
    [anon_sym_move_SLASH16] = ACTIONS(140),
    [anon_sym_move_DASHwide] = ACTIONS(142),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(140),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(140),
    [anon_sym_move_DASHobject] = ACTIONS(142),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(140),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(140),
    [anon_sym_move_DASHresult] = ACTIONS(142),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(140),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(140),
    [anon_sym_move_DASHexception] = ACTIONS(140),
    [anon_sym_return_DASHvoid] = ACTIONS(140),
    [anon_sym_return] = ACTIONS(142),
    [anon_sym_return_DASHwide] = ACTIONS(140),
    [anon_sym_return_DASHobject] = ACTIONS(140),
    [anon_sym_const_SLASH4] = ACTIONS(140),
    [anon_sym_const_SLASH16] = ACTIONS(140),
    [anon_sym_const] = ACTIONS(142),
    [anon_sym_const_SLASHhigh16] = ACTIONS(140),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(140),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(140),
    [anon_sym_const_DASHwide] = ACTIONS(142),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(140),
    [anon_sym_const_DASHstring] = ACTIONS(142),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(140),
    [anon_sym_const_DASHclass] = ACTIONS(140),
    [anon_sym_monitor_DASHenter] = ACTIONS(140),
    [anon_sym_monitor_DASHexit] = ACTIONS(140),
    [anon_sym_check_DASHcast] = ACTIONS(140),
    [anon_sym_instance_DASHof] = ACTIONS(140),
    [anon_sym_array_DASHlength] = ACTIONS(140),
    [anon_sym_new_DASHinstance] = ACTIONS(140),
    [anon_sym_new_DASHarray] = ACTIONS(140),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(142),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(140),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(140),
    [anon_sym_throw] = ACTIONS(140),
    [anon_sym_goto] = ACTIONS(142),
    [anon_sym_goto_SLASH16] = ACTIONS(140),
    [anon_sym_goto_SLASH32] = ACTIONS(140),
    [anon_sym_packed_DASHswitch] = ACTIONS(140),
    [anon_sym_sparse_DASHswitch] = ACTIONS(140),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(140),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(140),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(140),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(140),
    [anon_sym_cmp_DASHlong] = ACTIONS(140),
    [anon_sym_if_DASHeq] = ACTIONS(142),
    [anon_sym_if_DASHne] = ACTIONS(142),
    [anon_sym_if_DASHlt] = ACTIONS(142),
    [anon_sym_if_DASHge] = ACTIONS(142),
    [anon_sym_if_DASHgt] = ACTIONS(142),
    [anon_sym_if_DASHle] = ACTIONS(142),
    [anon_sym_if_DASHeqz] = ACTIONS(140),
    [anon_sym_if_DASHnez] = ACTIONS(140),
    [anon_sym_if_DASHltz] = ACTIONS(140),
    [anon_sym_if_DASHgez] = ACTIONS(140),
    [anon_sym_if_DASHgtz] = ACTIONS(140),
    [anon_sym_if_DASHlez] = ACTIONS(140),
    [anon_sym_aget] = ACTIONS(142),
    [anon_sym_aget_DASHwide] = ACTIONS(140),
    [anon_sym_aget_DASHobject] = ACTIONS(140),
    [anon_sym_aget_DASHboolean] = ACTIONS(140),
    [anon_sym_aget_DASHbyte] = ACTIONS(140),
    [anon_sym_aget_DASHchar] = ACTIONS(140),
    [anon_sym_aget_DASHshort] = ACTIONS(140),
    [anon_sym_aput] = ACTIONS(142),
    [anon_sym_aput_DASHwide] = ACTIONS(140),
    [anon_sym_aput_DASHobject] = ACTIONS(140),
    [anon_sym_aput_DASHboolean] = ACTIONS(140),
    [anon_sym_aput_DASHbyte] = ACTIONS(140),
    [anon_sym_aput_DASHchar] = ACTIONS(140),
    [anon_sym_aput_DASHshort] = ACTIONS(140),
    [anon_sym_iget] = ACTIONS(142),
    [anon_sym_iget_DASHwide] = ACTIONS(142),
    [anon_sym_iget_DASHobject] = ACTIONS(142),
    [anon_sym_iget_DASHboolean] = ACTIONS(140),
    [anon_sym_iget_DASHbyte] = ACTIONS(140),
    [anon_sym_iget_DASHchar] = ACTIONS(140),
    [anon_sym_iget_DASHshort] = ACTIONS(140),
    [anon_sym_iput] = ACTIONS(142),
    [anon_sym_iput_DASHwide] = ACTIONS(142),
    [anon_sym_iput_DASHobject] = ACTIONS(142),
    [anon_sym_iput_DASHboolean] = ACTIONS(140),
    [anon_sym_iput_DASHbyte] = ACTIONS(140),
    [anon_sym_iput_DASHchar] = ACTIONS(140),
    [anon_sym_iput_DASHshort] = ACTIONS(140),
    [anon_sym_sget] = ACTIONS(142),
    [anon_sym_sget_DASHwide] = ACTIONS(140),
    [anon_sym_sget_DASHobject] = ACTIONS(140),
    [anon_sym_sget_DASHboolean] = ACTIONS(140),
    [anon_sym_sget_DASHbyte] = ACTIONS(140),
    [anon_sym_sget_DASHchar] = ACTIONS(140),
    [anon_sym_sget_DASHshort] = ACTIONS(140),
    [anon_sym_sput] = ACTIONS(142),
    [anon_sym_sput_DASHwide] = ACTIONS(140),
    [anon_sym_sput_DASHobject] = ACTIONS(140),
    [anon_sym_sput_DASHboolean] = ACTIONS(140),
    [anon_sym_sput_DASHbyte] = ACTIONS(140),
    [anon_sym_sput_DASHchar] = ACTIONS(140),
    [anon_sym_sput_DASHshort] = ACTIONS(140),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(142),
    [anon_sym_invoke_DASHsuper] = ACTIONS(142),
    [anon_sym_invoke_DASHdirect] = ACTIONS(142),
    [anon_sym_invoke_DASHstatic] = ACTIONS(142),
    [anon_sym_invoke_DASHinterface] = ACTIONS(142),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(140),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(140),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(140),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(140),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(140),
    [anon_sym_neg_DASHint] = ACTIONS(140),
    [anon_sym_not_DASHint] = ACTIONS(140),
    [anon_sym_neg_DASHlong] = ACTIONS(140),
    [anon_sym_not_DASHlong] = ACTIONS(140),
    [anon_sym_neg_DASHfloat] = ACTIONS(140),
    [anon_sym_neg_DASHdouble] = ACTIONS(140),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(140),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(140),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(140),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(140),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(140),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(140),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(140),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(140),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(140),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(140),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(140),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(140),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(140),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(140),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(140),
    [anon_sym_add_DASHint] = ACTIONS(142),
    [anon_sym_sub_DASHint] = ACTIONS(142),
    [anon_sym_mul_DASHint] = ACTIONS(142),
    [anon_sym_div_DASHint] = ACTIONS(142),
    [anon_sym_rem_DASHint] = ACTIONS(142),
    [anon_sym_and_DASHint] = ACTIONS(142),
    [anon_sym_or_DASHint] = ACTIONS(142),
    [anon_sym_xor_DASHint] = ACTIONS(142),
    [anon_sym_shl_DASHint] = ACTIONS(142),
    [anon_sym_shr_DASHint] = ACTIONS(142),
    [anon_sym_ushr_DASHint] = ACTIONS(142),
    [anon_sym_add_DASHlong] = ACTIONS(142),
    [anon_sym_sub_DASHlong] = ACTIONS(142),
    [anon_sym_mul_DASHlong] = ACTIONS(142),
    [anon_sym_div_DASHlong] = ACTIONS(142),
    [anon_sym_rem_DASHlong] = ACTIONS(142),
    [anon_sym_and_DASHlong] = ACTIONS(142),
    [anon_sym_or_DASHlong] = ACTIONS(142),
    [anon_sym_xor_DASHlong] = ACTIONS(142),
    [anon_sym_shl_DASHlong] = ACTIONS(142),
    [anon_sym_shr_DASHlong] = ACTIONS(142),
    [anon_sym_ushr_DASHlong] = ACTIONS(142),
    [anon_sym_add_DASHfloat] = ACTIONS(142),
    [anon_sym_sub_DASHfloat] = ACTIONS(142),
    [anon_sym_mul_DASHfloat] = ACTIONS(142),
    [anon_sym_div_DASHfloat] = ACTIONS(142),
    [anon_sym_rem_DASHfloat] = ACTIONS(142),
    [anon_sym_add_DASHdouble] = ACTIONS(142),
    [anon_sym_sub_DASHdouble] = ACTIONS(142),
    [anon_sym_mul_DASHdouble] = ACTIONS(142),
    [anon_sym_div_DASHdouble] = ACTIONS(142),
    [anon_sym_rem_DASHdouble] = ACTIONS(142),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(140),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(140),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(140),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(140),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(140),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(140),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(140),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(140),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(140),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(140),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(140),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(140),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(140),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_execute_DASHinline] = ACTIONS(140),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(140),
    [anon_sym_iget_DASHquick] = ACTIONS(140),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(140),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(140),
    [anon_sym_iput_DASHquick] = ACTIONS(140),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(140),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(140),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(142),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(140),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(142),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(140),
    [anon_sym_rsub_DASHint] = ACTIONS(142),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(140),
    [anon_sym_DOTline] = ACTIONS(140),
    [anon_sym_DOTlocals] = ACTIONS(140),
    [anon_sym_DOTregisters] = ACTIONS(140),
    [anon_sym_DOTcatch] = ACTIONS(142),
    [anon_sym_DOTcatchall] = ACTIONS(140),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(140),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(140),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_end_method] = ACTIONS(144),
    [anon_sym_DOTannotation] = ACTIONS(144),
    [anon_sym_DOTparam] = ACTIONS(144),
    [sym_label] = ACTIONS(144),
    [anon_sym_nop] = ACTIONS(144),
    [anon_sym_move] = ACTIONS(146),
    [anon_sym_move_SLASHfrom16] = ACTIONS(144),
    [anon_sym_move_SLASH16] = ACTIONS(144),
    [anon_sym_move_DASHwide] = ACTIONS(146),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(144),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(144),
    [anon_sym_move_DASHobject] = ACTIONS(146),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(144),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(144),
    [anon_sym_move_DASHresult] = ACTIONS(146),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(144),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(144),
    [anon_sym_move_DASHexception] = ACTIONS(144),
    [anon_sym_return_DASHvoid] = ACTIONS(144),
    [anon_sym_return] = ACTIONS(146),
    [anon_sym_return_DASHwide] = ACTIONS(144),
    [anon_sym_return_DASHobject] = ACTIONS(144),
    [anon_sym_const_SLASH4] = ACTIONS(144),
    [anon_sym_const_SLASH16] = ACTIONS(144),
    [anon_sym_const] = ACTIONS(146),
    [anon_sym_const_SLASHhigh16] = ACTIONS(144),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(144),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(144),
    [anon_sym_const_DASHwide] = ACTIONS(146),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(144),
    [anon_sym_const_DASHstring] = ACTIONS(146),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(144),
    [anon_sym_const_DASHclass] = ACTIONS(144),
    [anon_sym_monitor_DASHenter] = ACTIONS(144),
    [anon_sym_monitor_DASHexit] = ACTIONS(144),
    [anon_sym_check_DASHcast] = ACTIONS(144),
    [anon_sym_instance_DASHof] = ACTIONS(144),
    [anon_sym_array_DASHlength] = ACTIONS(144),
    [anon_sym_new_DASHinstance] = ACTIONS(144),
    [anon_sym_new_DASHarray] = ACTIONS(144),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(146),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(144),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(144),
    [anon_sym_throw] = ACTIONS(144),
    [anon_sym_goto] = ACTIONS(146),
    [anon_sym_goto_SLASH16] = ACTIONS(144),
    [anon_sym_goto_SLASH32] = ACTIONS(144),
    [anon_sym_packed_DASHswitch] = ACTIONS(144),
    [anon_sym_sparse_DASHswitch] = ACTIONS(144),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(144),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(144),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(144),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(144),
    [anon_sym_cmp_DASHlong] = ACTIONS(144),
    [anon_sym_if_DASHeq] = ACTIONS(146),
    [anon_sym_if_DASHne] = ACTIONS(146),
    [anon_sym_if_DASHlt] = ACTIONS(146),
    [anon_sym_if_DASHge] = ACTIONS(146),
    [anon_sym_if_DASHgt] = ACTIONS(146),
    [anon_sym_if_DASHle] = ACTIONS(146),
    [anon_sym_if_DASHeqz] = ACTIONS(144),
    [anon_sym_if_DASHnez] = ACTIONS(144),
    [anon_sym_if_DASHltz] = ACTIONS(144),
    [anon_sym_if_DASHgez] = ACTIONS(144),
    [anon_sym_if_DASHgtz] = ACTIONS(144),
    [anon_sym_if_DASHlez] = ACTIONS(144),
    [anon_sym_aget] = ACTIONS(146),
    [anon_sym_aget_DASHwide] = ACTIONS(144),
    [anon_sym_aget_DASHobject] = ACTIONS(144),
    [anon_sym_aget_DASHboolean] = ACTIONS(144),
    [anon_sym_aget_DASHbyte] = ACTIONS(144),
    [anon_sym_aget_DASHchar] = ACTIONS(144),
    [anon_sym_aget_DASHshort] = ACTIONS(144),
    [anon_sym_aput] = ACTIONS(146),
    [anon_sym_aput_DASHwide] = ACTIONS(144),
    [anon_sym_aput_DASHobject] = ACTIONS(144),
    [anon_sym_aput_DASHboolean] = ACTIONS(144),
    [anon_sym_aput_DASHbyte] = ACTIONS(144),
    [anon_sym_aput_DASHchar] = ACTIONS(144),
    [anon_sym_aput_DASHshort] = ACTIONS(144),
    [anon_sym_iget] = ACTIONS(146),
    [anon_sym_iget_DASHwide] = ACTIONS(146),
    [anon_sym_iget_DASHobject] = ACTIONS(146),
    [anon_sym_iget_DASHboolean] = ACTIONS(144),
    [anon_sym_iget_DASHbyte] = ACTIONS(144),
    [anon_sym_iget_DASHchar] = ACTIONS(144),
    [anon_sym_iget_DASHshort] = ACTIONS(144),
    [anon_sym_iput] = ACTIONS(146),
    [anon_sym_iput_DASHwide] = ACTIONS(146),
    [anon_sym_iput_DASHobject] = ACTIONS(146),
    [anon_sym_iput_DASHboolean] = ACTIONS(144),
    [anon_sym_iput_DASHbyte] = ACTIONS(144),
    [anon_sym_iput_DASHchar] = ACTIONS(144),
    [anon_sym_iput_DASHshort] = ACTIONS(144),
    [anon_sym_sget] = ACTIONS(146),
    [anon_sym_sget_DASHwide] = ACTIONS(144),
    [anon_sym_sget_DASHobject] = ACTIONS(144),
    [anon_sym_sget_DASHboolean] = ACTIONS(144),
    [anon_sym_sget_DASHbyte] = ACTIONS(144),
    [anon_sym_sget_DASHchar] = ACTIONS(144),
    [anon_sym_sget_DASHshort] = ACTIONS(144),
    [anon_sym_sput] = ACTIONS(146),
    [anon_sym_sput_DASHwide] = ACTIONS(144),
    [anon_sym_sput_DASHobject] = ACTIONS(144),
    [anon_sym_sput_DASHboolean] = ACTIONS(144),
    [anon_sym_sput_DASHbyte] = ACTIONS(144),
    [anon_sym_sput_DASHchar] = ACTIONS(144),
    [anon_sym_sput_DASHshort] = ACTIONS(144),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(146),
    [anon_sym_invoke_DASHsuper] = ACTIONS(146),
    [anon_sym_invoke_DASHdirect] = ACTIONS(146),
    [anon_sym_invoke_DASHstatic] = ACTIONS(146),
    [anon_sym_invoke_DASHinterface] = ACTIONS(146),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(144),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(144),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(144),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(144),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(144),
    [anon_sym_neg_DASHint] = ACTIONS(144),
    [anon_sym_not_DASHint] = ACTIONS(144),
    [anon_sym_neg_DASHlong] = ACTIONS(144),
    [anon_sym_not_DASHlong] = ACTIONS(144),
    [anon_sym_neg_DASHfloat] = ACTIONS(144),
    [anon_sym_neg_DASHdouble] = ACTIONS(144),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(144),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(144),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(144),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(144),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(144),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(144),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(144),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(144),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(144),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(144),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(144),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(144),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(144),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(144),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(144),
    [anon_sym_add_DASHint] = ACTIONS(146),
    [anon_sym_sub_DASHint] = ACTIONS(146),
    [anon_sym_mul_DASHint] = ACTIONS(146),
    [anon_sym_div_DASHint] = ACTIONS(146),
    [anon_sym_rem_DASHint] = ACTIONS(146),
    [anon_sym_and_DASHint] = ACTIONS(146),
    [anon_sym_or_DASHint] = ACTIONS(146),
    [anon_sym_xor_DASHint] = ACTIONS(146),
    [anon_sym_shl_DASHint] = ACTIONS(146),
    [anon_sym_shr_DASHint] = ACTIONS(146),
    [anon_sym_ushr_DASHint] = ACTIONS(146),
    [anon_sym_add_DASHlong] = ACTIONS(146),
    [anon_sym_sub_DASHlong] = ACTIONS(146),
    [anon_sym_mul_DASHlong] = ACTIONS(146),
    [anon_sym_div_DASHlong] = ACTIONS(146),
    [anon_sym_rem_DASHlong] = ACTIONS(146),
    [anon_sym_and_DASHlong] = ACTIONS(146),
    [anon_sym_or_DASHlong] = ACTIONS(146),
    [anon_sym_xor_DASHlong] = ACTIONS(146),
    [anon_sym_shl_DASHlong] = ACTIONS(146),
    [anon_sym_shr_DASHlong] = ACTIONS(146),
    [anon_sym_ushr_DASHlong] = ACTIONS(146),
    [anon_sym_add_DASHfloat] = ACTIONS(146),
    [anon_sym_sub_DASHfloat] = ACTIONS(146),
    [anon_sym_mul_DASHfloat] = ACTIONS(146),
    [anon_sym_div_DASHfloat] = ACTIONS(146),
    [anon_sym_rem_DASHfloat] = ACTIONS(146),
    [anon_sym_add_DASHdouble] = ACTIONS(146),
    [anon_sym_sub_DASHdouble] = ACTIONS(146),
    [anon_sym_mul_DASHdouble] = ACTIONS(146),
    [anon_sym_div_DASHdouble] = ACTIONS(146),
    [anon_sym_rem_DASHdouble] = ACTIONS(146),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(144),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(144),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(144),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(144),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(144),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(144),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(144),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(144),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(144),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(144),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(144),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(144),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(144),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_execute_DASHinline] = ACTIONS(144),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(144),
    [anon_sym_iget_DASHquick] = ACTIONS(144),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(144),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(144),
    [anon_sym_iput_DASHquick] = ACTIONS(144),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(144),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(144),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(146),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(144),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(146),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(144),
    [anon_sym_rsub_DASHint] = ACTIONS(146),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(144),
    [anon_sym_DOTline] = ACTIONS(144),
    [anon_sym_DOTlocals] = ACTIONS(144),
    [anon_sym_DOTregisters] = ACTIONS(144),
    [anon_sym_DOTcatch] = ACTIONS(146),
    [anon_sym_DOTcatchall] = ACTIONS(144),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(144),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(144),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_end_method] = ACTIONS(148),
    [anon_sym_DOTannotation] = ACTIONS(148),
    [anon_sym_DOTparam] = ACTIONS(148),
    [sym_label] = ACTIONS(148),
    [anon_sym_nop] = ACTIONS(148),
    [anon_sym_move] = ACTIONS(150),
    [anon_sym_move_SLASHfrom16] = ACTIONS(148),
    [anon_sym_move_SLASH16] = ACTIONS(148),
    [anon_sym_move_DASHwide] = ACTIONS(150),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(148),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(148),
    [anon_sym_move_DASHobject] = ACTIONS(150),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(148),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(148),
    [anon_sym_move_DASHresult] = ACTIONS(150),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(148),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(148),
    [anon_sym_move_DASHexception] = ACTIONS(148),
    [anon_sym_return_DASHvoid] = ACTIONS(148),
    [anon_sym_return] = ACTIONS(150),
    [anon_sym_return_DASHwide] = ACTIONS(148),
    [anon_sym_return_DASHobject] = ACTIONS(148),
    [anon_sym_const_SLASH4] = ACTIONS(148),
    [anon_sym_const_SLASH16] = ACTIONS(148),
    [anon_sym_const] = ACTIONS(150),
    [anon_sym_const_SLASHhigh16] = ACTIONS(148),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(148),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(148),
    [anon_sym_const_DASHwide] = ACTIONS(150),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(148),
    [anon_sym_const_DASHstring] = ACTIONS(150),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(148),
    [anon_sym_const_DASHclass] = ACTIONS(148),
    [anon_sym_monitor_DASHenter] = ACTIONS(148),
    [anon_sym_monitor_DASHexit] = ACTIONS(148),
    [anon_sym_check_DASHcast] = ACTIONS(148),
    [anon_sym_instance_DASHof] = ACTIONS(148),
    [anon_sym_array_DASHlength] = ACTIONS(148),
    [anon_sym_new_DASHinstance] = ACTIONS(148),
    [anon_sym_new_DASHarray] = ACTIONS(148),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(150),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(148),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(148),
    [anon_sym_throw] = ACTIONS(148),
    [anon_sym_goto] = ACTIONS(150),
    [anon_sym_goto_SLASH16] = ACTIONS(148),
    [anon_sym_goto_SLASH32] = ACTIONS(148),
    [anon_sym_packed_DASHswitch] = ACTIONS(148),
    [anon_sym_sparse_DASHswitch] = ACTIONS(148),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(148),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(148),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(148),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(148),
    [anon_sym_cmp_DASHlong] = ACTIONS(148),
    [anon_sym_if_DASHeq] = ACTIONS(150),
    [anon_sym_if_DASHne] = ACTIONS(150),
    [anon_sym_if_DASHlt] = ACTIONS(150),
    [anon_sym_if_DASHge] = ACTIONS(150),
    [anon_sym_if_DASHgt] = ACTIONS(150),
    [anon_sym_if_DASHle] = ACTIONS(150),
    [anon_sym_if_DASHeqz] = ACTIONS(148),
    [anon_sym_if_DASHnez] = ACTIONS(148),
    [anon_sym_if_DASHltz] = ACTIONS(148),
    [anon_sym_if_DASHgez] = ACTIONS(148),
    [anon_sym_if_DASHgtz] = ACTIONS(148),
    [anon_sym_if_DASHlez] = ACTIONS(148),
    [anon_sym_aget] = ACTIONS(150),
    [anon_sym_aget_DASHwide] = ACTIONS(148),
    [anon_sym_aget_DASHobject] = ACTIONS(148),
    [anon_sym_aget_DASHboolean] = ACTIONS(148),
    [anon_sym_aget_DASHbyte] = ACTIONS(148),
    [anon_sym_aget_DASHchar] = ACTIONS(148),
    [anon_sym_aget_DASHshort] = ACTIONS(148),
    [anon_sym_aput] = ACTIONS(150),
    [anon_sym_aput_DASHwide] = ACTIONS(148),
    [anon_sym_aput_DASHobject] = ACTIONS(148),
    [anon_sym_aput_DASHboolean] = ACTIONS(148),
    [anon_sym_aput_DASHbyte] = ACTIONS(148),
    [anon_sym_aput_DASHchar] = ACTIONS(148),
    [anon_sym_aput_DASHshort] = ACTIONS(148),
    [anon_sym_iget] = ACTIONS(150),
    [anon_sym_iget_DASHwide] = ACTIONS(150),
    [anon_sym_iget_DASHobject] = ACTIONS(150),
    [anon_sym_iget_DASHboolean] = ACTIONS(148),
    [anon_sym_iget_DASHbyte] = ACTIONS(148),
    [anon_sym_iget_DASHchar] = ACTIONS(148),
    [anon_sym_iget_DASHshort] = ACTIONS(148),
    [anon_sym_iput] = ACTIONS(150),
    [anon_sym_iput_DASHwide] = ACTIONS(150),
    [anon_sym_iput_DASHobject] = ACTIONS(150),
    [anon_sym_iput_DASHboolean] = ACTIONS(148),
    [anon_sym_iput_DASHbyte] = ACTIONS(148),
    [anon_sym_iput_DASHchar] = ACTIONS(148),
    [anon_sym_iput_DASHshort] = ACTIONS(148),
    [anon_sym_sget] = ACTIONS(150),
    [anon_sym_sget_DASHwide] = ACTIONS(148),
    [anon_sym_sget_DASHobject] = ACTIONS(148),
    [anon_sym_sget_DASHboolean] = ACTIONS(148),
    [anon_sym_sget_DASHbyte] = ACTIONS(148),
    [anon_sym_sget_DASHchar] = ACTIONS(148),
    [anon_sym_sget_DASHshort] = ACTIONS(148),
    [anon_sym_sput] = ACTIONS(150),
    [anon_sym_sput_DASHwide] = ACTIONS(148),
    [anon_sym_sput_DASHobject] = ACTIONS(148),
    [anon_sym_sput_DASHboolean] = ACTIONS(148),
    [anon_sym_sput_DASHbyte] = ACTIONS(148),
    [anon_sym_sput_DASHchar] = ACTIONS(148),
    [anon_sym_sput_DASHshort] = ACTIONS(148),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(150),
    [anon_sym_invoke_DASHsuper] = ACTIONS(150),
    [anon_sym_invoke_DASHdirect] = ACTIONS(150),
    [anon_sym_invoke_DASHstatic] = ACTIONS(150),
    [anon_sym_invoke_DASHinterface] = ACTIONS(150),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(148),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(148),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(148),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(148),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(148),
    [anon_sym_neg_DASHint] = ACTIONS(148),
    [anon_sym_not_DASHint] = ACTIONS(148),
    [anon_sym_neg_DASHlong] = ACTIONS(148),
    [anon_sym_not_DASHlong] = ACTIONS(148),
    [anon_sym_neg_DASHfloat] = ACTIONS(148),
    [anon_sym_neg_DASHdouble] = ACTIONS(148),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(148),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(148),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(148),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(148),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(148),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(148),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(148),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(148),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(148),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(148),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(148),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(148),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(148),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(148),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(148),
    [anon_sym_add_DASHint] = ACTIONS(150),
    [anon_sym_sub_DASHint] = ACTIONS(150),
    [anon_sym_mul_DASHint] = ACTIONS(150),
    [anon_sym_div_DASHint] = ACTIONS(150),
    [anon_sym_rem_DASHint] = ACTIONS(150),
    [anon_sym_and_DASHint] = ACTIONS(150),
    [anon_sym_or_DASHint] = ACTIONS(150),
    [anon_sym_xor_DASHint] = ACTIONS(150),
    [anon_sym_shl_DASHint] = ACTIONS(150),
    [anon_sym_shr_DASHint] = ACTIONS(150),
    [anon_sym_ushr_DASHint] = ACTIONS(150),
    [anon_sym_add_DASHlong] = ACTIONS(150),
    [anon_sym_sub_DASHlong] = ACTIONS(150),
    [anon_sym_mul_DASHlong] = ACTIONS(150),
    [anon_sym_div_DASHlong] = ACTIONS(150),
    [anon_sym_rem_DASHlong] = ACTIONS(150),
    [anon_sym_and_DASHlong] = ACTIONS(150),
    [anon_sym_or_DASHlong] = ACTIONS(150),
    [anon_sym_xor_DASHlong] = ACTIONS(150),
    [anon_sym_shl_DASHlong] = ACTIONS(150),
    [anon_sym_shr_DASHlong] = ACTIONS(150),
    [anon_sym_ushr_DASHlong] = ACTIONS(150),
    [anon_sym_add_DASHfloat] = ACTIONS(150),
    [anon_sym_sub_DASHfloat] = ACTIONS(150),
    [anon_sym_mul_DASHfloat] = ACTIONS(150),
    [anon_sym_div_DASHfloat] = ACTIONS(150),
    [anon_sym_rem_DASHfloat] = ACTIONS(150),
    [anon_sym_add_DASHdouble] = ACTIONS(150),
    [anon_sym_sub_DASHdouble] = ACTIONS(150),
    [anon_sym_mul_DASHdouble] = ACTIONS(150),
    [anon_sym_div_DASHdouble] = ACTIONS(150),
    [anon_sym_rem_DASHdouble] = ACTIONS(150),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(148),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(148),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(148),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(148),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(148),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(148),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(148),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(148),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(148),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(148),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(148),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(148),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(148),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_execute_DASHinline] = ACTIONS(148),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(148),
    [anon_sym_iget_DASHquick] = ACTIONS(148),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(148),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(148),
    [anon_sym_iput_DASHquick] = ACTIONS(148),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(148),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(148),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(150),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(148),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(150),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(148),
    [anon_sym_rsub_DASHint] = ACTIONS(150),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(148),
    [anon_sym_DOTline] = ACTIONS(148),
    [anon_sym_DOTlocals] = ACTIONS(148),
    [anon_sym_DOTregisters] = ACTIONS(148),
    [anon_sym_DOTcatch] = ACTIONS(150),
    [anon_sym_DOTcatchall] = ACTIONS(148),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(148),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(148),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_end_method] = ACTIONS(152),
    [anon_sym_DOTannotation] = ACTIONS(152),
    [anon_sym_DOTparam] = ACTIONS(152),
    [sym_label] = ACTIONS(152),
    [anon_sym_nop] = ACTIONS(152),
    [anon_sym_move] = ACTIONS(154),
    [anon_sym_move_SLASHfrom16] = ACTIONS(152),
    [anon_sym_move_SLASH16] = ACTIONS(152),
    [anon_sym_move_DASHwide] = ACTIONS(154),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(152),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(152),
    [anon_sym_move_DASHobject] = ACTIONS(154),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(152),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(152),
    [anon_sym_move_DASHresult] = ACTIONS(154),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(152),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(152),
    [anon_sym_move_DASHexception] = ACTIONS(152),
    [anon_sym_return_DASHvoid] = ACTIONS(152),
    [anon_sym_return] = ACTIONS(154),
    [anon_sym_return_DASHwide] = ACTIONS(152),
    [anon_sym_return_DASHobject] = ACTIONS(152),
    [anon_sym_const_SLASH4] = ACTIONS(152),
    [anon_sym_const_SLASH16] = ACTIONS(152),
    [anon_sym_const] = ACTIONS(154),
    [anon_sym_const_SLASHhigh16] = ACTIONS(152),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(152),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(152),
    [anon_sym_const_DASHwide] = ACTIONS(154),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(152),
    [anon_sym_const_DASHstring] = ACTIONS(154),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(152),
    [anon_sym_const_DASHclass] = ACTIONS(152),
    [anon_sym_monitor_DASHenter] = ACTIONS(152),
    [anon_sym_monitor_DASHexit] = ACTIONS(152),
    [anon_sym_check_DASHcast] = ACTIONS(152),
    [anon_sym_instance_DASHof] = ACTIONS(152),
    [anon_sym_array_DASHlength] = ACTIONS(152),
    [anon_sym_new_DASHinstance] = ACTIONS(152),
    [anon_sym_new_DASHarray] = ACTIONS(152),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(154),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(152),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(152),
    [anon_sym_throw] = ACTIONS(152),
    [anon_sym_goto] = ACTIONS(154),
    [anon_sym_goto_SLASH16] = ACTIONS(152),
    [anon_sym_goto_SLASH32] = ACTIONS(152),
    [anon_sym_packed_DASHswitch] = ACTIONS(152),
    [anon_sym_sparse_DASHswitch] = ACTIONS(152),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(152),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(152),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(152),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(152),
    [anon_sym_cmp_DASHlong] = ACTIONS(152),
    [anon_sym_if_DASHeq] = ACTIONS(154),
    [anon_sym_if_DASHne] = ACTIONS(154),
    [anon_sym_if_DASHlt] = ACTIONS(154),
    [anon_sym_if_DASHge] = ACTIONS(154),
    [anon_sym_if_DASHgt] = ACTIONS(154),
    [anon_sym_if_DASHle] = ACTIONS(154),
    [anon_sym_if_DASHeqz] = ACTIONS(152),
    [anon_sym_if_DASHnez] = ACTIONS(152),
    [anon_sym_if_DASHltz] = ACTIONS(152),
    [anon_sym_if_DASHgez] = ACTIONS(152),
    [anon_sym_if_DASHgtz] = ACTIONS(152),
    [anon_sym_if_DASHlez] = ACTIONS(152),
    [anon_sym_aget] = ACTIONS(154),
    [anon_sym_aget_DASHwide] = ACTIONS(152),
    [anon_sym_aget_DASHobject] = ACTIONS(152),
    [anon_sym_aget_DASHboolean] = ACTIONS(152),
    [anon_sym_aget_DASHbyte] = ACTIONS(152),
    [anon_sym_aget_DASHchar] = ACTIONS(152),
    [anon_sym_aget_DASHshort] = ACTIONS(152),
    [anon_sym_aput] = ACTIONS(154),
    [anon_sym_aput_DASHwide] = ACTIONS(152),
    [anon_sym_aput_DASHobject] = ACTIONS(152),
    [anon_sym_aput_DASHboolean] = ACTIONS(152),
    [anon_sym_aput_DASHbyte] = ACTIONS(152),
    [anon_sym_aput_DASHchar] = ACTIONS(152),
    [anon_sym_aput_DASHshort] = ACTIONS(152),
    [anon_sym_iget] = ACTIONS(154),
    [anon_sym_iget_DASHwide] = ACTIONS(154),
    [anon_sym_iget_DASHobject] = ACTIONS(154),
    [anon_sym_iget_DASHboolean] = ACTIONS(152),
    [anon_sym_iget_DASHbyte] = ACTIONS(152),
    [anon_sym_iget_DASHchar] = ACTIONS(152),
    [anon_sym_iget_DASHshort] = ACTIONS(152),
    [anon_sym_iput] = ACTIONS(154),
    [anon_sym_iput_DASHwide] = ACTIONS(154),
    [anon_sym_iput_DASHobject] = ACTIONS(154),
    [anon_sym_iput_DASHboolean] = ACTIONS(152),
    [anon_sym_iput_DASHbyte] = ACTIONS(152),
    [anon_sym_iput_DASHchar] = ACTIONS(152),
    [anon_sym_iput_DASHshort] = ACTIONS(152),
    [anon_sym_sget] = ACTIONS(154),
    [anon_sym_sget_DASHwide] = ACTIONS(152),
    [anon_sym_sget_DASHobject] = ACTIONS(152),
    [anon_sym_sget_DASHboolean] = ACTIONS(152),
    [anon_sym_sget_DASHbyte] = ACTIONS(152),
    [anon_sym_sget_DASHchar] = ACTIONS(152),
    [anon_sym_sget_DASHshort] = ACTIONS(152),
    [anon_sym_sput] = ACTIONS(154),
    [anon_sym_sput_DASHwide] = ACTIONS(152),
    [anon_sym_sput_DASHobject] = ACTIONS(152),
    [anon_sym_sput_DASHboolean] = ACTIONS(152),
    [anon_sym_sput_DASHbyte] = ACTIONS(152),
    [anon_sym_sput_DASHchar] = ACTIONS(152),
    [anon_sym_sput_DASHshort] = ACTIONS(152),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(154),
    [anon_sym_invoke_DASHsuper] = ACTIONS(154),
    [anon_sym_invoke_DASHdirect] = ACTIONS(154),
    [anon_sym_invoke_DASHstatic] = ACTIONS(154),
    [anon_sym_invoke_DASHinterface] = ACTIONS(154),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(152),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(152),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(152),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(152),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(152),
    [anon_sym_neg_DASHint] = ACTIONS(152),
    [anon_sym_not_DASHint] = ACTIONS(152),
    [anon_sym_neg_DASHlong] = ACTIONS(152),
    [anon_sym_not_DASHlong] = ACTIONS(152),
    [anon_sym_neg_DASHfloat] = ACTIONS(152),
    [anon_sym_neg_DASHdouble] = ACTIONS(152),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(152),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(152),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(152),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(152),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(152),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(152),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(152),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(152),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(152),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(152),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(152),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(152),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(152),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(152),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(152),
    [anon_sym_add_DASHint] = ACTIONS(154),
    [anon_sym_sub_DASHint] = ACTIONS(154),
    [anon_sym_mul_DASHint] = ACTIONS(154),
    [anon_sym_div_DASHint] = ACTIONS(154),
    [anon_sym_rem_DASHint] = ACTIONS(154),
    [anon_sym_and_DASHint] = ACTIONS(154),
    [anon_sym_or_DASHint] = ACTIONS(154),
    [anon_sym_xor_DASHint] = ACTIONS(154),
    [anon_sym_shl_DASHint] = ACTIONS(154),
    [anon_sym_shr_DASHint] = ACTIONS(154),
    [anon_sym_ushr_DASHint] = ACTIONS(154),
    [anon_sym_add_DASHlong] = ACTIONS(154),
    [anon_sym_sub_DASHlong] = ACTIONS(154),
    [anon_sym_mul_DASHlong] = ACTIONS(154),
    [anon_sym_div_DASHlong] = ACTIONS(154),
    [anon_sym_rem_DASHlong] = ACTIONS(154),
    [anon_sym_and_DASHlong] = ACTIONS(154),
    [anon_sym_or_DASHlong] = ACTIONS(154),
    [anon_sym_xor_DASHlong] = ACTIONS(154),
    [anon_sym_shl_DASHlong] = ACTIONS(154),
    [anon_sym_shr_DASHlong] = ACTIONS(154),
    [anon_sym_ushr_DASHlong] = ACTIONS(154),
    [anon_sym_add_DASHfloat] = ACTIONS(154),
    [anon_sym_sub_DASHfloat] = ACTIONS(154),
    [anon_sym_mul_DASHfloat] = ACTIONS(154),
    [anon_sym_div_DASHfloat] = ACTIONS(154),
    [anon_sym_rem_DASHfloat] = ACTIONS(154),
    [anon_sym_add_DASHdouble] = ACTIONS(154),
    [anon_sym_sub_DASHdouble] = ACTIONS(154),
    [anon_sym_mul_DASHdouble] = ACTIONS(154),
    [anon_sym_div_DASHdouble] = ACTIONS(154),
    [anon_sym_rem_DASHdouble] = ACTIONS(154),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(152),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(152),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(152),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(152),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(152),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(152),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(152),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(152),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(152),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(152),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(152),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(152),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(152),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_execute_DASHinline] = ACTIONS(152),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(152),
    [anon_sym_iget_DASHquick] = ACTIONS(152),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(152),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(152),
    [anon_sym_iput_DASHquick] = ACTIONS(152),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(152),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(152),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(154),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(152),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(154),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(152),
    [anon_sym_rsub_DASHint] = ACTIONS(154),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(152),
    [anon_sym_DOTline] = ACTIONS(152),
    [anon_sym_DOTlocals] = ACTIONS(152),
    [anon_sym_DOTregisters] = ACTIONS(152),
    [anon_sym_DOTcatch] = ACTIONS(154),
    [anon_sym_DOTcatchall] = ACTIONS(152),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(152),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(152),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_end_method] = ACTIONS(156),
    [anon_sym_DOTannotation] = ACTIONS(156),
    [anon_sym_DOTparam] = ACTIONS(156),
    [sym_label] = ACTIONS(156),
    [anon_sym_nop] = ACTIONS(156),
    [anon_sym_move] = ACTIONS(158),
    [anon_sym_move_SLASHfrom16] = ACTIONS(156),
    [anon_sym_move_SLASH16] = ACTIONS(156),
    [anon_sym_move_DASHwide] = ACTIONS(158),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(156),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(156),
    [anon_sym_move_DASHobject] = ACTIONS(158),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(156),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(156),
    [anon_sym_move_DASHresult] = ACTIONS(158),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(156),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(156),
    [anon_sym_move_DASHexception] = ACTIONS(156),
    [anon_sym_return_DASHvoid] = ACTIONS(156),
    [anon_sym_return] = ACTIONS(158),
    [anon_sym_return_DASHwide] = ACTIONS(156),
    [anon_sym_return_DASHobject] = ACTIONS(156),
    [anon_sym_const_SLASH4] = ACTIONS(156),
    [anon_sym_const_SLASH16] = ACTIONS(156),
    [anon_sym_const] = ACTIONS(158),
    [anon_sym_const_SLASHhigh16] = ACTIONS(156),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(156),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(156),
    [anon_sym_const_DASHwide] = ACTIONS(158),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(156),
    [anon_sym_const_DASHstring] = ACTIONS(158),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(156),
    [anon_sym_const_DASHclass] = ACTIONS(156),
    [anon_sym_monitor_DASHenter] = ACTIONS(156),
    [anon_sym_monitor_DASHexit] = ACTIONS(156),
    [anon_sym_check_DASHcast] = ACTIONS(156),
    [anon_sym_instance_DASHof] = ACTIONS(156),
    [anon_sym_array_DASHlength] = ACTIONS(156),
    [anon_sym_new_DASHinstance] = ACTIONS(156),
    [anon_sym_new_DASHarray] = ACTIONS(156),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(158),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(156),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(156),
    [anon_sym_throw] = ACTIONS(156),
    [anon_sym_goto] = ACTIONS(158),
    [anon_sym_goto_SLASH16] = ACTIONS(156),
    [anon_sym_goto_SLASH32] = ACTIONS(156),
    [anon_sym_packed_DASHswitch] = ACTIONS(156),
    [anon_sym_sparse_DASHswitch] = ACTIONS(156),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(156),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(156),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(156),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(156),
    [anon_sym_cmp_DASHlong] = ACTIONS(156),
    [anon_sym_if_DASHeq] = ACTIONS(158),
    [anon_sym_if_DASHne] = ACTIONS(158),
    [anon_sym_if_DASHlt] = ACTIONS(158),
    [anon_sym_if_DASHge] = ACTIONS(158),
    [anon_sym_if_DASHgt] = ACTIONS(158),
    [anon_sym_if_DASHle] = ACTIONS(158),
    [anon_sym_if_DASHeqz] = ACTIONS(156),
    [anon_sym_if_DASHnez] = ACTIONS(156),
    [anon_sym_if_DASHltz] = ACTIONS(156),
    [anon_sym_if_DASHgez] = ACTIONS(156),
    [anon_sym_if_DASHgtz] = ACTIONS(156),
    [anon_sym_if_DASHlez] = ACTIONS(156),
    [anon_sym_aget] = ACTIONS(158),
    [anon_sym_aget_DASHwide] = ACTIONS(156),
    [anon_sym_aget_DASHobject] = ACTIONS(156),
    [anon_sym_aget_DASHboolean] = ACTIONS(156),
    [anon_sym_aget_DASHbyte] = ACTIONS(156),
    [anon_sym_aget_DASHchar] = ACTIONS(156),
    [anon_sym_aget_DASHshort] = ACTIONS(156),
    [anon_sym_aput] = ACTIONS(158),
    [anon_sym_aput_DASHwide] = ACTIONS(156),
    [anon_sym_aput_DASHobject] = ACTIONS(156),
    [anon_sym_aput_DASHboolean] = ACTIONS(156),
    [anon_sym_aput_DASHbyte] = ACTIONS(156),
    [anon_sym_aput_DASHchar] = ACTIONS(156),
    [anon_sym_aput_DASHshort] = ACTIONS(156),
    [anon_sym_iget] = ACTIONS(158),
    [anon_sym_iget_DASHwide] = ACTIONS(158),
    [anon_sym_iget_DASHobject] = ACTIONS(158),
    [anon_sym_iget_DASHboolean] = ACTIONS(156),
    [anon_sym_iget_DASHbyte] = ACTIONS(156),
    [anon_sym_iget_DASHchar] = ACTIONS(156),
    [anon_sym_iget_DASHshort] = ACTIONS(156),
    [anon_sym_iput] = ACTIONS(158),
    [anon_sym_iput_DASHwide] = ACTIONS(158),
    [anon_sym_iput_DASHobject] = ACTIONS(158),
    [anon_sym_iput_DASHboolean] = ACTIONS(156),
    [anon_sym_iput_DASHbyte] = ACTIONS(156),
    [anon_sym_iput_DASHchar] = ACTIONS(156),
    [anon_sym_iput_DASHshort] = ACTIONS(156),
    [anon_sym_sget] = ACTIONS(158),
    [anon_sym_sget_DASHwide] = ACTIONS(156),
    [anon_sym_sget_DASHobject] = ACTIONS(156),
    [anon_sym_sget_DASHboolean] = ACTIONS(156),
    [anon_sym_sget_DASHbyte] = ACTIONS(156),
    [anon_sym_sget_DASHchar] = ACTIONS(156),
    [anon_sym_sget_DASHshort] = ACTIONS(156),
    [anon_sym_sput] = ACTIONS(158),
    [anon_sym_sput_DASHwide] = ACTIONS(156),
    [anon_sym_sput_DASHobject] = ACTIONS(156),
    [anon_sym_sput_DASHboolean] = ACTIONS(156),
    [anon_sym_sput_DASHbyte] = ACTIONS(156),
    [anon_sym_sput_DASHchar] = ACTIONS(156),
    [anon_sym_sput_DASHshort] = ACTIONS(156),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(158),
    [anon_sym_invoke_DASHsuper] = ACTIONS(158),
    [anon_sym_invoke_DASHdirect] = ACTIONS(158),
    [anon_sym_invoke_DASHstatic] = ACTIONS(158),
    [anon_sym_invoke_DASHinterface] = ACTIONS(158),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(156),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(156),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(156),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(156),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(156),
    [anon_sym_neg_DASHint] = ACTIONS(156),
    [anon_sym_not_DASHint] = ACTIONS(156),
    [anon_sym_neg_DASHlong] = ACTIONS(156),
    [anon_sym_not_DASHlong] = ACTIONS(156),
    [anon_sym_neg_DASHfloat] = ACTIONS(156),
    [anon_sym_neg_DASHdouble] = ACTIONS(156),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(156),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(156),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(156),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(156),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(156),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(156),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(156),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(156),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(156),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(156),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(156),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(156),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(156),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(156),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(156),
    [anon_sym_add_DASHint] = ACTIONS(158),
    [anon_sym_sub_DASHint] = ACTIONS(158),
    [anon_sym_mul_DASHint] = ACTIONS(158),
    [anon_sym_div_DASHint] = ACTIONS(158),
    [anon_sym_rem_DASHint] = ACTIONS(158),
    [anon_sym_and_DASHint] = ACTIONS(158),
    [anon_sym_or_DASHint] = ACTIONS(158),
    [anon_sym_xor_DASHint] = ACTIONS(158),
    [anon_sym_shl_DASHint] = ACTIONS(158),
    [anon_sym_shr_DASHint] = ACTIONS(158),
    [anon_sym_ushr_DASHint] = ACTIONS(158),
    [anon_sym_add_DASHlong] = ACTIONS(158),
    [anon_sym_sub_DASHlong] = ACTIONS(158),
    [anon_sym_mul_DASHlong] = ACTIONS(158),
    [anon_sym_div_DASHlong] = ACTIONS(158),
    [anon_sym_rem_DASHlong] = ACTIONS(158),
    [anon_sym_and_DASHlong] = ACTIONS(158),
    [anon_sym_or_DASHlong] = ACTIONS(158),
    [anon_sym_xor_DASHlong] = ACTIONS(158),
    [anon_sym_shl_DASHlong] = ACTIONS(158),
    [anon_sym_shr_DASHlong] = ACTIONS(158),
    [anon_sym_ushr_DASHlong] = ACTIONS(158),
    [anon_sym_add_DASHfloat] = ACTIONS(158),
    [anon_sym_sub_DASHfloat] = ACTIONS(158),
    [anon_sym_mul_DASHfloat] = ACTIONS(158),
    [anon_sym_div_DASHfloat] = ACTIONS(158),
    [anon_sym_rem_DASHfloat] = ACTIONS(158),
    [anon_sym_add_DASHdouble] = ACTIONS(158),
    [anon_sym_sub_DASHdouble] = ACTIONS(158),
    [anon_sym_mul_DASHdouble] = ACTIONS(158),
    [anon_sym_div_DASHdouble] = ACTIONS(158),
    [anon_sym_rem_DASHdouble] = ACTIONS(158),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(156),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(156),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(156),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(156),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(156),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(156),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(156),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(156),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(156),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(156),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(156),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(156),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(156),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_execute_DASHinline] = ACTIONS(156),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(156),
    [anon_sym_iget_DASHquick] = ACTIONS(156),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(156),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(156),
    [anon_sym_iput_DASHquick] = ACTIONS(156),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(156),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(156),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(158),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(156),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(158),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(156),
    [anon_sym_rsub_DASHint] = ACTIONS(158),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(156),
    [anon_sym_DOTline] = ACTIONS(156),
    [anon_sym_DOTlocals] = ACTIONS(156),
    [anon_sym_DOTregisters] = ACTIONS(156),
    [anon_sym_DOTcatch] = ACTIONS(158),
    [anon_sym_DOTcatchall] = ACTIONS(156),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(156),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(156),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_end_method] = ACTIONS(160),
    [anon_sym_DOTannotation] = ACTIONS(160),
    [anon_sym_DOTparam] = ACTIONS(160),
    [sym_label] = ACTIONS(160),
    [anon_sym_nop] = ACTIONS(160),
    [anon_sym_move] = ACTIONS(162),
    [anon_sym_move_SLASHfrom16] = ACTIONS(160),
    [anon_sym_move_SLASH16] = ACTIONS(160),
    [anon_sym_move_DASHwide] = ACTIONS(162),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(160),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(160),
    [anon_sym_move_DASHobject] = ACTIONS(162),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(160),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(160),
    [anon_sym_move_DASHresult] = ACTIONS(162),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(160),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(160),
    [anon_sym_move_DASHexception] = ACTIONS(160),
    [anon_sym_return_DASHvoid] = ACTIONS(160),
    [anon_sym_return] = ACTIONS(162),
    [anon_sym_return_DASHwide] = ACTIONS(160),
    [anon_sym_return_DASHobject] = ACTIONS(160),
    [anon_sym_const_SLASH4] = ACTIONS(160),
    [anon_sym_const_SLASH16] = ACTIONS(160),
    [anon_sym_const] = ACTIONS(162),
    [anon_sym_const_SLASHhigh16] = ACTIONS(160),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(160),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(160),
    [anon_sym_const_DASHwide] = ACTIONS(162),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(160),
    [anon_sym_const_DASHstring] = ACTIONS(162),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(160),
    [anon_sym_const_DASHclass] = ACTIONS(160),
    [anon_sym_monitor_DASHenter] = ACTIONS(160),
    [anon_sym_monitor_DASHexit] = ACTIONS(160),
    [anon_sym_check_DASHcast] = ACTIONS(160),
    [anon_sym_instance_DASHof] = ACTIONS(160),
    [anon_sym_array_DASHlength] = ACTIONS(160),
    [anon_sym_new_DASHinstance] = ACTIONS(160),
    [anon_sym_new_DASHarray] = ACTIONS(160),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(162),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(160),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(160),
    [anon_sym_throw] = ACTIONS(160),
    [anon_sym_goto] = ACTIONS(162),
    [anon_sym_goto_SLASH16] = ACTIONS(160),
    [anon_sym_goto_SLASH32] = ACTIONS(160),
    [anon_sym_packed_DASHswitch] = ACTIONS(160),
    [anon_sym_sparse_DASHswitch] = ACTIONS(160),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(160),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(160),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(160),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(160),
    [anon_sym_cmp_DASHlong] = ACTIONS(160),
    [anon_sym_if_DASHeq] = ACTIONS(162),
    [anon_sym_if_DASHne] = ACTIONS(162),
    [anon_sym_if_DASHlt] = ACTIONS(162),
    [anon_sym_if_DASHge] = ACTIONS(162),
    [anon_sym_if_DASHgt] = ACTIONS(162),
    [anon_sym_if_DASHle] = ACTIONS(162),
    [anon_sym_if_DASHeqz] = ACTIONS(160),
    [anon_sym_if_DASHnez] = ACTIONS(160),
    [anon_sym_if_DASHltz] = ACTIONS(160),
    [anon_sym_if_DASHgez] = ACTIONS(160),
    [anon_sym_if_DASHgtz] = ACTIONS(160),
    [anon_sym_if_DASHlez] = ACTIONS(160),
    [anon_sym_aget] = ACTIONS(162),
    [anon_sym_aget_DASHwide] = ACTIONS(160),
    [anon_sym_aget_DASHobject] = ACTIONS(160),
    [anon_sym_aget_DASHboolean] = ACTIONS(160),
    [anon_sym_aget_DASHbyte] = ACTIONS(160),
    [anon_sym_aget_DASHchar] = ACTIONS(160),
    [anon_sym_aget_DASHshort] = ACTIONS(160),
    [anon_sym_aput] = ACTIONS(162),
    [anon_sym_aput_DASHwide] = ACTIONS(160),
    [anon_sym_aput_DASHobject] = ACTIONS(160),
    [anon_sym_aput_DASHboolean] = ACTIONS(160),
    [anon_sym_aput_DASHbyte] = ACTIONS(160),
    [anon_sym_aput_DASHchar] = ACTIONS(160),
    [anon_sym_aput_DASHshort] = ACTIONS(160),
    [anon_sym_iget] = ACTIONS(162),
    [anon_sym_iget_DASHwide] = ACTIONS(162),
    [anon_sym_iget_DASHobject] = ACTIONS(162),
    [anon_sym_iget_DASHboolean] = ACTIONS(160),
    [anon_sym_iget_DASHbyte] = ACTIONS(160),
    [anon_sym_iget_DASHchar] = ACTIONS(160),
    [anon_sym_iget_DASHshort] = ACTIONS(160),
    [anon_sym_iput] = ACTIONS(162),
    [anon_sym_iput_DASHwide] = ACTIONS(162),
    [anon_sym_iput_DASHobject] = ACTIONS(162),
    [anon_sym_iput_DASHboolean] = ACTIONS(160),
    [anon_sym_iput_DASHbyte] = ACTIONS(160),
    [anon_sym_iput_DASHchar] = ACTIONS(160),
    [anon_sym_iput_DASHshort] = ACTIONS(160),
    [anon_sym_sget] = ACTIONS(162),
    [anon_sym_sget_DASHwide] = ACTIONS(160),
    [anon_sym_sget_DASHobject] = ACTIONS(160),
    [anon_sym_sget_DASHboolean] = ACTIONS(160),
    [anon_sym_sget_DASHbyte] = ACTIONS(160),
    [anon_sym_sget_DASHchar] = ACTIONS(160),
    [anon_sym_sget_DASHshort] = ACTIONS(160),
    [anon_sym_sput] = ACTIONS(162),
    [anon_sym_sput_DASHwide] = ACTIONS(160),
    [anon_sym_sput_DASHobject] = ACTIONS(160),
    [anon_sym_sput_DASHboolean] = ACTIONS(160),
    [anon_sym_sput_DASHbyte] = ACTIONS(160),
    [anon_sym_sput_DASHchar] = ACTIONS(160),
    [anon_sym_sput_DASHshort] = ACTIONS(160),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(162),
    [anon_sym_invoke_DASHsuper] = ACTIONS(162),
    [anon_sym_invoke_DASHdirect] = ACTIONS(162),
    [anon_sym_invoke_DASHstatic] = ACTIONS(162),
    [anon_sym_invoke_DASHinterface] = ACTIONS(162),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(160),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(160),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(160),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(160),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(160),
    [anon_sym_neg_DASHint] = ACTIONS(160),
    [anon_sym_not_DASHint] = ACTIONS(160),
    [anon_sym_neg_DASHlong] = ACTIONS(160),
    [anon_sym_not_DASHlong] = ACTIONS(160),
    [anon_sym_neg_DASHfloat] = ACTIONS(160),
    [anon_sym_neg_DASHdouble] = ACTIONS(160),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(160),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(160),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(160),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(160),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(160),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(160),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(160),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(160),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(160),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(160),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(160),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(160),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(160),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(160),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(160),
    [anon_sym_add_DASHint] = ACTIONS(162),
    [anon_sym_sub_DASHint] = ACTIONS(162),
    [anon_sym_mul_DASHint] = ACTIONS(162),
    [anon_sym_div_DASHint] = ACTIONS(162),
    [anon_sym_rem_DASHint] = ACTIONS(162),
    [anon_sym_and_DASHint] = ACTIONS(162),
    [anon_sym_or_DASHint] = ACTIONS(162),
    [anon_sym_xor_DASHint] = ACTIONS(162),
    [anon_sym_shl_DASHint] = ACTIONS(162),
    [anon_sym_shr_DASHint] = ACTIONS(162),
    [anon_sym_ushr_DASHint] = ACTIONS(162),
    [anon_sym_add_DASHlong] = ACTIONS(162),
    [anon_sym_sub_DASHlong] = ACTIONS(162),
    [anon_sym_mul_DASHlong] = ACTIONS(162),
    [anon_sym_div_DASHlong] = ACTIONS(162),
    [anon_sym_rem_DASHlong] = ACTIONS(162),
    [anon_sym_and_DASHlong] = ACTIONS(162),
    [anon_sym_or_DASHlong] = ACTIONS(162),
    [anon_sym_xor_DASHlong] = ACTIONS(162),
    [anon_sym_shl_DASHlong] = ACTIONS(162),
    [anon_sym_shr_DASHlong] = ACTIONS(162),
    [anon_sym_ushr_DASHlong] = ACTIONS(162),
    [anon_sym_add_DASHfloat] = ACTIONS(162),
    [anon_sym_sub_DASHfloat] = ACTIONS(162),
    [anon_sym_mul_DASHfloat] = ACTIONS(162),
    [anon_sym_div_DASHfloat] = ACTIONS(162),
    [anon_sym_rem_DASHfloat] = ACTIONS(162),
    [anon_sym_add_DASHdouble] = ACTIONS(162),
    [anon_sym_sub_DASHdouble] = ACTIONS(162),
    [anon_sym_mul_DASHdouble] = ACTIONS(162),
    [anon_sym_div_DASHdouble] = ACTIONS(162),
    [anon_sym_rem_DASHdouble] = ACTIONS(162),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(160),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(160),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(160),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(160),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(160),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(160),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(160),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(160),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(160),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(160),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(160),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(160),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(160),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_execute_DASHinline] = ACTIONS(160),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(160),
    [anon_sym_iget_DASHquick] = ACTIONS(160),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(160),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(160),
    [anon_sym_iput_DASHquick] = ACTIONS(160),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(160),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(160),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(162),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(160),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(162),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(160),
    [anon_sym_rsub_DASHint] = ACTIONS(162),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(160),
    [anon_sym_DOTline] = ACTIONS(160),
    [anon_sym_DOTlocals] = ACTIONS(160),
    [anon_sym_DOTregisters] = ACTIONS(160),
    [anon_sym_DOTcatch] = ACTIONS(162),
    [anon_sym_DOTcatchall] = ACTIONS(160),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(160),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(160),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_end_method] = ACTIONS(164),
    [anon_sym_DOTannotation] = ACTIONS(164),
    [anon_sym_DOTparam] = ACTIONS(164),
    [sym_label] = ACTIONS(164),
    [anon_sym_nop] = ACTIONS(164),
    [anon_sym_move] = ACTIONS(166),
    [anon_sym_move_SLASHfrom16] = ACTIONS(164),
    [anon_sym_move_SLASH16] = ACTIONS(164),
    [anon_sym_move_DASHwide] = ACTIONS(166),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(164),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(164),
    [anon_sym_move_DASHobject] = ACTIONS(166),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(164),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(164),
    [anon_sym_move_DASHresult] = ACTIONS(166),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(164),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(164),
    [anon_sym_move_DASHexception] = ACTIONS(164),
    [anon_sym_return_DASHvoid] = ACTIONS(164),
    [anon_sym_return] = ACTIONS(166),
    [anon_sym_return_DASHwide] = ACTIONS(164),
    [anon_sym_return_DASHobject] = ACTIONS(164),
    [anon_sym_const_SLASH4] = ACTIONS(164),
    [anon_sym_const_SLASH16] = ACTIONS(164),
    [anon_sym_const] = ACTIONS(166),
    [anon_sym_const_SLASHhigh16] = ACTIONS(164),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(164),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(164),
    [anon_sym_const_DASHwide] = ACTIONS(166),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(164),
    [anon_sym_const_DASHstring] = ACTIONS(166),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(164),
    [anon_sym_const_DASHclass] = ACTIONS(164),
    [anon_sym_monitor_DASHenter] = ACTIONS(164),
    [anon_sym_monitor_DASHexit] = ACTIONS(164),
    [anon_sym_check_DASHcast] = ACTIONS(164),
    [anon_sym_instance_DASHof] = ACTIONS(164),
    [anon_sym_array_DASHlength] = ACTIONS(164),
    [anon_sym_new_DASHinstance] = ACTIONS(164),
    [anon_sym_new_DASHarray] = ACTIONS(164),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(166),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(164),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(164),
    [anon_sym_throw] = ACTIONS(164),
    [anon_sym_goto] = ACTIONS(166),
    [anon_sym_goto_SLASH16] = ACTIONS(164),
    [anon_sym_goto_SLASH32] = ACTIONS(164),
    [anon_sym_packed_DASHswitch] = ACTIONS(164),
    [anon_sym_sparse_DASHswitch] = ACTIONS(164),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(164),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(164),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(164),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(164),
    [anon_sym_cmp_DASHlong] = ACTIONS(164),
    [anon_sym_if_DASHeq] = ACTIONS(166),
    [anon_sym_if_DASHne] = ACTIONS(166),
    [anon_sym_if_DASHlt] = ACTIONS(166),
    [anon_sym_if_DASHge] = ACTIONS(166),
    [anon_sym_if_DASHgt] = ACTIONS(166),
    [anon_sym_if_DASHle] = ACTIONS(166),
    [anon_sym_if_DASHeqz] = ACTIONS(164),
    [anon_sym_if_DASHnez] = ACTIONS(164),
    [anon_sym_if_DASHltz] = ACTIONS(164),
    [anon_sym_if_DASHgez] = ACTIONS(164),
    [anon_sym_if_DASHgtz] = ACTIONS(164),
    [anon_sym_if_DASHlez] = ACTIONS(164),
    [anon_sym_aget] = ACTIONS(166),
    [anon_sym_aget_DASHwide] = ACTIONS(164),
    [anon_sym_aget_DASHobject] = ACTIONS(164),
    [anon_sym_aget_DASHboolean] = ACTIONS(164),
    [anon_sym_aget_DASHbyte] = ACTIONS(164),
    [anon_sym_aget_DASHchar] = ACTIONS(164),
    [anon_sym_aget_DASHshort] = ACTIONS(164),
    [anon_sym_aput] = ACTIONS(166),
    [anon_sym_aput_DASHwide] = ACTIONS(164),
    [anon_sym_aput_DASHobject] = ACTIONS(164),
    [anon_sym_aput_DASHboolean] = ACTIONS(164),
    [anon_sym_aput_DASHbyte] = ACTIONS(164),
    [anon_sym_aput_DASHchar] = ACTIONS(164),
    [anon_sym_aput_DASHshort] = ACTIONS(164),
    [anon_sym_iget] = ACTIONS(166),
    [anon_sym_iget_DASHwide] = ACTIONS(166),
    [anon_sym_iget_DASHobject] = ACTIONS(166),
    [anon_sym_iget_DASHboolean] = ACTIONS(164),
    [anon_sym_iget_DASHbyte] = ACTIONS(164),
    [anon_sym_iget_DASHchar] = ACTIONS(164),
    [anon_sym_iget_DASHshort] = ACTIONS(164),
    [anon_sym_iput] = ACTIONS(166),
    [anon_sym_iput_DASHwide] = ACTIONS(166),
    [anon_sym_iput_DASHobject] = ACTIONS(166),
    [anon_sym_iput_DASHboolean] = ACTIONS(164),
    [anon_sym_iput_DASHbyte] = ACTIONS(164),
    [anon_sym_iput_DASHchar] = ACTIONS(164),
    [anon_sym_iput_DASHshort] = ACTIONS(164),
    [anon_sym_sget] = ACTIONS(166),
    [anon_sym_sget_DASHwide] = ACTIONS(164),
    [anon_sym_sget_DASHobject] = ACTIONS(164),
    [anon_sym_sget_DASHboolean] = ACTIONS(164),
    [anon_sym_sget_DASHbyte] = ACTIONS(164),
    [anon_sym_sget_DASHchar] = ACTIONS(164),
    [anon_sym_sget_DASHshort] = ACTIONS(164),
    [anon_sym_sput] = ACTIONS(166),
    [anon_sym_sput_DASHwide] = ACTIONS(164),
    [anon_sym_sput_DASHobject] = ACTIONS(164),
    [anon_sym_sput_DASHboolean] = ACTIONS(164),
    [anon_sym_sput_DASHbyte] = ACTIONS(164),
    [anon_sym_sput_DASHchar] = ACTIONS(164),
    [anon_sym_sput_DASHshort] = ACTIONS(164),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(166),
    [anon_sym_invoke_DASHsuper] = ACTIONS(166),
    [anon_sym_invoke_DASHdirect] = ACTIONS(166),
    [anon_sym_invoke_DASHstatic] = ACTIONS(166),
    [anon_sym_invoke_DASHinterface] = ACTIONS(166),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(164),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(164),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(164),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(164),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(164),
    [anon_sym_neg_DASHint] = ACTIONS(164),
    [anon_sym_not_DASHint] = ACTIONS(164),
    [anon_sym_neg_DASHlong] = ACTIONS(164),
    [anon_sym_not_DASHlong] = ACTIONS(164),
    [anon_sym_neg_DASHfloat] = ACTIONS(164),
    [anon_sym_neg_DASHdouble] = ACTIONS(164),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(164),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(164),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(164),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(164),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(164),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(164),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(164),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(164),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(164),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(164),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(164),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(164),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(164),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(164),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(164),
    [anon_sym_add_DASHint] = ACTIONS(166),
    [anon_sym_sub_DASHint] = ACTIONS(166),
    [anon_sym_mul_DASHint] = ACTIONS(166),
    [anon_sym_div_DASHint] = ACTIONS(166),
    [anon_sym_rem_DASHint] = ACTIONS(166),
    [anon_sym_and_DASHint] = ACTIONS(166),
    [anon_sym_or_DASHint] = ACTIONS(166),
    [anon_sym_xor_DASHint] = ACTIONS(166),
    [anon_sym_shl_DASHint] = ACTIONS(166),
    [anon_sym_shr_DASHint] = ACTIONS(166),
    [anon_sym_ushr_DASHint] = ACTIONS(166),
    [anon_sym_add_DASHlong] = ACTIONS(166),
    [anon_sym_sub_DASHlong] = ACTIONS(166),
    [anon_sym_mul_DASHlong] = ACTIONS(166),
    [anon_sym_div_DASHlong] = ACTIONS(166),
    [anon_sym_rem_DASHlong] = ACTIONS(166),
    [anon_sym_and_DASHlong] = ACTIONS(166),
    [anon_sym_or_DASHlong] = ACTIONS(166),
    [anon_sym_xor_DASHlong] = ACTIONS(166),
    [anon_sym_shl_DASHlong] = ACTIONS(166),
    [anon_sym_shr_DASHlong] = ACTIONS(166),
    [anon_sym_ushr_DASHlong] = ACTIONS(166),
    [anon_sym_add_DASHfloat] = ACTIONS(166),
    [anon_sym_sub_DASHfloat] = ACTIONS(166),
    [anon_sym_mul_DASHfloat] = ACTIONS(166),
    [anon_sym_div_DASHfloat] = ACTIONS(166),
    [anon_sym_rem_DASHfloat] = ACTIONS(166),
    [anon_sym_add_DASHdouble] = ACTIONS(166),
    [anon_sym_sub_DASHdouble] = ACTIONS(166),
    [anon_sym_mul_DASHdouble] = ACTIONS(166),
    [anon_sym_div_DASHdouble] = ACTIONS(166),
    [anon_sym_rem_DASHdouble] = ACTIONS(166),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(164),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(164),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(164),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(164),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(164),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(164),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(164),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(164),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(164),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(164),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(164),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(164),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(164),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_execute_DASHinline] = ACTIONS(164),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(164),
    [anon_sym_iget_DASHquick] = ACTIONS(164),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(164),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(164),
    [anon_sym_iput_DASHquick] = ACTIONS(164),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(164),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(164),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(166),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(164),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(166),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(164),
    [anon_sym_rsub_DASHint] = ACTIONS(166),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(164),
    [anon_sym_DOTline] = ACTIONS(164),
    [anon_sym_DOTlocals] = ACTIONS(164),
    [anon_sym_DOTregisters] = ACTIONS(164),
    [anon_sym_DOTcatch] = ACTIONS(166),
    [anon_sym_DOTcatchall] = ACTIONS(164),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(164),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(164),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_end_method] = ACTIONS(168),
    [anon_sym_DOTannotation] = ACTIONS(168),
    [anon_sym_DOTparam] = ACTIONS(168),
    [sym_label] = ACTIONS(168),
    [anon_sym_nop] = ACTIONS(168),
    [anon_sym_move] = ACTIONS(170),
    [anon_sym_move_SLASHfrom16] = ACTIONS(168),
    [anon_sym_move_SLASH16] = ACTIONS(168),
    [anon_sym_move_DASHwide] = ACTIONS(170),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(168),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(168),
    [anon_sym_move_DASHobject] = ACTIONS(170),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(168),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(168),
    [anon_sym_move_DASHresult] = ACTIONS(170),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(168),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(168),
    [anon_sym_move_DASHexception] = ACTIONS(168),
    [anon_sym_return_DASHvoid] = ACTIONS(168),
    [anon_sym_return] = ACTIONS(170),
    [anon_sym_return_DASHwide] = ACTIONS(168),
    [anon_sym_return_DASHobject] = ACTIONS(168),
    [anon_sym_const_SLASH4] = ACTIONS(168),
    [anon_sym_const_SLASH16] = ACTIONS(168),
    [anon_sym_const] = ACTIONS(170),
    [anon_sym_const_SLASHhigh16] = ACTIONS(168),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(168),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(168),
    [anon_sym_const_DASHwide] = ACTIONS(170),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(168),
    [anon_sym_const_DASHstring] = ACTIONS(170),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(168),
    [anon_sym_const_DASHclass] = ACTIONS(168),
    [anon_sym_monitor_DASHenter] = ACTIONS(168),
    [anon_sym_monitor_DASHexit] = ACTIONS(168),
    [anon_sym_check_DASHcast] = ACTIONS(168),
    [anon_sym_instance_DASHof] = ACTIONS(168),
    [anon_sym_array_DASHlength] = ACTIONS(168),
    [anon_sym_new_DASHinstance] = ACTIONS(168),
    [anon_sym_new_DASHarray] = ACTIONS(168),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(170),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(168),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(168),
    [anon_sym_throw] = ACTIONS(168),
    [anon_sym_goto] = ACTIONS(170),
    [anon_sym_goto_SLASH16] = ACTIONS(168),
    [anon_sym_goto_SLASH32] = ACTIONS(168),
    [anon_sym_packed_DASHswitch] = ACTIONS(168),
    [anon_sym_sparse_DASHswitch] = ACTIONS(168),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(168),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(168),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(168),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(168),
    [anon_sym_cmp_DASHlong] = ACTIONS(168),
    [anon_sym_if_DASHeq] = ACTIONS(170),
    [anon_sym_if_DASHne] = ACTIONS(170),
    [anon_sym_if_DASHlt] = ACTIONS(170),
    [anon_sym_if_DASHge] = ACTIONS(170),
    [anon_sym_if_DASHgt] = ACTIONS(170),
    [anon_sym_if_DASHle] = ACTIONS(170),
    [anon_sym_if_DASHeqz] = ACTIONS(168),
    [anon_sym_if_DASHnez] = ACTIONS(168),
    [anon_sym_if_DASHltz] = ACTIONS(168),
    [anon_sym_if_DASHgez] = ACTIONS(168),
    [anon_sym_if_DASHgtz] = ACTIONS(168),
    [anon_sym_if_DASHlez] = ACTIONS(168),
    [anon_sym_aget] = ACTIONS(170),
    [anon_sym_aget_DASHwide] = ACTIONS(168),
    [anon_sym_aget_DASHobject] = ACTIONS(168),
    [anon_sym_aget_DASHboolean] = ACTIONS(168),
    [anon_sym_aget_DASHbyte] = ACTIONS(168),
    [anon_sym_aget_DASHchar] = ACTIONS(168),
    [anon_sym_aget_DASHshort] = ACTIONS(168),
    [anon_sym_aput] = ACTIONS(170),
    [anon_sym_aput_DASHwide] = ACTIONS(168),
    [anon_sym_aput_DASHobject] = ACTIONS(168),
    [anon_sym_aput_DASHboolean] = ACTIONS(168),
    [anon_sym_aput_DASHbyte] = ACTIONS(168),
    [anon_sym_aput_DASHchar] = ACTIONS(168),
    [anon_sym_aput_DASHshort] = ACTIONS(168),
    [anon_sym_iget] = ACTIONS(170),
    [anon_sym_iget_DASHwide] = ACTIONS(170),
    [anon_sym_iget_DASHobject] = ACTIONS(170),
    [anon_sym_iget_DASHboolean] = ACTIONS(168),
    [anon_sym_iget_DASHbyte] = ACTIONS(168),
    [anon_sym_iget_DASHchar] = ACTIONS(168),
    [anon_sym_iget_DASHshort] = ACTIONS(168),
    [anon_sym_iput] = ACTIONS(170),
    [anon_sym_iput_DASHwide] = ACTIONS(170),
    [anon_sym_iput_DASHobject] = ACTIONS(170),
    [anon_sym_iput_DASHboolean] = ACTIONS(168),
    [anon_sym_iput_DASHbyte] = ACTIONS(168),
    [anon_sym_iput_DASHchar] = ACTIONS(168),
    [anon_sym_iput_DASHshort] = ACTIONS(168),
    [anon_sym_sget] = ACTIONS(170),
    [anon_sym_sget_DASHwide] = ACTIONS(168),
    [anon_sym_sget_DASHobject] = ACTIONS(168),
    [anon_sym_sget_DASHboolean] = ACTIONS(168),
    [anon_sym_sget_DASHbyte] = ACTIONS(168),
    [anon_sym_sget_DASHchar] = ACTIONS(168),
    [anon_sym_sget_DASHshort] = ACTIONS(168),
    [anon_sym_sput] = ACTIONS(170),
    [anon_sym_sput_DASHwide] = ACTIONS(168),
    [anon_sym_sput_DASHobject] = ACTIONS(168),
    [anon_sym_sput_DASHboolean] = ACTIONS(168),
    [anon_sym_sput_DASHbyte] = ACTIONS(168),
    [anon_sym_sput_DASHchar] = ACTIONS(168),
    [anon_sym_sput_DASHshort] = ACTIONS(168),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(170),
    [anon_sym_invoke_DASHsuper] = ACTIONS(170),
    [anon_sym_invoke_DASHdirect] = ACTIONS(170),
    [anon_sym_invoke_DASHstatic] = ACTIONS(170),
    [anon_sym_invoke_DASHinterface] = ACTIONS(170),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(168),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(168),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(168),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(168),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(168),
    [anon_sym_neg_DASHint] = ACTIONS(168),
    [anon_sym_not_DASHint] = ACTIONS(168),
    [anon_sym_neg_DASHlong] = ACTIONS(168),
    [anon_sym_not_DASHlong] = ACTIONS(168),
    [anon_sym_neg_DASHfloat] = ACTIONS(168),
    [anon_sym_neg_DASHdouble] = ACTIONS(168),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(168),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(168),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(168),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(168),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(168),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(168),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(168),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(168),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(168),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(168),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(168),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(168),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(168),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(168),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(168),
    [anon_sym_add_DASHint] = ACTIONS(170),
    [anon_sym_sub_DASHint] = ACTIONS(170),
    [anon_sym_mul_DASHint] = ACTIONS(170),
    [anon_sym_div_DASHint] = ACTIONS(170),
    [anon_sym_rem_DASHint] = ACTIONS(170),
    [anon_sym_and_DASHint] = ACTIONS(170),
    [anon_sym_or_DASHint] = ACTIONS(170),
    [anon_sym_xor_DASHint] = ACTIONS(170),
    [anon_sym_shl_DASHint] = ACTIONS(170),
    [anon_sym_shr_DASHint] = ACTIONS(170),
    [anon_sym_ushr_DASHint] = ACTIONS(170),
    [anon_sym_add_DASHlong] = ACTIONS(170),
    [anon_sym_sub_DASHlong] = ACTIONS(170),
    [anon_sym_mul_DASHlong] = ACTIONS(170),
    [anon_sym_div_DASHlong] = ACTIONS(170),
    [anon_sym_rem_DASHlong] = ACTIONS(170),
    [anon_sym_and_DASHlong] = ACTIONS(170),
    [anon_sym_or_DASHlong] = ACTIONS(170),
    [anon_sym_xor_DASHlong] = ACTIONS(170),
    [anon_sym_shl_DASHlong] = ACTIONS(170),
    [anon_sym_shr_DASHlong] = ACTIONS(170),
    [anon_sym_ushr_DASHlong] = ACTIONS(170),
    [anon_sym_add_DASHfloat] = ACTIONS(170),
    [anon_sym_sub_DASHfloat] = ACTIONS(170),
    [anon_sym_mul_DASHfloat] = ACTIONS(170),
    [anon_sym_div_DASHfloat] = ACTIONS(170),
    [anon_sym_rem_DASHfloat] = ACTIONS(170),
    [anon_sym_add_DASHdouble] = ACTIONS(170),
    [anon_sym_sub_DASHdouble] = ACTIONS(170),
    [anon_sym_mul_DASHdouble] = ACTIONS(170),
    [anon_sym_div_DASHdouble] = ACTIONS(170),
    [anon_sym_rem_DASHdouble] = ACTIONS(170),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(168),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(168),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(168),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(168),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(168),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(168),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(168),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(168),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(168),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(168),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(168),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(168),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(168),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_execute_DASHinline] = ACTIONS(168),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(168),
    [anon_sym_iget_DASHquick] = ACTIONS(168),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(168),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(168),
    [anon_sym_iput_DASHquick] = ACTIONS(168),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(168),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(168),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(170),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(168),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(170),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(168),
    [anon_sym_rsub_DASHint] = ACTIONS(170),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(168),
    [anon_sym_DOTline] = ACTIONS(168),
    [anon_sym_DOTlocals] = ACTIONS(168),
    [anon_sym_DOTregisters] = ACTIONS(168),
    [anon_sym_DOTcatch] = ACTIONS(170),
    [anon_sym_DOTcatchall] = ACTIONS(168),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(168),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(168),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_end_method] = ACTIONS(172),
    [anon_sym_DOTannotation] = ACTIONS(172),
    [anon_sym_DOTparam] = ACTIONS(172),
    [sym_label] = ACTIONS(172),
    [anon_sym_nop] = ACTIONS(172),
    [anon_sym_move] = ACTIONS(174),
    [anon_sym_move_SLASHfrom16] = ACTIONS(172),
    [anon_sym_move_SLASH16] = ACTIONS(172),
    [anon_sym_move_DASHwide] = ACTIONS(174),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(172),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(172),
    [anon_sym_move_DASHobject] = ACTIONS(174),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(172),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(172),
    [anon_sym_move_DASHresult] = ACTIONS(174),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(172),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(172),
    [anon_sym_move_DASHexception] = ACTIONS(172),
    [anon_sym_return_DASHvoid] = ACTIONS(172),
    [anon_sym_return] = ACTIONS(174),
    [anon_sym_return_DASHwide] = ACTIONS(172),
    [anon_sym_return_DASHobject] = ACTIONS(172),
    [anon_sym_const_SLASH4] = ACTIONS(172),
    [anon_sym_const_SLASH16] = ACTIONS(172),
    [anon_sym_const] = ACTIONS(174),
    [anon_sym_const_SLASHhigh16] = ACTIONS(172),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(172),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(172),
    [anon_sym_const_DASHwide] = ACTIONS(174),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(172),
    [anon_sym_const_DASHstring] = ACTIONS(174),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(172),
    [anon_sym_const_DASHclass] = ACTIONS(172),
    [anon_sym_monitor_DASHenter] = ACTIONS(172),
    [anon_sym_monitor_DASHexit] = ACTIONS(172),
    [anon_sym_check_DASHcast] = ACTIONS(172),
    [anon_sym_instance_DASHof] = ACTIONS(172),
    [anon_sym_array_DASHlength] = ACTIONS(172),
    [anon_sym_new_DASHinstance] = ACTIONS(172),
    [anon_sym_new_DASHarray] = ACTIONS(172),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(174),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(172),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(172),
    [anon_sym_throw] = ACTIONS(172),
    [anon_sym_goto] = ACTIONS(174),
    [anon_sym_goto_SLASH16] = ACTIONS(172),
    [anon_sym_goto_SLASH32] = ACTIONS(172),
    [anon_sym_packed_DASHswitch] = ACTIONS(172),
    [anon_sym_sparse_DASHswitch] = ACTIONS(172),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(172),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(172),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(172),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(172),
    [anon_sym_cmp_DASHlong] = ACTIONS(172),
    [anon_sym_if_DASHeq] = ACTIONS(174),
    [anon_sym_if_DASHne] = ACTIONS(174),
    [anon_sym_if_DASHlt] = ACTIONS(174),
    [anon_sym_if_DASHge] = ACTIONS(174),
    [anon_sym_if_DASHgt] = ACTIONS(174),
    [anon_sym_if_DASHle] = ACTIONS(174),
    [anon_sym_if_DASHeqz] = ACTIONS(172),
    [anon_sym_if_DASHnez] = ACTIONS(172),
    [anon_sym_if_DASHltz] = ACTIONS(172),
    [anon_sym_if_DASHgez] = ACTIONS(172),
    [anon_sym_if_DASHgtz] = ACTIONS(172),
    [anon_sym_if_DASHlez] = ACTIONS(172),
    [anon_sym_aget] = ACTIONS(174),
    [anon_sym_aget_DASHwide] = ACTIONS(172),
    [anon_sym_aget_DASHobject] = ACTIONS(172),
    [anon_sym_aget_DASHboolean] = ACTIONS(172),
    [anon_sym_aget_DASHbyte] = ACTIONS(172),
    [anon_sym_aget_DASHchar] = ACTIONS(172),
    [anon_sym_aget_DASHshort] = ACTIONS(172),
    [anon_sym_aput] = ACTIONS(174),
    [anon_sym_aput_DASHwide] = ACTIONS(172),
    [anon_sym_aput_DASHobject] = ACTIONS(172),
    [anon_sym_aput_DASHboolean] = ACTIONS(172),
    [anon_sym_aput_DASHbyte] = ACTIONS(172),
    [anon_sym_aput_DASHchar] = ACTIONS(172),
    [anon_sym_aput_DASHshort] = ACTIONS(172),
    [anon_sym_iget] = ACTIONS(174),
    [anon_sym_iget_DASHwide] = ACTIONS(174),
    [anon_sym_iget_DASHobject] = ACTIONS(174),
    [anon_sym_iget_DASHboolean] = ACTIONS(172),
    [anon_sym_iget_DASHbyte] = ACTIONS(172),
    [anon_sym_iget_DASHchar] = ACTIONS(172),
    [anon_sym_iget_DASHshort] = ACTIONS(172),
    [anon_sym_iput] = ACTIONS(174),
    [anon_sym_iput_DASHwide] = ACTIONS(174),
    [anon_sym_iput_DASHobject] = ACTIONS(174),
    [anon_sym_iput_DASHboolean] = ACTIONS(172),
    [anon_sym_iput_DASHbyte] = ACTIONS(172),
    [anon_sym_iput_DASHchar] = ACTIONS(172),
    [anon_sym_iput_DASHshort] = ACTIONS(172),
    [anon_sym_sget] = ACTIONS(174),
    [anon_sym_sget_DASHwide] = ACTIONS(172),
    [anon_sym_sget_DASHobject] = ACTIONS(172),
    [anon_sym_sget_DASHboolean] = ACTIONS(172),
    [anon_sym_sget_DASHbyte] = ACTIONS(172),
    [anon_sym_sget_DASHchar] = ACTIONS(172),
    [anon_sym_sget_DASHshort] = ACTIONS(172),
    [anon_sym_sput] = ACTIONS(174),
    [anon_sym_sput_DASHwide] = ACTIONS(172),
    [anon_sym_sput_DASHobject] = ACTIONS(172),
    [anon_sym_sput_DASHboolean] = ACTIONS(172),
    [anon_sym_sput_DASHbyte] = ACTIONS(172),
    [anon_sym_sput_DASHchar] = ACTIONS(172),
    [anon_sym_sput_DASHshort] = ACTIONS(172),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(174),
    [anon_sym_invoke_DASHsuper] = ACTIONS(174),
    [anon_sym_invoke_DASHdirect] = ACTIONS(174),
    [anon_sym_invoke_DASHstatic] = ACTIONS(174),
    [anon_sym_invoke_DASHinterface] = ACTIONS(174),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(172),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(172),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(172),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(172),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(172),
    [anon_sym_neg_DASHint] = ACTIONS(172),
    [anon_sym_not_DASHint] = ACTIONS(172),
    [anon_sym_neg_DASHlong] = ACTIONS(172),
    [anon_sym_not_DASHlong] = ACTIONS(172),
    [anon_sym_neg_DASHfloat] = ACTIONS(172),
    [anon_sym_neg_DASHdouble] = ACTIONS(172),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(172),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(172),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(172),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(172),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(172),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(172),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(172),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(172),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(172),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(172),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(172),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(172),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(172),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(172),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(172),
    [anon_sym_add_DASHint] = ACTIONS(174),
    [anon_sym_sub_DASHint] = ACTIONS(174),
    [anon_sym_mul_DASHint] = ACTIONS(174),
    [anon_sym_div_DASHint] = ACTIONS(174),
    [anon_sym_rem_DASHint] = ACTIONS(174),
    [anon_sym_and_DASHint] = ACTIONS(174),
    [anon_sym_or_DASHint] = ACTIONS(174),
    [anon_sym_xor_DASHint] = ACTIONS(174),
    [anon_sym_shl_DASHint] = ACTIONS(174),
    [anon_sym_shr_DASHint] = ACTIONS(174),
    [anon_sym_ushr_DASHint] = ACTIONS(174),
    [anon_sym_add_DASHlong] = ACTIONS(174),
    [anon_sym_sub_DASHlong] = ACTIONS(174),
    [anon_sym_mul_DASHlong] = ACTIONS(174),
    [anon_sym_div_DASHlong] = ACTIONS(174),
    [anon_sym_rem_DASHlong] = ACTIONS(174),
    [anon_sym_and_DASHlong] = ACTIONS(174),
    [anon_sym_or_DASHlong] = ACTIONS(174),
    [anon_sym_xor_DASHlong] = ACTIONS(174),
    [anon_sym_shl_DASHlong] = ACTIONS(174),
    [anon_sym_shr_DASHlong] = ACTIONS(174),
    [anon_sym_ushr_DASHlong] = ACTIONS(174),
    [anon_sym_add_DASHfloat] = ACTIONS(174),
    [anon_sym_sub_DASHfloat] = ACTIONS(174),
    [anon_sym_mul_DASHfloat] = ACTIONS(174),
    [anon_sym_div_DASHfloat] = ACTIONS(174),
    [anon_sym_rem_DASHfloat] = ACTIONS(174),
    [anon_sym_add_DASHdouble] = ACTIONS(174),
    [anon_sym_sub_DASHdouble] = ACTIONS(174),
    [anon_sym_mul_DASHdouble] = ACTIONS(174),
    [anon_sym_div_DASHdouble] = ACTIONS(174),
    [anon_sym_rem_DASHdouble] = ACTIONS(174),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(172),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(172),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(172),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(172),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(172),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(172),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(172),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(172),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(172),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(172),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(172),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(172),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(172),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_execute_DASHinline] = ACTIONS(172),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(172),
    [anon_sym_iget_DASHquick] = ACTIONS(172),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(172),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(172),
    [anon_sym_iput_DASHquick] = ACTIONS(172),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(172),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(172),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(174),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(172),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(174),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(172),
    [anon_sym_rsub_DASHint] = ACTIONS(174),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(172),
    [anon_sym_DOTline] = ACTIONS(172),
    [anon_sym_DOTlocals] = ACTIONS(172),
    [anon_sym_DOTregisters] = ACTIONS(172),
    [anon_sym_DOTcatch] = ACTIONS(174),
    [anon_sym_DOTcatchall] = ACTIONS(172),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(172),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(172),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_end_method] = ACTIONS(176),
    [anon_sym_DOTannotation] = ACTIONS(176),
    [anon_sym_DOTparam] = ACTIONS(176),
    [sym_label] = ACTIONS(176),
    [anon_sym_nop] = ACTIONS(176),
    [anon_sym_move] = ACTIONS(178),
    [anon_sym_move_SLASHfrom16] = ACTIONS(176),
    [anon_sym_move_SLASH16] = ACTIONS(176),
    [anon_sym_move_DASHwide] = ACTIONS(178),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(176),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(176),
    [anon_sym_move_DASHobject] = ACTIONS(178),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(176),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(176),
    [anon_sym_move_DASHresult] = ACTIONS(178),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(176),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(176),
    [anon_sym_move_DASHexception] = ACTIONS(176),
    [anon_sym_return_DASHvoid] = ACTIONS(176),
    [anon_sym_return] = ACTIONS(178),
    [anon_sym_return_DASHwide] = ACTIONS(176),
    [anon_sym_return_DASHobject] = ACTIONS(176),
    [anon_sym_const_SLASH4] = ACTIONS(176),
    [anon_sym_const_SLASH16] = ACTIONS(176),
    [anon_sym_const] = ACTIONS(178),
    [anon_sym_const_SLASHhigh16] = ACTIONS(176),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(176),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(176),
    [anon_sym_const_DASHwide] = ACTIONS(178),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(176),
    [anon_sym_const_DASHstring] = ACTIONS(178),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(176),
    [anon_sym_const_DASHclass] = ACTIONS(176),
    [anon_sym_monitor_DASHenter] = ACTIONS(176),
    [anon_sym_monitor_DASHexit] = ACTIONS(176),
    [anon_sym_check_DASHcast] = ACTIONS(176),
    [anon_sym_instance_DASHof] = ACTIONS(176),
    [anon_sym_array_DASHlength] = ACTIONS(176),
    [anon_sym_new_DASHinstance] = ACTIONS(176),
    [anon_sym_new_DASHarray] = ACTIONS(176),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(178),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(176),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(176),
    [anon_sym_throw] = ACTIONS(176),
    [anon_sym_goto] = ACTIONS(178),
    [anon_sym_goto_SLASH16] = ACTIONS(176),
    [anon_sym_goto_SLASH32] = ACTIONS(176),
    [anon_sym_packed_DASHswitch] = ACTIONS(176),
    [anon_sym_sparse_DASHswitch] = ACTIONS(176),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(176),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(176),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(176),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(176),
    [anon_sym_cmp_DASHlong] = ACTIONS(176),
    [anon_sym_if_DASHeq] = ACTIONS(178),
    [anon_sym_if_DASHne] = ACTIONS(178),
    [anon_sym_if_DASHlt] = ACTIONS(178),
    [anon_sym_if_DASHge] = ACTIONS(178),
    [anon_sym_if_DASHgt] = ACTIONS(178),
    [anon_sym_if_DASHle] = ACTIONS(178),
    [anon_sym_if_DASHeqz] = ACTIONS(176),
    [anon_sym_if_DASHnez] = ACTIONS(176),
    [anon_sym_if_DASHltz] = ACTIONS(176),
    [anon_sym_if_DASHgez] = ACTIONS(176),
    [anon_sym_if_DASHgtz] = ACTIONS(176),
    [anon_sym_if_DASHlez] = ACTIONS(176),
    [anon_sym_aget] = ACTIONS(178),
    [anon_sym_aget_DASHwide] = ACTIONS(176),
    [anon_sym_aget_DASHobject] = ACTIONS(176),
    [anon_sym_aget_DASHboolean] = ACTIONS(176),
    [anon_sym_aget_DASHbyte] = ACTIONS(176),
    [anon_sym_aget_DASHchar] = ACTIONS(176),
    [anon_sym_aget_DASHshort] = ACTIONS(176),
    [anon_sym_aput] = ACTIONS(178),
    [anon_sym_aput_DASHwide] = ACTIONS(176),
    [anon_sym_aput_DASHobject] = ACTIONS(176),
    [anon_sym_aput_DASHboolean] = ACTIONS(176),
    [anon_sym_aput_DASHbyte] = ACTIONS(176),
    [anon_sym_aput_DASHchar] = ACTIONS(176),
    [anon_sym_aput_DASHshort] = ACTIONS(176),
    [anon_sym_iget] = ACTIONS(178),
    [anon_sym_iget_DASHwide] = ACTIONS(178),
    [anon_sym_iget_DASHobject] = ACTIONS(178),
    [anon_sym_iget_DASHboolean] = ACTIONS(176),
    [anon_sym_iget_DASHbyte] = ACTIONS(176),
    [anon_sym_iget_DASHchar] = ACTIONS(176),
    [anon_sym_iget_DASHshort] = ACTIONS(176),
    [anon_sym_iput] = ACTIONS(178),
    [anon_sym_iput_DASHwide] = ACTIONS(178),
    [anon_sym_iput_DASHobject] = ACTIONS(178),
    [anon_sym_iput_DASHboolean] = ACTIONS(176),
    [anon_sym_iput_DASHbyte] = ACTIONS(176),
    [anon_sym_iput_DASHchar] = ACTIONS(176),
    [anon_sym_iput_DASHshort] = ACTIONS(176),
    [anon_sym_sget] = ACTIONS(178),
    [anon_sym_sget_DASHwide] = ACTIONS(176),
    [anon_sym_sget_DASHobject] = ACTIONS(176),
    [anon_sym_sget_DASHboolean] = ACTIONS(176),
    [anon_sym_sget_DASHbyte] = ACTIONS(176),
    [anon_sym_sget_DASHchar] = ACTIONS(176),
    [anon_sym_sget_DASHshort] = ACTIONS(176),
    [anon_sym_sput] = ACTIONS(178),
    [anon_sym_sput_DASHwide] = ACTIONS(176),
    [anon_sym_sput_DASHobject] = ACTIONS(176),
    [anon_sym_sput_DASHboolean] = ACTIONS(176),
    [anon_sym_sput_DASHbyte] = ACTIONS(176),
    [anon_sym_sput_DASHchar] = ACTIONS(176),
    [anon_sym_sput_DASHshort] = ACTIONS(176),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(178),
    [anon_sym_invoke_DASHsuper] = ACTIONS(178),
    [anon_sym_invoke_DASHdirect] = ACTIONS(178),
    [anon_sym_invoke_DASHstatic] = ACTIONS(178),
    [anon_sym_invoke_DASHinterface] = ACTIONS(178),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(176),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(176),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(176),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(176),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(176),
    [anon_sym_neg_DASHint] = ACTIONS(176),
    [anon_sym_not_DASHint] = ACTIONS(176),
    [anon_sym_neg_DASHlong] = ACTIONS(176),
    [anon_sym_not_DASHlong] = ACTIONS(176),
    [anon_sym_neg_DASHfloat] = ACTIONS(176),
    [anon_sym_neg_DASHdouble] = ACTIONS(176),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(176),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(176),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(176),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(176),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(176),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(176),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(176),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(176),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(176),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(176),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(176),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(176),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(176),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(176),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(176),
    [anon_sym_add_DASHint] = ACTIONS(178),
    [anon_sym_sub_DASHint] = ACTIONS(178),
    [anon_sym_mul_DASHint] = ACTIONS(178),
    [anon_sym_div_DASHint] = ACTIONS(178),
    [anon_sym_rem_DASHint] = ACTIONS(178),
    [anon_sym_and_DASHint] = ACTIONS(178),
    [anon_sym_or_DASHint] = ACTIONS(178),
    [anon_sym_xor_DASHint] = ACTIONS(178),
    [anon_sym_shl_DASHint] = ACTIONS(178),
    [anon_sym_shr_DASHint] = ACTIONS(178),
    [anon_sym_ushr_DASHint] = ACTIONS(178),
    [anon_sym_add_DASHlong] = ACTIONS(178),
    [anon_sym_sub_DASHlong] = ACTIONS(178),
    [anon_sym_mul_DASHlong] = ACTIONS(178),
    [anon_sym_div_DASHlong] = ACTIONS(178),
    [anon_sym_rem_DASHlong] = ACTIONS(178),
    [anon_sym_and_DASHlong] = ACTIONS(178),
    [anon_sym_or_DASHlong] = ACTIONS(178),
    [anon_sym_xor_DASHlong] = ACTIONS(178),
    [anon_sym_shl_DASHlong] = ACTIONS(178),
    [anon_sym_shr_DASHlong] = ACTIONS(178),
    [anon_sym_ushr_DASHlong] = ACTIONS(178),
    [anon_sym_add_DASHfloat] = ACTIONS(178),
    [anon_sym_sub_DASHfloat] = ACTIONS(178),
    [anon_sym_mul_DASHfloat] = ACTIONS(178),
    [anon_sym_div_DASHfloat] = ACTIONS(178),
    [anon_sym_rem_DASHfloat] = ACTIONS(178),
    [anon_sym_add_DASHdouble] = ACTIONS(178),
    [anon_sym_sub_DASHdouble] = ACTIONS(178),
    [anon_sym_mul_DASHdouble] = ACTIONS(178),
    [anon_sym_div_DASHdouble] = ACTIONS(178),
    [anon_sym_rem_DASHdouble] = ACTIONS(178),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(176),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(176),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(176),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(176),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(176),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(176),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(176),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(176),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(176),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(176),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(176),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(176),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(176),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_execute_DASHinline] = ACTIONS(176),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(176),
    [anon_sym_iget_DASHquick] = ACTIONS(176),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(176),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(176),
    [anon_sym_iput_DASHquick] = ACTIONS(176),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(176),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(176),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(178),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(176),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(178),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(176),
    [anon_sym_rsub_DASHint] = ACTIONS(178),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(176),
    [anon_sym_DOTline] = ACTIONS(176),
    [anon_sym_DOTlocals] = ACTIONS(176),
    [anon_sym_DOTregisters] = ACTIONS(176),
    [anon_sym_DOTcatch] = ACTIONS(178),
    [anon_sym_DOTcatchall] = ACTIONS(176),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(176),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(176),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_end_method] = ACTIONS(180),
    [anon_sym_DOTannotation] = ACTIONS(180),
    [anon_sym_DOTparam] = ACTIONS(180),
    [sym_label] = ACTIONS(180),
    [anon_sym_nop] = ACTIONS(180),
    [anon_sym_move] = ACTIONS(182),
    [anon_sym_move_SLASHfrom16] = ACTIONS(180),
    [anon_sym_move_SLASH16] = ACTIONS(180),
    [anon_sym_move_DASHwide] = ACTIONS(182),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(180),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(180),
    [anon_sym_move_DASHobject] = ACTIONS(182),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(180),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(180),
    [anon_sym_move_DASHresult] = ACTIONS(182),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(180),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(180),
    [anon_sym_move_DASHexception] = ACTIONS(180),
    [anon_sym_return_DASHvoid] = ACTIONS(180),
    [anon_sym_return] = ACTIONS(182),
    [anon_sym_return_DASHwide] = ACTIONS(180),
    [anon_sym_return_DASHobject] = ACTIONS(180),
    [anon_sym_const_SLASH4] = ACTIONS(180),
    [anon_sym_const_SLASH16] = ACTIONS(180),
    [anon_sym_const] = ACTIONS(182),
    [anon_sym_const_SLASHhigh16] = ACTIONS(180),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(180),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(180),
    [anon_sym_const_DASHwide] = ACTIONS(182),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(180),
    [anon_sym_const_DASHstring] = ACTIONS(182),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(180),
    [anon_sym_const_DASHclass] = ACTIONS(180),
    [anon_sym_monitor_DASHenter] = ACTIONS(180),
    [anon_sym_monitor_DASHexit] = ACTIONS(180),
    [anon_sym_check_DASHcast] = ACTIONS(180),
    [anon_sym_instance_DASHof] = ACTIONS(180),
    [anon_sym_array_DASHlength] = ACTIONS(180),
    [anon_sym_new_DASHinstance] = ACTIONS(180),
    [anon_sym_new_DASHarray] = ACTIONS(180),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(182),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(180),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(180),
    [anon_sym_throw] = ACTIONS(180),
    [anon_sym_goto] = ACTIONS(182),
    [anon_sym_goto_SLASH16] = ACTIONS(180),
    [anon_sym_goto_SLASH32] = ACTIONS(180),
    [anon_sym_packed_DASHswitch] = ACTIONS(180),
    [anon_sym_sparse_DASHswitch] = ACTIONS(180),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(180),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(180),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(180),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(180),
    [anon_sym_cmp_DASHlong] = ACTIONS(180),
    [anon_sym_if_DASHeq] = ACTIONS(182),
    [anon_sym_if_DASHne] = ACTIONS(182),
    [anon_sym_if_DASHlt] = ACTIONS(182),
    [anon_sym_if_DASHge] = ACTIONS(182),
    [anon_sym_if_DASHgt] = ACTIONS(182),
    [anon_sym_if_DASHle] = ACTIONS(182),
    [anon_sym_if_DASHeqz] = ACTIONS(180),
    [anon_sym_if_DASHnez] = ACTIONS(180),
    [anon_sym_if_DASHltz] = ACTIONS(180),
    [anon_sym_if_DASHgez] = ACTIONS(180),
    [anon_sym_if_DASHgtz] = ACTIONS(180),
    [anon_sym_if_DASHlez] = ACTIONS(180),
    [anon_sym_aget] = ACTIONS(182),
    [anon_sym_aget_DASHwide] = ACTIONS(180),
    [anon_sym_aget_DASHobject] = ACTIONS(180),
    [anon_sym_aget_DASHboolean] = ACTIONS(180),
    [anon_sym_aget_DASHbyte] = ACTIONS(180),
    [anon_sym_aget_DASHchar] = ACTIONS(180),
    [anon_sym_aget_DASHshort] = ACTIONS(180),
    [anon_sym_aput] = ACTIONS(182),
    [anon_sym_aput_DASHwide] = ACTIONS(180),
    [anon_sym_aput_DASHobject] = ACTIONS(180),
    [anon_sym_aput_DASHboolean] = ACTIONS(180),
    [anon_sym_aput_DASHbyte] = ACTIONS(180),
    [anon_sym_aput_DASHchar] = ACTIONS(180),
    [anon_sym_aput_DASHshort] = ACTIONS(180),
    [anon_sym_iget] = ACTIONS(182),
    [anon_sym_iget_DASHwide] = ACTIONS(182),
    [anon_sym_iget_DASHobject] = ACTIONS(182),
    [anon_sym_iget_DASHboolean] = ACTIONS(180),
    [anon_sym_iget_DASHbyte] = ACTIONS(180),
    [anon_sym_iget_DASHchar] = ACTIONS(180),
    [anon_sym_iget_DASHshort] = ACTIONS(180),
    [anon_sym_iput] = ACTIONS(182),
    [anon_sym_iput_DASHwide] = ACTIONS(182),
    [anon_sym_iput_DASHobject] = ACTIONS(182),
    [anon_sym_iput_DASHboolean] = ACTIONS(180),
    [anon_sym_iput_DASHbyte] = ACTIONS(180),
    [anon_sym_iput_DASHchar] = ACTIONS(180),
    [anon_sym_iput_DASHshort] = ACTIONS(180),
    [anon_sym_sget] = ACTIONS(182),
    [anon_sym_sget_DASHwide] = ACTIONS(180),
    [anon_sym_sget_DASHobject] = ACTIONS(180),
    [anon_sym_sget_DASHboolean] = ACTIONS(180),
    [anon_sym_sget_DASHbyte] = ACTIONS(180),
    [anon_sym_sget_DASHchar] = ACTIONS(180),
    [anon_sym_sget_DASHshort] = ACTIONS(180),
    [anon_sym_sput] = ACTIONS(182),
    [anon_sym_sput_DASHwide] = ACTIONS(180),
    [anon_sym_sput_DASHobject] = ACTIONS(180),
    [anon_sym_sput_DASHboolean] = ACTIONS(180),
    [anon_sym_sput_DASHbyte] = ACTIONS(180),
    [anon_sym_sput_DASHchar] = ACTIONS(180),
    [anon_sym_sput_DASHshort] = ACTIONS(180),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(182),
    [anon_sym_invoke_DASHsuper] = ACTIONS(182),
    [anon_sym_invoke_DASHdirect] = ACTIONS(182),
    [anon_sym_invoke_DASHstatic] = ACTIONS(182),
    [anon_sym_invoke_DASHinterface] = ACTIONS(182),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(180),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(180),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(180),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(180),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(180),
    [anon_sym_neg_DASHint] = ACTIONS(180),
    [anon_sym_not_DASHint] = ACTIONS(180),
    [anon_sym_neg_DASHlong] = ACTIONS(180),
    [anon_sym_not_DASHlong] = ACTIONS(180),
    [anon_sym_neg_DASHfloat] = ACTIONS(180),
    [anon_sym_neg_DASHdouble] = ACTIONS(180),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(180),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(180),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(180),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(180),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(180),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(180),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(180),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(180),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(180),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(180),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(180),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(180),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(180),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(180),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(180),
    [anon_sym_add_DASHint] = ACTIONS(182),
    [anon_sym_sub_DASHint] = ACTIONS(182),
    [anon_sym_mul_DASHint] = ACTIONS(182),
    [anon_sym_div_DASHint] = ACTIONS(182),
    [anon_sym_rem_DASHint] = ACTIONS(182),
    [anon_sym_and_DASHint] = ACTIONS(182),
    [anon_sym_or_DASHint] = ACTIONS(182),
    [anon_sym_xor_DASHint] = ACTIONS(182),
    [anon_sym_shl_DASHint] = ACTIONS(182),
    [anon_sym_shr_DASHint] = ACTIONS(182),
    [anon_sym_ushr_DASHint] = ACTIONS(182),
    [anon_sym_add_DASHlong] = ACTIONS(182),
    [anon_sym_sub_DASHlong] = ACTIONS(182),
    [anon_sym_mul_DASHlong] = ACTIONS(182),
    [anon_sym_div_DASHlong] = ACTIONS(182),
    [anon_sym_rem_DASHlong] = ACTIONS(182),
    [anon_sym_and_DASHlong] = ACTIONS(182),
    [anon_sym_or_DASHlong] = ACTIONS(182),
    [anon_sym_xor_DASHlong] = ACTIONS(182),
    [anon_sym_shl_DASHlong] = ACTIONS(182),
    [anon_sym_shr_DASHlong] = ACTIONS(182),
    [anon_sym_ushr_DASHlong] = ACTIONS(182),
    [anon_sym_add_DASHfloat] = ACTIONS(182),
    [anon_sym_sub_DASHfloat] = ACTIONS(182),
    [anon_sym_mul_DASHfloat] = ACTIONS(182),
    [anon_sym_div_DASHfloat] = ACTIONS(182),
    [anon_sym_rem_DASHfloat] = ACTIONS(182),
    [anon_sym_add_DASHdouble] = ACTIONS(182),
    [anon_sym_sub_DASHdouble] = ACTIONS(182),
    [anon_sym_mul_DASHdouble] = ACTIONS(182),
    [anon_sym_div_DASHdouble] = ACTIONS(182),
    [anon_sym_rem_DASHdouble] = ACTIONS(182),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(180),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(180),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(180),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(180),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(180),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(180),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(180),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(180),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(180),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(180),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(180),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(180),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(180),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_execute_DASHinline] = ACTIONS(180),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(180),
    [anon_sym_iget_DASHquick] = ACTIONS(180),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(180),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(180),
    [anon_sym_iput_DASHquick] = ACTIONS(180),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(180),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(180),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(182),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(180),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(182),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(180),
    [anon_sym_rsub_DASHint] = ACTIONS(182),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(180),
    [anon_sym_DOTline] = ACTIONS(180),
    [anon_sym_DOTlocals] = ACTIONS(180),
    [anon_sym_DOTregisters] = ACTIONS(180),
    [anon_sym_DOTcatch] = ACTIONS(182),
    [anon_sym_DOTcatchall] = ACTIONS(180),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(180),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(180),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_end_method] = ACTIONS(184),
    [anon_sym_DOTannotation] = ACTIONS(184),
    [anon_sym_DOTparam] = ACTIONS(184),
    [sym_label] = ACTIONS(184),
    [anon_sym_nop] = ACTIONS(184),
    [anon_sym_move] = ACTIONS(186),
    [anon_sym_move_SLASHfrom16] = ACTIONS(184),
    [anon_sym_move_SLASH16] = ACTIONS(184),
    [anon_sym_move_DASHwide] = ACTIONS(186),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(184),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(184),
    [anon_sym_move_DASHobject] = ACTIONS(186),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(184),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(184),
    [anon_sym_move_DASHresult] = ACTIONS(186),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(184),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(184),
    [anon_sym_move_DASHexception] = ACTIONS(184),
    [anon_sym_return_DASHvoid] = ACTIONS(184),
    [anon_sym_return] = ACTIONS(186),
    [anon_sym_return_DASHwide] = ACTIONS(184),
    [anon_sym_return_DASHobject] = ACTIONS(184),
    [anon_sym_const_SLASH4] = ACTIONS(184),
    [anon_sym_const_SLASH16] = ACTIONS(184),
    [anon_sym_const] = ACTIONS(186),
    [anon_sym_const_SLASHhigh16] = ACTIONS(184),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(184),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(184),
    [anon_sym_const_DASHwide] = ACTIONS(186),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(184),
    [anon_sym_const_DASHstring] = ACTIONS(186),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(184),
    [anon_sym_const_DASHclass] = ACTIONS(184),
    [anon_sym_monitor_DASHenter] = ACTIONS(184),
    [anon_sym_monitor_DASHexit] = ACTIONS(184),
    [anon_sym_check_DASHcast] = ACTIONS(184),
    [anon_sym_instance_DASHof] = ACTIONS(184),
    [anon_sym_array_DASHlength] = ACTIONS(184),
    [anon_sym_new_DASHinstance] = ACTIONS(184),
    [anon_sym_new_DASHarray] = ACTIONS(184),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(186),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(184),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(184),
    [anon_sym_throw] = ACTIONS(184),
    [anon_sym_goto] = ACTIONS(186),
    [anon_sym_goto_SLASH16] = ACTIONS(184),
    [anon_sym_goto_SLASH32] = ACTIONS(184),
    [anon_sym_packed_DASHswitch] = ACTIONS(184),
    [anon_sym_sparse_DASHswitch] = ACTIONS(184),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(184),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(184),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(184),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(184),
    [anon_sym_cmp_DASHlong] = ACTIONS(184),
    [anon_sym_if_DASHeq] = ACTIONS(186),
    [anon_sym_if_DASHne] = ACTIONS(186),
    [anon_sym_if_DASHlt] = ACTIONS(186),
    [anon_sym_if_DASHge] = ACTIONS(186),
    [anon_sym_if_DASHgt] = ACTIONS(186),
    [anon_sym_if_DASHle] = ACTIONS(186),
    [anon_sym_if_DASHeqz] = ACTIONS(184),
    [anon_sym_if_DASHnez] = ACTIONS(184),
    [anon_sym_if_DASHltz] = ACTIONS(184),
    [anon_sym_if_DASHgez] = ACTIONS(184),
    [anon_sym_if_DASHgtz] = ACTIONS(184),
    [anon_sym_if_DASHlez] = ACTIONS(184),
    [anon_sym_aget] = ACTIONS(186),
    [anon_sym_aget_DASHwide] = ACTIONS(184),
    [anon_sym_aget_DASHobject] = ACTIONS(184),
    [anon_sym_aget_DASHboolean] = ACTIONS(184),
    [anon_sym_aget_DASHbyte] = ACTIONS(184),
    [anon_sym_aget_DASHchar] = ACTIONS(184),
    [anon_sym_aget_DASHshort] = ACTIONS(184),
    [anon_sym_aput] = ACTIONS(186),
    [anon_sym_aput_DASHwide] = ACTIONS(184),
    [anon_sym_aput_DASHobject] = ACTIONS(184),
    [anon_sym_aput_DASHboolean] = ACTIONS(184),
    [anon_sym_aput_DASHbyte] = ACTIONS(184),
    [anon_sym_aput_DASHchar] = ACTIONS(184),
    [anon_sym_aput_DASHshort] = ACTIONS(184),
    [anon_sym_iget] = ACTIONS(186),
    [anon_sym_iget_DASHwide] = ACTIONS(186),
    [anon_sym_iget_DASHobject] = ACTIONS(186),
    [anon_sym_iget_DASHboolean] = ACTIONS(184),
    [anon_sym_iget_DASHbyte] = ACTIONS(184),
    [anon_sym_iget_DASHchar] = ACTIONS(184),
    [anon_sym_iget_DASHshort] = ACTIONS(184),
    [anon_sym_iput] = ACTIONS(186),
    [anon_sym_iput_DASHwide] = ACTIONS(186),
    [anon_sym_iput_DASHobject] = ACTIONS(186),
    [anon_sym_iput_DASHboolean] = ACTIONS(184),
    [anon_sym_iput_DASHbyte] = ACTIONS(184),
    [anon_sym_iput_DASHchar] = ACTIONS(184),
    [anon_sym_iput_DASHshort] = ACTIONS(184),
    [anon_sym_sget] = ACTIONS(186),
    [anon_sym_sget_DASHwide] = ACTIONS(184),
    [anon_sym_sget_DASHobject] = ACTIONS(184),
    [anon_sym_sget_DASHboolean] = ACTIONS(184),
    [anon_sym_sget_DASHbyte] = ACTIONS(184),
    [anon_sym_sget_DASHchar] = ACTIONS(184),
    [anon_sym_sget_DASHshort] = ACTIONS(184),
    [anon_sym_sput] = ACTIONS(186),
    [anon_sym_sput_DASHwide] = ACTIONS(184),
    [anon_sym_sput_DASHobject] = ACTIONS(184),
    [anon_sym_sput_DASHboolean] = ACTIONS(184),
    [anon_sym_sput_DASHbyte] = ACTIONS(184),
    [anon_sym_sput_DASHchar] = ACTIONS(184),
    [anon_sym_sput_DASHshort] = ACTIONS(184),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(186),
    [anon_sym_invoke_DASHsuper] = ACTIONS(186),
    [anon_sym_invoke_DASHdirect] = ACTIONS(186),
    [anon_sym_invoke_DASHstatic] = ACTIONS(186),
    [anon_sym_invoke_DASHinterface] = ACTIONS(186),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(184),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(184),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(184),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(184),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(184),
    [anon_sym_neg_DASHint] = ACTIONS(184),
    [anon_sym_not_DASHint] = ACTIONS(184),
    [anon_sym_neg_DASHlong] = ACTIONS(184),
    [anon_sym_not_DASHlong] = ACTIONS(184),
    [anon_sym_neg_DASHfloat] = ACTIONS(184),
    [anon_sym_neg_DASHdouble] = ACTIONS(184),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(184),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(184),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(184),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(184),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(184),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(184),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(184),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(184),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(184),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(184),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(184),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(184),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(184),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(184),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(184),
    [anon_sym_add_DASHint] = ACTIONS(186),
    [anon_sym_sub_DASHint] = ACTIONS(186),
    [anon_sym_mul_DASHint] = ACTIONS(186),
    [anon_sym_div_DASHint] = ACTIONS(186),
    [anon_sym_rem_DASHint] = ACTIONS(186),
    [anon_sym_and_DASHint] = ACTIONS(186),
    [anon_sym_or_DASHint] = ACTIONS(186),
    [anon_sym_xor_DASHint] = ACTIONS(186),
    [anon_sym_shl_DASHint] = ACTIONS(186),
    [anon_sym_shr_DASHint] = ACTIONS(186),
    [anon_sym_ushr_DASHint] = ACTIONS(186),
    [anon_sym_add_DASHlong] = ACTIONS(186),
    [anon_sym_sub_DASHlong] = ACTIONS(186),
    [anon_sym_mul_DASHlong] = ACTIONS(186),
    [anon_sym_div_DASHlong] = ACTIONS(186),
    [anon_sym_rem_DASHlong] = ACTIONS(186),
    [anon_sym_and_DASHlong] = ACTIONS(186),
    [anon_sym_or_DASHlong] = ACTIONS(186),
    [anon_sym_xor_DASHlong] = ACTIONS(186),
    [anon_sym_shl_DASHlong] = ACTIONS(186),
    [anon_sym_shr_DASHlong] = ACTIONS(186),
    [anon_sym_ushr_DASHlong] = ACTIONS(186),
    [anon_sym_add_DASHfloat] = ACTIONS(186),
    [anon_sym_sub_DASHfloat] = ACTIONS(186),
    [anon_sym_mul_DASHfloat] = ACTIONS(186),
    [anon_sym_div_DASHfloat] = ACTIONS(186),
    [anon_sym_rem_DASHfloat] = ACTIONS(186),
    [anon_sym_add_DASHdouble] = ACTIONS(186),
    [anon_sym_sub_DASHdouble] = ACTIONS(186),
    [anon_sym_mul_DASHdouble] = ACTIONS(186),
    [anon_sym_div_DASHdouble] = ACTIONS(186),
    [anon_sym_rem_DASHdouble] = ACTIONS(186),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(184),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(184),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(184),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(184),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(184),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(184),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(184),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(184),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(184),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(184),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(184),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(184),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(184),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_execute_DASHinline] = ACTIONS(184),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(184),
    [anon_sym_iget_DASHquick] = ACTIONS(184),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(184),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(184),
    [anon_sym_iput_DASHquick] = ACTIONS(184),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(184),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(184),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(186),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(184),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(186),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(184),
    [anon_sym_rsub_DASHint] = ACTIONS(186),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(184),
    [anon_sym_DOTline] = ACTIONS(184),
    [anon_sym_DOTlocals] = ACTIONS(184),
    [anon_sym_DOTregisters] = ACTIONS(184),
    [anon_sym_DOTcatch] = ACTIONS(186),
    [anon_sym_DOTcatchall] = ACTIONS(184),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(184),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(184),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_end_method] = ACTIONS(188),
    [anon_sym_DOTannotation] = ACTIONS(188),
    [anon_sym_DOTparam] = ACTIONS(188),
    [sym_label] = ACTIONS(188),
    [anon_sym_nop] = ACTIONS(188),
    [anon_sym_move] = ACTIONS(190),
    [anon_sym_move_SLASHfrom16] = ACTIONS(188),
    [anon_sym_move_SLASH16] = ACTIONS(188),
    [anon_sym_move_DASHwide] = ACTIONS(190),
    [anon_sym_move_DASHwide_SLASHfrom16] = ACTIONS(188),
    [anon_sym_move_DASHwide_SLASH16] = ACTIONS(188),
    [anon_sym_move_DASHobject] = ACTIONS(190),
    [anon_sym_move_DASHobject_SLASHfrom16] = ACTIONS(188),
    [anon_sym_move_DASHobject_SLASH16] = ACTIONS(188),
    [anon_sym_move_DASHresult] = ACTIONS(190),
    [anon_sym_move_DASHresult_DASHwide] = ACTIONS(188),
    [anon_sym_move_DASHresult_DASHobject] = ACTIONS(188),
    [anon_sym_move_DASHexception] = ACTIONS(188),
    [anon_sym_return_DASHvoid] = ACTIONS(188),
    [anon_sym_return] = ACTIONS(190),
    [anon_sym_return_DASHwide] = ACTIONS(188),
    [anon_sym_return_DASHobject] = ACTIONS(188),
    [anon_sym_const_SLASH4] = ACTIONS(188),
    [anon_sym_const_SLASH16] = ACTIONS(188),
    [anon_sym_const] = ACTIONS(190),
    [anon_sym_const_SLASHhigh16] = ACTIONS(188),
    [anon_sym_const_DASHwide_SLASH16] = ACTIONS(188),
    [anon_sym_const_DASHwide_SLASH32] = ACTIONS(188),
    [anon_sym_const_DASHwide] = ACTIONS(190),
    [anon_sym_const_DASHwide_SLASHhigh16] = ACTIONS(188),
    [anon_sym_const_DASHstring] = ACTIONS(190),
    [anon_sym_const_DASHstring_DASHjumbo] = ACTIONS(188),
    [anon_sym_const_DASHclass] = ACTIONS(188),
    [anon_sym_monitor_DASHenter] = ACTIONS(188),
    [anon_sym_monitor_DASHexit] = ACTIONS(188),
    [anon_sym_check_DASHcast] = ACTIONS(188),
    [anon_sym_instance_DASHof] = ACTIONS(188),
    [anon_sym_array_DASHlength] = ACTIONS(188),
    [anon_sym_new_DASHinstance] = ACTIONS(188),
    [anon_sym_new_DASHarray] = ACTIONS(188),
    [anon_sym_filled_DASHnew_DASHarray] = ACTIONS(190),
    [anon_sym_filled_DASHnew_DASHarray_SLASHrange] = ACTIONS(188),
    [anon_sym_fill_DASHarray_DASHdata] = ACTIONS(188),
    [anon_sym_throw] = ACTIONS(188),
    [anon_sym_goto] = ACTIONS(190),
    [anon_sym_goto_SLASH16] = ACTIONS(188),
    [anon_sym_goto_SLASH32] = ACTIONS(188),
    [anon_sym_packed_DASHswitch] = ACTIONS(188),
    [anon_sym_sparse_DASHswitch] = ACTIONS(188),
    [anon_sym_cmpl_DASHfloat] = ACTIONS(188),
    [anon_sym_cmpg_DASHfloat] = ACTIONS(188),
    [anon_sym_cmpl_DASHdouble] = ACTIONS(188),
    [anon_sym_cmpg_DASHdouble] = ACTIONS(188),
    [anon_sym_cmp_DASHlong] = ACTIONS(188),
    [anon_sym_if_DASHeq] = ACTIONS(190),
    [anon_sym_if_DASHne] = ACTIONS(190),
    [anon_sym_if_DASHlt] = ACTIONS(190),
    [anon_sym_if_DASHge] = ACTIONS(190),
    [anon_sym_if_DASHgt] = ACTIONS(190),
    [anon_sym_if_DASHle] = ACTIONS(190),
    [anon_sym_if_DASHeqz] = ACTIONS(188),
    [anon_sym_if_DASHnez] = ACTIONS(188),
    [anon_sym_if_DASHltz] = ACTIONS(188),
    [anon_sym_if_DASHgez] = ACTIONS(188),
    [anon_sym_if_DASHgtz] = ACTIONS(188),
    [anon_sym_if_DASHlez] = ACTIONS(188),
    [anon_sym_aget] = ACTIONS(190),
    [anon_sym_aget_DASHwide] = ACTIONS(188),
    [anon_sym_aget_DASHobject] = ACTIONS(188),
    [anon_sym_aget_DASHboolean] = ACTIONS(188),
    [anon_sym_aget_DASHbyte] = ACTIONS(188),
    [anon_sym_aget_DASHchar] = ACTIONS(188),
    [anon_sym_aget_DASHshort] = ACTIONS(188),
    [anon_sym_aput] = ACTIONS(190),
    [anon_sym_aput_DASHwide] = ACTIONS(188),
    [anon_sym_aput_DASHobject] = ACTIONS(188),
    [anon_sym_aput_DASHboolean] = ACTIONS(188),
    [anon_sym_aput_DASHbyte] = ACTIONS(188),
    [anon_sym_aput_DASHchar] = ACTIONS(188),
    [anon_sym_aput_DASHshort] = ACTIONS(188),
    [anon_sym_iget] = ACTIONS(190),
    [anon_sym_iget_DASHwide] = ACTIONS(190),
    [anon_sym_iget_DASHobject] = ACTIONS(190),
    [anon_sym_iget_DASHboolean] = ACTIONS(188),
    [anon_sym_iget_DASHbyte] = ACTIONS(188),
    [anon_sym_iget_DASHchar] = ACTIONS(188),
    [anon_sym_iget_DASHshort] = ACTIONS(188),
    [anon_sym_iput] = ACTIONS(190),
    [anon_sym_iput_DASHwide] = ACTIONS(190),
    [anon_sym_iput_DASHobject] = ACTIONS(190),
    [anon_sym_iput_DASHboolean] = ACTIONS(188),
    [anon_sym_iput_DASHbyte] = ACTIONS(188),
    [anon_sym_iput_DASHchar] = ACTIONS(188),
    [anon_sym_iput_DASHshort] = ACTIONS(188),
    [anon_sym_sget] = ACTIONS(190),
    [anon_sym_sget_DASHwide] = ACTIONS(188),
    [anon_sym_sget_DASHobject] = ACTIONS(188),
    [anon_sym_sget_DASHboolean] = ACTIONS(188),
    [anon_sym_sget_DASHbyte] = ACTIONS(188),
    [anon_sym_sget_DASHchar] = ACTIONS(188),
    [anon_sym_sget_DASHshort] = ACTIONS(188),
    [anon_sym_sput] = ACTIONS(190),
    [anon_sym_sput_DASHwide] = ACTIONS(188),
    [anon_sym_sput_DASHobject] = ACTIONS(188),
    [anon_sym_sput_DASHboolean] = ACTIONS(188),
    [anon_sym_sput_DASHbyte] = ACTIONS(188),
    [anon_sym_sput_DASHchar] = ACTIONS(188),
    [anon_sym_sput_DASHshort] = ACTIONS(188),
    [anon_sym_invoke_DASHvirtual] = ACTIONS(190),
    [anon_sym_invoke_DASHsuper] = ACTIONS(190),
    [anon_sym_invoke_DASHdirect] = ACTIONS(190),
    [anon_sym_invoke_DASHstatic] = ACTIONS(190),
    [anon_sym_invoke_DASHinterface] = ACTIONS(190),
    [anon_sym_invoke_DASHvirtual_SLASHrange] = ACTIONS(188),
    [anon_sym_invoke_DASHsuper_SLASHrange] = ACTIONS(188),
    [anon_sym_invoke_DASHdirect_SLASHrange] = ACTIONS(188),
    [anon_sym_invoke_DASHstatic_SLASHrange] = ACTIONS(188),
    [anon_sym_invoke_DASHinterface_SLASHrange] = ACTIONS(188),
    [anon_sym_neg_DASHint] = ACTIONS(188),
    [anon_sym_not_DASHint] = ACTIONS(188),
    [anon_sym_neg_DASHlong] = ACTIONS(188),
    [anon_sym_not_DASHlong] = ACTIONS(188),
    [anon_sym_neg_DASHfloat] = ACTIONS(188),
    [anon_sym_neg_DASHdouble] = ACTIONS(188),
    [anon_sym_int_DASHto_DASHlong] = ACTIONS(188),
    [anon_sym_int_DASHto_DASHfloat] = ACTIONS(188),
    [anon_sym_int_DASHto_DASHdouble] = ACTIONS(188),
    [anon_sym_long_DASHto_DASHint] = ACTIONS(188),
    [anon_sym_long_DASHto_DASHfloat] = ACTIONS(188),
    [anon_sym_long_DASHto_DASHdouble] = ACTIONS(188),
    [anon_sym_float_DASHto_DASHint] = ACTIONS(188),
    [anon_sym_float_DASHto_DASHlong] = ACTIONS(188),
    [anon_sym_float_DASHto_DASHdouble] = ACTIONS(188),
    [anon_sym_double_DASHto_DASHint] = ACTIONS(188),
    [anon_sym_double_DASHto_DASHlong] = ACTIONS(188),
    [anon_sym_double_DASHto_DASHfloat] = ACTIONS(188),
    [anon_sym_int_DASHto_DASHbyte] = ACTIONS(188),
    [anon_sym_int_DASHto_DASHchar] = ACTIONS(188),
    [anon_sym_int_DASHto_DASHshort] = ACTIONS(188),
    [anon_sym_add_DASHint] = ACTIONS(190),
    [anon_sym_sub_DASHint] = ACTIONS(190),
    [anon_sym_mul_DASHint] = ACTIONS(190),
    [anon_sym_div_DASHint] = ACTIONS(190),
    [anon_sym_rem_DASHint] = ACTIONS(190),
    [anon_sym_and_DASHint] = ACTIONS(190),
    [anon_sym_or_DASHint] = ACTIONS(190),
    [anon_sym_xor_DASHint] = ACTIONS(190),
    [anon_sym_shl_DASHint] = ACTIONS(190),
    [anon_sym_shr_DASHint] = ACTIONS(190),
    [anon_sym_ushr_DASHint] = ACTIONS(190),
    [anon_sym_add_DASHlong] = ACTIONS(190),
    [anon_sym_sub_DASHlong] = ACTIONS(190),
    [anon_sym_mul_DASHlong] = ACTIONS(190),
    [anon_sym_div_DASHlong] = ACTIONS(190),
    [anon_sym_rem_DASHlong] = ACTIONS(190),
    [anon_sym_and_DASHlong] = ACTIONS(190),
    [anon_sym_or_DASHlong] = ACTIONS(190),
    [anon_sym_xor_DASHlong] = ACTIONS(190),
    [anon_sym_shl_DASHlong] = ACTIONS(190),
    [anon_sym_shr_DASHlong] = ACTIONS(190),
    [anon_sym_ushr_DASHlong] = ACTIONS(190),
    [anon_sym_add_DASHfloat] = ACTIONS(190),
    [anon_sym_sub_DASHfloat] = ACTIONS(190),
    [anon_sym_mul_DASHfloat] = ACTIONS(190),
    [anon_sym_div_DASHfloat] = ACTIONS(190),
    [anon_sym_rem_DASHfloat] = ACTIONS(190),
    [anon_sym_add_DASHdouble] = ACTIONS(190),
    [anon_sym_sub_DASHdouble] = ACTIONS(190),
    [anon_sym_mul_DASHdouble] = ACTIONS(190),
    [anon_sym_div_DASHdouble] = ACTIONS(190),
    [anon_sym_rem_DASHdouble] = ACTIONS(190),
    [anon_sym_add_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_sub_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_mul_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_div_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_rem_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_and_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_or_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_xor_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_shl_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_shr_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_ushr_DASHint_SLASH2addr] = ACTIONS(188),
    [anon_sym_add_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_sub_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_mul_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_div_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_rem_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_and_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_or_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_xor_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_shl_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_shr_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_ushr_DASHlong_SLASH2addr] = ACTIONS(188),
    [anon_sym_add_DASHfloat_SLASH2addr] = ACTIONS(188),
    [anon_sym_sub_DASHfloat_SLASH2addr] = ACTIONS(188),
    [anon_sym_mul_DASHfloat_SLASH2addr] = ACTIONS(188),
    [anon_sym_div_DASHfloat_SLASH2addr] = ACTIONS(188),
    [anon_sym_rem_DASHfloat_SLASH2addr] = ACTIONS(188),
    [anon_sym_add_DASHdouble_SLASH2addr] = ACTIONS(188),
    [anon_sym_sub_DASHdouble_SLASH2addr] = ACTIONS(188),
    [anon_sym_mul_DASHdouble_SLASH2addr] = ACTIONS(188),
    [anon_sym_div_DASHdouble_SLASH2addr] = ACTIONS(188),
    [anon_sym_rem_DASHdouble_SLASH2addr] = ACTIONS(188),
    [anon_sym_add_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_sub_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_mul_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_div_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_rem_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_and_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_or_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_xor_DASHint_SLASHlit16] = ACTIONS(188),
    [anon_sym_add_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_sub_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_mul_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_div_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_rem_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_and_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_or_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_xor_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_shl_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_shr_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_ushr_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_execute_DASHinline] = ACTIONS(188),
    [anon_sym_invoke_DASHdirect_DASHempty] = ACTIONS(188),
    [anon_sym_iget_DASHquick] = ACTIONS(188),
    [anon_sym_iget_DASHwide_DASHquick] = ACTIONS(188),
    [anon_sym_iget_DASHobject_DASHquick] = ACTIONS(188),
    [anon_sym_iput_DASHquick] = ACTIONS(188),
    [anon_sym_iput_DASHwide_DASHquick] = ACTIONS(188),
    [anon_sym_iput_DASHobject_DASHquick] = ACTIONS(188),
    [anon_sym_invoke_DASHvirtual_DASHquick] = ACTIONS(190),
    [anon_sym_invoke_DASHvirtual_DASHquick_SLASHrange] = ACTIONS(188),
    [anon_sym_invoke_DASHsuper_DASHquick] = ACTIONS(190),
    [anon_sym_invoke_DASHsuper_DASHquick_SLASHrange] = ACTIONS(188),
    [anon_sym_rsub_DASHint] = ACTIONS(190),
    [anon_sym_rsub_DASHint_SLASHlit8] = ACTIONS(188),
    [anon_sym_DOTline] = ACTIONS(188),
    [anon_sym_DOTlocals] = ACTIONS(188),
    [anon_sym_DOTregisters] = ACTIONS(188),
    [anon_sym_DOTcatch] = ACTIONS(190),
    [anon_sym_DOTcatchall] = ACTIONS(188),
    [anon_sym_DOTpacked_DASHswitch] = ACTIONS(188),
    [anon_sym_DOTsparse_DASHswitch] = ACTIONS(188),
    [anon_sym_DOTarray_DASHdata] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_class_identifier,
    ACTIONS(200), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_comment,
    STATE(154), 1,
      sym_array_type,
    ACTIONS(210), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(202), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(192), 5,
      sym_label,
      sym_variable,
      sym_parameter,
      sym_string_literal,
      sym_null_literal,
    ACTIONS(206), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
    STATE(151), 12,
      sym__statement_argument,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_primitive_type,
      sym_list,
      sym_range,
      sym__literal,
      sym_number_literal,
      sym_boolean_literal,
  [67] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(202), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      sym_class_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      sym_array_type,
    ACTIONS(210), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(212), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      sym_label,
      sym_string_literal,
    ACTIONS(220), 2,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
    ACTIONS(224), 3,
      sym_variable,
      sym_parameter,
      sym_null_literal,
    ACTIONS(206), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
    STATE(161), 12,
      sym__statement_argument,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_primitive_type,
      sym_list,
      sym_range,
      sym__literal,
      sym_number_literal,
      sym_boolean_literal,
  [135] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      sym_class_identifier,
    ACTIONS(232), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(236), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_DOTenum,
    ACTIONS(246), 1,
      sym_string_literal,
    ACTIONS(250), 1,
      sym_null_literal,
    STATE(123), 1,
      sym_subannotation_declaration,
    STATE(132), 1,
      sym_number_literal,
    STATE(203), 1,
      sym_array_type,
    ACTIONS(234), 2,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
    ACTIONS(242), 2,
      sym_variable,
      sym_parameter,
    ACTIONS(244), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 9,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym__literal,
      sym_boolean_literal,
  [202] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(230), 1,
      sym_class_identifier,
    ACTIONS(232), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(236), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_DOTenum,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym_string_literal,
    STATE(123), 1,
      sym_subannotation_declaration,
    STATE(203), 1,
      sym_array_type,
    ACTIONS(234), 2,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
    ACTIONS(244), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(254), 3,
      sym_variable,
      sym_parameter,
      sym_null_literal,
    STATE(131), 10,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym__literal,
      sym_number_literal,
      sym_boolean_literal,
  [265] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_class_identifier,
    ACTIONS(262), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(266), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(268), 1,
      anon_sym_DOTenum,
    ACTIONS(272), 1,
      sym_string_literal,
    ACTIONS(274), 1,
      sym_null_literal,
    STATE(123), 1,
      sym_subannotation_declaration,
    STATE(137), 1,
      sym_annotation_value,
    STATE(211), 1,
      sym_array_type,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(264), 2,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
    ACTIONS(270), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    STATE(138), 11,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym_list,
      sym__literal,
      sym_number_literal,
      sym_boolean_literal,
  [330] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOTsubannotation,
    ACTIONS(230), 1,
      sym_class_identifier,
    ACTIONS(232), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(236), 1,
      aux_sym_method_identifier_token1,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_DOTenum,
    ACTIONS(278), 1,
      sym_string_literal,
    STATE(123), 1,
      sym_subannotation_declaration,
    STATE(203), 1,
      sym_array_type,
    ACTIONS(234), 2,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
    ACTIONS(244), 2,
      aux_sym_number_literal_token1,
      aux_sym_number_literal_token2,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 3,
      sym_variable,
      sym_parameter,
      sym_null_literal,
    STATE(163), 10,
      sym_subannotation_definition,
      sym__identifier,
      sym_field_identifier,
      sym_method_identifier,
      sym_full_field_identifier,
      sym_full_method_identifier,
      sym_enum_reference,
      sym__literal,
      sym_number_literal,
      sym_boolean_literal,
  [390] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(280), 25,
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
  [424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(30), 1,
      sym_method_identifier,
    STATE(42), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(122), 1,
      sym_access_modifiers,
    ACTIONS(234), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(284), 17,
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
  [464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(41), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(288), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(290), 17,
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
  [498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(41), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(296), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
    ACTIONS(298), 17,
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
  [532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_class_identifier,
    STATE(48), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(207), 1,
      sym_access_modifiers,
    ACTIONS(304), 18,
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
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_class_identifier,
    STATE(44), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(306), 18,
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
  [595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_access_modifiers_repeat1,
    STATE(172), 1,
      sym_access_modifiers,
    ACTIONS(309), 18,
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
  [625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(313), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(47), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(311), 17,
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
  [657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(318), 1,
      anon_sym_declared_DASHsynchronized,
    STATE(47), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(315), 17,
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
  [689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_class_identifier,
    STATE(44), 1,
      aux_sym_access_modifiers_repeat1,
    ACTIONS(321), 18,
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
  [719] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      anon_sym_DOTsource,
    ACTIONS(327), 1,
      anon_sym_DOTimplements,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    STATE(4), 1,
      sym_method_declaration,
    STATE(51), 1,
      sym_source_directive,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(59), 2,
      sym_implements_directive,
      aux_sym_class_definition_repeat1,
    STATE(72), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(83), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(102), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [769] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_class_identifier,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [801] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(327), 1,
      anon_sym_DOTimplements,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(57), 2,
      sym_implements_directive,
      aux_sym_class_definition_repeat1,
    STATE(74), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(79), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [845] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_class_identifier,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_class_identifier,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [909] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_class_identifier,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [941] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_class_identifier,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(355), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [973] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_class_identifier,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1005] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(327), 1,
      anon_sym_DOTimplements,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(73), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(82), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(85), 2,
      sym_implements_directive,
      aux_sym_class_definition_repeat1,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_class_identifier,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_method_identifier_repeat1,
    STATE(75), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1081] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(327), 1,
      anon_sym_DOTimplements,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(74), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(79), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(85), 2,
      sym_implements_directive,
      aux_sym_class_definition_repeat1,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 1,
      sym_class_identifier,
    STATE(76), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      sym_class_identifier,
    STATE(179), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(368), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      sym_class_identifier,
    STATE(11), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      sym_class_identifier,
    STATE(3), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1229] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_class_identifier,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(139), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(378), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1255] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      sym_class_identifier,
    STATE(175), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(368), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_class_identifier,
    STATE(140), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(378), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_class_identifier,
    STATE(136), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(378), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      sym_class_identifier,
    STATE(155), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(368), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      sym_class_identifier,
    STATE(180), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(368), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      sym_class_identifier,
    STATE(12), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(337), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_class_identifier,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    STATE(76), 3,
      sym__type,
      sym_array_type,
      sym_primitive_type,
    ACTIONS(378), 9,
      anon_sym_V,
      anon_sym_Z,
      anon_sym_B,
      anon_sym_S,
      anon_sym_C,
      anon_sym_I,
      anon_sym_J,
      anon_sym_F,
      anon_sym_D,
  [1437] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(79), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(80), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1474] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(78), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(80), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(107), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1511] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(118), 1,
      sym_start_annotation,
    STATE(80), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    STATE(82), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 12,
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
  [1566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 11,
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
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 10,
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
  [1599] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(112), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(94), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOTannotation,
    STATE(118), 1,
      sym_start_annotation,
    STATE(80), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    ACTIONS(402), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      sym_end_param,
  [1674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    ACTIONS(409), 2,
      sym_string_literal,
      sym_null_literal,
    ACTIONS(411), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 3,
      sym__literal,
      sym_number_literal,
      sym_boolean_literal,
  [1697] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(107), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOTfield,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(84), 1,
      sym_field_declaration,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
    STATE(105), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(415), 1,
      sym_end_field,
    STATE(118), 1,
      sym_start_annotation,
    STATE(101), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [1773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_DOTimplements,
    STATE(85), 2,
      sym_implements_directive,
      aux_sym_class_definition_repeat1,
    ACTIONS(417), 4,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(422), 1,
      sym_class_identifier,
    STATE(191), 1,
      sym_array_type,
    STATE(109), 2,
      sym_field_identifier,
      sym_full_field_identifier,
  [1810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_field_identifier_token1,
    STATE(99), 1,
      sym_method_identifier,
    STATE(100), 1,
      sym_field_identifier,
    ACTIONS(264), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DOTfield,
    STATE(84), 1,
      sym_field_declaration,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
    STATE(88), 2,
      sym_field_definition,
      aux_sym_class_definition_repeat3,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(431), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym_field_identifier_token1,
    STATE(99), 1,
      sym_method_identifier,
    STATE(100), 1,
      sym_field_identifier,
    ACTIONS(234), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_field_identifier_token1,
    STATE(174), 1,
      sym_method_identifier,
    STATE(177), 1,
      sym_field_identifier,
    ACTIONS(220), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [1896] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      aux_sym_field_identifier_token1,
    ACTIONS(439), 1,
      sym_class_identifier,
    STATE(212), 1,
      sym_array_type,
    STATE(109), 2,
      sym_field_identifier,
      sym_full_field_identifier,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 6,
      ts_builtin_sym_end,
      anon_sym_DOTsource,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [1928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(111), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [1945] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    ACTIONS(443), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(116), 2,
      sym_number_literal,
      aux_sym_array_data_directive_repeat1,
  [1962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    ACTIONS(445), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(114), 1,
      aux_sym_sparse_switch_directive_repeat1,
    STATE(190), 1,
      sym_number_literal,
  [1981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    ACTIONS(447), 1,
      anon_sym_DOTendarray_DASHdata,
    STATE(95), 2,
      sym_number_literal,
      aux_sym_array_data_directive_repeat1,
  [1998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(449), 1,
      sym_end_param,
    STATE(118), 1,
      sym_start_annotation,
    STATE(80), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOTannotation,
    ACTIONS(455), 1,
      sym_end_field,
    STATE(118), 1,
      sym_start_annotation,
    STATE(80), 2,
      sym_annotation_directive,
      aux_sym_class_definition_repeat2,
  [2054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(111), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    ACTIONS(457), 1,
      anon_sym_DOTendsparse_DASHswitch,
    STATE(96), 1,
      aux_sym_sparse_switch_directive_repeat1,
    STATE(190), 1,
      sym_number_literal,
  [2090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_annotation_key,
    ACTIONS(462), 2,
      sym_end_annotation,
      sym_end_subannotation,
    STATE(104), 2,
      sym_annotation_property,
      aux_sym_annotation_directive_repeat1,
  [2105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(111), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(111), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 5,
      ts_builtin_sym_end,
      anon_sym_DOTimplements,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(474), 1,
      anon_sym_DOTmethod,
    STATE(4), 1,
      sym_method_declaration,
    STATE(111), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOTmethod,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_method_declaration,
    STATE(111), 2,
      sym_method_definition,
      aux_sym_class_definition_repeat4,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 5,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_DOTendsparse_DASHswitch,
    ACTIONS(483), 1,
      aux_sym_number_literal_token1,
    ACTIONS(486), 1,
      aux_sym_number_literal_token2,
    STATE(114), 1,
      aux_sym_sparse_switch_directive_repeat1,
    STATE(190), 1,
      sym_number_literal,
  [2247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    STATE(187), 1,
      sym_number_literal,
    ACTIONS(489), 2,
      sym_variable,
      sym_parameter,
  [2264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_DOTendarray_DASHdata,
    ACTIONS(493), 1,
      aux_sym_number_literal_token1,
    ACTIONS(496), 1,
      aux_sym_number_literal_token2,
    STATE(116), 2,
      sym_number_literal,
      aux_sym_array_data_directive_repeat1,
  [2281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 5,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      sym_end_field,
      anon_sym_DOTmethod,
      anon_sym_DOTannotation,
  [2292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_annotation_key,
    ACTIONS(503), 1,
      sym_end_annotation,
    STATE(120), 2,
      sym_annotation_property,
      aux_sym_annotation_directive_repeat1,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_annotation_key,
    ACTIONS(505), 1,
      sym_end_subannotation,
    STATE(104), 2,
      sym_annotation_property,
      aux_sym_annotation_directive_repeat1,
  [2320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_annotation_key,
    ACTIONS(507), 1,
      sym_end_annotation,
    STATE(104), 2,
      sym_annotation_property,
      aux_sym_annotation_directive_repeat1,
  [2334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_DOT_DOT,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_list_repeat1,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_method_identifier,
    ACTIONS(234), 3,
      anon_sym_LTclinit_GT_LPAREN,
      anon_sym_LTinit_GT_LPAREN,
      aux_sym_method_identifier_token1,
  [2362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_annotation_key,
    ACTIONS(515), 1,
      sym_end_subannotation,
    STATE(119), 2,
      sym_annotation_property,
      aux_sym_annotation_directive_repeat1,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(206), 1,
      sym_annotation_visibility,
    ACTIONS(517), 3,
      anon_sym_system,
      anon_sym_build,
      anon_sym_runtime,
  [2388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    ACTIONS(519), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_DASH_GT,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_label,
    ACTIONS(527), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(159), 1,
      aux_sym_packed_switch_directive_repeat1,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_list_repeat1,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_list_repeat1,
  [2459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_list_repeat1,
  [2472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_DOT_DOT,
    ACTIONS(535), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    STATE(28), 1,
      sym_number_literal,
  [2496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    STATE(16), 1,
      sym_number_literal,
  [2509] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_statement_repeat1,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_label,
    ACTIONS(548), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(142), 1,
      aux_sym_packed_switch_directive_repeat1,
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym_number_literal_token2,
    ACTIONS(550), 2,
      anon_sym_DOTendsparse_DASHswitch,
      aux_sym_number_literal_token1,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 3,
      ts_builtin_sym_end,
      anon_sym_DOTfield,
      anon_sym_DOTmethod,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    STATE(22), 1,
      sym_number_literal,
  [2631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    STATE(97), 1,
      sym_number_literal,
  [2644] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_DASH_GT,
  [2657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_list_repeat1,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2679] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_statement_repeat1,
  [2692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      sym_annotation_key,
      sym_end_annotation,
      sym_end_subannotation,
  [2710] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DASH_GT,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_LF,
  [2723] = 3,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2734] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_statement_repeat1,
  [2747] = 3,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_number_literal_token2,
    ACTIONS(407), 1,
      aux_sym_number_literal_token1,
    STATE(127), 1,
      sym_number_literal,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_label,
    ACTIONS(581), 1,
      anon_sym_DOTendpacked_DASHswitch,
    STATE(142), 1,
      aux_sym_packed_switch_directive_repeat1,
  [2784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_list_repeat1,
  [2797] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [2807] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      anon_sym_COMMA,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym_field_identifier_token1,
    STATE(100), 1,
      sym_field_identifier,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      sym_annotation_key,
      sym_end_annotation,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_DOTsuper,
    STATE(49), 1,
      sym_super_directive,
  [2853] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_LF,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_field_identifier_token1,
    STATE(100), 1,
      sym_field_identifier,
  [2873] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(600), 1,
      anon_sym_COMMA,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 2,
      sym_annotation_key,
      sym_end_subannotation,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym_field_identifier_token1,
    STATE(89), 1,
      sym_field_identifier,
  [2909] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      anon_sym_COMMA,
  [2919] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LF,
    ACTIONS(608), 1,
      anon_sym_COMMA,
  [2929] = 3,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym_comment,
  [2939] = 3,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym_comment,
  [2949] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      anon_sym_COMMA,
  [2959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [2967] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_COMMA,
  [2977] = 3,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym_comment,
  [2987] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym_string_literal,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_label,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_label,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_class_identifier,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_DASH_GT,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_class_identifier,
  [3074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT_DOT,
  [3081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_label,
  [3088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_DOT_DOT,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [3102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_label,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_parameter,
  [3116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_label,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_DOTsuper,
  [3130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_class_identifier,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
  [3144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_DASH_GT,
  [3151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_class_identifier,
  [3158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_class_identifier,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_class_identifier,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_class_identifier,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_DOTsuper,
  [3186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_label,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_label,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
  [3207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DASH_GT,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 67,
  [SMALL_STATE(35)] = 135,
  [SMALL_STATE(36)] = 202,
  [SMALL_STATE(37)] = 265,
  [SMALL_STATE(38)] = 330,
  [SMALL_STATE(39)] = 390,
  [SMALL_STATE(40)] = 424,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 498,
  [SMALL_STATE(43)] = 532,
  [SMALL_STATE(44)] = 565,
  [SMALL_STATE(45)] = 595,
  [SMALL_STATE(46)] = 625,
  [SMALL_STATE(47)] = 657,
  [SMALL_STATE(48)] = 689,
  [SMALL_STATE(49)] = 719,
  [SMALL_STATE(50)] = 769,
  [SMALL_STATE(51)] = 801,
  [SMALL_STATE(52)] = 845,
  [SMALL_STATE(53)] = 877,
  [SMALL_STATE(54)] = 909,
  [SMALL_STATE(55)] = 941,
  [SMALL_STATE(56)] = 973,
  [SMALL_STATE(57)] = 1005,
  [SMALL_STATE(58)] = 1049,
  [SMALL_STATE(59)] = 1081,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1151,
  [SMALL_STATE(62)] = 1177,
  [SMALL_STATE(63)] = 1203,
  [SMALL_STATE(64)] = 1229,
  [SMALL_STATE(65)] = 1255,
  [SMALL_STATE(66)] = 1281,
  [SMALL_STATE(67)] = 1307,
  [SMALL_STATE(68)] = 1333,
  [SMALL_STATE(69)] = 1359,
  [SMALL_STATE(70)] = 1385,
  [SMALL_STATE(71)] = 1411,
  [SMALL_STATE(72)] = 1437,
  [SMALL_STATE(73)] = 1474,
  [SMALL_STATE(74)] = 1511,
  [SMALL_STATE(75)] = 1548,
  [SMALL_STATE(76)] = 1566,
  [SMALL_STATE(77)] = 1583,
  [SMALL_STATE(78)] = 1599,
  [SMALL_STATE(79)] = 1626,
  [SMALL_STATE(80)] = 1653,
  [SMALL_STATE(81)] = 1674,
  [SMALL_STATE(82)] = 1697,
  [SMALL_STATE(83)] = 1724,
  [SMALL_STATE(84)] = 1751,
  [SMALL_STATE(85)] = 1773,
  [SMALL_STATE(86)] = 1790,
  [SMALL_STATE(87)] = 1810,
  [SMALL_STATE(88)] = 1828,
  [SMALL_STATE(89)] = 1846,
  [SMALL_STATE(90)] = 1860,
  [SMALL_STATE(91)] = 1878,
  [SMALL_STATE(92)] = 1896,
  [SMALL_STATE(93)] = 1916,
  [SMALL_STATE(94)] = 1928,
  [SMALL_STATE(95)] = 1945,
  [SMALL_STATE(96)] = 1962,
  [SMALL_STATE(97)] = 1981,
  [SMALL_STATE(98)] = 1998,
  [SMALL_STATE(99)] = 2015,
  [SMALL_STATE(100)] = 2026,
  [SMALL_STATE(101)] = 2037,
  [SMALL_STATE(102)] = 2054,
  [SMALL_STATE(103)] = 2071,
  [SMALL_STATE(104)] = 2090,
  [SMALL_STATE(105)] = 2105,
  [SMALL_STATE(106)] = 2122,
  [SMALL_STATE(107)] = 2133,
  [SMALL_STATE(108)] = 2150,
  [SMALL_STATE(109)] = 2161,
  [SMALL_STATE(110)] = 2172,
  [SMALL_STATE(111)] = 2183,
  [SMALL_STATE(112)] = 2200,
  [SMALL_STATE(113)] = 2217,
  [SMALL_STATE(114)] = 2228,
  [SMALL_STATE(115)] = 2247,
  [SMALL_STATE(116)] = 2264,
  [SMALL_STATE(117)] = 2281,
  [SMALL_STATE(118)] = 2292,
  [SMALL_STATE(119)] = 2306,
  [SMALL_STATE(120)] = 2320,
  [SMALL_STATE(121)] = 2334,
  [SMALL_STATE(122)] = 2350,
  [SMALL_STATE(123)] = 2362,
  [SMALL_STATE(124)] = 2376,
  [SMALL_STATE(125)] = 2388,
  [SMALL_STATE(126)] = 2400,
  [SMALL_STATE(127)] = 2411,
  [SMALL_STATE(128)] = 2424,
  [SMALL_STATE(129)] = 2437,
  [SMALL_STATE(130)] = 2446,
  [SMALL_STATE(131)] = 2459,
  [SMALL_STATE(132)] = 2472,
  [SMALL_STATE(133)] = 2483,
  [SMALL_STATE(134)] = 2496,
  [SMALL_STATE(135)] = 2509,
  [SMALL_STATE(136)] = 2522,
  [SMALL_STATE(137)] = 2531,
  [SMALL_STATE(138)] = 2540,
  [SMALL_STATE(139)] = 2549,
  [SMALL_STATE(140)] = 2558,
  [SMALL_STATE(141)] = 2567,
  [SMALL_STATE(142)] = 2576,
  [SMALL_STATE(143)] = 2589,
  [SMALL_STATE(144)] = 2600,
  [SMALL_STATE(145)] = 2609,
  [SMALL_STATE(146)] = 2618,
  [SMALL_STATE(147)] = 2631,
  [SMALL_STATE(148)] = 2644,
  [SMALL_STATE(149)] = 2657,
  [SMALL_STATE(150)] = 2670,
  [SMALL_STATE(151)] = 2679,
  [SMALL_STATE(152)] = 2692,
  [SMALL_STATE(153)] = 2701,
  [SMALL_STATE(154)] = 2710,
  [SMALL_STATE(155)] = 2723,
  [SMALL_STATE(156)] = 2734,
  [SMALL_STATE(157)] = 2747,
  [SMALL_STATE(158)] = 2758,
  [SMALL_STATE(159)] = 2771,
  [SMALL_STATE(160)] = 2784,
  [SMALL_STATE(161)] = 2797,
  [SMALL_STATE(162)] = 2807,
  [SMALL_STATE(163)] = 2817,
  [SMALL_STATE(164)] = 2825,
  [SMALL_STATE(165)] = 2835,
  [SMALL_STATE(166)] = 2843,
  [SMALL_STATE(167)] = 2853,
  [SMALL_STATE(168)] = 2863,
  [SMALL_STATE(169)] = 2873,
  [SMALL_STATE(170)] = 2883,
  [SMALL_STATE(171)] = 2891,
  [SMALL_STATE(172)] = 2899,
  [SMALL_STATE(173)] = 2909,
  [SMALL_STATE(174)] = 2919,
  [SMALL_STATE(175)] = 2929,
  [SMALL_STATE(176)] = 2939,
  [SMALL_STATE(177)] = 2949,
  [SMALL_STATE(178)] = 2959,
  [SMALL_STATE(179)] = 2967,
  [SMALL_STATE(180)] = 2977,
  [SMALL_STATE(181)] = 2987,
  [SMALL_STATE(182)] = 2997,
  [SMALL_STATE(183)] = 3004,
  [SMALL_STATE(184)] = 3011,
  [SMALL_STATE(185)] = 3018,
  [SMALL_STATE(186)] = 3025,
  [SMALL_STATE(187)] = 3032,
  [SMALL_STATE(188)] = 3039,
  [SMALL_STATE(189)] = 3046,
  [SMALL_STATE(190)] = 3053,
  [SMALL_STATE(191)] = 3060,
  [SMALL_STATE(192)] = 3067,
  [SMALL_STATE(193)] = 3074,
  [SMALL_STATE(194)] = 3081,
  [SMALL_STATE(195)] = 3088,
  [SMALL_STATE(196)] = 3095,
  [SMALL_STATE(197)] = 3102,
  [SMALL_STATE(198)] = 3109,
  [SMALL_STATE(199)] = 3116,
  [SMALL_STATE(200)] = 3123,
  [SMALL_STATE(201)] = 3130,
  [SMALL_STATE(202)] = 3137,
  [SMALL_STATE(203)] = 3144,
  [SMALL_STATE(204)] = 3151,
  [SMALL_STATE(205)] = 3158,
  [SMALL_STATE(206)] = 3165,
  [SMALL_STATE(207)] = 3172,
  [SMALL_STATE(208)] = 3179,
  [SMALL_STATE(209)] = 3186,
  [SMALL_STATE(210)] = 3193,
  [SMALL_STATE(211)] = 3200,
  [SMALL_STATE(212)] = 3207,
  [SMALL_STATE(213)] = 3214,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 8),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(124),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(198),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(21),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(39),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(134),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(133),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(146),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(188),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(182),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(158),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(103),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 2), SHIFT_REPEAT(147),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_directive, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_directive, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_directive, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_directive, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_directive, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_directive, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 3, .production_id = 7),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 3, .production_id = 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_identifier, 4, .production_id = 12),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_identifier, 4, .production_id = 12),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_param, 2, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_param, 2, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_directive, 4, .production_id = 13),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_directive, 4, .production_id = 13),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_data_directive, 3, .production_id = 9),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_data_directive, 3, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_directive, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_directive, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_directive, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_directive, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_directive, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_directive, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_definition_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registers_directive, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registers_directive, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_directive, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_directive, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sparse_switch_directive, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sparse_switch_directive, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_directive, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_directive, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 10),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, .production_id = 10),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_switch_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_switch_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locals_directive, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locals_directive, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 14),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 14),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_directive, 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_directive, 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catchall_directive, 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catchall_directive, 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(41),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(41),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifiers, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(44),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(47),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_modifiers_repeat1, 2), SHIFT_REPEAT(47),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(63),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 2), SHIFT_REPEAT(2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_identifier_repeat1, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(124),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(192),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat3, 2), SHIFT_REPEAT(45),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super_directive, 2, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_method_identifier, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_field_identifier, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_directive_repeat1, 2), SHIFT_REPEAT(213),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_directive_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_directive, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_directive, 2, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_reference, 2, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subannotation_definition, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat4, 2), SHIFT_REPEAT(40),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subannotation_definition, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_directive_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sparse_switch_directive_repeat1, 2), SHIFT_REPEAT(7),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sparse_switch_directive_repeat1, 2), SHIFT_REPEAT(7),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_data_directive_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_data_directive_repeat1, 2), SHIFT_REPEAT(7),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_data_directive_repeat1, 2), SHIFT_REPEAT(7),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 3, .production_id = 11),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packed_switch_directive_repeat1, 2), SHIFT_REPEAT(142),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packed_switch_directive_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sparse_switch_directive_repeat1, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sparse_switch_directive_repeat1, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_argument, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_argument, 1),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(34),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(38),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_annotation, 3, .production_id = 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, .production_id = 15),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 15),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subannotation_declaration, 2, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_method_identifier, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_field_identifier, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3, .production_id = 6),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 2),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [624] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_directive, 3, .production_id = 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_visibility, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_directive, 2, .production_id = 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
