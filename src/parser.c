#include "tree_sitter/parser.h"

#define STATE_COUNT 310
#define SYMBOL_COUNT 54

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_argument_list,
    sym_class_declaration,
    sym_module_declaration,
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
    aux_sym_argument_list_repeat1,
    aux_sym_class_declaration_repeat1,
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
    anon_sym_STAR,
    anon_sym_AMP,
    anon_sym_COMMA,
    anon_sym_class,
    anon_sym_LT,
    anon_sym_COLON_COLON,
    anon_sym_module,
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
    [sym_argument_list] = "argument_list",
    [sym_class_declaration] = "class_declaration",
    [sym_module_declaration] = "module_declaration",
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
    [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
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
    [anon_sym_STAR] = "*",
    [anon_sym_AMP] = "&",
    [anon_sym_COMMA] = ",",
    [anon_sym_class] = "class",
    [anon_sym_LT] = "<",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_module] = "module",
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
    [sym_argument_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_class_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_module_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_argument_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_class_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_class] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_module] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '&')
                ADVANCE(5);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
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
    [123] = 119,
    [124] = 110,
    [125] = 134,
    [126] = 113,
    [127] = 133,
    [128] = 135,
    [129] = 119,
    [130] = 133,
    [131] = 132,
    [132] = 136,
    [133] = 133,
    [134] = 113,
    [135] = 133,
    [136] = 132,
    [137] = 132,
    [138] = 130,
    [139] = 137,
    [140] = 110,
    [141] = 119,
    [142] = 113,
    [143] = 137,
    [144] = 137,
    [145] = 130,
    [146] = 136,
    [147] = 137,
    [148] = 113,
    [149] = 137,
    [150] = 130,
    [151] = 130,
    [152] = 120,
    [153] = 120,
    [154] = 124,
    [155] = 120,
    [156] = 120,
    [157] = 137,
    [158] = 130,
    [159] = 119,
    [160] = 120,
    [161] = 124,
    [162] = 120,
    [163] = 133,
    [164] = 120,
    [165] = 120,
    [166] = 124,
    [167] = 132,
    [168] = 111,
    [169] = 111,
    [170] = 110,
    [171] = 111,
    [172] = 111,
    [173] = 120,
    [174] = 120,
    [175] = 120,
    [176] = 138,
    [177] = 120,
    [178] = 119,
    [179] = 120,
    [180] = 120,
    [181] = 124,
    [182] = 120,
    [183] = 120,
    [184] = 124,
    [185] = 124,
    [186] = 118,
    [187] = 118,
    [188] = 128,
    [189] = 120,
    [190] = 118,
    [191] = 113,
    [192] = 129,
    [193] = 120,
    [194] = 119,
    [195] = 118,
    [196] = 120,
    [197] = 118,
    [198] = 124,
    [199] = 118,
    [200] = 118,
    [201] = 124,
    [202] = 124,
    [203] = 118,
    [204] = 118,
    [205] = 130,
    [206] = 118,
    [207] = 118,
    [208] = 131,
    [209] = 132,
    [210] = 119,
    [211] = 134,
    [212] = 130,
    [213] = 119,
    [214] = 120,
    [215] = 118,
    [216] = 124,
    [217] = 118,
    [218] = 118,
    [219] = 119,
    [220] = 120,
    [221] = 124,
    [222] = 118,
    [223] = 120,
    [224] = 118,
    [225] = 124,
    [226] = 111,
    [227] = 118,
    [228] = 118,
    [229] = 118,
    [230] = 138,
    [231] = 120,
    [232] = 119,
    [233] = 120,
    [234] = 118,
    [235] = 124,
    [236] = 118,
    [237] = 118,
    [238] = 124,
    [239] = 130,
    [240] = 116,
    [241] = 116,
    [242] = 116,
    [243] = 107,
    [244] = 125,
    [245] = 116,
    [246] = 107,
    [247] = 119,
    [248] = 120,
    [249] = 90,
    [250] = 124,
    [251] = 90,
    [252] = 90,
    [253] = 128,
    [254] = 120,
    [255] = 90,
    [256] = 113,
    [257] = 129,
    [258] = 120,
    [259] = 119,
    [260] = 90,
    [261] = 120,
    [262] = 90,
    [263] = 124,
    [264] = 90,
    [265] = 90,
    [266] = 124,
    [267] = 124,
    [268] = 90,
    [269] = 118,
    [270] = 130,
    [271] = 90,
    [272] = 90,
    [273] = 131,
    [274] = 132,
    [275] = 119,
    [276] = 134,
    [277] = 130,
    [278] = 119,
    [279] = 120,
    [280] = 90,
    [281] = 124,
    [282] = 90,
    [283] = 90,
    [284] = 119,
    [285] = 120,
    [286] = 124,
    [287] = 90,
    [288] = 120,
    [289] = 90,
    [290] = 124,
    [291] = 111,
    [292] = 90,
    [293] = 90,
    [294] = 90,
    [295] = 90,
    [296] = 138,
    [297] = 120,
    [298] = 119,
    [299] = 120,
    [300] = 90,
    [301] = 124,
    [302] = 90,
    [303] = 90,
    [304] = 124,
    [305] = 112,
    [306] = 89,
    [307] = 125,
    [308] = 90,
    [309] = 89,
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
        [sym_argument_list] = 382,
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
        [sym_argument_list] = 384,
        [sym_identifier] = 386,
        [sym__terminator] = 388,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_LPAREN] = 392,
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 394,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 400,
    },
    [118] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 402,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [119] = {
        [sym_argument_list] = 168,
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
        [sym_argument_list] = 246,
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
        [sym__terminator] = 404,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 400,
    },
    [122] = {
        [sym__terminator] = 406,
        [aux_sym_argument_list_repeat1] = 408,
        [anon_sym_COMMA] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [123] = {
        [sym__statement] = 412,
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
        [anon_sym_end] = 414,
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
    [124] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 416,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [125] = {
        [sym_argument_list] = 418,
        [sym_identifier] = 420,
        [aux_sym_identifier_repeat1] = 422,
        [anon_sym_RPAREN] = 404,
        [anon_sym_STAR] = 424,
        [anon_sym_AMP] = 424,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [126] = {
        [sym_identifier] = 428,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [127] = {
        [sym__terminator] = 168,
        [aux_sym_argument_list_repeat1] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 168,
        [anon_sym_SEMI] = 168,
    },
    [128] = {
        [sym__statement] = 292,
        [sym__declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_argument_list] = 294,
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
        [anon_sym_STAR] = 294,
        [anon_sym_AMP] = 294,
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
    [129] = {
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
    [130] = {
        [sym__terminator] = 430,
        [aux_sym_argument_list_repeat1] = 432,
        [anon_sym_COMMA] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 430,
        [anon_sym_SEMI] = 430,
    },
    [131] = {
        [sym__terminator] = 434,
        [sym_comment] = 44,
        [sym__line_break] = 434,
        [anon_sym_SEMI] = 434,
    },
    [132] = {
        [sym_identifier] = 436,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_STAR] = 438,
        [anon_sym_AMP] = 438,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [133] = {
        [sym__terminator] = 440,
        [aux_sym_argument_list_repeat1] = 442,
        [anon_sym_COMMA] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 440,
        [anon_sym_SEMI] = 440,
    },
    [134] = {
        [sym_identifier] = 444,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [135] = {
        [sym__terminator] = 446,
        [aux_sym_argument_list_repeat1] = 448,
        [anon_sym_COMMA] = 410,
        [sym_comment] = 44,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [136] = {
        [sym__terminator] = 450,
        [sym_comment] = 44,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [137] = {
        [sym__terminator] = 446,
        [sym_comment] = 44,
        [sym__line_break] = 446,
        [anon_sym_SEMI] = 446,
    },
    [138] = {
        [anon_sym_RPAREN] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [139] = {
        [aux_sym_argument_list_repeat1] = 454,
        [anon_sym_RPAREN] = 406,
        [anon_sym_COMMA] = 456,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [140] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [141] = {
        [sym__statement] = 460,
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
        [anon_sym_end] = 462,
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
    [142] = {
        [sym_identifier] = 464,
        [aux_sym_identifier_repeat1] = 422,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [143] = {
        [aux_sym_argument_list_repeat1] = 168,
        [anon_sym_RPAREN] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [144] = {
        [aux_sym_argument_list_repeat1] = 466,
        [anon_sym_RPAREN] = 430,
        [anon_sym_COMMA] = 456,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [145] = {
        [anon_sym_RPAREN] = 434,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [146] = {
        [sym_identifier] = 468,
        [aux_sym_identifier_repeat1] = 422,
        [anon_sym_STAR] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [147] = {
        [aux_sym_argument_list_repeat1] = 472,
        [anon_sym_RPAREN] = 440,
        [anon_sym_COMMA] = 456,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [148] = {
        [sym_identifier] = 474,
        [aux_sym_identifier_repeat1] = 422,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [149] = {
        [aux_sym_argument_list_repeat1] = 476,
        [anon_sym_RPAREN] = 446,
        [anon_sym_COMMA] = 456,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [150] = {
        [anon_sym_RPAREN] = 450,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [151] = {
        [anon_sym_RPAREN] = 446,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [152] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_end] = 480,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [153] = {
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
    [154] = {
        [anon_sym_end] = 484,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [155] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_end] = 486,
        [anon_sym_if] = 486,
        [anon_sym_while] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_until] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [156] = {
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
    [157] = {
        [aux_sym_argument_list_repeat1] = 246,
        [anon_sym_RPAREN] = 246,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [158] = {
        [anon_sym_RPAREN] = 430,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [159] = {
        [sym__statement] = 490,
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
        [anon_sym_end] = 480,
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
    [160] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 492,
        [anon_sym_end] = 484,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [161] = {
        [anon_sym_end] = 494,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [162] = {
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [anon_sym_end] = 496,
        [anon_sym_if] = 496,
        [anon_sym_while] = 496,
        [anon_sym_unless] = 496,
        [anon_sym_until] = 496,
        [sym_comment] = 44,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [163] = {
        [sym__terminator] = 246,
        [aux_sym_argument_list_repeat1] = 246,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 246,
        [anon_sym_SEMI] = 246,
    },
    [164] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 498,
        [anon_sym_end] = 462,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [165] = {
        [sym__terminator] = 500,
        [aux_sym_program_repeat1] = 500,
        [anon_sym_end] = 500,
        [anon_sym_if] = 500,
        [anon_sym_while] = 500,
        [anon_sym_unless] = 500,
        [anon_sym_until] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [166] = {
        [anon_sym_end] = 480,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [167] = {
        [sym__terminator] = 430,
        [sym_comment] = 44,
        [sym__line_break] = 430,
        [anon_sym_SEMI] = 430,
    },
    [168] = {
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
    [169] = {
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
    [170] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [171] = {
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
    [172] = {
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
    [173] = {
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
    [174] = {
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
    [175] = {
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
    [176] = {
        [sym__statement] = 506,
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
        [anon_sym_PIPE] = 508,
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
    [177] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 510,
        [anon_sym_end] = 512,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [178] = {
        [sym__statement] = 514,
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
        [anon_sym_end] = 512,
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
    [179] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 516,
        [anon_sym_end] = 518,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [180] = {
        [sym__terminator] = 520,
        [aux_sym_program_repeat1] = 520,
        [anon_sym_end] = 520,
        [anon_sym_if] = 520,
        [anon_sym_while] = 520,
        [anon_sym_unless] = 520,
        [anon_sym_until] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 520,
        [anon_sym_SEMI] = 520,
    },
    [181] = {
        [anon_sym_end] = 522,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [182] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_end] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [183] = {
        [sym__terminator] = 526,
        [aux_sym_program_repeat1] = 526,
        [anon_sym_end] = 526,
        [anon_sym_if] = 526,
        [anon_sym_while] = 526,
        [anon_sym_unless] = 526,
        [anon_sym_until] = 526,
        [sym_comment] = 44,
        [sym__line_break] = 526,
        [anon_sym_SEMI] = 526,
    },
    [184] = {
        [anon_sym_end] = 518,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [185] = {
        [anon_sym_end] = 528,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [186] = {
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
    [187] = {
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
    [188] = {
        [sym__statement] = 530,
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
        [anon_sym_end] = 532,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_LT] = 534,
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
    [189] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 536,
        [anon_sym_end] = 538,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [190] = {
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
    [191] = {
        [sym_identifier] = 540,
        [aux_sym_identifier_repeat1] = 322,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [192] = {
        [sym__statement] = 542,
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
        [aux_sym_class_declaration_repeat1] = 544,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 546,
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
    [193] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 548,
        [anon_sym_end] = 550,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [194] = {
        [sym__statement] = 552,
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
        [anon_sym_end] = 550,
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
    [195] = {
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
    [196] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 556,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [197] = {
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
    [198] = {
        [anon_sym_end] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [199] = {
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
    [200] = {
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
    [201] = {
        [anon_sym_end] = 556,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [202] = {
        [anon_sym_end] = 546,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [203] = {
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
    [204] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 562,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [205] = {
        [anon_sym_RPAREN] = 564,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [206] = {
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
    [207] = {
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
    [208] = {
        [sym_argument_list] = 566,
        [sym_identifier] = 386,
        [sym__terminator] = 568,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_LPAREN] = 570,
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 394,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 400,
    },
    [209] = {
        [sym__terminator] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 400,
    },
    [210] = {
        [sym__statement] = 574,
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
        [anon_sym_end] = 576,
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
    [211] = {
        [sym_argument_list] = 578,
        [sym_identifier] = 420,
        [aux_sym_identifier_repeat1] = 422,
        [anon_sym_RPAREN] = 572,
        [anon_sym_STAR] = 424,
        [anon_sym_AMP] = 424,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [212] = {
        [anon_sym_RPAREN] = 580,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [213] = {
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
        [anon_sym_end] = 584,
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
    [214] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 586,
        [anon_sym_end] = 588,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [215] = {
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
    [216] = {
        [anon_sym_end] = 590,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [217] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [anon_sym_if] = 486,
        [anon_sym_while] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_until] = 486,
        [anon_sym_RPAREN] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [218] = {
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
    [219] = {
        [sym__statement] = 592,
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
        [anon_sym_end] = 588,
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
    [220] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_end] = 590,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [221] = {
        [anon_sym_end] = 596,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [222] = {
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [anon_sym_if] = 496,
        [anon_sym_while] = 496,
        [anon_sym_unless] = 496,
        [anon_sym_until] = 496,
        [anon_sym_RPAREN] = 496,
        [sym_comment] = 44,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [223] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 598,
        [anon_sym_end] = 584,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [224] = {
        [sym__terminator] = 500,
        [aux_sym_program_repeat1] = 500,
        [anon_sym_if] = 500,
        [anon_sym_while] = 500,
        [anon_sym_unless] = 500,
        [anon_sym_until] = 500,
        [anon_sym_RPAREN] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [225] = {
        [anon_sym_end] = 588,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [226] = {
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
    [227] = {
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
    [228] = {
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
    [229] = {
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
    [230] = {
        [sym__statement] = 600,
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
        [anon_sym_PIPE] = 602,
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
    [231] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 604,
        [anon_sym_end] = 606,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [232] = {
        [sym__statement] = 608,
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
        [anon_sym_end] = 606,
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
    [233] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_end] = 612,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [234] = {
        [sym__terminator] = 520,
        [aux_sym_program_repeat1] = 520,
        [anon_sym_if] = 520,
        [anon_sym_while] = 520,
        [anon_sym_unless] = 520,
        [anon_sym_until] = 520,
        [anon_sym_RPAREN] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 520,
        [anon_sym_SEMI] = 520,
    },
    [235] = {
        [anon_sym_end] = 614,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [236] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [anon_sym_RPAREN] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [237] = {
        [sym__terminator] = 526,
        [aux_sym_program_repeat1] = 526,
        [anon_sym_if] = 526,
        [anon_sym_while] = 526,
        [anon_sym_unless] = 526,
        [anon_sym_until] = 526,
        [anon_sym_RPAREN] = 526,
        [sym_comment] = 44,
        [sym__line_break] = 526,
        [anon_sym_SEMI] = 526,
    },
    [238] = {
        [anon_sym_end] = 612,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [239] = {
        [anon_sym_RPAREN] = 616,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [240] = {
        [aux_sym__call_arguments_repeat1] = 376,
        [anon_sym_do] = 376,
        [anon_sym_COMMA] = 376,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [241] = {
        [aux_sym__call_arguments_repeat1] = 378,
        [anon_sym_do] = 378,
        [anon_sym_COMMA] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [242] = {
        [aux_sym__call_arguments_repeat1] = 246,
        [anon_sym_do] = 246,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [243] = {
        [anon_sym_do] = 618,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [244] = {
        [sym__argument] = 620,
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
    [245] = {
        [aux_sym__call_arguments_repeat1] = 622,
        [anon_sym_do] = 624,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [246] = {
        [anon_sym_do] = 626,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [247] = {
        [sym__statement] = 628,
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
        [anon_sym_end] = 630,
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
    [248] = {
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
    [249] = {
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
    [250] = {
        [anon_sym_end] = 636,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [251] = {
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
    [252] = {
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
    [253] = {
        [sym__statement] = 638,
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
        [anon_sym_end] = 640,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 232,
        [anon_sym_def] = 234,
        [anon_sym_LPAREN] = 236,
        [anon_sym_class] = 238,
        [anon_sym_LT] = 642,
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
    [254] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 644,
        [anon_sym_end] = 646,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [255] = {
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
    [256] = {
        [sym_identifier] = 648,
        [aux_sym_identifier_repeat1] = 322,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 324,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [257] = {
        [sym__statement] = 650,
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
        [aux_sym_class_declaration_repeat1] = 652,
        [aux_sym_identifier_repeat1] = 226,
        [anon_sym_end] = 654,
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
    [258] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 656,
        [anon_sym_end] = 658,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [259] = {
        [sym__statement] = 660,
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
        [anon_sym_end] = 658,
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
    [260] = {
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
    [261] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 662,
        [anon_sym_end] = 664,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [262] = {
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
    [263] = {
        [anon_sym_end] = 666,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [264] = {
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
    [265] = {
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
    [266] = {
        [anon_sym_end] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [267] = {
        [anon_sym_end] = 654,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [268] = {
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
    [269] = {
        [sym__terminator] = 184,
        [aux_sym_program_repeat1] = 668,
        [anon_sym_if] = 188,
        [anon_sym_while] = 188,
        [anon_sym_unless] = 188,
        [anon_sym_until] = 188,
        [anon_sym_RPAREN] = 670,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [270] = {
        [anon_sym_RPAREN] = 672,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [271] = {
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
    [272] = {
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
    [273] = {
        [sym_argument_list] = 674,
        [sym_identifier] = 386,
        [sym__terminator] = 676,
        [aux_sym_identifier_repeat1] = 390,
        [anon_sym_LPAREN] = 678,
        [anon_sym_STAR] = 394,
        [anon_sym_AMP] = 394,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 400,
    },
    [274] = {
        [sym__terminator] = 680,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 400,
    },
    [275] = {
        [sym__statement] = 682,
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
        [anon_sym_end] = 684,
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
    [276] = {
        [sym_argument_list] = 686,
        [sym_identifier] = 420,
        [aux_sym_identifier_repeat1] = 422,
        [anon_sym_RPAREN] = 680,
        [anon_sym_STAR] = 424,
        [anon_sym_AMP] = 424,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 426,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [277] = {
        [anon_sym_RPAREN] = 688,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [278] = {
        [sym__statement] = 690,
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
        [anon_sym_end] = 692,
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
    [279] = {
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
    [280] = {
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
    [281] = {
        [anon_sym_end] = 698,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [282] = {
        [sym__terminator] = 486,
        [aux_sym_program_repeat1] = 486,
        [ts_builtin_sym_end] = 486,
        [anon_sym_if] = 486,
        [anon_sym_while] = 486,
        [anon_sym_unless] = 486,
        [anon_sym_until] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 486,
        [anon_sym_SEMI] = 486,
    },
    [283] = {
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
    [284] = {
        [sym__statement] = 700,
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
        [anon_sym_end] = 696,
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
    [285] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 702,
        [anon_sym_end] = 698,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [286] = {
        [anon_sym_end] = 704,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [287] = {
        [sym__terminator] = 496,
        [aux_sym_program_repeat1] = 496,
        [ts_builtin_sym_end] = 496,
        [anon_sym_if] = 496,
        [anon_sym_while] = 496,
        [anon_sym_unless] = 496,
        [anon_sym_until] = 496,
        [sym_comment] = 44,
        [sym__line_break] = 496,
        [anon_sym_SEMI] = 496,
    },
    [288] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 706,
        [anon_sym_end] = 692,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [289] = {
        [sym__terminator] = 500,
        [aux_sym_program_repeat1] = 500,
        [ts_builtin_sym_end] = 500,
        [anon_sym_if] = 500,
        [anon_sym_while] = 500,
        [anon_sym_unless] = 500,
        [anon_sym_until] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [290] = {
        [anon_sym_end] = 696,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [291] = {
        [sym_identifier] = 78,
        [sym__function_name] = 708,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 44,
    },
    [292] = {
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
    [293] = {
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
    [294] = {
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
    [295] = {
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
    [296] = {
        [sym__statement] = 710,
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
        [anon_sym_PIPE] = 712,
        [anon_sym_end] = 708,
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
    [297] = {
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 714,
        [anon_sym_end] = 716,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [298] = {
        [sym__statement] = 718,
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
        [anon_sym_end] = 716,
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
        [sym__terminator] = 248,
        [aux_sym_program_repeat1] = 720,
        [anon_sym_end] = 722,
        [anon_sym_if] = 254,
        [anon_sym_while] = 254,
        [anon_sym_unless] = 254,
        [anon_sym_until] = 254,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [300] = {
        [sym__terminator] = 520,
        [aux_sym_program_repeat1] = 520,
        [ts_builtin_sym_end] = 520,
        [anon_sym_if] = 520,
        [anon_sym_while] = 520,
        [anon_sym_unless] = 520,
        [anon_sym_until] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 520,
        [anon_sym_SEMI] = 520,
    },
    [301] = {
        [anon_sym_end] = 724,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [302] = {
        [sym__terminator] = 524,
        [aux_sym_program_repeat1] = 524,
        [ts_builtin_sym_end] = 524,
        [anon_sym_if] = 524,
        [anon_sym_while] = 524,
        [anon_sym_unless] = 524,
        [anon_sym_until] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [303] = {
        [sym__terminator] = 526,
        [aux_sym_program_repeat1] = 526,
        [ts_builtin_sym_end] = 526,
        [anon_sym_if] = 526,
        [anon_sym_while] = 526,
        [anon_sym_unless] = 526,
        [anon_sym_until] = 526,
        [sym_comment] = 44,
        [sym__line_break] = 526,
        [anon_sym_SEMI] = 526,
    },
    [304] = {
        [anon_sym_end] = 722,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [305] = {
        [sym__statement] = 726,
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
    [306] = {
        [ts_builtin_sym_end] = 728,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [307] = {
        [sym__expression] = 708,
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
    [308] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 730,
        [ts_builtin_sym_end] = 302,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [309] = {
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
    [48] = {.count = 1}, SHIFT(305, 0),
    [50] = {.count = 1}, SHIFT(306, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(307, 0),
    [56] = {.count = 1}, SHIFT(76, 0),
    [58] = {.count = 1}, SHIFT(77, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(296, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [76] = {.count = 1}, SHIFT(295, 0),
    [78] = {.count = 1}, SHIFT(292, 0),
    [80] = {.count = 1}, SHIFT(294, 0),
    [82] = {.count = 1}, SHIFT(168, 0),
    [84] = {.count = 1}, SHIFT(291, 0),
    [86] = {.count = 1}, SHIFT(170, 0),
    [88] = {.count = 1}, SHIFT(171, 0),
    [90] = {.count = 1}, SHIFT(116, 0),
    [92] = {.count = 1}, SHIFT(273, 0),
    [94] = {.count = 1}, SHIFT(118, 0),
    [96] = {.count = 1}, SHIFT(119, 0),
    [98] = {.count = 1}, SHIFT(269, 0),
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
    [130] = {.count = 1}, SHIFT(253, 0),
    [132] = {.count = 1}, SHIFT(83, 0),
    [134] = {.count = 1}, SHIFT(84, 0),
    [136] = {.count = 1}, SHIFT(247, 0),
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
    [176] = {.count = 1}, SHIFT(243, 0),
    [178] = {.count = 1}, SHIFT(244, 0),
    [180] = {.count = 1}, SHIFT(242, 0),
    [182] = {.count = 1}, SHIFT(32, 0),
    [184] = {.count = 1}, SHIFT(108, 0),
    [186] = {.count = 1}, SHIFT(239, 0),
    [188] = {.count = 1}, SHIFT(110, 0),
    [190] = {.count = 1}, SHIFT(240, 0),
    [192] = {.count = 1}, SHIFT(230, 0),
    [194] = {.count = 1}, SHIFT(229, 0),
    [196] = {.count = 1}, SHIFT(227, 0),
    [198] = {.count = 1}, SHIFT(228, 0),
    [200] = {.count = 1}, SHIFT(226, 0),
    [202] = {.count = 1}, SHIFT(208, 0),
    [204] = {.count = 1}, SHIFT(204, 0),
    [206] = {.count = 1}, SHIFT(188, 0),
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
    [250] = {.count = 1}, SHIFT(185, 0),
    [252] = {.count = 1}, SHIFT(186, 0),
    [254] = {.count = 1}, SHIFT(75, 0),
    [256] = {.count = 1}, SHIFT(176, 0),
    [258] = {.count = 1}, SHIFT(175, 0),
    [260] = {.count = 1}, REDUCE(sym_module_declaration, 3, 0),
    [262] = {.count = 1}, SHIFT(173, 0),
    [264] = {.count = 1}, SHIFT(174, 0),
    [266] = {.count = 1}, SHIFT(169, 0),
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
    [402] = {.count = 1}, SHIFT(120, 0),
    [404] = {.count = 1}, SHIFT(141, 0),
    [406] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [408] = {.count = 1}, SHIFT(167, 0),
    [410] = {.count = 1}, SHIFT(132, 0),
    [412] = {.count = 1}, SHIFT(164, 0),
    [414] = {.count = 1}, SHIFT(165, 0),
    [416] = {.count = 1}, SHIFT(163, 0),
    [418] = {.count = 1}, SHIFT(138, 0),
    [420] = {.count = 1}, SHIFT(139, 0),
    [422] = {.count = 1}, SHIFT(140, 0),
    [424] = {.count = 1}, SHIFT(142, 0),
    [426] = {.count = 1}, SHIFT(143, 0),
    [428] = {.count = 1}, SHIFT(130, 0),
    [430] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [432] = {.count = 1}, SHIFT(131, 0),
    [434] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [436] = {.count = 1}, SHIFT(133, 0),
    [438] = {.count = 1}, SHIFT(134, 0),
    [440] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [442] = {.count = 1}, SHIFT(137, 0),
    [444] = {.count = 1}, SHIFT(135, 0),
    [446] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [448] = {.count = 1}, SHIFT(136, 0),
    [450] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [452] = {.count = 1}, SHIFT(159, 0),
    [454] = {.count = 1}, SHIFT(158, 0),
    [456] = {.count = 1}, SHIFT(146, 0),
    [458] = {.count = 1}, SHIFT(157, 0),
    [460] = {.count = 1}, SHIFT(152, 0),
    [462] = {.count = 1}, SHIFT(153, 0),
    [464] = {.count = 1}, SHIFT(144, 0),
    [466] = {.count = 1}, SHIFT(145, 0),
    [468] = {.count = 1}, SHIFT(147, 0),
    [470] = {.count = 1}, SHIFT(148, 0),
    [472] = {.count = 1}, SHIFT(151, 0),
    [474] = {.count = 1}, SHIFT(149, 0),
    [476] = {.count = 1}, SHIFT(150, 0),
    [478] = {.count = 1}, SHIFT(154, 0),
    [480] = {.count = 1}, SHIFT(155, 0),
    [482] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [484] = {.count = 1}, SHIFT(156, 0),
    [486] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [488] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [490] = {.count = 1}, SHIFT(160, 0),
    [492] = {.count = 1}, SHIFT(161, 0),
    [494] = {.count = 1}, SHIFT(162, 0),
    [496] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [498] = {.count = 1}, SHIFT(166, 0),
    [500] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [502] = {.count = 1}, SHIFT(172, 0),
    [504] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [506] = {.count = 1}, SHIFT(177, 0),
    [508] = {.count = 1}, SHIFT(178, 0),
    [510] = {.count = 1}, SHIFT(184, 0),
    [512] = {.count = 1}, SHIFT(180, 0),
    [514] = {.count = 1}, SHIFT(179, 0),
    [516] = {.count = 1}, SHIFT(181, 0),
    [518] = {.count = 1}, SHIFT(182, 0),
    [520] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [522] = {.count = 1}, SHIFT(183, 0),
    [524] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [526] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [528] = {.count = 1}, SHIFT(187, 0),
    [530] = {.count = 1}, SHIFT(189, 0),
    [532] = {.count = 1}, SHIFT(190, 0),
    [534] = {.count = 1}, SHIFT(191, 0),
    [536] = {.count = 1}, SHIFT(202, 0),
    [538] = {.count = 1}, SHIFT(203, 0),
    [540] = {.count = 1}, SHIFT(192, 0),
    [542] = {.count = 1}, SHIFT(193, 0),
    [544] = {.count = 1}, SHIFT(194, 0),
    [546] = {.count = 1}, SHIFT(195, 0),
    [548] = {.count = 1}, SHIFT(201, 0),
    [550] = {.count = 1}, SHIFT(197, 0),
    [552] = {.count = 1}, SHIFT(196, 0),
    [554] = {.count = 1}, SHIFT(198, 0),
    [556] = {.count = 1}, SHIFT(199, 0),
    [558] = {.count = 1}, SHIFT(200, 0),
    [560] = {.count = 1}, SHIFT(205, 0),
    [562] = {.count = 1}, SHIFT(206, 0),
    [564] = {.count = 1}, SHIFT(207, 0),
    [566] = {.count = 1}, SHIFT(209, 0),
    [568] = {.count = 1}, SHIFT(210, 0),
    [570] = {.count = 1}, SHIFT(211, 0),
    [572] = {.count = 1}, SHIFT(213, 0),
    [574] = {.count = 1}, SHIFT(223, 0),
    [576] = {.count = 1}, SHIFT(224, 0),
    [578] = {.count = 1}, SHIFT(212, 0),
    [580] = {.count = 1}, SHIFT(219, 0),
    [582] = {.count = 1}, SHIFT(214, 0),
    [584] = {.count = 1}, SHIFT(215, 0),
    [586] = {.count = 1}, SHIFT(216, 0),
    [588] = {.count = 1}, SHIFT(217, 0),
    [590] = {.count = 1}, SHIFT(218, 0),
    [592] = {.count = 1}, SHIFT(220, 0),
    [594] = {.count = 1}, SHIFT(221, 0),
    [596] = {.count = 1}, SHIFT(222, 0),
    [598] = {.count = 1}, SHIFT(225, 0),
    [600] = {.count = 1}, SHIFT(231, 0),
    [602] = {.count = 1}, SHIFT(232, 0),
    [604] = {.count = 1}, SHIFT(238, 0),
    [606] = {.count = 1}, SHIFT(234, 0),
    [608] = {.count = 1}, SHIFT(233, 0),
    [610] = {.count = 1}, SHIFT(235, 0),
    [612] = {.count = 1}, SHIFT(236, 0),
    [614] = {.count = 1}, SHIFT(237, 0),
    [616] = {.count = 1}, SHIFT(241, 0),
    [618] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [620] = {.count = 1}, SHIFT(245, 0),
    [622] = {.count = 1}, SHIFT(246, 0),
    [624] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [626] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [628] = {.count = 1}, SHIFT(248, 0),
    [630] = {.count = 1}, SHIFT(249, 0),
    [632] = {.count = 1}, SHIFT(250, 0),
    [634] = {.count = 1}, SHIFT(251, 0),
    [636] = {.count = 1}, SHIFT(252, 0),
    [638] = {.count = 1}, SHIFT(254, 0),
    [640] = {.count = 1}, SHIFT(255, 0),
    [642] = {.count = 1}, SHIFT(256, 0),
    [644] = {.count = 1}, SHIFT(267, 0),
    [646] = {.count = 1}, SHIFT(268, 0),
    [648] = {.count = 1}, SHIFT(257, 0),
    [650] = {.count = 1}, SHIFT(258, 0),
    [652] = {.count = 1}, SHIFT(259, 0),
    [654] = {.count = 1}, SHIFT(260, 0),
    [656] = {.count = 1}, SHIFT(266, 0),
    [658] = {.count = 1}, SHIFT(262, 0),
    [660] = {.count = 1}, SHIFT(261, 0),
    [662] = {.count = 1}, SHIFT(263, 0),
    [664] = {.count = 1}, SHIFT(264, 0),
    [666] = {.count = 1}, SHIFT(265, 0),
    [668] = {.count = 1}, SHIFT(270, 0),
    [670] = {.count = 1}, SHIFT(271, 0),
    [672] = {.count = 1}, SHIFT(272, 0),
    [674] = {.count = 1}, SHIFT(274, 0),
    [676] = {.count = 1}, SHIFT(275, 0),
    [678] = {.count = 1}, SHIFT(276, 0),
    [680] = {.count = 1}, SHIFT(278, 0),
    [682] = {.count = 1}, SHIFT(288, 0),
    [684] = {.count = 1}, SHIFT(289, 0),
    [686] = {.count = 1}, SHIFT(277, 0),
    [688] = {.count = 1}, SHIFT(284, 0),
    [690] = {.count = 1}, SHIFT(279, 0),
    [692] = {.count = 1}, SHIFT(280, 0),
    [694] = {.count = 1}, SHIFT(281, 0),
    [696] = {.count = 1}, SHIFT(282, 0),
    [698] = {.count = 1}, SHIFT(283, 0),
    [700] = {.count = 1}, SHIFT(285, 0),
    [702] = {.count = 1}, SHIFT(286, 0),
    [704] = {.count = 1}, SHIFT(287, 0),
    [706] = {.count = 1}, SHIFT(290, 0),
    [708] = {.count = 1}, SHIFT(293, 0),
    [710] = {.count = 1}, SHIFT(297, 0),
    [712] = {.count = 1}, SHIFT(298, 0),
    [714] = {.count = 1}, SHIFT(304, 0),
    [716] = {.count = 1}, SHIFT(300, 0),
    [718] = {.count = 1}, SHIFT(299, 0),
    [720] = {.count = 1}, SHIFT(301, 0),
    [722] = {.count = 1}, SHIFT(302, 0),
    [724] = {.count = 1}, SHIFT(303, 0),
    [726] = {.count = 1}, SHIFT(308, 0),
    [728] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [730] = {.count = 1}, SHIFT(309, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
