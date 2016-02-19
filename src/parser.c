#include "tree_sitter/parser.h"

#define STATE_COUNT 349
#define SYMBOL_COUNT 54

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_class_declaration,
    sym_module_declaration,
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
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_class,
    anon_sym_LT,
    anon_sym_COLON_COLON,
    anon_sym_module,
    anon_sym_COMMA,
    anon_sym_STAR,
    anon_sym_AMP,
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
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_class] = "class",
    [anon_sym_LT] = "<",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_module] = "module",
    [anon_sym_COMMA] = ",",
    [anon_sym_STAR] = "*",
    [anon_sym_AMP] = "&",
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
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_class] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_module] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
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
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(91);
            if (lookahead == 'u')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(102);
            LEX_ERROR();
        case 121:
            if (lookahead == 'n')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'd')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            ACCEPT_TOKEN(anon_sym_end);
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
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
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
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 127:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
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
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(16);
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
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
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
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(5);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(14);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
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
    [16] = 113,
    [17] = 113,
    [18] = 114,
    [19] = 113,
    [20] = 90,
    [21] = 110,
    [22] = 107,
    [23] = 107,
    [24] = 116,
    [25] = 116,
    [26] = 116,
    [27] = 116,
    [28] = 110,
    [29] = 112,
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
    [45] = 113,
    [46] = 113,
    [47] = 118,
    [48] = 119,
    [49] = 110,
    [50] = 119,
    [51] = 119,
    [52] = 120,
    [53] = 120,
    [54] = 120,
    [55] = 107,
    [56] = 120,
    [57] = 120,
    [58] = 120,
    [59] = 120,
    [60] = 110,
    [61] = 118,
    [62] = 111,
    [63] = 111,
    [64] = 111,
    [65] = 112,
    [66] = 113,
    [67] = 113,
    [68] = 120,
    [69] = 119,
    [70] = 120,
    [71] = 120,
    [72] = 112,
    [73] = 124,
    [74] = 120,
    [75] = 125,
    [76] = 127,
    [77] = 112,
    [78] = 120,
    [79] = 120,
    [80] = 120,
    [81] = 124,
    [82] = 128,
    [83] = 110,
    [84] = 128,
    [85] = 128,
    [86] = 120,
    [87] = 120,
    [88] = 113,
    [89] = 129,
    [90] = 110,
    [91] = 129,
    [92] = 129,
    [93] = 120,
    [94] = 119,
    [95] = 120,
    [96] = 113,
    [97] = 129,
    [98] = 119,
    [99] = 120,
    [100] = 120,
    [101] = 124,
    [102] = 120,
    [103] = 120,
    [104] = 124,
    [105] = 124,
    [106] = 120,
    [107] = 118,
    [108] = 112,
    [109] = 130,
    [110] = 125,
    [111] = 120,
    [112] = 118,
    [113] = 120,
    [114] = 118,
    [115] = 130,
    [116] = 131,
    [117] = 131,
    [118] = 110,
    [119] = 131,
    [120] = 131,
    [121] = 132,
    [122] = 133,
    [123] = 134,
    [124] = 110,
    [125] = 135,
    [126] = 113,
    [127] = 113,
    [128] = 133,
    [129] = 136,
    [130] = 134,
    [131] = 132,
    [132] = 110,
    [133] = 132,
    [134] = 132,
    [135] = 132,
    [136] = 133,
    [137] = 132,
    [138] = 137,
    [139] = 110,
    [140] = 137,
    [141] = 137,
    [142] = 113,
    [143] = 132,
    [144] = 132,
    [145] = 130,
    [146] = 133,
    [147] = 130,
    [148] = 113,
    [149] = 113,
    [150] = 138,
    [151] = 130,
    [152] = 132,
    [153] = 130,
    [154] = 137,
    [155] = 113,
    [156] = 132,
    [157] = 130,
    [158] = 130,
    [159] = 139,
    [160] = 113,
    [161] = 113,
    [162] = 113,
    [163] = 132,
    [164] = 130,
    [165] = 137,
    [166] = 113,
    [167] = 132,
    [168] = 130,
    [169] = 133,
    [170] = 139,
    [171] = 113,
    [172] = 137,
    [173] = 113,
    [174] = 132,
    [175] = 130,
    [176] = 119,
    [177] = 120,
    [178] = 120,
    [179] = 124,
    [180] = 120,
    [181] = 120,
    [182] = 133,
    [183] = 120,
    [184] = 120,
    [185] = 124,
    [186] = 120,
    [187] = 132,
    [188] = 139,
    [189] = 113,
    [190] = 113,
    [191] = 132,
    [192] = 132,
    [193] = 137,
    [194] = 113,
    [195] = 132,
    [196] = 132,
    [197] = 113,
    [198] = 137,
    [199] = 113,
    [200] = 132,
    [201] = 132,
    [202] = 119,
    [203] = 134,
    [204] = 119,
    [205] = 120,
    [206] = 124,
    [207] = 111,
    [208] = 111,
    [209] = 110,
    [210] = 111,
    [211] = 111,
    [212] = 120,
    [213] = 120,
    [214] = 120,
    [215] = 140,
    [216] = 120,
    [217] = 119,
    [218] = 120,
    [219] = 120,
    [220] = 124,
    [221] = 120,
    [222] = 120,
    [223] = 124,
    [224] = 124,
    [225] = 118,
    [226] = 118,
    [227] = 128,
    [228] = 120,
    [229] = 118,
    [230] = 113,
    [231] = 129,
    [232] = 120,
    [233] = 119,
    [234] = 118,
    [235] = 120,
    [236] = 118,
    [237] = 124,
    [238] = 118,
    [239] = 118,
    [240] = 124,
    [241] = 124,
    [242] = 118,
    [243] = 118,
    [244] = 130,
    [245] = 118,
    [246] = 118,
    [247] = 131,
    [248] = 132,
    [249] = 134,
    [250] = 135,
    [251] = 130,
    [252] = 119,
    [253] = 120,
    [254] = 118,
    [255] = 124,
    [256] = 118,
    [257] = 118,
    [258] = 120,
    [259] = 118,
    [260] = 124,
    [261] = 118,
    [262] = 119,
    [263] = 120,
    [264] = 124,
    [265] = 111,
    [266] = 118,
    [267] = 118,
    [268] = 118,
    [269] = 140,
    [270] = 120,
    [271] = 119,
    [272] = 120,
    [273] = 118,
    [274] = 124,
    [275] = 118,
    [276] = 118,
    [277] = 124,
    [278] = 130,
    [279] = 116,
    [280] = 116,
    [281] = 116,
    [282] = 107,
    [283] = 125,
    [284] = 116,
    [285] = 107,
    [286] = 119,
    [287] = 120,
    [288] = 90,
    [289] = 124,
    [290] = 90,
    [291] = 90,
    [292] = 128,
    [293] = 120,
    [294] = 90,
    [295] = 113,
    [296] = 129,
    [297] = 120,
    [298] = 119,
    [299] = 90,
    [300] = 120,
    [301] = 90,
    [302] = 124,
    [303] = 90,
    [304] = 90,
    [305] = 124,
    [306] = 124,
    [307] = 90,
    [308] = 118,
    [309] = 130,
    [310] = 90,
    [311] = 90,
    [312] = 131,
    [313] = 132,
    [314] = 134,
    [315] = 135,
    [316] = 130,
    [317] = 119,
    [318] = 120,
    [319] = 90,
    [320] = 124,
    [321] = 90,
    [322] = 90,
    [323] = 120,
    [324] = 90,
    [325] = 124,
    [326] = 90,
    [327] = 119,
    [328] = 120,
    [329] = 124,
    [330] = 111,
    [331] = 90,
    [332] = 90,
    [333] = 90,
    [334] = 90,
    [335] = 140,
    [336] = 120,
    [337] = 119,
    [338] = 120,
    [339] = 90,
    [340] = 124,
    [341] = 90,
    [342] = 90,
    [343] = 124,
    [344] = 112,
    [345] = 89,
    [346] = 125,
    [347] = 90,
    [348] = 89,
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
        [anon_sym_LPAREN] = 32,
        [anon_sym_class] = 34,
        [anon_sym_module] = 36,
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
        [sym__statement] = 98,
        [sym__declaration] = 100,
        [sym_method_declaration] = 102,
        [sym_class_declaration] = 102,
        [sym_module_declaration] = 102,
        [sym__call] = 104,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 100,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_undef] = 116,
        [anon_sym_alias] = 118,
        [anon_sym_def] = 120,
        [anon_sym_LPAREN] = 122,
        [anon_sym_class] = 124,
        [anon_sym_module] = 126,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [16] = {
        [sym_identifier] = 130,
        [aux_sym_identifier_repeat1] = 132,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [17] = {
        [sym_identifier] = 136,
        [aux_sym_identifier_repeat1] = 138,
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
        [sym__declaration] = 100,
        [sym_method_declaration] = 102,
        [sym_class_declaration] = 102,
        [sym_module_declaration] = 102,
        [sym__call] = 104,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 100,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_undef] = 116,
        [anon_sym_alias] = 118,
        [anon_sym_def] = 120,
        [anon_sym_LPAREN] = 122,
        [anon_sym_class] = 124,
        [anon_sym_module] = 126,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
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
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_PIPE] = 196,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
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
        [sym__statement] = 204,
        [sym__declaration] = 100,
        [sym_method_declaration] = 102,
        [sym_class_declaration] = 102,
        [sym_module_declaration] = 102,
        [sym__call] = 104,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 100,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_undef] = 116,
        [anon_sym_alias] = 118,
        [anon_sym_def] = 120,
        [anon_sym_LPAREN] = 122,
        [anon_sym_class] = 124,
        [anon_sym_module] = 126,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [45] = {
        [sym_identifier] = 206,
        [aux_sym_identifier_repeat1] = 132,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [46] = {
        [sym_identifier] = 208,
        [aux_sym_identifier_repeat1] = 138,
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
        [sym__statement] = 210,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 228,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [49] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 244,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [50] = {
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
        [anon_sym_LPAREN] = 168,
        [anon_sym_class] = 168,
        [anon_sym_module] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [51] = {
        [sym__statement] = 246,
        [sym__declaration] = 246,
        [sym_method_declaration] = 246,
        [sym_class_declaration] = 246,
        [sym_module_declaration] = 246,
        [sym__call] = 246,
        [sym__command] = 246,
        [sym__function_call] = 246,
        [sym__expression] = 246,
        [sym__argument] = 246,
        [sym__primary] = 246,
        [sym__variable] = 246,
        [sym_identifier] = 246,
        [aux_sym_identifier_repeat1] = 246,
        [anon_sym_end] = 246,
        [anon_sym_undef] = 246,
        [anon_sym_alias] = 246,
        [anon_sym_def] = 246,
        [anon_sym_LPAREN] = 246,
        [anon_sym_class] = 246,
        [anon_sym_module] = 246,
        [anon_sym_super] = 246,
        [anon_sym_nil] = 246,
        [anon_sym_self] = 246,
        [anon_sym_AT] = 246,
        [anon_sym_DOLLAR] = 246,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [52] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 250,
        [anon_sym_end] = 252,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [53] = {
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
    [54] = {
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
    [55] = {
        [anon_sym_do] = 256,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [56] = {
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
    [57] = {
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
    [58] = {
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
    [59] = {
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
    [60] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 258,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [61] = {
        [sym__terminator] = 260,
        [aux_sym_program_repeat1] = 260,
        [anon_sym_if] = 260,
        [anon_sym_while] = 260,
        [anon_sym_unless] = 260,
        [anon_sym_until] = 260,
        [anon_sym_RPAREN] = 260,
        [sym_comment] = 44,
        [sym__line_break] = 260,
        [anon_sym_SEMI] = 260,
    },
    [62] = {
        [sym_identifier] = 262,
        [sym__function_name] = 264,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_PIPE] = 262,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 262,
        [sym__line_break] = 44,
    },
    [63] = {
        [sym_identifier] = 82,
        [sym__function_name] = 266,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_PIPE] = 82,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 82,
        [sym__line_break] = 44,
    },
    [64] = {
        [sym_identifier] = 90,
        [sym__function_name] = 268,
        [aux_sym_identifier_repeat1] = 94,
        [anon_sym_PIPE] = 90,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 90,
        [sym__line_break] = 44,
    },
    [65] = {
        [sym__statement] = 270,
        [sym__declaration] = 100,
        [sym_method_declaration] = 102,
        [sym_class_declaration] = 102,
        [sym_module_declaration] = 102,
        [sym__call] = 104,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 100,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_undef] = 116,
        [anon_sym_alias] = 118,
        [anon_sym_def] = 120,
        [anon_sym_LPAREN] = 122,
        [anon_sym_class] = 124,
        [anon_sym_module] = 126,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [66] = {
        [sym_identifier] = 272,
        [aux_sym_identifier_repeat1] = 132,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [67] = {
        [sym_identifier] = 274,
        [aux_sym_identifier_repeat1] = 138,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [68] = {
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
    [69] = {
        [sym__statement] = 276,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 278,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [70] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_end] = 282,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [71] = {
        [sym__terminator] = 260,
        [aux_sym_program_repeat1] = 260,
        [anon_sym_end] = 260,
        [anon_sym_if] = 260,
        [anon_sym_while] = 260,
        [anon_sym_unless] = 260,
        [anon_sym_until] = 260,
        [sym_comment] = 44,
        [sym__line_break] = 260,
        [anon_sym_SEMI] = 260,
    },
    [72] = {
        [sym__statement] = 284,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [73] = {
        [anon_sym_end] = 286,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [74] = {
        [sym__terminator] = 288,
        [aux_sym_program_repeat1] = 288,
        [anon_sym_end] = 288,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 288,
        [anon_sym_SEMI] = 288,
    },
    [75] = {
        [sym__expression] = 290,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_LPAREN] = 236,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [76] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_class_declaration] = 292,
        [sym_module_declaration] = 292,
        [sym__call] = 292,
        [sym__command] = 292,
        [sym__function_call] = 292,
        [sym__expression] = 292,
        [sym__argument] = 292,
        [sym__primary] = 292,
        [sym__variable] = 292,
        [sym_identifier] = 292,
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [aux_sym_identifier_repeat1] = 292,
        [ts_builtin_sym_end] = 294,
        [anon_sym_end] = 294,
        [anon_sym_undef] = 292,
        [anon_sym_alias] = 292,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [anon_sym_def] = 292,
        [anon_sym_LPAREN] = 292,
        [anon_sym_RPAREN] = 294,
        [anon_sym_class] = 292,
        [anon_sym_module] = 292,
        [anon_sym_super] = 292,
        [anon_sym_nil] = 292,
        [anon_sym_self] = 292,
        [anon_sym_AT] = 292,
        [anon_sym_DOLLAR] = 292,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 294,
    },
    [77] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_class_declaration] = 292,
        [sym_module_declaration] = 292,
        [sym__call] = 292,
        [sym__command] = 292,
        [sym__function_call] = 292,
        [sym__expression] = 292,
        [sym__argument] = 292,
        [sym__primary] = 292,
        [sym__variable] = 292,
        [sym_identifier] = 292,
        [aux_sym_identifier_repeat1] = 292,
        [anon_sym_undef] = 292,
        [anon_sym_alias] = 292,
        [anon_sym_def] = 292,
        [anon_sym_LPAREN] = 292,
        [anon_sym_class] = 292,
        [anon_sym_module] = 292,
        [anon_sym_super] = 292,
        [anon_sym_nil] = 292,
        [anon_sym_self] = 292,
        [anon_sym_AT] = 292,
        [anon_sym_DOLLAR] = 292,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [78] = {
        [sym__terminator] = 296,
        [aux_sym_program_repeat1] = 296,
        [anon_sym_end] = 296,
        [anon_sym_if] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [sym_comment] = 44,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [79] = {
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [anon_sym_end] = 298,
        [anon_sym_if] = 298,
        [anon_sym_while] = 298,
        [anon_sym_unless] = 298,
        [anon_sym_until] = 298,
        [sym_comment] = 44,
        [sym__line_break] = 298,
        [anon_sym_SEMI] = 298,
    },
    [80] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 300,
        [anon_sym_end] = 302,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [81] = {
        [anon_sym_end] = 304,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [82] = {
        [sym__statement] = 306,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 308,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_LT] = 310,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [83] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 312,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [84] = {
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
        [anon_sym_LPAREN] = 168,
        [anon_sym_class] = 168,
        [anon_sym_LT] = 168,
        [anon_sym_module] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [85] = {
        [sym__statement] = 246,
        [sym__declaration] = 246,
        [sym_method_declaration] = 246,
        [sym_class_declaration] = 246,
        [sym_module_declaration] = 246,
        [sym__call] = 246,
        [sym__command] = 246,
        [sym__function_call] = 246,
        [sym__expression] = 246,
        [sym__argument] = 246,
        [sym__primary] = 246,
        [sym__variable] = 246,
        [sym_identifier] = 246,
        [aux_sym_identifier_repeat1] = 246,
        [anon_sym_end] = 246,
        [anon_sym_undef] = 246,
        [anon_sym_alias] = 246,
        [anon_sym_def] = 246,
        [anon_sym_LPAREN] = 246,
        [anon_sym_class] = 246,
        [anon_sym_LT] = 246,
        [anon_sym_module] = 246,
        [anon_sym_super] = 246,
        [anon_sym_nil] = 246,
        [anon_sym_self] = 246,
        [anon_sym_AT] = 246,
        [anon_sym_DOLLAR] = 246,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [86] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 314,
        [anon_sym_end] = 316,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [87] = {
        [sym__terminator] = 318,
        [aux_sym_program_repeat1] = 318,
        [anon_sym_end] = 318,
        [anon_sym_if] = 318,
        [anon_sym_while] = 318,
        [anon_sym_unless] = 318,
        [anon_sym_until] = 318,
        [sym_comment] = 44,
        [sym__line_break] = 318,
        [anon_sym_SEMI] = 318,
    },
    [88] = {
        [sym_identifier] = 320,
        [aux_sym_identifier_repeat1] = 322,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [89] = {
        [sym__statement] = 326,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_class_declaration_repeat1] = 328,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 330,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_COLON_COLON] = 332,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [90] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [91] = {
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
        [anon_sym_LPAREN] = 168,
        [anon_sym_class] = 168,
        [anon_sym_COLON_COLON] = 168,
        [anon_sym_module] = 168,
        [anon_sym_super] = 168,
        [anon_sym_nil] = 168,
        [anon_sym_self] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [92] = {
        [sym__statement] = 246,
        [sym__declaration] = 246,
        [sym_method_declaration] = 246,
        [sym_class_declaration] = 246,
        [sym_module_declaration] = 246,
        [sym__call] = 246,
        [sym__command] = 246,
        [sym__function_call] = 246,
        [sym__expression] = 246,
        [sym__argument] = 246,
        [sym__primary] = 246,
        [sym__variable] = 246,
        [sym_identifier] = 246,
        [aux_sym_class_declaration_repeat1] = 246,
        [aux_sym_identifier_repeat1] = 246,
        [anon_sym_end] = 246,
        [anon_sym_undef] = 246,
        [anon_sym_alias] = 246,
        [anon_sym_def] = 246,
        [anon_sym_LPAREN] = 246,
        [anon_sym_class] = 246,
        [anon_sym_COLON_COLON] = 246,
        [anon_sym_module] = 246,
        [anon_sym_super] = 246,
        [anon_sym_nil] = 246,
        [anon_sym_self] = 246,
        [anon_sym_AT] = 246,
        [anon_sym_DOLLAR] = 246,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [93] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 338,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [94] = {
        [sym__statement] = 340,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 338,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [95] = {
        [sym__terminator] = 342,
        [aux_sym_program_repeat1] = 342,
        [anon_sym_end] = 342,
        [anon_sym_if] = 342,
        [anon_sym_while] = 342,
        [anon_sym_unless] = 342,
        [anon_sym_until] = 342,
        [sym_comment] = 44,
        [sym__line_break] = 342,
        [anon_sym_SEMI] = 342,
    },
    [96] = {
        [sym_identifier] = 344,
        [aux_sym_identifier_repeat1] = 322,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [97] = {
        [sym__statement] = 346,
        [sym__declaration] = 346,
        [sym_method_declaration] = 346,
        [sym_class_declaration] = 346,
        [sym_module_declaration] = 346,
        [sym__call] = 346,
        [sym__command] = 346,
        [sym__function_call] = 346,
        [sym__expression] = 346,
        [sym__argument] = 346,
        [sym__primary] = 346,
        [sym__variable] = 346,
        [sym_identifier] = 346,
        [aux_sym_class_declaration_repeat1] = 348,
        [aux_sym_identifier_repeat1] = 346,
        [anon_sym_end] = 346,
        [anon_sym_undef] = 346,
        [anon_sym_alias] = 346,
        [anon_sym_def] = 346,
        [anon_sym_LPAREN] = 346,
        [anon_sym_class] = 346,
        [anon_sym_COLON_COLON] = 332,
        [anon_sym_module] = 346,
        [anon_sym_super] = 346,
        [anon_sym_nil] = 346,
        [anon_sym_self] = 346,
        [anon_sym_AT] = 346,
        [anon_sym_DOLLAR] = 346,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 346,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [98] = {
        [sym__statement] = 350,
        [sym__declaration] = 350,
        [sym_method_declaration] = 350,
        [sym_class_declaration] = 350,
        [sym_module_declaration] = 350,
        [sym__call] = 350,
        [sym__command] = 350,
        [sym__function_call] = 350,
        [sym__expression] = 350,
        [sym__argument] = 350,
        [sym__primary] = 350,
        [sym__variable] = 350,
        [sym_identifier] = 350,
        [aux_sym_identifier_repeat1] = 350,
        [anon_sym_end] = 350,
        [anon_sym_undef] = 350,
        [anon_sym_alias] = 350,
        [anon_sym_def] = 350,
        [anon_sym_LPAREN] = 350,
        [anon_sym_class] = 350,
        [anon_sym_module] = 350,
        [anon_sym_super] = 350,
        [anon_sym_nil] = 350,
        [anon_sym_self] = 350,
        [anon_sym_AT] = 350,
        [anon_sym_DOLLAR] = 350,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 350,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [99] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 352,
        [anon_sym_end] = 354,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [100] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_if] = 356,
        [anon_sym_while] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_until] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [101] = {
        [anon_sym_end] = 358,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [102] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [sym_comment] = 44,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [103] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_end] = 362,
        [anon_sym_if] = 362,
        [anon_sym_while] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_until] = 362,
        [sym_comment] = 44,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [104] = {
        [anon_sym_end] = 354,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [105] = {
        [anon_sym_end] = 330,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [106] = {
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
    [107] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 368,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [108] = {
        [sym__statement] = 370,
        [sym__declaration] = 100,
        [sym_method_declaration] = 102,
        [sym_class_declaration] = 102,
        [sym_module_declaration] = 102,
        [sym__call] = 104,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 100,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_undef] = 116,
        [anon_sym_alias] = 118,
        [anon_sym_def] = 120,
        [anon_sym_LPAREN] = 122,
        [anon_sym_class] = 124,
        [anon_sym_module] = 126,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [109] = {
        [anon_sym_RPAREN] = 372,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [110] = {
        [sym__expression] = 374,
        [sym__argument] = 106,
        [sym__primary] = 108,
        [sym__variable] = 110,
        [sym_identifier] = 112,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_LPAREN] = 122,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [111] = {
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_end] = 376,
        [anon_sym_if] = 376,
        [anon_sym_while] = 376,
        [anon_sym_unless] = 376,
        [anon_sym_until] = 376,
        [sym_comment] = 44,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [112] = {
        [sym__terminator] = 296,
        [aux_sym_program_repeat1] = 296,
        [anon_sym_if] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [anon_sym_RPAREN] = 296,
        [sym_comment] = 44,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
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
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [115] = {
        [anon_sym_RPAREN] = 304,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [116] = {
        [sym__argument_list] = 382,
        [sym_identifier] = 382,
        [sym__terminator] = 382,
        [aux_sym_identifier_repeat1] = 382,
        [anon_sym_LPAREN] = 382,
        [anon_sym_STAR] = 382,
        [anon_sym_AMP] = 382,
        [anon_sym_AT] = 382,
        [anon_sym_DOLLAR] = 382,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 382,
        [anon_sym_SEMI] = 382,
    },
    [117] = {
        [sym__argument_list] = 384,
        [sym_identifier] = 386,
        [sym__terminator] = 388,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_LPAREN] = 392,
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 396,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 402,
    },
    [118] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 404,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [119] = {
        [sym__argument_list] = 168,
        [sym_identifier] = 168,
        [sym__terminator] = 168,
        [aux_sym_identifier_repeat1] = 168,
        [anon_sym_LPAREN] = 168,
        [anon_sym_STAR] = 168,
        [anon_sym_AMP] = 168,
        [anon_sym_AT] = 168,
        [anon_sym_DOLLAR] = 168,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [120] = {
        [sym__argument_list] = 246,
        [sym_identifier] = 246,
        [sym__terminator] = 246,
        [aux_sym_identifier_repeat1] = 246,
        [anon_sym_LPAREN] = 246,
        [anon_sym_STAR] = 246,
        [anon_sym_AMP] = 246,
        [anon_sym_AT] = 246,
        [anon_sym_DOLLAR] = 246,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [121] = {
        [sym__terminator] = 406,
        [sym_comment] = 44,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 410,
    },
    [122] = {
        [sym__terminator] = 412,
        [aux_sym__argument_list_repeat1] = 414,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 418,
        [anon_sym_AMP] = 420,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [123] = {
        [sym__statement] = 426,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [sym__terminator] = 428,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 430,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [124] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 432,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [125] = {
        [sym__argument_list] = 434,
        [sym_identifier] = 436,
        [sym__terminator] = 438,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_STAR] = 440,
        [anon_sym_AMP] = 442,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [126] = {
        [sym_identifier] = 448,
        [aux_sym_identifier_repeat1] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [127] = {
        [sym_identifier] = 454,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [128] = {
        [sym__terminator] = 168,
        [aux_sym__argument_list_repeat1] = 168,
        [anon_sym_COMMA] = 168,
        [anon_sym_STAR] = 168,
        [anon_sym_AMP] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [129] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_class_declaration] = 292,
        [sym_module_declaration] = 292,
        [sym__argument_list] = 294,
        [sym__call] = 292,
        [sym__command] = 292,
        [sym__function_call] = 292,
        [sym__expression] = 292,
        [sym__argument] = 292,
        [sym__primary] = 292,
        [sym__variable] = 292,
        [sym_identifier] = 292,
        [sym__terminator] = 292,
        [aux_sym_identifier_repeat1] = 292,
        [anon_sym_end] = 292,
        [anon_sym_undef] = 292,
        [anon_sym_alias] = 292,
        [anon_sym_def] = 292,
        [anon_sym_LPAREN] = 292,
        [anon_sym_class] = 292,
        [anon_sym_module] = 292,
        [anon_sym_STAR] = 294,
        [anon_sym_AMP] = 294,
        [anon_sym_super] = 292,
        [anon_sym_nil] = 292,
        [anon_sym_self] = 292,
        [anon_sym_AT] = 292,
        [anon_sym_DOLLAR] = 292,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 292,
    },
    [130] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_class_declaration] = 292,
        [sym_module_declaration] = 292,
        [sym__call] = 292,
        [sym__command] = 292,
        [sym__function_call] = 292,
        [sym__expression] = 292,
        [sym__argument] = 292,
        [sym__primary] = 292,
        [sym__variable] = 292,
        [sym_identifier] = 292,
        [sym__terminator] = 292,
        [aux_sym_identifier_repeat1] = 292,
        [anon_sym_end] = 292,
        [anon_sym_undef] = 292,
        [anon_sym_alias] = 292,
        [anon_sym_def] = 292,
        [anon_sym_LPAREN] = 292,
        [anon_sym_class] = 292,
        [anon_sym_module] = 292,
        [anon_sym_super] = 292,
        [anon_sym_nil] = 292,
        [anon_sym_self] = 292,
        [anon_sym_AT] = 292,
        [anon_sym_DOLLAR] = 292,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 292,
    },
    [131] = {
        [sym__terminator] = 460,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [132] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [133] = {
        [sym__terminator] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [134] = {
        [sym__terminator] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [135] = {
        [sym__terminator] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [136] = {
        [sym__terminator] = 292,
        [aux_sym__argument_list_repeat1] = 294,
        [anon_sym_COMMA] = 294,
        [anon_sym_STAR] = 294,
        [anon_sym_AMP] = 294,
        [sym_comment] = 44,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 292,
    },
    [137] = {
        [sym__terminator] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 292,
        [anon_sym_SEMI] = 292,
    },
    [138] = {
        [sym__terminator] = 460,
        [anon_sym_AMP] = 466,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [139] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [140] = {
        [sym__terminator] = 168,
        [anon_sym_AMP] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [141] = {
        [sym__terminator] = 246,
        [anon_sym_AMP] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [142] = {
        [sym_identifier] = 470,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [143] = {
        [sym__terminator] = 472,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [144] = {
        [sym__terminator] = 474,
        [sym_comment] = 44,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [145] = {
        [anon_sym_RPAREN] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [146] = {
        [sym__terminator] = 478,
        [aux_sym__argument_list_repeat1] = 480,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 482,
        [anon_sym_AMP] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [147] = {
        [anon_sym_RPAREN] = 428,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [148] = {
        [sym_identifier] = 486,
        [aux_sym_identifier_repeat1] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [149] = {
        [sym_identifier] = 488,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [150] = {
        [sym__argument_list] = 294,
        [sym_identifier] = 294,
        [sym__terminator] = 294,
        [aux_sym__argument_list_repeat1] = 294,
        [aux_sym_identifier_repeat1] = 294,
        [anon_sym_RPAREN] = 292,
        [anon_sym_COMMA] = 294,
        [anon_sym_STAR] = 294,
        [anon_sym_AMP] = 294,
        [anon_sym_AT] = 294,
        [anon_sym_DOLLAR] = 294,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 294,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 294,
    },
    [151] = {
        [anon_sym_RPAREN] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [152] = {
        [sym__terminator] = 490,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [153] = {
        [anon_sym_RPAREN] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [154] = {
        [sym__terminator] = 490,
        [anon_sym_AMP] = 492,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [155] = {
        [sym_identifier] = 494,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [156] = {
        [sym__terminator] = 496,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [157] = {
        [anon_sym_RPAREN] = 474,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [158] = {
        [anon_sym_RPAREN] = 498,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [159] = {
        [sym__terminator] = 490,
        [anon_sym_STAR] = 500,
        [anon_sym_AMP] = 492,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [160] = {
        [sym_identifier] = 502,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [161] = {
        [sym_identifier] = 504,
        [aux_sym_identifier_repeat1] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [162] = {
        [sym_identifier] = 506,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [163] = {
        [sym__terminator] = 508,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [164] = {
        [anon_sym_RPAREN] = 510,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [165] = {
        [sym__terminator] = 508,
        [anon_sym_AMP] = 512,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [166] = {
        [sym_identifier] = 514,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [167] = {
        [sym__terminator] = 516,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [168] = {
        [anon_sym_RPAREN] = 518,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [169] = {
        [sym__terminator] = 520,
        [aux_sym__argument_list_repeat1] = 522,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 520,
        [anon_sym_AMP] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 520,
        [anon_sym_SEMI] = 520,
    },
    [170] = {
        [sym__terminator] = 524,
        [anon_sym_STAR] = 524,
        [anon_sym_AMP] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [171] = {
        [sym_identifier] = 526,
        [aux_sym_identifier_repeat1] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [172] = {
        [sym__terminator] = 496,
        [anon_sym_AMP] = 528,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [173] = {
        [sym_identifier] = 530,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [174] = {
        [sym__terminator] = 532,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [175] = {
        [anon_sym_RPAREN] = 534,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [176] = {
        [sym__statement] = 536,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 538,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [177] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 540,
        [anon_sym_end] = 542,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [178] = {
        [sym__terminator] = 544,
        [aux_sym_program_repeat1] = 544,
        [anon_sym_end] = 544,
        [anon_sym_if] = 544,
        [anon_sym_while] = 544,
        [anon_sym_unless] = 544,
        [anon_sym_until] = 544,
        [sym_comment] = 44,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [179] = {
        [anon_sym_end] = 546,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [180] = {
        [sym__terminator] = 548,
        [aux_sym_program_repeat1] = 548,
        [anon_sym_end] = 548,
        [anon_sym_if] = 548,
        [anon_sym_while] = 548,
        [anon_sym_unless] = 548,
        [anon_sym_until] = 548,
        [sym_comment] = 44,
        [sym__line_break] = 548,
        [anon_sym_SEMI] = 548,
    },
    [181] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [sym_comment] = 44,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [182] = {
        [sym__terminator] = 246,
        [aux_sym__argument_list_repeat1] = 246,
        [anon_sym_COMMA] = 246,
        [anon_sym_STAR] = 246,
        [anon_sym_AMP] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [183] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 552,
        [anon_sym_end] = 554,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [184] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [sym_comment] = 44,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [185] = {
        [anon_sym_end] = 538,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [186] = {
        [sym__terminator] = 558,
        [aux_sym_program_repeat1] = 558,
        [anon_sym_end] = 558,
        [anon_sym_if] = 558,
        [anon_sym_while] = 558,
        [anon_sym_unless] = 558,
        [anon_sym_until] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 558,
        [anon_sym_SEMI] = 558,
    },
    [187] = {
        [sym__terminator] = 498,
        [sym_comment] = 44,
        [sym__line_break] = 498,
        [anon_sym_SEMI] = 498,
    },
    [188] = {
        [sym__terminator] = 460,
        [anon_sym_STAR] = 560,
        [anon_sym_AMP] = 466,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [189] = {
        [sym_identifier] = 562,
        [aux_sym_identifier_repeat1] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [190] = {
        [sym_identifier] = 564,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [191] = {
        [sym__terminator] = 566,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [192] = {
        [sym__terminator] = 510,
        [sym_comment] = 44,
        [sym__line_break] = 510,
        [anon_sym_SEMI] = 510,
    },
    [193] = {
        [sym__terminator] = 566,
        [anon_sym_AMP] = 568,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [194] = {
        [sym_identifier] = 570,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [195] = {
        [sym__terminator] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [196] = {
        [sym__terminator] = 518,
        [sym_comment] = 44,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [197] = {
        [sym_identifier] = 574,
        [aux_sym_identifier_repeat1] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [198] = {
        [sym__terminator] = 472,
        [anon_sym_AMP] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [199] = {
        [sym_identifier] = 578,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [200] = {
        [sym__terminator] = 580,
        [sym_comment] = 44,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 424,
    },
    [201] = {
        [sym__terminator] = 534,
        [sym_comment] = 44,
        [sym__line_break] = 534,
        [anon_sym_SEMI] = 534,
    },
    [202] = {
        [sym__statement] = 582,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 554,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [203] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_class_declaration] = 292,
        [sym_module_declaration] = 292,
        [sym__call] = 292,
        [sym__command] = 292,
        [sym__function_call] = 292,
        [sym__expression] = 292,
        [sym__argument] = 292,
        [sym__primary] = 292,
        [sym__variable] = 292,
        [sym_identifier] = 292,
        [sym__terminator] = 294,
        [aux_sym_identifier_repeat1] = 292,
        [anon_sym_end] = 292,
        [anon_sym_undef] = 292,
        [anon_sym_alias] = 292,
        [anon_sym_def] = 292,
        [anon_sym_LPAREN] = 292,
        [anon_sym_class] = 292,
        [anon_sym_module] = 292,
        [anon_sym_super] = 292,
        [anon_sym_nil] = 292,
        [anon_sym_self] = 292,
        [anon_sym_AT] = 292,
        [anon_sym_DOLLAR] = 292,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 294,
    },
    [204] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_class_declaration] = 292,
        [sym_module_declaration] = 292,
        [sym__call] = 292,
        [sym__command] = 292,
        [sym__function_call] = 292,
        [sym__expression] = 292,
        [sym__argument] = 292,
        [sym__primary] = 292,
        [sym__variable] = 292,
        [sym_identifier] = 292,
        [aux_sym_identifier_repeat1] = 292,
        [anon_sym_end] = 292,
        [anon_sym_undef] = 292,
        [anon_sym_alias] = 292,
        [anon_sym_def] = 292,
        [anon_sym_LPAREN] = 292,
        [anon_sym_class] = 292,
        [anon_sym_module] = 292,
        [anon_sym_super] = 292,
        [anon_sym_nil] = 292,
        [anon_sym_self] = 292,
        [anon_sym_AT] = 292,
        [anon_sym_DOLLAR] = 292,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [205] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 584,
        [anon_sym_end] = 538,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [206] = {
        [anon_sym_end] = 542,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [207] = {
        [sym_identifier] = 382,
        [sym__function_name] = 382,
        [aux_sym_identifier_repeat1] = 382,
        [anon_sym_PIPE] = 382,
        [anon_sym_AT] = 382,
        [anon_sym_DOLLAR] = 382,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 382,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 382,
        [sym__line_break] = 44,
    },
    [208] = {
        [sym_identifier] = 262,
        [sym__function_name] = 290,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_PIPE] = 262,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 262,
        [sym__line_break] = 44,
    },
    [209] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 586,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [210] = {
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
    [211] = {
        [sym_identifier] = 246,
        [sym__function_name] = 246,
        [aux_sym_identifier_repeat1] = 246,
        [anon_sym_PIPE] = 246,
        [anon_sym_AT] = 246,
        [anon_sym_DOLLAR] = 246,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 246,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 246,
        [sym__line_break] = 44,
    },
    [212] = {
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
    [213] = {
        [sym__terminator] = 588,
        [aux_sym_program_repeat1] = 588,
        [anon_sym_end] = 588,
        [anon_sym_if] = 588,
        [anon_sym_while] = 588,
        [anon_sym_unless] = 588,
        [anon_sym_until] = 588,
        [sym_comment] = 44,
        [sym__line_break] = 588,
        [anon_sym_SEMI] = 588,
    },
    [214] = {
        [sym__terminator] = 246,
        [aux_sym_program_repeat1] = 246,
        [anon_sym_end] = 246,
        [anon_sym_if] = 246,
        [anon_sym_while] = 246,
        [anon_sym_unless] = 246,
        [anon_sym_until] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [215] = {
        [sym__statement] = 590,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_PIPE] = 592,
        [anon_sym_end] = 290,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [216] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_end] = 596,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [217] = {
        [sym__statement] = 598,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 596,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [218] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 600,
        [anon_sym_end] = 602,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [219] = {
        [sym__terminator] = 604,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_end] = 604,
        [anon_sym_if] = 604,
        [anon_sym_while] = 604,
        [anon_sym_unless] = 604,
        [anon_sym_until] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 604,
        [anon_sym_SEMI] = 604,
    },
    [220] = {
        [anon_sym_end] = 606,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [221] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [anon_sym_end] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [222] = {
        [sym__terminator] = 610,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_end] = 610,
        [anon_sym_if] = 610,
        [anon_sym_while] = 610,
        [anon_sym_unless] = 610,
        [anon_sym_until] = 610,
        [sym_comment] = 44,
        [sym__line_break] = 610,
        [anon_sym_SEMI] = 610,
    },
    [223] = {
        [anon_sym_end] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [224] = {
        [anon_sym_end] = 612,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [225] = {
        [sym__terminator] = 288,
        [aux_sym_program_repeat1] = 288,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [anon_sym_RPAREN] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 288,
        [anon_sym_SEMI] = 288,
    },
    [226] = {
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [anon_sym_if] = 298,
        [anon_sym_while] = 298,
        [anon_sym_unless] = 298,
        [anon_sym_until] = 298,
        [anon_sym_RPAREN] = 298,
        [sym_comment] = 44,
        [sym__line_break] = 298,
        [anon_sym_SEMI] = 298,
    },
    [227] = {
        [sym__statement] = 614,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 616,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_LT] = 618,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [228] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 620,
        [anon_sym_end] = 622,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [229] = {
        [sym__terminator] = 318,
        [aux_sym_program_repeat1] = 318,
        [anon_sym_if] = 318,
        [anon_sym_while] = 318,
        [anon_sym_unless] = 318,
        [anon_sym_until] = 318,
        [anon_sym_RPAREN] = 318,
        [sym_comment] = 44,
        [sym__line_break] = 318,
        [anon_sym_SEMI] = 318,
    },
    [230] = {
        [sym_identifier] = 624,
        [aux_sym_identifier_repeat1] = 322,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [231] = {
        [sym__statement] = 626,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_class_declaration_repeat1] = 628,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 630,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_COLON_COLON] = 332,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [232] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 632,
        [anon_sym_end] = 634,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [233] = {
        [sym__statement] = 636,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 634,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [234] = {
        [sym__terminator] = 342,
        [aux_sym_program_repeat1] = 342,
        [anon_sym_if] = 342,
        [anon_sym_while] = 342,
        [anon_sym_unless] = 342,
        [anon_sym_until] = 342,
        [anon_sym_RPAREN] = 342,
        [sym_comment] = 44,
        [sym__line_break] = 342,
        [anon_sym_SEMI] = 342,
    },
    [235] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 638,
        [anon_sym_end] = 640,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [236] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [anon_sym_if] = 356,
        [anon_sym_while] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_until] = 356,
        [anon_sym_RPAREN] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [237] = {
        [anon_sym_end] = 642,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [238] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [anon_sym_RPAREN] = 360,
        [sym_comment] = 44,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [239] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_if] = 362,
        [anon_sym_while] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_until] = 362,
        [anon_sym_RPAREN] = 362,
        [sym_comment] = 44,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [240] = {
        [anon_sym_end] = 640,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [241] = {
        [anon_sym_end] = 630,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [242] = {
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
    [243] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 646,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [244] = {
        [anon_sym_RPAREN] = 648,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [245] = {
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_if] = 376,
        [anon_sym_while] = 376,
        [anon_sym_unless] = 376,
        [anon_sym_until] = 376,
        [anon_sym_RPAREN] = 376,
        [sym_comment] = 44,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [246] = {
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
    [247] = {
        [sym__argument_list] = 650,
        [sym_identifier] = 386,
        [sym__terminator] = 652,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_LPAREN] = 654,
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 396,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 402,
    },
    [248] = {
        [sym__terminator] = 656,
        [sym_comment] = 44,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 410,
    },
    [249] = {
        [sym__statement] = 658,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [sym__terminator] = 428,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 660,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [250] = {
        [sym__argument_list] = 662,
        [sym_identifier] = 436,
        [sym__terminator] = 438,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_STAR] = 440,
        [anon_sym_AMP] = 442,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [251] = {
        [anon_sym_RPAREN] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [252] = {
        [sym__statement] = 666,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 668,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [253] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 670,
        [anon_sym_end] = 672,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [254] = {
        [sym__terminator] = 544,
        [aux_sym_program_repeat1] = 544,
        [anon_sym_if] = 544,
        [anon_sym_while] = 544,
        [anon_sym_unless] = 544,
        [anon_sym_until] = 544,
        [anon_sym_RPAREN] = 544,
        [sym_comment] = 44,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [255] = {
        [anon_sym_end] = 674,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [256] = {
        [sym__terminator] = 548,
        [aux_sym_program_repeat1] = 548,
        [anon_sym_if] = 548,
        [anon_sym_while] = 548,
        [anon_sym_unless] = 548,
        [anon_sym_until] = 548,
        [anon_sym_RPAREN] = 548,
        [sym_comment] = 44,
        [sym__line_break] = 548,
        [anon_sym_SEMI] = 548,
    },
    [257] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [anon_sym_RPAREN] = 550,
        [sym_comment] = 44,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [258] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 676,
        [anon_sym_end] = 678,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [259] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [anon_sym_RPAREN] = 556,
        [sym_comment] = 44,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [260] = {
        [anon_sym_end] = 668,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [261] = {
        [sym__terminator] = 558,
        [aux_sym_program_repeat1] = 558,
        [anon_sym_if] = 558,
        [anon_sym_while] = 558,
        [anon_sym_unless] = 558,
        [anon_sym_until] = 558,
        [anon_sym_RPAREN] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 558,
        [anon_sym_SEMI] = 558,
    },
    [262] = {
        [sym__statement] = 680,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 678,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [263] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 682,
        [anon_sym_end] = 668,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [264] = {
        [anon_sym_end] = 672,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [265] = {
        [sym_identifier] = 196,
        [sym__function_name] = 374,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_PIPE] = 196,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 128,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 196,
        [sym__line_break] = 44,
    },
    [266] = {
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
    [267] = {
        [sym__terminator] = 588,
        [aux_sym_program_repeat1] = 588,
        [anon_sym_if] = 588,
        [anon_sym_while] = 588,
        [anon_sym_unless] = 588,
        [anon_sym_until] = 588,
        [anon_sym_RPAREN] = 588,
        [sym_comment] = 44,
        [sym__line_break] = 588,
        [anon_sym_SEMI] = 588,
    },
    [268] = {
        [sym__terminator] = 246,
        [aux_sym_program_repeat1] = 246,
        [anon_sym_if] = 246,
        [anon_sym_while] = 246,
        [anon_sym_unless] = 246,
        [anon_sym_until] = 246,
        [anon_sym_RPAREN] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [269] = {
        [sym__statement] = 684,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_PIPE] = 686,
        [anon_sym_end] = 374,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [270] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 688,
        [anon_sym_end] = 690,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [271] = {
        [sym__statement] = 692,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 690,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [272] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 694,
        [anon_sym_end] = 696,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [273] = {
        [sym__terminator] = 604,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_if] = 604,
        [anon_sym_while] = 604,
        [anon_sym_unless] = 604,
        [anon_sym_until] = 604,
        [anon_sym_RPAREN] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 604,
        [anon_sym_SEMI] = 604,
    },
    [274] = {
        [anon_sym_end] = 698,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [275] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [anon_sym_RPAREN] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [276] = {
        [sym__terminator] = 610,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_if] = 610,
        [anon_sym_while] = 610,
        [anon_sym_unless] = 610,
        [anon_sym_until] = 610,
        [anon_sym_RPAREN] = 610,
        [sym_comment] = 44,
        [sym__line_break] = 610,
        [anon_sym_SEMI] = 610,
    },
    [277] = {
        [anon_sym_end] = 696,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [278] = {
        [anon_sym_RPAREN] = 700,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [279] = {
        [aux_sym__call_arguments_repeat1] = 376,
        [anon_sym_do] = 376,
        [anon_sym_COMMA] = 376,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [280] = {
        [aux_sym__call_arguments_repeat1] = 378,
        [anon_sym_do] = 378,
        [anon_sym_COMMA] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [281] = {
        [aux_sym__call_arguments_repeat1] = 246,
        [anon_sym_do] = 246,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [282] = {
        [anon_sym_do] = 702,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [283] = {
        [sym__argument] = 704,
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
    [284] = {
        [aux_sym__call_arguments_repeat1] = 706,
        [anon_sym_do] = 708,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [285] = {
        [anon_sym_do] = 710,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [286] = {
        [sym__statement] = 712,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 714,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [287] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 716,
        [anon_sym_end] = 718,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [288] = {
        [sym__terminator] = 260,
        [aux_sym_program_repeat1] = 260,
        [ts_builtin_sym_end] = 260,
        [anon_sym_if] = 260,
        [anon_sym_while] = 260,
        [anon_sym_unless] = 260,
        [anon_sym_until] = 260,
        [sym_comment] = 44,
        [sym__line_break] = 260,
        [anon_sym_SEMI] = 260,
    },
    [289] = {
        [anon_sym_end] = 720,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [290] = {
        [sym__terminator] = 288,
        [aux_sym_program_repeat1] = 288,
        [ts_builtin_sym_end] = 288,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 288,
        [anon_sym_SEMI] = 288,
    },
    [291] = {
        [sym__terminator] = 298,
        [aux_sym_program_repeat1] = 298,
        [ts_builtin_sym_end] = 298,
        [anon_sym_if] = 298,
        [anon_sym_while] = 298,
        [anon_sym_unless] = 298,
        [anon_sym_until] = 298,
        [sym_comment] = 44,
        [sym__line_break] = 298,
        [anon_sym_SEMI] = 298,
    },
    [292] = {
        [sym__statement] = 722,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 724,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_LT] = 726,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [293] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 728,
        [anon_sym_end] = 730,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [294] = {
        [sym__terminator] = 318,
        [aux_sym_program_repeat1] = 318,
        [ts_builtin_sym_end] = 318,
        [anon_sym_if] = 318,
        [anon_sym_while] = 318,
        [anon_sym_unless] = 318,
        [anon_sym_until] = 318,
        [sym_comment] = 44,
        [sym__line_break] = 318,
        [anon_sym_SEMI] = 318,
    },
    [295] = {
        [sym_identifier] = 732,
        [aux_sym_identifier_repeat1] = 322,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [296] = {
        [sym__statement] = 734,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_class_declaration_repeat1] = 736,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 738,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_COLON_COLON] = 332,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [297] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 740,
        [anon_sym_end] = 742,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [298] = {
        [sym__statement] = 744,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 742,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [299] = {
        [sym__terminator] = 342,
        [aux_sym_program_repeat1] = 342,
        [ts_builtin_sym_end] = 342,
        [anon_sym_if] = 342,
        [anon_sym_while] = 342,
        [anon_sym_unless] = 342,
        [anon_sym_until] = 342,
        [sym_comment] = 44,
        [sym__line_break] = 342,
        [anon_sym_SEMI] = 342,
    },
    [300] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 746,
        [anon_sym_end] = 748,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [301] = {
        [sym__terminator] = 356,
        [aux_sym_program_repeat1] = 356,
        [ts_builtin_sym_end] = 356,
        [anon_sym_if] = 356,
        [anon_sym_while] = 356,
        [anon_sym_unless] = 356,
        [anon_sym_until] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 356,
        [anon_sym_SEMI] = 356,
    },
    [302] = {
        [anon_sym_end] = 750,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [303] = {
        [sym__terminator] = 360,
        [aux_sym_program_repeat1] = 360,
        [ts_builtin_sym_end] = 360,
        [anon_sym_if] = 360,
        [anon_sym_while] = 360,
        [anon_sym_unless] = 360,
        [anon_sym_until] = 360,
        [sym_comment] = 44,
        [sym__line_break] = 360,
        [anon_sym_SEMI] = 360,
    },
    [304] = {
        [sym__terminator] = 362,
        [aux_sym_program_repeat1] = 362,
        [ts_builtin_sym_end] = 362,
        [anon_sym_if] = 362,
        [anon_sym_while] = 362,
        [anon_sym_unless] = 362,
        [anon_sym_until] = 362,
        [sym_comment] = 44,
        [sym__line_break] = 362,
        [anon_sym_SEMI] = 362,
    },
    [305] = {
        [anon_sym_end] = 748,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [306] = {
        [anon_sym_end] = 738,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [307] = {
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
    [308] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 752,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 754,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [309] = {
        [anon_sym_RPAREN] = 756,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [310] = {
        [sym__terminator] = 376,
        [aux_sym_program_repeat1] = 376,
        [ts_builtin_sym_end] = 376,
        [anon_sym_if] = 376,
        [anon_sym_while] = 376,
        [anon_sym_unless] = 376,
        [anon_sym_until] = 376,
        [sym_comment] = 44,
        [sym__line_break] = 376,
        [anon_sym_SEMI] = 376,
    },
    [311] = {
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
    [312] = {
        [sym__argument_list] = 758,
        [sym_identifier] = 386,
        [sym__terminator] = 760,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_LPAREN] = 762,
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 396,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 400,
        [anon_sym_SEMI] = 402,
    },
    [313] = {
        [sym__terminator] = 764,
        [sym_comment] = 44,
        [sym__line_break] = 408,
        [anon_sym_SEMI] = 410,
    },
    [314] = {
        [sym__statement] = 766,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [sym__terminator] = 428,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 768,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 428,
        [anon_sym_SEMI] = 428,
    },
    [315] = {
        [sym__argument_list] = 770,
        [sym_identifier] = 436,
        [sym__terminator] = 438,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_STAR] = 440,
        [anon_sym_AMP] = 442,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 444,
        [anon_sym_SEMI] = 446,
    },
    [316] = {
        [anon_sym_RPAREN] = 772,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [317] = {
        [sym__statement] = 774,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 776,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [318] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 778,
        [anon_sym_end] = 780,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [319] = {
        [sym__terminator] = 544,
        [aux_sym_program_repeat1] = 544,
        [ts_builtin_sym_end] = 544,
        [anon_sym_if] = 544,
        [anon_sym_while] = 544,
        [anon_sym_unless] = 544,
        [anon_sym_until] = 544,
        [sym_comment] = 44,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [320] = {
        [anon_sym_end] = 782,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [321] = {
        [sym__terminator] = 548,
        [aux_sym_program_repeat1] = 548,
        [ts_builtin_sym_end] = 548,
        [anon_sym_if] = 548,
        [anon_sym_while] = 548,
        [anon_sym_unless] = 548,
        [anon_sym_until] = 548,
        [sym_comment] = 44,
        [sym__line_break] = 548,
        [anon_sym_SEMI] = 548,
    },
    [322] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [ts_builtin_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [sym_comment] = 44,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [323] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 784,
        [anon_sym_end] = 786,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [324] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [ts_builtin_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [sym_comment] = 44,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [325] = {
        [anon_sym_end] = 776,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [326] = {
        [sym__terminator] = 558,
        [aux_sym_program_repeat1] = 558,
        [ts_builtin_sym_end] = 558,
        [anon_sym_if] = 558,
        [anon_sym_while] = 558,
        [anon_sym_unless] = 558,
        [anon_sym_until] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 558,
        [anon_sym_SEMI] = 558,
    },
    [327] = {
        [sym__statement] = 788,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 786,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [328] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 790,
        [anon_sym_end] = 776,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [329] = {
        [anon_sym_end] = 780,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [330] = {
        [sym_identifier] = 78,
        [sym__function_name] = 792,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 44,
    },
    [331] = {
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
    [332] = {
        [sym__terminator] = 296,
        [aux_sym_program_repeat1] = 296,
        [ts_builtin_sym_end] = 296,
        [anon_sym_if] = 296,
        [anon_sym_while] = 296,
        [anon_sym_unless] = 296,
        [anon_sym_until] = 296,
        [sym_comment] = 44,
        [sym__line_break] = 296,
        [anon_sym_SEMI] = 296,
    },
    [333] = {
        [sym__terminator] = 588,
        [aux_sym_program_repeat1] = 588,
        [ts_builtin_sym_end] = 588,
        [anon_sym_if] = 588,
        [anon_sym_while] = 588,
        [anon_sym_unless] = 588,
        [anon_sym_until] = 588,
        [sym_comment] = 44,
        [sym__line_break] = 588,
        [anon_sym_SEMI] = 588,
    },
    [334] = {
        [sym__terminator] = 246,
        [aux_sym_program_repeat1] = 246,
        [ts_builtin_sym_end] = 246,
        [anon_sym_if] = 246,
        [anon_sym_while] = 246,
        [anon_sym_unless] = 246,
        [anon_sym_until] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [335] = {
        [sym__statement] = 794,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_PIPE] = 796,
        [anon_sym_end] = 792,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [336] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 798,
        [anon_sym_end] = 800,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [337] = {
        [sym__statement] = 802,
        [sym__declaration] = 212,
        [sym_method_declaration] = 214,
        [sym_class_declaration] = 214,
        [sym_module_declaration] = 214,
        [sym__call] = 216,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 212,
        [sym__argument] = 218,
        [sym__primary] = 220,
        [sym__variable] = 222,
        [sym_identifier] = 224,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 800,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_module] = 240,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 224,
        [anon_sym_self] = 224,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [338] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 804,
        [anon_sym_end] = 806,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [339] = {
        [sym__terminator] = 604,
        [aux_sym_program_repeat1] = 604,
        [ts_builtin_sym_end] = 604,
        [anon_sym_if] = 604,
        [anon_sym_while] = 604,
        [anon_sym_unless] = 604,
        [anon_sym_until] = 604,
        [sym_comment] = 44,
        [sym__line_break] = 604,
        [anon_sym_SEMI] = 604,
    },
    [340] = {
        [anon_sym_end] = 808,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [341] = {
        [sym__terminator] = 608,
        [aux_sym_program_repeat1] = 608,
        [ts_builtin_sym_end] = 608,
        [anon_sym_if] = 608,
        [anon_sym_while] = 608,
        [anon_sym_unless] = 608,
        [anon_sym_until] = 608,
        [sym_comment] = 44,
        [sym__line_break] = 608,
        [anon_sym_SEMI] = 608,
    },
    [342] = {
        [sym__terminator] = 610,
        [aux_sym_program_repeat1] = 610,
        [ts_builtin_sym_end] = 610,
        [anon_sym_if] = 610,
        [anon_sym_while] = 610,
        [anon_sym_unless] = 610,
        [anon_sym_until] = 610,
        [sym_comment] = 44,
        [sym__line_break] = 610,
        [anon_sym_SEMI] = 610,
    },
    [343] = {
        [anon_sym_end] = 806,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [344] = {
        [sym__statement] = 810,
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
        [anon_sym_LPAREN] = 32,
        [anon_sym_class] = 34,
        [anon_sym_module] = 36,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [345] = {
        [ts_builtin_sym_end] = 812,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [346] = {
        [sym__expression] = 792,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym__variable] = 18,
        [sym_identifier] = 20,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_LPAREN] = 32,
        [anon_sym_nil] = 20,
        [anon_sym_self] = 20,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [347] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 814,
        [ts_builtin_sym_end] = 302,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [348] = {
        [ts_builtin_sym_end] = 304,
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
    [48] = {.count = 1}, SHIFT(344, 0),
    [50] = {.count = 1}, SHIFT(345, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(346, 0),
    [56] = {.count = 1}, SHIFT(76, 0),
    [58] = {.count = 1}, SHIFT(77, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(335, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [76] = {.count = 1}, SHIFT(334, 0),
    [78] = {.count = 1}, SHIFT(331, 0),
    [80] = {.count = 1}, SHIFT(333, 0),
    [82] = {.count = 1}, SHIFT(207, 0),
    [84] = {.count = 1}, SHIFT(330, 0),
    [86] = {.count = 1}, SHIFT(209, 0),
    [88] = {.count = 1}, SHIFT(210, 0),
    [90] = {.count = 1}, SHIFT(116, 0),
    [92] = {.count = 1}, SHIFT(312, 0),
    [94] = {.count = 1}, SHIFT(118, 0),
    [96] = {.count = 1}, SHIFT(119, 0),
    [98] = {.count = 1}, SHIFT(308, 0),
    [100] = {.count = 1}, SHIFT(33, 0),
    [102] = {.count = 1}, SHIFT(34, 0),
    [104] = {.count = 1}, SHIFT(35, 0),
    [106] = {.count = 1}, SHIFT(36, 0),
    [108] = {.count = 1}, SHIFT(37, 0),
    [110] = {.count = 1}, SHIFT(38, 0),
    [112] = {.count = 1}, SHIFT(39, 0),
    [114] = {.count = 1}, SHIFT(40, 0),
    [116] = {.count = 1}, SHIFT(41, 0),
    [118] = {.count = 1}, SHIFT(42, 0),
    [120] = {.count = 1}, SHIFT(43, 0),
    [122] = {.count = 1}, SHIFT(44, 0),
    [124] = {.count = 1}, SHIFT(45, 0),
    [126] = {.count = 1}, SHIFT(46, 0),
    [128] = {.count = 1}, SHIFT(47, 0),
    [130] = {.count = 1}, SHIFT(292, 0),
    [132] = {.count = 1}, SHIFT(83, 0),
    [134] = {.count = 1}, SHIFT(84, 0),
    [136] = {.count = 1}, SHIFT(286, 0),
    [138] = {.count = 1}, SHIFT(49, 0),
    [140] = {.count = 1}, SHIFT(50, 0),
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
    [176] = {.count = 1}, SHIFT(282, 0),
    [178] = {.count = 1}, SHIFT(283, 0),
    [180] = {.count = 1}, SHIFT(281, 0),
    [182] = {.count = 1}, SHIFT(32, 0),
    [184] = {.count = 1}, SHIFT(108, 0),
    [186] = {.count = 1}, SHIFT(278, 0),
    [188] = {.count = 1}, SHIFT(110, 0),
    [190] = {.count = 1}, SHIFT(279, 0),
    [192] = {.count = 1}, SHIFT(269, 0),
    [194] = {.count = 1}, SHIFT(268, 0),
    [196] = {.count = 1}, SHIFT(266, 0),
    [198] = {.count = 1}, SHIFT(267, 0),
    [200] = {.count = 1}, SHIFT(265, 0),
    [202] = {.count = 1}, SHIFT(247, 0),
    [204] = {.count = 1}, SHIFT(243, 0),
    [206] = {.count = 1}, SHIFT(227, 0),
    [208] = {.count = 1}, SHIFT(48, 0),
    [210] = {.count = 1}, SHIFT(52, 0),
    [212] = {.count = 1}, SHIFT(53, 0),
    [214] = {.count = 1}, SHIFT(54, 0),
    [216] = {.count = 1}, SHIFT(55, 0),
    [218] = {.count = 1}, SHIFT(56, 0),
    [220] = {.count = 1}, SHIFT(57, 0),
    [222] = {.count = 1}, SHIFT(58, 0),
    [224] = {.count = 1}, SHIFT(59, 0),
    [226] = {.count = 1}, SHIFT(60, 0),
    [228] = {.count = 1}, SHIFT(61, 0),
    [230] = {.count = 1}, SHIFT(62, 0),
    [232] = {.count = 1}, SHIFT(63, 0),
    [234] = {.count = 1}, SHIFT(64, 0),
    [236] = {.count = 1}, SHIFT(65, 0),
    [238] = {.count = 1}, SHIFT(66, 0),
    [240] = {.count = 1}, SHIFT(67, 0),
    [242] = {.count = 1}, SHIFT(68, 0),
    [244] = {.count = 1}, SHIFT(51, 0),
    [246] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [248] = {.count = 1}, SHIFT(72, 0),
    [250] = {.count = 1}, SHIFT(224, 0),
    [252] = {.count = 1}, SHIFT(225, 0),
    [254] = {.count = 1}, SHIFT(75, 0),
    [256] = {.count = 1}, SHIFT(215, 0),
    [258] = {.count = 1}, SHIFT(214, 0),
    [260] = {.count = 1}, REDUCE(sym_module_declaration, 3, 0),
    [262] = {.count = 1}, SHIFT(212, 0),
    [264] = {.count = 1}, SHIFT(213, 0),
    [266] = {.count = 1}, SHIFT(208, 0),
    [268] = {.count = 1}, SHIFT(117, 0),
    [270] = {.count = 1}, SHIFT(107, 0),
    [272] = {.count = 1}, SHIFT(82, 0),
    [274] = {.count = 1}, SHIFT(69, 0),
    [276] = {.count = 1}, SHIFT(70, 0),
    [278] = {.count = 1}, SHIFT(71, 0),
    [280] = {.count = 1}, SHIFT(73, 0),
    [282] = {.count = 1}, SHIFT(74, 0),
    [284] = {.count = 1}, SHIFT(80, 0),
    [286] = {.count = 1}, SHIFT(79, 0),
    [288] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [290] = {.count = 1}, SHIFT(78, 0),
    [292] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [294] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [296] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [298] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [300] = {.count = 1}, SHIFT(81, 0),
    [302] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [304] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [306] = {.count = 1}, SHIFT(86, 0),
    [308] = {.count = 1}, SHIFT(87, 0),
    [310] = {.count = 1}, SHIFT(88, 0),
    [312] = {.count = 1}, SHIFT(85, 0),
    [314] = {.count = 1}, SHIFT(105, 0),
    [316] = {.count = 1}, SHIFT(106, 0),
    [318] = {.count = 1}, REDUCE(sym_class_declaration, 3, 0),
    [320] = {.count = 1}, SHIFT(89, 0),
    [322] = {.count = 1}, SHIFT(90, 0),
    [324] = {.count = 1}, SHIFT(91, 0),
    [326] = {.count = 1}, SHIFT(93, 0),
    [328] = {.count = 1}, SHIFT(94, 0),
    [330] = {.count = 1}, SHIFT(95, 0),
    [332] = {.count = 1}, SHIFT(96, 0),
    [334] = {.count = 1}, SHIFT(92, 0),
    [336] = {.count = 1}, SHIFT(104, 0),
    [338] = {.count = 1}, SHIFT(100, 0),
    [340] = {.count = 1}, SHIFT(99, 0),
    [342] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [344] = {.count = 1}, SHIFT(97, 0),
    [346] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [348] = {.count = 1}, SHIFT(98, 0),
    [350] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [352] = {.count = 1}, SHIFT(101, 0),
    [354] = {.count = 1}, SHIFT(102, 0),
    [356] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [358] = {.count = 1}, SHIFT(103, 0),
    [360] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [362] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [364] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [366] = {.count = 1}, SHIFT(109, 0),
    [368] = {.count = 1}, SHIFT(111, 0),
    [370] = {.count = 1}, SHIFT(114, 0),
    [372] = {.count = 1}, SHIFT(113, 0),
    [374] = {.count = 1}, SHIFT(112, 0),
    [376] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [378] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [380] = {.count = 1}, SHIFT(115, 0),
    [382] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [384] = {.count = 1}, SHIFT(121, 0),
    [386] = {.count = 1}, SHIFT(122, 0),
    [388] = {.count = 1}, SHIFT(123, 0),
    [390] = {.count = 1}, SHIFT(124, 0),
    [392] = {.count = 1}, SHIFT(125, 0),
    [394] = {.count = 1}, SHIFT(126, 0),
    [396] = {.count = 1}, SHIFT(127, 0),
    [398] = {.count = 1}, SHIFT(128, 0),
    [400] = {.count = 1}, SHIFT(129, 0),
    [402] = {.count = 1}, SHIFT(130, 0),
    [404] = {.count = 1}, SHIFT(120, 0),
    [406] = {.count = 1}, SHIFT(202, 0),
    [408] = {.count = 1}, SHIFT(203, 0),
    [410] = {.count = 1}, SHIFT(204, 0),
    [412] = {.count = 1}, SHIFT(187, 0),
    [414] = {.count = 1}, SHIFT(188, 0),
    [416] = {.count = 1}, SHIFT(160, 0),
    [418] = {.count = 1}, SHIFT(189, 0),
    [420] = {.count = 1}, SHIFT(190, 0),
    [422] = {.count = 1}, SHIFT(136, 0),
    [424] = {.count = 1}, SHIFT(137, 0),
    [426] = {.count = 1}, SHIFT(183, 0),
    [428] = {.count = 1}, REDUCE(sym__argument_list, 1, 0),
    [430] = {.count = 1}, SHIFT(184, 0),
    [432] = {.count = 1}, SHIFT(182, 0),
    [434] = {.count = 1}, SHIFT(145, 0),
    [436] = {.count = 1}, SHIFT(146, 0),
    [438] = {.count = 1}, SHIFT(147, 0),
    [440] = {.count = 1}, SHIFT(148, 0),
    [442] = {.count = 1}, SHIFT(149, 0),
    [444] = {.count = 1}, SHIFT(150, 0),
    [446] = {.count = 1}, SHIFT(151, 0),
    [448] = {.count = 1}, SHIFT(138, 0),
    [450] = {.count = 1}, SHIFT(139, 0),
    [452] = {.count = 1}, SHIFT(140, 0),
    [454] = {.count = 1}, SHIFT(131, 0),
    [456] = {.count = 1}, SHIFT(132, 0),
    [458] = {.count = 1}, SHIFT(133, 0),
    [460] = {.count = 1}, SHIFT(135, 0),
    [462] = {.count = 1}, SHIFT(134, 0),
    [464] = {.count = 1}, REDUCE(sym__argument_list, 3, 0),
    [466] = {.count = 1}, SHIFT(142, 0),
    [468] = {.count = 1}, SHIFT(141, 0),
    [470] = {.count = 1}, SHIFT(143, 0),
    [472] = {.count = 1}, SHIFT(144, 0),
    [474] = {.count = 1}, REDUCE(sym__argument_list, 5, 0),
    [476] = {.count = 1}, SHIFT(176, 0),
    [478] = {.count = 1}, SHIFT(158, 0),
    [480] = {.count = 1}, SHIFT(159, 0),
    [482] = {.count = 1}, SHIFT(161, 0),
    [484] = {.count = 1}, SHIFT(162, 0),
    [486] = {.count = 1}, SHIFT(154, 0),
    [488] = {.count = 1}, SHIFT(152, 0),
    [490] = {.count = 1}, SHIFT(153, 0),
    [492] = {.count = 1}, SHIFT(155, 0),
    [494] = {.count = 1}, SHIFT(156, 0),
    [496] = {.count = 1}, SHIFT(157, 0),
    [498] = {.count = 1}, REDUCE(sym__argument_list, 2, 0),
    [500] = {.count = 1}, SHIFT(171, 0),
    [502] = {.count = 1}, SHIFT(169, 0),
    [504] = {.count = 1}, SHIFT(165, 0),
    [506] = {.count = 1}, SHIFT(163, 0),
    [508] = {.count = 1}, SHIFT(164, 0),
    [510] = {.count = 1}, REDUCE(sym__argument_list, 4, 0),
    [512] = {.count = 1}, SHIFT(166, 0),
    [514] = {.count = 1}, SHIFT(167, 0),
    [516] = {.count = 1}, SHIFT(168, 0),
    [518] = {.count = 1}, REDUCE(sym__argument_list, 6, 0),
    [520] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 2, 0),
    [522] = {.count = 1}, SHIFT(170, 0),
    [524] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 3, 0),
    [526] = {.count = 1}, SHIFT(172, 0),
    [528] = {.count = 1}, SHIFT(173, 0),
    [530] = {.count = 1}, SHIFT(174, 0),
    [532] = {.count = 1}, SHIFT(175, 0),
    [534] = {.count = 1}, REDUCE(sym__argument_list, 7, 0),
    [536] = {.count = 1}, SHIFT(177, 0),
    [538] = {.count = 1}, SHIFT(178, 0),
    [540] = {.count = 1}, SHIFT(179, 0),
    [542] = {.count = 1}, SHIFT(180, 0),
    [544] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [546] = {.count = 1}, SHIFT(181, 0),
    [548] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [550] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [552] = {.count = 1}, SHIFT(185, 0),
    [554] = {.count = 1}, SHIFT(186, 0),
    [556] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [558] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [560] = {.count = 1}, SHIFT(197, 0),
    [562] = {.count = 1}, SHIFT(193, 0),
    [564] = {.count = 1}, SHIFT(191, 0),
    [566] = {.count = 1}, SHIFT(192, 0),
    [568] = {.count = 1}, SHIFT(194, 0),
    [570] = {.count = 1}, SHIFT(195, 0),
    [572] = {.count = 1}, SHIFT(196, 0),
    [574] = {.count = 1}, SHIFT(198, 0),
    [576] = {.count = 1}, SHIFT(199, 0),
    [578] = {.count = 1}, SHIFT(200, 0),
    [580] = {.count = 1}, SHIFT(201, 0),
    [582] = {.count = 1}, SHIFT(205, 0),
    [584] = {.count = 1}, SHIFT(206, 0),
    [586] = {.count = 1}, SHIFT(211, 0),
    [588] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [590] = {.count = 1}, SHIFT(216, 0),
    [592] = {.count = 1}, SHIFT(217, 0),
    [594] = {.count = 1}, SHIFT(223, 0),
    [596] = {.count = 1}, SHIFT(219, 0),
    [598] = {.count = 1}, SHIFT(218, 0),
    [600] = {.count = 1}, SHIFT(220, 0),
    [602] = {.count = 1}, SHIFT(221, 0),
    [604] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [606] = {.count = 1}, SHIFT(222, 0),
    [608] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [610] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [612] = {.count = 1}, SHIFT(226, 0),
    [614] = {.count = 1}, SHIFT(228, 0),
    [616] = {.count = 1}, SHIFT(229, 0),
    [618] = {.count = 1}, SHIFT(230, 0),
    [620] = {.count = 1}, SHIFT(241, 0),
    [622] = {.count = 1}, SHIFT(242, 0),
    [624] = {.count = 1}, SHIFT(231, 0),
    [626] = {.count = 1}, SHIFT(232, 0),
    [628] = {.count = 1}, SHIFT(233, 0),
    [630] = {.count = 1}, SHIFT(234, 0),
    [632] = {.count = 1}, SHIFT(240, 0),
    [634] = {.count = 1}, SHIFT(236, 0),
    [636] = {.count = 1}, SHIFT(235, 0),
    [638] = {.count = 1}, SHIFT(237, 0),
    [640] = {.count = 1}, SHIFT(238, 0),
    [642] = {.count = 1}, SHIFT(239, 0),
    [644] = {.count = 1}, SHIFT(244, 0),
    [646] = {.count = 1}, SHIFT(245, 0),
    [648] = {.count = 1}, SHIFT(246, 0),
    [650] = {.count = 1}, SHIFT(248, 0),
    [652] = {.count = 1}, SHIFT(249, 0),
    [654] = {.count = 1}, SHIFT(250, 0),
    [656] = {.count = 1}, SHIFT(262, 0),
    [658] = {.count = 1}, SHIFT(258, 0),
    [660] = {.count = 1}, SHIFT(259, 0),
    [662] = {.count = 1}, SHIFT(251, 0),
    [664] = {.count = 1}, SHIFT(252, 0),
    [666] = {.count = 1}, SHIFT(253, 0),
    [668] = {.count = 1}, SHIFT(254, 0),
    [670] = {.count = 1}, SHIFT(255, 0),
    [672] = {.count = 1}, SHIFT(256, 0),
    [674] = {.count = 1}, SHIFT(257, 0),
    [676] = {.count = 1}, SHIFT(260, 0),
    [678] = {.count = 1}, SHIFT(261, 0),
    [680] = {.count = 1}, SHIFT(263, 0),
    [682] = {.count = 1}, SHIFT(264, 0),
    [684] = {.count = 1}, SHIFT(270, 0),
    [686] = {.count = 1}, SHIFT(271, 0),
    [688] = {.count = 1}, SHIFT(277, 0),
    [690] = {.count = 1}, SHIFT(273, 0),
    [692] = {.count = 1}, SHIFT(272, 0),
    [694] = {.count = 1}, SHIFT(274, 0),
    [696] = {.count = 1}, SHIFT(275, 0),
    [698] = {.count = 1}, SHIFT(276, 0),
    [700] = {.count = 1}, SHIFT(280, 0),
    [702] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [704] = {.count = 1}, SHIFT(284, 0),
    [706] = {.count = 1}, SHIFT(285, 0),
    [708] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [710] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [712] = {.count = 1}, SHIFT(287, 0),
    [714] = {.count = 1}, SHIFT(288, 0),
    [716] = {.count = 1}, SHIFT(289, 0),
    [718] = {.count = 1}, SHIFT(290, 0),
    [720] = {.count = 1}, SHIFT(291, 0),
    [722] = {.count = 1}, SHIFT(293, 0),
    [724] = {.count = 1}, SHIFT(294, 0),
    [726] = {.count = 1}, SHIFT(295, 0),
    [728] = {.count = 1}, SHIFT(306, 0),
    [730] = {.count = 1}, SHIFT(307, 0),
    [732] = {.count = 1}, SHIFT(296, 0),
    [734] = {.count = 1}, SHIFT(297, 0),
    [736] = {.count = 1}, SHIFT(298, 0),
    [738] = {.count = 1}, SHIFT(299, 0),
    [740] = {.count = 1}, SHIFT(305, 0),
    [742] = {.count = 1}, SHIFT(301, 0),
    [744] = {.count = 1}, SHIFT(300, 0),
    [746] = {.count = 1}, SHIFT(302, 0),
    [748] = {.count = 1}, SHIFT(303, 0),
    [750] = {.count = 1}, SHIFT(304, 0),
    [752] = {.count = 1}, SHIFT(309, 0),
    [754] = {.count = 1}, SHIFT(310, 0),
    [756] = {.count = 1}, SHIFT(311, 0),
    [758] = {.count = 1}, SHIFT(313, 0),
    [760] = {.count = 1}, SHIFT(314, 0),
    [762] = {.count = 1}, SHIFT(315, 0),
    [764] = {.count = 1}, SHIFT(327, 0),
    [766] = {.count = 1}, SHIFT(323, 0),
    [768] = {.count = 1}, SHIFT(324, 0),
    [770] = {.count = 1}, SHIFT(316, 0),
    [772] = {.count = 1}, SHIFT(317, 0),
    [774] = {.count = 1}, SHIFT(318, 0),
    [776] = {.count = 1}, SHIFT(319, 0),
    [778] = {.count = 1}, SHIFT(320, 0),
    [780] = {.count = 1}, SHIFT(321, 0),
    [782] = {.count = 1}, SHIFT(322, 0),
    [784] = {.count = 1}, SHIFT(325, 0),
    [786] = {.count = 1}, SHIFT(326, 0),
    [788] = {.count = 1}, SHIFT(328, 0),
    [790] = {.count = 1}, SHIFT(329, 0),
    [792] = {.count = 1}, SHIFT(332, 0),
    [794] = {.count = 1}, SHIFT(336, 0),
    [796] = {.count = 1}, SHIFT(337, 0),
    [798] = {.count = 1}, SHIFT(343, 0),
    [800] = {.count = 1}, SHIFT(339, 0),
    [802] = {.count = 1}, SHIFT(338, 0),
    [804] = {.count = 1}, SHIFT(340, 0),
    [806] = {.count = 1}, SHIFT(341, 0),
    [808] = {.count = 1}, SHIFT(342, 0),
    [810] = {.count = 1}, SHIFT(347, 0),
    [812] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [814] = {.count = 1}, SHIFT(348, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
