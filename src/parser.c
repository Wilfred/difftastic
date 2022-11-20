#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 2
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  sym_lower_case_identifier = 1,
  anon_sym_LPAREN_STAR = 2,
  anon_sym_STAR_RPAREN = 3,
  sym_line_comment = 4,
  anon_sym_let = 5,
  anon_sym_EQ = 6,
  sym_wildcard_pattern = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_char_constant_expr_token1 = 9,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 10,
  aux_sym_string_constant_expr_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_constant_expr_token2 = 13,
  sym_number_literal = 14,
  sym_string_escape = 15,
  sym_invalid_string_escape = 16,
  sym__virtual_open_section = 17,
  sym__virtual_end_section = 18,
  sym__block_comment_content = 19,
  sym_file = 20,
  sym_block_comment = 21,
  aux_sym__top_decl_list = 22,
  sym_value_declaration = 23,
  sym_function_declaration_left = 24,
  sym_pattern = 25,
  sym__expression = 26,
  sym__const_expression = 27,
  sym_char_constant_expr = 28,
  sym_number_constant_expr = 29,
  sym_string_constant_expr = 30,
  aux_sym_function_declaration_left_repeat1 = 31,
  aux_sym_string_constant_expr_repeat1 = 32,
  aux_sym_string_constant_expr_repeat2 = 33,
  alias_sym_close_char = 34,
  alias_sym_close_quote = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lower_case_identifier] = "lower_case_identifier",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_STAR_RPAREN] = "*)",
  [sym_line_comment] = "line_comment",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [sym_wildcard_pattern] = "wildcard_pattern",
  [anon_sym_SQUOTE] = "open_char",
  [aux_sym_char_constant_expr_token1] = "regular_string_part",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "open_quote",
  [aux_sym_string_constant_expr_token1] = "regular_string_part",
  [anon_sym_DQUOTE] = "open_quote",
  [aux_sym_string_constant_expr_token2] = "regular_string_part",
  [sym_number_literal] = "number_literal",
  [sym_string_escape] = "string_escape",
  [sym_invalid_string_escape] = "invalid_string_escape",
  [sym__virtual_open_section] = "_virtual_open_section",
  [sym__virtual_end_section] = "_virtual_end_section",
  [sym__block_comment_content] = "_block_comment_content",
  [sym_file] = "file",
  [sym_block_comment] = "block_comment",
  [aux_sym__top_decl_list] = "_top_decl_list",
  [sym_value_declaration] = "value_declaration",
  [sym_function_declaration_left] = "function_declaration_left",
  [sym_pattern] = "pattern",
  [sym__expression] = "_expression",
  [sym__const_expression] = "_const_expression",
  [sym_char_constant_expr] = "char_constant_expr",
  [sym_number_constant_expr] = "number_constant_expr",
  [sym_string_constant_expr] = "string_constant_expr",
  [aux_sym_function_declaration_left_repeat1] = "function_declaration_left_repeat1",
  [aux_sym_string_constant_expr_repeat1] = "string_constant_expr_repeat1",
  [aux_sym_string_constant_expr_repeat2] = "string_constant_expr_repeat2",
  [alias_sym_close_char] = "close_char",
  [alias_sym_close_quote] = "close_quote",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lower_case_identifier] = sym_lower_case_identifier,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_wildcard_pattern] = sym_wildcard_pattern,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_constant_expr_token1] = aux_sym_char_constant_expr_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_string_constant_expr_token1] = aux_sym_char_constant_expr_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_string_constant_expr_token2] = aux_sym_char_constant_expr_token1,
  [sym_number_literal] = sym_number_literal,
  [sym_string_escape] = sym_string_escape,
  [sym_invalid_string_escape] = sym_invalid_string_escape,
  [sym__virtual_open_section] = sym__virtual_open_section,
  [sym__virtual_end_section] = sym__virtual_end_section,
  [sym__block_comment_content] = sym__block_comment_content,
  [sym_file] = sym_file,
  [sym_block_comment] = sym_block_comment,
  [aux_sym__top_decl_list] = aux_sym__top_decl_list,
  [sym_value_declaration] = sym_value_declaration,
  [sym_function_declaration_left] = sym_function_declaration_left,
  [sym_pattern] = sym_pattern,
  [sym__expression] = sym__expression,
  [sym__const_expression] = sym__const_expression,
  [sym_char_constant_expr] = sym_char_constant_expr,
  [sym_number_constant_expr] = sym_number_constant_expr,
  [sym_string_constant_expr] = sym_string_constant_expr,
  [aux_sym_function_declaration_left_repeat1] = aux_sym_function_declaration_left_repeat1,
  [aux_sym_string_constant_expr_repeat1] = aux_sym_string_constant_expr_repeat1,
  [aux_sym_string_constant_expr_repeat2] = aux_sym_string_constant_expr_repeat2,
  [alias_sym_close_char] = alias_sym_close_char,
  [alias_sym_close_quote] = alias_sym_close_quote,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lower_case_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_char_constant_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_constant_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_constant_expr_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__virtual_open_section] = {
    .visible = false,
    .named = true,
  },
  [sym__virtual_end_section] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment_content] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__top_decl_list] = {
    .visible = false,
    .named = false,
  },
  [sym_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration_left] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__const_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_char_constant_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_number_constant_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_string_constant_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_declaration_left_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_constant_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_constant_expr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_close_char] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_close_quote] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_close_quote,
  },
  [3] = {
    [2] = alias_sym_close_char,
  },
  [4] = {
    [2] = alias_sym_close_quote,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_lower_case_identifier_character_set_1(int32_t c) {
  return (c < 7769
    ? (c < 997
      ? (c < 432
        ? (c < 331
          ? (c < 289
            ? (c < 269
              ? (c < 259
                ? (c < 223
                  ? (c < 181
                    ? (c >= 'a' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c < 257
                    ? (c >= 248 && c <= 255)
                    : c <= 257)))
                : (c <= 259 || (c < 265
                  ? (c < 263
                    ? c == 261
                    : c <= 263)
                  : (c <= 265 || c == 267))))
              : (c <= 269 || (c < 279
                ? (c < 275
                  ? (c < 273
                    ? c == 271
                    : c <= 273)
                  : (c <= 275 || c == 277))
                : (c <= 279 || (c < 285
                  ? (c < 283
                    ? c == 281
                    : c <= 283)
                  : (c <= 285 || c == 287))))))
            : (c <= 289 || (c < 309
              ? (c < 299
                ? (c < 295
                  ? (c < 293
                    ? c == 291
                    : c <= 293)
                  : (c <= 295 || c == 297))
                : (c <= 299 || (c < 305
                  ? (c < 303
                    ? c == 301
                    : c <= 303)
                  : (c <= 305 || c == 307))))
              : (c <= 309 || (c < 320
                ? (c < 316
                  ? (c < 314
                    ? (c >= 311 && c <= 312)
                    : c <= 314)
                  : (c <= 316 || c == 318))
                : (c <= 320 || (c < 326
                  ? (c < 324
                    ? c == 322
                    : c <= 324)
                  : (c <= 326 || (c >= 328 && c <= 329)))))))))
          : (c <= 331 || (c < 371
            ? (c < 351
              ? (c < 341
                ? (c < 337
                  ? (c < 335
                    ? c == 333
                    : c <= 335)
                  : (c <= 337 || c == 339))
                : (c <= 341 || (c < 347
                  ? (c < 345
                    ? c == 343
                    : c <= 345)
                  : (c <= 347 || c == 349))))
              : (c <= 351 || (c < 361
                ? (c < 357
                  ? (c < 355
                    ? c == 353
                    : c <= 355)
                  : (c <= 357 || c == 359))
                : (c <= 361 || (c < 367
                  ? (c < 365
                    ? c == 363
                    : c <= 365)
                  : (c <= 367 || c == 369))))))
            : (c <= 371 || (c < 402
              ? (c < 382
                ? (c < 378
                  ? (c < 375
                    ? c == 373
                    : c <= 375)
                  : (c <= 378 || c == 380))
                : (c <= 384 || (c < 392
                  ? (c < 389
                    ? c == 387
                    : c <= 389)
                  : (c <= 392 || (c >= 396 && c <= 397)))))
              : (c <= 402 || (c < 419
                ? (c < 414
                  ? (c < 409
                    ? c == 405
                    : c <= 411)
                  : (c <= 414 || c == 417))
                : (c <= 419 || (c < 426
                  ? (c < 424
                    ? c == 421
                    : c <= 424)
                  : (c <= 427 || c == 429))))))))))
        : (c <= 432 || (c < 531
          ? (c < 487
            ? (c < 466
              ? (c < 454
                ? (c < 441
                  ? (c < 438
                    ? c == 436
                    : c <= 438)
                  : (c <= 442 || (c >= 445 && c <= 447)))
                : (c <= 454 || (c < 462
                  ? (c < 460
                    ? c == 457
                    : c <= 460)
                  : (c <= 462 || c == 464))))
              : (c <= 466 || (c < 476
                ? (c < 472
                  ? (c < 470
                    ? c == 468
                    : c <= 470)
                  : (c <= 472 || c == 474))
                : (c <= 477 || (c < 483
                  ? (c < 481
                    ? c == 479
                    : c <= 481)
                  : (c <= 483 || c == 485))))))
            : (c <= 487 || (c < 511
              ? (c < 499
                ? (c < 493
                  ? (c < 491
                    ? c == 489
                    : c <= 491)
                  : (c <= 493 || (c >= 495 && c <= 496)))
                : (c <= 499 || (c < 507
                  ? (c < 505
                    ? c == 501
                    : c <= 505)
                  : (c <= 507 || c == 509))))
              : (c <= 511 || (c < 521
                ? (c < 517
                  ? (c < 515
                    ? c == 513
                    : c <= 515)
                  : (c <= 517 || c == 519))
                : (c <= 521 || (c < 527
                  ? (c < 525
                    ? c == 523
                    : c <= 525)
                  : (c <= 527 || c == 529))))))))
          : (c <= 531 || (c < 583
            ? (c < 551
              ? (c < 541
                ? (c < 537
                  ? (c < 535
                    ? c == 533
                    : c <= 535)
                  : (c <= 537 || c == 539))
                : (c <= 541 || (c < 547
                  ? (c < 545
                    ? c == 543
                    : c <= 545)
                  : (c <= 547 || c == 549))))
              : (c <= 551 || (c < 561
                ? (c < 557
                  ? (c < 555
                    ? c == 553
                    : c <= 555)
                  : (c <= 557 || c == 559))
                : (c <= 561 || (c < 575
                  ? (c < 572
                    ? (c >= 563 && c <= 569)
                    : c <= 572)
                  : (c <= 576 || c == 578))))))
            : (c <= 583 || (c < 912
              ? (c < 661
                ? (c < 589
                  ? (c < 587
                    ? c == 585
                    : c <= 587)
                  : (c <= 589 || (c >= 591 && c <= 659)))
                : (c <= 687 || (c < 887
                  ? (c < 883
                    ? c == 881
                    : c <= 883)
                  : (c <= 887 || (c >= 891 && c <= 893)))))
              : (c <= 912 || (c < 987
                ? (c < 981
                  ? (c < 976
                    ? (c >= 940 && c <= 974)
                    : c <= 977)
                  : (c <= 983 || c == 985))
                : (c <= 987 || (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))))))))))))
      : (c <= 997 || (c < 1273
        ? (c < 1191
          ? (c < 1143
            ? (c < 1123
              ? (c < 1013
                ? (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || (c < 1007
                    ? c == 1005
                    : c <= 1011)))
                : (c <= 1013 || (c < 1072
                  ? (c < 1019
                    ? c == 1016
                    : c <= 1020)
                  : (c <= 1119 || c == 1121))))
              : (c <= 1123 || (c < 1133
                ? (c < 1129
                  ? (c < 1127
                    ? c == 1125
                    : c <= 1127)
                  : (c <= 1129 || c == 1131))
                : (c <= 1133 || (c < 1139
                  ? (c < 1137
                    ? c == 1135
                    : c <= 1137)
                  : (c <= 1139 || c == 1141))))))
            : (c <= 1143 || (c < 1171
              ? (c < 1153
                ? (c < 1149
                  ? (c < 1147
                    ? c == 1145
                    : c <= 1147)
                  : (c <= 1149 || c == 1151))
                : (c <= 1153 || (c < 1167
                  ? (c < 1165
                    ? c == 1163
                    : c <= 1165)
                  : (c <= 1167 || c == 1169))))
              : (c <= 1171 || (c < 1181
                ? (c < 1177
                  ? (c < 1175
                    ? c == 1173
                    : c <= 1175)
                  : (c <= 1177 || c == 1179))
                : (c <= 1181 || (c < 1187
                  ? (c < 1185
                    ? c == 1183
                    : c <= 1185)
                  : (c <= 1187 || c == 1189))))))))
          : (c <= 1191 || (c < 1233
            ? (c < 1211
              ? (c < 1201
                ? (c < 1197
                  ? (c < 1195
                    ? c == 1193
                    : c <= 1195)
                  : (c <= 1197 || c == 1199))
                : (c <= 1201 || (c < 1207
                  ? (c < 1205
                    ? c == 1203
                    : c <= 1205)
                  : (c <= 1207 || c == 1209))))
              : (c <= 1211 || (c < 1222
                ? (c < 1218
                  ? (c < 1215
                    ? c == 1213
                    : c <= 1215)
                  : (c <= 1218 || c == 1220))
                : (c <= 1222 || (c < 1228
                  ? (c < 1226
                    ? c == 1224
                    : c <= 1226)
                  : (c <= 1228 || (c >= 1230 && c <= 1231)))))))
            : (c <= 1233 || (c < 1253
              ? (c < 1243
                ? (c < 1239
                  ? (c < 1237
                    ? c == 1235
                    : c <= 1237)
                  : (c <= 1239 || c == 1241))
                : (c <= 1243 || (c < 1249
                  ? (c < 1247
                    ? c == 1245
                    : c <= 1247)
                  : (c <= 1249 || c == 1251))))
              : (c <= 1253 || (c < 1263
                ? (c < 1259
                  ? (c < 1257
                    ? c == 1255
                    : c <= 1257)
                  : (c <= 1259 || c == 1261))
                : (c <= 1263 || (c < 1269
                  ? (c < 1267
                    ? c == 1265
                    : c <= 1267)
                  : (c <= 1269 || c == 1271))))))))))
        : (c <= 1273 || (c < 7689
          ? (c < 1313
            ? (c < 1293
              ? (c < 1283
                ? (c < 1279
                  ? (c < 1277
                    ? c == 1275
                    : c <= 1277)
                  : (c <= 1279 || c == 1281))
                : (c <= 1283 || (c < 1289
                  ? (c < 1287
                    ? c == 1285
                    : c <= 1287)
                  : (c <= 1289 || c == 1291))))
              : (c <= 1293 || (c < 1303
                ? (c < 1299
                  ? (c < 1297
                    ? c == 1295
                    : c <= 1297)
                  : (c <= 1299 || c == 1301))
                : (c <= 1303 || (c < 1309
                  ? (c < 1307
                    ? c == 1305
                    : c <= 1307)
                  : (c <= 1309 || c == 1311))))))
            : (c <= 1313 || (c < 4349
              ? (c < 1323
                ? (c < 1319
                  ? (c < 1317
                    ? c == 1315
                    : c <= 1317)
                  : (c <= 1319 || c == 1321))
                : (c <= 1323 || (c < 1376
                  ? (c < 1327
                    ? c == 1325
                    : c <= 1327)
                  : (c <= 1416 || (c >= 4304 && c <= 4346)))))
              : (c <= 4351 || (c < 7545
                ? (c < 7424
                  ? (c < 7296
                    ? (c >= 5112 && c <= 5117)
                    : c <= 7304)
                  : (c <= 7467 || (c >= 7531 && c <= 7543)))
                : (c <= 7578 || (c < 7685
                  ? (c < 7683
                    ? c == 7681
                    : c <= 7683)
                  : (c <= 7685 || c == 7687))))))))
          : (c <= 7689 || (c < 7729
            ? (c < 7709
              ? (c < 7699
                ? (c < 7695
                  ? (c < 7693
                    ? c == 7691
                    : c <= 7693)
                  : (c <= 7695 || c == 7697))
                : (c <= 7699 || (c < 7705
                  ? (c < 7703
                    ? c == 7701
                    : c <= 7703)
                  : (c <= 7705 || c == 7707))))
              : (c <= 7709 || (c < 7719
                ? (c < 7715
                  ? (c < 7713
                    ? c == 7711
                    : c <= 7713)
                  : (c <= 7715 || c == 7717))
                : (c <= 7719 || (c < 7725
                  ? (c < 7723
                    ? c == 7721
                    : c <= 7723)
                  : (c <= 7725 || c == 7727))))))
            : (c <= 7729 || (c < 7749
              ? (c < 7739
                ? (c < 7735
                  ? (c < 7733
                    ? c == 7731
                    : c <= 7733)
                  : (c <= 7735 || c == 7737))
                : (c <= 7739 || (c < 7745
                  ? (c < 7743
                    ? c == 7741
                    : c <= 7743)
                  : (c <= 7745 || c == 7747))))
              : (c <= 7749 || (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))))))))))))
    : (c <= 7769 || (c < 11477
      ? (c < 7968
        ? (c < 7859
          ? (c < 7811
            ? (c < 7791
              ? (c < 7781
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || (c < 7779
                    ? c == 7777
                    : c <= 7779)))
                : (c <= 7781 || (c < 7787
                  ? (c < 7785
                    ? c == 7783
                    : c <= 7785)
                  : (c <= 7787 || c == 7789))))
              : (c <= 7791 || (c < 7801
                ? (c < 7797
                  ? (c < 7795
                    ? c == 7793
                    : c <= 7795)
                  : (c <= 7797 || c == 7799))
                : (c <= 7801 || (c < 7807
                  ? (c < 7805
                    ? c == 7803
                    : c <= 7805)
                  : (c <= 7807 || c == 7809))))))
            : (c <= 7811 || (c < 7839
              ? (c < 7821
                ? (c < 7817
                  ? (c < 7815
                    ? c == 7813
                    : c <= 7815)
                  : (c <= 7817 || c == 7819))
                : (c <= 7821 || (c < 7827
                  ? (c < 7825
                    ? c == 7823
                    : c <= 7825)
                  : (c <= 7827 || (c >= 7829 && c <= 7837)))))
              : (c <= 7839 || (c < 7849
                ? (c < 7845
                  ? (c < 7843
                    ? c == 7841
                    : c <= 7843)
                  : (c <= 7845 || c == 7847))
                : (c <= 7849 || (c < 7855
                  ? (c < 7853
                    ? c == 7851
                    : c <= 7853)
                  : (c <= 7855 || c == 7857))))))))
          : (c <= 7859 || (c < 7899
            ? (c < 7879
              ? (c < 7869
                ? (c < 7865
                  ? (c < 7863
                    ? c == 7861
                    : c <= 7863)
                  : (c <= 7865 || c == 7867))
                : (c <= 7869 || (c < 7875
                  ? (c < 7873
                    ? c == 7871
                    : c <= 7873)
                  : (c <= 7875 || c == 7877))))
              : (c <= 7879 || (c < 7889
                ? (c < 7885
                  ? (c < 7883
                    ? c == 7881
                    : c <= 7883)
                  : (c <= 7885 || c == 7887))
                : (c <= 7889 || (c < 7895
                  ? (c < 7893
                    ? c == 7891
                    : c <= 7893)
                  : (c <= 7895 || c == 7897))))))
            : (c <= 7899 || (c < 7919
              ? (c < 7909
                ? (c < 7905
                  ? (c < 7903
                    ? c == 7901
                    : c <= 7903)
                  : (c <= 7905 || c == 7907))
                : (c <= 7909 || (c < 7915
                  ? (c < 7913
                    ? c == 7911
                    : c <= 7913)
                  : (c <= 7915 || c == 7917))))
              : (c <= 7919 || (c < 7929
                ? (c < 7925
                  ? (c < 7923
                    ? c == 7921
                    : c <= 7923)
                  : (c <= 7925 || c == 7927))
                : (c <= 7929 || (c < 7935
                  ? (c < 7933
                    ? c == 7931
                    : c <= 7933)
                  : (c <= 7943 || (c >= 7952 && c <= 7957)))))))))))
        : (c <= 7975 || (c < 11397
          ? (c < 8462
            ? (c < 8118
              ? (c < 8048
                ? (c < 8016
                  ? (c < 8000
                    ? (c >= 7984 && c <= 7991)
                    : c <= 8005)
                  : (c <= 8023 || (c >= 8032 && c <= 8039)))
                : (c <= 8061 || (c < 8096
                  ? (c < 8080
                    ? (c >= 8064 && c <= 8071)
                    : c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8119 || (c < 8150
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8135 || (c >= 8144 && c <= 8147)))
                : (c <= 8151 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8167)
                    : c <= 8180)
                  : (c <= 8183 || c == 8458))))))
            : (c <= 8463 || (c < 11361
              ? (c < 8508
                ? (c < 8500
                  ? (c < 8495
                    ? c == 8467
                    : c <= 8495)
                  : (c <= 8500 || c == 8505))
                : (c <= 8509 || (c < 8580
                  ? (c < 8526
                    ? (c >= 8518 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8580 || (c >= 11312 && c <= 11358)))))
              : (c <= 11361 || (c < 11377
                ? (c < 11370
                  ? (c < 11368
                    ? (c >= 11365 && c <= 11366)
                    : c <= 11368)
                  : (c <= 11370 || c == 11372))
                : (c <= 11377 || (c < 11393
                  ? (c < 11382
                    ? (c >= 11379 && c <= 11380)
                    : c <= 11387)
                  : (c <= 11393 || c == 11395))))))))
          : (c <= 11397 || (c < 11437
            ? (c < 11417
              ? (c < 11407
                ? (c < 11403
                  ? (c < 11401
                    ? c == 11399
                    : c <= 11401)
                  : (c <= 11403 || c == 11405))
                : (c <= 11407 || (c < 11413
                  ? (c < 11411
                    ? c == 11409
                    : c <= 11411)
                  : (c <= 11413 || c == 11415))))
              : (c <= 11417 || (c < 11427
                ? (c < 11423
                  ? (c < 11421
                    ? c == 11419
                    : c <= 11421)
                  : (c <= 11423 || c == 11425))
                : (c <= 11427 || (c < 11433
                  ? (c < 11431
                    ? c == 11429
                    : c <= 11431)
                  : (c <= 11433 || c == 11435))))))
            : (c <= 11437 || (c < 11457
              ? (c < 11447
                ? (c < 11443
                  ? (c < 11441
                    ? c == 11439
                    : c <= 11441)
                  : (c <= 11443 || c == 11445))
                : (c <= 11447 || (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))))
              : (c <= 11457 || (c < 11467
                ? (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))
                : (c <= 11467 || (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))))))))))))
      : (c <= 11477 || (c < 42847
        ? (c < 42631
          ? (c < 42573
            ? (c < 11507
              ? (c < 11487
                ? (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))
                : (c <= 11487 || (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))))
              : (c <= 11507 || (c < 42563
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))
                : (c <= 42563 || (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))))))
            : (c <= 42573 || (c < 42593
              ? (c < 42583
                ? (c < 42579
                  ? (c < 42577
                    ? c == 42575
                    : c <= 42577)
                  : (c <= 42579 || c == 42581))
                : (c <= 42583 || (c < 42589
                  ? (c < 42587
                    ? c == 42585
                    : c <= 42587)
                  : (c <= 42589 || c == 42591))))
              : (c <= 42593 || (c < 42603
                ? (c < 42599
                  ? (c < 42597
                    ? c == 42595
                    : c <= 42597)
                  : (c <= 42599 || c == 42601))
                : (c <= 42603 || (c < 42627
                  ? (c < 42625
                    ? c == 42605
                    : c <= 42625)
                  : (c <= 42627 || c == 42629))))))))
          : (c <= 42631 || (c < 42807
            ? (c < 42651
              ? (c < 42641
                ? (c < 42637
                  ? (c < 42635
                    ? c == 42633
                    : c <= 42635)
                  : (c <= 42637 || c == 42639))
                : (c <= 42641 || (c < 42647
                  ? (c < 42645
                    ? c == 42643
                    : c <= 42645)
                  : (c <= 42647 || c == 42649))))
              : (c <= 42651 || (c < 42795
                ? (c < 42791
                  ? (c < 42789
                    ? c == 42787
                    : c <= 42789)
                  : (c <= 42791 || c == 42793))
                : (c <= 42795 || (c < 42803
                  ? (c < 42799
                    ? c == 42797
                    : c <= 42801)
                  : (c <= 42803 || c == 42805))))))
            : (c <= 42807 || (c < 42827
              ? (c < 42817
                ? (c < 42813
                  ? (c < 42811
                    ? c == 42809
                    : c <= 42811)
                  : (c <= 42813 || c == 42815))
                : (c <= 42817 || (c < 42823
                  ? (c < 42821
                    ? c == 42819
                    : c <= 42821)
                  : (c <= 42823 || c == 42825))))
              : (c <= 42827 || (c < 42837
                ? (c < 42833
                  ? (c < 42831
                    ? c == 42829
                    : c <= 42831)
                  : (c <= 42833 || c == 42835))
                : (c <= 42837 || (c < 42843
                  ? (c < 42841
                    ? c == 42839
                    : c <= 42841)
                  : (c <= 42843 || c == 42845))))))))))
        : (c <= 42847 || (c < 43824
          ? (c < 42899
            ? (c < 42874
              ? (c < 42857
                ? (c < 42853
                  ? (c < 42851
                    ? c == 42849
                    : c <= 42851)
                  : (c <= 42853 || c == 42855))
                : (c <= 42857 || (c < 42863
                  ? (c < 42861
                    ? c == 42859
                    : c <= 42861)
                  : (c <= 42863 || (c >= 42865 && c <= 42872)))))
              : (c <= 42874 || (c < 42885
                ? (c < 42881
                  ? (c < 42879
                    ? c == 42876
                    : c <= 42879)
                  : (c <= 42881 || c == 42883))
                : (c <= 42885 || (c < 42894
                  ? (c < 42892
                    ? c == 42887
                    : c <= 42892)
                  : (c <= 42894 || c == 42897))))))
            : (c <= 42901 || (c < 42921
              ? (c < 42911
                ? (c < 42907
                  ? (c < 42905
                    ? c == 42903
                    : c <= 42905)
                  : (c <= 42907 || c == 42909))
                : (c <= 42911 || (c < 42917
                  ? (c < 42915
                    ? c == 42913
                    : c <= 42915)
                  : (c <= 42917 || c == 42919))))
              : (c <= 42921 || (c < 42939
                ? (c < 42935
                  ? (c < 42933
                    ? c == 42927
                    : c <= 42933)
                  : (c <= 42935 || c == 42937))
                : (c <= 42939 || (c < 42947
                  ? (c < 42943
                    ? c == 42941
                    : c <= 42943)
                  : (c <= 42947 || c == 43002))))))))
          : (c <= 43866 || (c < 120094
            ? (c < 93792
              ? (c < 65345
                ? (c < 64256
                  ? (c < 43888
                    ? (c >= 43872 && c <= 43879)
                    : c <= 43967)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 65370 || (c < 68800
                  ? (c < 66776
                    ? (c >= 66600 && c <= 66639)
                    : c <= 66811)
                  : (c <= 68850 || (c >= 71872 && c <= 71903)))))
              : (c <= 93823 || (c < 119990
                ? (c < 119894
                  ? (c < 119886
                    ? (c >= 119834 && c <= 119859)
                    : c <= 119892)
                  : (c <= 119911 || (c >= 119938 && c <= 119963)))
                : (c <= 119993 || (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120015 || (c >= 120042 && c <= 120067)))))))
            : (c <= 120119 || (c < 120572
              ? (c < 120354
                ? (c < 120250
                  ? (c < 120198
                    ? (c >= 120146 && c <= 120171)
                    : c <= 120223)
                  : (c <= 120275 || (c >= 120302 && c <= 120327)))
                : (c <= 120379 || (c < 120514
                  ? (c < 120458
                    ? (c >= 120406 && c <= 120431)
                    : c <= 120485)
                  : (c <= 120538 || (c >= 120540 && c <= 120545)))))
              : (c <= 120596 || (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120603)
                    : c <= 120654)
                  : (c <= 120661 || (c >= 120688 && c <= 120712)))
                : (c <= 120719 || (c < 120779
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120777)
                  : (c <= 120779 || (c >= 125218 && c <= 125251)))))))))))))))));
}

static inline bool sym_lower_case_identifier_character_set_2(int32_t c) {
  return (c < 42240
    ? (c < 3776
      ? (c < 2616
        ? (c < 1808
          ? (c < 904
            ? (c < 248
              ? (c < 170
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 192
                  ? (c < 186
                    ? c == 181
                    : c <= 186)
                  : (c <= 214 || (c >= 216 && c <= 246)))))
              : (c <= 705 || (c < 880
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))))))
            : (c <= 906 || (c < 1519
              ? (c < 1162
                ? (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))))
              : (c <= 1522 || (c < 1765
                ? (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2308
                ? (c < 2208
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2228 || (c >= 2230 && c <= 2237)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))))))
        : (c <= 2617 || (c < 3114
          ? (c < 2869
            ? (c < 2749
              ? (c < 2703
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2749 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))))
            : (c <= 2873 || (c < 2972
              ? (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3024
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3412
            ? (c < 3261
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))
              : (c <= 3261 || (c < 3342
                ? (c < 3313
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3333 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))))))
            : (c <= 3414 || (c < 3648
              ? (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))))))))))))
      : (c <= 3780 || (c < 7401
        ? (c < 5121
          ? (c < 4348
            ? (c < 4186
              ? (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))
              : (c <= 4189 || (c < 4238
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))))
            : (c <= 4680 || (c < 4800
              ? (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))
          : (c <= 5740 || (c < 6400
            ? (c < 5998
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5900 || (c < 5952
                  ? (c < 5920
                    ? (c >= 5902 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))
              : (c <= 6000 || (c < 6272
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 7043
              ? (c < 6656
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))))
              : (c <= 7072 || (c < 7258
                ? (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))))))
        : (c <= 7404 || (c < 8517
          ? (c < 8144
            ? (c < 8025
              ? (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8458
              ? (c < 8305
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 11720
            ? (c < 11565
              ? (c < 11360
                ? (c < 11264
                  ? (c < 8579
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11310 || (c >= 11312 && c <= 11358)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11688
                ? (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12540
              ? (c < 12337
                ? (c < 11823
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12294)))
                : (c <= 12341 || (c < 12445
                  ? (c < 12353
                    ? (c >= 12347 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))))
              : (c <= 12543 || (c < 13312
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12730 || (c >= 12784 && c <= 12799)))
                : (c <= 19893 || (c < 40960
                  ? (c >= 19968 && c <= 40943)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))))))))))))
    : (c <= 42508 || (c < 70320
      ? (c < 65536
        ? (c < 43744
          ? (c < 43312
            ? (c < 42999
              ? (c < 42656
                ? (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42725 || (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42943 || (c >= 42946 && c <= 42950)))))
              : (c <= 43009 || (c < 43138
                ? (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))
                : (c <= 43187 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))))))
            : (c <= 43334 || (c < 43616
              ? (c < 43494
                ? (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))
                : (c <= 43503 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c >= 43588 && c <= 43595)))))
              : (c <= 43638 || (c < 43705
                ? (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))
          : (c <= 43754 || (c < 64298
            ? (c < 44032
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43879 || (c >= 43888 && c <= 44002)))))
              : (c <= 55203 || (c < 64256
                ? (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))))
            : (c <= 64310 || (c < 65136
              ? (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))
              : (c <= 65140 || (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))))))))
        : (c <= 65547 || (c < 68096
          ? (c < 66816
            ? (c < 66349
              ? (c < 65616
                ? (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65664 && c <= 65786)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))
              : (c <= 66368 || (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66370 && c <= 66377)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))))
            : (c <= 66855 || (c < 67647
              ? (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 67968
                  ? (c >= 67872 && c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))))))))
          : (c <= 68096 || (c < 69600
            ? (c < 68448
              ? (c < 68224
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))
              : (c <= 68466 || (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69415
                  ? (c >= 69376 && c <= 69404)
                  : (c <= 69415 || (c >= 69424 && c <= 69445)))))))
            : (c <= 69622 || (c < 70106
              ? (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))
              : (c <= 70106 || (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70287
                  ? (c >= 70282 && c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))))))))))
      : (c <= 70366 || (c < 119808
        ? (c < 72768
          ? (c < 71296
            ? (c < 70656
              ? (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))
              : (c <= 70708 || (c < 70855
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70751)
                  : (c <= 70831 || (c >= 70852 && c <= 70853)))
                : (c <= 70855 || (c < 71168
                  ? (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)
                  : (c <= 71215 || c == 71236))))))
            : (c <= 71338 || (c < 72192
              ? (c < 71935
                ? (c < 71680
                  ? (c < 71424
                    ? c == 71352
                    : c <= 71450)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71935 || (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))))
              : (c <= 72192 || (c < 72349
                ? (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))
                : (c <= 72349 || (c < 72704
                  ? (c >= 72384 && c <= 72440)
                  : (c <= 72712 || (c >= 72714 && c <= 72750)))))))))
          : (c <= 72768 || (c < 92992
            ? (c < 73440
              ? (c < 73030
                ? (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))
                : (c <= 73030 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))))
              : (c <= 73458 || (c < 92160
                ? (c < 77824
                  ? (c < 74880
                    ? (c >= 73728 && c <= 74649)
                    : c <= 75075)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))
                : (c <= 92728 || (c < 92880
                  ? (c >= 92736 && c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101106 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110878)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113792
                  ? (c >= 113776 && c <= 113788)
                  : (c <= 113800 || (c >= 113808 && c <= 113817)))))))))))
        : (c <= 119892 || (c < 126469
          ? (c < 120488
            ? (c < 120071
              ? (c < 119977
                ? (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))
                : (c <= 119980 || (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c >= 120005 && c <= 120069)))))
              : (c <= 120074 || (c < 120128
                ? (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))
                : (c <= 120132 || (c < 120138
                  ? c == 120134
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126559
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126555
                  ? c == 126553
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173782 || (c >= 173824 && c <= 177972)))
                : (c <= 178205 || (c < 183984
                  ? (c >= 178208 && c <= 183969)
                  : (c <= 191456 || (c >= 194560 && c <= 195101)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (sym_lower_case_identifier_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(56);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (sym_lower_case_identifier_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(51);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(64);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(65);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_char_constant_expr_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_char_constant_expr_token1);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_char_constant_expr_token1);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_constant_expr_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_constant_expr_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_constant_expr_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_constant_expr_token2);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_constant_expr_token2);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_constant_expr_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      if (lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(48);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      if (lookahead == '{') ADVANCE(27);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_lower_case_identifier);
      if (sym_lower_case_identifier_character_set_2(lookahead)) ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 4},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__virtual_open_section = 0,
  ts_external_token__virtual_end_section = 1,
  ts_external_token__block_comment_content = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__virtual_open_section] = sym__virtual_open_section,
  [ts_external_token__virtual_end_section] = sym__virtual_end_section,
  [ts_external_token__block_comment_content] = sym__block_comment_content,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__virtual_open_section] = true,
    [ts_external_token__virtual_end_section] = true,
    [ts_external_token__block_comment_content] = true,
  },
  [2] = {
    [ts_external_token__virtual_open_section] = true,
  },
  [3] = {
    [ts_external_token__block_comment_content] = true,
  },
  [4] = {
    [ts_external_token__virtual_end_section] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lower_case_identifier] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_wildcard_pattern] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [sym__virtual_open_section] = ACTIONS(1),
    [sym__virtual_end_section] = ACTIONS(1),
    [sym__block_comment_content] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(34),
    [sym_block_comment] = STATE(1),
    [aux_sym__top_decl_list] = STATE(11),
    [sym_value_declaration] = STATE(21),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number_literal,
    STATE(2), 1,
      sym_block_comment,
    STATE(25), 1,
      sym__expression,
    STATE(26), 1,
      sym__const_expression,
    STATE(27), 3,
      sym_char_constant_expr,
      sym_number_constant_expr,
      sym_string_constant_expr,
  [33] = 5,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_block_comment,
      aux_sym_string_constant_expr_repeat2,
    ACTIONS(23), 3,
      aux_sym_string_constant_expr_token2,
      sym_string_escape,
      sym_invalid_string_escape,
  [52] = 5,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(26), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(4), 2,
      sym_block_comment,
      aux_sym_string_constant_expr_repeat1,
    ACTIONS(28), 3,
      aux_sym_string_constant_expr_token1,
      sym_string_escape,
      sym_invalid_string_escape,
  [71] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      aux_sym_string_constant_expr_repeat2,
    STATE(5), 1,
      sym_block_comment,
    ACTIONS(33), 3,
      aux_sym_string_constant_expr_token2,
      sym_string_escape,
      sym_invalid_string_escape,
  [92] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(4), 1,
      aux_sym_string_constant_expr_repeat1,
    STATE(6), 1,
      sym_block_comment,
    ACTIONS(35), 3,
      aux_sym_string_constant_expr_token1,
      sym_string_escape,
      sym_invalid_string_escape,
  [113] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_string_constant_expr_repeat2,
    STATE(7), 1,
      sym_block_comment,
    ACTIONS(33), 3,
      aux_sym_string_constant_expr_token2,
      sym_string_escape,
      sym_invalid_string_escape,
  [134] = 6,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(6), 1,
      aux_sym_string_constant_expr_repeat1,
    STATE(8), 1,
      sym_block_comment,
    ACTIONS(35), 3,
      aux_sym_string_constant_expr_token1,
      sym_string_escape,
      sym_invalid_string_escape,
  [155] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(41), 1,
      sym_wildcard_pattern,
    STATE(18), 1,
      sym_pattern,
    STATE(9), 2,
      sym_block_comment,
      aux_sym_function_declaration_left_repeat1,
  [175] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(44), 1,
      sym_lower_case_identifier,
    ACTIONS(46), 1,
      sym_wildcard_pattern,
    STATE(10), 1,
      sym_block_comment,
    STATE(30), 2,
      sym_function_declaration_left,
      sym_pattern,
  [195] = 7,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_block_comment,
    STATE(14), 1,
      aux_sym__top_decl_list,
    STATE(21), 1,
      sym_value_declaration,
  [217] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    STATE(12), 1,
      sym_block_comment,
    ACTIONS(50), 4,
      anon_sym_DQUOTE,
      aux_sym_string_constant_expr_token2,
      sym_string_escape,
      sym_invalid_string_escape,
  [233] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    STATE(13), 1,
      sym_block_comment,
    ACTIONS(52), 4,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_string_constant_expr_token1,
      sym_string_escape,
      sym_invalid_string_escape,
  [249] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_let,
    STATE(21), 1,
      sym_value_declaration,
    STATE(14), 2,
      sym_block_comment,
      aux_sym__top_decl_list,
  [269] = 7,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(46), 1,
      sym_wildcard_pattern,
    ACTIONS(59), 1,
      anon_sym_EQ,
    STATE(9), 1,
      aux_sym_function_declaration_left_repeat1,
    STATE(15), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_pattern,
  [291] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(46), 1,
      sym_wildcard_pattern,
    STATE(15), 1,
      aux_sym_function_declaration_left_repeat1,
    STATE(16), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_pattern,
  [310] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(19), 1,
      sym_line_comment,
    STATE(17), 1,
      sym_block_comment,
    ACTIONS(61), 3,
      aux_sym_char_constant_expr_token1,
      sym_string_escape,
      sym_invalid_string_escape,
  [325] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(18), 1,
      sym_block_comment,
    ACTIONS(63), 2,
      anon_sym_EQ,
      sym_wildcard_pattern,
  [339] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(19), 1,
      sym_block_comment,
    ACTIONS(65), 2,
      anon_sym_EQ,
      sym_wildcard_pattern,
  [353] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_block_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [367] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(21), 1,
      sym_block_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [381] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      sym__virtual_open_section,
    STATE(22), 1,
      sym_block_comment,
  [394] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      sym__block_comment_content,
    STATE(23), 1,
      sym_block_comment,
  [407] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      sym__virtual_end_section,
    STATE(24), 1,
      sym_block_comment,
  [420] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      sym__virtual_end_section,
    STATE(25), 1,
      sym_block_comment,
  [433] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      sym__virtual_end_section,
    STATE(26), 1,
      sym_block_comment,
  [446] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      sym__virtual_end_section,
    STATE(27), 1,
      sym_block_comment,
  [459] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_block_comment,
  [472] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      sym__virtual_end_section,
    STATE(29), 1,
      sym_block_comment,
  [485] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_EQ,
    STATE(30), 1,
      sym_block_comment,
  [498] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(89), 1,
      anon_sym_STAR_RPAREN,
    STATE(31), 1,
      sym_block_comment,
  [511] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym__virtual_end_section,
    STATE(32), 1,
      sym_block_comment,
  [524] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      sym__virtual_end_section,
    STATE(33), 1,
      sym_block_comment,
  [537] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_block_comment,
  [550] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 269,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 325,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 367,
  [SMALL_STATE(22)] = 381,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 407,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 446,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 472,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 498,
  [SMALL_STATE(32)] = 511,
  [SMALL_STATE(33)] = 524,
  [SMALL_STATE(34)] = 537,
  [SMALL_STATE(35)] = 550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_expr_repeat2, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_expr_repeat2, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_expr_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_expr_repeat1, 2), SHIFT_REPEAT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_left_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_left_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_expr_repeat2, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_expr_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__top_decl_list, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__top_decl_list, 2), SHIFT_REPEAT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_left, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_left_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 6, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__top_decl_list, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_constant_expr, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__const_expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant_expr, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_constant_expr, 3, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant_expr, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fsharp_external_scanner_create(void);
void tree_sitter_fsharp_external_scanner_destroy(void *);
bool tree_sitter_fsharp_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fsharp_external_scanner_serialize(void *, char *);
void tree_sitter_fsharp_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fsharp(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_lower_case_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fsharp_external_scanner_create,
      tree_sitter_fsharp_external_scanner_destroy,
      tree_sitter_fsharp_external_scanner_scan,
      tree_sitter_fsharp_external_scanner_serialize,
      tree_sitter_fsharp_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
