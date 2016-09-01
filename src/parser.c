#include "tree_sitter/parser.h"

#define STATE_COUNT 37
#define SYMBOL_COUNT 18

enum {
    sym__value = 1,
    sym_object = 2,
    sym_pair = 3,
    sym_array = 4,
    aux_sym_object_repeat1 = 5,
    aux_sym_array_repeat1 = 6,
    anon_sym_LBRACE = 7,
    anon_sym_COMMA = 8,
    anon_sym_RBRACE = 9,
    anon_sym_COLON = 10,
    anon_sym_LBRACK = 11,
    anon_sym_RBRACK = 12,
    sym_string = 13,
    sym_number = 14,
    sym_true = 15,
    sym_false = 16,
    sym_null = 17,
};

static const char *ts_symbol_names[] = {
    [sym__value] = "_value",
    [sym_object] = "object",
    [sym_pair] = "pair",
    [sym_array] = "array",
    [aux_sym_object_repeat1] = "object_repeat1",
    [aux_sym_array_repeat1] = "array_repeat1",
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
    [sym__value] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_object] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_pair] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_array] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_object_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_array_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_string] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_number] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_true] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_false] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_null] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(29);
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
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(30);
            LEX_ERROR();
        case 31:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(31);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ']')
                ADVANCE(13);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 32:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(32);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 33:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(33);
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
        case 34:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(34);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ']')
                ADVANCE(13);
            LEX_ERROR();
        case 35:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(35);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 36:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(36);
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 37:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(37);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            LEX_ERROR();
        case 38:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(38);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(11);
            if (lookahead == ']')
                ADVANCE(13);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 29,
    [2] = 30,
    [3] = 31,
    [4] = 32,
    [5] = 33,
    [6] = 34,
    [7] = 31,
    [8] = 34,
    [9] = 29,
    [10] = 31,
    [11] = 34,
    [12] = 29,
    [13] = 31,
    [14] = 34,
    [15] = 35,
    [16] = 31,
    [17] = 36,
    [18] = 29,
    [19] = 35,
    [20] = 35,
    [21] = 37,
    [22] = 31,
    [23] = 35,
    [24] = 37,
    [25] = 31,
    [26] = 35,
    [27] = 29,
    [28] = 31,
    [29] = 29,
    [30] = 31,
    [31] = 38,
    [32] = 31,
    [33] = 35,
    [34] = 35,
    [35] = 34,
    [36] = 35,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym__value] = 1,
        [sym_object] = 3,
        [sym_pair] = 5,
        [sym_array] = 3,
        [aux_sym_object_repeat1] = 7,
        [aux_sym_array_repeat1] = 9,
        [ts_builtin_sym_end] = 11,
        [anon_sym_LBRACE] = 13,
        [anon_sym_COMMA] = 15,
        [anon_sym_RBRACE] = 17,
        [anon_sym_COLON] = 19,
        [anon_sym_LBRACK] = 21,
        [anon_sym_RBRACK] = 23,
        [sym_string] = 25,
        [sym_number] = 27,
        [sym_true] = 3,
        [sym_false] = 3,
        [sym_null] = 3,
    },
    [1] = {
        [sym__value] = 29,
        [sym_object] = 31,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [sym_string] = 31,
        [sym_number] = 37,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [2] = {
        [ts_builtin_sym_end] = 39,
    },
    [3] = {
        [aux_sym_object_repeat1] = 41,
        [aux_sym_array_repeat1] = 41,
        [ts_builtin_sym_end] = 41,
        [anon_sym_COMMA] = 41,
        [anon_sym_RBRACE] = 41,
        [anon_sym_RBRACK] = 41,
    },
    [4] = {
        [sym_pair] = 43,
        [anon_sym_RBRACE] = 45,
        [sym_string] = 47,
        [sym_number] = 49,
    },
    [5] = {
        [sym__value] = 51,
        [sym_object] = 31,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [anon_sym_RBRACK] = 53,
        [sym_string] = 31,
        [sym_number] = 37,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [6] = {
        [aux_sym_array_repeat1] = 55,
        [anon_sym_COMMA] = 57,
        [anon_sym_RBRACK] = 59,
    },
    [7] = {
        [aux_sym_object_repeat1] = 61,
        [aux_sym_array_repeat1] = 61,
        [ts_builtin_sym_end] = 61,
        [anon_sym_COMMA] = 61,
        [anon_sym_RBRACE] = 61,
        [anon_sym_RBRACK] = 61,
    },
    [8] = {
        [anon_sym_COMMA] = 63,
        [anon_sym_RBRACK] = 65,
    },
    [9] = {
        [sym__value] = 67,
        [sym_object] = 31,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [sym_string] = 31,
        [sym_number] = 37,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [10] = {
        [aux_sym_object_repeat1] = 69,
        [aux_sym_array_repeat1] = 69,
        [ts_builtin_sym_end] = 69,
        [anon_sym_COMMA] = 69,
        [anon_sym_RBRACE] = 69,
        [anon_sym_RBRACK] = 69,
    },
    [11] = {
        [anon_sym_COMMA] = 71,
        [anon_sym_RBRACK] = 71,
    },
    [12] = {
        [sym__value] = 73,
        [sym_object] = 31,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [sym_string] = 31,
        [sym_number] = 37,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [13] = {
        [aux_sym_object_repeat1] = 75,
        [aux_sym_array_repeat1] = 75,
        [ts_builtin_sym_end] = 75,
        [anon_sym_COMMA] = 75,
        [anon_sym_RBRACE] = 75,
        [anon_sym_RBRACK] = 75,
    },
    [14] = {
        [anon_sym_COMMA] = 77,
        [anon_sym_RBRACK] = 77,
    },
    [15] = {
        [aux_sym_object_repeat1] = 79,
        [anon_sym_COMMA] = 81,
        [anon_sym_RBRACE] = 83,
    },
    [16] = {
        [aux_sym_object_repeat1] = 85,
        [aux_sym_array_repeat1] = 85,
        [ts_builtin_sym_end] = 85,
        [anon_sym_COMMA] = 85,
        [anon_sym_RBRACE] = 85,
        [anon_sym_RBRACK] = 85,
    },
    [17] = {
        [anon_sym_COLON] = 87,
    },
    [18] = {
        [sym__value] = 89,
        [sym_object] = 31,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [sym_string] = 31,
        [sym_number] = 37,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [19] = {
        [aux_sym_object_repeat1] = 91,
        [anon_sym_COMMA] = 91,
        [anon_sym_RBRACE] = 91,
    },
    [20] = {
        [anon_sym_COMMA] = 93,
        [anon_sym_RBRACE] = 95,
    },
    [21] = {
        [sym_pair] = 97,
        [sym_string] = 47,
        [sym_number] = 49,
    },
    [22] = {
        [aux_sym_object_repeat1] = 99,
        [aux_sym_array_repeat1] = 99,
        [ts_builtin_sym_end] = 99,
        [anon_sym_COMMA] = 99,
        [anon_sym_RBRACE] = 99,
        [anon_sym_RBRACK] = 99,
    },
    [23] = {
        [anon_sym_COMMA] = 101,
        [anon_sym_RBRACE] = 101,
    },
    [24] = {
        [sym_pair] = 103,
        [sym_string] = 47,
        [sym_number] = 49,
    },
    [25] = {
        [aux_sym_object_repeat1] = 105,
        [aux_sym_array_repeat1] = 105,
        [ts_builtin_sym_end] = 105,
        [anon_sym_COMMA] = 105,
        [anon_sym_RBRACE] = 105,
        [anon_sym_RBRACK] = 105,
    },
    [26] = {
        [anon_sym_COMMA] = 107,
        [anon_sym_RBRACE] = 107,
    },
    [27] = {
        [sym__value] = 109,
        [sym_object] = 31,
        [sym_pair] = 111,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [sym_string] = 113,
        [sym_number] = 115,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [28] = {
        [aux_sym_object_repeat1] = 117,
        [aux_sym_array_repeat1] = 117,
        [ts_builtin_sym_end] = 121,
        [anon_sym_COMMA] = 121,
        [anon_sym_RBRACE] = 121,
        [anon_sym_RBRACK] = 121,
    },
    [29] = {
        [sym__value] = 125,
        [sym_object] = 31,
        [sym_array] = 31,
        [anon_sym_LBRACE] = 33,
        [anon_sym_LBRACK] = 35,
        [sym_string] = 31,
        [sym_number] = 37,
        [sym_true] = 31,
        [sym_false] = 31,
        [sym_null] = 31,
    },
    [30] = {
        [aux_sym_object_repeat1] = 127,
        [aux_sym_array_repeat1] = 127,
        [ts_builtin_sym_end] = 131,
        [anon_sym_COMMA] = 131,
        [anon_sym_RBRACE] = 131,
        [anon_sym_RBRACK] = 131,
    },
    [31] = {
        [aux_sym_object_repeat1] = 41,
        [aux_sym_array_repeat1] = 41,
        [ts_builtin_sym_end] = 41,
        [anon_sym_COMMA] = 41,
        [anon_sym_RBRACE] = 41,
        [anon_sym_COLON] = 87,
        [anon_sym_RBRACK] = 41,
    },
    [32] = {
        [aux_sym_object_repeat1] = 135,
        [aux_sym_array_repeat1] = 137,
        [ts_builtin_sym_end] = 39,
        [anon_sym_COMMA] = 139,
        [anon_sym_RBRACE] = 91,
        [anon_sym_RBRACK] = 144,
    },
    [33] = {
        [aux_sym_object_repeat1] = 148,
        [anon_sym_COMMA] = 150,
        [anon_sym_RBRACE] = 154,
    },
    [34] = {
        [aux_sym_object_repeat1] = 135,
        [anon_sym_COMMA] = 91,
        [anon_sym_RBRACE] = 91,
    },
    [35] = {
        [anon_sym_COMMA] = 158,
        [anon_sym_RBRACK] = 158,
    },
    [36] = {
        [anon_sym_COMMA] = 161,
        [anon_sym_RBRACE] = 161,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(32),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(33),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(20),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(8),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(27),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(29),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(30),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(31),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(31),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__value, 1),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 3),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 4),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 3),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 3),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 4),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 3),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [117] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_object, 2), REDUCE(sym_object, 3), REDUCE(sym_object, 4),
    [121] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2), REDUCE(sym_object, 3), REDUCE(sym_object, 4),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [127] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array, 2), REDUCE(sym_array, 3), REDUCE(sym_array, 4),
    [131] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2), REDUCE(sym_array, 3), REDUCE(sym_array, 4),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
    [139] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(sym_pair, 3), REDUCE(aux_sym_array_repeat1, 3), SHIFT(9),
    [144] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(aux_sym_array_repeat1, 3), SHIFT(10),
    [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
    [150] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3), SHIFT(21),
    [154] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3), SHIFT(22),
    [158] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(aux_sym_array_repeat1, 3),
    [161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_json);
