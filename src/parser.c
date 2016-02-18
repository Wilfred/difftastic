#include "tree_sitter/parser.h"

#define STATE_COUNT 108
#define SYMBOL_COUNT 36

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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
            if (lookahead == '|')
                ADVANCE(47);
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(27);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_do);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(29);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_end);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(32);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(33);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_nil);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(35);
            if (lookahead == 'u')
                ADVANCE(38);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_self);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(39);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(41);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_super);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
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
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_undef);
        case 47:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 48:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
            LEX_ERROR();
        case 49:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(49);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(11);
            LEX_ERROR();
        case 50:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (lookahead == 'o')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            ACCEPT_TOKEN(anon_sym_do);
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
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 55:
            START_TOKEN();
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
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            LEX_ERROR();
        case 57:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(57);
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
            LEX_ERROR();
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
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
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
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(11);
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
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
            if (lookahead == '|')
                ADVANCE(47);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (lookahead == 'n')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            if (lookahead == 'd')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            ACCEPT_TOKEN(anon_sym_end);
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
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(42);
            LEX_ERROR();
        case 68:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(52);
            LEX_ERROR();
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
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
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(34);
            LEX_ERROR();
        case 70:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
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
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(35);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 48,
    [1] = 49,
    [2] = 49,
    [3] = 50,
    [4] = 51,
    [5] = 51,
    [6] = 50,
    [7] = 50,
    [8] = 50,
    [9] = 50,
    [10] = 50,
    [11] = 49,
    [12] = 54,
    [13] = 55,
    [14] = 56,
    [15] = 57,
    [16] = 58,
    [17] = 50,
    [18] = 54,
    [19] = 59,
    [20] = 60,
    [21] = 51,
    [22] = 60,
    [23] = 60,
    [24] = 60,
    [25] = 60,
    [26] = 60,
    [27] = 59,
    [28] = 54,
    [29] = 55,
    [30] = 57,
    [31] = 60,
    [32] = 59,
    [33] = 60,
    [34] = 60,
    [35] = 60,
    [36] = 60,
    [37] = 61,
    [38] = 62,
    [39] = 66,
    [40] = 51,
    [41] = 66,
    [42] = 66,
    [43] = 66,
    [44] = 66,
    [45] = 66,
    [46] = 62,
    [47] = 54,
    [48] = 67,
    [49] = 55,
    [50] = 57,
    [51] = 66,
    [52] = 59,
    [53] = 66,
    [54] = 66,
    [55] = 66,
    [56] = 62,
    [57] = 60,
    [58] = 66,
    [59] = 61,
    [60] = 62,
    [61] = 67,
    [62] = 62,
    [63] = 66,
    [64] = 66,
    [65] = 67,
    [66] = 62,
    [67] = 66,
    [68] = 67,
    [69] = 62,
    [70] = 60,
    [71] = 57,
    [72] = 59,
    [73] = 60,
    [74] = 57,
    [75] = 59,
    [76] = 50,
    [77] = 51,
    [78] = 51,
    [79] = 68,
    [80] = 68,
    [81] = 68,
    [82] = 68,
    [83] = 54,
    [84] = 69,
    [85] = 57,
    [86] = 68,
    [87] = 59,
    [88] = 68,
    [89] = 68,
    [90] = 51,
    [91] = 70,
    [92] = 68,
    [93] = 51,
    [94] = 50,
    [95] = 50,
    [96] = 50,
    [97] = 61,
    [98] = 62,
    [99] = 67,
    [100] = 62,
    [101] = 50,
    [102] = 50,
    [103] = 48,
    [104] = 49,
    [105] = 50,
    [106] = 48,
    [107] = 49,
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
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 32,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 36,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [1] = {
        [ts_builtin_sym_end] = 40,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [2] = {
        [ts_builtin_sym_end] = 42,
        [sym_comment] = 38,
        [sym__line_break] = 38,
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
        [sym__terminator] = 44,
        [aux_sym__compound_statement_repeat1] = 46,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 48,
        [anon_sym_undef] = 28,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 32,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 36,
        [sym_comment] = 38,
        [sym__line_break] = 50,
        [anon_sym_SEMI] = 52,
    },
    [4] = {
        [anon_sym_do] = 54,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [5] = {
        [anon_sym_do] = 56,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [6] = {
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
        [anon_sym_undef] = 58,
        [anon_sym_super] = 58,
        [anon_sym_LPAREN] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 38,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [7] = {
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
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 38,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [8] = {
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
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 38,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [9] = {
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
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [10] = {
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
        [anon_sym_super] = 66,
        [anon_sym_LPAREN] = 66,
        [anon_sym_nil] = 66,
        [anon_sym_self] = 66,
        [anon_sym_AT] = 66,
        [anon_sym_DOLLAR] = 66,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [11] = {
        [ts_builtin_sym_end] = 68,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [12] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 70,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [13] = {
        [sym_identifier] = 72,
        [sym__function_name] = 74,
        [aux_sym_identifier_repeat1] = 24,
        [anon_sym_PIPE] = 72,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 36,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 72,
        [sym__line_break] = 38,
    },
    [14] = {
        [sym__call_arguments] = 76,
        [sym__command] = 78,
        [sym__argument] = 80,
        [sym__primary] = 82,
        [sym__variable] = 84,
        [sym_identifier] = 86,
        [aux_sym_identifier_repeat1] = 88,
        [anon_sym_do] = 90,
        [anon_sym_super] = 92,
        [anon_sym_LPAREN] = 94,
        [anon_sym_nil] = 86,
        [anon_sym_self] = 86,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [15] = {
        [sym__compound_statement] = 98,
        [sym__statement] = 100,
        [sym__call] = 102,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 104,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [16] = {
        [aux_sym_identifier_repeat1] = 124,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 126,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [17] = {
        [sym__statement] = 128,
        [sym__call] = 128,
        [sym__command] = 128,
        [sym__function_call] = 128,
        [sym__expression] = 128,
        [sym__argument] = 128,
        [sym__primary] = 128,
        [sym__variable] = 128,
        [sym_identifier] = 128,
        [sym__terminator] = 128,
        [aux_sym__compound_statement_repeat1] = 128,
        [aux_sym_identifier_repeat1] = 128,
        [ts_builtin_sym_end] = 128,
        [anon_sym_undef] = 128,
        [anon_sym_super] = 128,
        [anon_sym_LPAREN] = 128,
        [anon_sym_nil] = 128,
        [anon_sym_self] = 128,
        [anon_sym_AT] = 128,
        [anon_sym_DOLLAR] = 128,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 128,
        [anon_sym_SEMI] = 128,
    },
    [18] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [19] = {
        [anon_sym_RPAREN] = 132,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [20] = {
        [sym__statement] = 100,
        [sym__call] = 102,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 104,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [sym__terminator] = 134,
        [aux_sym__compound_statement_repeat1] = 136,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 48,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [sym__line_break] = 138,
        [anon_sym_SEMI] = 140,
    },
    [21] = {
        [anon_sym_do] = 142,
        [sym_comment] = 38,
        [sym__line_break] = 38,
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
        [anon_sym_undef] = 58,
        [anon_sym_super] = 58,
        [anon_sym_LPAREN] = 58,
        [anon_sym_RPAREN] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 38,
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
        [anon_sym_undef] = 60,
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_RPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 38,
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
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_RPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 38,
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
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_RPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 38,
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
        [anon_sym_super] = 66,
        [anon_sym_LPAREN] = 66,
        [anon_sym_RPAREN] = 66,
        [anon_sym_nil] = 66,
        [anon_sym_self] = 66,
        [anon_sym_AT] = 66,
        [anon_sym_DOLLAR] = 66,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [27] = {
        [anon_sym_RPAREN] = 68,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [28] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 144,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [29] = {
        [sym_identifier] = 146,
        [sym__function_name] = 148,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_PIPE] = 146,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 146,
        [sym__line_break] = 38,
    },
    [30] = {
        [sym__compound_statement] = 150,
        [sym__statement] = 100,
        [sym__call] = 102,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 104,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [31] = {
        [sym__statement] = 128,
        [sym__call] = 128,
        [sym__command] = 128,
        [sym__function_call] = 128,
        [sym__expression] = 128,
        [sym__argument] = 128,
        [sym__primary] = 128,
        [sym__variable] = 128,
        [sym_identifier] = 128,
        [sym__terminator] = 128,
        [aux_sym__compound_statement_repeat1] = 128,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 128,
        [anon_sym_super] = 128,
        [anon_sym_LPAREN] = 128,
        [anon_sym_RPAREN] = 128,
        [anon_sym_nil] = 128,
        [anon_sym_self] = 128,
        [anon_sym_AT] = 128,
        [anon_sym_DOLLAR] = 128,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 128,
        [anon_sym_SEMI] = 128,
    },
    [32] = {
        [anon_sym_RPAREN] = 152,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [33] = {
        [sym__statement] = 154,
        [sym__call] = 154,
        [sym__command] = 154,
        [sym__function_call] = 154,
        [sym__expression] = 154,
        [sym__argument] = 154,
        [sym__primary] = 154,
        [sym__variable] = 154,
        [sym_identifier] = 154,
        [sym__terminator] = 154,
        [aux_sym__compound_statement_repeat1] = 154,
        [aux_sym_identifier_repeat1] = 154,
        [anon_sym_undef] = 154,
        [anon_sym_super] = 154,
        [anon_sym_LPAREN] = 154,
        [anon_sym_RPAREN] = 154,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [anon_sym_AT] = 154,
        [anon_sym_DOLLAR] = 154,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 154,
        [sym_comment] = 38,
        [sym__line_break] = 154,
        [anon_sym_SEMI] = 154,
    },
    [34] = {
        [sym__statement] = 156,
        [sym__call] = 156,
        [sym__command] = 156,
        [sym__function_call] = 156,
        [sym__expression] = 156,
        [sym__argument] = 156,
        [sym__primary] = 156,
        [sym__variable] = 156,
        [sym_identifier] = 156,
        [sym__terminator] = 156,
        [aux_sym__compound_statement_repeat1] = 156,
        [aux_sym_identifier_repeat1] = 156,
        [anon_sym_undef] = 156,
        [anon_sym_super] = 156,
        [anon_sym_LPAREN] = 156,
        [anon_sym_RPAREN] = 156,
        [anon_sym_nil] = 156,
        [anon_sym_self] = 156,
        [anon_sym_AT] = 156,
        [anon_sym_DOLLAR] = 156,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 156,
        [sym_comment] = 38,
        [sym__line_break] = 156,
        [anon_sym_SEMI] = 156,
    },
    [35] = {
        [sym__statement] = 158,
        [sym__call] = 158,
        [sym__command] = 158,
        [sym__function_call] = 158,
        [sym__expression] = 158,
        [sym__argument] = 158,
        [sym__primary] = 158,
        [sym__variable] = 158,
        [sym_identifier] = 158,
        [sym__terminator] = 158,
        [aux_sym__compound_statement_repeat1] = 158,
        [aux_sym_identifier_repeat1] = 158,
        [anon_sym_undef] = 158,
        [anon_sym_super] = 158,
        [anon_sym_LPAREN] = 158,
        [anon_sym_RPAREN] = 158,
        [anon_sym_nil] = 158,
        [anon_sym_self] = 158,
        [anon_sym_AT] = 158,
        [anon_sym_DOLLAR] = 158,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 158,
        [sym_comment] = 38,
        [sym__line_break] = 158,
        [anon_sym_SEMI] = 158,
    },
    [36] = {
        [sym__statement] = 160,
        [sym__call] = 160,
        [sym__command] = 160,
        [sym__function_call] = 160,
        [sym__expression] = 160,
        [sym__argument] = 160,
        [sym__primary] = 160,
        [sym__variable] = 160,
        [sym_identifier] = 160,
        [sym__terminator] = 160,
        [aux_sym__compound_statement_repeat1] = 160,
        [aux_sym_identifier_repeat1] = 160,
        [anon_sym_undef] = 160,
        [anon_sym_super] = 160,
        [anon_sym_LPAREN] = 160,
        [anon_sym_RPAREN] = 160,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 160,
        [anon_sym_DOLLAR] = 160,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 160,
        [sym_comment] = 38,
        [sym__line_break] = 160,
        [anon_sym_SEMI] = 160,
    },
    [37] = {
        [sym__compound_statement] = 162,
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_PIPE] = 182,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [38] = {
        [anon_sym_end] = 190,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [39] = {
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [sym__terminator] = 192,
        [aux_sym__compound_statement_repeat1] = 194,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_end] = 48,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 196,
        [anon_sym_SEMI] = 198,
    },
    [40] = {
        [anon_sym_do] = 200,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [41] = {
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
        [anon_sym_undef] = 58,
        [anon_sym_super] = 58,
        [anon_sym_LPAREN] = 58,
        [anon_sym_nil] = 58,
        [anon_sym_self] = 58,
        [anon_sym_AT] = 58,
        [anon_sym_DOLLAR] = 58,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 58,
        [sym_comment] = 38,
        [sym__line_break] = 58,
        [anon_sym_SEMI] = 58,
    },
    [42] = {
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
        [anon_sym_super] = 60,
        [anon_sym_LPAREN] = 60,
        [anon_sym_nil] = 60,
        [anon_sym_self] = 60,
        [anon_sym_AT] = 60,
        [anon_sym_DOLLAR] = 60,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 60,
        [sym_comment] = 38,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [43] = {
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
        [anon_sym_super] = 62,
        [anon_sym_LPAREN] = 62,
        [anon_sym_nil] = 62,
        [anon_sym_self] = 62,
        [anon_sym_AT] = 62,
        [anon_sym_DOLLAR] = 62,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 62,
        [sym_comment] = 38,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [44] = {
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
        [anon_sym_super] = 64,
        [anon_sym_LPAREN] = 64,
        [anon_sym_nil] = 64,
        [anon_sym_self] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_DOLLAR] = 64,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [45] = {
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
        [anon_sym_super] = 66,
        [anon_sym_LPAREN] = 66,
        [anon_sym_nil] = 66,
        [anon_sym_self] = 66,
        [anon_sym_AT] = 66,
        [anon_sym_DOLLAR] = 66,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [46] = {
        [anon_sym_end] = 68,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [47] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 202,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [48] = {
        [sym__compound_statement] = 204,
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [49] = {
        [sym_identifier] = 206,
        [sym__function_name] = 208,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_PIPE] = 206,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [anon_sym_DOT_DOT] = 206,
        [sym__line_break] = 38,
    },
    [50] = {
        [sym__compound_statement] = 210,
        [sym__statement] = 100,
        [sym__call] = 102,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 104,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [51] = {
        [sym__statement] = 128,
        [sym__call] = 128,
        [sym__command] = 128,
        [sym__function_call] = 128,
        [sym__expression] = 128,
        [sym__argument] = 128,
        [sym__primary] = 128,
        [sym__variable] = 128,
        [sym_identifier] = 128,
        [sym__terminator] = 128,
        [aux_sym__compound_statement_repeat1] = 128,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_end] = 128,
        [anon_sym_undef] = 128,
        [anon_sym_super] = 128,
        [anon_sym_LPAREN] = 128,
        [anon_sym_nil] = 128,
        [anon_sym_self] = 128,
        [anon_sym_AT] = 128,
        [anon_sym_DOLLAR] = 128,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 128,
        [anon_sym_SEMI] = 128,
    },
    [52] = {
        [anon_sym_RPAREN] = 212,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [53] = {
        [sym__statement] = 154,
        [sym__call] = 154,
        [sym__command] = 154,
        [sym__function_call] = 154,
        [sym__expression] = 154,
        [sym__argument] = 154,
        [sym__primary] = 154,
        [sym__variable] = 154,
        [sym_identifier] = 154,
        [sym__terminator] = 154,
        [aux_sym__compound_statement_repeat1] = 154,
        [aux_sym_identifier_repeat1] = 154,
        [anon_sym_end] = 154,
        [anon_sym_undef] = 154,
        [anon_sym_super] = 154,
        [anon_sym_LPAREN] = 154,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [anon_sym_AT] = 154,
        [anon_sym_DOLLAR] = 154,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 154,
        [sym_comment] = 38,
        [sym__line_break] = 154,
        [anon_sym_SEMI] = 154,
    },
    [54] = {
        [sym__statement] = 156,
        [sym__call] = 156,
        [sym__command] = 156,
        [sym__function_call] = 156,
        [sym__expression] = 156,
        [sym__argument] = 156,
        [sym__primary] = 156,
        [sym__variable] = 156,
        [sym_identifier] = 156,
        [sym__terminator] = 156,
        [aux_sym__compound_statement_repeat1] = 156,
        [aux_sym_identifier_repeat1] = 156,
        [anon_sym_end] = 156,
        [anon_sym_undef] = 156,
        [anon_sym_super] = 156,
        [anon_sym_LPAREN] = 156,
        [anon_sym_nil] = 156,
        [anon_sym_self] = 156,
        [anon_sym_AT] = 156,
        [anon_sym_DOLLAR] = 156,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 156,
        [sym_comment] = 38,
        [sym__line_break] = 156,
        [anon_sym_SEMI] = 156,
    },
    [55] = {
        [sym__statement] = 158,
        [sym__call] = 158,
        [sym__command] = 158,
        [sym__function_call] = 158,
        [sym__expression] = 158,
        [sym__argument] = 158,
        [sym__primary] = 158,
        [sym__variable] = 158,
        [sym_identifier] = 158,
        [sym__terminator] = 158,
        [aux_sym__compound_statement_repeat1] = 158,
        [aux_sym_identifier_repeat1] = 158,
        [anon_sym_end] = 158,
        [anon_sym_undef] = 158,
        [anon_sym_super] = 158,
        [anon_sym_LPAREN] = 158,
        [anon_sym_nil] = 158,
        [anon_sym_self] = 158,
        [anon_sym_AT] = 158,
        [anon_sym_DOLLAR] = 158,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 158,
        [sym_comment] = 38,
        [sym__line_break] = 158,
        [anon_sym_SEMI] = 158,
    },
    [56] = {
        [anon_sym_end] = 214,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [57] = {
        [sym__statement] = 216,
        [sym__call] = 216,
        [sym__command] = 216,
        [sym__function_call] = 216,
        [sym__expression] = 216,
        [sym__argument] = 216,
        [sym__primary] = 216,
        [sym__variable] = 216,
        [sym_identifier] = 216,
        [sym__terminator] = 216,
        [aux_sym__compound_statement_repeat1] = 216,
        [aux_sym_identifier_repeat1] = 216,
        [anon_sym_undef] = 216,
        [anon_sym_super] = 216,
        [anon_sym_LPAREN] = 216,
        [anon_sym_RPAREN] = 216,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [anon_sym_AT] = 216,
        [anon_sym_DOLLAR] = 216,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 216,
        [sym_comment] = 38,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [58] = {
        [sym__statement] = 160,
        [sym__call] = 160,
        [sym__command] = 160,
        [sym__function_call] = 160,
        [sym__expression] = 160,
        [sym__argument] = 160,
        [sym__primary] = 160,
        [sym__variable] = 160,
        [sym_identifier] = 160,
        [sym__terminator] = 160,
        [aux_sym__compound_statement_repeat1] = 160,
        [aux_sym_identifier_repeat1] = 160,
        [anon_sym_end] = 160,
        [anon_sym_undef] = 160,
        [anon_sym_super] = 160,
        [anon_sym_LPAREN] = 160,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 160,
        [anon_sym_DOLLAR] = 160,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 160,
        [sym_comment] = 38,
        [sym__line_break] = 160,
        [anon_sym_SEMI] = 160,
    },
    [59] = {
        [sym__compound_statement] = 218,
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_PIPE] = 220,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [60] = {
        [anon_sym_end] = 222,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [61] = {
        [sym__compound_statement] = 224,
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [62] = {
        [anon_sym_end] = 226,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [63] = {
        [sym__statement] = 216,
        [sym__call] = 216,
        [sym__command] = 216,
        [sym__function_call] = 216,
        [sym__expression] = 216,
        [sym__argument] = 216,
        [sym__primary] = 216,
        [sym__variable] = 216,
        [sym_identifier] = 216,
        [sym__terminator] = 216,
        [aux_sym__compound_statement_repeat1] = 216,
        [aux_sym_identifier_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_undef] = 216,
        [anon_sym_super] = 216,
        [anon_sym_LPAREN] = 216,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [anon_sym_AT] = 216,
        [anon_sym_DOLLAR] = 216,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 216,
        [sym_comment] = 38,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [64] = {
        [sym__statement] = 228,
        [sym__call] = 228,
        [sym__command] = 228,
        [sym__function_call] = 228,
        [sym__expression] = 228,
        [sym__argument] = 228,
        [sym__primary] = 228,
        [sym__variable] = 228,
        [sym_identifier] = 228,
        [sym__terminator] = 228,
        [aux_sym__compound_statement_repeat1] = 228,
        [aux_sym_identifier_repeat1] = 228,
        [anon_sym_end] = 228,
        [anon_sym_undef] = 228,
        [anon_sym_super] = 228,
        [anon_sym_LPAREN] = 228,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [anon_sym_AT] = 228,
        [anon_sym_DOLLAR] = 228,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 228,
        [sym_comment] = 38,
        [sym__line_break] = 228,
        [anon_sym_SEMI] = 228,
    },
    [65] = {
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 230,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_end] = 232,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [66] = {
        [anon_sym_end] = 232,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [67] = {
        [sym__statement] = 234,
        [sym__call] = 234,
        [sym__command] = 234,
        [sym__function_call] = 234,
        [sym__expression] = 234,
        [sym__argument] = 234,
        [sym__primary] = 234,
        [sym__variable] = 234,
        [sym_identifier] = 234,
        [sym__terminator] = 236,
        [aux_sym__compound_statement_repeat1] = 234,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 234,
        [anon_sym_undef] = 234,
        [anon_sym_super] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_nil] = 234,
        [anon_sym_self] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_DOLLAR] = 234,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 38,
        [anon_sym_SEMI] = 236,
    },
    [68] = {
        [sym__statement] = 234,
        [sym__call] = 234,
        [sym__command] = 234,
        [sym__function_call] = 234,
        [sym__expression] = 234,
        [sym__argument] = 234,
        [sym__primary] = 234,
        [sym__variable] = 234,
        [sym_identifier] = 234,
        [aux_sym__compound_statement_repeat1] = 234,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 234,
        [anon_sym_undef] = 234,
        [anon_sym_super] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_nil] = 234,
        [anon_sym_self] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_DOLLAR] = 234,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [69] = {
        [anon_sym_end] = 238,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [70] = {
        [sym__statement] = 228,
        [sym__call] = 228,
        [sym__command] = 228,
        [sym__function_call] = 228,
        [sym__expression] = 228,
        [sym__argument] = 228,
        [sym__primary] = 228,
        [sym__variable] = 228,
        [sym_identifier] = 228,
        [sym__terminator] = 228,
        [aux_sym__compound_statement_repeat1] = 228,
        [aux_sym_identifier_repeat1] = 228,
        [anon_sym_undef] = 228,
        [anon_sym_super] = 228,
        [anon_sym_LPAREN] = 228,
        [anon_sym_RPAREN] = 228,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [anon_sym_AT] = 228,
        [anon_sym_DOLLAR] = 228,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 228,
        [sym_comment] = 38,
        [sym__line_break] = 228,
        [anon_sym_SEMI] = 228,
    },
    [71] = {
        [sym__statement] = 100,
        [sym__call] = 102,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 104,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym__compound_statement_repeat1] = 240,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 232,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [72] = {
        [anon_sym_RPAREN] = 232,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [73] = {
        [sym__statement] = 234,
        [sym__call] = 234,
        [sym__command] = 234,
        [sym__function_call] = 234,
        [sym__expression] = 234,
        [sym__argument] = 234,
        [sym__primary] = 234,
        [sym__variable] = 234,
        [sym_identifier] = 234,
        [sym__terminator] = 236,
        [aux_sym__compound_statement_repeat1] = 234,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_undef] = 234,
        [anon_sym_super] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_RPAREN] = 234,
        [anon_sym_nil] = 234,
        [anon_sym_self] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_DOLLAR] = 234,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 38,
        [anon_sym_SEMI] = 236,
    },
    [74] = {
        [sym__statement] = 234,
        [sym__call] = 234,
        [sym__command] = 234,
        [sym__function_call] = 234,
        [sym__expression] = 234,
        [sym__argument] = 234,
        [sym__primary] = 234,
        [sym__variable] = 234,
        [sym_identifier] = 234,
        [aux_sym__compound_statement_repeat1] = 234,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_undef] = 234,
        [anon_sym_super] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_RPAREN] = 234,
        [anon_sym_nil] = 234,
        [anon_sym_self] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_DOLLAR] = 234,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [75] = {
        [anon_sym_RPAREN] = 238,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [76] = {
        [sym__statement] = 154,
        [sym__call] = 154,
        [sym__command] = 154,
        [sym__function_call] = 154,
        [sym__expression] = 154,
        [sym__argument] = 154,
        [sym__primary] = 154,
        [sym__variable] = 154,
        [sym_identifier] = 154,
        [sym__terminator] = 154,
        [aux_sym__compound_statement_repeat1] = 154,
        [aux_sym_identifier_repeat1] = 154,
        [ts_builtin_sym_end] = 154,
        [anon_sym_undef] = 154,
        [anon_sym_super] = 154,
        [anon_sym_LPAREN] = 154,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [anon_sym_AT] = 154,
        [anon_sym_DOLLAR] = 154,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 154,
        [sym_comment] = 38,
        [sym__line_break] = 154,
        [anon_sym_SEMI] = 154,
    },
    [77] = {
        [anon_sym_do] = 242,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [78] = {
        [anon_sym_do] = 244,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [79] = {
        [aux_sym__call_arguments_repeat1] = 246,
        [anon_sym_do] = 244,
        [anon_sym_COMMA] = 248,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [80] = {
        [aux_sym__call_arguments_repeat1] = 62,
        [anon_sym_do] = 62,
        [anon_sym_COMMA] = 62,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [81] = {
        [aux_sym__call_arguments_repeat1] = 64,
        [anon_sym_do] = 64,
        [anon_sym_COMMA] = 64,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [82] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [83] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [84] = {
        [sym__call_arguments] = 76,
        [sym__command] = 78,
        [sym__argument] = 80,
        [sym__primary] = 82,
        [sym__variable] = 84,
        [sym_identifier] = 86,
        [aux_sym_identifier_repeat1] = 88,
        [anon_sym_super] = 92,
        [anon_sym_LPAREN] = 94,
        [anon_sym_nil] = 86,
        [anon_sym_self] = 86,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [85] = {
        [sym__compound_statement] = 252,
        [sym__statement] = 100,
        [sym__call] = 102,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 104,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym__compound_statement_repeat1] = 114,
        [aux_sym_identifier_repeat1] = 116,
        [anon_sym_undef] = 118,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 120,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 122,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [86] = {
        [aux_sym__call_arguments_repeat1] = 128,
        [anon_sym_do] = 128,
        [anon_sym_COMMA] = 128,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [87] = {
        [anon_sym_RPAREN] = 254,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [88] = {
        [aux_sym__call_arguments_repeat1] = 154,
        [anon_sym_do] = 154,
        [anon_sym_COMMA] = 154,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [89] = {
        [aux_sym__call_arguments_repeat1] = 160,
        [anon_sym_do] = 160,
        [anon_sym_COMMA] = 160,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [90] = {
        [anon_sym_do] = 256,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [91] = {
        [sym__argument] = 258,
        [sym__primary] = 82,
        [sym__variable] = 84,
        [sym_identifier] = 86,
        [aux_sym_identifier_repeat1] = 88,
        [anon_sym_LPAREN] = 94,
        [anon_sym_nil] = 86,
        [anon_sym_self] = 86,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [92] = {
        [aux_sym__call_arguments_repeat1] = 260,
        [anon_sym_do] = 262,
        [anon_sym_COMMA] = 248,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [93] = {
        [anon_sym_do] = 264,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [94] = {
        [sym__statement] = 156,
        [sym__call] = 156,
        [sym__command] = 156,
        [sym__function_call] = 156,
        [sym__expression] = 156,
        [sym__argument] = 156,
        [sym__primary] = 156,
        [sym__variable] = 156,
        [sym_identifier] = 156,
        [sym__terminator] = 156,
        [aux_sym__compound_statement_repeat1] = 156,
        [aux_sym_identifier_repeat1] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_undef] = 156,
        [anon_sym_super] = 156,
        [anon_sym_LPAREN] = 156,
        [anon_sym_nil] = 156,
        [anon_sym_self] = 156,
        [anon_sym_AT] = 156,
        [anon_sym_DOLLAR] = 156,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 156,
        [sym_comment] = 38,
        [sym__line_break] = 156,
        [anon_sym_SEMI] = 156,
    },
    [95] = {
        [sym__statement] = 158,
        [sym__call] = 158,
        [sym__command] = 158,
        [sym__function_call] = 158,
        [sym__expression] = 158,
        [sym__argument] = 158,
        [sym__primary] = 158,
        [sym__variable] = 158,
        [sym_identifier] = 158,
        [sym__terminator] = 158,
        [aux_sym__compound_statement_repeat1] = 158,
        [aux_sym_identifier_repeat1] = 158,
        [ts_builtin_sym_end] = 158,
        [anon_sym_undef] = 158,
        [anon_sym_super] = 158,
        [anon_sym_LPAREN] = 158,
        [anon_sym_nil] = 158,
        [anon_sym_self] = 158,
        [anon_sym_AT] = 158,
        [anon_sym_DOLLAR] = 158,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 158,
        [sym_comment] = 38,
        [sym__line_break] = 158,
        [anon_sym_SEMI] = 158,
    },
    [96] = {
        [sym__statement] = 160,
        [sym__call] = 160,
        [sym__command] = 160,
        [sym__function_call] = 160,
        [sym__expression] = 160,
        [sym__argument] = 160,
        [sym__primary] = 160,
        [sym__variable] = 160,
        [sym_identifier] = 160,
        [sym__terminator] = 160,
        [aux_sym__compound_statement_repeat1] = 160,
        [aux_sym_identifier_repeat1] = 160,
        [ts_builtin_sym_end] = 160,
        [anon_sym_undef] = 160,
        [anon_sym_super] = 160,
        [anon_sym_LPAREN] = 160,
        [anon_sym_nil] = 160,
        [anon_sym_self] = 160,
        [anon_sym_AT] = 160,
        [anon_sym_DOLLAR] = 160,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 160,
        [sym_comment] = 38,
        [sym__line_break] = 160,
        [anon_sym_SEMI] = 160,
    },
    [97] = {
        [sym__compound_statement] = 266,
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_PIPE] = 268,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [98] = {
        [anon_sym_end] = 270,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [99] = {
        [sym__compound_statement] = 272,
        [sym__statement] = 164,
        [sym__call] = 166,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 168,
        [sym__argument] = 170,
        [sym__primary] = 172,
        [sym__variable] = 174,
        [sym_identifier] = 176,
        [aux_sym__compound_statement_repeat1] = 178,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 184,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 186,
        [anon_sym_nil] = 176,
        [anon_sym_self] = 176,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [100] = {
        [anon_sym_end] = 274,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [101] = {
        [sym__statement] = 216,
        [sym__call] = 216,
        [sym__command] = 216,
        [sym__function_call] = 216,
        [sym__expression] = 216,
        [sym__argument] = 216,
        [sym__primary] = 216,
        [sym__variable] = 216,
        [sym_identifier] = 216,
        [sym__terminator] = 216,
        [aux_sym__compound_statement_repeat1] = 216,
        [aux_sym_identifier_repeat1] = 216,
        [ts_builtin_sym_end] = 216,
        [anon_sym_undef] = 216,
        [anon_sym_super] = 216,
        [anon_sym_LPAREN] = 216,
        [anon_sym_nil] = 216,
        [anon_sym_self] = 216,
        [anon_sym_AT] = 216,
        [anon_sym_DOLLAR] = 216,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 216,
        [sym_comment] = 38,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [102] = {
        [sym__statement] = 228,
        [sym__call] = 228,
        [sym__command] = 228,
        [sym__function_call] = 228,
        [sym__expression] = 228,
        [sym__argument] = 228,
        [sym__primary] = 228,
        [sym__variable] = 228,
        [sym_identifier] = 228,
        [sym__terminator] = 228,
        [aux_sym__compound_statement_repeat1] = 228,
        [aux_sym_identifier_repeat1] = 228,
        [ts_builtin_sym_end] = 228,
        [anon_sym_undef] = 228,
        [anon_sym_super] = 228,
        [anon_sym_LPAREN] = 228,
        [anon_sym_nil] = 228,
        [anon_sym_self] = 228,
        [anon_sym_AT] = 228,
        [anon_sym_DOLLAR] = 228,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 228,
        [sym_comment] = 38,
        [sym__line_break] = 228,
        [anon_sym_SEMI] = 228,
    },
    [103] = {
        [sym__statement] = 6,
        [sym__call] = 8,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 12,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym__compound_statement_repeat1] = 276,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 232,
        [anon_sym_undef] = 28,
        [anon_sym_super] = 30,
        [anon_sym_LPAREN] = 32,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 34,
        [anon_sym_DOLLAR] = 34,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 36,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [104] = {
        [ts_builtin_sym_end] = 232,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [105] = {
        [sym__statement] = 234,
        [sym__call] = 234,
        [sym__command] = 234,
        [sym__function_call] = 234,
        [sym__expression] = 234,
        [sym__argument] = 234,
        [sym__primary] = 234,
        [sym__variable] = 234,
        [sym_identifier] = 234,
        [sym__terminator] = 236,
        [aux_sym__compound_statement_repeat1] = 234,
        [aux_sym_identifier_repeat1] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_undef] = 234,
        [anon_sym_super] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_nil] = 234,
        [anon_sym_self] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_DOLLAR] = 234,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 38,
        [anon_sym_SEMI] = 236,
    },
    [106] = {
        [sym__statement] = 234,
        [sym__call] = 234,
        [sym__command] = 234,
        [sym__function_call] = 234,
        [sym__expression] = 234,
        [sym__argument] = 234,
        [sym__primary] = 234,
        [sym__variable] = 234,
        [sym_identifier] = 234,
        [aux_sym__compound_statement_repeat1] = 234,
        [aux_sym_identifier_repeat1] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_undef] = 234,
        [anon_sym_super] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_nil] = 234,
        [anon_sym_self] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_DOLLAR] = 234,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 234,
        [sym_comment] = 38,
        [sym__line_break] = 38,
    },
    [107] = {
        [ts_builtin_sym_end] = 238,
        [sym_comment] = 38,
        [sym__line_break] = 38,
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
    [38] = {.count = 1}, SHIFT_EXTRA(),
    [40] = {.count = 1}, ACCEPT_INPUT(),
    [42] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [44] = {.count = 1}, SHIFT(103, 0),
    [46] = {.count = 1}, SHIFT(104, 0),
    [48] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 1, 0),
    [50] = {.count = 1}, SHIFT(105, 0),
    [52] = {.count = 1}, SHIFT(106, 0),
    [54] = {.count = 1}, SHIFT(97, 0),
    [56] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [58] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [60] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__compound_statement, 1, 0),
    [70] = {.count = 1}, SHIFT(96, 0),
    [72] = {.count = 1}, SHIFT(94, 0),
    [74] = {.count = 1}, SHIFT(95, 0),
    [76] = {.count = 1}, SHIFT(77, 0),
    [78] = {.count = 1}, SHIFT(78, 0),
    [80] = {.count = 1}, SHIFT(79, 0),
    [82] = {.count = 1}, SHIFT(80, 0),
    [84] = {.count = 1}, SHIFT(81, 0),
    [86] = {.count = 1}, SHIFT(82, 0),
    [88] = {.count = 1}, SHIFT(83, 0),
    [90] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [92] = {.count = 1}, SHIFT(84, 0),
    [94] = {.count = 1}, SHIFT(85, 0),
    [96] = {.count = 1}, SHIFT(86, 0),
    [98] = {.count = 1}, SHIFT(19, 0),
    [100] = {.count = 1}, SHIFT(20, 0),
    [102] = {.count = 1}, SHIFT(21, 0),
    [104] = {.count = 1}, SHIFT(22, 0),
    [106] = {.count = 1}, SHIFT(23, 0),
    [108] = {.count = 1}, SHIFT(24, 0),
    [110] = {.count = 1}, SHIFT(25, 0),
    [112] = {.count = 1}, SHIFT(26, 0),
    [114] = {.count = 1}, SHIFT(27, 0),
    [116] = {.count = 1}, SHIFT(28, 0),
    [118] = {.count = 1}, SHIFT(29, 0),
    [120] = {.count = 1}, SHIFT(30, 0),
    [122] = {.count = 1}, SHIFT(31, 0),
    [124] = {.count = 1}, SHIFT(18, 0),
    [126] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [128] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [130] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [132] = {.count = 1}, SHIFT(76, 0),
    [134] = {.count = 1}, SHIFT(71, 0),
    [136] = {.count = 1}, SHIFT(72, 0),
    [138] = {.count = 1}, SHIFT(73, 0),
    [140] = {.count = 1}, SHIFT(74, 0),
    [142] = {.count = 1}, SHIFT(37, 0),
    [144] = {.count = 1}, SHIFT(36, 0),
    [146] = {.count = 1}, SHIFT(34, 0),
    [148] = {.count = 1}, SHIFT(35, 0),
    [150] = {.count = 1}, SHIFT(32, 0),
    [152] = {.count = 1}, SHIFT(33, 0),
    [154] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [156] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [158] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [160] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [162] = {.count = 1}, SHIFT(38, 0),
    [164] = {.count = 1}, SHIFT(39, 0),
    [166] = {.count = 1}, SHIFT(40, 0),
    [168] = {.count = 1}, SHIFT(41, 0),
    [170] = {.count = 1}, SHIFT(42, 0),
    [172] = {.count = 1}, SHIFT(43, 0),
    [174] = {.count = 1}, SHIFT(44, 0),
    [176] = {.count = 1}, SHIFT(45, 0),
    [178] = {.count = 1}, SHIFT(46, 0),
    [180] = {.count = 1}, SHIFT(47, 0),
    [182] = {.count = 1}, SHIFT(48, 0),
    [184] = {.count = 1}, SHIFT(49, 0),
    [186] = {.count = 1}, SHIFT(50, 0),
    [188] = {.count = 1}, SHIFT(51, 0),
    [190] = {.count = 1}, SHIFT(70, 0),
    [192] = {.count = 1}, SHIFT(65, 0),
    [194] = {.count = 1}, SHIFT(66, 0),
    [196] = {.count = 1}, SHIFT(67, 0),
    [198] = {.count = 1}, SHIFT(68, 0),
    [200] = {.count = 1}, SHIFT(59, 0),
    [202] = {.count = 1}, SHIFT(58, 0),
    [204] = {.count = 1}, SHIFT(56, 0),
    [206] = {.count = 1}, SHIFT(54, 0),
    [208] = {.count = 1}, SHIFT(55, 0),
    [210] = {.count = 1}, SHIFT(52, 0),
    [212] = {.count = 1}, SHIFT(53, 0),
    [214] = {.count = 1}, SHIFT(57, 0),
    [216] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [218] = {.count = 1}, SHIFT(60, 0),
    [220] = {.count = 1}, SHIFT(61, 0),
    [222] = {.count = 1}, SHIFT(64, 0),
    [224] = {.count = 1}, SHIFT(62, 0),
    [226] = {.count = 1}, SHIFT(63, 0),
    [228] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [230] = {.count = 1}, SHIFT(69, 0),
    [232] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 2, 0),
    [234] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [236] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [238] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 3, 0),
    [240] = {.count = 1}, SHIFT(75, 0),
    [242] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [244] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [246] = {.count = 1}, SHIFT(90, 0),
    [248] = {.count = 1}, SHIFT(91, 0),
    [250] = {.count = 1}, SHIFT(89, 0),
    [252] = {.count = 1}, SHIFT(87, 0),
    [254] = {.count = 1}, SHIFT(88, 0),
    [256] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [258] = {.count = 1}, SHIFT(92, 0),
    [260] = {.count = 1}, SHIFT(93, 0),
    [262] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [264] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [266] = {.count = 1}, SHIFT(98, 0),
    [268] = {.count = 1}, SHIFT(99, 0),
    [270] = {.count = 1}, SHIFT(102, 0),
    [272] = {.count = 1}, SHIFT(100, 0),
    [274] = {.count = 1}, SHIFT(101, 0),
    [276] = {.count = 1}, SHIFT(107, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
