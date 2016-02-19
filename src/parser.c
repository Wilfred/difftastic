#include "tree_sitter/parser.h"

#define STATE_COUNT 124
#define SYMBOL_COUNT 39

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
    anon_sym_if,
    anon_sym_while,
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
    [anon_sym_if] = "if",
    [anon_sym_while] = "while",
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
    [anon_sym_if] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_while] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'd')
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(36);
            if (lookahead == 'n')
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            if (lookahead == 'w')
                ADVANCE(54);
            if (lookahead == '|')
                ADVANCE(59);
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
            ACCEPT_TOKEN(anon_sym_if);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(39);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_nil);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(42);
            if (lookahead == 'u')
                ADVANCE(45);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_self);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_super);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_undef);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(58);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_while);
        case 59:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 60:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            LEX_ERROR();
        case 61:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(61);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(11);
            LEX_ERROR();
        case 62:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(36);
            if (lookahead == 'n')
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            if (lookahead == 'w')
                ADVANCE(54);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            if (lookahead == 'o')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            ACCEPT_TOKEN(anon_sym_do);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
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
                ADVANCE(59);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
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
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(11);
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
                ('b' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(36);
            if (lookahead == 'n')
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            if (lookahead == 'w')
                ADVANCE(54);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            if (lookahead == '|')
                ADVANCE(59);
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
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            if (lookahead == 'n')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            if (lookahead == 'd')
                ADVANCE(77);
            LEX_ERROR();
        case 77:
            ACCEPT_TOKEN(anon_sym_end);
        case 78:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(78);
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
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(36);
            if (lookahead == 'n')
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            if (lookahead == 'w')
                ADVANCE(54);
            LEX_ERROR();
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            if (lookahead == 'u')
                ADVANCE(49);
            LEX_ERROR();
        case 80:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(80);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 82:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(82);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(64);
            LEX_ERROR();
        case 83:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(83);
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
                ADVANCE(38);
            if (lookahead == 's')
                ADVANCE(41);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 60,
    [1] = 61,
    [2] = 61,
    [3] = 62,
    [4] = 63,
    [5] = 63,
    [6] = 62,
    [7] = 62,
    [8] = 62,
    [9] = 62,
    [10] = 62,
    [11] = 61,
    [12] = 66,
    [13] = 67,
    [14] = 67,
    [15] = 68,
    [16] = 69,
    [17] = 70,
    [18] = 62,
    [19] = 66,
    [20] = 71,
    [21] = 72,
    [22] = 63,
    [23] = 72,
    [24] = 72,
    [25] = 72,
    [26] = 72,
    [27] = 72,
    [28] = 71,
    [29] = 66,
    [30] = 67,
    [31] = 67,
    [32] = 69,
    [33] = 72,
    [34] = 71,
    [35] = 72,
    [36] = 67,
    [37] = 67,
    [38] = 66,
    [39] = 67,
    [40] = 67,
    [41] = 72,
    [42] = 72,
    [43] = 72,
    [44] = 72,
    [45] = 73,
    [46] = 74,
    [47] = 78,
    [48] = 63,
    [49] = 78,
    [50] = 78,
    [51] = 78,
    [52] = 78,
    [53] = 78,
    [54] = 74,
    [55] = 66,
    [56] = 79,
    [57] = 67,
    [58] = 67,
    [59] = 69,
    [60] = 78,
    [61] = 71,
    [62] = 78,
    [63] = 67,
    [64] = 78,
    [65] = 78,
    [66] = 78,
    [67] = 74,
    [68] = 72,
    [69] = 78,
    [70] = 73,
    [71] = 74,
    [72] = 79,
    [73] = 74,
    [74] = 78,
    [75] = 78,
    [76] = 79,
    [77] = 74,
    [78] = 80,
    [79] = 78,
    [80] = 79,
    [81] = 74,
    [82] = 72,
    [83] = 69,
    [84] = 71,
    [85] = 80,
    [86] = 72,
    [87] = 69,
    [88] = 71,
    [89] = 62,
    [90] = 63,
    [91] = 63,
    [92] = 82,
    [93] = 82,
    [94] = 82,
    [95] = 82,
    [96] = 66,
    [97] = 83,
    [98] = 69,
    [99] = 82,
    [100] = 71,
    [101] = 82,
    [102] = 82,
    [103] = 63,
    [104] = 80,
    [105] = 82,
    [106] = 63,
    [107] = 67,
    [108] = 62,
    [109] = 62,
    [110] = 62,
    [111] = 62,
    [112] = 73,
    [113] = 74,
    [114] = 79,
    [115] = 74,
    [116] = 62,
    [117] = 62,
    [118] = 60,
    [119] = 61,
    [120] = 80,
    [121] = 62,
    [122] = 60,
    [123] = 61,
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
        [anon_sym_if] = 52,
        [anon_sym_while] = 52,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 34,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [sym__line_break] = 54,
        [anon_sym_SEMI] = 56,
    },
    [4] = {
        [anon_sym_do] = 58,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [5] = {
        [anon_sym_do] = 60,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [6] = {
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
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
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
    [7] = {
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
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
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
    [8] = {
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
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
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
    [9] = {
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
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
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
    [10] = {
        [sym__statement] = 70,
        [sym__call] = 70,
        [sym__command] = 70,
        [sym__function_call] = 70,
        [sym__expression] = 70,
        [sym__argument] = 70,
        [sym__primary] = 70,
        [sym__variable] = 70,
        [sym_identifier] = 70,
        [sym__terminator] = 70,
        [aux_sym__compound_statement_repeat1] = 70,
        [aux_sym_identifier_repeat1] = 70,
        [ts_builtin_sym_end] = 70,
        [anon_sym_undef] = 70,
        [anon_sym_alias] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_super] = 70,
        [anon_sym_LPAREN] = 70,
        [anon_sym_nil] = 70,
        [anon_sym_self] = 70,
        [anon_sym_AT] = 70,
        [anon_sym_DOLLAR] = 70,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [11] = {
        [ts_builtin_sym_end] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [12] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 74,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [13] = {
        [sym_identifier] = 76,
        [sym__function_name] = 78,
        [aux_sym_identifier_repeat1] = 24,
        [anon_sym_PIPE] = 76,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 76,
        [sym__line_break] = 40,
    },
    [14] = {
        [sym_identifier] = 80,
        [sym__function_name] = 82,
        [aux_sym_identifier_repeat1] = 84,
        [anon_sym_PIPE] = 80,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 86,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 80,
        [sym__line_break] = 40,
    },
    [15] = {
        [sym__call_arguments] = 88,
        [sym__command] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [sym_identifier] = 98,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_do] = 102,
        [anon_sym_super] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_nil] = 98,
        [anon_sym_self] = 98,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [16] = {
        [sym__compound_statement] = 110,
        [sym__statement] = 112,
        [sym__call] = 114,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 116,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym__compound_statement_repeat1] = 126,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 130,
        [anon_sym_alias] = 132,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 134,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [17] = {
        [aux_sym_identifier_repeat1] = 138,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [18] = {
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
        [anon_sym_undef] = 142,
        [anon_sym_alias] = 142,
        [anon_sym_if] = 142,
        [anon_sym_while] = 142,
        [anon_sym_super] = 142,
        [anon_sym_LPAREN] = 142,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [19] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 144,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [20] = {
        [anon_sym_RPAREN] = 146,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [21] = {
        [sym__statement] = 112,
        [sym__call] = 114,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 116,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [sym__terminator] = 148,
        [aux_sym__compound_statement_repeat1] = 150,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 130,
        [anon_sym_alias] = 132,
        [anon_sym_if] = 152,
        [anon_sym_while] = 152,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 134,
        [anon_sym_RPAREN] = 50,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 154,
        [anon_sym_SEMI] = 156,
    },
    [22] = {
        [anon_sym_do] = 158,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [23] = {
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
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
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
    [24] = {
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
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
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
    [25] = {
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
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
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
    [26] = {
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
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
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
    [27] = {
        [sym__statement] = 70,
        [sym__call] = 70,
        [sym__command] = 70,
        [sym__function_call] = 70,
        [sym__expression] = 70,
        [sym__argument] = 70,
        [sym__primary] = 70,
        [sym__variable] = 70,
        [sym_identifier] = 70,
        [sym__terminator] = 70,
        [aux_sym__compound_statement_repeat1] = 70,
        [aux_sym_identifier_repeat1] = 70,
        [anon_sym_undef] = 70,
        [anon_sym_alias] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_super] = 70,
        [anon_sym_LPAREN] = 70,
        [anon_sym_RPAREN] = 70,
        [anon_sym_nil] = 70,
        [anon_sym_self] = 70,
        [anon_sym_AT] = 70,
        [anon_sym_DOLLAR] = 70,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [28] = {
        [anon_sym_RPAREN] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [29] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 160,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [30] = {
        [sym_identifier] = 162,
        [sym__function_name] = 164,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_PIPE] = 162,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 162,
        [sym__line_break] = 40,
    },
    [31] = {
        [sym_identifier] = 80,
        [sym__function_name] = 166,
        [aux_sym_identifier_repeat1] = 84,
        [anon_sym_PIPE] = 80,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 86,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 80,
        [sym__line_break] = 40,
    },
    [32] = {
        [sym__compound_statement] = 168,
        [sym__statement] = 112,
        [sym__call] = 114,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 116,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym__compound_statement_repeat1] = 126,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 130,
        [anon_sym_alias] = 132,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 134,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [33] = {
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
        [anon_sym_undef] = 142,
        [anon_sym_alias] = 142,
        [anon_sym_if] = 142,
        [anon_sym_while] = 142,
        [anon_sym_super] = 142,
        [anon_sym_LPAREN] = 142,
        [anon_sym_RPAREN] = 142,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [34] = {
        [anon_sym_RPAREN] = 170,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [35] = {
        [sym__statement] = 172,
        [sym__call] = 172,
        [sym__command] = 172,
        [sym__function_call] = 172,
        [sym__expression] = 172,
        [sym__argument] = 172,
        [sym__primary] = 172,
        [sym__variable] = 172,
        [sym_identifier] = 172,
        [sym__terminator] = 172,
        [aux_sym__compound_statement_repeat1] = 172,
        [aux_sym_identifier_repeat1] = 172,
        [anon_sym_undef] = 172,
        [anon_sym_alias] = 172,
        [anon_sym_if] = 172,
        [anon_sym_while] = 172,
        [anon_sym_super] = 172,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 172,
        [anon_sym_nil] = 172,
        [anon_sym_self] = 172,
        [anon_sym_AT] = 172,
        [anon_sym_DOLLAR] = 172,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 172,
        [sym_comment] = 40,
        [sym__line_break] = 172,
        [anon_sym_SEMI] = 172,
    },
    [36] = {
        [sym_identifier] = 174,
        [sym__function_name] = 174,
        [aux_sym_identifier_repeat1] = 174,
        [anon_sym_PIPE] = 174,
        [anon_sym_AT] = 174,
        [anon_sym_DOLLAR] = 174,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 174,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 174,
        [sym__line_break] = 40,
    },
    [37] = {
        [sym_identifier] = 162,
        [sym__function_name] = 176,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_PIPE] = 162,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 162,
        [sym__line_break] = 40,
    },
    [38] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 178,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [39] = {
        [sym_identifier] = 142,
        [sym__function_name] = 142,
        [aux_sym_identifier_repeat1] = 142,
        [anon_sym_PIPE] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 142,
        [sym__line_break] = 40,
    },
    [40] = {
        [sym_identifier] = 180,
        [sym__function_name] = 180,
        [aux_sym_identifier_repeat1] = 180,
        [anon_sym_PIPE] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_DOLLAR] = 180,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 180,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 180,
        [sym__line_break] = 40,
    },
    [41] = {
        [sym__statement] = 174,
        [sym__call] = 174,
        [sym__command] = 174,
        [sym__function_call] = 174,
        [sym__expression] = 174,
        [sym__argument] = 174,
        [sym__primary] = 174,
        [sym__variable] = 174,
        [sym_identifier] = 174,
        [sym__terminator] = 174,
        [aux_sym__compound_statement_repeat1] = 174,
        [aux_sym_identifier_repeat1] = 174,
        [anon_sym_undef] = 174,
        [anon_sym_alias] = 174,
        [anon_sym_if] = 174,
        [anon_sym_while] = 174,
        [anon_sym_super] = 174,
        [anon_sym_LPAREN] = 174,
        [anon_sym_RPAREN] = 174,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [anon_sym_AT] = 174,
        [anon_sym_DOLLAR] = 174,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 174,
        [sym_comment] = 40,
        [sym__line_break] = 174,
        [anon_sym_SEMI] = 174,
    },
    [42] = {
        [sym__statement] = 182,
        [sym__call] = 182,
        [sym__command] = 182,
        [sym__function_call] = 182,
        [sym__expression] = 182,
        [sym__argument] = 182,
        [sym__primary] = 182,
        [sym__variable] = 182,
        [sym_identifier] = 182,
        [sym__terminator] = 182,
        [aux_sym__compound_statement_repeat1] = 182,
        [aux_sym_identifier_repeat1] = 182,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 182,
        [anon_sym_if] = 182,
        [anon_sym_while] = 182,
        [anon_sym_super] = 182,
        [anon_sym_LPAREN] = 182,
        [anon_sym_RPAREN] = 182,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [anon_sym_AT] = 182,
        [anon_sym_DOLLAR] = 182,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 182,
        [sym_comment] = 40,
        [sym__line_break] = 182,
        [anon_sym_SEMI] = 182,
    },
    [43] = {
        [sym__statement] = 184,
        [sym__call] = 184,
        [sym__command] = 184,
        [sym__function_call] = 184,
        [sym__expression] = 184,
        [sym__argument] = 184,
        [sym__primary] = 184,
        [sym__variable] = 184,
        [sym_identifier] = 184,
        [sym__terminator] = 184,
        [aux_sym__compound_statement_repeat1] = 184,
        [aux_sym_identifier_repeat1] = 184,
        [anon_sym_undef] = 184,
        [anon_sym_alias] = 184,
        [anon_sym_if] = 184,
        [anon_sym_while] = 184,
        [anon_sym_super] = 184,
        [anon_sym_LPAREN] = 184,
        [anon_sym_RPAREN] = 184,
        [anon_sym_nil] = 184,
        [anon_sym_self] = 184,
        [anon_sym_AT] = 184,
        [anon_sym_DOLLAR] = 184,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 184,
        [sym_comment] = 40,
        [sym__line_break] = 184,
        [anon_sym_SEMI] = 184,
    },
    [44] = {
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
        [anon_sym_if] = 180,
        [anon_sym_while] = 180,
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
    [45] = {
        [sym__compound_statement] = 186,
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 202,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_PIPE] = 206,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [46] = {
        [anon_sym_end] = 216,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [47] = {
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [sym__terminator] = 218,
        [aux_sym__compound_statement_repeat1] = 220,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_end] = 50,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_if] = 222,
        [anon_sym_while] = 222,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 224,
        [anon_sym_SEMI] = 226,
    },
    [48] = {
        [anon_sym_do] = 228,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [49] = {
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
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
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
    [50] = {
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
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
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
    [51] = {
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
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
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
    [52] = {
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
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
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
    [53] = {
        [sym__statement] = 70,
        [sym__call] = 70,
        [sym__command] = 70,
        [sym__function_call] = 70,
        [sym__expression] = 70,
        [sym__argument] = 70,
        [sym__primary] = 70,
        [sym__variable] = 70,
        [sym_identifier] = 70,
        [sym__terminator] = 70,
        [aux_sym__compound_statement_repeat1] = 70,
        [aux_sym_identifier_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_undef] = 70,
        [anon_sym_alias] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_super] = 70,
        [anon_sym_LPAREN] = 70,
        [anon_sym_nil] = 70,
        [anon_sym_self] = 70,
        [anon_sym_AT] = 70,
        [anon_sym_DOLLAR] = 70,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [54] = {
        [anon_sym_end] = 72,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [55] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 230,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [56] = {
        [sym__compound_statement] = 232,
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 202,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [57] = {
        [sym_identifier] = 234,
        [sym__function_name] = 236,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_PIPE] = 234,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 234,
        [sym__line_break] = 40,
    },
    [58] = {
        [sym_identifier] = 80,
        [sym__function_name] = 238,
        [aux_sym_identifier_repeat1] = 84,
        [anon_sym_PIPE] = 80,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 86,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 80,
        [sym__line_break] = 40,
    },
    [59] = {
        [sym__compound_statement] = 240,
        [sym__statement] = 112,
        [sym__call] = 114,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 116,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym__compound_statement_repeat1] = 126,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 130,
        [anon_sym_alias] = 132,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 134,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [60] = {
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
        [anon_sym_undef] = 142,
        [anon_sym_alias] = 142,
        [anon_sym_if] = 142,
        [anon_sym_while] = 142,
        [anon_sym_super] = 142,
        [anon_sym_LPAREN] = 142,
        [anon_sym_nil] = 142,
        [anon_sym_self] = 142,
        [anon_sym_AT] = 142,
        [anon_sym_DOLLAR] = 142,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 142,
        [anon_sym_SEMI] = 142,
    },
    [61] = {
        [anon_sym_RPAREN] = 242,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [62] = {
        [sym__statement] = 172,
        [sym__call] = 172,
        [sym__command] = 172,
        [sym__function_call] = 172,
        [sym__expression] = 172,
        [sym__argument] = 172,
        [sym__primary] = 172,
        [sym__variable] = 172,
        [sym_identifier] = 172,
        [sym__terminator] = 172,
        [aux_sym__compound_statement_repeat1] = 172,
        [aux_sym_identifier_repeat1] = 172,
        [anon_sym_end] = 172,
        [anon_sym_undef] = 172,
        [anon_sym_alias] = 172,
        [anon_sym_if] = 172,
        [anon_sym_while] = 172,
        [anon_sym_super] = 172,
        [anon_sym_LPAREN] = 172,
        [anon_sym_nil] = 172,
        [anon_sym_self] = 172,
        [anon_sym_AT] = 172,
        [anon_sym_DOLLAR] = 172,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 172,
        [sym_comment] = 40,
        [sym__line_break] = 172,
        [anon_sym_SEMI] = 172,
    },
    [63] = {
        [sym_identifier] = 234,
        [sym__function_name] = 244,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_PIPE] = 234,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 234,
        [sym__line_break] = 40,
    },
    [64] = {
        [sym__statement] = 174,
        [sym__call] = 174,
        [sym__command] = 174,
        [sym__function_call] = 174,
        [sym__expression] = 174,
        [sym__argument] = 174,
        [sym__primary] = 174,
        [sym__variable] = 174,
        [sym_identifier] = 174,
        [sym__terminator] = 174,
        [aux_sym__compound_statement_repeat1] = 174,
        [aux_sym_identifier_repeat1] = 174,
        [anon_sym_end] = 174,
        [anon_sym_undef] = 174,
        [anon_sym_alias] = 174,
        [anon_sym_if] = 174,
        [anon_sym_while] = 174,
        [anon_sym_super] = 174,
        [anon_sym_LPAREN] = 174,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [anon_sym_AT] = 174,
        [anon_sym_DOLLAR] = 174,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 174,
        [sym_comment] = 40,
        [sym__line_break] = 174,
        [anon_sym_SEMI] = 174,
    },
    [65] = {
        [sym__statement] = 182,
        [sym__call] = 182,
        [sym__command] = 182,
        [sym__function_call] = 182,
        [sym__expression] = 182,
        [sym__argument] = 182,
        [sym__primary] = 182,
        [sym__variable] = 182,
        [sym_identifier] = 182,
        [sym__terminator] = 182,
        [aux_sym__compound_statement_repeat1] = 182,
        [aux_sym_identifier_repeat1] = 182,
        [anon_sym_end] = 182,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 182,
        [anon_sym_if] = 182,
        [anon_sym_while] = 182,
        [anon_sym_super] = 182,
        [anon_sym_LPAREN] = 182,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [anon_sym_AT] = 182,
        [anon_sym_DOLLAR] = 182,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 182,
        [sym_comment] = 40,
        [sym__line_break] = 182,
        [anon_sym_SEMI] = 182,
    },
    [66] = {
        [sym__statement] = 184,
        [sym__call] = 184,
        [sym__command] = 184,
        [sym__function_call] = 184,
        [sym__expression] = 184,
        [sym__argument] = 184,
        [sym__primary] = 184,
        [sym__variable] = 184,
        [sym_identifier] = 184,
        [sym__terminator] = 184,
        [aux_sym__compound_statement_repeat1] = 184,
        [aux_sym_identifier_repeat1] = 184,
        [anon_sym_end] = 184,
        [anon_sym_undef] = 184,
        [anon_sym_alias] = 184,
        [anon_sym_if] = 184,
        [anon_sym_while] = 184,
        [anon_sym_super] = 184,
        [anon_sym_LPAREN] = 184,
        [anon_sym_nil] = 184,
        [anon_sym_self] = 184,
        [anon_sym_AT] = 184,
        [anon_sym_DOLLAR] = 184,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 184,
        [sym_comment] = 40,
        [sym__line_break] = 184,
        [anon_sym_SEMI] = 184,
    },
    [67] = {
        [anon_sym_end] = 246,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [68] = {
        [sym__statement] = 248,
        [sym__call] = 248,
        [sym__command] = 248,
        [sym__function_call] = 248,
        [sym__expression] = 248,
        [sym__argument] = 248,
        [sym__primary] = 248,
        [sym__variable] = 248,
        [sym_identifier] = 248,
        [sym__terminator] = 248,
        [aux_sym__compound_statement_repeat1] = 248,
        [aux_sym_identifier_repeat1] = 248,
        [anon_sym_undef] = 248,
        [anon_sym_alias] = 248,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_super] = 248,
        [anon_sym_LPAREN] = 248,
        [anon_sym_RPAREN] = 248,
        [anon_sym_nil] = 248,
        [anon_sym_self] = 248,
        [anon_sym_AT] = 248,
        [anon_sym_DOLLAR] = 248,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [69] = {
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
        [anon_sym_if] = 180,
        [anon_sym_while] = 180,
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
    [70] = {
        [sym__compound_statement] = 250,
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 202,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_PIPE] = 252,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [71] = {
        [anon_sym_end] = 254,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [72] = {
        [sym__compound_statement] = 256,
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 202,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [73] = {
        [anon_sym_end] = 258,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [74] = {
        [sym__statement] = 248,
        [sym__call] = 248,
        [sym__command] = 248,
        [sym__function_call] = 248,
        [sym__expression] = 248,
        [sym__argument] = 248,
        [sym__primary] = 248,
        [sym__variable] = 248,
        [sym_identifier] = 248,
        [sym__terminator] = 248,
        [aux_sym__compound_statement_repeat1] = 248,
        [aux_sym_identifier_repeat1] = 248,
        [anon_sym_end] = 248,
        [anon_sym_undef] = 248,
        [anon_sym_alias] = 248,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_super] = 248,
        [anon_sym_LPAREN] = 248,
        [anon_sym_nil] = 248,
        [anon_sym_self] = 248,
        [anon_sym_AT] = 248,
        [anon_sym_DOLLAR] = 248,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [75] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [sym__terminator] = 260,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_if] = 260,
        [anon_sym_while] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 260,
        [anon_sym_SEMI] = 260,
    },
    [76] = {
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 262,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_end] = 264,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [77] = {
        [anon_sym_end] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [78] = {
        [sym__expression] = 244,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [79] = {
        [sym__statement] = 266,
        [sym__call] = 266,
        [sym__command] = 266,
        [sym__function_call] = 266,
        [sym__expression] = 266,
        [sym__argument] = 266,
        [sym__primary] = 266,
        [sym__variable] = 266,
        [sym_identifier] = 266,
        [sym__terminator] = 268,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 266,
        [anon_sym_end] = 266,
        [anon_sym_undef] = 266,
        [anon_sym_alias] = 266,
        [anon_sym_if] = 268,
        [anon_sym_while] = 268,
        [anon_sym_super] = 266,
        [anon_sym_LPAREN] = 266,
        [anon_sym_nil] = 266,
        [anon_sym_self] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_DOLLAR] = 266,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 268,
    },
    [80] = {
        [sym__statement] = 266,
        [sym__call] = 266,
        [sym__command] = 266,
        [sym__function_call] = 266,
        [sym__expression] = 266,
        [sym__argument] = 266,
        [sym__primary] = 266,
        [sym__variable] = 266,
        [sym_identifier] = 266,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 266,
        [anon_sym_end] = 266,
        [anon_sym_undef] = 266,
        [anon_sym_alias] = 266,
        [anon_sym_super] = 266,
        [anon_sym_LPAREN] = 266,
        [anon_sym_nil] = 266,
        [anon_sym_self] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_DOLLAR] = 266,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [81] = {
        [anon_sym_end] = 270,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [82] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [sym__terminator] = 260,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_if] = 260,
        [anon_sym_while] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_RPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 260,
        [anon_sym_SEMI] = 260,
    },
    [83] = {
        [sym__statement] = 112,
        [sym__call] = 114,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 116,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym__compound_statement_repeat1] = 272,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 130,
        [anon_sym_alias] = 132,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 134,
        [anon_sym_RPAREN] = 264,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [84] = {
        [anon_sym_RPAREN] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [85] = {
        [sym__expression] = 176,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_LPAREN] = 134,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [86] = {
        [sym__statement] = 266,
        [sym__call] = 266,
        [sym__command] = 266,
        [sym__function_call] = 266,
        [sym__expression] = 266,
        [sym__argument] = 266,
        [sym__primary] = 266,
        [sym__variable] = 266,
        [sym_identifier] = 266,
        [sym__terminator] = 268,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 266,
        [anon_sym_undef] = 266,
        [anon_sym_alias] = 266,
        [anon_sym_if] = 268,
        [anon_sym_while] = 268,
        [anon_sym_super] = 266,
        [anon_sym_LPAREN] = 266,
        [anon_sym_RPAREN] = 266,
        [anon_sym_nil] = 266,
        [anon_sym_self] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_DOLLAR] = 266,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 268,
    },
    [87] = {
        [sym__statement] = 266,
        [sym__call] = 266,
        [sym__command] = 266,
        [sym__function_call] = 266,
        [sym__expression] = 266,
        [sym__argument] = 266,
        [sym__primary] = 266,
        [sym__variable] = 266,
        [sym_identifier] = 266,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 266,
        [anon_sym_undef] = 266,
        [anon_sym_alias] = 266,
        [anon_sym_super] = 266,
        [anon_sym_LPAREN] = 266,
        [anon_sym_RPAREN] = 266,
        [anon_sym_nil] = 266,
        [anon_sym_self] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_DOLLAR] = 266,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [88] = {
        [anon_sym_RPAREN] = 270,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [89] = {
        [sym__statement] = 172,
        [sym__call] = 172,
        [sym__command] = 172,
        [sym__function_call] = 172,
        [sym__expression] = 172,
        [sym__argument] = 172,
        [sym__primary] = 172,
        [sym__variable] = 172,
        [sym_identifier] = 172,
        [sym__terminator] = 172,
        [aux_sym__compound_statement_repeat1] = 172,
        [aux_sym_identifier_repeat1] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_undef] = 172,
        [anon_sym_alias] = 172,
        [anon_sym_if] = 172,
        [anon_sym_while] = 172,
        [anon_sym_super] = 172,
        [anon_sym_LPAREN] = 172,
        [anon_sym_nil] = 172,
        [anon_sym_self] = 172,
        [anon_sym_AT] = 172,
        [anon_sym_DOLLAR] = 172,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 172,
        [sym_comment] = 40,
        [sym__line_break] = 172,
        [anon_sym_SEMI] = 172,
    },
    [90] = {
        [anon_sym_do] = 274,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [91] = {
        [anon_sym_do] = 276,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [92] = {
        [aux_sym__call_arguments_repeat1] = 278,
        [anon_sym_do] = 276,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [93] = {
        [aux_sym__call_arguments_repeat1] = 66,
        [anon_sym_do] = 66,
        [anon_sym_COMMA] = 66,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [94] = {
        [aux_sym__call_arguments_repeat1] = 68,
        [anon_sym_do] = 68,
        [anon_sym_COMMA] = 68,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [95] = {
        [aux_sym__call_arguments_repeat1] = 70,
        [anon_sym_do] = 70,
        [anon_sym_COMMA] = 70,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [96] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 282,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [97] = {
        [sym__call_arguments] = 88,
        [sym__command] = 90,
        [sym__argument] = 92,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [sym_identifier] = 98,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_super] = 104,
        [anon_sym_LPAREN] = 106,
        [anon_sym_nil] = 98,
        [anon_sym_self] = 98,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [98] = {
        [sym__compound_statement] = 284,
        [sym__statement] = 112,
        [sym__call] = 114,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 116,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym__compound_statement_repeat1] = 126,
        [aux_sym_identifier_repeat1] = 128,
        [anon_sym_undef] = 130,
        [anon_sym_alias] = 132,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 134,
        [anon_sym_RPAREN] = 26,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [99] = {
        [aux_sym__call_arguments_repeat1] = 142,
        [anon_sym_do] = 142,
        [anon_sym_COMMA] = 142,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [100] = {
        [anon_sym_RPAREN] = 286,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [101] = {
        [aux_sym__call_arguments_repeat1] = 172,
        [anon_sym_do] = 172,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [102] = {
        [aux_sym__call_arguments_repeat1] = 180,
        [anon_sym_do] = 180,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [103] = {
        [anon_sym_do] = 288,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [104] = {
        [sym__argument] = 290,
        [sym__primary] = 94,
        [sym__variable] = 96,
        [sym_identifier] = 98,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_LPAREN] = 106,
        [anon_sym_nil] = 98,
        [anon_sym_self] = 98,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [105] = {
        [aux_sym__call_arguments_repeat1] = 292,
        [anon_sym_do] = 294,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [106] = {
        [anon_sym_do] = 296,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [107] = {
        [sym_identifier] = 76,
        [sym__function_name] = 298,
        [aux_sym_identifier_repeat1] = 24,
        [anon_sym_PIPE] = 76,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [anon_sym_DOT_DOT] = 76,
        [sym__line_break] = 40,
    },
    [108] = {
        [sym__statement] = 174,
        [sym__call] = 174,
        [sym__command] = 174,
        [sym__function_call] = 174,
        [sym__expression] = 174,
        [sym__argument] = 174,
        [sym__primary] = 174,
        [sym__variable] = 174,
        [sym_identifier] = 174,
        [sym__terminator] = 174,
        [aux_sym__compound_statement_repeat1] = 174,
        [aux_sym_identifier_repeat1] = 174,
        [ts_builtin_sym_end] = 174,
        [anon_sym_undef] = 174,
        [anon_sym_alias] = 174,
        [anon_sym_if] = 174,
        [anon_sym_while] = 174,
        [anon_sym_super] = 174,
        [anon_sym_LPAREN] = 174,
        [anon_sym_nil] = 174,
        [anon_sym_self] = 174,
        [anon_sym_AT] = 174,
        [anon_sym_DOLLAR] = 174,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 174,
        [sym_comment] = 40,
        [sym__line_break] = 174,
        [anon_sym_SEMI] = 174,
    },
    [109] = {
        [sym__statement] = 182,
        [sym__call] = 182,
        [sym__command] = 182,
        [sym__function_call] = 182,
        [sym__expression] = 182,
        [sym__argument] = 182,
        [sym__primary] = 182,
        [sym__variable] = 182,
        [sym_identifier] = 182,
        [sym__terminator] = 182,
        [aux_sym__compound_statement_repeat1] = 182,
        [aux_sym_identifier_repeat1] = 182,
        [ts_builtin_sym_end] = 182,
        [anon_sym_undef] = 182,
        [anon_sym_alias] = 182,
        [anon_sym_if] = 182,
        [anon_sym_while] = 182,
        [anon_sym_super] = 182,
        [anon_sym_LPAREN] = 182,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [anon_sym_AT] = 182,
        [anon_sym_DOLLAR] = 182,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 182,
        [sym_comment] = 40,
        [sym__line_break] = 182,
        [anon_sym_SEMI] = 182,
    },
    [110] = {
        [sym__statement] = 184,
        [sym__call] = 184,
        [sym__command] = 184,
        [sym__function_call] = 184,
        [sym__expression] = 184,
        [sym__argument] = 184,
        [sym__primary] = 184,
        [sym__variable] = 184,
        [sym_identifier] = 184,
        [sym__terminator] = 184,
        [aux_sym__compound_statement_repeat1] = 184,
        [aux_sym_identifier_repeat1] = 184,
        [ts_builtin_sym_end] = 184,
        [anon_sym_undef] = 184,
        [anon_sym_alias] = 184,
        [anon_sym_if] = 184,
        [anon_sym_while] = 184,
        [anon_sym_super] = 184,
        [anon_sym_LPAREN] = 184,
        [anon_sym_nil] = 184,
        [anon_sym_self] = 184,
        [anon_sym_AT] = 184,
        [anon_sym_DOLLAR] = 184,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 184,
        [sym_comment] = 40,
        [sym__line_break] = 184,
        [anon_sym_SEMI] = 184,
    },
    [111] = {
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
        [anon_sym_if] = 180,
        [anon_sym_while] = 180,
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
    [112] = {
        [sym__compound_statement] = 300,
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 202,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_PIPE] = 302,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [113] = {
        [anon_sym_end] = 304,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [114] = {
        [sym__compound_statement] = 306,
        [sym__statement] = 188,
        [sym__call] = 190,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym__variable] = 198,
        [sym_identifier] = 200,
        [aux_sym__compound_statement_repeat1] = 202,
        [aux_sym_identifier_repeat1] = 204,
        [anon_sym_end] = 26,
        [anon_sym_undef] = 208,
        [anon_sym_alias] = 210,
        [anon_sym_super] = 32,
        [anon_sym_LPAREN] = 212,
        [anon_sym_nil] = 200,
        [anon_sym_self] = 200,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 214,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [115] = {
        [anon_sym_end] = 308,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [116] = {
        [sym__statement] = 248,
        [sym__call] = 248,
        [sym__command] = 248,
        [sym__function_call] = 248,
        [sym__expression] = 248,
        [sym__argument] = 248,
        [sym__primary] = 248,
        [sym__variable] = 248,
        [sym_identifier] = 248,
        [sym__terminator] = 248,
        [aux_sym__compound_statement_repeat1] = 248,
        [aux_sym_identifier_repeat1] = 248,
        [ts_builtin_sym_end] = 248,
        [anon_sym_undef] = 248,
        [anon_sym_alias] = 248,
        [anon_sym_if] = 248,
        [anon_sym_while] = 248,
        [anon_sym_super] = 248,
        [anon_sym_LPAREN] = 248,
        [anon_sym_nil] = 248,
        [anon_sym_self] = 248,
        [anon_sym_AT] = 248,
        [anon_sym_DOLLAR] = 248,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 248,
        [sym_comment] = 40,
        [sym__line_break] = 248,
        [anon_sym_SEMI] = 248,
    },
    [117] = {
        [sym__statement] = 260,
        [sym__call] = 260,
        [sym__command] = 260,
        [sym__function_call] = 260,
        [sym__expression] = 260,
        [sym__argument] = 260,
        [sym__primary] = 260,
        [sym__variable] = 260,
        [sym_identifier] = 260,
        [sym__terminator] = 260,
        [aux_sym__compound_statement_repeat1] = 260,
        [aux_sym_identifier_repeat1] = 260,
        [ts_builtin_sym_end] = 260,
        [anon_sym_undef] = 260,
        [anon_sym_alias] = 260,
        [anon_sym_if] = 260,
        [anon_sym_while] = 260,
        [anon_sym_super] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_nil] = 260,
        [anon_sym_self] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_DOLLAR] = 260,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 260,
        [sym_comment] = 40,
        [sym__line_break] = 260,
        [anon_sym_SEMI] = 260,
    },
    [118] = {
        [sym__statement] = 6,
        [sym__call] = 8,
        [sym__command] = 10,
        [sym__function_call] = 10,
        [sym__expression] = 12,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym__compound_statement_repeat1] = 310,
        [aux_sym_identifier_repeat1] = 24,
        [ts_builtin_sym_end] = 264,
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
    [119] = {
        [ts_builtin_sym_end] = 264,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [120] = {
        [sym__expression] = 298,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym_identifier_repeat1] = 24,
        [anon_sym_LPAREN] = 34,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 36,
        [anon_sym_DOLLAR] = 36,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 38,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [121] = {
        [sym__statement] = 266,
        [sym__call] = 266,
        [sym__command] = 266,
        [sym__function_call] = 266,
        [sym__expression] = 266,
        [sym__argument] = 266,
        [sym__primary] = 266,
        [sym__variable] = 266,
        [sym_identifier] = 266,
        [sym__terminator] = 268,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 266,
        [ts_builtin_sym_end] = 266,
        [anon_sym_undef] = 266,
        [anon_sym_alias] = 266,
        [anon_sym_if] = 268,
        [anon_sym_while] = 268,
        [anon_sym_super] = 266,
        [anon_sym_LPAREN] = 266,
        [anon_sym_nil] = 266,
        [anon_sym_self] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_DOLLAR] = 266,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 40,
        [anon_sym_SEMI] = 268,
    },
    [122] = {
        [sym__statement] = 266,
        [sym__call] = 266,
        [sym__command] = 266,
        [sym__function_call] = 266,
        [sym__expression] = 266,
        [sym__argument] = 266,
        [sym__primary] = 266,
        [sym__variable] = 266,
        [sym_identifier] = 266,
        [aux_sym__compound_statement_repeat1] = 266,
        [aux_sym_identifier_repeat1] = 266,
        [ts_builtin_sym_end] = 266,
        [anon_sym_undef] = 266,
        [anon_sym_alias] = 266,
        [anon_sym_super] = 266,
        [anon_sym_LPAREN] = 266,
        [anon_sym_nil] = 266,
        [anon_sym_self] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_DOLLAR] = 266,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 40,
        [sym__line_break] = 40,
    },
    [123] = {
        [ts_builtin_sym_end] = 270,
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
    [46] = {.count = 1}, SHIFT(118, 0),
    [48] = {.count = 1}, SHIFT(119, 0),
    [50] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 1, 0),
    [52] = {.count = 1}, SHIFT(120, 0),
    [54] = {.count = 1}, SHIFT(121, 0),
    [56] = {.count = 1}, SHIFT(122, 0),
    [58] = {.count = 1}, SHIFT(112, 0),
    [60] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [64] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__compound_statement, 1, 0),
    [74] = {.count = 1}, SHIFT(111, 0),
    [76] = {.count = 1}, SHIFT(108, 0),
    [78] = {.count = 1}, SHIFT(110, 0),
    [80] = {.count = 1}, SHIFT(36, 0),
    [82] = {.count = 1}, SHIFT(107, 0),
    [84] = {.count = 1}, SHIFT(38, 0),
    [86] = {.count = 1}, SHIFT(39, 0),
    [88] = {.count = 1}, SHIFT(90, 0),
    [90] = {.count = 1}, SHIFT(91, 0),
    [92] = {.count = 1}, SHIFT(92, 0),
    [94] = {.count = 1}, SHIFT(93, 0),
    [96] = {.count = 1}, SHIFT(94, 0),
    [98] = {.count = 1}, SHIFT(95, 0),
    [100] = {.count = 1}, SHIFT(96, 0),
    [102] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [104] = {.count = 1}, SHIFT(97, 0),
    [106] = {.count = 1}, SHIFT(98, 0),
    [108] = {.count = 1}, SHIFT(99, 0),
    [110] = {.count = 1}, SHIFT(20, 0),
    [112] = {.count = 1}, SHIFT(21, 0),
    [114] = {.count = 1}, SHIFT(22, 0),
    [116] = {.count = 1}, SHIFT(23, 0),
    [118] = {.count = 1}, SHIFT(24, 0),
    [120] = {.count = 1}, SHIFT(25, 0),
    [122] = {.count = 1}, SHIFT(26, 0),
    [124] = {.count = 1}, SHIFT(27, 0),
    [126] = {.count = 1}, SHIFT(28, 0),
    [128] = {.count = 1}, SHIFT(29, 0),
    [130] = {.count = 1}, SHIFT(30, 0),
    [132] = {.count = 1}, SHIFT(31, 0),
    [134] = {.count = 1}, SHIFT(32, 0),
    [136] = {.count = 1}, SHIFT(33, 0),
    [138] = {.count = 1}, SHIFT(19, 0),
    [140] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [142] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [144] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [146] = {.count = 1}, SHIFT(89, 0),
    [148] = {.count = 1}, SHIFT(83, 0),
    [150] = {.count = 1}, SHIFT(84, 0),
    [152] = {.count = 1}, SHIFT(85, 0),
    [154] = {.count = 1}, SHIFT(86, 0),
    [156] = {.count = 1}, SHIFT(87, 0),
    [158] = {.count = 1}, SHIFT(45, 0),
    [160] = {.count = 1}, SHIFT(44, 0),
    [162] = {.count = 1}, SHIFT(41, 0),
    [164] = {.count = 1}, SHIFT(43, 0),
    [166] = {.count = 1}, SHIFT(37, 0),
    [168] = {.count = 1}, SHIFT(34, 0),
    [170] = {.count = 1}, SHIFT(35, 0),
    [172] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [174] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [176] = {.count = 1}, SHIFT(42, 0),
    [178] = {.count = 1}, SHIFT(40, 0),
    [180] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [182] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [184] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [186] = {.count = 1}, SHIFT(46, 0),
    [188] = {.count = 1}, SHIFT(47, 0),
    [190] = {.count = 1}, SHIFT(48, 0),
    [192] = {.count = 1}, SHIFT(49, 0),
    [194] = {.count = 1}, SHIFT(50, 0),
    [196] = {.count = 1}, SHIFT(51, 0),
    [198] = {.count = 1}, SHIFT(52, 0),
    [200] = {.count = 1}, SHIFT(53, 0),
    [202] = {.count = 1}, SHIFT(54, 0),
    [204] = {.count = 1}, SHIFT(55, 0),
    [206] = {.count = 1}, SHIFT(56, 0),
    [208] = {.count = 1}, SHIFT(57, 0),
    [210] = {.count = 1}, SHIFT(58, 0),
    [212] = {.count = 1}, SHIFT(59, 0),
    [214] = {.count = 1}, SHIFT(60, 0),
    [216] = {.count = 1}, SHIFT(82, 0),
    [218] = {.count = 1}, SHIFT(76, 0),
    [220] = {.count = 1}, SHIFT(77, 0),
    [222] = {.count = 1}, SHIFT(78, 0),
    [224] = {.count = 1}, SHIFT(79, 0),
    [226] = {.count = 1}, SHIFT(80, 0),
    [228] = {.count = 1}, SHIFT(70, 0),
    [230] = {.count = 1}, SHIFT(69, 0),
    [232] = {.count = 1}, SHIFT(67, 0),
    [234] = {.count = 1}, SHIFT(64, 0),
    [236] = {.count = 1}, SHIFT(66, 0),
    [238] = {.count = 1}, SHIFT(63, 0),
    [240] = {.count = 1}, SHIFT(61, 0),
    [242] = {.count = 1}, SHIFT(62, 0),
    [244] = {.count = 1}, SHIFT(65, 0),
    [246] = {.count = 1}, SHIFT(68, 0),
    [248] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [250] = {.count = 1}, SHIFT(71, 0),
    [252] = {.count = 1}, SHIFT(72, 0),
    [254] = {.count = 1}, SHIFT(75, 0),
    [256] = {.count = 1}, SHIFT(73, 0),
    [258] = {.count = 1}, SHIFT(74, 0),
    [260] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [262] = {.count = 1}, SHIFT(81, 0),
    [264] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 2, 0),
    [266] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [268] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [270] = {.count = 1}, REDUCE(aux_sym__compound_statement_repeat1, 3, 0),
    [272] = {.count = 1}, SHIFT(88, 0),
    [274] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [276] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [278] = {.count = 1}, SHIFT(103, 0),
    [280] = {.count = 1}, SHIFT(104, 0),
    [282] = {.count = 1}, SHIFT(102, 0),
    [284] = {.count = 1}, SHIFT(100, 0),
    [286] = {.count = 1}, SHIFT(101, 0),
    [288] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [290] = {.count = 1}, SHIFT(105, 0),
    [292] = {.count = 1}, SHIFT(106, 0),
    [294] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [296] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [298] = {.count = 1}, SHIFT(109, 0),
    [300] = {.count = 1}, SHIFT(113, 0),
    [302] = {.count = 1}, SHIFT(114, 0),
    [304] = {.count = 1}, SHIFT(117, 0),
    [306] = {.count = 1}, SHIFT(115, 0),
    [308] = {.count = 1}, SHIFT(116, 0),
    [310] = {.count = 1}, SHIFT(123, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
