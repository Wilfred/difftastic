#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 1
#define STATE_COUNT 35
#define SYMBOL_COUNT 18
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0

enum {
    anon_sym_LBRACE = 1,
    anon_sym_COMMA = 2,
    anon_sym_RBRACE = 3,
    anon_sym_COLON = 4,
    anon_sym_LBRACK = 5,
    anon_sym_RBRACK = 6,
    sym_string = 7,
    sym_number = 8,
    sym_true = 9,
    sym_false = 10,
    sym_null = 11,
    sym__value = 12,
    sym_object = 13,
    sym_pair = 14,
    sym_array = 15,
    aux_sym_object_repeat1 = 16,
    aux_sym_array_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
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
    [sym__value] = "_value",
    [sym_object] = "object",
    [sym_pair] = "pair",
    [sym_array] = "array",
    [aux_sym_object_repeat1] = "object_repeat1",
    [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(30);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '0')
                ADVANCE(6);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 31:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(31);
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
        case 32:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(32);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == ']')
                ADVANCE(13);
            if (lookahead == '}')
                ADVANCE(28);
            LEX_ERROR();
        case 33:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(33);
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
            if (lookahead == ':')
                ADVANCE(11);
            LEX_ERROR();
        case 36:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(36);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '}')
                ADVANCE(28);
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

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0},
    [1] = {.lex_state = 29},
    [2] = {.lex_state = 30},
    [3] = {.lex_state = 31},
    [4] = {.lex_state = 32},
    [5] = {.lex_state = 33},
    [6] = {.lex_state = 32},
    [7] = {.lex_state = 34},
    [8] = {.lex_state = 29},
    [9] = {.lex_state = 32},
    [10] = {.lex_state = 34},
    [11] = {.lex_state = 29},
    [12] = {.lex_state = 32},
    [13] = {.lex_state = 34},
    [14] = {.lex_state = 34},
    [15] = {.lex_state = 32},
    [16] = {.lex_state = 35},
    [17] = {.lex_state = 36},
    [18] = {.lex_state = 37},
    [19] = {.lex_state = 32},
    [20] = {.lex_state = 36},
    [21] = {.lex_state = 37},
    [22] = {.lex_state = 32},
    [23] = {.lex_state = 36},
    [24] = {.lex_state = 36},
    [25] = {.lex_state = 29},
    [26] = {.lex_state = 36},
    [27] = {.lex_state = 29},
    [28] = {.lex_state = 32},
    [29] = {.lex_state = 32},
    [30] = {.lex_state = 38},
    [31] = {.lex_state = 32},
    [32] = {.lex_state = 36},
    [33] = {.lex_state = 34},
    [34] = {.lex_state = 36},
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym__value] = STATE(31),
        [sym_object] = STATE(4),
        [sym_pair] = STATE(32),
        [sym_array] = STATE(4),
        [aux_sym_object_repeat1] = STATE(20),
        [aux_sym_array_repeat1] = STATE(10),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(3),
        [anon_sym_COMMA] = ACTIONS(5),
        [anon_sym_RBRACE] = ACTIONS(7),
        [anon_sym_COLON] = ACTIONS(9),
        [anon_sym_LBRACK] = ACTIONS(11),
        [anon_sym_RBRACK] = ACTIONS(13),
        [sym_string] = ACTIONS(15),
        [sym_number] = ACTIONS(17),
        [sym_true] = ACTIONS(19),
        [sym_false] = ACTIONS(19),
        [sym_null] = ACTIONS(19),
    },
    [1] = {
        [sym__value] = STATE(5),
        [sym_object] = STATE(4),
        [sym_array] = STATE(4),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_LBRACK] = ACTIONS(23),
        [sym_string] = ACTIONS(25),
        [sym_number] = ACTIONS(27),
        [sym_true] = ACTIONS(25),
        [sym_false] = ACTIONS(25),
        [sym_null] = ACTIONS(25),
    },
    [2] = {
        [sym_pair] = STATE(17),
        [anon_sym_RBRACE] = ACTIONS(29),
        [sym_string] = ACTIONS(31),
        [sym_number] = ACTIONS(33),
    },
    [3] = {
        [sym__value] = STATE(7),
        [sym_object] = STATE(4),
        [sym_array] = STATE(4),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_LBRACK] = ACTIONS(23),
        [anon_sym_RBRACK] = ACTIONS(35),
        [sym_string] = ACTIONS(25),
        [sym_number] = ACTIONS(27),
        [sym_true] = ACTIONS(25),
        [sym_false] = ACTIONS(25),
        [sym_null] = ACTIONS(25),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(37),
        [anon_sym_COMMA] = ACTIONS(37),
        [anon_sym_RBRACE] = ACTIONS(37),
        [anon_sym_RBRACK] = ACTIONS(37),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(39),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(41),
        [anon_sym_COMMA] = ACTIONS(41),
        [anon_sym_RBRACE] = ACTIONS(41),
        [anon_sym_RBRACK] = ACTIONS(41),
    },
    [7] = {
        [aux_sym_array_repeat1] = STATE(10),
        [anon_sym_COMMA] = ACTIONS(43),
        [anon_sym_RBRACK] = ACTIONS(45),
    },
    [8] = {
        [sym__value] = STATE(14),
        [sym_object] = STATE(4),
        [sym_array] = STATE(4),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_LBRACK] = ACTIONS(23),
        [sym_string] = ACTIONS(25),
        [sym_number] = ACTIONS(27),
        [sym_true] = ACTIONS(25),
        [sym_false] = ACTIONS(25),
        [sym_null] = ACTIONS(25),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(47),
        [anon_sym_COMMA] = ACTIONS(47),
        [anon_sym_RBRACE] = ACTIONS(47),
        [anon_sym_RBRACK] = ACTIONS(47),
    },
    [10] = {
        [anon_sym_COMMA] = ACTIONS(49),
        [anon_sym_RBRACK] = ACTIONS(51),
    },
    [11] = {
        [sym__value] = STATE(13),
        [sym_object] = STATE(4),
        [sym_array] = STATE(4),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_LBRACK] = ACTIONS(23),
        [sym_string] = ACTIONS(25),
        [sym_number] = ACTIONS(27),
        [sym_true] = ACTIONS(25),
        [sym_false] = ACTIONS(25),
        [sym_null] = ACTIONS(25),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(53),
        [anon_sym_COMMA] = ACTIONS(53),
        [anon_sym_RBRACE] = ACTIONS(53),
        [anon_sym_RBRACK] = ACTIONS(53),
    },
    [13] = {
        [anon_sym_COMMA] = ACTIONS(55),
        [anon_sym_RBRACK] = ACTIONS(55),
    },
    [14] = {
        [anon_sym_COMMA] = ACTIONS(57),
        [anon_sym_RBRACK] = ACTIONS(57),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(59),
        [anon_sym_COMMA] = ACTIONS(59),
        [anon_sym_RBRACE] = ACTIONS(59),
        [anon_sym_RBRACK] = ACTIONS(59),
    },
    [16] = {
        [anon_sym_COLON] = ACTIONS(61),
    },
    [17] = {
        [aux_sym_object_repeat1] = STATE(20),
        [anon_sym_COMMA] = ACTIONS(63),
        [anon_sym_RBRACE] = ACTIONS(65),
    },
    [18] = {
        [sym_pair] = STATE(24),
        [sym_string] = ACTIONS(31),
        [sym_number] = ACTIONS(33),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_COMMA] = ACTIONS(67),
        [anon_sym_RBRACE] = ACTIONS(67),
        [anon_sym_RBRACK] = ACTIONS(67),
    },
    [20] = {
        [anon_sym_COMMA] = ACTIONS(69),
        [anon_sym_RBRACE] = ACTIONS(71),
    },
    [21] = {
        [sym_pair] = STATE(23),
        [sym_string] = ACTIONS(31),
        [sym_number] = ACTIONS(33),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(73),
        [anon_sym_COMMA] = ACTIONS(73),
        [anon_sym_RBRACE] = ACTIONS(73),
        [anon_sym_RBRACK] = ACTIONS(73),
    },
    [23] = {
        [anon_sym_COMMA] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(75),
    },
    [24] = {
        [anon_sym_COMMA] = ACTIONS(77),
        [anon_sym_RBRACE] = ACTIONS(77),
    },
    [25] = {
        [sym__value] = STATE(26),
        [sym_object] = STATE(4),
        [sym_array] = STATE(4),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_LBRACK] = ACTIONS(23),
        [sym_string] = ACTIONS(25),
        [sym_number] = ACTIONS(27),
        [sym_true] = ACTIONS(25),
        [sym_false] = ACTIONS(25),
        [sym_null] = ACTIONS(25),
    },
    [26] = {
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_RBRACE] = ACTIONS(79),
    },
    [27] = {
        [sym__value] = STATE(33),
        [sym_object] = STATE(4),
        [sym_pair] = STATE(34),
        [sym_array] = STATE(4),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_LBRACK] = ACTIONS(23),
        [sym_string] = ACTIONS(81),
        [sym_number] = ACTIONS(83),
        [sym_true] = ACTIONS(25),
        [sym_false] = ACTIONS(25),
        [sym_null] = ACTIONS(25),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_COMMA] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(85),
        [anon_sym_RBRACK] = ACTIONS(85),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_COMMA] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(89),
        [anon_sym_RBRACK] = ACTIONS(89),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(37),
        [anon_sym_COMMA] = ACTIONS(37),
        [anon_sym_RBRACE] = ACTIONS(37),
        [anon_sym_COLON] = ACTIONS(61),
        [anon_sym_RBRACK] = ACTIONS(37),
    },
    [31] = {
        [aux_sym_array_repeat1] = STATE(10),
        [ts_builtin_sym_end] = ACTIONS(39),
        [anon_sym_COMMA] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(79),
        [anon_sym_RBRACK] = ACTIONS(98),
    },
    [32] = {
        [aux_sym_object_repeat1] = STATE(20),
        [anon_sym_COMMA] = ACTIONS(102),
        [anon_sym_RBRACE] = ACTIONS(106),
    },
    [33] = {
        [anon_sym_COMMA] = ACTIONS(110),
        [anon_sym_RBRACK] = ACTIONS(110),
    },
    [34] = {
        [anon_sym_COMMA] = ACTIONS(113),
        [anon_sym_RBRACE] = ACTIONS(113),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(27),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(25),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(29),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(30),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(30),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__value, 1),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 3),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 4),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 3),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 3),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 4),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 3),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [85] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2), REDUCE(sym_object, 3), REDUCE(sym_object, 4),
    [89] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2), REDUCE(sym_array, 3), REDUCE(sym_array, 4),
    [93] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(sym_pair, 3), REDUCE(aux_sym_array_repeat1, 3), SHIFT(8),
    [98] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(aux_sym_array_repeat1, 3), SHIFT(9),
    [102] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3), SHIFT(18),
    [106] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3), SHIFT(19),
    [110] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(aux_sym_array_repeat1, 3),
    [113] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3),
};

const TSLanguage *tree_sitter_json() {
    GET_LANGUAGE();
}
