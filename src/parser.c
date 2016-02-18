#include "tree_sitter/parser.h"

#define STATE_COUNT 121
#define SYMBOL_COUNT 37

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
    sym__function_name,
    sym__terminator,
    aux_sym__compound_statement_repeat1,
    aux_sym__call_arguments_repeat1,
    aux_sym_identifier_repeat1,
    anon_sym_do,
    anon_sym_PIPE,
    anon_sym_end,
    anon_sym_undef,
    anon_sym_alias,
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
    anon_sym_DOT_DOT,
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
    [sym__function_name] = "_function_name",
    [sym__terminator] = "_terminator",
    [aux_sym__compound_statement_repeat1] = "_compound_statement_repeat1",
    [aux_sym__call_arguments_repeat1] = "_call_arguments_repeat1",
    [aux_sym_identifier_repeat1] = "identifier_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_do] = "do",
    [anon_sym_PIPE] = "|",
    [anon_sym_end] = "end",
    [anon_sym_undef] = "undef",
    [anon_sym_alias] = "alias",
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
    [anon_sym_DOT_DOT] = "..",
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
    [sym__function_name] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__terminator] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__compound_statement_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__call_arguments_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_do] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_end] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_undef] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_alias] = {.visible = true, .named = false, .structural = true, .extra = false},
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
    [anon_sym_DOT_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '.')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                (lookahead == 'c') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'd')
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            if (lookahead == '|')
                ADVANCE(52);
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
            if (lookahead == '.')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            ACCEPT_TOKEN(anon_sym_DOT_DOT);
        case 10:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 11:
            if (lookahead == 'b')
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            if (lookahead == 'e')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            if (lookahead == 'g')
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            if (lookahead == 'i')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            if (lookahead == 'n')
                ADVANCE(16);
            LEX_ERROR();
        case 16:
            if (lookahead == '\n')
                ADVANCE(17);
            LEX_ERROR();
        case 17:
            if (lookahead == '\n')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(18);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(23);
            LEX_ERROR();
        case 18:
            if (lookahead == '\n')
                ADVANCE(17);
            if (lookahead == 'e')
                ADVANCE(19);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'e')))
                ADVANCE(23);
            LEX_ERROR();
        case 19:
            if (lookahead == '\n')
                ADVANCE(17);
            if (lookahead == 'n')
                ADVANCE(20);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'n')))
                ADVANCE(23);
            LEX_ERROR();
        case 20:
            if (lookahead == '\n')
                ADVANCE(17);
            if (lookahead == 'd')
                ADVANCE(21);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'd')))
                ADVANCE(23);
            LEX_ERROR();
        case 21:
            if (lookahead == '\n')
                ADVANCE(22);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(23);
            LEX_ERROR();
        case 22:
            if (lookahead == '\n')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(18);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(23);
            ACCEPT_TOKEN(sym_comment);
        case 23:
            if (lookahead == '\n')
                ADVANCE(17);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(23);
            LEX_ERROR();
        case 24:
            ACCEPT_TOKEN(anon_sym_AT);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(27);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(28);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(29);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_alias);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_do);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(35);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_end);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(38);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_nil);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(41);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_self);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(45);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_super);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_undef);
        case 52:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 53:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case 54:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(54);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(11);
            LEX_ERROR();
        case 55:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(55);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case 56:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(56);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            if (lookahead == 'o')
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            ACCEPT_TOKEN(anon_sym_do);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '|')
                ADVANCE(52);
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
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
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
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case 63:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(63);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 64:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(64);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(11);
            LEX_ERROR();
        case 65:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(65);
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
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case 66:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(66);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            if (lookahead == '|')
                ADVANCE(52);
            LEX_ERROR();
        case 67:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(67);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 'n')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            if (lookahead == 'd')
                ADVANCE(70);
            LEX_ERROR();
        case 70:
            ACCEPT_TOKEN(anon_sym_end);
        case 71:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(71);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case 72:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(72);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            if (lookahead == 'u')
                ADVANCE(47);
            LEX_ERROR();
        case 73:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(73);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(57);
            LEX_ERROR();
        case 74:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(39);
            LEX_ERROR();
        case 75:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(75);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 53,
    [1] = 54,
    [2] = 54,
    [3] = 55,
    [4] = 56,
    [5] = 56,
    [6] = 55,
    [7] = 55,
    [8] = 55,
    [9] = 55,
    [10] = 55,
    [11] = 54,
    [12] = 59,
    [13] = 60,
    [14] = 60,
    [15] = 61,
    [16] = 62,
    [17] = 63,
    [18] = 55,
    [19] = 59,
    [20] = 64,
    [21] = 65,
    [22] = 56,
    [23] = 65,
    [24] = 65,
    [25] = 65,
    [26] = 65,
    [27] = 65,
    [28] = 64,
    [29] = 59,
    [30] = 60,
    [31] = 60,
    [32] = 62,
    [33] = 65,
    [34] = 64,
    [35] = 65,
    [36] = 60,
    [37] = 60,
    [38] = 59,
    [39] = 60,
    [40] = 60,
    [41] = 65,
    [42] = 65,
    [43] = 65,
    [44] = 65,
    [45] = 66,
    [46] = 67,
    [47] = 71,
    [48] = 56,
    [49] = 71,
    [50] = 71,
    [51] = 71,
    [52] = 71,
    [53] = 71,
    [54] = 67,
    [55] = 59,
    [56] = 72,
    [57] = 60,
    [58] = 60,
    [59] = 62,
    [60] = 71,
    [61] = 64,
    [62] = 71,
    [63] = 60,
    [64] = 71,
    [65] = 71,
    [66] = 71,
    [67] = 67,
    [68] = 65,
    [69] = 71,
    [70] = 66,
    [71] = 67,
    [72] = 72,
    [73] = 67,
    [74] = 71,
    [75] = 71,
    [76] = 72,
    [77] = 67,
    [78] = 71,
    [79] = 72,
    [80] = 67,
    [81] = 65,
    [82] = 62,
    [83] = 64,
    [84] = 65,
    [85] = 62,
    [86] = 64,
    [87] = 55,
    [88] = 56,
    [89] = 56,
    [90] = 73,
    [91] = 73,
    [92] = 73,
    [93] = 73,
    [94] = 59,
    [95] = 74,
    [96] = 62,
    [97] = 73,
    [98] = 64,
    [99] = 73,
    [100] = 73,
    [101] = 56,
    [102] = 75,
    [103] = 73,
    [104] = 56,
    [105] = 60,
    [106] = 55,
    [107] = 55,
    [108] = 55,
    [109] = 55,
    [110] = 66,
    [111] = 67,
    [112] = 72,
    [113] = 67,
    [114] = 55,
    [115] = 55,
    [116] = 53,
    [117] = 54,
    [118] = 55,
    [119] = 53,
    [120] = 54,
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
        [anon_sym_undef] = 28,
        [anon_sym_alias] = 30,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 34,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [1] = {
        [ts_builtin_sym_end] = 42,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [2] = {
        [ts_builtin_sym_end] = 44,
        [sym_comment] = 40,
        [sym__line_break] = 40,
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
        [sym__terminator] = 46,
        [aux_sym__compound_statement_repeat1] = 48,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 50,
        [anon_sym_undef] = 28,
        [anon_sym_alias] = 30,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 34,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [sym__line_break] = 52,
        [anon_sym_SEMI] = 54,
    },
    [4] = {
        [anon_sym_do] = 56,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [5] = {
        [anon_sym_do] = 58,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [6] = {
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
        [anon_sym_undef] = 60,
        [anon_sym_alias] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 40,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [7] = {
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
        [anon_sym_undef] = 62,
        [anon_sym_alias] = 62,
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 40,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [8] = {
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
        [anon_sym_undef] = 64,
        [anon_sym_alias] = 64,
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [9] = {
        [sym__statement] = 66,
        [sym__call] = 66,
        [sym__command] = 66,
        [sym__function_call] = 66,
        [sym__expression] = 66,
        [sym__argument] = 66,
        [sym__primary] = 66,
        [sym__variable] = 66,
        [sym_identifier] = 66,
        [sym__terminator] = 66,
        [aux_sym__compound_statement_repeat1] = 66,
        [aux_sym_identifier_repeat1] = 66,
        [ts_builtin_sym_end] = 66,
        [anon_sym_undef] = 66,
        [anon_sym_alias] = 66,
        [anon_sym_super] = 66,
        [anon_sym_LPAREN] = 66,
        [anon_sym_nil] = 66,
        [anon_sym_self] = 66,
        [anon_sym_AT] = 66,
        [anon_sym_DOLLAR] = 66,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [10] = {
        [sym__statement] = 68,
        [sym__call] = 68,
        [sym__command] = 68,
        [sym__function_call] = 68,
        [sym__expression] = 68,
        [sym__argument] = 68,
        [sym__primary] = 68,
        [sym__variable] = 68,
        [sym_identifier] = 68,
        [sym__terminator] = 68,
        [aux_sym__compound_statement_repeat1] = 68,
        [aux_sym_identifier_repeat1] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_undef] = 68,
        [anon_sym_alias] = 68,
        [anon_sym_super] = 68,
        [anon_sym_LPAREN] = 68,
        [anon_sym_nil] = 68,
        [anon_sym_self] = 68,
        [anon_sym_AT] = 68,
        [anon_sym_DOLLAR] = 68,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 68,
        [sym_comment] = 40,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [11] = {
        [ts_builtin_sym_end] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [12] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [13] = {
        [sym_identifier] = 74,
        [sym__function_name] = 76,
        [aux_sym_identifier_repeat1] = 24,
        [anon_sym_PIPE] = 74,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 74,
        [sym__line_break] = 40,
    },
    [14] = {
        [sym_identifier] = 78,
        [sym__function_name] = 80,
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 84,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 40,
    },
    [15] = {
        [sym__call_arguments] = 86,
        [sym__command] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym__variable] = 94,
        [sym_identifier] = 96,
        [aux_sym_identifier_repeat1] = 98,
        [anon_sym_do] = 100,
        [anon_sym_super] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_nil] = 96,
        [anon_sym_self] = 96,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 106,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [16] = {
        [sym__compound_statement] = 108,
        [sym__statement] = 110,
        [sym__call] = 112,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [sym_identifier] = 122,
        [aux_sym__compound_statement_repeat1] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 122,
        [anon_sym_self] = 122,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [17] = {
        [aux_sym_identifier_repeat1] = 136,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 138,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [18] = {
        [sym__statement] = 140,
        [sym__call] = 140,
        [sym__command] = 140,
        [sym__function_call] = 140,
        [sym__expression] = 140,
        [sym__argument] = 140,
        [sym__primary] = 140,
        [sym__variable] = 140,
        [sym_identifier] = 140,
        [sym__terminator] = 140,
        [aux_sym__compound_statement_repeat1] = 140,
        [aux_sym_identifier_repeat1] = 140,
        [ts_builtin_sym_end] = 140,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 140,
        [anon_sym_super] = 140,
        [anon_sym_LPAREN] = 140,
        [anon_sym_nil] = 140,
        [anon_sym_self] = 140,
        [anon_sym_AT] = 140,
        [anon_sym_DOLLAR] = 140,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 140,
        [anon_sym_SEMI] = 140,
    },
    [19] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [20] = {
        [anon_sym_RPAREN] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [21] = {
        [sym__statement] = 110,
        [sym__call] = 112,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [sym_identifier] = 122,
        [sym__terminator] = 146,
        [aux_sym__compound_statement_repeat1] = 148,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 50,
        [anon_sym_nil] = 122,
        [anon_sym_self] = 122,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [sym__line_break] = 150,
        [anon_sym_SEMI] = 152,
    },
    [22] = {
        [anon_sym_do] = 154,
        [sym_comment] = 40,
        [sym__line_break] = 40,
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
        [anon_sym_undef] = 60,
        [anon_sym_alias] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_RPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 40,
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
        [anon_sym_undef] = 62,
        [anon_sym_alias] = 62,
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_RPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 40,
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
        [anon_sym_undef] = 64,
        [anon_sym_alias] = 64,
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_RPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [26] = {
        [sym__statement] = 66,
        [sym__call] = 66,
        [sym__command] = 66,
        [sym__function_call] = 66,
        [sym__expression] = 66,
        [sym__argument] = 66,
        [sym__primary] = 66,
        [sym__variable] = 66,
        [sym_identifier] = 66,
        [sym__terminator] = 66,
        [aux_sym__compound_statement_repeat1] = 66,
        [aux_sym_identifier_repeat1] = 66,
        [anon_sym_undef] = 66,
        [anon_sym_alias] = 66,
        [anon_sym_super] = 66,
        [anon_sym_LPAREN] = 66,
        [anon_sym_RPAREN] = 66,
        [anon_sym_nil] = 66,
        [anon_sym_self] = 66,
        [anon_sym_AT] = 66,
        [anon_sym_DOLLAR] = 66,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [27] = {
        [sym__statement] = 68,
        [sym__call] = 68,
        [sym__command] = 68,
        [sym__function_call] = 68,
        [sym__expression] = 68,
        [sym__argument] = 68,
        [sym__primary] = 68,
        [sym__variable] = 68,
        [sym_identifier] = 68,
        [sym__terminator] = 68,
        [aux_sym__compound_statement_repeat1] = 68,
        [aux_sym_identifier_repeat1] = 68,
        [anon_sym_undef] = 68,
        [anon_sym_alias] = 68,
        [anon_sym_super] = 68,
        [anon_sym_LPAREN] = 68,
        [anon_sym_RPAREN] = 68,
        [anon_sym_nil] = 68,
        [anon_sym_self] = 68,
        [anon_sym_AT] = 68,
        [anon_sym_DOLLAR] = 68,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 68,
        [sym_comment] = 40,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [28] = {
        [anon_sym_RPAREN] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [29] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 156,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [30] = {
        [sym_identifier] = 158,
        [sym__function_name] = 160,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_PIPE] = 158,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 158,
        [sym__line_break] = 40,
    },
    [31] = {
        [sym_identifier] = 78,
        [sym__function_name] = 162,
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 84,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 40,
    },
    [32] = {
        [sym__compound_statement] = 164,
        [sym__statement] = 110,
        [sym__call] = 112,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [sym_identifier] = 122,
        [aux_sym__compound_statement_repeat1] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 122,
        [anon_sym_self] = 122,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [33] = {
        [sym__statement] = 140,
        [sym__call] = 140,
        [sym__command] = 140,
        [sym__function_call] = 140,
        [sym__expression] = 140,
        [sym__argument] = 140,
        [sym__primary] = 140,
        [sym__variable] = 140,
        [sym_identifier] = 140,
        [sym__terminator] = 140,
        [aux_sym__compound_statement_repeat1] = 140,
        [aux_sym_identifier_repeat1] = 140,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 140,
        [anon_sym_super] = 140,
        [anon_sym_LPAREN] = 140,
        [anon_sym_RPAREN] = 140,
        [anon_sym_nil] = 140,
        [anon_sym_self] = 140,
        [anon_sym_AT] = 140,
        [anon_sym_DOLLAR] = 140,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 140,
        [anon_sym_SEMI] = 140,
    },
    [34] = {
        [anon_sym_RPAREN] = 166,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [35] = {
        [sym__statement] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [sym__terminator] = 168,
        [aux_sym__compound_statement_repeat1] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_super] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_RPAREN] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 40,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [36] = {
        [sym_identifier] = 170,
        [sym__function_name] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_PIPE] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 170,
        [sym__line_break] = 40,
    },
    [37] = {
        [sym_identifier] = 158,
        [sym__function_name] = 172,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_PIPE] = 158,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 158,
        [sym__line_break] = 40,
    },
    [38] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 174,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [39] = {
        [sym_identifier] = 140,
        [sym__function_name] = 140,
        [aux_sym_identifier_repeat1] = 140,
        [anon_sym_PIPE] = 140,
        [anon_sym_AT] = 140,
        [anon_sym_DOLLAR] = 140,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 140,
        [sym__line_break] = 40,
    },
    [40] = {
        [sym_identifier] = 176,
        [sym__function_name] = 176,
        [aux_sym_identifier_repeat1] = 176,
        [anon_sym_PIPE] = 176,
        [anon_sym_AT] = 176,
        [anon_sym_DOLLAR] = 176,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 176,
        [sym__line_break] = 40,
    },
    [41] = {
        [sym__statement] = 170,
        [sym__call] = 170,
        [sym__command] = 170,
        [sym__function_call] = 170,
        [sym__expression] = 170,
        [sym__argument] = 170,
        [sym__primary] = 170,
        [sym__variable] = 170,
        [sym_identifier] = 170,
        [sym__terminator] = 170,
        [aux_sym__compound_statement_repeat1] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_undef] = 170,
        [anon_sym_alias] = 170,
        [anon_sym_super] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_RPAREN] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 40,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [42] = {
        [sym__statement] = 178,
        [sym__call] = 178,
        [sym__command] = 178,
        [sym__function_call] = 178,
        [sym__expression] = 178,
        [sym__argument] = 178,
        [sym__primary] = 178,
        [sym__variable] = 178,
        [sym_identifier] = 178,
        [sym__terminator] = 178,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 178,
        [anon_sym_undef] = 178,
        [anon_sym_alias] = 178,
        [anon_sym_super] = 178,
        [anon_sym_LPAREN] = 178,
        [anon_sym_RPAREN] = 178,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [anon_sym_AT] = 178,
        [anon_sym_DOLLAR] = 178,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 178,
        [sym_comment] = 40,
        [sym__line_break] = 178,
        [anon_sym_SEMI] = 178,
    },
    [43] = {
        [sym__statement] = 180,
        [sym__call] = 180,
        [sym__command] = 180,
        [sym__function_call] = 180,
        [sym__expression] = 180,
        [sym__argument] = 180,
        [sym__primary] = 180,
        [sym__variable] = 180,
        [sym_identifier] = 180,
        [sym__terminator] = 180,
        [aux_sym__compound_statement_repeat1] = 180,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_undef] = 180,
        [anon_sym_alias] = 180,
        [anon_sym_super] = 180,
        [anon_sym_LPAREN] = 180,
        [anon_sym_RPAREN] = 180,
        [anon_sym_nil] = 180,
        [anon_sym_self] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_DOLLAR] = 180,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 180,
        [sym_comment] = 40,
        [sym__line_break] = 180,
        [anon_sym_SEMI] = 180,
    },
    [44] = {
        [sym__statement] = 176,
        [sym__call] = 176,
        [sym__command] = 176,
        [sym__function_call] = 176,
        [sym__expression] = 176,
        [sym__argument] = 176,
        [sym__primary] = 176,
        [sym__variable] = 176,
        [sym_identifier] = 176,
        [sym__terminator] = 176,
        [aux_sym__compound_statement_repeat1] = 176,
        [aux_sym_identifier_repeat1] = 176,
        [anon_sym_undef] = 176,
        [anon_sym_alias] = 176,
        [anon_sym_super] = 176,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 176,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 176,
        [anon_sym_DOLLAR] = 176,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 40,
        [sym__line_break] = 176,
        [anon_sym_SEMI] = 176,
    },
    [45] = {
        [sym__compound_statement] = 182,
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 198,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_PIPE] = 202,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [46] = {
        [anon_sym_end] = 212,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [47] = {
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [sym__terminator] = 214,
        [aux_sym__compound_statement_repeat1] = 216,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_end] = 50,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 218,
        [anon_sym_SEMI] = 220,
    },
    [48] = {
        [anon_sym_do] = 222,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [49] = {
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
        [anon_sym_undef] = 60,
        [anon_sym_alias] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 40,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [50] = {
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
        [anon_sym_undef] = 62,
        [anon_sym_alias] = 62,
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 40,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [51] = {
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
        [anon_sym_undef] = 64,
        [anon_sym_alias] = 64,
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [52] = {
        [sym__statement] = 66,
        [sym__call] = 66,
        [sym__command] = 66,
        [sym__function_call] = 66,
        [sym__expression] = 66,
        [sym__argument] = 66,
        [sym__primary] = 66,
        [sym__variable] = 66,
        [sym_identifier] = 66,
        [sym__terminator] = 66,
        [aux_sym__compound_statement_repeat1] = 66,
        [aux_sym_identifier_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_undef] = 66,
        [anon_sym_alias] = 66,
        [anon_sym_super] = 66,
        [anon_sym_LPAREN] = 66,
        [anon_sym_nil] = 66,
        [anon_sym_self] = 66,
        [anon_sym_AT] = 66,
        [anon_sym_DOLLAR] = 66,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [53] = {
        [sym__statement] = 68,
        [sym__call] = 68,
        [sym__command] = 68,
        [sym__function_call] = 68,
        [sym__expression] = 68,
        [sym__argument] = 68,
        [sym__primary] = 68,
        [sym__variable] = 68,
        [sym_identifier] = 68,
        [sym__terminator] = 68,
        [aux_sym__compound_statement_repeat1] = 68,
        [aux_sym_identifier_repeat1] = 68,
        [anon_sym_end] = 68,
        [anon_sym_undef] = 68,
        [anon_sym_alias] = 68,
        [anon_sym_super] = 68,
        [anon_sym_LPAREN] = 68,
        [anon_sym_nil] = 68,
        [anon_sym_self] = 68,
        [anon_sym_AT] = 68,
        [anon_sym_DOLLAR] = 68,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 68,
        [sym_comment] = 40,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [54] = {
        [anon_sym_end] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [55] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 224,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [56] = {
        [sym__compound_statement] = 226,
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 198,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [57] = {
        [sym_identifier] = 228,
        [sym__function_name] = 230,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_PIPE] = 228,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 228,
        [sym__line_break] = 40,
    },
    [58] = {
        [sym_identifier] = 78,
        [sym__function_name] = 232,
        [aux_sym_identifier_repeat1] = 82,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 84,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 40,
    },
    [59] = {
        [sym__compound_statement] = 234,
        [sym__statement] = 110,
        [sym__call] = 112,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [sym_identifier] = 122,
        [aux_sym__compound_statement_repeat1] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 122,
        [anon_sym_self] = 122,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [60] = {
        [sym__statement] = 140,
        [sym__call] = 140,
        [sym__command] = 140,
        [sym__function_call] = 140,
        [sym__expression] = 140,
        [sym__argument] = 140,
        [sym__primary] = 140,
        [sym__variable] = 140,
        [sym_identifier] = 140,
        [sym__terminator] = 140,
        [aux_sym__compound_statement_repeat1] = 140,
        [aux_sym_identifier_repeat1] = 140,
        [anon_sym_end] = 140,
        [anon_sym_undef] = 140,
        [anon_sym_alias] = 140,
        [anon_sym_super] = 140,
        [anon_sym_LPAREN] = 140,
        [anon_sym_nil] = 140,
        [anon_sym_self] = 140,
        [anon_sym_AT] = 140,
        [anon_sym_DOLLAR] = 140,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 140,
        [anon_sym_SEMI] = 140,
    },
    [61] = {
        [anon_sym_RPAREN] = 236,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [62] = {
        [sym__statement] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [sym__terminator] = 168,
        [aux_sym__compound_statement_repeat1] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_end] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_super] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 40,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [63] = {
        [sym_identifier] = 228,
        [sym__function_name] = 238,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_PIPE] = 228,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 228,
        [sym__line_break] = 40,
    },
    [64] = {
        [sym__statement] = 170,
        [sym__call] = 170,
        [sym__command] = 170,
        [sym__function_call] = 170,
        [sym__expression] = 170,
        [sym__argument] = 170,
        [sym__primary] = 170,
        [sym__variable] = 170,
        [sym_identifier] = 170,
        [sym__terminator] = 170,
        [aux_sym__compound_statement_repeat1] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_end] = 170,
        [anon_sym_undef] = 170,
        [anon_sym_alias] = 170,
        [anon_sym_super] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 40,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [65] = {
        [sym__statement] = 178,
        [sym__call] = 178,
        [sym__command] = 178,
        [sym__function_call] = 178,
        [sym__expression] = 178,
        [sym__argument] = 178,
        [sym__primary] = 178,
        [sym__variable] = 178,
        [sym_identifier] = 178,
        [sym__terminator] = 178,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 178,
        [anon_sym_end] = 178,
        [anon_sym_undef] = 178,
        [anon_sym_alias] = 178,
        [anon_sym_super] = 178,
        [anon_sym_LPAREN] = 178,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [anon_sym_AT] = 178,
        [anon_sym_DOLLAR] = 178,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 178,
        [sym_comment] = 40,
        [sym__line_break] = 178,
        [anon_sym_SEMI] = 178,
    },
    [66] = {
        [sym__statement] = 180,
        [sym__call] = 180,
        [sym__command] = 180,
        [sym__function_call] = 180,
        [sym__expression] = 180,
        [sym__argument] = 180,
        [sym__primary] = 180,
        [sym__variable] = 180,
        [sym_identifier] = 180,
        [sym__terminator] = 180,
        [aux_sym__compound_statement_repeat1] = 180,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_end] = 180,
        [anon_sym_undef] = 180,
        [anon_sym_alias] = 180,
        [anon_sym_super] = 180,
        [anon_sym_LPAREN] = 180,
        [anon_sym_nil] = 180,
        [anon_sym_self] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_DOLLAR] = 180,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 180,
        [sym_comment] = 40,
        [sym__line_break] = 180,
        [anon_sym_SEMI] = 180,
    },
    [67] = {
        [anon_sym_end] = 240,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [68] = {
        [sym__statement] = 242,
        [sym__call] = 242,
        [sym__command] = 242,
        [sym__function_call] = 242,
        [sym__expression] = 242,
        [sym__argument] = 242,
        [sym__primary] = 242,
        [sym__variable] = 242,
        [sym_identifier] = 242,
        [sym__terminator] = 242,
        [aux_sym__compound_statement_repeat1] = 242,
        [aux_sym_identifier_repeat1] = 242,
        [anon_sym_undef] = 242,
        [anon_sym_alias] = 242,
        [anon_sym_super] = 242,
        [anon_sym_LPAREN] = 242,
        [anon_sym_RPAREN] = 242,
        [anon_sym_nil] = 242,
        [anon_sym_self] = 242,
        [anon_sym_AT] = 242,
        [anon_sym_DOLLAR] = 242,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 40,
        [sym__line_break] = 242,
        [anon_sym_SEMI] = 242,
    },
    [69] = {
        [sym__statement] = 176,
        [sym__call] = 176,
        [sym__command] = 176,
        [sym__function_call] = 176,
        [sym__expression] = 176,
        [sym__argument] = 176,
        [sym__primary] = 176,
        [sym__variable] = 176,
        [sym_identifier] = 176,
        [sym__terminator] = 176,
        [aux_sym__compound_statement_repeat1] = 176,
        [aux_sym_identifier_repeat1] = 176,
        [anon_sym_end] = 176,
        [anon_sym_undef] = 176,
        [anon_sym_alias] = 176,
        [anon_sym_super] = 176,
        [anon_sym_LPAREN] = 176,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 176,
        [anon_sym_DOLLAR] = 176,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 40,
        [sym__line_break] = 176,
        [anon_sym_SEMI] = 176,
    },
    [70] = {
        [sym__compound_statement] = 244,
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 198,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_PIPE] = 246,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [71] = {
        [anon_sym_end] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [72] = {
        [sym__compound_statement] = 250,
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 198,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [73] = {
        [anon_sym_end] = 252,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [74] = {
        [sym__statement] = 242,
        [sym__call] = 242,
        [sym__command] = 242,
        [sym__function_call] = 242,
        [sym__expression] = 242,
        [sym__argument] = 242,
        [sym__primary] = 242,
        [sym__variable] = 242,
        [sym_identifier] = 242,
        [sym__terminator] = 242,
        [aux_sym__compound_statement_repeat1] = 242,
        [aux_sym_identifier_repeat1] = 242,
        [anon_sym_end] = 242,
        [anon_sym_undef] = 242,
        [anon_sym_alias] = 242,
        [anon_sym_super] = 242,
        [anon_sym_LPAREN] = 242,
        [anon_sym_nil] = 242,
        [anon_sym_self] = 242,
        [anon_sym_AT] = 242,
        [anon_sym_DOLLAR] = 242,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 40,
        [sym__line_break] = 242,
        [anon_sym_SEMI] = 242,
    },
    [75] = {
        [sym__statement] = 254,
        [sym__call] = 254,
        [sym__command] = 254,
        [sym__function_call] = 254,
        [sym__expression] = 254,
        [sym__argument] = 254,
        [sym__primary] = 254,
        [sym__variable] = 254,
        [sym_identifier] = 254,
        [sym__terminator] = 254,
        [aux_sym__compound_statement_repeat1] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_undef] = 254,
        [anon_sym_alias] = 254,
        [anon_sym_super] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_nil] = 254,
        [anon_sym_self] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 40,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [76] = {
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 256,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_end] = 258,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [77] = {
        [anon_sym_end] = 258,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [78] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [sym__terminator] = 262,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 262,
    },
    [79] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [80] = {
        [anon_sym_end] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [81] = {
        [sym__statement] = 254,
        [sym__call] = 254,
        [sym__command] = 254,
        [sym__function_call] = 254,
        [sym__expression] = 254,
        [sym__argument] = 254,
        [sym__primary] = 254,
        [sym__variable] = 254,
        [sym_identifier] = 254,
        [sym__terminator] = 254,
        [aux_sym__compound_statement_repeat1] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_undef] = 254,
        [anon_sym_alias] = 254,
        [anon_sym_super] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_RPAREN] = 254,
        [anon_sym_nil] = 254,
        [anon_sym_self] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 40,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [82] = {
        [sym__statement] = 110,
        [sym__call] = 112,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [sym_identifier] = 122,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 258,
        [anon_sym_nil] = 122,
        [anon_sym_self] = 122,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [83] = {
        [anon_sym_RPAREN] = 258,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [84] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [sym__terminator] = 262,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_RPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 262,
    },
    [85] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_RPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [86] = {
        [anon_sym_RPAREN] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [87] = {
        [sym__statement] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [sym__terminator] = 168,
        [aux_sym__compound_statement_repeat1] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_super] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 40,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [88] = {
        [anon_sym_do] = 268,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [89] = {
        [anon_sym_do] = 270,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [90] = {
        [aux_sym__call_arguments_repeat1] = 272,
        [anon_sym_do] = 270,
        [anon_sym_COMMA] = 274,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [91] = {
        [aux_sym__call_arguments_repeat1] = 64,
        [anon_sym_do] = 64,
        [anon_sym_COMMA] = 64,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [92] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [93] = {
        [aux_sym__call_arguments_repeat1] = 68,
        [anon_sym_do] = 68,
        [anon_sym_COMMA] = 68,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [94] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [95] = {
        [sym__call_arguments] = 86,
        [sym__command] = 88,
        [sym__argument] = 90,
        [sym__primary] = 92,
        [sym__variable] = 94,
        [sym_identifier] = 96,
        [aux_sym_identifier_repeat1] = 98,
        [anon_sym_super] = 102,
        [anon_sym_LPAREN] = 104,
        [anon_sym_nil] = 96,
        [anon_sym_self] = 96,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 106,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [96] = {
        [sym__compound_statement] = 278,
        [sym__statement] = 110,
        [sym__call] = 112,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 114,
        [sym__argument] = 116,
        [sym__primary] = 118,
        [sym__variable] = 120,
        [sym_identifier] = 122,
        [aux_sym__compound_statement_repeat1] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 132,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 122,
        [anon_sym_self] = 122,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [97] = {
        [aux_sym__call_arguments_repeat1] = 140,
        [anon_sym_do] = 140,
        [anon_sym_COMMA] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [98] = {
        [anon_sym_RPAREN] = 280,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [99] = {
        [aux_sym__call_arguments_repeat1] = 168,
        [anon_sym_do] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [100] = {
        [aux_sym__call_arguments_repeat1] = 176,
        [anon_sym_do] = 176,
        [anon_sym_COMMA] = 176,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [101] = {
        [anon_sym_do] = 282,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [102] = {
        [sym__argument] = 284,
        [sym__primary] = 92,
        [sym__variable] = 94,
        [sym_identifier] = 96,
        [aux_sym_identifier_repeat1] = 98,
        [anon_sym_LPAREN] = 104,
        [anon_sym_nil] = 96,
        [anon_sym_self] = 96,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 106,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [103] = {
        [aux_sym__call_arguments_repeat1] = 286,
        [anon_sym_do] = 288,
        [anon_sym_COMMA] = 274,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [104] = {
        [anon_sym_do] = 290,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [105] = {
        [sym_identifier] = 74,
        [sym__function_name] = 292,
        [aux_sym_identifier_repeat1] = 24,
        [anon_sym_PIPE] = 74,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 74,
        [sym__line_break] = 40,
    },
    [106] = {
        [sym__statement] = 170,
        [sym__call] = 170,
        [sym__command] = 170,
        [sym__function_call] = 170,
        [sym__expression] = 170,
        [sym__argument] = 170,
        [sym__primary] = 170,
        [sym__variable] = 170,
        [sym_identifier] = 170,
        [sym__terminator] = 170,
        [aux_sym__compound_statement_repeat1] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [ts_builtin_sym_end] = 170,
        [anon_sym_undef] = 170,
        [anon_sym_alias] = 170,
        [anon_sym_super] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 40,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [107] = {
        [sym__statement] = 178,
        [sym__call] = 178,
        [sym__command] = 178,
        [sym__function_call] = 178,
        [sym__expression] = 178,
        [sym__argument] = 178,
        [sym__primary] = 178,
        [sym__variable] = 178,
        [sym_identifier] = 178,
        [sym__terminator] = 178,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 178,
        [ts_builtin_sym_end] = 178,
        [anon_sym_undef] = 178,
        [anon_sym_alias] = 178,
        [anon_sym_super] = 178,
        [anon_sym_LPAREN] = 178,
        [anon_sym_nil] = 178,
        [anon_sym_self] = 178,
        [anon_sym_AT] = 178,
        [anon_sym_DOLLAR] = 178,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 178,
        [sym_comment] = 40,
        [sym__line_break] = 178,
        [anon_sym_SEMI] = 178,
    },
    [108] = {
        [sym__statement] = 180,
        [sym__call] = 180,
        [sym__command] = 180,
        [sym__function_call] = 180,
        [sym__expression] = 180,
        [sym__argument] = 180,
        [sym__primary] = 180,
        [sym__variable] = 180,
        [sym_identifier] = 180,
        [sym__terminator] = 180,
        [aux_sym__compound_statement_repeat1] = 180,
        [aux_sym_identifier_repeat1] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_undef] = 180,
        [anon_sym_alias] = 180,
        [anon_sym_super] = 180,
        [anon_sym_LPAREN] = 180,
        [anon_sym_nil] = 180,
        [anon_sym_self] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_DOLLAR] = 180,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 180,
        [sym_comment] = 40,
        [sym__line_break] = 180,
        [anon_sym_SEMI] = 180,
    },
    [109] = {
        [sym__statement] = 176,
        [sym__call] = 176,
        [sym__command] = 176,
        [sym__function_call] = 176,
        [sym__expression] = 176,
        [sym__argument] = 176,
        [sym__primary] = 176,
        [sym__variable] = 176,
        [sym_identifier] = 176,
        [sym__terminator] = 176,
        [aux_sym__compound_statement_repeat1] = 176,
        [aux_sym_identifier_repeat1] = 176,
        [ts_builtin_sym_end] = 176,
        [anon_sym_undef] = 176,
        [anon_sym_alias] = 176,
        [anon_sym_super] = 176,
        [anon_sym_LPAREN] = 176,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 176,
        [anon_sym_DOLLAR] = 176,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 40,
        [sym__line_break] = 176,
        [anon_sym_SEMI] = 176,
    },
    [110] = {
        [sym__compound_statement] = 294,
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 198,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_PIPE] = 296,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [111] = {
        [anon_sym_end] = 298,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [112] = {
        [sym__compound_statement] = 300,
        [sym__statement] = 184,
        [sym__call] = 186,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 188,
        [sym__argument] = 190,
        [sym__primary] = 192,
        [sym__variable] = 194,
        [sym_identifier] = 196,
        [aux_sym__compound_statement_repeat1] = 198,
        [aux_sym_identifier_repeat1] = 200,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 204,
        [anon_sym_alias] = 206,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 208,
        [anon_sym_nil] = 196,
        [anon_sym_self] = 196,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 210,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [113] = {
        [anon_sym_end] = 302,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [114] = {
        [sym__statement] = 242,
        [sym__call] = 242,
        [sym__command] = 242,
        [sym__function_call] = 242,
        [sym__expression] = 242,
        [sym__argument] = 242,
        [sym__primary] = 242,
        [sym__variable] = 242,
        [sym_identifier] = 242,
        [sym__terminator] = 242,
        [aux_sym__compound_statement_repeat1] = 242,
        [aux_sym_identifier_repeat1] = 242,
        [ts_builtin_sym_end] = 242,
        [anon_sym_undef] = 242,
        [anon_sym_alias] = 242,
        [anon_sym_super] = 242,
        [anon_sym_LPAREN] = 242,
        [anon_sym_nil] = 242,
        [anon_sym_self] = 242,
        [anon_sym_AT] = 242,
        [anon_sym_DOLLAR] = 242,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 40,
        [sym__line_break] = 242,
        [anon_sym_SEMI] = 242,
    },
    [115] = {
        [sym__statement] = 254,
        [sym__call] = 254,
        [sym__command] = 254,
        [sym__function_call] = 254,
        [sym__expression] = 254,
        [sym__argument] = 254,
        [sym__primary] = 254,
        [sym__variable] = 254,
        [sym_identifier] = 254,
        [sym__terminator] = 254,
        [aux_sym__compound_statement_repeat1] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [ts_builtin_sym_end] = 254,
        [anon_sym_undef] = 254,
        [anon_sym_alias] = 254,
        [anon_sym_super] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_nil] = 254,
        [anon_sym_self] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 40,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [116] = {
        [sym__statement] = 6,
        [sym__call] = 8,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 12,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym__compound_statement_repeat1] = 304,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 258,
        [anon_sym_undef] = 28,
        [anon_sym_alias] = 30,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 34,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [117] = {
        [ts_builtin_sym_end] = 258,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [118] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [sym__terminator] = 262,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [ts_builtin_sym_end] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 262,
    },
    [119] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [ts_builtin_sym_end] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [120] = {
        [ts_builtin_sym_end] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
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
    [36] = {.count = 1}, SHIFT(17, 0),
    [38] = {.count = 1}, SHIFT(18, 0),
    [40] = {.count = 1}, SHIFT_EXTRA(),
    [42] = {.count = 1}, ACCEPT_INPUT(),
    [44] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [46] = {.count = 1}, SHIFT(116, 0),
    [48] = {.count = 1}, SHIFT(117, 0),
    [50] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 1, 0),
    [52] = {.count = 1}, SHIFT(118, 0),
    [54] = {.count = 1}, SHIFT(119, 0),
    [56] = {.count = 1}, SHIFT(110, 0),
    [58] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__compound_statement, 1, 0),
    [72] = {.count = 1}, SHIFT(109, 0),
    [74] = {.count = 1}, SHIFT(106, 0),
    [76] = {.count = 1}, SHIFT(108, 0),
    [78] = {.count = 1}, SHIFT(36, 0),
    [80] = {.count = 1}, SHIFT(105, 0),
    [82] = {.count = 1}, SHIFT(38, 0),
    [84] = {.count = 1}, SHIFT(39, 0),
    [86] = {.count = 1}, SHIFT(88, 0),
    [88] = {.count = 1}, SHIFT(89, 0),
    [90] = {.count = 1}, SHIFT(90, 0),
    [92] = {.count = 1}, SHIFT(91, 0),
    [94] = {.count = 1}, SHIFT(92, 0),
    [96] = {.count = 1}, SHIFT(93, 0),
    [98] = {.count = 1}, SHIFT(94, 0),
    [100] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [102] = {.count = 1}, SHIFT(95, 0),
    [104] = {.count = 1}, SHIFT(96, 0),
    [106] = {.count = 1}, SHIFT(97, 0),
    [108] = {.count = 1}, SHIFT(20, 0),
    [110] = {.count = 1}, SHIFT(21, 0),
    [112] = {.count = 1}, SHIFT(22, 0),
    [114] = {.count = 1}, SHIFT(23, 0),
    [116] = {.count = 1}, SHIFT(24, 0),
    [118] = {.count = 1}, SHIFT(25, 0),
    [120] = {.count = 1}, SHIFT(26, 0),
    [122] = {.count = 1}, SHIFT(27, 0),
    [124] = {.count = 1}, SHIFT(28, 0),
    [126] = {.count = 1}, SHIFT(29, 0),
    [128] = {.count = 1}, SHIFT(30, 0),
    [130] = {.count = 1}, SHIFT(31, 0),
    [132] = {.count = 1}, SHIFT(32, 0),
    [134] = {.count = 1}, SHIFT(33, 0),
    [136] = {.count = 1}, SHIFT(19, 0),
    [138] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [140] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [142] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [144] = {.count = 1}, SHIFT(87, 0),
    [146] = {.count = 1}, SHIFT(82, 0),
    [148] = {.count = 1}, SHIFT(83, 0),
    [150] = {.count = 1}, SHIFT(84, 0),
    [152] = {.count = 1}, SHIFT(85, 0),
    [154] = {.count = 1}, SHIFT(45, 0),
    [156] = {.count = 1}, SHIFT(44, 0),
    [158] = {.count = 1}, SHIFT(41, 0),
    [160] = {.count = 1}, SHIFT(43, 0),
    [162] = {.count = 1}, SHIFT(37, 0),
    [164] = {.count = 1}, SHIFT(34, 0),
    [166] = {.count = 1}, SHIFT(35, 0),
    [168] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [170] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [172] = {.count = 1}, SHIFT(42, 0),
    [174] = {.count = 1}, SHIFT(40, 0),
    [176] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [178] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [180] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [182] = {.count = 1}, SHIFT(46, 0),
    [184] = {.count = 1}, SHIFT(47, 0),
    [186] = {.count = 1}, SHIFT(48, 0),
    [188] = {.count = 1}, SHIFT(49, 0),
    [190] = {.count = 1}, SHIFT(50, 0),
    [192] = {.count = 1}, SHIFT(51, 0),
    [194] = {.count = 1}, SHIFT(52, 0),
    [196] = {.count = 1}, SHIFT(53, 0),
    [198] = {.count = 1}, SHIFT(54, 0),
    [200] = {.count = 1}, SHIFT(55, 0),
    [202] = {.count = 1}, SHIFT(56, 0),
    [204] = {.count = 1}, SHIFT(57, 0),
    [206] = {.count = 1}, SHIFT(58, 0),
    [208] = {.count = 1}, SHIFT(59, 0),
    [210] = {.count = 1}, SHIFT(60, 0),
    [212] = {.count = 1}, SHIFT(81, 0),
    [214] = {.count = 1}, SHIFT(76, 0),
    [216] = {.count = 1}, SHIFT(77, 0),
    [218] = {.count = 1}, SHIFT(78, 0),
    [220] = {.count = 1}, SHIFT(79, 0),
    [222] = {.count = 1}, SHIFT(70, 0),
    [224] = {.count = 1}, SHIFT(69, 0),
    [226] = {.count = 1}, SHIFT(67, 0),
    [228] = {.count = 1}, SHIFT(64, 0),
    [230] = {.count = 1}, SHIFT(66, 0),
    [232] = {.count = 1}, SHIFT(63, 0),
    [234] = {.count = 1}, SHIFT(61, 0),
    [236] = {.count = 1}, SHIFT(62, 0),
    [238] = {.count = 1}, SHIFT(65, 0),
    [240] = {.count = 1}, SHIFT(68, 0),
    [242] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [244] = {.count = 1}, SHIFT(71, 0),
    [246] = {.count = 1}, SHIFT(72, 0),
    [248] = {.count = 1}, SHIFT(75, 0),
    [250] = {.count = 1}, SHIFT(73, 0),
    [252] = {.count = 1}, SHIFT(74, 0),
    [254] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [256] = {.count = 1}, SHIFT(80, 0),
    [258] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 2, 0),
    [260] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [262] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [264] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 3, 0),
    [266] = {.count = 1}, SHIFT(86, 0),
    [268] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [270] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [272] = {.count = 1}, SHIFT(101, 0),
    [274] = {.count = 1}, SHIFT(102, 0),
    [276] = {.count = 1}, SHIFT(100, 0),
    [278] = {.count = 1}, SHIFT(98, 0),
    [280] = {.count = 1}, SHIFT(99, 0),
    [282] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [284] = {.count = 1}, SHIFT(103, 0),
    [286] = {.count = 1}, SHIFT(104, 0),
    [288] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [290] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [292] = {.count = 1}, SHIFT(107, 0),
    [294] = {.count = 1}, SHIFT(111, 0),
    [296] = {.count = 1}, SHIFT(112, 0),
    [298] = {.count = 1}, SHIFT(115, 0),
    [300] = {.count = 1}, SHIFT(113, 0),
    [302] = {.count = 1}, SHIFT(114, 0),
    [304] = {.count = 1}, SHIFT(120, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
