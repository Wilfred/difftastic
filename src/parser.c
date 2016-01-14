#include "tree_sitter/parser.h"

#define STATE_COUNT 50
#define SYMBOL_COUNT 19

enum {
    sym__value = ts_builtin_sym_start,
    sym_object,
    sym_pair,
    sym_array,
    aux_sym_object_repeat1,
    aux_sym_array_repeat1,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    anon_sym_COLON,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    sym_string,
    sym_number,
    sym_true,
    sym_false,
    sym_null,
};

static const char *ts_symbol_names[] = {
    [sym__value] = "_value",
    [sym_object] = "object",
    [sym_pair] = "pair",
    [sym_array] = "array",
    [aux_sym_object_repeat1] = "object_repeat1",
    [aux_sym_array_repeat1] = "array_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_LBRACE] = "{",
    [anon_sym_COMMA] = ",",
    [anon_sym_RBRACE] = "}",
    [anon_sym_COLON] = ":",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [sym_string] = "string",
    [sym_number] = "number",
    [sym_true] = "true",
    [sym_false] = "false",
    [sym_null] = "null",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym__value] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_object] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_pair] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_array] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_object_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_array_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = true, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_string] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_number] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_true] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_false] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_null] = {.visible = true, .named = true, .structural = true, .extra = false},
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(0);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == '[')
                ADVANCE(12);
            if (lookahead == ']')
                ADVANCE(13);
            if (lookahead == 'f')
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(27);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '\\')
                ADVANCE(4);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(2);
            LEX_ERROR();
        case 3:
            ACCEPT_TOKEN(sym_string);
        case 4:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(2);
            LEX_ERROR();
        case 5:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 6:
            if (lookahead == '.')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == 'x')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_number);
        case 7:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(7);
            ACCEPT_TOKEN(sym_number);
        case 8:
            if (lookahead == '.')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            ACCEPT_TOKEN(sym_number);
        case 9:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_number);
        case 11:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 12:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 13:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 14:
            if (lookahead == 'a')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            if (lookahead == 'l')
                ADVANCE(16);
            LEX_ERROR();
        case 16:
            if (lookahead == 's')
                ADVANCE(17);
            LEX_ERROR();
        case 17:
            if (lookahead == 'e')
                ADVANCE(18);
            LEX_ERROR();
        case 18:
            ACCEPT_TOKEN(sym_false);
        case 19:
            if (lookahead == 'u')
                ADVANCE(20);
            LEX_ERROR();
        case 20:
            if (lookahead == 'l')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            if (lookahead == 'l')
                ADVANCE(22);
            LEX_ERROR();
        case 22:
            ACCEPT_TOKEN(sym_null);
        case 23:
            if (lookahead == 'r')
                ADVANCE(24);
            LEX_ERROR();
        case 24:
            if (lookahead == 'u')
                ADVANCE(25);
            LEX_ERROR();
        case 25:
            if (lookahead == 'e')
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            ACCEPT_TOKEN(sym_true);
        case 27:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 28:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 29:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(29);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(12);
            if (lookahead == 'f')
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(27);
            LEX_ERROR();
        case 30:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(30);
            LEX_ERROR();
        case 31:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(31);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 32:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(32);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(12);
            if (lookahead == ']')
                ADVANCE(13);
            if (lookahead == 'f')
                ADVANCE(14);
            if (lookahead == 'n')
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(27);
            LEX_ERROR();
        case 33:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(33);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ']')
                ADVANCE(13);
            LEX_ERROR();
        case 34:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(34);
            if (lookahead == ']')
                ADVANCE(13);
            LEX_ERROR();
        case 35:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(35);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 36:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(36);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 37:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(37);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 38:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(38);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 29,
    [1] = 30,
    [2] = 30,
    [3] = 31,
    [4] = 32,
    [5] = 33,
    [6] = 33,
    [7] = 31,
    [8] = 32,
    [9] = 30,
    [10] = 33,
    [11] = 33,
    [12] = 34,
    [13] = 29,
    [14] = 33,
    [15] = 33,
    [16] = 34,
    [17] = 33,
    [18] = 35,
    [19] = 33,
    [20] = 36,
    [21] = 29,
    [22] = 35,
    [23] = 35,
    [24] = 31,
    [25] = 32,
    [26] = 33,
    [27] = 35,
    [28] = 34,
    [29] = 35,
    [30] = 35,
    [31] = 35,
    [32] = 35,
    [33] = 37,
    [34] = 38,
    [35] = 35,
    [36] = 35,
    [37] = 37,
    [38] = 35,
    [39] = 37,
    [40] = 33,
    [41] = 33,
    [42] = 34,
    [43] = 30,
    [44] = 30,
    [45] = 35,
    [46] = 30,
    [47] = 37,
    [48] = 30,
    [49] = 30,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym__value] = 2,
        [sym_object] = 4,
        [sym_array] = 4,
        [anon_sym_LBRACE] = 6,
        [anon_sym_LBRACK] = 8,
        [sym_string] = 4,
        [sym_number] = 4,
        [sym_true] = 4,
        [sym_false] = 4,
        [sym_null] = 4,
    },
    [1] = {
        [ts_builtin_sym_end] = 10,
    },
    [2] = {
        [ts_builtin_sym_end] = 12,
    },
    [3] = {
        [sym_pair] = 14,
        [ts_builtin_sym_error] = 14,
        [anon_sym_RBRACE] = 16,
        [sym_string] = 18,
        [sym_number] = 18,
    },
    [4] = {
        [sym__value] = 20,
        [sym_object] = 22,
        [sym_array] = 22,
        [ts_builtin_sym_error] = 20,
        [anon_sym_LBRACE] = 24,
        [anon_sym_LBRACK] = 26,
        [anon_sym_RBRACK] = 28,
        [sym_string] = 22,
        [sym_number] = 22,
        [sym_true] = 22,
        [sym_false] = 22,
        [sym_null] = 22,
    },
    [5] = {
        [aux_sym_array_repeat1] = 30,
        [anon_sym_COMMA] = 32,
        [anon_sym_RBRACK] = 34,
    },
    [6] = {
        [aux_sym_array_repeat1] = 12,
        [anon_sym_COMMA] = 12,
        [anon_sym_RBRACK] = 12,
    },
    [7] = {
        [sym_pair] = 36,
        [ts_builtin_sym_error] = 36,
        [anon_sym_RBRACE] = 38,
        [sym_string] = 18,
        [sym_number] = 18,
    },
    [8] = {
        [sym__value] = 40,
        [sym_object] = 22,
        [sym_array] = 22,
        [ts_builtin_sym_error] = 40,
        [anon_sym_LBRACE] = 24,
        [anon_sym_LBRACK] = 26,
        [anon_sym_RBRACK] = 42,
        [sym_string] = 22,
        [sym_number] = 22,
        [sym_true] = 22,
        [sym_false] = 22,
        [sym_null] = 22,
    },
    [9] = {
        [ts_builtin_sym_end] = 44,
    },
    [10] = {
        [aux_sym_array_repeat1] = 46,
        [anon_sym_COMMA] = 32,
        [anon_sym_RBRACK] = 48,
    },
    [11] = {
        [aux_sym_array_repeat1] = 44,
        [anon_sym_COMMA] = 44,
        [anon_sym_RBRACK] = 44,
    },
    [12] = {
        [anon_sym_RBRACK] = 50,
    },
    [13] = {
        [sym__value] = 52,
        [sym_object] = 22,
        [sym_array] = 22,
        [ts_builtin_sym_error] = 52,
        [anon_sym_LBRACE] = 24,
        [anon_sym_LBRACK] = 26,
        [sym_string] = 22,
        [sym_number] = 22,
        [sym_true] = 22,
        [sym_false] = 22,
        [sym_null] = 22,
    },
    [14] = {
        [aux_sym_array_repeat1] = 54,
        [anon_sym_COMMA] = 54,
        [anon_sym_RBRACK] = 54,
    },
    [15] = {
        [aux_sym_array_repeat1] = 56,
        [anon_sym_COMMA] = 32,
        [anon_sym_RBRACK] = 58,
    },
    [16] = {
        [anon_sym_RBRACK] = 60,
    },
    [17] = {
        [aux_sym_array_repeat1] = 62,
        [anon_sym_COMMA] = 62,
        [anon_sym_RBRACK] = 62,
    },
    [18] = {
        [aux_sym_object_repeat1] = 64,
        [anon_sym_COMMA] = 66,
        [anon_sym_RBRACE] = 68,
    },
    [19] = {
        [aux_sym_array_repeat1] = 70,
        [anon_sym_COMMA] = 70,
        [anon_sym_RBRACK] = 70,
    },
    [20] = {
        [anon_sym_COLON] = 72,
    },
    [21] = {
        [sym__value] = 74,
        [sym_object] = 76,
        [sym_array] = 76,
        [anon_sym_LBRACE] = 78,
        [anon_sym_LBRACK] = 80,
        [sym_string] = 76,
        [sym_number] = 76,
        [sym_true] = 76,
        [sym_false] = 76,
        [sym_null] = 76,
    },
    [22] = {
        [aux_sym_object_repeat1] = 82,
        [anon_sym_COMMA] = 82,
        [anon_sym_RBRACE] = 82,
    },
    [23] = {
        [aux_sym_object_repeat1] = 12,
        [anon_sym_COMMA] = 12,
        [anon_sym_RBRACE] = 12,
    },
    [24] = {
        [sym_pair] = 84,
        [ts_builtin_sym_error] = 84,
        [anon_sym_RBRACE] = 86,
        [sym_string] = 18,
        [sym_number] = 18,
    },
    [25] = {
        [sym__value] = 88,
        [sym_object] = 22,
        [sym_array] = 22,
        [ts_builtin_sym_error] = 88,
        [anon_sym_LBRACE] = 24,
        [anon_sym_LBRACK] = 26,
        [anon_sym_RBRACK] = 90,
        [sym_string] = 22,
        [sym_number] = 22,
        [sym_true] = 22,
        [sym_false] = 22,
        [sym_null] = 22,
    },
    [26] = {
        [aux_sym_array_repeat1] = 92,
        [anon_sym_COMMA] = 32,
        [anon_sym_RBRACK] = 94,
    },
    [27] = {
        [aux_sym_object_repeat1] = 44,
        [anon_sym_COMMA] = 44,
        [anon_sym_RBRACE] = 44,
    },
    [28] = {
        [anon_sym_RBRACK] = 96,
    },
    [29] = {
        [aux_sym_object_repeat1] = 54,
        [anon_sym_COMMA] = 54,
        [anon_sym_RBRACE] = 54,
    },
    [30] = {
        [aux_sym_object_repeat1] = 62,
        [anon_sym_COMMA] = 62,
        [anon_sym_RBRACE] = 62,
    },
    [31] = {
        [aux_sym_object_repeat1] = 98,
        [anon_sym_COMMA] = 66,
        [anon_sym_RBRACE] = 100,
    },
    [32] = {
        [aux_sym_object_repeat1] = 70,
        [anon_sym_COMMA] = 70,
        [anon_sym_RBRACE] = 70,
    },
    [33] = {
        [anon_sym_RBRACE] = 102,
    },
    [34] = {
        [sym_pair] = 104,
        [ts_builtin_sym_error] = 104,
        [sym_string] = 18,
        [sym_number] = 18,
    },
    [35] = {
        [aux_sym_object_repeat1] = 106,
        [anon_sym_COMMA] = 106,
        [anon_sym_RBRACE] = 106,
    },
    [36] = {
        [aux_sym_object_repeat1] = 108,
        [anon_sym_COMMA] = 66,
        [anon_sym_RBRACE] = 110,
    },
    [37] = {
        [anon_sym_RBRACE] = 112,
    },
    [38] = {
        [aux_sym_object_repeat1] = 114,
        [anon_sym_COMMA] = 114,
        [anon_sym_RBRACE] = 114,
    },
    [39] = {
        [anon_sym_RBRACE] = 116,
    },
    [40] = {
        [aux_sym_array_repeat1] = 106,
        [anon_sym_COMMA] = 106,
        [anon_sym_RBRACK] = 106,
    },
    [41] = {
        [aux_sym_array_repeat1] = 114,
        [anon_sym_COMMA] = 114,
        [anon_sym_RBRACK] = 114,
    },
    [42] = {
        [anon_sym_RBRACK] = 118,
    },
    [43] = {
        [ts_builtin_sym_end] = 54,
    },
    [44] = {
        [ts_builtin_sym_end] = 62,
    },
    [45] = {
        [aux_sym_object_repeat1] = 120,
        [anon_sym_COMMA] = 66,
        [anon_sym_RBRACE] = 122,
    },
    [46] = {
        [ts_builtin_sym_end] = 70,
    },
    [47] = {
        [anon_sym_RBRACE] = 124,
    },
    [48] = {
        [ts_builtin_sym_end] = 106,
    },
    [49] = {
        [ts_builtin_sym_end] = 114,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT(4, 0),
    [10] = {.count = 1}, ACCEPT_INPUT(),
    [12] = {.count = 1}, REDUCE(sym__value, 1, 0),
    [14] = {.count = 1}, SHIFT(45, 0),
    [16] = {.count = 1}, SHIFT(46, 0),
    [18] = {.count = 1}, SHIFT(20, 0),
    [20] = {.count = 1}, SHIFT(5, 0),
    [22] = {.count = 1}, SHIFT(6, 0),
    [24] = {.count = 1}, SHIFT(7, 0),
    [26] = {.count = 1}, SHIFT(8, 0),
    [28] = {.count = 1}, SHIFT(9, 0),
    [30] = {.count = 1}, SHIFT(42, 0),
    [32] = {.count = 1}, SHIFT(13, 0),
    [34] = {.count = 1}, SHIFT(43, 0),
    [36] = {.count = 1}, SHIFT(18, 0),
    [38] = {.count = 1}, SHIFT(19, 0),
    [40] = {.count = 1}, SHIFT(10, 0),
    [42] = {.count = 1}, SHIFT(11, 0),
    [44] = {.count = 1}, REDUCE(sym_array, 2, 0),
    [46] = {.count = 1}, SHIFT(12, 0),
    [48] = {.count = 1}, SHIFT(14, 0),
    [50] = {.count = 1}, SHIFT(17, 0),
    [52] = {.count = 1}, SHIFT(15, 0),
    [54] = {.count = 1}, REDUCE(sym_array, 3, 0),
    [56] = {.count = 1}, SHIFT(16, 0),
    [58] = {.count = 1}, REDUCE(aux_sym_array_repeat1, 2, 0),
    [60] = {.count = 1}, REDUCE(aux_sym_array_repeat1, 3, 0),
    [62] = {.count = 1}, REDUCE(sym_array, 4, 0),
    [64] = {.count = 1}, SHIFT(39, 0),
    [66] = {.count = 1}, SHIFT(34, 0),
    [68] = {.count = 1}, SHIFT(40, 0),
    [70] = {.count = 1}, REDUCE(sym_object, 2, 0),
    [72] = {.count = 1}, SHIFT(21, 0),
    [74] = {.count = 1}, SHIFT(22, 0),
    [76] = {.count = 1}, SHIFT(23, 0),
    [78] = {.count = 1}, SHIFT(24, 0),
    [80] = {.count = 1}, SHIFT(25, 0),
    [82] = {.count = 1}, REDUCE(sym_pair, 3, 0),
    [84] = {.count = 1}, SHIFT(31, 0),
    [86] = {.count = 1}, SHIFT(32, 0),
    [88] = {.count = 1}, SHIFT(26, 0),
    [90] = {.count = 1}, SHIFT(27, 0),
    [92] = {.count = 1}, SHIFT(28, 0),
    [94] = {.count = 1}, SHIFT(29, 0),
    [96] = {.count = 1}, SHIFT(30, 0),
    [98] = {.count = 1}, SHIFT(33, 0),
    [100] = {.count = 1}, SHIFT(35, 0),
    [102] = {.count = 1}, SHIFT(38, 0),
    [104] = {.count = 1}, SHIFT(36, 0),
    [106] = {.count = 1}, REDUCE(sym_object, 3, 0),
    [108] = {.count = 1}, SHIFT(37, 0),
    [110] = {.count = 1}, REDUCE(aux_sym_object_repeat1, 2, 0),
    [112] = {.count = 1}, REDUCE(aux_sym_object_repeat1, 3, 0),
    [114] = {.count = 1}, REDUCE(sym_object, 4, 0),
    [116] = {.count = 1}, SHIFT(41, 0),
    [118] = {.count = 1}, SHIFT(44, 0),
    [120] = {.count = 1}, SHIFT(47, 0),
    [122] = {.count = 1}, SHIFT(48, 0),
    [124] = {.count = 1}, SHIFT(49, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_json);
