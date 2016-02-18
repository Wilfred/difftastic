#include "tree_sitter/parser.h"

#define STATE_COUNT 41
#define SYMBOL_COUNT 23

enum {
    sym_program = ts_builtin_sym_start,
    sym__compound_statement,
    sym__statement,
    sym__expression,
    sym__argument,
    sym__primary,
    sym__variable,
    sym_identifier,
    sym__terminator,
    aux_sym__compound_statement_repeat1,
    aux_sym_identifier_repeat1,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
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
    [sym__compound_statement] = "_compound_statement",
    [sym__statement] = "_statement",
    [sym__expression] = "_expression",
    [sym__argument] = "_argument",
    [sym__primary] = "_primary",
    [sym__variable] = "_variable",
    [sym_identifier] = "identifier",
    [sym__terminator] = "_terminator",
    [aux_sym__compound_statement_repeat1] = "_compound_statement_repeat1",
    [aux_sym_identifier_repeat1] = "identifier_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
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
    [sym__compound_statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__argument] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__primary] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__variable] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__terminator] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__compound_statement_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(25);
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
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 6:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 7:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 8:
            if (lookahead == 'b')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            if (lookahead == 'e')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            if (lookahead == 'g')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            if (lookahead == 'i')
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            if (lookahead == 'n')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            if (lookahead == '\n')
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            if (lookahead == '=')
                ADVANCE(15);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(14);
            LEX_ERROR();
        case 15:
            if (lookahead == '=')
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(16);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == 'e')))
                ADVANCE(14);
            LEX_ERROR();
        case 16:
            if (lookahead == '=')
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(17);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == 'n')))
                ADVANCE(14);
            LEX_ERROR();
        case 17:
            if (lookahead == '=')
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(18);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == 'd')))
                ADVANCE(14);
            LEX_ERROR();
        case 18:
            if (lookahead == '\n')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(15);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(14);
            LEX_ERROR();
        case 19:
            ACCEPT_TOKEN(sym_comment);
        case 20:
            ACCEPT_TOKEN(anon_sym_AT);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(23);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(24);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_nil);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'l')
                ADVANCE(27);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(28);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_self);
        case 29:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(29);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(25);
            LEX_ERROR();
        case 30:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(30);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 31:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(31);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(25);
            LEX_ERROR();
        case 32:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(32);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            LEX_ERROR();
        case 33:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(33);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(25);
            LEX_ERROR();
        case 34:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(34);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            LEX_ERROR();
        case 35:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(35);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 36:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(36);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '@')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(25);
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
    [4] = 31,
    [5] = 31,
    [6] = 31,
    [7] = 31,
    [8] = 31,
    [9] = 30,
    [10] = 32,
    [11] = 33,
    [12] = 34,
    [13] = 31,
    [14] = 32,
    [15] = 35,
    [16] = 36,
    [17] = 36,
    [18] = 36,
    [19] = 36,
    [20] = 36,
    [21] = 36,
    [22] = 35,
    [23] = 32,
    [24] = 33,
    [25] = 36,
    [26] = 35,
    [27] = 36,
    [28] = 36,
    [29] = 33,
    [30] = 35,
    [31] = 36,
    [32] = 33,
    [33] = 35,
    [34] = 31,
    [35] = 31,
    [36] = 29,
    [37] = 30,
    [38] = 31,
    [39] = 29,
    [40] = 30,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = 2,
        [sym__compound_statement] = 4,
        [sym__statement] = 6,
        [sym__expression] = 8,
        [sym__argument] = 10,
        [sym__primary] = 12,
        [sym__variable] = 14,
        [sym_identifier] = 16,
        [aux_sym__compound_statement_repeat1] = 18,
        [aux_sym_identifier_repeat1] = 20,
        [ts_builtin_sym_end] = 22,
        [anon_sym_LPAREN] = 24,
        [anon_sym_nil] = 16,
        [anon_sym_self] = 16,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 28,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [1] = {
        [ts_builtin_sym_end] = 32,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [2] = {
        [ts_builtin_sym_end] = 34,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [3] = {
        [sym__statement] = 6,
        [sym__expression] = 8,
        [sym__argument] = 10,
        [sym__primary] = 12,
        [sym__variable] = 14,
        [sym_identifier] = 16,
        [sym__terminator] = 36,
        [aux_sym__compound_statement_repeat1] = 38,
        [aux_sym_identifier_repeat1] = 20,
        [ts_builtin_sym_end] = 40,
        [anon_sym_LPAREN] = 24,
        [anon_sym_nil] = 16,
        [anon_sym_self] = 16,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 28,
        [sym_comment] = 30,
        [sym__line_break] = 42,
        [anon_sym_SEMI] = 44,
    },
    [4] = {
        [sym__statement] = 46,
        [sym__expression] = 46,
        [sym__argument] = 46,
        [sym__primary] = 46,
        [sym__variable] = 46,
        [sym_identifier] = 46,
        [sym__terminator] = 46,
        [aux_sym__compound_statement_repeat1] = 46,
        [aux_sym_identifier_repeat1] = 46,
        [ts_builtin_sym_end] = 46,
        [anon_sym_LPAREN] = 46,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [anon_sym_AT] = 46,
        [anon_sym_DOLLAR] = 46,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 46,
        [sym_comment] = 30,
        [sym__line_break] = 46,
        [anon_sym_SEMI] = 46,
    },
    [5] = {
        [sym__statement] = 48,
        [sym__expression] = 48,
        [sym__argument] = 48,
        [sym__primary] = 48,
        [sym__variable] = 48,
        [sym_identifier] = 48,
        [sym__terminator] = 48,
        [aux_sym__compound_statement_repeat1] = 48,
        [aux_sym_identifier_repeat1] = 48,
        [ts_builtin_sym_end] = 48,
        [anon_sym_LPAREN] = 48,
        [anon_sym_nil] = 48,
        [anon_sym_self] = 48,
        [anon_sym_AT] = 48,
        [anon_sym_DOLLAR] = 48,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 48,
        [sym_comment] = 30,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 48,
    },
    [6] = {
        [sym__statement] = 50,
        [sym__expression] = 50,
        [sym__argument] = 50,
        [sym__primary] = 50,
        [sym__variable] = 50,
        [sym_identifier] = 50,
        [sym__terminator] = 50,
        [aux_sym__compound_statement_repeat1] = 50,
        [aux_sym_identifier_repeat1] = 50,
        [ts_builtin_sym_end] = 50,
        [anon_sym_LPAREN] = 50,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [anon_sym_AT] = 50,
        [anon_sym_DOLLAR] = 50,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 50,
        [sym_comment] = 30,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 50,
    },
    [7] = {
        [sym__statement] = 52,
        [sym__expression] = 52,
        [sym__argument] = 52,
        [sym__primary] = 52,
        [sym__variable] = 52,
        [sym_identifier] = 52,
        [sym__terminator] = 52,
        [aux_sym__compound_statement_repeat1] = 52,
        [aux_sym_identifier_repeat1] = 52,
        [ts_builtin_sym_end] = 52,
        [anon_sym_LPAREN] = 52,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [anon_sym_AT] = 52,
        [anon_sym_DOLLAR] = 52,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 52,
        [sym_comment] = 30,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 52,
    },
    [8] = {
        [sym__statement] = 54,
        [sym__expression] = 54,
        [sym__argument] = 54,
        [sym__primary] = 54,
        [sym__variable] = 54,
        [sym_identifier] = 54,
        [sym__terminator] = 54,
        [aux_sym__compound_statement_repeat1] = 54,
        [aux_sym_identifier_repeat1] = 54,
        [ts_builtin_sym_end] = 54,
        [anon_sym_LPAREN] = 54,
        [anon_sym_nil] = 54,
        [anon_sym_self] = 54,
        [anon_sym_AT] = 54,
        [anon_sym_DOLLAR] = 54,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 54,
        [sym_comment] = 30,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 54,
    },
    [9] = {
        [ts_builtin_sym_end] = 56,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [10] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [11] = {
        [sym__compound_statement] = 60,
        [sym__statement] = 62,
        [sym__expression] = 64,
        [sym__argument] = 66,
        [sym__primary] = 68,
        [sym__variable] = 70,
        [sym_identifier] = 72,
        [aux_sym__compound_statement_repeat1] = 74,
        [aux_sym_identifier_repeat1] = 76,
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 22,
        [anon_sym_nil] = 72,
        [anon_sym_self] = 72,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 80,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [12] = {
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 84,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [13] = {
        [sym__statement] = 86,
        [sym__expression] = 86,
        [sym__argument] = 86,
        [sym__primary] = 86,
        [sym__variable] = 86,
        [sym_identifier] = 86,
        [sym__terminator] = 86,
        [aux_sym__compound_statement_repeat1] = 86,
        [aux_sym_identifier_repeat1] = 86,
        [ts_builtin_sym_end] = 86,
        [anon_sym_LPAREN] = 86,
        [anon_sym_nil] = 86,
        [anon_sym_self] = 86,
        [anon_sym_AT] = 86,
        [anon_sym_DOLLAR] = 86,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 86,
        [sym_comment] = 30,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [14] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [15] = {
        [anon_sym_RPAREN] = 90,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [16] = {
        [sym__statement] = 62,
        [sym__expression] = 64,
        [sym__argument] = 66,
        [sym__primary] = 68,
        [sym__variable] = 70,
        [sym_identifier] = 72,
        [sym__terminator] = 92,
        [aux_sym__compound_statement_repeat1] = 94,
        [aux_sym_identifier_repeat1] = 76,
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 40,
        [anon_sym_nil] = 72,
        [anon_sym_self] = 72,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 80,
        [sym_comment] = 30,
        [sym__line_break] = 96,
        [anon_sym_SEMI] = 98,
    },
    [17] = {
        [sym__statement] = 46,
        [sym__expression] = 46,
        [sym__argument] = 46,
        [sym__primary] = 46,
        [sym__variable] = 46,
        [sym_identifier] = 46,
        [sym__terminator] = 46,
        [aux_sym__compound_statement_repeat1] = 46,
        [aux_sym_identifier_repeat1] = 46,
        [anon_sym_LPAREN] = 46,
        [anon_sym_RPAREN] = 46,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [anon_sym_AT] = 46,
        [anon_sym_DOLLAR] = 46,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 46,
        [sym_comment] = 30,
        [sym__line_break] = 46,
        [anon_sym_SEMI] = 46,
    },
    [18] = {
        [sym__statement] = 48,
        [sym__expression] = 48,
        [sym__argument] = 48,
        [sym__primary] = 48,
        [sym__variable] = 48,
        [sym_identifier] = 48,
        [sym__terminator] = 48,
        [aux_sym__compound_statement_repeat1] = 48,
        [aux_sym_identifier_repeat1] = 48,
        [anon_sym_LPAREN] = 48,
        [anon_sym_RPAREN] = 48,
        [anon_sym_nil] = 48,
        [anon_sym_self] = 48,
        [anon_sym_AT] = 48,
        [anon_sym_DOLLAR] = 48,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 48,
        [sym_comment] = 30,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 48,
    },
    [19] = {
        [sym__statement] = 50,
        [sym__expression] = 50,
        [sym__argument] = 50,
        [sym__primary] = 50,
        [sym__variable] = 50,
        [sym_identifier] = 50,
        [sym__terminator] = 50,
        [aux_sym__compound_statement_repeat1] = 50,
        [aux_sym_identifier_repeat1] = 50,
        [anon_sym_LPAREN] = 50,
        [anon_sym_RPAREN] = 50,
        [anon_sym_nil] = 50,
        [anon_sym_self] = 50,
        [anon_sym_AT] = 50,
        [anon_sym_DOLLAR] = 50,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 50,
        [sym_comment] = 30,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 50,
    },
    [20] = {
        [sym__statement] = 52,
        [sym__expression] = 52,
        [sym__argument] = 52,
        [sym__primary] = 52,
        [sym__variable] = 52,
        [sym_identifier] = 52,
        [sym__terminator] = 52,
        [aux_sym__compound_statement_repeat1] = 52,
        [aux_sym_identifier_repeat1] = 52,
        [anon_sym_LPAREN] = 52,
        [anon_sym_RPAREN] = 52,
        [anon_sym_nil] = 52,
        [anon_sym_self] = 52,
        [anon_sym_AT] = 52,
        [anon_sym_DOLLAR] = 52,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 52,
        [sym_comment] = 30,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 52,
    },
    [21] = {
        [sym__statement] = 54,
        [sym__expression] = 54,
        [sym__argument] = 54,
        [sym__primary] = 54,
        [sym__variable] = 54,
        [sym_identifier] = 54,
        [sym__terminator] = 54,
        [aux_sym__compound_statement_repeat1] = 54,
        [aux_sym_identifier_repeat1] = 54,
        [anon_sym_LPAREN] = 54,
        [anon_sym_RPAREN] = 54,
        [anon_sym_nil] = 54,
        [anon_sym_self] = 54,
        [anon_sym_AT] = 54,
        [anon_sym_DOLLAR] = 54,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 54,
        [sym_comment] = 30,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 54,
    },
    [22] = {
        [anon_sym_RPAREN] = 56,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [23] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 100,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [24] = {
        [sym__compound_statement] = 102,
        [sym__statement] = 62,
        [sym__expression] = 64,
        [sym__argument] = 66,
        [sym__primary] = 68,
        [sym__variable] = 70,
        [sym_identifier] = 72,
        [aux_sym__compound_statement_repeat1] = 74,
        [aux_sym_identifier_repeat1] = 76,
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 22,
        [anon_sym_nil] = 72,
        [anon_sym_self] = 72,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 80,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [25] = {
        [sym__statement] = 86,
        [sym__expression] = 86,
        [sym__argument] = 86,
        [sym__primary] = 86,
        [sym__variable] = 86,
        [sym_identifier] = 86,
        [sym__terminator] = 86,
        [aux_sym__compound_statement_repeat1] = 86,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_LPAREN] = 86,
        [anon_sym_RPAREN] = 86,
        [anon_sym_nil] = 86,
        [anon_sym_self] = 86,
        [anon_sym_AT] = 86,
        [anon_sym_DOLLAR] = 86,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 86,
        [sym_comment] = 30,
        [sym__line_break] = 86,
        [anon_sym_SEMI] = 86,
    },
    [26] = {
        [anon_sym_RPAREN] = 104,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [27] = {
        [sym__statement] = 106,
        [sym__expression] = 106,
        [sym__argument] = 106,
        [sym__primary] = 106,
        [sym__variable] = 106,
        [sym_identifier] = 106,
        [sym__terminator] = 106,
        [aux_sym__compound_statement_repeat1] = 106,
        [aux_sym_identifier_repeat1] = 106,
        [anon_sym_LPAREN] = 106,
        [anon_sym_RPAREN] = 106,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 106,
        [anon_sym_DOLLAR] = 106,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 106,
        [sym_comment] = 30,
        [sym__line_break] = 106,
        [anon_sym_SEMI] = 106,
    },
    [28] = {
        [sym__statement] = 108,
        [sym__expression] = 108,
        [sym__argument] = 108,
        [sym__primary] = 108,
        [sym__variable] = 108,
        [sym_identifier] = 108,
        [sym__terminator] = 108,
        [aux_sym__compound_statement_repeat1] = 108,
        [aux_sym_identifier_repeat1] = 108,
        [anon_sym_LPAREN] = 108,
        [anon_sym_RPAREN] = 108,
        [anon_sym_nil] = 108,
        [anon_sym_self] = 108,
        [anon_sym_AT] = 108,
        [anon_sym_DOLLAR] = 108,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 30,
        [sym__line_break] = 108,
        [anon_sym_SEMI] = 108,
    },
    [29] = {
        [sym__statement] = 62,
        [sym__expression] = 64,
        [sym__argument] = 66,
        [sym__primary] = 68,
        [sym__variable] = 70,
        [sym_identifier] = 72,
        [aux_sym__compound_statement_repeat1] = 110,
        [aux_sym_identifier_repeat1] = 76,
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 112,
        [anon_sym_nil] = 72,
        [anon_sym_self] = 72,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 80,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [30] = {
        [anon_sym_RPAREN] = 112,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [31] = {
        [sym__statement] = 114,
        [sym__expression] = 114,
        [sym__argument] = 114,
        [sym__primary] = 114,
        [sym__variable] = 114,
        [sym_identifier] = 114,
        [sym__terminator] = 116,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_LPAREN] = 114,
        [anon_sym_RPAREN] = 114,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [anon_sym_AT] = 114,
        [anon_sym_DOLLAR] = 114,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 30,
        [sym__line_break] = 30,
        [anon_sym_SEMI] = 116,
    },
    [32] = {
        [sym__statement] = 114,
        [sym__expression] = 114,
        [sym__argument] = 114,
        [sym__primary] = 114,
        [sym__variable] = 114,
        [sym_identifier] = 114,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_LPAREN] = 114,
        [anon_sym_RPAREN] = 114,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [anon_sym_AT] = 114,
        [anon_sym_DOLLAR] = 114,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [33] = {
        [anon_sym_RPAREN] = 118,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [34] = {
        [sym__statement] = 106,
        [sym__expression] = 106,
        [sym__argument] = 106,
        [sym__primary] = 106,
        [sym__variable] = 106,
        [sym_identifier] = 106,
        [sym__terminator] = 106,
        [aux_sym__compound_statement_repeat1] = 106,
        [aux_sym_identifier_repeat1] = 106,
        [ts_builtin_sym_end] = 106,
        [anon_sym_LPAREN] = 106,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 106,
        [anon_sym_DOLLAR] = 106,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 106,
        [sym_comment] = 30,
        [sym__line_break] = 106,
        [anon_sym_SEMI] = 106,
    },
    [35] = {
        [sym__statement] = 108,
        [sym__expression] = 108,
        [sym__argument] = 108,
        [sym__primary] = 108,
        [sym__variable] = 108,
        [sym_identifier] = 108,
        [sym__terminator] = 108,
        [aux_sym__compound_statement_repeat1] = 108,
        [aux_sym_identifier_repeat1] = 108,
        [ts_builtin_sym_end] = 108,
        [anon_sym_LPAREN] = 108,
        [anon_sym_nil] = 108,
        [anon_sym_self] = 108,
        [anon_sym_AT] = 108,
        [anon_sym_DOLLAR] = 108,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 30,
        [sym__line_break] = 108,
        [anon_sym_SEMI] = 108,
    },
    [36] = {
        [sym__statement] = 6,
        [sym__expression] = 8,
        [sym__argument] = 10,
        [sym__primary] = 12,
        [sym__variable] = 14,
        [sym_identifier] = 16,
        [aux_sym__compound_statement_repeat1] = 120,
        [aux_sym_identifier_repeat1] = 20,
        [ts_builtin_sym_end] = 112,
        [anon_sym_LPAREN] = 24,
        [anon_sym_nil] = 16,
        [anon_sym_self] = 16,
        [anon_sym_AT] = 26,
        [anon_sym_DOLLAR] = 26,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 28,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [37] = {
        [ts_builtin_sym_end] = 112,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [38] = {
        [sym__statement] = 114,
        [sym__expression] = 114,
        [sym__argument] = 114,
        [sym__primary] = 114,
        [sym__variable] = 114,
        [sym_identifier] = 114,
        [sym__terminator] = 116,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_LPAREN] = 114,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [anon_sym_AT] = 114,
        [anon_sym_DOLLAR] = 114,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 30,
        [sym__line_break] = 30,
        [anon_sym_SEMI] = 116,
    },
    [39] = {
        [sym__statement] = 114,
        [sym__expression] = 114,
        [sym__argument] = 114,
        [sym__primary] = 114,
        [sym__variable] = 114,
        [sym_identifier] = 114,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_LPAREN] = 114,
        [anon_sym_nil] = 114,
        [anon_sym_self] = 114,
        [anon_sym_AT] = 114,
        [anon_sym_DOLLAR] = 114,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 30,
        [sym__line_break] = 30,
    },
    [40] = {
        [ts_builtin_sym_end] = 118,
        [sym_comment] = 30,
        [sym__line_break] = 30,
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
    [20] = {.count = 1}, SHIFT(10, 0),
    [22] = {.count = 1}, REDUCE(sym__compound_statement, 0, 0),
    [24] = {.count = 1}, SHIFT(11, 0),
    [26] = {.count = 1}, SHIFT(12, 0),
    [28] = {.count = 1}, SHIFT(13, 0),
    [30] = {.count = 1}, SHIFT_EXTRA(),
    [32] = {.count = 1}, ACCEPT_INPUT(),
    [34] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [36] = {.count = 1}, SHIFT(36, 0),
    [38] = {.count = 1}, SHIFT(37, 0),
    [40] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 1, 0),
    [42] = {.count = 1}, SHIFT(38, 0),
    [44] = {.count = 1}, SHIFT(39, 0),
    [46] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [52] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [54] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [56] = {.count = 1}, REDUCE(sym__compound_statement, 1, 0),
    [58] = {.count = 1}, SHIFT(35, 0),
    [60] = {.count = 1}, SHIFT(15, 0),
    [62] = {.count = 1}, SHIFT(16, 0),
    [64] = {.count = 1}, SHIFT(17, 0),
    [66] = {.count = 1}, SHIFT(18, 0),
    [68] = {.count = 1}, SHIFT(19, 0),
    [70] = {.count = 1}, SHIFT(20, 0),
    [72] = {.count = 1}, SHIFT(21, 0),
    [74] = {.count = 1}, SHIFT(22, 0),
    [76] = {.count = 1}, SHIFT(23, 0),
    [78] = {.count = 1}, SHIFT(24, 0),
    [80] = {.count = 1}, SHIFT(25, 0),
    [82] = {.count = 1}, SHIFT(14, 0),
    [84] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [86] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [88] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [90] = {.count = 1}, SHIFT(34, 0),
    [92] = {.count = 1}, SHIFT(29, 0),
    [94] = {.count = 1}, SHIFT(30, 0),
    [96] = {.count = 1}, SHIFT(31, 0),
    [98] = {.count = 1}, SHIFT(32, 0),
    [100] = {.count = 1}, SHIFT(28, 0),
    [102] = {.count = 1}, SHIFT(26, 0),
    [104] = {.count = 1}, SHIFT(27, 0),
    [106] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [108] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [110] = {.count = 1}, SHIFT(33, 0),
    [112] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 2, 0),
    [114] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [116] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [118] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 3, 0),
    [120] = {.count = 1}, SHIFT(40, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
