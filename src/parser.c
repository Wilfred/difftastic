#include "tree_sitter/parser.h"

#define STATE_COUNT 19
#define SYMBOL_COUNT 20

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__expression,
    sym__argument,
    sym__primary,
    sym__variable,
    sym_identifier,
    sym__terminator,
    aux_sym_program_repeat1,
    aux_sym_identifier_repeat1,
    anon_sym_nil,
    anon_sym_self,
    anon_sym_AT,
    anon_sym_DOLLAR,
    aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH,
    sym_comment,
    sym__line_break,
    anon_sym_SEMI,
};

static const char *ts_symbol_names[] = {
    [sym_program] = "program",
    [sym__statement] = "_statement",
    [sym__expression] = "_expression",
    [sym__argument] = "_argument",
    [sym__primary] = "_primary",
    [sym__variable] = "_variable",
    [sym_identifier] = "identifier",
    [sym__terminator] = "_terminator",
    [aux_sym_program_repeat1] = "program_repeat1",
    [aux_sym_identifier_repeat1] = "identifier_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_nil] = "nil",
    [anon_sym_self] = "self",
    [anon_sym_AT] = "@",
    [anon_sym_DOLLAR] = "$",
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = "/[a-zA-Z_][a-zA-Z0-9_]*/",
    [sym_comment] = "comment",
    [sym__line_break] = "_line_break",
    [anon_sym_SEMI] = ";",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_program] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__argument] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__primary] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__variable] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__terminator] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_program_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_nil] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_self] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOLLAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_comment] = {.visible = true, .named = true, .structural = false, .extra = true},
    [sym__line_break] = {.visible = false, .named = false, .structural = true, .extra = true},
    [anon_sym_SEMI] = {.visible = true, .named = false, .structural = true, .extra = false},
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(0);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(5);
            if (lookahead == '@')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'n')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(11);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(sym__line_break);
        case 3:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_comment);
        case 4:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
        case 5:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 6:
            ACCEPT_TOKEN(anon_sym_AT);
        case 7:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 8:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(9);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 9:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'l')
                ADVANCE(10);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            ACCEPT_TOKEN(anon_sym_nil);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(12);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'l')
                ADVANCE(13);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(14);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            ACCEPT_TOKEN(anon_sym_self);
        case 15:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(15);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '@')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            if (lookahead == 'n')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(11);
            LEX_ERROR();
        case 16:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(16);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            LEX_ERROR();
        case 17:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(17);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            LEX_ERROR();
        case 18:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(18);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '@')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(7);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 15,
    [1] = 16,
    [2] = 0,
    [3] = 0,
    [4] = 0,
    [5] = 0,
    [6] = 0,
    [7] = 0,
    [8] = 16,
    [9] = 17,
    [10] = 18,
    [11] = 0,
    [12] = 17,
    [13] = 0,
    [14] = 15,
    [15] = 16,
    [16] = 0,
    [17] = 15,
    [18] = 16,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = 2,
        [sym__statement] = 4,
        [sym__expression] = 6,
        [sym__argument] = 8,
        [sym__primary] = 10,
        [sym__variable] = 12,
        [sym_identifier] = 14,
        [aux_sym_program_repeat1] = 16,
        [aux_sym_identifier_repeat1] = 18,
        [ts_builtin_sym_end] = 20,
        [anon_sym_nil] = 14,
        [anon_sym_self] = 14,
        [anon_sym_AT] = 22,
        [anon_sym_DOLLAR] = 22,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 24,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [1] = {
        [ts_builtin_sym_end] = 28,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [2] = {
        [sym__statement] = 4,
        [sym__expression] = 6,
        [sym__argument] = 8,
        [sym__primary] = 10,
        [sym__variable] = 12,
        [sym_identifier] = 14,
        [sym__terminator] = 30,
        [aux_sym_program_repeat1] = 32,
        [aux_sym_identifier_repeat1] = 18,
        [ts_builtin_sym_end] = 34,
        [anon_sym_nil] = 14,
        [anon_sym_self] = 14,
        [anon_sym_AT] = 22,
        [anon_sym_DOLLAR] = 22,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 24,
        [sym_comment] = 26,
        [sym__line_break] = 36,
        [anon_sym_SEMI] = 38,
    },
    [3] = {
        [sym__statement] = 40,
        [sym__expression] = 40,
        [sym__argument] = 40,
        [sym__primary] = 40,
        [sym__variable] = 40,
        [sym_identifier] = 40,
        [sym__terminator] = 40,
        [aux_sym_program_repeat1] = 40,
        [aux_sym_identifier_repeat1] = 40,
        [ts_builtin_sym_end] = 40,
        [anon_sym_nil] = 40,
        [anon_sym_self] = 40,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 40,
        [sym_comment] = 26,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 40,
    },
    [4] = {
        [sym__statement] = 42,
        [sym__expression] = 42,
        [sym__argument] = 42,
        [sym__primary] = 42,
        [sym__variable] = 42,
        [sym_identifier] = 42,
        [sym__terminator] = 42,
        [aux_sym_program_repeat1] = 42,
        [aux_sym_identifier_repeat1] = 42,
        [ts_builtin_sym_end] = 42,
        [anon_sym_nil] = 42,
        [anon_sym_self] = 42,
        [anon_sym_AT] = 42,
        [anon_sym_DOLLAR] = 42,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 26,
        [sym__line_break] = 42,
        [anon_sym_SEMI] = 42,
    },
    [5] = {
        [sym__statement] = 44,
        [sym__expression] = 44,
        [sym__argument] = 44,
        [sym__primary] = 44,
        [sym__variable] = 44,
        [sym_identifier] = 44,
        [sym__terminator] = 44,
        [aux_sym_program_repeat1] = 44,
        [aux_sym_identifier_repeat1] = 44,
        [ts_builtin_sym_end] = 44,
        [anon_sym_nil] = 44,
        [anon_sym_self] = 44,
        [anon_sym_AT] = 44,
        [anon_sym_DOLLAR] = 44,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 44,
        [sym_comment] = 26,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 44,
    },
    [6] = {
        [sym__statement] = 46,
        [sym__expression] = 46,
        [sym__argument] = 46,
        [sym__primary] = 46,
        [sym__variable] = 46,
        [sym_identifier] = 46,
        [sym__terminator] = 46,
        [aux_sym_program_repeat1] = 46,
        [aux_sym_identifier_repeat1] = 46,
        [ts_builtin_sym_end] = 46,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [anon_sym_AT] = 46,
        [anon_sym_DOLLAR] = 46,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 46,
        [sym_comment] = 26,
        [sym__line_break] = 46,
        [anon_sym_SEMI] = 46,
    },
    [7] = {
        [sym__statement] = 48,
        [sym__expression] = 48,
        [sym__argument] = 48,
        [sym__primary] = 48,
        [sym__variable] = 48,
        [sym_identifier] = 48,
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 48,
        [aux_sym_identifier_repeat1] = 48,
        [ts_builtin_sym_end] = 48,
        [anon_sym_nil] = 48,
        [anon_sym_self] = 48,
        [anon_sym_AT] = 48,
        [anon_sym_DOLLAR] = 48,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 48,
        [sym_comment] = 26,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 48,
    },
    [8] = {
        [ts_builtin_sym_end] = 50,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [9] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 52,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [10] = {
        [aux_sym_identifier_repeat1] = 54,
        [anon_sym_AT] = 22,
        [anon_sym_DOLLAR] = 22,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 56,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [11] = {
        [sym__statement] = 58,
        [sym__expression] = 58,
        [sym__argument] = 58,
        [sym__primary] = 58,
        [sym__variable] = 58,
        [sym_identifier] = 58,
        [sym__terminator] = 58,
        [aux_sym_program_repeat1] = 58,
        [aux_sym_identifier_repeat1] = 58,
        [ts_builtin_sym_end] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 26,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [12] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [13] = {
        [sym__statement] = 62,
        [sym__expression] = 62,
        [sym__argument] = 62,
        [sym__primary] = 62,
        [sym__variable] = 62,
        [sym_identifier] = 62,
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [aux_sym_identifier_repeat1] = 62,
        [ts_builtin_sym_end] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 26,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [14] = {
        [sym__statement] = 4,
        [sym__expression] = 6,
        [sym__argument] = 8,
        [sym__primary] = 10,
        [sym__variable] = 12,
        [sym_identifier] = 14,
        [aux_sym_program_repeat1] = 64,
        [aux_sym_identifier_repeat1] = 18,
        [ts_builtin_sym_end] = 66,
        [anon_sym_nil] = 14,
        [anon_sym_self] = 14,
        [anon_sym_AT] = 22,
        [anon_sym_DOLLAR] = 22,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 24,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [15] = {
        [ts_builtin_sym_end] = 66,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [16] = {
        [sym__statement] = 68,
        [sym__expression] = 68,
        [sym__argument] = 68,
        [sym__primary] = 68,
        [sym__variable] = 68,
        [sym_identifier] = 68,
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 68,
        [aux_sym_identifier_repeat1] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_nil] = 68,
        [anon_sym_self] = 68,
        [anon_sym_AT] = 68,
        [anon_sym_DOLLAR] = 68,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 68,
        [sym_comment] = 26,
        [sym__line_break] = 26,
        [anon_sym_SEMI] = 70,
    },
    [17] = {
        [sym__statement] = 68,
        [sym__expression] = 68,
        [sym__argument] = 68,
        [sym__primary] = 68,
        [sym__variable] = 68,
        [sym_identifier] = 68,
        [aux_sym_program_repeat1] = 68,
        [aux_sym_identifier_repeat1] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_nil] = 68,
        [anon_sym_self] = 68,
        [anon_sym_AT] = 68,
        [anon_sym_DOLLAR] = 68,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 68,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
    [18] = {
        [ts_builtin_sym_end] = 72,
        [sym_comment] = 26,
        [sym__line_break] = 26,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT(4, 0),
    [10] = {.count = 1}, SHIFT(5, 0),
    [12] = {.count = 1}, SHIFT(6, 0),
    [14] = {.count = 1}, SHIFT(7, 0),
    [16] = {.count = 1}, SHIFT(8, 0),
    [18] = {.count = 1}, SHIFT(9, 0),
    [20] = {.count = 1}, REDUCE(sym_program, 0, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, SHIFT(11, 0),
    [26] = {.count = 1}, SHIFT_EXTRA(),
    [28] = {.count = 1}, ACCEPT_INPUT(),
    [30] = {.count = 1}, SHIFT(14, 0),
    [32] = {.count = 1}, SHIFT(15, 0),
    [34] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 1, 0),
    [36] = {.count = 1}, SHIFT(16, 0),
    [38] = {.count = 1}, SHIFT(17, 0),
    [40] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [42] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [44] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [46] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [50] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [52] = {.count = 1}, SHIFT(13, 0),
    [54] = {.count = 1}, SHIFT(12, 0),
    [56] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [58] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [60] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [62] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [64] = {.count = 1}, SHIFT(18, 0),
    [66] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [68] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [70] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [72] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
