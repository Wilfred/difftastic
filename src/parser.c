#include "tree_sitter/parser.h"

#define STATE_COUNT 353
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
            if (lookahead == ')')
                ADVANCE(7);
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
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
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
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 128:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(16);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
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
    [45] = 116,
    [46] = 113,
    [47] = 113,
    [48] = 118,
    [49] = 119,
    [50] = 110,
    [51] = 119,
    [52] = 119,
    [53] = 120,
    [54] = 120,
    [55] = 120,
    [56] = 107,
    [57] = 120,
    [58] = 120,
    [59] = 120,
    [60] = 120,
    [61] = 110,
    [62] = 118,
    [63] = 111,
    [64] = 111,
    [65] = 111,
    [66] = 112,
    [67] = 113,
    [68] = 113,
    [69] = 120,
    [70] = 119,
    [71] = 120,
    [72] = 120,
    [73] = 124,
    [74] = 125,
    [75] = 120,
    [76] = 126,
    [77] = 128,
    [78] = 124,
    [79] = 120,
    [80] = 120,
    [81] = 120,
    [82] = 125,
    [83] = 129,
    [84] = 110,
    [85] = 129,
    [86] = 129,
    [87] = 120,
    [88] = 120,
    [89] = 113,
    [90] = 130,
    [91] = 110,
    [92] = 130,
    [93] = 130,
    [94] = 120,
    [95] = 119,
    [96] = 120,
    [97] = 113,
    [98] = 130,
    [99] = 119,
    [100] = 120,
    [101] = 120,
    [102] = 125,
    [103] = 120,
    [104] = 120,
    [105] = 125,
    [106] = 125,
    [107] = 120,
    [108] = 118,
    [109] = 120,
    [110] = 124,
    [111] = 131,
    [112] = 126,
    [113] = 120,
    [114] = 118,
    [115] = 120,
    [116] = 118,
    [117] = 131,
    [118] = 132,
    [119] = 132,
    [120] = 110,
    [121] = 132,
    [122] = 132,
    [123] = 133,
    [124] = 134,
    [125] = 135,
    [126] = 110,
    [127] = 136,
    [128] = 113,
    [129] = 113,
    [130] = 134,
    [131] = 137,
    [132] = 135,
    [133] = 133,
    [134] = 110,
    [135] = 133,
    [136] = 133,
    [137] = 133,
    [138] = 134,
    [139] = 133,
    [140] = 138,
    [141] = 110,
    [142] = 138,
    [143] = 138,
    [144] = 113,
    [145] = 133,
    [146] = 133,
    [147] = 131,
    [148] = 134,
    [149] = 131,
    [150] = 113,
    [151] = 113,
    [152] = 139,
    [153] = 131,
    [154] = 133,
    [155] = 131,
    [156] = 138,
    [157] = 113,
    [158] = 133,
    [159] = 131,
    [160] = 131,
    [161] = 140,
    [162] = 113,
    [163] = 113,
    [164] = 113,
    [165] = 133,
    [166] = 131,
    [167] = 138,
    [168] = 113,
    [169] = 133,
    [170] = 131,
    [171] = 134,
    [172] = 140,
    [173] = 113,
    [174] = 138,
    [175] = 113,
    [176] = 133,
    [177] = 131,
    [178] = 119,
    [179] = 120,
    [180] = 120,
    [181] = 125,
    [182] = 120,
    [183] = 120,
    [184] = 134,
    [185] = 120,
    [186] = 120,
    [187] = 125,
    [188] = 120,
    [189] = 133,
    [190] = 140,
    [191] = 113,
    [192] = 113,
    [193] = 133,
    [194] = 133,
    [195] = 138,
    [196] = 113,
    [197] = 133,
    [198] = 133,
    [199] = 113,
    [200] = 138,
    [201] = 113,
    [202] = 133,
    [203] = 133,
    [204] = 119,
    [205] = 135,
    [206] = 119,
    [207] = 120,
    [208] = 125,
    [209] = 111,
    [210] = 111,
    [211] = 110,
    [212] = 111,
    [213] = 111,
    [214] = 120,
    [215] = 120,
    [216] = 120,
    [217] = 141,
    [218] = 120,
    [219] = 119,
    [220] = 120,
    [221] = 120,
    [222] = 125,
    [223] = 120,
    [224] = 120,
    [225] = 125,
    [226] = 125,
    [227] = 118,
    [228] = 118,
    [229] = 129,
    [230] = 120,
    [231] = 118,
    [232] = 113,
    [233] = 130,
    [234] = 120,
    [235] = 119,
    [236] = 118,
    [237] = 120,
    [238] = 118,
    [239] = 125,
    [240] = 118,
    [241] = 118,
    [242] = 125,
    [243] = 125,
    [244] = 118,
    [245] = 118,
    [246] = 118,
    [247] = 131,
    [248] = 118,
    [249] = 118,
    [250] = 132,
    [251] = 133,
    [252] = 135,
    [253] = 136,
    [254] = 131,
    [255] = 119,
    [256] = 120,
    [257] = 118,
    [258] = 125,
    [259] = 118,
    [260] = 118,
    [261] = 120,
    [262] = 118,
    [263] = 125,
    [264] = 118,
    [265] = 119,
    [266] = 120,
    [267] = 125,
    [268] = 111,
    [269] = 118,
    [270] = 118,
    [271] = 118,
    [272] = 141,
    [273] = 120,
    [274] = 119,
    [275] = 120,
    [276] = 118,
    [277] = 125,
    [278] = 118,
    [279] = 118,
    [280] = 125,
    [281] = 131,
    [282] = 116,
    [283] = 116,
    [284] = 116,
    [285] = 107,
    [286] = 126,
    [287] = 116,
    [288] = 107,
    [289] = 119,
    [290] = 120,
    [291] = 90,
    [292] = 125,
    [293] = 90,
    [294] = 90,
    [295] = 129,
    [296] = 120,
    [297] = 90,
    [298] = 113,
    [299] = 130,
    [300] = 120,
    [301] = 119,
    [302] = 90,
    [303] = 120,
    [304] = 90,
    [305] = 125,
    [306] = 90,
    [307] = 90,
    [308] = 125,
    [309] = 125,
    [310] = 90,
    [311] = 118,
    [312] = 90,
    [313] = 131,
    [314] = 90,
    [315] = 90,
    [316] = 132,
    [317] = 133,
    [318] = 135,
    [319] = 136,
    [320] = 131,
    [321] = 119,
    [322] = 120,
    [323] = 90,
    [324] = 125,
    [325] = 90,
    [326] = 90,
    [327] = 120,
    [328] = 90,
    [329] = 125,
    [330] = 90,
    [331] = 119,
    [332] = 120,
    [333] = 125,
    [334] = 111,
    [335] = 90,
    [336] = 90,
    [337] = 90,
    [338] = 90,
    [339] = 141,
    [340] = 120,
    [341] = 119,
    [342] = 120,
    [343] = 90,
    [344] = 125,
    [345] = 90,
    [346] = 90,
    [347] = 125,
    [348] = 124,
    [349] = 89,
    [350] = 126,
    [351] = 90,
    [352] = 89,
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
        [anon_sym_RPAREN] = 124,
        [anon_sym_class] = 126,
        [anon_sym_module] = 128,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [16] = {
        [sym_identifier] = 132,
        [aux_sym_identifier_repeat1] = 134,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [17] = {
        [sym_identifier] = 138,
        [aux_sym_identifier_repeat1] = 140,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [18] = {
        [sym__call_arguments] = 144,
        [sym__command] = 146,
        [sym__argument] = 148,
        [sym__primary] = 150,
        [sym__variable] = 152,
        [sym_identifier] = 154,
        [aux_sym_identifier_repeat1] = 156,
        [anon_sym_do] = 158,
        [anon_sym_LPAREN] = 160,
        [anon_sym_super] = 162,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 164,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [19] = {
        [aux_sym_identifier_repeat1] = 166,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [20] = {
        [sym__terminator] = 170,
        [aux_sym_program_repeat1] = 170,
        [ts_builtin_sym_end] = 170,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [21] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 172,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [22] = {
        [anon_sym_do] = 174,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [23] = {
        [anon_sym_do] = 176,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [24] = {
        [aux_sym__call_arguments_repeat1] = 178,
        [anon_sym_do] = 176,
        [anon_sym_COMMA] = 180,
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
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 182,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [29] = {
        [sym__statement] = 184,
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
        [anon_sym_RPAREN] = 186,
        [anon_sym_class] = 126,
        [anon_sym_module] = 128,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [30] = {
        [sym__call_arguments] = 144,
        [sym__command] = 146,
        [sym__argument] = 148,
        [sym__primary] = 150,
        [sym__variable] = 152,
        [sym_identifier] = 154,
        [aux_sym_identifier_repeat1] = 156,
        [anon_sym_LPAREN] = 160,
        [anon_sym_super] = 162,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 164,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 170,
        [anon_sym_do] = 170,
        [anon_sym_COMMA] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [32] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 190,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 194,
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
        [anon_sym_do] = 196,
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
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 198,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [41] = {
        [sym_identifier] = 200,
        [sym__function_name] = 202,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_PIPE] = 200,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 200,
        [sym__line_break] = 44,
    },
    [42] = {
        [sym_identifier] = 82,
        [sym__function_name] = 204,
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
        [sym__function_name] = 206,
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
        [sym__statement] = 208,
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
        [anon_sym_RPAREN] = 210,
        [anon_sym_class] = 126,
        [anon_sym_module] = 128,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [45] = {
        [aux_sym__call_arguments_repeat1] = 212,
        [anon_sym_do] = 212,
        [anon_sym_COMMA] = 212,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [46] = {
        [sym_identifier] = 214,
        [aux_sym_identifier_repeat1] = 134,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [47] = {
        [sym_identifier] = 216,
        [aux_sym_identifier_repeat1] = 140,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [48] = {
        [sym__terminator] = 170,
        [aux_sym_program_repeat1] = 170,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [anon_sym_RPAREN] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [49] = {
        [sym__statement] = 218,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 236,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [50] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 252,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [51] = {
        [sym__statement] = 170,
        [sym__declaration] = 170,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 170,
        [sym__command] = 170,
        [sym__function_call] = 170,
        [sym__expression] = 170,
        [sym__argument] = 170,
        [sym__primary] = 170,
        [sym__variable] = 170,
        [sym_identifier] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_end] = 170,
        [anon_sym_undef] = 170,
        [anon_sym_alias] = 170,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_class] = 170,
        [anon_sym_module] = 170,
        [anon_sym_super] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [52] = {
        [sym__statement] = 254,
        [sym__declaration] = 254,
        [sym_method_declaration] = 254,
        [sym_class_declaration] = 254,
        [sym_module_declaration] = 254,
        [sym__call] = 254,
        [sym__command] = 254,
        [sym__function_call] = 254,
        [sym__expression] = 254,
        [sym__argument] = 254,
        [sym__primary] = 254,
        [sym__variable] = 254,
        [sym_identifier] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_undef] = 254,
        [anon_sym_alias] = 254,
        [anon_sym_def] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_class] = 254,
        [anon_sym_module] = 254,
        [anon_sym_super] = 254,
        [anon_sym_nil] = 254,
        [anon_sym_self] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [53] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 258,
        [anon_sym_end] = 260,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [54] = {
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
    [55] = {
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
    [56] = {
        [anon_sym_do] = 264,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [57] = {
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
    [58] = {
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
    [59] = {
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
    [60] = {
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
    [61] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 266,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [62] = {
        [sym__terminator] = 268,
        [aux_sym_program_repeat1] = 268,
        [anon_sym_if] = 268,
        [anon_sym_while] = 268,
        [anon_sym_unless] = 268,
        [anon_sym_until] = 268,
        [anon_sym_RPAREN] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 268,
        [anon_sym_SEMI] = 268,
    },
    [63] = {
        [sym_identifier] = 270,
        [sym__function_name] = 272,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_PIPE] = 270,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 270,
        [sym__line_break] = 44,
    },
    [64] = {
        [sym_identifier] = 82,
        [sym__function_name] = 274,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_PIPE] = 82,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 82,
        [sym__line_break] = 44,
    },
    [65] = {
        [sym_identifier] = 90,
        [sym__function_name] = 276,
        [aux_sym_identifier_repeat1] = 94,
        [anon_sym_PIPE] = 90,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 90,
        [sym__line_break] = 44,
    },
    [66] = {
        [sym__statement] = 278,
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
        [anon_sym_RPAREN] = 280,
        [anon_sym_class] = 126,
        [anon_sym_module] = 128,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [67] = {
        [sym_identifier] = 282,
        [aux_sym_identifier_repeat1] = 134,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [68] = {
        [sym_identifier] = 284,
        [aux_sym_identifier_repeat1] = 140,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [69] = {
        [sym__terminator] = 170,
        [aux_sym_program_repeat1] = 170,
        [anon_sym_end] = 170,
        [anon_sym_if] = 170,
        [anon_sym_while] = 170,
        [anon_sym_unless] = 170,
        [anon_sym_until] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [70] = {
        [sym__statement] = 286,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 288,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [71] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 290,
        [anon_sym_end] = 292,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [72] = {
        [sym__terminator] = 268,
        [aux_sym_program_repeat1] = 268,
        [anon_sym_end] = 268,
        [anon_sym_if] = 268,
        [anon_sym_while] = 268,
        [anon_sym_unless] = 268,
        [anon_sym_until] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 268,
        [anon_sym_SEMI] = 268,
    },
    [73] = {
        [sym__statement] = 294,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [74] = {
        [anon_sym_end] = 296,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [75] = {
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
    [76] = {
        [sym__expression] = 300,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_LPAREN] = 244,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [77] = {
        [sym__statement] = 302,
        [sym__declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_class_declaration] = 302,
        [sym_module_declaration] = 302,
        [sym__call] = 302,
        [sym__command] = 302,
        [sym__function_call] = 302,
        [sym__expression] = 302,
        [sym__argument] = 302,
        [sym__primary] = 302,
        [sym__variable] = 302,
        [sym_identifier] = 302,
        [sym__terminator] = 304,
        [aux_sym_program_repeat1] = 304,
        [aux_sym_identifier_repeat1] = 302,
        [ts_builtin_sym_end] = 304,
        [anon_sym_end] = 304,
        [anon_sym_undef] = 302,
        [anon_sym_alias] = 302,
        [anon_sym_if] = 304,
        [anon_sym_while] = 304,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 304,
        [anon_sym_def] = 302,
        [anon_sym_LPAREN] = 302,
        [anon_sym_RPAREN] = 304,
        [anon_sym_class] = 302,
        [anon_sym_module] = 302,
        [anon_sym_super] = 302,
        [anon_sym_nil] = 302,
        [anon_sym_self] = 302,
        [anon_sym_AT] = 302,
        [anon_sym_DOLLAR] = 302,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 304,
    },
    [78] = {
        [sym__statement] = 302,
        [sym__declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_class_declaration] = 302,
        [sym_module_declaration] = 302,
        [sym__call] = 302,
        [sym__command] = 302,
        [sym__function_call] = 302,
        [sym__expression] = 302,
        [sym__argument] = 302,
        [sym__primary] = 302,
        [sym__variable] = 302,
        [sym_identifier] = 302,
        [aux_sym_identifier_repeat1] = 302,
        [anon_sym_undef] = 302,
        [anon_sym_alias] = 302,
        [anon_sym_def] = 302,
        [anon_sym_LPAREN] = 302,
        [anon_sym_class] = 302,
        [anon_sym_module] = 302,
        [anon_sym_super] = 302,
        [anon_sym_nil] = 302,
        [anon_sym_self] = 302,
        [anon_sym_AT] = 302,
        [anon_sym_DOLLAR] = 302,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [79] = {
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [anon_sym_end] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 44,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [80] = {
        [sym__terminator] = 308,
        [aux_sym_program_repeat1] = 308,
        [anon_sym_end] = 308,
        [anon_sym_if] = 308,
        [anon_sym_while] = 308,
        [anon_sym_unless] = 308,
        [anon_sym_until] = 308,
        [sym_comment] = 44,
        [sym__line_break] = 308,
        [anon_sym_SEMI] = 308,
    },
    [81] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 310,
        [anon_sym_end] = 312,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [82] = {
        [anon_sym_end] = 314,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [83] = {
        [sym__statement] = 316,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 318,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_LT] = 320,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [84] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 322,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [85] = {
        [sym__statement] = 170,
        [sym__declaration] = 170,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 170,
        [sym__command] = 170,
        [sym__function_call] = 170,
        [sym__expression] = 170,
        [sym__argument] = 170,
        [sym__primary] = 170,
        [sym__variable] = 170,
        [sym_identifier] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_end] = 170,
        [anon_sym_undef] = 170,
        [anon_sym_alias] = 170,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_class] = 170,
        [anon_sym_LT] = 170,
        [anon_sym_module] = 170,
        [anon_sym_super] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [86] = {
        [sym__statement] = 254,
        [sym__declaration] = 254,
        [sym_method_declaration] = 254,
        [sym_class_declaration] = 254,
        [sym_module_declaration] = 254,
        [sym__call] = 254,
        [sym__command] = 254,
        [sym__function_call] = 254,
        [sym__expression] = 254,
        [sym__argument] = 254,
        [sym__primary] = 254,
        [sym__variable] = 254,
        [sym_identifier] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_undef] = 254,
        [anon_sym_alias] = 254,
        [anon_sym_def] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_class] = 254,
        [anon_sym_LT] = 254,
        [anon_sym_module] = 254,
        [anon_sym_super] = 254,
        [anon_sym_nil] = 254,
        [anon_sym_self] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [87] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 324,
        [anon_sym_end] = 326,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [88] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_end] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [89] = {
        [sym_identifier] = 330,
        [aux_sym_identifier_repeat1] = 332,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [90] = {
        [sym__statement] = 336,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_class_declaration_repeat1] = 338,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 340,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_COLON_COLON] = 342,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [91] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 344,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [92] = {
        [sym__statement] = 170,
        [sym__declaration] = 170,
        [sym_method_declaration] = 170,
        [sym_class_declaration] = 170,
        [sym_module_declaration] = 170,
        [sym__call] = 170,
        [sym__command] = 170,
        [sym__function_call] = 170,
        [sym__expression] = 170,
        [sym__argument] = 170,
        [sym__primary] = 170,
        [sym__variable] = 170,
        [sym_identifier] = 170,
        [aux_sym_class_declaration_repeat1] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_end] = 170,
        [anon_sym_undef] = 170,
        [anon_sym_alias] = 170,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_class] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_module] = 170,
        [anon_sym_super] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [93] = {
        [sym__statement] = 254,
        [sym__declaration] = 254,
        [sym_method_declaration] = 254,
        [sym_class_declaration] = 254,
        [sym_module_declaration] = 254,
        [sym__call] = 254,
        [sym__command] = 254,
        [sym__function_call] = 254,
        [sym__expression] = 254,
        [sym__argument] = 254,
        [sym__primary] = 254,
        [sym__variable] = 254,
        [sym_identifier] = 254,
        [aux_sym_class_declaration_repeat1] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_undef] = 254,
        [anon_sym_alias] = 254,
        [anon_sym_def] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_class] = 254,
        [anon_sym_COLON_COLON] = 254,
        [anon_sym_module] = 254,
        [anon_sym_super] = 254,
        [anon_sym_nil] = 254,
        [anon_sym_self] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [94] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_end] = 348,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [95] = {
        [sym__statement] = 350,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 348,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [96] = {
        [sym__terminator] = 352,
        [aux_sym_program_repeat1] = 352,
        [anon_sym_end] = 352,
        [anon_sym_if] = 352,
        [anon_sym_while] = 352,
        [anon_sym_unless] = 352,
        [anon_sym_until] = 352,
        [sym_comment] = 44,
        [sym__line_break] = 352,
        [anon_sym_SEMI] = 352,
    },
    [97] = {
        [sym_identifier] = 354,
        [aux_sym_identifier_repeat1] = 332,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [98] = {
        [sym__statement] = 356,
        [sym__declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_class_declaration] = 356,
        [sym_module_declaration] = 356,
        [sym__call] = 356,
        [sym__command] = 356,
        [sym__function_call] = 356,
        [sym__expression] = 356,
        [sym__argument] = 356,
        [sym__primary] = 356,
        [sym__variable] = 356,
        [sym_identifier] = 356,
        [aux_sym_class_declaration_repeat1] = 358,
        [aux_sym_identifier_repeat1] = 356,
        [anon_sym_end] = 356,
        [anon_sym_undef] = 356,
        [anon_sym_alias] = 356,
        [anon_sym_def] = 356,
        [anon_sym_LPAREN] = 356,
        [anon_sym_class] = 356,
        [anon_sym_COLON_COLON] = 342,
        [anon_sym_module] = 356,
        [anon_sym_super] = 356,
        [anon_sym_nil] = 356,
        [anon_sym_self] = 356,
        [anon_sym_AT] = 356,
        [anon_sym_DOLLAR] = 356,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [99] = {
        [sym__statement] = 360,
        [sym__declaration] = 360,
        [sym_method_declaration] = 360,
        [sym_class_declaration] = 360,
        [sym_module_declaration] = 360,
        [sym__call] = 360,
        [sym__command] = 360,
        [sym__function_call] = 360,
        [sym__expression] = 360,
        [sym__argument] = 360,
        [sym__primary] = 360,
        [sym__variable] = 360,
        [sym_identifier] = 360,
        [aux_sym_identifier_repeat1] = 360,
        [anon_sym_end] = 360,
        [anon_sym_undef] = 360,
        [anon_sym_alias] = 360,
        [anon_sym_def] = 360,
        [anon_sym_LPAREN] = 360,
        [anon_sym_class] = 360,
        [anon_sym_module] = 360,
        [anon_sym_super] = 360,
        [anon_sym_nil] = 360,
        [anon_sym_self] = 360,
        [anon_sym_AT] = 360,
        [anon_sym_DOLLAR] = 360,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 360,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [100] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 362,
        [anon_sym_end] = 364,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [101] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_end] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [sym_comment] = 44,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [102] = {
        [anon_sym_end] = 368,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [103] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [sym_comment] = 44,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [104] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [sym_comment] = 44,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [105] = {
        [anon_sym_end] = 364,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [106] = {
        [anon_sym_end] = 340,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [107] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_end] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [sym_comment] = 44,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [108] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 376,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [109] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 212,
        [anon_sym_end] = 212,
        [anon_sym_if] = 212,
        [anon_sym_while] = 212,
        [anon_sym_unless] = 212,
        [anon_sym_until] = 212,
        [sym_comment] = 44,
        [sym__line_break] = 212,
        [anon_sym_SEMI] = 212,
    },
    [110] = {
        [sym__statement] = 380,
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
        [anon_sym_class] = 126,
        [anon_sym_module] = 128,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 112,
        [anon_sym_self] = 112,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [111] = {
        [anon_sym_RPAREN] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [112] = {
        [sym__expression] = 384,
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
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [113] = {
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
    [114] = {
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [anon_sym_RPAREN] = 306,
        [sym_comment] = 44,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [115] = {
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
    [116] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 390,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 312,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [117] = {
        [anon_sym_RPAREN] = 314,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [118] = {
        [sym__argument_list] = 392,
        [sym_identifier] = 392,
        [sym__terminator] = 392,
        [aux_sym_identifier_repeat1] = 392,
        [anon_sym_LPAREN] = 392,
        [anon_sym_STAR] = 392,
        [anon_sym_AMP] = 392,
        [anon_sym_AT] = 392,
        [anon_sym_DOLLAR] = 392,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 392,
        [sym_comment] = 44,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [119] = {
        [sym__argument_list] = 394,
        [sym_identifier] = 396,
        [sym__terminator] = 398,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_LPAREN] = 402,
        [anon_sym_STAR] = 404,
        [anon_sym_AMP] = 406,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 412,
    },
    [120] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 414,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [121] = {
        [sym__argument_list] = 170,
        [sym_identifier] = 170,
        [sym__terminator] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_AMP] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [122] = {
        [sym__argument_list] = 254,
        [sym_identifier] = 254,
        [sym__terminator] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_STAR] = 254,
        [anon_sym_AMP] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [123] = {
        [sym__terminator] = 416,
        [sym_comment] = 44,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 420,
    },
    [124] = {
        [sym__terminator] = 422,
        [aux_sym__argument_list_repeat1] = 424,
        [anon_sym_COMMA] = 426,
        [anon_sym_STAR] = 428,
        [anon_sym_AMP] = 430,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [125] = {
        [sym__statement] = 436,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [sym__terminator] = 438,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 440,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [126] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 442,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [127] = {
        [sym__argument_list] = 444,
        [sym_identifier] = 446,
        [sym__terminator] = 448,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_STAR] = 450,
        [anon_sym_AMP] = 452,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [128] = {
        [sym_identifier] = 458,
        [aux_sym_identifier_repeat1] = 460,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [129] = {
        [sym_identifier] = 464,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [130] = {
        [sym__terminator] = 170,
        [aux_sym__argument_list_repeat1] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_AMP] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [131] = {
        [sym__statement] = 302,
        [sym__declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_class_declaration] = 302,
        [sym_module_declaration] = 302,
        [sym__argument_list] = 304,
        [sym__call] = 302,
        [sym__command] = 302,
        [sym__function_call] = 302,
        [sym__expression] = 302,
        [sym__argument] = 302,
        [sym__primary] = 302,
        [sym__variable] = 302,
        [sym_identifier] = 302,
        [sym__terminator] = 302,
        [aux_sym_identifier_repeat1] = 302,
        [anon_sym_end] = 302,
        [anon_sym_undef] = 302,
        [anon_sym_alias] = 302,
        [anon_sym_def] = 302,
        [anon_sym_LPAREN] = 302,
        [anon_sym_class] = 302,
        [anon_sym_module] = 302,
        [anon_sym_STAR] = 304,
        [anon_sym_AMP] = 304,
        [anon_sym_super] = 302,
        [anon_sym_nil] = 302,
        [anon_sym_self] = 302,
        [anon_sym_AT] = 302,
        [anon_sym_DOLLAR] = 302,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [132] = {
        [sym__statement] = 302,
        [sym__declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_class_declaration] = 302,
        [sym_module_declaration] = 302,
        [sym__call] = 302,
        [sym__command] = 302,
        [sym__function_call] = 302,
        [sym__expression] = 302,
        [sym__argument] = 302,
        [sym__primary] = 302,
        [sym__variable] = 302,
        [sym_identifier] = 302,
        [sym__terminator] = 302,
        [aux_sym_identifier_repeat1] = 302,
        [anon_sym_end] = 302,
        [anon_sym_undef] = 302,
        [anon_sym_alias] = 302,
        [anon_sym_def] = 302,
        [anon_sym_LPAREN] = 302,
        [anon_sym_class] = 302,
        [anon_sym_module] = 302,
        [anon_sym_super] = 302,
        [anon_sym_nil] = 302,
        [anon_sym_self] = 302,
        [anon_sym_AT] = 302,
        [anon_sym_DOLLAR] = 302,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [133] = {
        [sym__terminator] = 470,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [134] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 472,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [135] = {
        [sym__terminator] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [136] = {
        [sym__terminator] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [137] = {
        [sym__terminator] = 474,
        [sym_comment] = 44,
        [sym__line_break] = 474,
        [anon_sym_SEMI] = 474,
    },
    [138] = {
        [sym__terminator] = 302,
        [aux_sym__argument_list_repeat1] = 304,
        [anon_sym_COMMA] = 304,
        [anon_sym_STAR] = 304,
        [anon_sym_AMP] = 304,
        [sym_comment] = 44,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [139] = {
        [sym__terminator] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 302,
        [anon_sym_SEMI] = 302,
    },
    [140] = {
        [sym__terminator] = 470,
        [anon_sym_AMP] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [141] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 478,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [142] = {
        [sym__terminator] = 170,
        [anon_sym_AMP] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [143] = {
        [sym__terminator] = 254,
        [anon_sym_AMP] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [144] = {
        [sym_identifier] = 480,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [145] = {
        [sym__terminator] = 482,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [146] = {
        [sym__terminator] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 484,
        [anon_sym_SEMI] = 484,
    },
    [147] = {
        [anon_sym_RPAREN] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [148] = {
        [sym__terminator] = 488,
        [aux_sym__argument_list_repeat1] = 490,
        [anon_sym_COMMA] = 426,
        [anon_sym_STAR] = 492,
        [anon_sym_AMP] = 494,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [149] = {
        [anon_sym_RPAREN] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [150] = {
        [sym_identifier] = 496,
        [aux_sym_identifier_repeat1] = 460,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [151] = {
        [sym_identifier] = 498,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [152] = {
        [sym__argument_list] = 304,
        [sym_identifier] = 304,
        [sym__terminator] = 304,
        [aux_sym__argument_list_repeat1] = 304,
        [aux_sym_identifier_repeat1] = 304,
        [anon_sym_RPAREN] = 302,
        [anon_sym_COMMA] = 304,
        [anon_sym_STAR] = 304,
        [anon_sym_AMP] = 304,
        [anon_sym_AT] = 304,
        [anon_sym_DOLLAR] = 304,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 304,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 304,
    },
    [153] = {
        [anon_sym_RPAREN] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [154] = {
        [sym__terminator] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [155] = {
        [anon_sym_RPAREN] = 474,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [156] = {
        [sym__terminator] = 500,
        [anon_sym_AMP] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [157] = {
        [sym_identifier] = 504,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [158] = {
        [sym__terminator] = 506,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [159] = {
        [anon_sym_RPAREN] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [160] = {
        [anon_sym_RPAREN] = 508,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [161] = {
        [sym__terminator] = 500,
        [anon_sym_STAR] = 510,
        [anon_sym_AMP] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [162] = {
        [sym_identifier] = 512,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [163] = {
        [sym_identifier] = 514,
        [aux_sym_identifier_repeat1] = 460,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [164] = {
        [sym_identifier] = 516,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [165] = {
        [sym__terminator] = 518,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [166] = {
        [anon_sym_RPAREN] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [167] = {
        [sym__terminator] = 518,
        [anon_sym_AMP] = 522,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [168] = {
        [sym_identifier] = 524,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [169] = {
        [sym__terminator] = 526,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [170] = {
        [anon_sym_RPAREN] = 528,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [171] = {
        [sym__terminator] = 530,
        [aux_sym__argument_list_repeat1] = 532,
        [anon_sym_COMMA] = 426,
        [anon_sym_STAR] = 530,
        [anon_sym_AMP] = 530,
        [sym_comment] = 44,
        [sym__line_break] = 530,
        [anon_sym_SEMI] = 530,
    },
    [172] = {
        [sym__terminator] = 534,
        [anon_sym_STAR] = 534,
        [anon_sym_AMP] = 534,
        [sym_comment] = 44,
        [sym__line_break] = 534,
        [anon_sym_SEMI] = 534,
    },
    [173] = {
        [sym_identifier] = 536,
        [aux_sym_identifier_repeat1] = 460,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [174] = {
        [sym__terminator] = 506,
        [anon_sym_AMP] = 538,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [175] = {
        [sym_identifier] = 540,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [176] = {
        [sym__terminator] = 542,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [177] = {
        [anon_sym_RPAREN] = 544,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [178] = {
        [sym__statement] = 546,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 548,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [179] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 552,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [180] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [181] = {
        [anon_sym_end] = 556,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [182] = {
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
    [183] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_end] = 560,
        [anon_sym_if] = 560,
        [anon_sym_while] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_until] = 560,
        [sym_comment] = 44,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [184] = {
        [sym__terminator] = 254,
        [aux_sym__argument_list_repeat1] = 254,
        [anon_sym_COMMA] = 254,
        [anon_sym_STAR] = 254,
        [anon_sym_AMP] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [185] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 562,
        [anon_sym_end] = 564,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [186] = {
        [sym__terminator] = 566,
        [aux_sym_program_repeat1] = 566,
        [anon_sym_end] = 566,
        [anon_sym_if] = 566,
        [anon_sym_while] = 566,
        [anon_sym_unless] = 566,
        [anon_sym_until] = 566,
        [sym_comment] = 44,
        [sym__line_break] = 566,
        [anon_sym_SEMI] = 566,
    },
    [187] = {
        [anon_sym_end] = 548,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [188] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [sym_comment] = 44,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [189] = {
        [sym__terminator] = 508,
        [sym_comment] = 44,
        [sym__line_break] = 508,
        [anon_sym_SEMI] = 508,
    },
    [190] = {
        [sym__terminator] = 470,
        [anon_sym_STAR] = 570,
        [anon_sym_AMP] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [191] = {
        [sym_identifier] = 572,
        [aux_sym_identifier_repeat1] = 460,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [192] = {
        [sym_identifier] = 574,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [193] = {
        [sym__terminator] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [194] = {
        [sym__terminator] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 520,
        [anon_sym_SEMI] = 520,
    },
    [195] = {
        [sym__terminator] = 576,
        [anon_sym_AMP] = 578,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [196] = {
        [sym_identifier] = 580,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [197] = {
        [sym__terminator] = 582,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [198] = {
        [sym__terminator] = 528,
        [sym_comment] = 44,
        [sym__line_break] = 528,
        [anon_sym_SEMI] = 528,
    },
    [199] = {
        [sym_identifier] = 584,
        [aux_sym_identifier_repeat1] = 460,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 462,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [200] = {
        [sym__terminator] = 482,
        [anon_sym_AMP] = 586,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [201] = {
        [sym_identifier] = 588,
        [aux_sym_identifier_repeat1] = 466,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [202] = {
        [sym__terminator] = 590,
        [sym_comment] = 44,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 434,
    },
    [203] = {
        [sym__terminator] = 544,
        [sym_comment] = 44,
        [sym__line_break] = 544,
        [anon_sym_SEMI] = 544,
    },
    [204] = {
        [sym__statement] = 592,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 564,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [205] = {
        [sym__statement] = 302,
        [sym__declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_class_declaration] = 302,
        [sym_module_declaration] = 302,
        [sym__call] = 302,
        [sym__command] = 302,
        [sym__function_call] = 302,
        [sym__expression] = 302,
        [sym__argument] = 302,
        [sym__primary] = 302,
        [sym__variable] = 302,
        [sym_identifier] = 302,
        [sym__terminator] = 304,
        [aux_sym_identifier_repeat1] = 302,
        [anon_sym_end] = 302,
        [anon_sym_undef] = 302,
        [anon_sym_alias] = 302,
        [anon_sym_def] = 302,
        [anon_sym_LPAREN] = 302,
        [anon_sym_class] = 302,
        [anon_sym_module] = 302,
        [anon_sym_super] = 302,
        [anon_sym_nil] = 302,
        [anon_sym_self] = 302,
        [anon_sym_AT] = 302,
        [anon_sym_DOLLAR] = 302,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 304,
    },
    [206] = {
        [sym__statement] = 302,
        [sym__declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_class_declaration] = 302,
        [sym_module_declaration] = 302,
        [sym__call] = 302,
        [sym__command] = 302,
        [sym__function_call] = 302,
        [sym__expression] = 302,
        [sym__argument] = 302,
        [sym__primary] = 302,
        [sym__variable] = 302,
        [sym_identifier] = 302,
        [aux_sym_identifier_repeat1] = 302,
        [anon_sym_end] = 302,
        [anon_sym_undef] = 302,
        [anon_sym_alias] = 302,
        [anon_sym_def] = 302,
        [anon_sym_LPAREN] = 302,
        [anon_sym_class] = 302,
        [anon_sym_module] = 302,
        [anon_sym_super] = 302,
        [anon_sym_nil] = 302,
        [anon_sym_self] = 302,
        [anon_sym_AT] = 302,
        [anon_sym_DOLLAR] = 302,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 302,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [207] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_end] = 548,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [208] = {
        [anon_sym_end] = 552,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [209] = {
        [sym_identifier] = 392,
        [sym__function_name] = 392,
        [aux_sym_identifier_repeat1] = 392,
        [anon_sym_PIPE] = 392,
        [anon_sym_AT] = 392,
        [anon_sym_DOLLAR] = 392,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 392,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 392,
        [sym__line_break] = 44,
    },
    [210] = {
        [sym_identifier] = 270,
        [sym__function_name] = 300,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_PIPE] = 270,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 270,
        [sym__line_break] = 44,
    },
    [211] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 596,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [212] = {
        [sym_identifier] = 170,
        [sym__function_name] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_PIPE] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 170,
        [sym__line_break] = 44,
    },
    [213] = {
        [sym_identifier] = 254,
        [sym__function_name] = 254,
        [aux_sym_identifier_repeat1] = 254,
        [anon_sym_PIPE] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_DOLLAR] = 254,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 254,
        [sym__line_break] = 44,
    },
    [214] = {
        [sym__terminator] = 392,
        [aux_sym_program_repeat1] = 392,
        [anon_sym_end] = 392,
        [anon_sym_if] = 392,
        [anon_sym_while] = 392,
        [anon_sym_unless] = 392,
        [anon_sym_until] = 392,
        [sym_comment] = 44,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [215] = {
        [sym__terminator] = 598,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_end] = 598,
        [anon_sym_if] = 598,
        [anon_sym_while] = 598,
        [anon_sym_unless] = 598,
        [anon_sym_until] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [216] = {
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [anon_sym_end] = 254,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [217] = {
        [sym__statement] = 600,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_PIPE] = 602,
        [anon_sym_end] = 300,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [218] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_end] = 606,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [219] = {
        [sym__statement] = 608,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 606,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [220] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_end] = 612,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [221] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [222] = {
        [anon_sym_end] = 616,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [223] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_end] = 618,
        [anon_sym_if] = 618,
        [anon_sym_while] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_until] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [224] = {
        [sym__terminator] = 620,
        [aux_sym_program_repeat1] = 620,
        [anon_sym_end] = 620,
        [anon_sym_if] = 620,
        [anon_sym_while] = 620,
        [anon_sym_unless] = 620,
        [anon_sym_until] = 620,
        [sym_comment] = 44,
        [sym__line_break] = 620,
        [anon_sym_SEMI] = 620,
    },
    [225] = {
        [anon_sym_end] = 612,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [226] = {
        [anon_sym_end] = 622,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [227] = {
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
    [228] = {
        [sym__terminator] = 308,
        [aux_sym_program_repeat1] = 308,
        [anon_sym_if] = 308,
        [anon_sym_while] = 308,
        [anon_sym_unless] = 308,
        [anon_sym_until] = 308,
        [anon_sym_RPAREN] = 308,
        [sym_comment] = 44,
        [sym__line_break] = 308,
        [anon_sym_SEMI] = 308,
    },
    [229] = {
        [sym__statement] = 624,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 626,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_LT] = 628,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [230] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 630,
        [anon_sym_end] = 632,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [231] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [anon_sym_RPAREN] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [232] = {
        [sym_identifier] = 634,
        [aux_sym_identifier_repeat1] = 332,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [233] = {
        [sym__statement] = 636,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_class_declaration_repeat1] = 638,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 640,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_COLON_COLON] = 342,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [234] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 642,
        [anon_sym_end] = 644,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [235] = {
        [sym__statement] = 646,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 644,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [236] = {
        [sym__terminator] = 352,
        [aux_sym_program_repeat1] = 352,
        [anon_sym_if] = 352,
        [anon_sym_while] = 352,
        [anon_sym_unless] = 352,
        [anon_sym_until] = 352,
        [anon_sym_RPAREN] = 352,
        [sym_comment] = 44,
        [sym__line_break] = 352,
        [anon_sym_SEMI] = 352,
    },
    [237] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 648,
        [anon_sym_end] = 650,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [238] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [anon_sym_RPAREN] = 366,
        [sym_comment] = 44,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [239] = {
        [anon_sym_end] = 652,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [240] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [anon_sym_RPAREN] = 370,
        [sym_comment] = 44,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [241] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [anon_sym_RPAREN] = 372,
        [sym_comment] = 44,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [242] = {
        [anon_sym_end] = 650,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [243] = {
        [anon_sym_end] = 640,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [244] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [anon_sym_RPAREN] = 374,
        [sym_comment] = 44,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [245] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 654,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 656,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [246] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 212,
        [anon_sym_if] = 212,
        [anon_sym_while] = 212,
        [anon_sym_unless] = 212,
        [anon_sym_until] = 212,
        [anon_sym_RPAREN] = 212,
        [sym_comment] = 44,
        [sym__line_break] = 212,
        [anon_sym_SEMI] = 212,
    },
    [247] = {
        [anon_sym_RPAREN] = 658,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [248] = {
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
    [249] = {
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
    [250] = {
        [sym__argument_list] = 660,
        [sym_identifier] = 396,
        [sym__terminator] = 662,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_LPAREN] = 664,
        [anon_sym_STAR] = 404,
        [anon_sym_AMP] = 406,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 412,
    },
    [251] = {
        [sym__terminator] = 666,
        [sym_comment] = 44,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 420,
    },
    [252] = {
        [sym__statement] = 668,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [sym__terminator] = 438,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 670,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [253] = {
        [sym__argument_list] = 672,
        [sym_identifier] = 446,
        [sym__terminator] = 448,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_STAR] = 450,
        [anon_sym_AMP] = 452,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [254] = {
        [anon_sym_RPAREN] = 674,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [255] = {
        [sym__statement] = 676,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 678,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [256] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 680,
        [anon_sym_end] = 682,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [257] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [anon_sym_RPAREN] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [258] = {
        [anon_sym_end] = 684,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [259] = {
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
    [260] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_if] = 560,
        [anon_sym_while] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_until] = 560,
        [anon_sym_RPAREN] = 560,
        [sym_comment] = 44,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [261] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_end] = 688,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [262] = {
        [sym__terminator] = 566,
        [aux_sym_program_repeat1] = 566,
        [anon_sym_if] = 566,
        [anon_sym_while] = 566,
        [anon_sym_unless] = 566,
        [anon_sym_until] = 566,
        [anon_sym_RPAREN] = 566,
        [sym_comment] = 44,
        [sym__line_break] = 566,
        [anon_sym_SEMI] = 566,
    },
    [263] = {
        [anon_sym_end] = 678,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [264] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [anon_sym_RPAREN] = 568,
        [sym_comment] = 44,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [265] = {
        [sym__statement] = 690,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 688,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [266] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_end] = 678,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [267] = {
        [anon_sym_end] = 682,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [268] = {
        [sym_identifier] = 200,
        [sym__function_name] = 384,
        [aux_sym_identifier_repeat1] = 114,
        [anon_sym_PIPE] = 200,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 130,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 200,
        [sym__line_break] = 44,
    },
    [269] = {
        [sym__terminator] = 392,
        [aux_sym_program_repeat1] = 392,
        [anon_sym_if] = 392,
        [anon_sym_while] = 392,
        [anon_sym_unless] = 392,
        [anon_sym_until] = 392,
        [anon_sym_RPAREN] = 392,
        [sym_comment] = 44,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [270] = {
        [sym__terminator] = 598,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_if] = 598,
        [anon_sym_while] = 598,
        [anon_sym_unless] = 598,
        [anon_sym_until] = 598,
        [anon_sym_RPAREN] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [271] = {
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [anon_sym_RPAREN] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [272] = {
        [sym__statement] = 694,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_PIPE] = 696,
        [anon_sym_end] = 384,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [273] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 698,
        [anon_sym_end] = 700,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [274] = {
        [sym__statement] = 702,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 700,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [275] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 704,
        [anon_sym_end] = 706,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [276] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [anon_sym_RPAREN] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [277] = {
        [anon_sym_end] = 708,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [278] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [anon_sym_if] = 618,
        [anon_sym_while] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_until] = 618,
        [anon_sym_RPAREN] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [279] = {
        [sym__terminator] = 620,
        [aux_sym_program_repeat1] = 620,
        [anon_sym_if] = 620,
        [anon_sym_while] = 620,
        [anon_sym_unless] = 620,
        [anon_sym_until] = 620,
        [anon_sym_RPAREN] = 620,
        [sym_comment] = 44,
        [sym__line_break] = 620,
        [anon_sym_SEMI] = 620,
    },
    [280] = {
        [anon_sym_end] = 706,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [281] = {
        [anon_sym_RPAREN] = 710,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [282] = {
        [aux_sym__call_arguments_repeat1] = 386,
        [anon_sym_do] = 386,
        [anon_sym_COMMA] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [283] = {
        [aux_sym__call_arguments_repeat1] = 388,
        [anon_sym_do] = 388,
        [anon_sym_COMMA] = 388,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [284] = {
        [aux_sym__call_arguments_repeat1] = 254,
        [anon_sym_do] = 254,
        [anon_sym_COMMA] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [285] = {
        [anon_sym_do] = 712,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [286] = {
        [sym__argument] = 714,
        [sym__primary] = 150,
        [sym__variable] = 152,
        [sym_identifier] = 154,
        [aux_sym_identifier_repeat1] = 156,
        [anon_sym_LPAREN] = 160,
        [anon_sym_nil] = 154,
        [anon_sym_self] = 154,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 164,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [287] = {
        [aux_sym__call_arguments_repeat1] = 716,
        [anon_sym_do] = 718,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [288] = {
        [anon_sym_do] = 720,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [289] = {
        [sym__statement] = 722,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 724,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [290] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 726,
        [anon_sym_end] = 728,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [291] = {
        [sym__terminator] = 268,
        [aux_sym_program_repeat1] = 268,
        [ts_builtin_sym_end] = 268,
        [anon_sym_if] = 268,
        [anon_sym_while] = 268,
        [anon_sym_unless] = 268,
        [anon_sym_until] = 268,
        [sym_comment] = 44,
        [sym__line_break] = 268,
        [anon_sym_SEMI] = 268,
    },
    [292] = {
        [anon_sym_end] = 730,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [293] = {
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
    [294] = {
        [sym__terminator] = 308,
        [aux_sym_program_repeat1] = 308,
        [ts_builtin_sym_end] = 308,
        [anon_sym_if] = 308,
        [anon_sym_while] = 308,
        [anon_sym_unless] = 308,
        [anon_sym_until] = 308,
        [sym_comment] = 44,
        [sym__line_break] = 308,
        [anon_sym_SEMI] = 308,
    },
    [295] = {
        [sym__statement] = 732,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 734,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_LT] = 736,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [296] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 738,
        [anon_sym_end] = 740,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [297] = {
        [sym__terminator] = 328,
        [aux_sym_program_repeat1] = 328,
        [ts_builtin_sym_end] = 328,
        [anon_sym_if] = 328,
        [anon_sym_while] = 328,
        [anon_sym_unless] = 328,
        [anon_sym_until] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 328,
        [anon_sym_SEMI] = 328,
    },
    [298] = {
        [sym_identifier] = 742,
        [aux_sym_identifier_repeat1] = 332,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [299] = {
        [sym__statement] = 744,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_class_declaration_repeat1] = 746,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 748,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_COLON_COLON] = 342,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [300] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 750,
        [anon_sym_end] = 752,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [301] = {
        [sym__statement] = 754,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 752,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [302] = {
        [sym__terminator] = 352,
        [aux_sym_program_repeat1] = 352,
        [ts_builtin_sym_end] = 352,
        [anon_sym_if] = 352,
        [anon_sym_while] = 352,
        [anon_sym_unless] = 352,
        [anon_sym_until] = 352,
        [sym_comment] = 44,
        [sym__line_break] = 352,
        [anon_sym_SEMI] = 352,
    },
    [303] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 756,
        [anon_sym_end] = 758,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [304] = {
        [sym__terminator] = 366,
        [aux_sym_program_repeat1] = 366,
        [ts_builtin_sym_end] = 366,
        [anon_sym_if] = 366,
        [anon_sym_while] = 366,
        [anon_sym_unless] = 366,
        [anon_sym_until] = 366,
        [sym_comment] = 44,
        [sym__line_break] = 366,
        [anon_sym_SEMI] = 366,
    },
    [305] = {
        [anon_sym_end] = 760,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [306] = {
        [sym__terminator] = 370,
        [aux_sym_program_repeat1] = 370,
        [ts_builtin_sym_end] = 370,
        [anon_sym_if] = 370,
        [anon_sym_while] = 370,
        [anon_sym_unless] = 370,
        [anon_sym_until] = 370,
        [sym_comment] = 44,
        [sym__line_break] = 370,
        [anon_sym_SEMI] = 370,
    },
    [307] = {
        [sym__terminator] = 372,
        [aux_sym_program_repeat1] = 372,
        [ts_builtin_sym_end] = 372,
        [anon_sym_if] = 372,
        [anon_sym_while] = 372,
        [anon_sym_unless] = 372,
        [anon_sym_until] = 372,
        [sym_comment] = 44,
        [sym__line_break] = 372,
        [anon_sym_SEMI] = 372,
    },
    [308] = {
        [anon_sym_end] = 758,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [309] = {
        [anon_sym_end] = 748,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [310] = {
        [sym__terminator] = 374,
        [aux_sym_program_repeat1] = 374,
        [ts_builtin_sym_end] = 374,
        [anon_sym_if] = 374,
        [anon_sym_while] = 374,
        [anon_sym_unless] = 374,
        [anon_sym_until] = 374,
        [sym_comment] = 44,
        [sym__line_break] = 374,
        [anon_sym_SEMI] = 374,
    },
    [311] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 762,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 764,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [312] = {
        [sym__terminator] = 212,
        [aux_sym_program_repeat1] = 212,
        [ts_builtin_sym_end] = 212,
        [anon_sym_if] = 212,
        [anon_sym_while] = 212,
        [anon_sym_unless] = 212,
        [anon_sym_until] = 212,
        [sym_comment] = 44,
        [sym__line_break] = 212,
        [anon_sym_SEMI] = 212,
    },
    [313] = {
        [anon_sym_RPAREN] = 766,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [314] = {
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
    [315] = {
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
    [316] = {
        [sym__argument_list] = 768,
        [sym_identifier] = 396,
        [sym__terminator] = 770,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_LPAREN] = 772,
        [anon_sym_STAR] = 404,
        [anon_sym_AMP] = 406,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 410,
        [anon_sym_SEMI] = 412,
    },
    [317] = {
        [sym__terminator] = 774,
        [sym_comment] = 44,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 420,
    },
    [318] = {
        [sym__statement] = 776,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [sym__terminator] = 438,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 778,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [319] = {
        [sym__argument_list] = 780,
        [sym_identifier] = 446,
        [sym__terminator] = 448,
        [aux_sym_identifier_repeat1] = 400,
        [anon_sym_STAR] = 450,
        [anon_sym_AMP] = 452,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 408,
        [sym_comment] = 44,
        [sym__line_break] = 454,
        [anon_sym_SEMI] = 456,
    },
    [320] = {
        [anon_sym_RPAREN] = 782,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [321] = {
        [sym__statement] = 784,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 786,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [322] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 788,
        [anon_sym_end] = 790,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [323] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [ts_builtin_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [sym_comment] = 44,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [324] = {
        [anon_sym_end] = 792,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [325] = {
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
    [326] = {
        [sym__terminator] = 560,
        [aux_sym_program_repeat1] = 560,
        [ts_builtin_sym_end] = 560,
        [anon_sym_if] = 560,
        [anon_sym_while] = 560,
        [anon_sym_unless] = 560,
        [anon_sym_until] = 560,
        [sym_comment] = 44,
        [sym__line_break] = 560,
        [anon_sym_SEMI] = 560,
    },
    [327] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 794,
        [anon_sym_end] = 796,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [328] = {
        [sym__terminator] = 566,
        [aux_sym_program_repeat1] = 566,
        [ts_builtin_sym_end] = 566,
        [anon_sym_if] = 566,
        [anon_sym_while] = 566,
        [anon_sym_unless] = 566,
        [anon_sym_until] = 566,
        [sym_comment] = 44,
        [sym__line_break] = 566,
        [anon_sym_SEMI] = 566,
    },
    [329] = {
        [anon_sym_end] = 786,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [330] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [ts_builtin_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [sym_comment] = 44,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [331] = {
        [sym__statement] = 798,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 796,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [332] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 800,
        [anon_sym_end] = 786,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [333] = {
        [anon_sym_end] = 790,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [334] = {
        [sym_identifier] = 78,
        [sym__function_name] = 802,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 44,
    },
    [335] = {
        [sym__terminator] = 392,
        [aux_sym_program_repeat1] = 392,
        [ts_builtin_sym_end] = 392,
        [anon_sym_if] = 392,
        [anon_sym_while] = 392,
        [anon_sym_unless] = 392,
        [anon_sym_until] = 392,
        [sym_comment] = 44,
        [sym__line_break] = 392,
        [anon_sym_SEMI] = 392,
    },
    [336] = {
        [sym__terminator] = 306,
        [aux_sym_program_repeat1] = 306,
        [ts_builtin_sym_end] = 306,
        [anon_sym_if] = 306,
        [anon_sym_while] = 306,
        [anon_sym_unless] = 306,
        [anon_sym_until] = 306,
        [sym_comment] = 44,
        [sym__line_break] = 306,
        [anon_sym_SEMI] = 306,
    },
    [337] = {
        [sym__terminator] = 598,
        [aux_sym_program_repeat1] = 598,
        [ts_builtin_sym_end] = 598,
        [anon_sym_if] = 598,
        [anon_sym_while] = 598,
        [anon_sym_unless] = 598,
        [anon_sym_until] = 598,
        [sym_comment] = 44,
        [sym__line_break] = 598,
        [anon_sym_SEMI] = 598,
    },
    [338] = {
        [sym__terminator] = 254,
        [aux_sym_program_repeat1] = 254,
        [ts_builtin_sym_end] = 254,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 254,
        [anon_sym_SEMI] = 254,
    },
    [339] = {
        [sym__statement] = 804,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_PIPE] = 806,
        [anon_sym_end] = 802,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [340] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 808,
        [anon_sym_end] = 810,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [341] = {
        [sym__statement] = 812,
        [sym__declaration] = 220,
        [sym_method_declaration] = 222,
        [sym_class_declaration] = 222,
        [sym_module_declaration] = 222,
        [sym__call] = 224,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 220,
        [sym__argument] = 226,
        [sym__primary] = 228,
        [sym__variable] = 230,
        [sym_identifier] = 232,
        [aux_sym_identifier_repeat1] = 234,
        [anon_sym_end] = 810,
        [anon_sym_undef] = 238,
        [anon_sym_alias] = 240,
        [anon_sym_def] = 242,
        [anon_sym_LPAREN] = 244,
        [anon_sym_class] = 246,
        [anon_sym_module] = 248,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 232,
        [anon_sym_self] = 232,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 250,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [342] = {
        [sym__terminator] = 256,
        [aux_sym_program_repeat1] = 814,
        [anon_sym_end] = 816,
        [anon_sym_if] = 262,
        [anon_sym_while] = 262,
        [anon_sym_unless] = 262,
        [anon_sym_until] = 262,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [343] = {
        [sym__terminator] = 614,
        [aux_sym_program_repeat1] = 614,
        [ts_builtin_sym_end] = 614,
        [anon_sym_if] = 614,
        [anon_sym_while] = 614,
        [anon_sym_unless] = 614,
        [anon_sym_until] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 614,
        [anon_sym_SEMI] = 614,
    },
    [344] = {
        [anon_sym_end] = 818,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [345] = {
        [sym__terminator] = 618,
        [aux_sym_program_repeat1] = 618,
        [ts_builtin_sym_end] = 618,
        [anon_sym_if] = 618,
        [anon_sym_while] = 618,
        [anon_sym_unless] = 618,
        [anon_sym_until] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 618,
        [anon_sym_SEMI] = 618,
    },
    [346] = {
        [sym__terminator] = 620,
        [aux_sym_program_repeat1] = 620,
        [ts_builtin_sym_end] = 620,
        [anon_sym_if] = 620,
        [anon_sym_while] = 620,
        [anon_sym_unless] = 620,
        [anon_sym_until] = 620,
        [sym_comment] = 44,
        [sym__line_break] = 620,
        [anon_sym_SEMI] = 620,
    },
    [347] = {
        [anon_sym_end] = 816,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [348] = {
        [sym__statement] = 820,
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
    [349] = {
        [ts_builtin_sym_end] = 822,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [350] = {
        [sym__expression] = 802,
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
    [351] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 824,
        [ts_builtin_sym_end] = 312,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [352] = {
        [ts_builtin_sym_end] = 314,
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
    [48] = {.count = 1}, SHIFT(348, 0),
    [50] = {.count = 1}, SHIFT(349, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(350, 0),
    [56] = {.count = 1}, SHIFT(77, 0),
    [58] = {.count = 1}, SHIFT(78, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(339, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [76] = {.count = 1}, SHIFT(338, 0),
    [78] = {.count = 1}, SHIFT(335, 0),
    [80] = {.count = 1}, SHIFT(337, 0),
    [82] = {.count = 1}, SHIFT(209, 0),
    [84] = {.count = 1}, SHIFT(334, 0),
    [86] = {.count = 1}, SHIFT(211, 0),
    [88] = {.count = 1}, SHIFT(212, 0),
    [90] = {.count = 1}, SHIFT(118, 0),
    [92] = {.count = 1}, SHIFT(316, 0),
    [94] = {.count = 1}, SHIFT(120, 0),
    [96] = {.count = 1}, SHIFT(121, 0),
    [98] = {.count = 1}, SHIFT(311, 0),
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
    [124] = {.count = 1}, SHIFT(312, 0),
    [126] = {.count = 1}, SHIFT(46, 0),
    [128] = {.count = 1}, SHIFT(47, 0),
    [130] = {.count = 1}, SHIFT(48, 0),
    [132] = {.count = 1}, SHIFT(295, 0),
    [134] = {.count = 1}, SHIFT(84, 0),
    [136] = {.count = 1}, SHIFT(85, 0),
    [138] = {.count = 1}, SHIFT(289, 0),
    [140] = {.count = 1}, SHIFT(50, 0),
    [142] = {.count = 1}, SHIFT(51, 0),
    [144] = {.count = 1}, SHIFT(22, 0),
    [146] = {.count = 1}, SHIFT(23, 0),
    [148] = {.count = 1}, SHIFT(24, 0),
    [150] = {.count = 1}, SHIFT(25, 0),
    [152] = {.count = 1}, SHIFT(26, 0),
    [154] = {.count = 1}, SHIFT(27, 0),
    [156] = {.count = 1}, SHIFT(28, 0),
    [158] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [160] = {.count = 1}, SHIFT(29, 0),
    [162] = {.count = 1}, SHIFT(30, 0),
    [164] = {.count = 1}, SHIFT(31, 0),
    [166] = {.count = 1}, SHIFT(21, 0),
    [168] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 1, 0),
    [170] = {.count = 1}, REDUCE(sym_identifier, 1, 0),
    [172] = {.count = 1}, REDUCE(aux_sym_identifier_repeat1, 2, 0),
    [174] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [176] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [178] = {.count = 1}, SHIFT(285, 0),
    [180] = {.count = 1}, SHIFT(286, 0),
    [182] = {.count = 1}, SHIFT(284, 0),
    [184] = {.count = 1}, SHIFT(32, 0),
    [186] = {.count = 1}, SHIFT(45, 0),
    [188] = {.count = 1}, SHIFT(110, 0),
    [190] = {.count = 1}, SHIFT(281, 0),
    [192] = {.count = 1}, SHIFT(112, 0),
    [194] = {.count = 1}, SHIFT(282, 0),
    [196] = {.count = 1}, SHIFT(272, 0),
    [198] = {.count = 1}, SHIFT(271, 0),
    [200] = {.count = 1}, SHIFT(269, 0),
    [202] = {.count = 1}, SHIFT(270, 0),
    [204] = {.count = 1}, SHIFT(268, 0),
    [206] = {.count = 1}, SHIFT(250, 0),
    [208] = {.count = 1}, SHIFT(245, 0),
    [210] = {.count = 1}, SHIFT(246, 0),
    [212] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [214] = {.count = 1}, SHIFT(229, 0),
    [216] = {.count = 1}, SHIFT(49, 0),
    [218] = {.count = 1}, SHIFT(53, 0),
    [220] = {.count = 1}, SHIFT(54, 0),
    [222] = {.count = 1}, SHIFT(55, 0),
    [224] = {.count = 1}, SHIFT(56, 0),
    [226] = {.count = 1}, SHIFT(57, 0),
    [228] = {.count = 1}, SHIFT(58, 0),
    [230] = {.count = 1}, SHIFT(59, 0),
    [232] = {.count = 1}, SHIFT(60, 0),
    [234] = {.count = 1}, SHIFT(61, 0),
    [236] = {.count = 1}, SHIFT(62, 0),
    [238] = {.count = 1}, SHIFT(63, 0),
    [240] = {.count = 1}, SHIFT(64, 0),
    [242] = {.count = 1}, SHIFT(65, 0),
    [244] = {.count = 1}, SHIFT(66, 0),
    [246] = {.count = 1}, SHIFT(67, 0),
    [248] = {.count = 1}, SHIFT(68, 0),
    [250] = {.count = 1}, SHIFT(69, 0),
    [252] = {.count = 1}, SHIFT(52, 0),
    [254] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [256] = {.count = 1}, SHIFT(73, 0),
    [258] = {.count = 1}, SHIFT(226, 0),
    [260] = {.count = 1}, SHIFT(227, 0),
    [262] = {.count = 1}, SHIFT(76, 0),
    [264] = {.count = 1}, SHIFT(217, 0),
    [266] = {.count = 1}, SHIFT(216, 0),
    [268] = {.count = 1}, REDUCE(sym_module_declaration, 3, 0),
    [270] = {.count = 1}, SHIFT(214, 0),
    [272] = {.count = 1}, SHIFT(215, 0),
    [274] = {.count = 1}, SHIFT(210, 0),
    [276] = {.count = 1}, SHIFT(119, 0),
    [278] = {.count = 1}, SHIFT(108, 0),
    [280] = {.count = 1}, SHIFT(109, 0),
    [282] = {.count = 1}, SHIFT(83, 0),
    [284] = {.count = 1}, SHIFT(70, 0),
    [286] = {.count = 1}, SHIFT(71, 0),
    [288] = {.count = 1}, SHIFT(72, 0),
    [290] = {.count = 1}, SHIFT(74, 0),
    [292] = {.count = 1}, SHIFT(75, 0),
    [294] = {.count = 1}, SHIFT(81, 0),
    [296] = {.count = 1}, SHIFT(80, 0),
    [298] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [300] = {.count = 1}, SHIFT(79, 0),
    [302] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [304] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [306] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [308] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [310] = {.count = 1}, SHIFT(82, 0),
    [312] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [314] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [316] = {.count = 1}, SHIFT(87, 0),
    [318] = {.count = 1}, SHIFT(88, 0),
    [320] = {.count = 1}, SHIFT(89, 0),
    [322] = {.count = 1}, SHIFT(86, 0),
    [324] = {.count = 1}, SHIFT(106, 0),
    [326] = {.count = 1}, SHIFT(107, 0),
    [328] = {.count = 1}, REDUCE(sym_class_declaration, 3, 0),
    [330] = {.count = 1}, SHIFT(90, 0),
    [332] = {.count = 1}, SHIFT(91, 0),
    [334] = {.count = 1}, SHIFT(92, 0),
    [336] = {.count = 1}, SHIFT(94, 0),
    [338] = {.count = 1}, SHIFT(95, 0),
    [340] = {.count = 1}, SHIFT(96, 0),
    [342] = {.count = 1}, SHIFT(97, 0),
    [344] = {.count = 1}, SHIFT(93, 0),
    [346] = {.count = 1}, SHIFT(105, 0),
    [348] = {.count = 1}, SHIFT(101, 0),
    [350] = {.count = 1}, SHIFT(100, 0),
    [352] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [354] = {.count = 1}, SHIFT(98, 0),
    [356] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [358] = {.count = 1}, SHIFT(99, 0),
    [360] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [362] = {.count = 1}, SHIFT(102, 0),
    [364] = {.count = 1}, SHIFT(103, 0),
    [366] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [368] = {.count = 1}, SHIFT(104, 0),
    [370] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [372] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [374] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [376] = {.count = 1}, SHIFT(111, 0),
    [378] = {.count = 1}, SHIFT(113, 0),
    [380] = {.count = 1}, SHIFT(116, 0),
    [382] = {.count = 1}, SHIFT(115, 0),
    [384] = {.count = 1}, SHIFT(114, 0),
    [386] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [388] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [390] = {.count = 1}, SHIFT(117, 0),
    [392] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [394] = {.count = 1}, SHIFT(123, 0),
    [396] = {.count = 1}, SHIFT(124, 0),
    [398] = {.count = 1}, SHIFT(125, 0),
    [400] = {.count = 1}, SHIFT(126, 0),
    [402] = {.count = 1}, SHIFT(127, 0),
    [404] = {.count = 1}, SHIFT(128, 0),
    [406] = {.count = 1}, SHIFT(129, 0),
    [408] = {.count = 1}, SHIFT(130, 0),
    [410] = {.count = 1}, SHIFT(131, 0),
    [412] = {.count = 1}, SHIFT(132, 0),
    [414] = {.count = 1}, SHIFT(122, 0),
    [416] = {.count = 1}, SHIFT(204, 0),
    [418] = {.count = 1}, SHIFT(205, 0),
    [420] = {.count = 1}, SHIFT(206, 0),
    [422] = {.count = 1}, SHIFT(189, 0),
    [424] = {.count = 1}, SHIFT(190, 0),
    [426] = {.count = 1}, SHIFT(162, 0),
    [428] = {.count = 1}, SHIFT(191, 0),
    [430] = {.count = 1}, SHIFT(192, 0),
    [432] = {.count = 1}, SHIFT(138, 0),
    [434] = {.count = 1}, SHIFT(139, 0),
    [436] = {.count = 1}, SHIFT(185, 0),
    [438] = {.count = 1}, REDUCE(sym__argument_list, 1, 0),
    [440] = {.count = 1}, SHIFT(186, 0),
    [442] = {.count = 1}, SHIFT(184, 0),
    [444] = {.count = 1}, SHIFT(147, 0),
    [446] = {.count = 1}, SHIFT(148, 0),
    [448] = {.count = 1}, SHIFT(149, 0),
    [450] = {.count = 1}, SHIFT(150, 0),
    [452] = {.count = 1}, SHIFT(151, 0),
    [454] = {.count = 1}, SHIFT(152, 0),
    [456] = {.count = 1}, SHIFT(153, 0),
    [458] = {.count = 1}, SHIFT(140, 0),
    [460] = {.count = 1}, SHIFT(141, 0),
    [462] = {.count = 1}, SHIFT(142, 0),
    [464] = {.count = 1}, SHIFT(133, 0),
    [466] = {.count = 1}, SHIFT(134, 0),
    [468] = {.count = 1}, SHIFT(135, 0),
    [470] = {.count = 1}, SHIFT(137, 0),
    [472] = {.count = 1}, SHIFT(136, 0),
    [474] = {.count = 1}, REDUCE(sym__argument_list, 3, 0),
    [476] = {.count = 1}, SHIFT(144, 0),
    [478] = {.count = 1}, SHIFT(143, 0),
    [480] = {.count = 1}, SHIFT(145, 0),
    [482] = {.count = 1}, SHIFT(146, 0),
    [484] = {.count = 1}, REDUCE(sym__argument_list, 5, 0),
    [486] = {.count = 1}, SHIFT(178, 0),
    [488] = {.count = 1}, SHIFT(160, 0),
    [490] = {.count = 1}, SHIFT(161, 0),
    [492] = {.count = 1}, SHIFT(163, 0),
    [494] = {.count = 1}, SHIFT(164, 0),
    [496] = {.count = 1}, SHIFT(156, 0),
    [498] = {.count = 1}, SHIFT(154, 0),
    [500] = {.count = 1}, SHIFT(155, 0),
    [502] = {.count = 1}, SHIFT(157, 0),
    [504] = {.count = 1}, SHIFT(158, 0),
    [506] = {.count = 1}, SHIFT(159, 0),
    [508] = {.count = 1}, REDUCE(sym__argument_list, 2, 0),
    [510] = {.count = 1}, SHIFT(173, 0),
    [512] = {.count = 1}, SHIFT(171, 0),
    [514] = {.count = 1}, SHIFT(167, 0),
    [516] = {.count = 1}, SHIFT(165, 0),
    [518] = {.count = 1}, SHIFT(166, 0),
    [520] = {.count = 1}, REDUCE(sym__argument_list, 4, 0),
    [522] = {.count = 1}, SHIFT(168, 0),
    [524] = {.count = 1}, SHIFT(169, 0),
    [526] = {.count = 1}, SHIFT(170, 0),
    [528] = {.count = 1}, REDUCE(sym__argument_list, 6, 0),
    [530] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 2, 0),
    [532] = {.count = 1}, SHIFT(172, 0),
    [534] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 3, 0),
    [536] = {.count = 1}, SHIFT(174, 0),
    [538] = {.count = 1}, SHIFT(175, 0),
    [540] = {.count = 1}, SHIFT(176, 0),
    [542] = {.count = 1}, SHIFT(177, 0),
    [544] = {.count = 1}, REDUCE(sym__argument_list, 7, 0),
    [546] = {.count = 1}, SHIFT(179, 0),
    [548] = {.count = 1}, SHIFT(180, 0),
    [550] = {.count = 1}, SHIFT(181, 0),
    [552] = {.count = 1}, SHIFT(182, 0),
    [554] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [556] = {.count = 1}, SHIFT(183, 0),
    [558] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [560] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [562] = {.count = 1}, SHIFT(187, 0),
    [564] = {.count = 1}, SHIFT(188, 0),
    [566] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [568] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [570] = {.count = 1}, SHIFT(199, 0),
    [572] = {.count = 1}, SHIFT(195, 0),
    [574] = {.count = 1}, SHIFT(193, 0),
    [576] = {.count = 1}, SHIFT(194, 0),
    [578] = {.count = 1}, SHIFT(196, 0),
    [580] = {.count = 1}, SHIFT(197, 0),
    [582] = {.count = 1}, SHIFT(198, 0),
    [584] = {.count = 1}, SHIFT(200, 0),
    [586] = {.count = 1}, SHIFT(201, 0),
    [588] = {.count = 1}, SHIFT(202, 0),
    [590] = {.count = 1}, SHIFT(203, 0),
    [592] = {.count = 1}, SHIFT(207, 0),
    [594] = {.count = 1}, SHIFT(208, 0),
    [596] = {.count = 1}, SHIFT(213, 0),
    [598] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [600] = {.count = 1}, SHIFT(218, 0),
    [602] = {.count = 1}, SHIFT(219, 0),
    [604] = {.count = 1}, SHIFT(225, 0),
    [606] = {.count = 1}, SHIFT(221, 0),
    [608] = {.count = 1}, SHIFT(220, 0),
    [610] = {.count = 1}, SHIFT(222, 0),
    [612] = {.count = 1}, SHIFT(223, 0),
    [614] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [616] = {.count = 1}, SHIFT(224, 0),
    [618] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [620] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [622] = {.count = 1}, SHIFT(228, 0),
    [624] = {.count = 1}, SHIFT(230, 0),
    [626] = {.count = 1}, SHIFT(231, 0),
    [628] = {.count = 1}, SHIFT(232, 0),
    [630] = {.count = 1}, SHIFT(243, 0),
    [632] = {.count = 1}, SHIFT(244, 0),
    [634] = {.count = 1}, SHIFT(233, 0),
    [636] = {.count = 1}, SHIFT(234, 0),
    [638] = {.count = 1}, SHIFT(235, 0),
    [640] = {.count = 1}, SHIFT(236, 0),
    [642] = {.count = 1}, SHIFT(242, 0),
    [644] = {.count = 1}, SHIFT(238, 0),
    [646] = {.count = 1}, SHIFT(237, 0),
    [648] = {.count = 1}, SHIFT(239, 0),
    [650] = {.count = 1}, SHIFT(240, 0),
    [652] = {.count = 1}, SHIFT(241, 0),
    [654] = {.count = 1}, SHIFT(247, 0),
    [656] = {.count = 1}, SHIFT(248, 0),
    [658] = {.count = 1}, SHIFT(249, 0),
    [660] = {.count = 1}, SHIFT(251, 0),
    [662] = {.count = 1}, SHIFT(252, 0),
    [664] = {.count = 1}, SHIFT(253, 0),
    [666] = {.count = 1}, SHIFT(265, 0),
    [668] = {.count = 1}, SHIFT(261, 0),
    [670] = {.count = 1}, SHIFT(262, 0),
    [672] = {.count = 1}, SHIFT(254, 0),
    [674] = {.count = 1}, SHIFT(255, 0),
    [676] = {.count = 1}, SHIFT(256, 0),
    [678] = {.count = 1}, SHIFT(257, 0),
    [680] = {.count = 1}, SHIFT(258, 0),
    [682] = {.count = 1}, SHIFT(259, 0),
    [684] = {.count = 1}, SHIFT(260, 0),
    [686] = {.count = 1}, SHIFT(263, 0),
    [688] = {.count = 1}, SHIFT(264, 0),
    [690] = {.count = 1}, SHIFT(266, 0),
    [692] = {.count = 1}, SHIFT(267, 0),
    [694] = {.count = 1}, SHIFT(273, 0),
    [696] = {.count = 1}, SHIFT(274, 0),
    [698] = {.count = 1}, SHIFT(280, 0),
    [700] = {.count = 1}, SHIFT(276, 0),
    [702] = {.count = 1}, SHIFT(275, 0),
    [704] = {.count = 1}, SHIFT(277, 0),
    [706] = {.count = 1}, SHIFT(278, 0),
    [708] = {.count = 1}, SHIFT(279, 0),
    [710] = {.count = 1}, SHIFT(283, 0),
    [712] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [714] = {.count = 1}, SHIFT(287, 0),
    [716] = {.count = 1}, SHIFT(288, 0),
    [718] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [720] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [722] = {.count = 1}, SHIFT(290, 0),
    [724] = {.count = 1}, SHIFT(291, 0),
    [726] = {.count = 1}, SHIFT(292, 0),
    [728] = {.count = 1}, SHIFT(293, 0),
    [730] = {.count = 1}, SHIFT(294, 0),
    [732] = {.count = 1}, SHIFT(296, 0),
    [734] = {.count = 1}, SHIFT(297, 0),
    [736] = {.count = 1}, SHIFT(298, 0),
    [738] = {.count = 1}, SHIFT(309, 0),
    [740] = {.count = 1}, SHIFT(310, 0),
    [742] = {.count = 1}, SHIFT(299, 0),
    [744] = {.count = 1}, SHIFT(300, 0),
    [746] = {.count = 1}, SHIFT(301, 0),
    [748] = {.count = 1}, SHIFT(302, 0),
    [750] = {.count = 1}, SHIFT(308, 0),
    [752] = {.count = 1}, SHIFT(304, 0),
    [754] = {.count = 1}, SHIFT(303, 0),
    [756] = {.count = 1}, SHIFT(305, 0),
    [758] = {.count = 1}, SHIFT(306, 0),
    [760] = {.count = 1}, SHIFT(307, 0),
    [762] = {.count = 1}, SHIFT(313, 0),
    [764] = {.count = 1}, SHIFT(314, 0),
    [766] = {.count = 1}, SHIFT(315, 0),
    [768] = {.count = 1}, SHIFT(317, 0),
    [770] = {.count = 1}, SHIFT(318, 0),
    [772] = {.count = 1}, SHIFT(319, 0),
    [774] = {.count = 1}, SHIFT(331, 0),
    [776] = {.count = 1}, SHIFT(327, 0),
    [778] = {.count = 1}, SHIFT(328, 0),
    [780] = {.count = 1}, SHIFT(320, 0),
    [782] = {.count = 1}, SHIFT(321, 0),
    [784] = {.count = 1}, SHIFT(322, 0),
    [786] = {.count = 1}, SHIFT(323, 0),
    [788] = {.count = 1}, SHIFT(324, 0),
    [790] = {.count = 1}, SHIFT(325, 0),
    [792] = {.count = 1}, SHIFT(326, 0),
    [794] = {.count = 1}, SHIFT(329, 0),
    [796] = {.count = 1}, SHIFT(330, 0),
    [798] = {.count = 1}, SHIFT(332, 0),
    [800] = {.count = 1}, SHIFT(333, 0),
    [802] = {.count = 1}, SHIFT(336, 0),
    [804] = {.count = 1}, SHIFT(340, 0),
    [806] = {.count = 1}, SHIFT(341, 0),
    [808] = {.count = 1}, SHIFT(347, 0),
    [810] = {.count = 1}, SHIFT(343, 0),
    [812] = {.count = 1}, SHIFT(342, 0),
    [814] = {.count = 1}, SHIFT(344, 0),
    [816] = {.count = 1}, SHIFT(345, 0),
    [818] = {.count = 1}, SHIFT(346, 0),
    [820] = {.count = 1}, SHIFT(351, 0),
    [822] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [824] = {.count = 1}, SHIFT(352, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
