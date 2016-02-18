#include "tree_sitter/parser.h"

#define STATE_COUNT 99
#define SYMBOL_COUNT 33

enum {
    sym_program = ts_builtin_sym_start,
    sym__compound_statement,
    sym__statement,
    sym__call,
    sym__call_arguments,
    sym__command,
    sym__function_call,
    sym__expression,
    sym__argument,
    sym__primary,
    sym__variable,
    sym_identifier,
    sym__terminator,
    aux_sym__compound_statement_repeat1,
    aux_sym__call_arguments_repeat1,
    aux_sym_identifier_repeat1,
    anon_sym_do,
    anon_sym_PIPE,
    anon_sym_end,
    anon_sym_COMMA,
    anon_sym_super,
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
    [sym__call] = "_call",
    [sym__call_arguments] = "_call_arguments",
    [sym__command] = "_command",
    [sym__function_call] = "_function_call",
    [sym__expression] = "_expression",
    [sym__argument] = "_argument",
    [sym__primary] = "_primary",
    [sym__variable] = "_variable",
    [sym_identifier] = "identifier",
    [sym__terminator] = "_terminator",
    [aux_sym__compound_statement_repeat1] = "_compound_statement_repeat1",
    [aux_sym__call_arguments_repeat1] = "_call_arguments_repeat1",
    [aux_sym_identifier_repeat1] = "identifier_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_do] = "do",
    [anon_sym_PIPE] = "|",
    [anon_sym_end] = "end",
    [anon_sym_COMMA] = ",",
    [anon_sym_super] = "super",
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
    [sym__call] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__call_arguments] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__command] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__function_call] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__argument] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__primary] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__variable] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__terminator] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__compound_statement_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__call_arguments_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_do] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_end] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_super] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'e')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            if (lookahead == '|')
                ADVANCE(40);
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
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 8:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 9:
            if (lookahead == 'b')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            if (lookahead == 'e')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            if (lookahead == 'g')
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            if (lookahead == 'i')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            if (lookahead == 'n')
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            if (lookahead == '\n')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            if (lookahead == '\n')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(21);
            LEX_ERROR();
        case 16:
            if (lookahead == '\n')
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(17);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'e')))
                ADVANCE(21);
            LEX_ERROR();
        case 17:
            if (lookahead == '\n')
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(18);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'n')))
                ADVANCE(21);
            LEX_ERROR();
        case 18:
            if (lookahead == '\n')
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(19);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'd')))
                ADVANCE(21);
            LEX_ERROR();
        case 19:
            if (lookahead == '\n')
                ADVANCE(20);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(21);
            LEX_ERROR();
        case 20:
            if (lookahead == '\n')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(21);
            ACCEPT_TOKEN(sym_comment);
        case 21:
            if (lookahead == '\n')
                ADVANCE(15);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(21);
            LEX_ERROR();
        case 22:
            ACCEPT_TOKEN(anon_sym_AT);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(25);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_do);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(27);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(28);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_end);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_nil);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'u')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'f')
                ADVANCE(35);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_self);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'p')
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(38);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(39);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_super);
        case 40:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 41:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 42:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(42);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(9);
            LEX_ERROR();
        case 43:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(43);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 44:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(44);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == 'd')
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (lookahead == 'o')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            ACCEPT_TOKEN(anon_sym_do);
        case 47:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(47);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 48:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(48);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(24);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 49:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(49);
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
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 50:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(50);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 51:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(51);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(9);
            LEX_ERROR();
        case 52:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(52);
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
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 53:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(53);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            if (lookahead == '|')
                ADVANCE(40);
            LEX_ERROR();
        case 54:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(54);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == 'e')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            if (lookahead == 'n')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            if (lookahead == 'd')
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            ACCEPT_TOKEN(anon_sym_end);
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 59:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(59);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 60:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(60);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == 'd')
                ADVANCE(45);
            LEX_ERROR();
        case 61:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(61);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(32);
            LEX_ERROR();
        case 62:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(62);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(9);
            if (lookahead == '@')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(33);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 41,
    [1] = 42,
    [2] = 42,
    [3] = 43,
    [4] = 44,
    [5] = 44,
    [6] = 43,
    [7] = 43,
    [8] = 43,
    [9] = 43,
    [10] = 43,
    [11] = 42,
    [12] = 47,
    [13] = 48,
    [14] = 49,
    [15] = 50,
    [16] = 43,
    [17] = 47,
    [18] = 51,
    [19] = 52,
    [20] = 44,
    [21] = 52,
    [22] = 52,
    [23] = 52,
    [24] = 52,
    [25] = 52,
    [26] = 51,
    [27] = 47,
    [28] = 49,
    [29] = 52,
    [30] = 51,
    [31] = 52,
    [32] = 52,
    [33] = 53,
    [34] = 54,
    [35] = 58,
    [36] = 44,
    [37] = 58,
    [38] = 58,
    [39] = 58,
    [40] = 58,
    [41] = 58,
    [42] = 54,
    [43] = 47,
    [44] = 59,
    [45] = 49,
    [46] = 58,
    [47] = 51,
    [48] = 58,
    [49] = 54,
    [50] = 52,
    [51] = 58,
    [52] = 53,
    [53] = 54,
    [54] = 59,
    [55] = 54,
    [56] = 58,
    [57] = 58,
    [58] = 59,
    [59] = 54,
    [60] = 58,
    [61] = 59,
    [62] = 54,
    [63] = 52,
    [64] = 49,
    [65] = 51,
    [66] = 52,
    [67] = 49,
    [68] = 51,
    [69] = 43,
    [70] = 44,
    [71] = 44,
    [72] = 60,
    [73] = 60,
    [74] = 60,
    [75] = 60,
    [76] = 47,
    [77] = 61,
    [78] = 49,
    [79] = 60,
    [80] = 51,
    [81] = 60,
    [82] = 60,
    [83] = 44,
    [84] = 62,
    [85] = 60,
    [86] = 44,
    [87] = 43,
    [88] = 53,
    [89] = 54,
    [90] = 59,
    [91] = 54,
    [92] = 43,
    [93] = 43,
    [94] = 41,
    [95] = 42,
    [96] = 43,
    [97] = 41,
    [98] = 42,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = 2,
        [sym__compound_statement] = 4,
        [sym__statement] = 6,
        [sym__call] = 8,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 12,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym__compound_statement_repeat1] = 22,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 34,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [1] = {
        [ts_builtin_sym_end] = 38,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [2] = {
        [ts_builtin_sym_end] = 40,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [3] = {
        [sym__statement] = 6,
        [sym__call] = 8,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 12,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [sym__terminator] = 42,
        [aux_sym__compound_statement_repeat1] = 44,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 46,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 34,
        [sym_comment] = 36,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 50,
    },
    [4] = {
        [anon_sym_do] = 52,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [5] = {
        [anon_sym_do] = 54,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [6] = {
        [sym__statement] = 56,
        [sym__call] = 56,
        [sym__command] = 56,
        [sym__function_call] = 56,
        [sym__expression] = 56,
        [sym__argument] = 56,
        [sym__primary] = 56,
        [sym__variable] = 56,
        [sym_identifier] = 56,
        [sym__terminator] = 56,
        [aux_sym__compound_statement_repeat1] = 56,
        [aux_sym_identifier_repeat1] = 56,
        [ts_builtin_sym_end] = 56,
        [anon_sym_super] = 56,
        [anon_sym_LPAREN] = 56,
        [anon_sym_nil] = 56,
        [anon_sym_self] = 56,
        [anon_sym_AT] = 56,
        [anon_sym_DOLLAR] = 56,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 56,
        [sym_comment] = 36,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [7] = {
        [sym__statement] = 58,
        [sym__call] = 58,
        [sym__command] = 58,
        [sym__function_call] = 58,
        [sym__expression] = 58,
        [sym__argument] = 58,
        [sym__primary] = 58,
        [sym__variable] = 58,
        [sym_identifier] = 58,
        [sym__terminator] = 58,
        [aux_sym__compound_statement_repeat1] = 58,
        [aux_sym_identifier_repeat1] = 58,
        [ts_builtin_sym_end] = 58,
        [anon_sym_super] = 58,
        [anon_sym_LPAREN] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 36,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [8] = {
        [sym__statement] = 60,
        [sym__call] = 60,
        [sym__command] = 60,
        [sym__function_call] = 60,
        [sym__expression] = 60,
        [sym__argument] = 60,
        [sym__primary] = 60,
        [sym__variable] = 60,
        [sym_identifier] = 60,
        [sym__terminator] = 60,
        [aux_sym__compound_statement_repeat1] = 60,
        [aux_sym_identifier_repeat1] = 60,
        [ts_builtin_sym_end] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 36,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [9] = {
        [sym__statement] = 62,
        [sym__call] = 62,
        [sym__command] = 62,
        [sym__function_call] = 62,
        [sym__expression] = 62,
        [sym__argument] = 62,
        [sym__primary] = 62,
        [sym__variable] = 62,
        [sym_identifier] = 62,
        [sym__terminator] = 62,
        [aux_sym__compound_statement_repeat1] = 62,
        [aux_sym_identifier_repeat1] = 62,
        [ts_builtin_sym_end] = 62,
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 36,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [10] = {
        [sym__statement] = 64,
        [sym__call] = 64,
        [sym__command] = 64,
        [sym__function_call] = 64,
        [sym__expression] = 64,
        [sym__argument] = 64,
        [sym__primary] = 64,
        [sym__variable] = 64,
        [sym_identifier] = 64,
        [sym__terminator] = 64,
        [aux_sym__compound_statement_repeat1] = 64,
        [aux_sym_identifier_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 36,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [11] = {
        [ts_builtin_sym_end] = 66,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [12] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 68,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [13] = {
        [sym__call_arguments] = 70,
        [sym__command] = 72,
        [sym__argument] = 74,
        [sym__primary] = 76,
        [sym__variable] = 78,
        [sym_identifier] = 80,
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_do] = 84,
        [anon_sym_super] = 86,
        [anon_sym_LPAREN] = 88,
        [anon_sym_nil] = 80,
        [anon_sym_self] = 80,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 90,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [14] = {
        [sym__compound_statement] = 92,
        [sym__statement] = 94,
        [sym__call] = 96,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 98,
        [sym__argument] = 100,
        [sym__primary] = 102,
        [sym__variable] = 104,
        [sym_identifier] = 106,
        [aux_sym__compound_statement_repeat1] = 108,
        [aux_sym_identifier_repeat1] = 110,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 112,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [15] = {
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 118,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [16] = {
        [sym__statement] = 120,
        [sym__call] = 120,
        [sym__command] = 120,
        [sym__function_call] = 120,
        [sym__expression] = 120,
        [sym__argument] = 120,
        [sym__primary] = 120,
        [sym__variable] = 120,
        [sym_identifier] = 120,
        [sym__terminator] = 120,
        [aux_sym__compound_statement_repeat1] = 120,
        [aux_sym_identifier_repeat1] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_super] = 120,
        [anon_sym_LPAREN] = 120,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [anon_sym_AT] = 120,
        [anon_sym_DOLLAR] = 120,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 120,
        [sym_comment] = 36,
        [sym__line_break] = 120,
        [anon_sym_SEMI] = 120,
    },
    [17] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [18] = {
        [anon_sym_RPAREN] = 124,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [19] = {
        [sym__statement] = 94,
        [sym__call] = 96,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 98,
        [sym__argument] = 100,
        [sym__primary] = 102,
        [sym__variable] = 104,
        [sym_identifier] = 106,
        [sym__terminator] = 126,
        [aux_sym__compound_statement_repeat1] = 128,
        [aux_sym_identifier_repeat1] = 110,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 112,
        [anon_sym_RPAREN] = 46,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 36,
        [sym__line_break] = 130,
        [anon_sym_SEMI] = 132,
    },
    [20] = {
        [anon_sym_do] = 134,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [21] = {
        [sym__statement] = 56,
        [sym__call] = 56,
        [sym__command] = 56,
        [sym__function_call] = 56,
        [sym__expression] = 56,
        [sym__argument] = 56,
        [sym__primary] = 56,
        [sym__variable] = 56,
        [sym_identifier] = 56,
        [sym__terminator] = 56,
        [aux_sym__compound_statement_repeat1] = 56,
        [aux_sym_identifier_repeat1] = 56,
        [anon_sym_super] = 56,
        [anon_sym_LPAREN] = 56,
        [anon_sym_RPAREN] = 56,
        [anon_sym_nil] = 56,
        [anon_sym_self] = 56,
        [anon_sym_AT] = 56,
        [anon_sym_DOLLAR] = 56,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 56,
        [sym_comment] = 36,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [22] = {
        [sym__statement] = 58,
        [sym__call] = 58,
        [sym__command] = 58,
        [sym__function_call] = 58,
        [sym__expression] = 58,
        [sym__argument] = 58,
        [sym__primary] = 58,
        [sym__variable] = 58,
        [sym_identifier] = 58,
        [sym__terminator] = 58,
        [aux_sym__compound_statement_repeat1] = 58,
        [aux_sym_identifier_repeat1] = 58,
        [anon_sym_super] = 58,
        [anon_sym_LPAREN] = 58,
        [anon_sym_RPAREN] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 36,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [23] = {
        [sym__statement] = 60,
        [sym__call] = 60,
        [sym__command] = 60,
        [sym__function_call] = 60,
        [sym__expression] = 60,
        [sym__argument] = 60,
        [sym__primary] = 60,
        [sym__variable] = 60,
        [sym_identifier] = 60,
        [sym__terminator] = 60,
        [aux_sym__compound_statement_repeat1] = 60,
        [aux_sym_identifier_repeat1] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_RPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 36,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [24] = {
        [sym__statement] = 62,
        [sym__call] = 62,
        [sym__command] = 62,
        [sym__function_call] = 62,
        [sym__expression] = 62,
        [sym__argument] = 62,
        [sym__primary] = 62,
        [sym__variable] = 62,
        [sym_identifier] = 62,
        [sym__terminator] = 62,
        [aux_sym__compound_statement_repeat1] = 62,
        [aux_sym_identifier_repeat1] = 62,
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_RPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 36,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [25] = {
        [sym__statement] = 64,
        [sym__call] = 64,
        [sym__command] = 64,
        [sym__function_call] = 64,
        [sym__expression] = 64,
        [sym__argument] = 64,
        [sym__primary] = 64,
        [sym__variable] = 64,
        [sym_identifier] = 64,
        [sym__terminator] = 64,
        [aux_sym__compound_statement_repeat1] = 64,
        [aux_sym_identifier_repeat1] = 64,
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_RPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 36,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [26] = {
        [anon_sym_RPAREN] = 66,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [27] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [28] = {
        [sym__compound_statement] = 138,
        [sym__statement] = 94,
        [sym__call] = 96,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 98,
        [sym__argument] = 100,
        [sym__primary] = 102,
        [sym__variable] = 104,
        [sym_identifier] = 106,
        [aux_sym__compound_statement_repeat1] = 108,
        [aux_sym_identifier_repeat1] = 110,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 112,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [29] = {
        [sym__statement] = 120,
        [sym__call] = 120,
        [sym__command] = 120,
        [sym__function_call] = 120,
        [sym__expression] = 120,
        [sym__argument] = 120,
        [sym__primary] = 120,
        [sym__variable] = 120,
        [sym_identifier] = 120,
        [sym__terminator] = 120,
        [aux_sym__compound_statement_repeat1] = 120,
        [aux_sym_identifier_repeat1] = 120,
        [anon_sym_super] = 120,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 120,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [anon_sym_AT] = 120,
        [anon_sym_DOLLAR] = 120,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 120,
        [sym_comment] = 36,
        [sym__line_break] = 120,
        [anon_sym_SEMI] = 120,
    },
    [30] = {
        [anon_sym_RPAREN] = 140,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [31] = {
        [sym__statement] = 142,
        [sym__call] = 142,
        [sym__command] = 142,
        [sym__function_call] = 142,
        [sym__expression] = 142,
        [sym__argument] = 142,
        [sym__primary] = 142,
        [sym__variable] = 142,
        [sym_identifier] = 142,
        [sym__terminator] = 142,
        [aux_sym__compound_statement_repeat1] = 142,
        [aux_sym_identifier_repeat1] = 142,
        [anon_sym_super] = 142,
        [anon_sym_LPAREN] = 142,
        [anon_sym_RPAREN] = 142,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 36,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [32] = {
        [sym__statement] = 144,
        [sym__call] = 144,
        [sym__command] = 144,
        [sym__function_call] = 144,
        [sym__expression] = 144,
        [sym__argument] = 144,
        [sym__primary] = 144,
        [sym__variable] = 144,
        [sym_identifier] = 144,
        [sym__terminator] = 144,
        [aux_sym__compound_statement_repeat1] = 144,
        [aux_sym_identifier_repeat1] = 144,
        [anon_sym_super] = 144,
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 144,
        [anon_sym_nil] = 144,
        [anon_sym_self] = 144,
        [anon_sym_AT] = 144,
        [anon_sym_DOLLAR] = 144,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 144,
        [sym_comment] = 36,
        [sym__line_break] = 144,
        [anon_sym_SEMI] = 144,
    },
    [33] = {
        [sym__compound_statement] = 146,
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 162,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_PIPE] = 166,
        [anon_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [34] = {
        [anon_sym_end] = 172,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [35] = {
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [sym__terminator] = 174,
        [aux_sym__compound_statement_repeat1] = 176,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_end] = 46,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 178,
        [anon_sym_SEMI] = 180,
    },
    [36] = {
        [anon_sym_do] = 182,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [37] = {
        [sym__statement] = 56,
        [sym__call] = 56,
        [sym__command] = 56,
        [sym__function_call] = 56,
        [sym__expression] = 56,
        [sym__argument] = 56,
        [sym__primary] = 56,
        [sym__variable] = 56,
        [sym_identifier] = 56,
        [sym__terminator] = 56,
        [aux_sym__compound_statement_repeat1] = 56,
        [aux_sym_identifier_repeat1] = 56,
        [anon_sym_end] = 56,
        [anon_sym_super] = 56,
        [anon_sym_LPAREN] = 56,
        [anon_sym_nil] = 56,
        [anon_sym_self] = 56,
        [anon_sym_AT] = 56,
        [anon_sym_DOLLAR] = 56,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 56,
        [sym_comment] = 36,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 56,
    },
    [38] = {
        [sym__statement] = 58,
        [sym__call] = 58,
        [sym__command] = 58,
        [sym__function_call] = 58,
        [sym__expression] = 58,
        [sym__argument] = 58,
        [sym__primary] = 58,
        [sym__variable] = 58,
        [sym_identifier] = 58,
        [sym__terminator] = 58,
        [aux_sym__compound_statement_repeat1] = 58,
        [aux_sym_identifier_repeat1] = 58,
        [anon_sym_end] = 58,
        [anon_sym_super] = 58,
        [anon_sym_LPAREN] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 36,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [39] = {
        [sym__statement] = 60,
        [sym__call] = 60,
        [sym__command] = 60,
        [sym__function_call] = 60,
        [sym__expression] = 60,
        [sym__argument] = 60,
        [sym__primary] = 60,
        [sym__variable] = 60,
        [sym_identifier] = 60,
        [sym__terminator] = 60,
        [aux_sym__compound_statement_repeat1] = 60,
        [aux_sym_identifier_repeat1] = 60,
        [anon_sym_end] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 36,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [40] = {
        [sym__statement] = 62,
        [sym__call] = 62,
        [sym__command] = 62,
        [sym__function_call] = 62,
        [sym__expression] = 62,
        [sym__argument] = 62,
        [sym__primary] = 62,
        [sym__variable] = 62,
        [sym_identifier] = 62,
        [sym__terminator] = 62,
        [aux_sym__compound_statement_repeat1] = 62,
        [aux_sym_identifier_repeat1] = 62,
        [anon_sym_end] = 62,
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 36,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [41] = {
        [sym__statement] = 64,
        [sym__call] = 64,
        [sym__command] = 64,
        [sym__function_call] = 64,
        [sym__expression] = 64,
        [sym__argument] = 64,
        [sym__primary] = 64,
        [sym__variable] = 64,
        [sym_identifier] = 64,
        [sym__terminator] = 64,
        [aux_sym__compound_statement_repeat1] = 64,
        [aux_sym_identifier_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 36,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [42] = {
        [anon_sym_end] = 66,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [43] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 184,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [44] = {
        [sym__compound_statement] = 186,
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 162,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [45] = {
        [sym__compound_statement] = 188,
        [sym__statement] = 94,
        [sym__call] = 96,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 98,
        [sym__argument] = 100,
        [sym__primary] = 102,
        [sym__variable] = 104,
        [sym_identifier] = 106,
        [aux_sym__compound_statement_repeat1] = 108,
        [aux_sym_identifier_repeat1] = 110,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 112,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [46] = {
        [sym__statement] = 120,
        [sym__call] = 120,
        [sym__command] = 120,
        [sym__function_call] = 120,
        [sym__expression] = 120,
        [sym__argument] = 120,
        [sym__primary] = 120,
        [sym__variable] = 120,
        [sym_identifier] = 120,
        [sym__terminator] = 120,
        [aux_sym__compound_statement_repeat1] = 120,
        [aux_sym_identifier_repeat1] = 120,
        [anon_sym_end] = 120,
        [anon_sym_super] = 120,
        [anon_sym_LPAREN] = 120,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [anon_sym_AT] = 120,
        [anon_sym_DOLLAR] = 120,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 120,
        [sym_comment] = 36,
        [sym__line_break] = 120,
        [anon_sym_SEMI] = 120,
    },
    [47] = {
        [anon_sym_RPAREN] = 190,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [48] = {
        [sym__statement] = 142,
        [sym__call] = 142,
        [sym__command] = 142,
        [sym__function_call] = 142,
        [sym__expression] = 142,
        [sym__argument] = 142,
        [sym__primary] = 142,
        [sym__variable] = 142,
        [sym_identifier] = 142,
        [sym__terminator] = 142,
        [aux_sym__compound_statement_repeat1] = 142,
        [aux_sym_identifier_repeat1] = 142,
        [anon_sym_end] = 142,
        [anon_sym_super] = 142,
        [anon_sym_LPAREN] = 142,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 36,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [49] = {
        [anon_sym_end] = 192,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [50] = {
        [sym__statement] = 194,
        [sym__call] = 194,
        [sym__command] = 194,
        [sym__function_call] = 194,
        [sym__expression] = 194,
        [sym__argument] = 194,
        [sym__primary] = 194,
        [sym__variable] = 194,
        [sym_identifier] = 194,
        [sym__terminator] = 194,
        [aux_sym__compound_statement_repeat1] = 194,
        [aux_sym_identifier_repeat1] = 194,
        [anon_sym_super] = 194,
        [anon_sym_LPAREN] = 194,
        [anon_sym_RPAREN] = 194,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [anon_sym_AT] = 194,
        [anon_sym_DOLLAR] = 194,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 194,
        [sym_comment] = 36,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 194,
    },
    [51] = {
        [sym__statement] = 144,
        [sym__call] = 144,
        [sym__command] = 144,
        [sym__function_call] = 144,
        [sym__expression] = 144,
        [sym__argument] = 144,
        [sym__primary] = 144,
        [sym__variable] = 144,
        [sym_identifier] = 144,
        [sym__terminator] = 144,
        [aux_sym__compound_statement_repeat1] = 144,
        [aux_sym_identifier_repeat1] = 144,
        [anon_sym_end] = 144,
        [anon_sym_super] = 144,
        [anon_sym_LPAREN] = 144,
        [anon_sym_nil] = 144,
        [anon_sym_self] = 144,
        [anon_sym_AT] = 144,
        [anon_sym_DOLLAR] = 144,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 144,
        [sym_comment] = 36,
        [sym__line_break] = 144,
        [anon_sym_SEMI] = 144,
    },
    [52] = {
        [sym__compound_statement] = 196,
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 162,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_PIPE] = 198,
        [anon_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [53] = {
        [anon_sym_end] = 200,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [54] = {
        [sym__compound_statement] = 202,
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 162,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [55] = {
        [anon_sym_end] = 204,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [56] = {
        [sym__statement] = 194,
        [sym__call] = 194,
        [sym__command] = 194,
        [sym__function_call] = 194,
        [sym__expression] = 194,
        [sym__argument] = 194,
        [sym__primary] = 194,
        [sym__variable] = 194,
        [sym_identifier] = 194,
        [sym__terminator] = 194,
        [aux_sym__compound_statement_repeat1] = 194,
        [aux_sym_identifier_repeat1] = 194,
        [anon_sym_end] = 194,
        [anon_sym_super] = 194,
        [anon_sym_LPAREN] = 194,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [anon_sym_AT] = 194,
        [anon_sym_DOLLAR] = 194,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 194,
        [sym_comment] = 36,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 194,
    },
    [57] = {
        [sym__statement] = 206,
        [sym__call] = 206,
        [sym__command] = 206,
        [sym__function_call] = 206,
        [sym__expression] = 206,
        [sym__argument] = 206,
        [sym__primary] = 206,
        [sym__variable] = 206,
        [sym_identifier] = 206,
        [sym__terminator] = 206,
        [aux_sym__compound_statement_repeat1] = 206,
        [aux_sym_identifier_repeat1] = 206,
        [anon_sym_end] = 206,
        [anon_sym_super] = 206,
        [anon_sym_LPAREN] = 206,
        [anon_sym_nil] = 206,
        [anon_sym_self] = 206,
        [anon_sym_AT] = 206,
        [anon_sym_DOLLAR] = 206,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 206,
        [sym_comment] = 36,
        [sym__line_break] = 206,
        [anon_sym_SEMI] = 206,
    },
    [58] = {
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 208,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_end] = 210,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [59] = {
        [anon_sym_end] = 210,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [60] = {
        [sym__statement] = 212,
        [sym__call] = 212,
        [sym__command] = 212,
        [sym__function_call] = 212,
        [sym__expression] = 212,
        [sym__argument] = 212,
        [sym__primary] = 212,
        [sym__variable] = 212,
        [sym_identifier] = 212,
        [sym__terminator] = 214,
        [aux_sym__compound_statement_repeat1] = 212,
        [aux_sym_identifier_repeat1] = 212,
        [anon_sym_end] = 212,
        [anon_sym_super] = 212,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [anon_sym_AT] = 212,
        [anon_sym_DOLLAR] = 212,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 212,
        [sym_comment] = 36,
        [sym__line_break] = 36,
        [anon_sym_SEMI] = 214,
    },
    [61] = {
        [sym__statement] = 212,
        [sym__call] = 212,
        [sym__command] = 212,
        [sym__function_call] = 212,
        [sym__expression] = 212,
        [sym__argument] = 212,
        [sym__primary] = 212,
        [sym__variable] = 212,
        [sym_identifier] = 212,
        [aux_sym__compound_statement_repeat1] = 212,
        [aux_sym_identifier_repeat1] = 212,
        [anon_sym_end] = 212,
        [anon_sym_super] = 212,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [anon_sym_AT] = 212,
        [anon_sym_DOLLAR] = 212,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 212,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [62] = {
        [anon_sym_end] = 216,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [63] = {
        [sym__statement] = 206,
        [sym__call] = 206,
        [sym__command] = 206,
        [sym__function_call] = 206,
        [sym__expression] = 206,
        [sym__argument] = 206,
        [sym__primary] = 206,
        [sym__variable] = 206,
        [sym_identifier] = 206,
        [sym__terminator] = 206,
        [aux_sym__compound_statement_repeat1] = 206,
        [aux_sym_identifier_repeat1] = 206,
        [anon_sym_super] = 206,
        [anon_sym_LPAREN] = 206,
        [anon_sym_RPAREN] = 206,
        [anon_sym_nil] = 206,
        [anon_sym_self] = 206,
        [anon_sym_AT] = 206,
        [anon_sym_DOLLAR] = 206,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 206,
        [sym_comment] = 36,
        [sym__line_break] = 206,
        [anon_sym_SEMI] = 206,
    },
    [64] = {
        [sym__statement] = 94,
        [sym__call] = 96,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 98,
        [sym__argument] = 100,
        [sym__primary] = 102,
        [sym__variable] = 104,
        [sym_identifier] = 106,
        [aux_sym__compound_statement_repeat1] = 218,
        [aux_sym_identifier_repeat1] = 110,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 112,
        [anon_sym_RPAREN] = 210,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [65] = {
        [anon_sym_RPAREN] = 210,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [66] = {
        [sym__statement] = 212,
        [sym__call] = 212,
        [sym__command] = 212,
        [sym__function_call] = 212,
        [sym__expression] = 212,
        [sym__argument] = 212,
        [sym__primary] = 212,
        [sym__variable] = 212,
        [sym_identifier] = 212,
        [sym__terminator] = 214,
        [aux_sym__compound_statement_repeat1] = 212,
        [aux_sym_identifier_repeat1] = 212,
        [anon_sym_super] = 212,
        [anon_sym_LPAREN] = 212,
        [anon_sym_RPAREN] = 212,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [anon_sym_AT] = 212,
        [anon_sym_DOLLAR] = 212,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 212,
        [sym_comment] = 36,
        [sym__line_break] = 36,
        [anon_sym_SEMI] = 214,
    },
    [67] = {
        [sym__statement] = 212,
        [sym__call] = 212,
        [sym__command] = 212,
        [sym__function_call] = 212,
        [sym__expression] = 212,
        [sym__argument] = 212,
        [sym__primary] = 212,
        [sym__variable] = 212,
        [sym_identifier] = 212,
        [aux_sym__compound_statement_repeat1] = 212,
        [aux_sym_identifier_repeat1] = 212,
        [anon_sym_super] = 212,
        [anon_sym_LPAREN] = 212,
        [anon_sym_RPAREN] = 212,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [anon_sym_AT] = 212,
        [anon_sym_DOLLAR] = 212,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 212,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [68] = {
        [anon_sym_RPAREN] = 216,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [69] = {
        [sym__statement] = 142,
        [sym__call] = 142,
        [sym__command] = 142,
        [sym__function_call] = 142,
        [sym__expression] = 142,
        [sym__argument] = 142,
        [sym__primary] = 142,
        [sym__variable] = 142,
        [sym_identifier] = 142,
        [sym__terminator] = 142,
        [aux_sym__compound_statement_repeat1] = 142,
        [aux_sym_identifier_repeat1] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_super] = 142,
        [anon_sym_LPAREN] = 142,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 36,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [70] = {
        [anon_sym_do] = 220,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [71] = {
        [anon_sym_do] = 222,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [72] = {
        [aux_sym__call_arguments_repeat1] = 224,
        [anon_sym_do] = 222,
        [anon_sym_COMMA] = 226,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [73] = {
        [aux_sym__call_arguments_repeat1] = 60,
        [anon_sym_do] = 60,
        [anon_sym_COMMA] = 60,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [74] = {
        [aux_sym__call_arguments_repeat1] = 62,
        [anon_sym_do] = 62,
        [anon_sym_COMMA] = 62,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [75] = {
        [aux_sym__call_arguments_repeat1] = 64,
        [anon_sym_do] = 64,
        [anon_sym_COMMA] = 64,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [76] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 228,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [77] = {
        [sym__call_arguments] = 70,
        [sym__command] = 72,
        [sym__argument] = 74,
        [sym__primary] = 76,
        [sym__variable] = 78,
        [sym_identifier] = 80,
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_super] = 86,
        [anon_sym_LPAREN] = 88,
        [anon_sym_nil] = 80,
        [anon_sym_self] = 80,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 90,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [78] = {
        [sym__compound_statement] = 230,
        [sym__statement] = 94,
        [sym__call] = 96,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 98,
        [sym__argument] = 100,
        [sym__primary] = 102,
        [sym__variable] = 104,
        [sym_identifier] = 106,
        [aux_sym__compound_statement_repeat1] = 108,
        [aux_sym_identifier_repeat1] = 110,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 112,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 106,
        [anon_sym_self] = 106,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 114,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [79] = {
        [aux_sym__call_arguments_repeat1] = 120,
        [anon_sym_do] = 120,
        [anon_sym_COMMA] = 120,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [80] = {
        [anon_sym_RPAREN] = 232,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [81] = {
        [aux_sym__call_arguments_repeat1] = 142,
        [anon_sym_do] = 142,
        [anon_sym_COMMA] = 142,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [82] = {
        [aux_sym__call_arguments_repeat1] = 144,
        [anon_sym_do] = 144,
        [anon_sym_COMMA] = 144,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [83] = {
        [anon_sym_do] = 234,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [84] = {
        [sym__argument] = 236,
        [sym__primary] = 76,
        [sym__variable] = 78,
        [sym_identifier] = 80,
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_LPAREN] = 88,
        [anon_sym_nil] = 80,
        [anon_sym_self] = 80,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 90,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [85] = {
        [aux_sym__call_arguments_repeat1] = 238,
        [anon_sym_do] = 240,
        [anon_sym_COMMA] = 226,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [86] = {
        [anon_sym_do] = 242,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [87] = {
        [sym__statement] = 144,
        [sym__call] = 144,
        [sym__command] = 144,
        [sym__function_call] = 144,
        [sym__expression] = 144,
        [sym__argument] = 144,
        [sym__primary] = 144,
        [sym__variable] = 144,
        [sym_identifier] = 144,
        [sym__terminator] = 144,
        [aux_sym__compound_statement_repeat1] = 144,
        [aux_sym_identifier_repeat1] = 144,
        [ts_builtin_sym_end] = 144,
        [anon_sym_super] = 144,
        [anon_sym_LPAREN] = 144,
        [anon_sym_nil] = 144,
        [anon_sym_self] = 144,
        [anon_sym_AT] = 144,
        [anon_sym_DOLLAR] = 144,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 144,
        [sym_comment] = 36,
        [sym__line_break] = 144,
        [anon_sym_SEMI] = 144,
    },
    [88] = {
        [sym__compound_statement] = 244,
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 162,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_PIPE] = 246,
        [anon_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [89] = {
        [anon_sym_end] = 248,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [90] = {
        [sym__compound_statement] = 250,
        [sym__statement] = 148,
        [sym__call] = 150,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 152,
        [sym__argument] = 154,
        [sym__primary] = 156,
        [sym__variable] = 158,
        [sym_identifier] = 160,
        [aux_sym__compound_statement_repeat1] = 162,
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_end] = 26,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [91] = {
        [anon_sym_end] = 252,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [92] = {
        [sym__statement] = 194,
        [sym__call] = 194,
        [sym__command] = 194,
        [sym__function_call] = 194,
        [sym__expression] = 194,
        [sym__argument] = 194,
        [sym__primary] = 194,
        [sym__variable] = 194,
        [sym_identifier] = 194,
        [sym__terminator] = 194,
        [aux_sym__compound_statement_repeat1] = 194,
        [aux_sym_identifier_repeat1] = 194,
        [ts_builtin_sym_end] = 194,
        [anon_sym_super] = 194,
        [anon_sym_LPAREN] = 194,
        [anon_sym_nil] = 194,
        [anon_sym_self] = 194,
        [anon_sym_AT] = 194,
        [anon_sym_DOLLAR] = 194,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 194,
        [sym_comment] = 36,
        [sym__line_break] = 194,
        [anon_sym_SEMI] = 194,
    },
    [93] = {
        [sym__statement] = 206,
        [sym__call] = 206,
        [sym__command] = 206,
        [sym__function_call] = 206,
        [sym__expression] = 206,
        [sym__argument] = 206,
        [sym__primary] = 206,
        [sym__variable] = 206,
        [sym_identifier] = 206,
        [sym__terminator] = 206,
        [aux_sym__compound_statement_repeat1] = 206,
        [aux_sym_identifier_repeat1] = 206,
        [ts_builtin_sym_end] = 206,
        [anon_sym_super] = 206,
        [anon_sym_LPAREN] = 206,
        [anon_sym_nil] = 206,
        [anon_sym_self] = 206,
        [anon_sym_AT] = 206,
        [anon_sym_DOLLAR] = 206,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 206,
        [sym_comment] = 36,
        [sym__line_break] = 206,
        [anon_sym_SEMI] = 206,
    },
    [94] = {
        [sym__statement] = 6,
        [sym__call] = 8,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 12,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym__compound_statement_repeat1] = 254,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 210,
        [anon_sym_super] = 28,
        [anon_sym_LPAREN] = 30,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 32,
        [anon_sym_DOLLAR] = 32,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 34,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [95] = {
        [ts_builtin_sym_end] = 210,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [96] = {
        [sym__statement] = 212,
        [sym__call] = 212,
        [sym__command] = 212,
        [sym__function_call] = 212,
        [sym__expression] = 212,
        [sym__argument] = 212,
        [sym__primary] = 212,
        [sym__variable] = 212,
        [sym_identifier] = 212,
        [sym__terminator] = 214,
        [aux_sym__compound_statement_repeat1] = 212,
        [aux_sym_identifier_repeat1] = 212,
        [ts_builtin_sym_end] = 212,
        [anon_sym_super] = 212,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [anon_sym_AT] = 212,
        [anon_sym_DOLLAR] = 212,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 212,
        [sym_comment] = 36,
        [sym__line_break] = 36,
        [anon_sym_SEMI] = 214,
    },
    [97] = {
        [sym__statement] = 212,
        [sym__call] = 212,
        [sym__command] = 212,
        [sym__function_call] = 212,
        [sym__expression] = 212,
        [sym__argument] = 212,
        [sym__primary] = 212,
        [sym__variable] = 212,
        [sym_identifier] = 212,
        [aux_sym__compound_statement_repeat1] = 212,
        [aux_sym_identifier_repeat1] = 212,
        [ts_builtin_sym_end] = 212,
        [anon_sym_super] = 212,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 212,
        [anon_sym_self] = 212,
        [anon_sym_AT] = 212,
        [anon_sym_DOLLAR] = 212,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 212,
        [sym_comment] = 36,
        [sym__line_break] = 36,
    },
    [98] = {
        [ts_builtin_sym_end] = 216,
        [sym_comment] = 36,
        [sym__line_break] = 36,
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
    [22] = {.count = 1}, SHIFT(11, 0),
    [24] = {.count = 1}, SHIFT(12, 0),
    [26] = {.count = 1}, REDUCE(sym__compound_statement, 0, 0),
    [28] = {.count = 1}, SHIFT(13, 0),
    [30] = {.count = 1}, SHIFT(14, 0),
    [32] = {.count = 1}, SHIFT(15, 0),
    [34] = {.count = 1}, SHIFT(16, 0),
    [36] = {.count = 1}, SHIFT_EXTRA(),
    [38] = {.count = 1}, ACCEPT_INPUT(),
    [40] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [42] = {.count = 1}, SHIFT(94, 0),
    [44] = {.count = 1}, SHIFT(95, 0),
    [46] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 1, 0),
    [48] = {.count = 1}, SHIFT(96, 0),
    [50] = {.count = 1}, SHIFT(97, 0),
    [52] = {.count = 1}, SHIFT(88, 0),
    [54] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [56] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [58] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [60] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__compound_statement, 1, 0),
    [68] = {.count = 1}, SHIFT(87, 0),
    [70] = {.count = 1}, SHIFT(70, 0),
    [72] = {.count = 1}, SHIFT(71, 0),
    [74] = {.count = 1}, SHIFT(72, 0),
    [76] = {.count = 1}, SHIFT(73, 0),
    [78] = {.count = 1}, SHIFT(74, 0),
    [80] = {.count = 1}, SHIFT(75, 0),
    [82] = {.count = 1}, SHIFT(76, 0),
    [84] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [86] = {.count = 1}, SHIFT(77, 0),
    [88] = {.count = 1}, SHIFT(78, 0),
    [90] = {.count = 1}, SHIFT(79, 0),
    [92] = {.count = 1}, SHIFT(18, 0),
    [94] = {.count = 1}, SHIFT(19, 0),
    [96] = {.count = 1}, SHIFT(20, 0),
    [98] = {.count = 1}, SHIFT(21, 0),
    [100] = {.count = 1}, SHIFT(22, 0),
    [102] = {.count = 1}, SHIFT(23, 0),
    [104] = {.count = 1}, SHIFT(24, 0),
    [106] = {.count = 1}, SHIFT(25, 0),
    [108] = {.count = 1}, SHIFT(26, 0),
    [110] = {.count = 1}, SHIFT(27, 0),
    [112] = {.count = 1}, SHIFT(28, 0),
    [114] = {.count = 1}, SHIFT(29, 0),
    [116] = {.count = 1}, SHIFT(17, 0),
    [118] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [120] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [122] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [124] = {.count = 1}, SHIFT(69, 0),
    [126] = {.count = 1}, SHIFT(64, 0),
    [128] = {.count = 1}, SHIFT(65, 0),
    [130] = {.count = 1}, SHIFT(66, 0),
    [132] = {.count = 1}, SHIFT(67, 0),
    [134] = {.count = 1}, SHIFT(33, 0),
    [136] = {.count = 1}, SHIFT(32, 0),
    [138] = {.count = 1}, SHIFT(30, 0),
    [140] = {.count = 1}, SHIFT(31, 0),
    [142] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [144] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [146] = {.count = 1}, SHIFT(34, 0),
    [148] = {.count = 1}, SHIFT(35, 0),
    [150] = {.count = 1}, SHIFT(36, 0),
    [152] = {.count = 1}, SHIFT(37, 0),
    [154] = {.count = 1}, SHIFT(38, 0),
    [156] = {.count = 1}, SHIFT(39, 0),
    [158] = {.count = 1}, SHIFT(40, 0),
    [160] = {.count = 1}, SHIFT(41, 0),
    [162] = {.count = 1}, SHIFT(42, 0),
    [164] = {.count = 1}, SHIFT(43, 0),
    [166] = {.count = 1}, SHIFT(44, 0),
    [168] = {.count = 1}, SHIFT(45, 0),
    [170] = {.count = 1}, SHIFT(46, 0),
    [172] = {.count = 1}, SHIFT(63, 0),
    [174] = {.count = 1}, SHIFT(58, 0),
    [176] = {.count = 1}, SHIFT(59, 0),
    [178] = {.count = 1}, SHIFT(60, 0),
    [180] = {.count = 1}, SHIFT(61, 0),
    [182] = {.count = 1}, SHIFT(52, 0),
    [184] = {.count = 1}, SHIFT(51, 0),
    [186] = {.count = 1}, SHIFT(49, 0),
    [188] = {.count = 1}, SHIFT(47, 0),
    [190] = {.count = 1}, SHIFT(48, 0),
    [192] = {.count = 1}, SHIFT(50, 0),
    [194] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [196] = {.count = 1}, SHIFT(53, 0),
    [198] = {.count = 1}, SHIFT(54, 0),
    [200] = {.count = 1}, SHIFT(57, 0),
    [202] = {.count = 1}, SHIFT(55, 0),
    [204] = {.count = 1}, SHIFT(56, 0),
    [206] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [208] = {.count = 1}, SHIFT(62, 0),
    [210] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 2, 0),
    [212] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [214] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [216] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 3, 0),
    [218] = {.count = 1}, SHIFT(68, 0),
    [220] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [222] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [224] = {.count = 1}, SHIFT(83, 0),
    [226] = {.count = 1}, SHIFT(84, 0),
    [228] = {.count = 1}, SHIFT(82, 0),
    [230] = {.count = 1}, SHIFT(80, 0),
    [232] = {.count = 1}, SHIFT(81, 0),
    [234] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [236] = {.count = 1}, SHIFT(85, 0),
    [238] = {.count = 1}, SHIFT(86, 0),
    [240] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [242] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [244] = {.count = 1}, SHIFT(89, 0),
    [246] = {.count = 1}, SHIFT(90, 0),
    [248] = {.count = 1}, SHIFT(93, 0),
    [250] = {.count = 1}, SHIFT(91, 0),
    [252] = {.count = 1}, SHIFT(92, 0),
    [254] = {.count = 1}, SHIFT(98, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
