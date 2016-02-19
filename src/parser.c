#include "tree_sitter/parser.h"

#define STATE_COUNT 283
#define SYMBOL_COUNT 55

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_class_declaration,
    sym_module_declaration,
    sym__argument_declaration,
    sym__argument_list,
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
    aux_sym_program_repeat1,
    aux_sym_class_declaration_repeat1,
    aux_sym__argument_list_repeat1,
    aux_sym__call_arguments_repeat1,
    aux_sym_identifier_repeat1,
    anon_sym_do,
    anon_sym_PIPE,
    anon_sym_end,
    anon_sym_undef,
    anon_sym_alias,
    anon_sym_if,
    anon_sym_while,
    anon_sym_unless,
    anon_sym_until,
    anon_sym_def,
    anon_sym_class,
    anon_sym_LT,
    anon_sym_COLON_COLON,
    anon_sym_module,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_STAR,
    anon_sym_AMP,
    anon_sym_COMMA,
    anon_sym_super,
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
    [sym__statement] = "_statement",
    [sym__declaration] = "_declaration",
    [sym_method_declaration] = "method_declaration",
    [sym_class_declaration] = "class_declaration",
    [sym_module_declaration] = "module_declaration",
    [sym__argument_declaration] = "_argument_declaration",
    [sym__argument_list] = "_argument_list",
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
    [aux_sym_program_repeat1] = "program_repeat1",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym__argument_list_repeat1] = "_argument_list_repeat1",
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
    [anon_sym_unless] = "unless",
    [anon_sym_until] = "until",
    [anon_sym_def] = "def",
    [anon_sym_class] = "class",
    [anon_sym_LT] = "<",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_module] = "module",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_STAR] = "*",
    [anon_sym_AMP] = "&",
    [anon_sym_COMMA] = ",",
    [anon_sym_super] = "super",
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
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_class_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_module_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__argument_declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__argument_list] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [aux_sym_program_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_class_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__argument_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_unless] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_until] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_def] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_class] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_module] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_super] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '<')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(48);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(67);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '|')
                ADVANCE(84);
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
            ACCEPT_TOKEN(anon_sym_AMP);
        case 6:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 7:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 8:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 9:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 10:
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            ACCEPT_TOKEN(anon_sym_DOT_DOT);
        case 12:
            if (lookahead == ':')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 14:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 15:
            ACCEPT_TOKEN(anon_sym_LT);
        case 16:
            if (lookahead == 'b')
                ADVANCE(17);
            LEX_ERROR();
        case 17:
            if (lookahead == 'e')
                ADVANCE(18);
            LEX_ERROR();
        case 18:
            if (lookahead == 'g')
                ADVANCE(19);
            LEX_ERROR();
        case 19:
            if (lookahead == 'i')
                ADVANCE(20);
            LEX_ERROR();
        case 20:
            if (lookahead == 'n')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            if (lookahead == '\n')
                ADVANCE(22);
            LEX_ERROR();
        case 22:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(23);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(28);
            LEX_ERROR();
        case 23:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == 'e')
                ADVANCE(24);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'e')))
                ADVANCE(28);
            LEX_ERROR();
        case 24:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == 'n')
                ADVANCE(25);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'n')))
                ADVANCE(28);
            LEX_ERROR();
        case 25:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == 'd')
                ADVANCE(26);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'd')))
                ADVANCE(28);
            LEX_ERROR();
        case 26:
            if (lookahead == '\n')
                ADVANCE(27);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(28);
            LEX_ERROR();
        case 27:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(23);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(28);
            ACCEPT_TOKEN(sym_comment);
        case 28:
            if (lookahead == '\n')
                ADVANCE(22);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(28);
            LEX_ERROR();
        case 29:
            ACCEPT_TOKEN(anon_sym_AT);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(32);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(33);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 's')
                ADVANCE(35);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_alias);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(38);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 's')
                ADVANCE(39);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 's')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_class);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(42);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'f')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_def);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_do);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'n')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'd')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_end);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'f')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_if);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'o')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'd')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'u')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_module);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(58);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_nil);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(60);
            if (lookahead == 'u')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'f')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_self);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'p')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_super);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'n')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'd')
                ADVANCE(69);
            if (lookahead == 'l')
                ADVANCE(72);
            if (lookahead == 't')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'f')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_undef);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 's')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 's')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_unless);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_until);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'h')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'i')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'l')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_while);
        case 84:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 85:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'n')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'd')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 89:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 90:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'i')
                ADVANCE(91);
            if (lookahead == 'u')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(102);
            LEX_ERROR();
        case 91:
            if (lookahead == 'f')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            ACCEPT_TOKEN(anon_sym_if);
        case 93:
            if (lookahead == 'n')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'l')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(99);
            LEX_ERROR();
        case 95:
            if (lookahead == 'e')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 's')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 's')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            ACCEPT_TOKEN(anon_sym_unless);
        case 99:
            if (lookahead == 'i')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'l')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            ACCEPT_TOKEN(anon_sym_until);
        case 102:
            if (lookahead == 'h')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'i')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'l')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'e')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            ACCEPT_TOKEN(anon_sym_while);
        case 107:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(107);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'd')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'o')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_do);
        case 110:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(110);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            LEX_ERROR();
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == '|')
                ADVANCE(84);
            LEX_ERROR();
        case 112:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(112);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            LEX_ERROR();
        case 113:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(113);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 114:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(114);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'd')
                ADVANCE(115);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            LEX_ERROR();
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'd')
                ADVANCE(108);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            LEX_ERROR();
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'i')
                ADVANCE(91);
            if (lookahead == 'u')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(102);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 122:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(48);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(67);
            if (lookahead == 'w')
                ADVANCE(79);
            LEX_ERROR();
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 124:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(91);
            if (lookahead == 'u')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(102);
            LEX_ERROR();
        case 125:
            if (lookahead == 'n')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'd')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            ACCEPT_TOKEN(anon_sym_end);
        case 128:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(125);
            LEX_ERROR();
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '<')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'a')
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(36);
            if (lookahead == 'd')
                ADVANCE(86);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(87);
            if (lookahead == '|')
                ADVANCE(84);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 85,
    [1] = 89,
    [2] = 90,
    [3] = 90,
    [4] = 90,
    [5] = 107,
    [6] = 107,
    [7] = 90,
    [8] = 90,
    [9] = 90,
    [10] = 90,
    [11] = 110,
    [12] = 111,
    [13] = 111,
    [14] = 111,
    [15] = 112,
    [16] = 112,
    [17] = 113,
    [18] = 114,
    [19] = 112,
    [20] = 90,
    [21] = 110,
    [22] = 107,
    [23] = 107,
    [24] = 116,
    [25] = 116,
    [26] = 116,
    [27] = 116,
    [28] = 110,
    [29] = 113,
    [30] = 117,
    [31] = 116,
    [32] = 118,
    [33] = 118,
    [34] = 118,
    [35] = 107,
    [36] = 118,
    [37] = 118,
    [38] = 118,
    [39] = 118,
    [40] = 110,
    [41] = 111,
    [42] = 111,
    [43] = 111,
    [44] = 112,
    [45] = 112,
    [46] = 113,
    [47] = 118,
    [48] = 118,
    [49] = 113,
    [50] = 119,
    [51] = 120,
    [52] = 118,
    [53] = 122,
    [54] = 113,
    [55] = 118,
    [56] = 118,
    [57] = 118,
    [58] = 119,
    [59] = 123,
    [60] = 110,
    [61] = 123,
    [62] = 123,
    [63] = 124,
    [64] = 124,
    [65] = 124,
    [66] = 107,
    [67] = 124,
    [68] = 124,
    [69] = 124,
    [70] = 124,
    [71] = 110,
    [72] = 118,
    [73] = 111,
    [74] = 111,
    [75] = 111,
    [76] = 112,
    [77] = 112,
    [78] = 113,
    [79] = 124,
    [80] = 118,
    [81] = 119,
    [82] = 124,
    [83] = 124,
    [84] = 123,
    [85] = 124,
    [86] = 124,
    [87] = 113,
    [88] = 128,
    [89] = 124,
    [90] = 120,
    [91] = 124,
    [92] = 124,
    [93] = 124,
    [94] = 128,
    [95] = 129,
    [96] = 110,
    [97] = 129,
    [98] = 129,
    [99] = 124,
    [100] = 124,
    [101] = 112,
    [102] = 130,
    [103] = 110,
    [104] = 130,
    [105] = 130,
    [106] = 124,
    [107] = 123,
    [108] = 124,
    [109] = 112,
    [110] = 130,
    [111] = 123,
    [112] = 124,
    [113] = 124,
    [114] = 128,
    [115] = 124,
    [116] = 124,
    [117] = 128,
    [118] = 128,
    [119] = 124,
    [120] = 131,
    [121] = 132,
    [122] = 110,
    [123] = 131,
    [124] = 131,
    [125] = 124,
    [126] = 123,
    [127] = 133,
    [128] = 124,
    [129] = 134,
    [130] = 112,
    [131] = 135,
    [132] = 110,
    [133] = 135,
    [134] = 135,
    [135] = 133,
    [136] = 136,
    [137] = 112,
    [138] = 135,
    [139] = 133,
    [140] = 119,
    [141] = 112,
    [142] = 137,
    [143] = 110,
    [144] = 137,
    [145] = 137,
    [146] = 119,
    [147] = 136,
    [148] = 112,
    [149] = 137,
    [150] = 119,
    [151] = 123,
    [152] = 123,
    [153] = 138,
    [154] = 123,
    [155] = 124,
    [156] = 124,
    [157] = 128,
    [158] = 124,
    [159] = 124,
    [160] = 128,
    [161] = 111,
    [162] = 111,
    [163] = 110,
    [164] = 111,
    [165] = 111,
    [166] = 124,
    [167] = 124,
    [168] = 124,
    [169] = 139,
    [170] = 124,
    [171] = 123,
    [172] = 124,
    [173] = 124,
    [174] = 128,
    [175] = 124,
    [176] = 124,
    [177] = 128,
    [178] = 128,
    [179] = 118,
    [180] = 118,
    [181] = 129,
    [182] = 124,
    [183] = 118,
    [184] = 112,
    [185] = 130,
    [186] = 124,
    [187] = 123,
    [188] = 118,
    [189] = 124,
    [190] = 118,
    [191] = 128,
    [192] = 118,
    [193] = 118,
    [194] = 128,
    [195] = 128,
    [196] = 118,
    [197] = 132,
    [198] = 124,
    [199] = 123,
    [200] = 118,
    [201] = 124,
    [202] = 118,
    [203] = 128,
    [204] = 118,
    [205] = 118,
    [206] = 128,
    [207] = 111,
    [208] = 118,
    [209] = 118,
    [210] = 118,
    [211] = 139,
    [212] = 124,
    [213] = 123,
    [214] = 124,
    [215] = 118,
    [216] = 128,
    [217] = 118,
    [218] = 118,
    [219] = 128,
    [220] = 119,
    [221] = 116,
    [222] = 116,
    [223] = 116,
    [224] = 107,
    [225] = 120,
    [226] = 116,
    [227] = 107,
    [228] = 118,
    [229] = 119,
    [230] = 90,
    [231] = 90,
    [232] = 123,
    [233] = 124,
    [234] = 90,
    [235] = 128,
    [236] = 90,
    [237] = 90,
    [238] = 129,
    [239] = 124,
    [240] = 90,
    [241] = 112,
    [242] = 130,
    [243] = 124,
    [244] = 123,
    [245] = 90,
    [246] = 124,
    [247] = 90,
    [248] = 128,
    [249] = 90,
    [250] = 90,
    [251] = 128,
    [252] = 128,
    [253] = 90,
    [254] = 132,
    [255] = 124,
    [256] = 123,
    [257] = 90,
    [258] = 124,
    [259] = 90,
    [260] = 128,
    [261] = 90,
    [262] = 90,
    [263] = 128,
    [264] = 111,
    [265] = 90,
    [266] = 90,
    [267] = 90,
    [268] = 90,
    [269] = 139,
    [270] = 124,
    [271] = 123,
    [272] = 124,
    [273] = 90,
    [274] = 128,
    [275] = 90,
    [276] = 90,
    [277] = 128,
    [278] = 113,
    [279] = 89,
    [280] = 120,
    [281] = 90,
    [282] = 89,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = 2,
        [sym__statement] = 4,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym__call] = 10,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 6,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym_identifier_repeat1] = 22,
        [ts_builtin_sym_end] = 24,
        [anon_sym_undef] = 26,
        [anon_sym_alias] = 28,
        [anon_sym_def] = 30,
        [anon_sym_class] = 32,
        [anon_sym_module] = 34,
        [anon_sym_LPAREN] = 36,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [1] = {
        [ts_builtin_sym_end] = 46,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [2] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 50,
        [ts_builtin_sym_end] = 52,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [3] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [ts_builtin_sym_end] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [sym_comment] = 44,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [4] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [ts_builtin_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 44,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [5] = {
        [anon_sym_do] = 64,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [6] = {
        [anon_sym_do] = 66,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [7] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [8] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [ts_builtin_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [9] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [ts_builtin_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [sym_comment] = 44,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [10] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [ts_builtin_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [sym_comment] = 44,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [11] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 76,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [12] = {
        [sym_identifier] = 78,
        [sym__function_name] = 80,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 44,
    },
    [13] = {
        [sym_identifier] = 82,
        [sym__function_name] = 84,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_PIPE] = 82,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 82,
        [sym__line_break] = 44,
    },
    [14] = {
        [sym_identifier] = 90,
        [sym__function_name] = 92,
        [aux_sym_identifier_repeat1] = 94,
        [anon_sym_PIPE] = 90,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 90,
        [sym__line_break] = 44,
    },
    [15] = {
        [sym_identifier] = 98,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 102,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [16] = {
        [sym_identifier] = 104,
        [aux_sym_identifier_repeat1] = 106,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [17] = {
        [sym__statement] = 110,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_def] = 132,
        [anon_sym_class] = 134,
        [anon_sym_module] = 136,
        [anon_sym_LPAREN] = 138,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [18] = {
        [sym__call_arguments] = 142,
        [sym__command] = 144,
        [sym__argument] = 146,
        [sym__primary] = 148,
        [sym__variable] = 150,
        [sym_identifier] = 152,
        [aux_sym_identifier_repeat1] = 154,
        [anon_sym_do] = 156,
        [anon_sym_LPAREN] = 158,
        [anon_sym_super] = 160,
        [anon_sym_nil] = 152,
        [anon_sym_self] = 152,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 162,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [19] = {
        [aux_sym_identifier_repeat1] = 164,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 166,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [20] = {
        [sym__terminator] = 168,
        [aux_sym_program_repeat1] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_if] = 168,
        [anon_sym_while] = 168,
        [anon_sym_unless] = 168,
        [anon_sym_until] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [21] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [22] = {
        [anon_sym_do] = 172,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [23] = {
        [anon_sym_do] = 174,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [24] = {
        [aux_sym__call_arguments_repeat1] = 176,
        [anon_sym_do] = 174,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 70,
        [anon_sym_do] = 70,
        [anon_sym_COMMA] = 70,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [26] = {
        [aux_sym__call_arguments_repeat1] = 72,
        [anon_sym_do] = 72,
        [anon_sym_COMMA] = 72,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COMMA] = 74,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [28] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 180,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [29] = {
        [sym__statement] = 182,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_def] = 132,
        [anon_sym_class] = 134,
        [anon_sym_module] = 136,
        [anon_sym_LPAREN] = 138,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [30] = {
        [sym__call_arguments] = 142,
        [sym__command] = 144,
        [sym__argument] = 146,
        [sym__primary] = 148,
        [sym__variable] = 150,
        [sym_identifier] = 152,
        [aux_sym_identifier_repeat1] = 154,
        [anon_sym_LPAREN] = 158,
        [anon_sym_super] = 160,
        [anon_sym_nil] = 152,
        [anon_sym_self] = 152,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 162,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 168,
        [anon_sym_do] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [32] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 186,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 190,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [33] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [anon_sym_RPAREN] = 60,
        [sym_comment] = 44,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [34] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [anon_sym_RPAREN] = 62,
        [sym_comment] = 44,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [35] = {
        [anon_sym_do] = 192,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [36] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [anon_sym_RPAREN] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [37] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [anon_sym_RPAREN] = 70,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [38] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_RPAREN] = 72,
        [sym_comment] = 44,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [39] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_RPAREN] = 74,
        [sym_comment] = 44,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [40] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 194,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [41] = {
        [sym_identifier] = 196,
        [sym__function_name] = 198,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_PIPE] = 196,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 196,
        [sym__line_break] = 44,
    },
    [42] = {
        [sym_identifier] = 82,
        [sym__function_name] = 200,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_PIPE] = 82,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 82,
        [sym__line_break] = 44,
    },
    [43] = {
        [sym_identifier] = 90,
        [sym__function_name] = 202,
        [aux_sym_identifier_repeat1] = 94,
        [anon_sym_PIPE] = 90,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 90,
        [sym__line_break] = 44,
    },
    [44] = {
        [sym_identifier] = 204,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 102,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [45] = {
        [sym_identifier] = 206,
        [aux_sym_identifier_repeat1] = 106,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [46] = {
        [sym__statement] = 208,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_def] = 132,
        [anon_sym_class] = 134,
        [anon_sym_module] = 136,
        [anon_sym_LPAREN] = 138,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [47] = {
        [sym__terminator] = 168,
        [aux_sym_program_repeat1] = 168,
        [anon_sym_if] = 168,
        [anon_sym_while] = 168,
        [anon_sym_unless] = 168,
        [anon_sym_until] = 168,
        [anon_sym_RPAREN] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [48] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 210,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 212,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [49] = {
        [sym__statement] = 214,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_def] = 132,
        [anon_sym_class] = 134,
        [anon_sym_module] = 136,
        [anon_sym_LPAREN] = 138,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [50] = {
        [anon_sym_RPAREN] = 216,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [51] = {
        [sym__expression] = 218,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_LPAREN] = 138,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [52] = {
        [sym__terminator] = 220,
        [aux_sym_program_repeat1] = 220,
        [anon_sym_if] = 220,
        [anon_sym_while] = 220,
        [anon_sym_unless] = 220,
        [anon_sym_until] = 220,
        [anon_sym_RPAREN] = 220,
        [sym_comment] = 44,
        [sym__line_break] = 220,
        [anon_sym_SEMI] = 220,
    },
    [53] = {
        [sym__statement] = 222,
        [sym__declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 222,
        [sym__command] = 222,
        [sym__function_call] = 222,
        [sym__expression] = 222,
        [sym__argument] = 222,
        [sym__primary] = 222,
        [sym__variable] = 222,
        [sym_identifier] = 222,
        [sym__terminator] = 224,
        [aux_sym_program_repeat1] = 224,
        [aux_sym_identifier_repeat1] = 222,
        [ts_builtin_sym_end] = 224,
        [anon_sym_end] = 224,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 222,
        [anon_sym_if] = 224,
        [anon_sym_while] = 224,
        [anon_sym_unless] = 224,
        [anon_sym_until] = 224,
        [anon_sym_def] = 222,
        [anon_sym_class] = 222,
        [anon_sym_module] = 222,
        [anon_sym_LPAREN] = 222,
        [anon_sym_RPAREN] = 224,
        [anon_sym_super] = 222,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [anon_sym_AT] = 222,
        [anon_sym_DOLLAR] = 222,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 224,
    },
    [54] = {
        [sym__statement] = 222,
        [sym__declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 222,
        [sym__command] = 222,
        [sym__function_call] = 222,
        [sym__expression] = 222,
        [sym__argument] = 222,
        [sym__primary] = 222,
        [sym__variable] = 222,
        [sym_identifier] = 222,
        [aux_sym_identifier_repeat1] = 222,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 222,
        [anon_sym_def] = 222,
        [anon_sym_class] = 222,
        [anon_sym_module] = 222,
        [anon_sym_LPAREN] = 222,
        [anon_sym_super] = 222,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [anon_sym_AT] = 222,
        [anon_sym_DOLLAR] = 222,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [55] = {
        [sym__terminator] = 226,
        [aux_sym_program_repeat1] = 226,
        [anon_sym_if] = 226,
        [anon_sym_while] = 226,
        [anon_sym_unless] = 226,
        [anon_sym_until] = 226,
        [anon_sym_RPAREN] = 226,
        [sym_comment] = 44,
        [sym__line_break] = 226,
        [anon_sym_SEMI] = 226,
    },
    [56] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 228,
        [anon_sym_if] = 228,
        [anon_sym_while] = 228,
        [anon_sym_unless] = 228,
        [anon_sym_until] = 228,
        [anon_sym_RPAREN] = 228,
        [sym_comment] = 44,
        [sym__line_break] = 228,
        [anon_sym_SEMI] = 228,
    },
    [57] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 230,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 232,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [58] = {
        [anon_sym_RPAREN] = 234,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [59] = {
        [sym__statement] = 236,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 254,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [60] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 270,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [61] = {
        [sym__statement] = 168,
        [sym__declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_class_declaration] = 168,
        [sym_module_declaration] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_end] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_def] = 168,
        [anon_sym_class] = 168,
        [anon_sym_module] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [62] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym__variable] = 272,
        [sym_identifier] = 272,
        [aux_sym_identifier_repeat1] = 272,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_def] = 272,
        [anon_sym_class] = 272,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_DOLLAR] = 272,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [63] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 276,
        [anon_sym_end] = 278,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [64] = {
        [sym__terminator] = 60,
        [aux_sym_program_repeat1] = 60,
        [anon_sym_end] = 60,
        [anon_sym_if] = 60,
        [anon_sym_while] = 60,
        [anon_sym_unless] = 60,
        [anon_sym_until] = 60,
        [sym_comment] = 44,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 60,
    },
    [65] = {
        [sym__terminator] = 62,
        [aux_sym_program_repeat1] = 62,
        [anon_sym_end] = 62,
        [anon_sym_if] = 62,
        [anon_sym_while] = 62,
        [anon_sym_unless] = 62,
        [anon_sym_until] = 62,
        [sym_comment] = 44,
        [sym__line_break] = 62,
        [anon_sym_SEMI] = 62,
    },
    [66] = {
        [anon_sym_do] = 282,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [67] = {
        [sym__terminator] = 68,
        [aux_sym_program_repeat1] = 68,
        [anon_sym_end] = 68,
        [anon_sym_if] = 68,
        [anon_sym_while] = 68,
        [anon_sym_unless] = 68,
        [anon_sym_until] = 68,
        [sym_comment] = 44,
        [sym__line_break] = 68,
        [anon_sym_SEMI] = 68,
    },
    [68] = {
        [sym__terminator] = 70,
        [aux_sym_program_repeat1] = 70,
        [anon_sym_end] = 70,
        [anon_sym_if] = 70,
        [anon_sym_while] = 70,
        [anon_sym_unless] = 70,
        [anon_sym_until] = 70,
        [sym_comment] = 44,
        [sym__line_break] = 70,
        [anon_sym_SEMI] = 70,
    },
    [69] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [sym_comment] = 44,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [70] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [sym_comment] = 44,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [71] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 284,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [72] = {
        [sym__terminator] = 286,
        [aux_sym_program_repeat1] = 286,
        [anon_sym_if] = 286,
        [anon_sym_while] = 286,
        [anon_sym_unless] = 286,
        [anon_sym_until] = 286,
        [anon_sym_RPAREN] = 286,
        [sym_comment] = 44,
        [sym__line_break] = 286,
        [anon_sym_SEMI] = 286,
    },
    [73] = {
        [sym_identifier] = 288,
        [sym__function_name] = 290,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_PIPE] = 288,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 288,
        [sym__line_break] = 44,
    },
    [74] = {
        [sym_identifier] = 82,
        [sym__function_name] = 292,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_PIPE] = 82,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 82,
        [sym__line_break] = 44,
    },
    [75] = {
        [sym_identifier] = 90,
        [sym__function_name] = 294,
        [aux_sym_identifier_repeat1] = 94,
        [anon_sym_PIPE] = 90,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 90,
        [sym__line_break] = 44,
    },
    [76] = {
        [sym_identifier] = 296,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 102,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [77] = {
        [sym_identifier] = 298,
        [aux_sym_identifier_repeat1] = 106,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [78] = {
        [sym__statement] = 300,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_def] = 132,
        [anon_sym_class] = 134,
        [anon_sym_module] = 136,
        [anon_sym_LPAREN] = 138,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [79] = {
        [sym__terminator] = 168,
        [aux_sym_program_repeat1] = 168,
        [anon_sym_end] = 168,
        [anon_sym_if] = 168,
        [anon_sym_while] = 168,
        [anon_sym_unless] = 168,
        [anon_sym_until] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [80] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 302,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 304,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [81] = {
        [anon_sym_RPAREN] = 306,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [82] = {
        [sym__terminator] = 220,
        [aux_sym_program_repeat1] = 220,
        [anon_sym_end] = 220,
        [anon_sym_if] = 220,
        [anon_sym_while] = 220,
        [anon_sym_unless] = 220,
        [anon_sym_until] = 220,
        [sym_comment] = 44,
        [sym__line_break] = 220,
        [anon_sym_SEMI] = 220,
    },
    [83] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 228,
        [anon_sym_end] = 228,
        [anon_sym_if] = 228,
        [anon_sym_while] = 228,
        [anon_sym_unless] = 228,
        [anon_sym_until] = 228,
        [sym_comment] = 44,
        [sym__line_break] = 228,
        [anon_sym_SEMI] = 228,
    },
    [84] = {
        [sym__statement] = 308,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 310,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [85] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 312,
        [anon_sym_end] = 314,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [86] = {
        [sym__terminator] = 286,
        [aux_sym_program_repeat1] = 286,
        [anon_sym_end] = 286,
        [anon_sym_if] = 286,
        [anon_sym_while] = 286,
        [anon_sym_unless] = 286,
        [anon_sym_until] = 286,
        [sym_comment] = 44,
        [sym__line_break] = 286,
        [anon_sym_SEMI] = 286,
    },
    [87] = {
        [sym__statement] = 316,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [88] = {
        [anon_sym_end] = 318,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [89] = {
        [sym__terminator] = 320,
        [aux_sym_program_repeat1] = 320,
        [anon_sym_end] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [sym_comment] = 44,
        [sym__line_break] = 320,
        [anon_sym_SEMI] = 320,
    },
    [90] = {
        [sym__expression] = 322,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_LPAREN] = 266,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [91] = {
        [sym__terminator] = 226,
        [aux_sym_program_repeat1] = 226,
        [anon_sym_end] = 226,
        [anon_sym_if] = 226,
        [anon_sym_while] = 226,
        [anon_sym_unless] = 226,
        [anon_sym_until] = 226,
        [sym_comment] = 44,
        [sym__line_break] = 226,
        [anon_sym_SEMI] = 226,
    },
    [92] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [93] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 326,
        [anon_sym_end] = 232,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [94] = {
        [anon_sym_end] = 234,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [95] = {
        [sym__statement] = 328,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 330,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_LT] = 332,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [96] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [97] = {
        [sym__statement] = 168,
        [sym__declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_class_declaration] = 168,
        [sym_module_declaration] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_end] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_def] = 168,
        [anon_sym_class] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_module] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [98] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym__variable] = 272,
        [sym_identifier] = 272,
        [aux_sym_identifier_repeat1] = 272,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_def] = 272,
        [anon_sym_class] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_DOLLAR] = 272,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [99] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 338,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [100] = {
        [sym__terminator] = 340,
        [aux_sym_program_repeat1] = 340,
        [anon_sym_end] = 340,
        [anon_sym_if] = 340,
        [anon_sym_while] = 340,
        [anon_sym_unless] = 340,
        [anon_sym_until] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 340,
        [anon_sym_SEMI] = 340,
    },
    [101] = {
        [sym_identifier] = 342,
        [aux_sym_identifier_repeat1] = 344,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 346,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [102] = {
        [sym__statement] = 348,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_class_declaration_repeat1] = 350,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 352,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_COLON_COLON] = 354,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [103] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [104] = {
        [sym__statement] = 168,
        [sym__declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_class_declaration] = 168,
        [sym_module_declaration] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [aux_sym_class_declaration_repeat1] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_end] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_def] = 168,
        [anon_sym_class] = 168,
        [anon_sym_COLON_COLON] = 168,
        [anon_sym_module] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [105] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym__variable] = 272,
        [sym_identifier] = 272,
        [aux_sym_class_declaration_repeat1] = 272,
        [aux_sym_identifier_repeat1] = 272,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_def] = 272,
        [anon_sym_class] = 272,
        [anon_sym_COLON_COLON] = 272,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_DOLLAR] = 272,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [106] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 358,
        [anon_sym_end] = 360,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [107] = {
        [sym__statement] = 362,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 360,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [108] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_end] = 364,
        [anon_sym_if] = 364,
        [anon_sym_while] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_until] = 364,
        [sym_comment] = 44,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [109] = {
        [sym_identifier] = 366,
        [aux_sym_identifier_repeat1] = 344,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 346,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [110] = {
        [sym__statement] = 368,
        [sym__declaration] = 368,
        [sym_method_declaration] = 368,
        [sym_class_declaration] = 368,
        [sym_module_declaration] = 368,
        [sym__call] = 368,
        [sym__command] = 368,
        [sym__function_call] = 368,
        [sym__expression] = 368,
        [sym__argument] = 368,
        [sym__primary] = 368,
        [sym__variable] = 368,
        [sym_identifier] = 368,
        [aux_sym_class_declaration_repeat1] = 370,
        [aux_sym_identifier_repeat1] = 368,
        [anon_sym_end] = 368,
        [anon_sym_undef] = 368,
        [anon_sym_alias] = 368,
        [anon_sym_def] = 368,
        [anon_sym_class] = 368,
        [anon_sym_COLON_COLON] = 354,
        [anon_sym_module] = 368,
        [anon_sym_LPAREN] = 368,
        [anon_sym_super] = 368,
        [anon_sym_nil] = 368,
        [anon_sym_self] = 368,
        [anon_sym_AT] = 368,
        [anon_sym_DOLLAR] = 368,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 368,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [111] = {
        [sym__statement] = 372,
        [sym__declaration] = 372,
        [sym_method_declaration] = 372,
        [sym_class_declaration] = 372,
        [sym_module_declaration] = 372,
        [sym__call] = 372,
        [sym__command] = 372,
        [sym__function_call] = 372,
        [sym__expression] = 372,
        [sym__argument] = 372,
        [sym__primary] = 372,
        [sym__variable] = 372,
        [sym_identifier] = 372,
        [aux_sym_identifier_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_undef] = 372,
        [anon_sym_alias] = 372,
        [anon_sym_def] = 372,
        [anon_sym_class] = 372,
        [anon_sym_module] = 372,
        [anon_sym_LPAREN] = 372,
        [anon_sym_super] = 372,
        [anon_sym_nil] = 372,
        [anon_sym_self] = 372,
        [anon_sym_AT] = 372,
        [anon_sym_DOLLAR] = 372,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 372,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [112] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 376,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [113] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [114] = {
        [anon_sym_end] = 380,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [115] = {
        [sym__terminator] = 382,
        [aux_sym_program_repeat1] = 382,
        [anon_sym_end] = 382,
        [anon_sym_if] = 382,
        [anon_sym_while] = 382,
        [anon_sym_unless] = 382,
        [anon_sym_until] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 382,
        [anon_sym_SEMI] = 382,
    },
    [116] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 44,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [117] = {
        [anon_sym_end] = 376,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [118] = {
        [anon_sym_end] = 352,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [119] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [120] = {
        [sym__statement] = 388,
        [sym__declaration] = 388,
        [sym_method_declaration] = 388,
        [sym_class_declaration] = 388,
        [sym_module_declaration] = 388,
        [sym__argument_declaration] = 388,
        [sym__argument_list] = 388,
        [sym__call] = 388,
        [sym__command] = 388,
        [sym__function_call] = 388,
        [sym__expression] = 388,
        [sym__argument] = 388,
        [sym__primary] = 388,
        [sym__variable] = 388,
        [sym_identifier] = 388,
        [aux_sym_identifier_repeat1] = 388,
        [anon_sym_end] = 388,
        [anon_sym_undef] = 388,
        [anon_sym_alias] = 388,
        [anon_sym_def] = 388,
        [anon_sym_class] = 388,
        [anon_sym_module] = 388,
        [anon_sym_LPAREN] = 388,
        [anon_sym_STAR] = 388,
        [anon_sym_AMP] = 388,
        [anon_sym_super] = 388,
        [anon_sym_nil] = 388,
        [anon_sym_self] = 388,
        [anon_sym_AT] = 388,
        [anon_sym_DOLLAR] = 388,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 388,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [121] = {
        [sym__statement] = 390,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__argument_declaration] = 392,
        [sym__argument_list] = 394,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [sym__terminator] = 396,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 398,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 400,
        [anon_sym_STAR] = 402,
        [anon_sym_AMP] = 402,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [122] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 404,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [123] = {
        [sym__statement] = 168,
        [sym__declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_class_declaration] = 168,
        [sym_module_declaration] = 168,
        [sym__argument_declaration] = 168,
        [sym__argument_list] = 168,
        [sym__call] = 168,
        [sym__command] = 168,
        [sym__function_call] = 168,
        [sym__expression] = 168,
        [sym__argument] = 168,
        [sym__primary] = 168,
        [sym__variable] = 168,
        [sym_identifier] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_end] = 168,
        [anon_sym_undef] = 168,
        [anon_sym_alias] = 168,
        [anon_sym_def] = 168,
        [anon_sym_class] = 168,
        [anon_sym_module] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_STAR] = 168,
        [anon_sym_AMP] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [124] = {
        [sym__statement] = 272,
        [sym__declaration] = 272,
        [sym_method_declaration] = 272,
        [sym_class_declaration] = 272,
        [sym_module_declaration] = 272,
        [sym__argument_declaration] = 272,
        [sym__argument_list] = 272,
        [sym__call] = 272,
        [sym__command] = 272,
        [sym__function_call] = 272,
        [sym__expression] = 272,
        [sym__argument] = 272,
        [sym__primary] = 272,
        [sym__variable] = 272,
        [sym_identifier] = 272,
        [aux_sym_identifier_repeat1] = 272,
        [anon_sym_end] = 272,
        [anon_sym_undef] = 272,
        [anon_sym_alias] = 272,
        [anon_sym_def] = 272,
        [anon_sym_class] = 272,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_AMP] = 272,
        [anon_sym_super] = 272,
        [anon_sym_nil] = 272,
        [anon_sym_self] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_DOLLAR] = 272,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [125] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 406,
        [anon_sym_end] = 408,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [126] = {
        [sym__statement] = 410,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 408,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [127] = {
        [sym__terminator] = 412,
        [sym_comment] = 44,
        [sym__line_break] = 414,
        [anon_sym_SEMI] = 416,
    },
    [128] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [anon_sym_end] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [sym_comment] = 44,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [129] = {
        [sym__statement] = 300,
        [sym__declaration] = 112,
        [sym_method_declaration] = 114,
        [sym_class_declaration] = 114,
        [sym_module_declaration] = 114,
        [sym__argument_list] = 420,
        [sym__call] = 116,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 112,
        [sym__argument] = 118,
        [sym__primary] = 120,
        [sym__variable] = 122,
        [sym_identifier] = 124,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_undef] = 128,
        [anon_sym_alias] = 130,
        [anon_sym_def] = 132,
        [anon_sym_class] = 134,
        [anon_sym_module] = 136,
        [anon_sym_LPAREN] = 138,
        [anon_sym_RPAREN] = 396,
        [anon_sym_STAR] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [130] = {
        [sym_identifier] = 424,
        [aux_sym_identifier_repeat1] = 426,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 428,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [131] = {
        [sym__terminator] = 430,
        [aux_sym__argument_list_repeat1] = 432,
        [anon_sym_COMMA] = 434,
        [sym_comment] = 44,
        [sym__line_break] = 430,
        [anon_sym_SEMI] = 430,
    },
    [132] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 436,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [133] = {
        [sym__terminator] = 168,
        [aux_sym__argument_list_repeat1] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [134] = {
        [sym__terminator] = 272,
        [aux_sym__argument_list_repeat1] = 272,
        [anon_sym_COMMA] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [135] = {
        [sym__terminator] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [136] = {
        [anon_sym_STAR] = 440,
        [anon_sym_AMP] = 440,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [137] = {
        [sym_identifier] = 442,
        [aux_sym_identifier_repeat1] = 426,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 428,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [138] = {
        [sym__terminator] = 444,
        [aux_sym__argument_list_repeat1] = 446,
        [anon_sym_COMMA] = 434,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 444,
    },
    [139] = {
        [sym__terminator] = 448,
        [sym_comment] = 44,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [140] = {
        [anon_sym_RPAREN] = 450,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [141] = {
        [sym_identifier] = 452,
        [aux_sym_identifier_repeat1] = 454,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 456,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [142] = {
        [aux_sym__argument_list_repeat1] = 458,
        [anon_sym_RPAREN] = 430,
        [anon_sym_COMMA] = 460,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [143] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [144] = {
        [aux_sym__argument_list_repeat1] = 168,
        [anon_sym_RPAREN] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [145] = {
        [aux_sym__argument_list_repeat1] = 272,
        [anon_sym_RPAREN] = 272,
        [anon_sym_COMMA] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [146] = {
        [anon_sym_RPAREN] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [147] = {
        [anon_sym_STAR] = 464,
        [anon_sym_AMP] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [148] = {
        [sym_identifier] = 466,
        [aux_sym_identifier_repeat1] = 454,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 456,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [149] = {
        [aux_sym__argument_list_repeat1] = 468,
        [anon_sym_RPAREN] = 444,
        [anon_sym_COMMA] = 460,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [150] = {
        [anon_sym_RPAREN] = 448,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [151] = {
        [sym__statement] = 470,
        [sym__declaration] = 470,
        [sym_method_declaration] = 470,
        [sym_class_declaration] = 470,
        [sym_module_declaration] = 470,
        [sym__call] = 470,
        [sym__command] = 470,
        [sym__function_call] = 470,
        [sym__expression] = 470,
        [sym__argument] = 470,
        [sym__primary] = 470,
        [sym__variable] = 470,
        [sym_identifier] = 470,
        [aux_sym_identifier_repeat1] = 470,
        [anon_sym_end] = 470,
        [anon_sym_undef] = 470,
        [anon_sym_alias] = 470,
        [anon_sym_def] = 470,
        [anon_sym_class] = 470,
        [anon_sym_module] = 470,
        [anon_sym_LPAREN] = 470,
        [anon_sym_super] = 470,
        [anon_sym_nil] = 470,
        [anon_sym_self] = 470,
        [anon_sym_AT] = 470,
        [anon_sym_DOLLAR] = 470,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 470,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [152] = {
        [sym__statement] = 472,
        [sym__declaration] = 472,
        [sym_method_declaration] = 472,
        [sym_class_declaration] = 472,
        [sym_module_declaration] = 472,
        [sym__call] = 472,
        [sym__command] = 472,
        [sym__function_call] = 472,
        [sym__expression] = 472,
        [sym__argument] = 472,
        [sym__primary] = 472,
        [sym__variable] = 472,
        [sym_identifier] = 472,
        [aux_sym_identifier_repeat1] = 472,
        [anon_sym_end] = 472,
        [anon_sym_undef] = 472,
        [anon_sym_alias] = 472,
        [anon_sym_def] = 472,
        [anon_sym_class] = 472,
        [anon_sym_module] = 472,
        [anon_sym_LPAREN] = 472,
        [anon_sym_super] = 472,
        [anon_sym_nil] = 472,
        [anon_sym_self] = 472,
        [anon_sym_AT] = 472,
        [anon_sym_DOLLAR] = 472,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 472,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [153] = {
        [sym__statement] = 222,
        [sym__declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 222,
        [sym__command] = 222,
        [sym__function_call] = 222,
        [sym__expression] = 222,
        [sym__argument] = 222,
        [sym__primary] = 222,
        [sym__variable] = 222,
        [sym_identifier] = 222,
        [sym__terminator] = 224,
        [aux_sym_identifier_repeat1] = 222,
        [anon_sym_end] = 222,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 222,
        [anon_sym_def] = 222,
        [anon_sym_class] = 222,
        [anon_sym_module] = 222,
        [anon_sym_LPAREN] = 222,
        [anon_sym_super] = 222,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [anon_sym_AT] = 222,
        [anon_sym_DOLLAR] = 222,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 224,
    },
    [154] = {
        [sym__statement] = 222,
        [sym__declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 222,
        [sym__command] = 222,
        [sym__function_call] = 222,
        [sym__expression] = 222,
        [sym__argument] = 222,
        [sym__primary] = 222,
        [sym__variable] = 222,
        [sym_identifier] = 222,
        [aux_sym_identifier_repeat1] = 222,
        [anon_sym_end] = 222,
        [anon_sym_undef] = 222,
        [anon_sym_alias] = 222,
        [anon_sym_def] = 222,
        [anon_sym_class] = 222,
        [anon_sym_module] = 222,
        [anon_sym_LPAREN] = 222,
        [anon_sym_super] = 222,
        [anon_sym_nil] = 222,
        [anon_sym_self] = 222,
        [anon_sym_AT] = 222,
        [anon_sym_DOLLAR] = 222,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 222,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [155] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 474,
        [anon_sym_end] = 476,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [156] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [sym_comment] = 44,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [157] = {
        [anon_sym_end] = 480,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [158] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_end] = 482,
        [anon_sym_if] = 482,
        [anon_sym_while] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_until] = 482,
        [sym_comment] = 44,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [159] = {
        [sym__terminator] = 484,
        [aux_sym_program_repeat1] = 484,
        [anon_sym_end] = 484,
        [anon_sym_if] = 484,
        [anon_sym_while] = 484,
        [anon_sym_unless] = 484,
        [anon_sym_until] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [160] = {
        [anon_sym_end] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [161] = {
        [sym_identifier] = 388,
        [sym__function_name] = 388,
        [aux_sym_identifier_repeat1] = 388,
        [anon_sym_PIPE] = 388,
        [anon_sym_AT] = 388,
        [anon_sym_DOLLAR] = 388,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 388,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 388,
        [sym__line_break] = 44,
    },
    [162] = {
        [sym_identifier] = 288,
        [sym__function_name] = 322,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_PIPE] = 288,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 288,
        [sym__line_break] = 44,
    },
    [163] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [164] = {
        [sym_identifier] = 168,
        [sym__function_name] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_PIPE] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 168,
        [sym__line_break] = 44,
    },
    [165] = {
        [sym_identifier] = 272,
        [sym__function_name] = 272,
        [aux_sym_identifier_repeat1] = 272,
        [anon_sym_PIPE] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_DOLLAR] = 272,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 272,
        [sym__line_break] = 44,
    },
    [166] = {
        [sym__terminator] = 388,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_end] = 388,
        [anon_sym_if] = 388,
        [anon_sym_while] = 388,
        [anon_sym_unless] = 388,
        [anon_sym_until] = 388,
        [sym_comment] = 44,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [167] = {
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [anon_sym_end] = 488,
        [anon_sym_if] = 488,
        [anon_sym_while] = 488,
        [anon_sym_unless] = 488,
        [anon_sym_until] = 488,
        [sym_comment] = 44,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [168] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 272,
        [anon_sym_end] = 272,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [169] = {
        [sym__statement] = 490,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_PIPE] = 492,
        [anon_sym_end] = 322,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [170] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 494,
        [anon_sym_end] = 496,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [171] = {
        [sym__statement] = 498,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 496,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [172] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 500,
        [anon_sym_end] = 502,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [173] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_end] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [174] = {
        [anon_sym_end] = 506,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [175] = {
        [sym__terminator] = 508,
        [aux_sym_program_repeat1] = 508,
        [anon_sym_end] = 508,
        [anon_sym_if] = 508,
        [anon_sym_while] = 508,
        [anon_sym_unless] = 508,
        [anon_sym_until] = 508,
        [sym_comment] = 44,
        [sym__line_break] = 508,
        [anon_sym_SEMI] = 508,
    },
    [176] = {
        [sym__terminator] = 510,
        [aux_sym_program_repeat1] = 510,
        [anon_sym_end] = 510,
        [anon_sym_if] = 510,
        [anon_sym_while] = 510,
        [anon_sym_unless] = 510,
        [anon_sym_until] = 510,
        [sym_comment] = 44,
        [sym__line_break] = 510,
        [anon_sym_SEMI] = 510,
    },
    [177] = {
        [anon_sym_end] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [178] = {
        [anon_sym_end] = 512,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [179] = {
        [sym__terminator] = 320,
        [aux_sym_program_repeat1] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_RPAREN] = 320,
        [sym_comment] = 44,
        [sym__line_break] = 320,
        [anon_sym_SEMI] = 320,
    },
    [180] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [anon_sym_RPAREN] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [181] = {
        [sym__statement] = 514,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 516,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_LT] = 518,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [182] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 520,
        [anon_sym_end] = 522,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [183] = {
        [sym__terminator] = 340,
        [aux_sym_program_repeat1] = 340,
        [anon_sym_if] = 340,
        [anon_sym_while] = 340,
        [anon_sym_unless] = 340,
        [anon_sym_until] = 340,
        [anon_sym_RPAREN] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 340,
        [anon_sym_SEMI] = 340,
    },
    [184] = {
        [sym_identifier] = 524,
        [aux_sym_identifier_repeat1] = 344,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 346,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [185] = {
        [sym__statement] = 526,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_class_declaration_repeat1] = 528,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 530,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_COLON_COLON] = 354,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [186] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 532,
        [anon_sym_end] = 534,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [187] = {
        [sym__statement] = 536,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 534,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [188] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [anon_sym_if] = 364,
        [anon_sym_while] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_until] = 364,
        [anon_sym_RPAREN] = 364,
        [sym_comment] = 44,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [189] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 538,
        [anon_sym_end] = 540,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [190] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [191] = {
        [anon_sym_end] = 542,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [192] = {
        [sym__terminator] = 382,
        [aux_sym_program_repeat1] = 382,
        [anon_sym_if] = 382,
        [anon_sym_while] = 382,
        [anon_sym_unless] = 382,
        [anon_sym_until] = 382,
        [anon_sym_RPAREN] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 382,
        [anon_sym_SEMI] = 382,
    },
    [193] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [anon_sym_RPAREN] = 384,
        [sym_comment] = 44,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [194] = {
        [anon_sym_end] = 540,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [195] = {
        [anon_sym_end] = 530,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [196] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [anon_sym_RPAREN] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [197] = {
        [sym__statement] = 544,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__argument_declaration] = 546,
        [sym__argument_list] = 394,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [sym__terminator] = 396,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 548,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 400,
        [anon_sym_STAR] = 402,
        [anon_sym_AMP] = 402,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [198] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 552,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [199] = {
        [sym__statement] = 554,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 552,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [200] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [anon_sym_RPAREN] = 418,
        [sym_comment] = 44,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [201] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_end] = 558,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [202] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [anon_sym_RPAREN] = 478,
        [sym_comment] = 44,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [203] = {
        [anon_sym_end] = 560,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [204] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [anon_sym_if] = 482,
        [anon_sym_while] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_until] = 482,
        [anon_sym_RPAREN] = 482,
        [sym_comment] = 44,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [205] = {
        [sym__terminator] = 484,
        [aux_sym_program_repeat1] = 484,
        [anon_sym_if] = 484,
        [anon_sym_while] = 484,
        [anon_sym_unless] = 484,
        [anon_sym_until] = 484,
        [anon_sym_RPAREN] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [206] = {
        [anon_sym_end] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [207] = {
        [sym_identifier] = 196,
        [sym__function_name] = 218,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_PIPE] = 196,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 196,
        [sym__line_break] = 44,
    },
    [208] = {
        [sym__terminator] = 388,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_if] = 388,
        [anon_sym_while] = 388,
        [anon_sym_unless] = 388,
        [anon_sym_until] = 388,
        [anon_sym_RPAREN] = 388,
        [sym_comment] = 44,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [209] = {
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [anon_sym_if] = 488,
        [anon_sym_while] = 488,
        [anon_sym_unless] = 488,
        [anon_sym_until] = 488,
        [anon_sym_RPAREN] = 488,
        [sym_comment] = 44,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [210] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 272,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [anon_sym_RPAREN] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [211] = {
        [sym__statement] = 562,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_PIPE] = 564,
        [anon_sym_end] = 218,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [212] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 566,
        [anon_sym_end] = 568,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [213] = {
        [sym__statement] = 570,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 568,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [214] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_end] = 574,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [215] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [anon_sym_RPAREN] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [216] = {
        [anon_sym_end] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [217] = {
        [sym__terminator] = 508,
        [aux_sym_program_repeat1] = 508,
        [anon_sym_if] = 508,
        [anon_sym_while] = 508,
        [anon_sym_unless] = 508,
        [anon_sym_until] = 508,
        [anon_sym_RPAREN] = 508,
        [sym_comment] = 44,
        [sym__line_break] = 508,
        [anon_sym_SEMI] = 508,
    },
    [218] = {
        [sym__terminator] = 510,
        [aux_sym_program_repeat1] = 510,
        [anon_sym_if] = 510,
        [anon_sym_while] = 510,
        [anon_sym_unless] = 510,
        [anon_sym_until] = 510,
        [anon_sym_RPAREN] = 510,
        [sym_comment] = 44,
        [sym__line_break] = 510,
        [anon_sym_SEMI] = 510,
    },
    [219] = {
        [anon_sym_end] = 574,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [220] = {
        [anon_sym_RPAREN] = 578,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [221] = {
        [aux_sym__call_arguments_repeat1] = 220,
        [anon_sym_do] = 220,
        [anon_sym_COMMA] = 220,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [222] = {
        [aux_sym__call_arguments_repeat1] = 228,
        [anon_sym_do] = 228,
        [anon_sym_COMMA] = 228,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [223] = {
        [aux_sym__call_arguments_repeat1] = 272,
        [anon_sym_do] = 272,
        [anon_sym_COMMA] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [224] = {
        [anon_sym_do] = 580,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [225] = {
        [sym__argument] = 582,
        [sym__primary] = 148,
        [sym__variable] = 150,
        [sym_identifier] = 152,
        [aux_sym_identifier_repeat1] = 154,
        [anon_sym_LPAREN] = 158,
        [anon_sym_nil] = 152,
        [anon_sym_self] = 152,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 162,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [226] = {
        [aux_sym__call_arguments_repeat1] = 584,
        [anon_sym_do] = 586,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [227] = {
        [anon_sym_do] = 588,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [228] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 590,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 592,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [229] = {
        [anon_sym_RPAREN] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [230] = {
        [sym__terminator] = 220,
        [aux_sym_program_repeat1] = 220,
        [ts_builtin_sym_end] = 220,
        [anon_sym_if] = 220,
        [anon_sym_while] = 220,
        [anon_sym_unless] = 220,
        [anon_sym_until] = 220,
        [sym_comment] = 44,
        [sym__line_break] = 220,
        [anon_sym_SEMI] = 220,
    },
    [231] = {
        [sym__terminator] = 228,
        [aux_sym_program_repeat1] = 228,
        [ts_builtin_sym_end] = 228,
        [anon_sym_if] = 228,
        [anon_sym_while] = 228,
        [anon_sym_unless] = 228,
        [anon_sym_until] = 228,
        [sym_comment] = 44,
        [sym__line_break] = 228,
        [anon_sym_SEMI] = 228,
    },
    [232] = {
        [sym__statement] = 596,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 598,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [233] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 600,
        [anon_sym_end] = 602,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [234] = {
        [sym__terminator] = 286,
        [aux_sym_program_repeat1] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_if] = 286,
        [anon_sym_while] = 286,
        [anon_sym_unless] = 286,
        [anon_sym_until] = 286,
        [sym_comment] = 44,
        [sym__line_break] = 286,
        [anon_sym_SEMI] = 286,
    },
    [235] = {
        [anon_sym_end] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [236] = {
        [sym__terminator] = 320,
        [aux_sym_program_repeat1] = 320,
        [ts_builtin_sym_end] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [sym_comment] = 44,
        [sym__line_break] = 320,
        [anon_sym_SEMI] = 320,
    },
    [237] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 324,
        [ts_builtin_sym_end] = 324,
        [anon_sym_if] = 324,
        [anon_sym_while] = 324,
        [anon_sym_unless] = 324,
        [anon_sym_until] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 324,
        [anon_sym_SEMI] = 324,
    },
    [238] = {
        [sym__statement] = 606,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 608,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_LT] = 610,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [239] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 612,
        [anon_sym_end] = 614,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [240] = {
        [sym__terminator] = 340,
        [aux_sym_program_repeat1] = 340,
        [ts_builtin_sym_end] = 340,
        [anon_sym_if] = 340,
        [anon_sym_while] = 340,
        [anon_sym_unless] = 340,
        [anon_sym_until] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 340,
        [anon_sym_SEMI] = 340,
    },
    [241] = {
        [sym_identifier] = 616,
        [aux_sym_identifier_repeat1] = 344,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 346,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [242] = {
        [sym__statement] = 618,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_class_declaration_repeat1] = 620,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 622,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_COLON_COLON] = 354,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [243] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 624,
        [anon_sym_end] = 626,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [244] = {
        [sym__statement] = 628,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 626,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [245] = {
        [sym__terminator] = 364,
        [aux_sym_program_repeat1] = 364,
        [ts_builtin_sym_end] = 364,
        [anon_sym_if] = 364,
        [anon_sym_while] = 364,
        [anon_sym_unless] = 364,
        [anon_sym_until] = 364,
        [sym_comment] = 44,
        [sym__line_break] = 364,
        [anon_sym_SEMI] = 364,
    },
    [246] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 630,
        [anon_sym_end] = 632,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [247] = {
        [sym__terminator] = 378,
        [aux_sym_program_repeat1] = 378,
        [ts_builtin_sym_end] = 378,
        [anon_sym_if] = 378,
        [anon_sym_while] = 378,
        [anon_sym_unless] = 378,
        [anon_sym_until] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 378,
        [anon_sym_SEMI] = 378,
    },
    [248] = {
        [anon_sym_end] = 634,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [249] = {
        [sym__terminator] = 382,
        [aux_sym_program_repeat1] = 382,
        [ts_builtin_sym_end] = 382,
        [anon_sym_if] = 382,
        [anon_sym_while] = 382,
        [anon_sym_unless] = 382,
        [anon_sym_until] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 382,
        [anon_sym_SEMI] = 382,
    },
    [250] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [ts_builtin_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 44,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [251] = {
        [anon_sym_end] = 632,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [252] = {
        [anon_sym_end] = 622,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [253] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [254] = {
        [sym__statement] = 636,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__argument_declaration] = 638,
        [sym__argument_list] = 394,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [sym__terminator] = 396,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 640,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 400,
        [anon_sym_STAR] = 402,
        [anon_sym_AMP] = 402,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [255] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 644,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [256] = {
        [sym__statement] = 646,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 644,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [257] = {
        [sym__terminator] = 418,
        [aux_sym_program_repeat1] = 418,
        [ts_builtin_sym_end] = 418,
        [anon_sym_if] = 418,
        [anon_sym_while] = 418,
        [anon_sym_unless] = 418,
        [anon_sym_until] = 418,
        [sym_comment] = 44,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [258] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 648,
        [anon_sym_end] = 650,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [259] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [ts_builtin_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [sym_comment] = 44,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [260] = {
        [anon_sym_end] = 652,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [261] = {
        [sym__terminator] = 482,
        [aux_sym_program_repeat1] = 482,
        [ts_builtin_sym_end] = 482,
        [anon_sym_if] = 482,
        [anon_sym_while] = 482,
        [anon_sym_unless] = 482,
        [anon_sym_until] = 482,
        [sym_comment] = 44,
        [sym__line_break] = 482,
        [anon_sym_SEMI] = 482,
    },
    [262] = {
        [sym__terminator] = 484,
        [aux_sym_program_repeat1] = 484,
        [ts_builtin_sym_end] = 484,
        [anon_sym_if] = 484,
        [anon_sym_while] = 484,
        [anon_sym_unless] = 484,
        [anon_sym_until] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [263] = {
        [anon_sym_end] = 650,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [264] = {
        [sym_identifier] = 78,
        [sym__function_name] = 654,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 44,
    },
    [265] = {
        [sym__terminator] = 388,
        [aux_sym_program_repeat1] = 388,
        [ts_builtin_sym_end] = 388,
        [anon_sym_if] = 388,
        [anon_sym_while] = 388,
        [anon_sym_unless] = 388,
        [anon_sym_until] = 388,
        [sym_comment] = 44,
        [sym__line_break] = 388,
        [anon_sym_SEMI] = 388,
    },
    [266] = {
        [sym__terminator] = 226,
        [aux_sym_program_repeat1] = 226,
        [ts_builtin_sym_end] = 226,
        [anon_sym_if] = 226,
        [anon_sym_while] = 226,
        [anon_sym_unless] = 226,
        [anon_sym_until] = 226,
        [sym_comment] = 44,
        [sym__line_break] = 226,
        [anon_sym_SEMI] = 226,
    },
    [267] = {
        [sym__terminator] = 488,
        [aux_sym_program_repeat1] = 488,
        [ts_builtin_sym_end] = 488,
        [anon_sym_if] = 488,
        [anon_sym_while] = 488,
        [anon_sym_unless] = 488,
        [anon_sym_until] = 488,
        [sym_comment] = 44,
        [sym__line_break] = 488,
        [anon_sym_SEMI] = 488,
    },
    [268] = {
        [sym__terminator] = 272,
        [aux_sym_program_repeat1] = 272,
        [ts_builtin_sym_end] = 272,
        [anon_sym_if] = 272,
        [anon_sym_while] = 272,
        [anon_sym_unless] = 272,
        [anon_sym_until] = 272,
        [sym_comment] = 44,
        [sym__line_break] = 272,
        [anon_sym_SEMI] = 272,
    },
    [269] = {
        [sym__statement] = 656,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_PIPE] = 658,
        [anon_sym_end] = 654,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [270] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_end] = 662,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [271] = {
        [sym__statement] = 664,
        [sym__declaration] = 238,
        [sym_method_declaration] = 240,
        [sym_class_declaration] = 240,
        [sym_module_declaration] = 240,
        [sym__call] = 242,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 238,
        [sym__argument] = 244,
        [sym__primary] = 246,
        [sym__variable] = 248,
        [sym_identifier] = 250,
        [aux_sym_identifier_repeat1] = 252,
        [anon_sym_end] = 662,
        [anon_sym_undef] = 256,
        [anon_sym_alias] = 258,
        [anon_sym_def] = 260,
        [anon_sym_class] = 262,
        [anon_sym_module] = 264,
        [anon_sym_LPAREN] = 266,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 250,
        [anon_sym_self] = 250,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [272] = {
        [sym__terminator] = 274,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 668,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [273] = {
        [sym__terminator] = 504,
        [aux_sym_program_repeat1] = 504,
        [ts_builtin_sym_end] = 504,
        [anon_sym_if] = 504,
        [anon_sym_while] = 504,
        [anon_sym_unless] = 504,
        [anon_sym_until] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 504,
        [anon_sym_SEMI] = 504,
    },
    [274] = {
        [anon_sym_end] = 670,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [275] = {
        [sym__terminator] = 508,
        [aux_sym_program_repeat1] = 508,
        [ts_builtin_sym_end] = 508,
        [anon_sym_if] = 508,
        [anon_sym_while] = 508,
        [anon_sym_unless] = 508,
        [anon_sym_until] = 508,
        [sym_comment] = 44,
        [sym__line_break] = 508,
        [anon_sym_SEMI] = 508,
    },
    [276] = {
        [sym__terminator] = 510,
        [aux_sym_program_repeat1] = 510,
        [ts_builtin_sym_end] = 510,
        [anon_sym_if] = 510,
        [anon_sym_while] = 510,
        [anon_sym_unless] = 510,
        [anon_sym_until] = 510,
        [sym_comment] = 44,
        [sym__line_break] = 510,
        [anon_sym_SEMI] = 510,
    },
    [277] = {
        [anon_sym_end] = 668,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [278] = {
        [sym__statement] = 672,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym__call] = 10,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 6,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_undef] = 26,
        [anon_sym_alias] = 28,
        [anon_sym_def] = 30,
        [anon_sym_class] = 32,
        [anon_sym_module] = 34,
        [anon_sym_LPAREN] = 36,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [279] = {
        [ts_builtin_sym_end] = 674,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [280] = {
        [sym__expression] = 654,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_LPAREN] = 36,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [281] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 676,
        [ts_builtin_sym_end] = 232,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [282] = {
        [ts_builtin_sym_end] = 234,
        [sym_comment] = 44,
        [sym__line_break] = 44,
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
    [24] = {.count = 1}, REDUCE(sym_program, 0, 0),
    [26] = {.count = 1}, SHIFT(12, 0),
    [28] = {.count = 1}, SHIFT(13, 0),
    [30] = {.count = 1}, SHIFT(14, 0),
    [32] = {.count = 1}, SHIFT(15, 0),
    [34] = {.count = 1}, SHIFT(16, 0),
    [36] = {.count = 1}, SHIFT(17, 0),
    [38] = {.count = 1}, SHIFT(18, 0),
    [40] = {.count = 1}, SHIFT(19, 0),
    [42] = {.count = 1}, SHIFT(20, 0),
    [44] = {.count = 1}, SHIFT_EXTRA(),
    [46] = {.count = 1}, ACCEPT_INPUT(),
    [48] = {.count = 1}, SHIFT(278, 0),
    [50] = {.count = 1}, SHIFT(279, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(280, 0),
    [56] = {.count = 1}, SHIFT(53, 0),
    [58] = {.count = 1}, SHIFT(54, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(269, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [76] = {.count = 1}, SHIFT(268, 0),
    [78] = {.count = 1}, SHIFT(265, 0),
    [80] = {.count = 1}, SHIFT(267, 0),
    [82] = {.count = 1}, SHIFT(161, 0),
    [84] = {.count = 1}, SHIFT(264, 0),
    [86] = {.count = 1}, SHIFT(163, 0),
    [88] = {.count = 1}, SHIFT(164, 0),
    [90] = {.count = 1}, SHIFT(120, 0),
    [92] = {.count = 1}, SHIFT(254, 0),
    [94] = {.count = 1}, SHIFT(122, 0),
    [96] = {.count = 1}, SHIFT(123, 0),
    [98] = {.count = 1}, SHIFT(238, 0),
    [100] = {.count = 1}, SHIFT(96, 0),
    [102] = {.count = 1}, SHIFT(97, 0),
    [104] = {.count = 1}, SHIFT(232, 0),
    [106] = {.count = 1}, SHIFT(60, 0),
    [108] = {.count = 1}, SHIFT(61, 0),
    [110] = {.count = 1}, SHIFT(228, 0),
    [112] = {.count = 1}, SHIFT(33, 0),
    [114] = {.count = 1}, SHIFT(34, 0),
    [116] = {.count = 1}, SHIFT(35, 0),
    [118] = {.count = 1}, SHIFT(36, 0),
    [120] = {.count = 1}, SHIFT(37, 0),
    [122] = {.count = 1}, SHIFT(38, 0),
    [124] = {.count = 1}, SHIFT(39, 0),
    [126] = {.count = 1}, SHIFT(40, 0),
    [128] = {.count = 1}, SHIFT(41, 0),
    [130] = {.count = 1}, SHIFT(42, 0),
    [132] = {.count = 1}, SHIFT(43, 0),
    [134] = {.count = 1}, SHIFT(44, 0),
    [136] = {.count = 1}, SHIFT(45, 0),
    [138] = {.count = 1}, SHIFT(46, 0),
    [140] = {.count = 1}, SHIFT(47, 0),
    [142] = {.count = 1}, SHIFT(22, 0),
    [144] = {.count = 1}, SHIFT(23, 0),
    [146] = {.count = 1}, SHIFT(24, 0),
    [148] = {.count = 1}, SHIFT(25, 0),
    [150] = {.count = 1}, SHIFT(26, 0),
    [152] = {.count = 1}, SHIFT(27, 0),
    [154] = {.count = 1}, SHIFT(28, 0),
    [156] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [158] = {.count = 1}, SHIFT(29, 0),
    [160] = {.count = 1}, SHIFT(30, 0),
    [162] = {.count = 1}, SHIFT(31, 0),
    [164] = {.count = 1}, SHIFT(21, 0),
    [166] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [168] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [170] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [172] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [174] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [176] = {.count = 1}, SHIFT(224, 0),
    [178] = {.count = 1}, SHIFT(225, 0),
    [180] = {.count = 1}, SHIFT(223, 0),
    [182] = {.count = 1}, SHIFT(32, 0),
    [184] = {.count = 1}, SHIFT(49, 0),
    [186] = {.count = 1}, SHIFT(220, 0),
    [188] = {.count = 1}, SHIFT(51, 0),
    [190] = {.count = 1}, SHIFT(221, 0),
    [192] = {.count = 1}, SHIFT(211, 0),
    [194] = {.count = 1}, SHIFT(210, 0),
    [196] = {.count = 1}, SHIFT(208, 0),
    [198] = {.count = 1}, SHIFT(209, 0),
    [200] = {.count = 1}, SHIFT(207, 0),
    [202] = {.count = 1}, SHIFT(197, 0),
    [204] = {.count = 1}, SHIFT(181, 0),
    [206] = {.count = 1}, SHIFT(59, 0),
    [208] = {.count = 1}, SHIFT(48, 0),
    [210] = {.count = 1}, SHIFT(50, 0),
    [212] = {.count = 1}, SHIFT(52, 0),
    [214] = {.count = 1}, SHIFT(57, 0),
    [216] = {.count = 1}, SHIFT(56, 0),
    [218] = {.count = 1}, SHIFT(55, 0),
    [220] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [222] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [224] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [226] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [228] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [230] = {.count = 1}, SHIFT(58, 0),
    [232] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [234] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [236] = {.count = 1}, SHIFT(63, 0),
    [238] = {.count = 1}, SHIFT(64, 0),
    [240] = {.count = 1}, SHIFT(65, 0),
    [242] = {.count = 1}, SHIFT(66, 0),
    [244] = {.count = 1}, SHIFT(67, 0),
    [246] = {.count = 1}, SHIFT(68, 0),
    [248] = {.count = 1}, SHIFT(69, 0),
    [250] = {.count = 1}, SHIFT(70, 0),
    [252] = {.count = 1}, SHIFT(71, 0),
    [254] = {.count = 1}, SHIFT(72, 0),
    [256] = {.count = 1}, SHIFT(73, 0),
    [258] = {.count = 1}, SHIFT(74, 0),
    [260] = {.count = 1}, SHIFT(75, 0),
    [262] = {.count = 1}, SHIFT(76, 0),
    [264] = {.count = 1}, SHIFT(77, 0),
    [266] = {.count = 1}, SHIFT(78, 0),
    [268] = {.count = 1}, SHIFT(79, 0),
    [270] = {.count = 1}, SHIFT(62, 0),
    [272] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [274] = {.count = 1}, SHIFT(87, 0),
    [276] = {.count = 1}, SHIFT(178, 0),
    [278] = {.count = 1}, SHIFT(179, 0),
    [280] = {.count = 1}, SHIFT(90, 0),
    [282] = {.count = 1}, SHIFT(169, 0),
    [284] = {.count = 1}, SHIFT(168, 0),
    [286] = {.count = 1}, REDUCE(sym_module_declaration, 3, 0),
    [288] = {.count = 1}, SHIFT(166, 0),
    [290] = {.count = 1}, SHIFT(167, 0),
    [292] = {.count = 1}, SHIFT(162, 0),
    [294] = {.count = 1}, SHIFT(121, 0),
    [296] = {.count = 1}, SHIFT(95, 0),
    [298] = {.count = 1}, SHIFT(84, 0),
    [300] = {.count = 1}, SHIFT(80, 0),
    [302] = {.count = 1}, SHIFT(81, 0),
    [304] = {.count = 1}, SHIFT(82, 0),
    [306] = {.count = 1}, SHIFT(83, 0),
    [308] = {.count = 1}, SHIFT(85, 0),
    [310] = {.count = 1}, SHIFT(86, 0),
    [312] = {.count = 1}, SHIFT(88, 0),
    [314] = {.count = 1}, SHIFT(89, 0),
    [316] = {.count = 1}, SHIFT(93, 0),
    [318] = {.count = 1}, SHIFT(92, 0),
    [320] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [322] = {.count = 1}, SHIFT(91, 0),
    [324] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [326] = {.count = 1}, SHIFT(94, 0),
    [328] = {.count = 1}, SHIFT(99, 0),
    [330] = {.count = 1}, SHIFT(100, 0),
    [332] = {.count = 1}, SHIFT(101, 0),
    [334] = {.count = 1}, SHIFT(98, 0),
    [336] = {.count = 1}, SHIFT(118, 0),
    [338] = {.count = 1}, SHIFT(119, 0),
    [340] = {.count = 1}, REDUCE(sym_class_declaration, 3, 0),
    [342] = {.count = 1}, SHIFT(102, 0),
    [344] = {.count = 1}, SHIFT(103, 0),
    [346] = {.count = 1}, SHIFT(104, 0),
    [348] = {.count = 1}, SHIFT(106, 0),
    [350] = {.count = 1}, SHIFT(107, 0),
    [352] = {.count = 1}, SHIFT(108, 0),
    [354] = {.count = 1}, SHIFT(109, 0),
    [356] = {.count = 1}, SHIFT(105, 0),
    [358] = {.count = 1}, SHIFT(117, 0),
    [360] = {.count = 1}, SHIFT(113, 0),
    [362] = {.count = 1}, SHIFT(112, 0),
    [364] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [366] = {.count = 1}, SHIFT(110, 0),
    [368] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [370] = {.count = 1}, SHIFT(111, 0),
    [372] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [374] = {.count = 1}, SHIFT(114, 0),
    [376] = {.count = 1}, SHIFT(115, 0),
    [378] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [380] = {.count = 1}, SHIFT(116, 0),
    [382] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [384] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [386] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [388] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [390] = {.count = 1}, SHIFT(125, 0),
    [392] = {.count = 1}, SHIFT(126, 0),
    [394] = {.count = 1}, SHIFT(127, 0),
    [396] = {.count = 1}, REDUCE(sym__argument_list, 0, 0),
    [398] = {.count = 1}, SHIFT(128, 0),
    [400] = {.count = 1}, SHIFT(129, 0),
    [402] = {.count = 1}, SHIFT(130, 0),
    [404] = {.count = 1}, SHIFT(124, 0),
    [406] = {.count = 1}, SHIFT(160, 0),
    [408] = {.count = 1}, SHIFT(156, 0),
    [410] = {.count = 1}, SHIFT(155, 0),
    [412] = {.count = 1}, SHIFT(152, 0),
    [414] = {.count = 1}, SHIFT(153, 0),
    [416] = {.count = 1}, SHIFT(154, 0),
    [418] = {.count = 1}, REDUCE(sym_method_declaration, 3, 0),
    [420] = {.count = 1}, SHIFT(140, 0),
    [422] = {.count = 1}, SHIFT(141, 0),
    [424] = {.count = 1}, SHIFT(131, 0),
    [426] = {.count = 1}, SHIFT(132, 0),
    [428] = {.count = 1}, SHIFT(133, 0),
    [430] = {.count = 1}, REDUCE(sym__argument_list, 2, 0),
    [432] = {.count = 1}, SHIFT(135, 0),
    [434] = {.count = 1}, SHIFT(136, 0),
    [436] = {.count = 1}, SHIFT(134, 0),
    [438] = {.count = 1}, REDUCE(sym__argument_list, 3, 0),
    [440] = {.count = 1}, SHIFT(137, 0),
    [442] = {.count = 1}, SHIFT(138, 0),
    [444] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 3, 0),
    [446] = {.count = 1}, SHIFT(139, 0),
    [448] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 4, 0),
    [450] = {.count = 1}, SHIFT(151, 0),
    [452] = {.count = 1}, SHIFT(142, 0),
    [454] = {.count = 1}, SHIFT(143, 0),
    [456] = {.count = 1}, SHIFT(144, 0),
    [458] = {.count = 1}, SHIFT(146, 0),
    [460] = {.count = 1}, SHIFT(147, 0),
    [462] = {.count = 1}, SHIFT(145, 0),
    [464] = {.count = 1}, SHIFT(148, 0),
    [466] = {.count = 1}, SHIFT(149, 0),
    [468] = {.count = 1}, SHIFT(150, 0),
    [470] = {.count = 1}, REDUCE(sym__argument_declaration, 3, 0),
    [472] = {.count = 1}, REDUCE(sym__argument_declaration, 2, 0),
    [474] = {.count = 1}, SHIFT(157, 0),
    [476] = {.count = 1}, SHIFT(158, 0),
    [478] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [480] = {.count = 1}, SHIFT(159, 0),
    [482] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [484] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [486] = {.count = 1}, SHIFT(165, 0),
    [488] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [490] = {.count = 1}, SHIFT(170, 0),
    [492] = {.count = 1}, SHIFT(171, 0),
    [494] = {.count = 1}, SHIFT(177, 0),
    [496] = {.count = 1}, SHIFT(173, 0),
    [498] = {.count = 1}, SHIFT(172, 0),
    [500] = {.count = 1}, SHIFT(174, 0),
    [502] = {.count = 1}, SHIFT(175, 0),
    [504] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [506] = {.count = 1}, SHIFT(176, 0),
    [508] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [510] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [512] = {.count = 1}, SHIFT(180, 0),
    [514] = {.count = 1}, SHIFT(182, 0),
    [516] = {.count = 1}, SHIFT(183, 0),
    [518] = {.count = 1}, SHIFT(184, 0),
    [520] = {.count = 1}, SHIFT(195, 0),
    [522] = {.count = 1}, SHIFT(196, 0),
    [524] = {.count = 1}, SHIFT(185, 0),
    [526] = {.count = 1}, SHIFT(186, 0),
    [528] = {.count = 1}, SHIFT(187, 0),
    [530] = {.count = 1}, SHIFT(188, 0),
    [532] = {.count = 1}, SHIFT(194, 0),
    [534] = {.count = 1}, SHIFT(190, 0),
    [536] = {.count = 1}, SHIFT(189, 0),
    [538] = {.count = 1}, SHIFT(191, 0),
    [540] = {.count = 1}, SHIFT(192, 0),
    [542] = {.count = 1}, SHIFT(193, 0),
    [544] = {.count = 1}, SHIFT(198, 0),
    [546] = {.count = 1}, SHIFT(199, 0),
    [548] = {.count = 1}, SHIFT(200, 0),
    [550] = {.count = 1}, SHIFT(206, 0),
    [552] = {.count = 1}, SHIFT(202, 0),
    [554] = {.count = 1}, SHIFT(201, 0),
    [556] = {.count = 1}, SHIFT(203, 0),
    [558] = {.count = 1}, SHIFT(204, 0),
    [560] = {.count = 1}, SHIFT(205, 0),
    [562] = {.count = 1}, SHIFT(212, 0),
    [564] = {.count = 1}, SHIFT(213, 0),
    [566] = {.count = 1}, SHIFT(219, 0),
    [568] = {.count = 1}, SHIFT(215, 0),
    [570] = {.count = 1}, SHIFT(214, 0),
    [572] = {.count = 1}, SHIFT(216, 0),
    [574] = {.count = 1}, SHIFT(217, 0),
    [576] = {.count = 1}, SHIFT(218, 0),
    [578] = {.count = 1}, SHIFT(222, 0),
    [580] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [582] = {.count = 1}, SHIFT(226, 0),
    [584] = {.count = 1}, SHIFT(227, 0),
    [586] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [588] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [590] = {.count = 1}, SHIFT(229, 0),
    [592] = {.count = 1}, SHIFT(230, 0),
    [594] = {.count = 1}, SHIFT(231, 0),
    [596] = {.count = 1}, SHIFT(233, 0),
    [598] = {.count = 1}, SHIFT(234, 0),
    [600] = {.count = 1}, SHIFT(235, 0),
    [602] = {.count = 1}, SHIFT(236, 0),
    [604] = {.count = 1}, SHIFT(237, 0),
    [606] = {.count = 1}, SHIFT(239, 0),
    [608] = {.count = 1}, SHIFT(240, 0),
    [610] = {.count = 1}, SHIFT(241, 0),
    [612] = {.count = 1}, SHIFT(252, 0),
    [614] = {.count = 1}, SHIFT(253, 0),
    [616] = {.count = 1}, SHIFT(242, 0),
    [618] = {.count = 1}, SHIFT(243, 0),
    [620] = {.count = 1}, SHIFT(244, 0),
    [622] = {.count = 1}, SHIFT(245, 0),
    [624] = {.count = 1}, SHIFT(251, 0),
    [626] = {.count = 1}, SHIFT(247, 0),
    [628] = {.count = 1}, SHIFT(246, 0),
    [630] = {.count = 1}, SHIFT(248, 0),
    [632] = {.count = 1}, SHIFT(249, 0),
    [634] = {.count = 1}, SHIFT(250, 0),
    [636] = {.count = 1}, SHIFT(255, 0),
    [638] = {.count = 1}, SHIFT(256, 0),
    [640] = {.count = 1}, SHIFT(257, 0),
    [642] = {.count = 1}, SHIFT(263, 0),
    [644] = {.count = 1}, SHIFT(259, 0),
    [646] = {.count = 1}, SHIFT(258, 0),
    [648] = {.count = 1}, SHIFT(260, 0),
    [650] = {.count = 1}, SHIFT(261, 0),
    [652] = {.count = 1}, SHIFT(262, 0),
    [654] = {.count = 1}, SHIFT(266, 0),
    [656] = {.count = 1}, SHIFT(270, 0),
    [658] = {.count = 1}, SHIFT(271, 0),
    [660] = {.count = 1}, SHIFT(277, 0),
    [662] = {.count = 1}, SHIFT(273, 0),
    [664] = {.count = 1}, SHIFT(272, 0),
    [666] = {.count = 1}, SHIFT(274, 0),
    [668] = {.count = 1}, SHIFT(275, 0),
    [670] = {.count = 1}, SHIFT(276, 0),
    [672] = {.count = 1}, SHIFT(281, 0),
    [674] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [676] = {.count = 1}, SHIFT(282, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
