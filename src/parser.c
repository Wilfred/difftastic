#include "tree_sitter/parser.h"

#define STATE_COUNT 318
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
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
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
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(30);
            if (lookahead == 'e')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH);
        case 123:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(126);
            if (lookahead == 'i')
                ADVANCE(91);
            if (lookahead == 'u')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(102);
            LEX_ERROR();
        case 126:
            if (lookahead == 'n')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'd')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_end);
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
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == 'e')
                ADVANCE(126);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(7);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(8);
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
            if (lookahead == '&')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
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
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
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
    [47] = 116,
    [48] = 118,
    [49] = 118,
    [50] = 118,
    [51] = 119,
    [52] = 120,
    [53] = 121,
    [54] = 118,
    [55] = 123,
    [56] = 119,
    [57] = 118,
    [58] = 118,
    [59] = 118,
    [60] = 120,
    [61] = 124,
    [62] = 110,
    [63] = 124,
    [64] = 124,
    [65] = 125,
    [66] = 125,
    [67] = 125,
    [68] = 107,
    [69] = 125,
    [70] = 125,
    [71] = 125,
    [72] = 125,
    [73] = 110,
    [74] = 118,
    [75] = 111,
    [76] = 111,
    [77] = 111,
    [78] = 112,
    [79] = 112,
    [80] = 113,
    [81] = 125,
    [82] = 118,
    [83] = 125,
    [84] = 120,
    [85] = 125,
    [86] = 125,
    [87] = 124,
    [88] = 125,
    [89] = 125,
    [90] = 119,
    [91] = 129,
    [92] = 125,
    [93] = 121,
    [94] = 125,
    [95] = 125,
    [96] = 125,
    [97] = 129,
    [98] = 130,
    [99] = 110,
    [100] = 130,
    [101] = 130,
    [102] = 125,
    [103] = 125,
    [104] = 112,
    [105] = 131,
    [106] = 110,
    [107] = 131,
    [108] = 131,
    [109] = 125,
    [110] = 124,
    [111] = 125,
    [112] = 112,
    [113] = 131,
    [114] = 124,
    [115] = 125,
    [116] = 125,
    [117] = 129,
    [118] = 125,
    [119] = 125,
    [120] = 129,
    [121] = 129,
    [122] = 125,
    [123] = 132,
    [124] = 133,
    [125] = 110,
    [126] = 132,
    [127] = 132,
    [128] = 124,
    [129] = 134,
    [130] = 135,
    [131] = 110,
    [132] = 136,
    [133] = 112,
    [134] = 112,
    [135] = 135,
    [136] = 134,
    [137] = 110,
    [138] = 134,
    [139] = 134,
    [140] = 137,
    [141] = 110,
    [142] = 137,
    [143] = 137,
    [144] = 112,
    [145] = 134,
    [146] = 120,
    [147] = 138,
    [148] = 110,
    [149] = 112,
    [150] = 112,
    [151] = 138,
    [152] = 120,
    [153] = 110,
    [154] = 120,
    [155] = 120,
    [156] = 139,
    [157] = 110,
    [158] = 139,
    [159] = 139,
    [160] = 112,
    [161] = 120,
    [162] = 138,
    [163] = 140,
    [164] = 112,
    [165] = 112,
    [166] = 112,
    [167] = 120,
    [168] = 139,
    [169] = 112,
    [170] = 120,
    [171] = 138,
    [172] = 140,
    [173] = 112,
    [174] = 139,
    [175] = 112,
    [176] = 120,
    [177] = 124,
    [178] = 135,
    [179] = 141,
    [180] = 112,
    [181] = 112,
    [182] = 112,
    [183] = 134,
    [184] = 137,
    [185] = 112,
    [186] = 134,
    [187] = 135,
    [188] = 141,
    [189] = 112,
    [190] = 137,
    [191] = 112,
    [192] = 134,
    [193] = 124,
    [194] = 142,
    [195] = 124,
    [196] = 125,
    [197] = 125,
    [198] = 129,
    [199] = 125,
    [200] = 125,
    [201] = 111,
    [202] = 111,
    [203] = 110,
    [204] = 111,
    [205] = 111,
    [206] = 125,
    [207] = 125,
    [208] = 125,
    [209] = 143,
    [210] = 125,
    [211] = 124,
    [212] = 125,
    [213] = 125,
    [214] = 129,
    [215] = 125,
    [216] = 125,
    [217] = 129,
    [218] = 129,
    [219] = 118,
    [220] = 118,
    [221] = 130,
    [222] = 125,
    [223] = 118,
    [224] = 112,
    [225] = 131,
    [226] = 125,
    [227] = 124,
    [228] = 118,
    [229] = 125,
    [230] = 118,
    [231] = 129,
    [232] = 118,
    [233] = 118,
    [234] = 129,
    [235] = 129,
    [236] = 118,
    [237] = 133,
    [238] = 124,
    [239] = 125,
    [240] = 118,
    [241] = 129,
    [242] = 118,
    [243] = 118,
    [244] = 111,
    [245] = 118,
    [246] = 118,
    [247] = 118,
    [248] = 143,
    [249] = 125,
    [250] = 124,
    [251] = 125,
    [252] = 118,
    [253] = 129,
    [254] = 118,
    [255] = 118,
    [256] = 129,
    [257] = 120,
    [258] = 116,
    [259] = 116,
    [260] = 116,
    [261] = 107,
    [262] = 121,
    [263] = 116,
    [264] = 107,
    [265] = 118,
    [266] = 90,
    [267] = 120,
    [268] = 90,
    [269] = 90,
    [270] = 124,
    [271] = 125,
    [272] = 90,
    [273] = 129,
    [274] = 90,
    [275] = 90,
    [276] = 130,
    [277] = 125,
    [278] = 90,
    [279] = 112,
    [280] = 131,
    [281] = 125,
    [282] = 124,
    [283] = 90,
    [284] = 125,
    [285] = 90,
    [286] = 129,
    [287] = 90,
    [288] = 90,
    [289] = 129,
    [290] = 129,
    [291] = 90,
    [292] = 133,
    [293] = 124,
    [294] = 125,
    [295] = 90,
    [296] = 129,
    [297] = 90,
    [298] = 90,
    [299] = 111,
    [300] = 90,
    [301] = 90,
    [302] = 90,
    [303] = 90,
    [304] = 143,
    [305] = 125,
    [306] = 124,
    [307] = 125,
    [308] = 90,
    [309] = 129,
    [310] = 90,
    [311] = 90,
    [312] = 129,
    [313] = 119,
    [314] = 89,
    [315] = 121,
    [316] = 90,
    [317] = 89,
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
        [anon_sym_RPAREN] = 140,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
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
        [anon_sym_RPAREN] = 186,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
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
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_PIPE] = 200,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
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
        [sym_identifier] = 208,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 102,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [45] = {
        [sym_identifier] = 210,
        [aux_sym_identifier_repeat1] = 106,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [46] = {
        [sym__statement] = 212,
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
        [anon_sym_RPAREN] = 214,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [47] = {
        [aux_sym__call_arguments_repeat1] = 216,
        [anon_sym_do] = 216,
        [anon_sym_COMMA] = 216,
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
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 218,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 220,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [50] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [anon_sym_RPAREN] = 216,
        [sym_comment] = 44,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [51] = {
        [sym__statement] = 222,
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
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [52] = {
        [anon_sym_RPAREN] = 224,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [53] = {
        [sym__expression] = 226,
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
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [54] = {
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
    [55] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym__variable] = 230,
        [sym_identifier] = 230,
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 232,
        [aux_sym_identifier_repeat1] = 230,
        [ts_builtin_sym_end] = 232,
        [anon_sym_end] = 232,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_if] = 232,
        [anon_sym_while] = 232,
        [anon_sym_unless] = 232,
        [anon_sym_until] = 232,
        [anon_sym_def] = 230,
        [anon_sym_class] = 230,
        [anon_sym_module] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_RPAREN] = 232,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [anon_sym_AT] = 230,
        [anon_sym_DOLLAR] = 230,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 230,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 232,
    },
    [56] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym__variable] = 230,
        [sym_identifier] = 230,
        [aux_sym_identifier_repeat1] = 230,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_def] = 230,
        [anon_sym_class] = 230,
        [anon_sym_module] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [anon_sym_AT] = 230,
        [anon_sym_DOLLAR] = 230,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 230,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [57] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 234,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [anon_sym_RPAREN] = 234,
        [sym_comment] = 44,
        [sym__line_break] = 234,
        [anon_sym_SEMI] = 234,
    },
    [58] = {
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 236,
        [sym_comment] = 44,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [59] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 238,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 240,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [60] = {
        [anon_sym_RPAREN] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [61] = {
        [sym__statement] = 244,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 262,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [62] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 278,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [63] = {
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
        [anon_sym_class] = 170,
        [anon_sym_module] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_super] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [64] = {
        [sym__statement] = 280,
        [sym__declaration] = 280,
        [sym_method_declaration] = 280,
        [sym_class_declaration] = 280,
        [sym_module_declaration] = 280,
        [sym__call] = 280,
        [sym__command] = 280,
        [sym__function_call] = 280,
        [sym__expression] = 280,
        [sym__argument] = 280,
        [sym__primary] = 280,
        [sym__variable] = 280,
        [sym_identifier] = 280,
        [aux_sym_identifier_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_undef] = 280,
        [anon_sym_alias] = 280,
        [anon_sym_def] = 280,
        [anon_sym_class] = 280,
        [anon_sym_module] = 280,
        [anon_sym_LPAREN] = 280,
        [anon_sym_super] = 280,
        [anon_sym_nil] = 280,
        [anon_sym_self] = 280,
        [anon_sym_AT] = 280,
        [anon_sym_DOLLAR] = 280,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [65] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 284,
        [anon_sym_end] = 286,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [66] = {
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
    [67] = {
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
    [68] = {
        [anon_sym_do] = 290,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [69] = {
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
    [70] = {
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
    [71] = {
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
    [72] = {
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
    [73] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 292,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [74] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [anon_sym_RPAREN] = 294,
        [sym_comment] = 44,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [75] = {
        [sym_identifier] = 296,
        [sym__function_name] = 298,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_PIPE] = 296,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 296,
        [sym__line_break] = 44,
    },
    [76] = {
        [sym_identifier] = 82,
        [sym__function_name] = 300,
        [aux_sym_identifier_repeat1] = 86,
        [anon_sym_PIPE] = 82,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 88,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 82,
        [sym__line_break] = 44,
    },
    [77] = {
        [sym_identifier] = 90,
        [sym__function_name] = 302,
        [aux_sym_identifier_repeat1] = 94,
        [anon_sym_PIPE] = 90,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 96,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 90,
        [sym__line_break] = 44,
    },
    [78] = {
        [sym_identifier] = 304,
        [aux_sym_identifier_repeat1] = 100,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 102,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [79] = {
        [sym_identifier] = 306,
        [aux_sym_identifier_repeat1] = 106,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 108,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [80] = {
        [sym__statement] = 308,
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
        [anon_sym_RPAREN] = 310,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 124,
        [anon_sym_self] = 124,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [81] = {
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
    [82] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 312,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 314,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [83] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [anon_sym_end] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [sym_comment] = 44,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [84] = {
        [anon_sym_RPAREN] = 316,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [85] = {
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
    [86] = {
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [anon_sym_end] = 236,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [sym_comment] = 44,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [87] = {
        [sym__statement] = 318,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [88] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 322,
        [anon_sym_end] = 324,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [89] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [anon_sym_end] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [sym_comment] = 44,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [90] = {
        [sym__statement] = 326,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [91] = {
        [anon_sym_end] = 328,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [92] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_end] = 330,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 44,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [93] = {
        [sym__expression] = 332,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_LPAREN] = 274,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [94] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 234,
        [anon_sym_end] = 234,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 44,
        [sym__line_break] = 234,
        [anon_sym_SEMI] = 234,
    },
    [95] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [96] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 336,
        [anon_sym_end] = 240,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [97] = {
        [anon_sym_end] = 242,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [98] = {
        [sym__statement] = 338,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 340,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_LT] = 342,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [99] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 344,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [100] = {
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
        [anon_sym_class] = 170,
        [anon_sym_LT] = 170,
        [anon_sym_module] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_super] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [101] = {
        [sym__statement] = 280,
        [sym__declaration] = 280,
        [sym_method_declaration] = 280,
        [sym_class_declaration] = 280,
        [sym_module_declaration] = 280,
        [sym__call] = 280,
        [sym__command] = 280,
        [sym__function_call] = 280,
        [sym__expression] = 280,
        [sym__argument] = 280,
        [sym__primary] = 280,
        [sym__variable] = 280,
        [sym_identifier] = 280,
        [aux_sym_identifier_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_undef] = 280,
        [anon_sym_alias] = 280,
        [anon_sym_def] = 280,
        [anon_sym_class] = 280,
        [anon_sym_LT] = 280,
        [anon_sym_module] = 280,
        [anon_sym_LPAREN] = 280,
        [anon_sym_super] = 280,
        [anon_sym_nil] = 280,
        [anon_sym_self] = 280,
        [anon_sym_AT] = 280,
        [anon_sym_DOLLAR] = 280,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [102] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 346,
        [anon_sym_end] = 348,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [103] = {
        [sym__terminator] = 350,
        [aux_sym_program_repeat1] = 350,
        [anon_sym_end] = 350,
        [anon_sym_if] = 350,
        [anon_sym_while] = 350,
        [anon_sym_unless] = 350,
        [anon_sym_until] = 350,
        [sym_comment] = 44,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [104] = {
        [sym_identifier] = 352,
        [aux_sym_identifier_repeat1] = 354,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [105] = {
        [sym__statement] = 358,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_class_declaration_repeat1] = 360,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 362,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [106] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 366,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [107] = {
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
        [anon_sym_class] = 170,
        [anon_sym_COLON_COLON] = 170,
        [anon_sym_module] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_super] = 170,
        [anon_sym_nil] = 170,
        [anon_sym_self] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [108] = {
        [sym__statement] = 280,
        [sym__declaration] = 280,
        [sym_method_declaration] = 280,
        [sym_class_declaration] = 280,
        [sym_module_declaration] = 280,
        [sym__call] = 280,
        [sym__command] = 280,
        [sym__function_call] = 280,
        [sym__expression] = 280,
        [sym__argument] = 280,
        [sym__primary] = 280,
        [sym__variable] = 280,
        [sym_identifier] = 280,
        [aux_sym_class_declaration_repeat1] = 280,
        [aux_sym_identifier_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_undef] = 280,
        [anon_sym_alias] = 280,
        [anon_sym_def] = 280,
        [anon_sym_class] = 280,
        [anon_sym_COLON_COLON] = 280,
        [anon_sym_module] = 280,
        [anon_sym_LPAREN] = 280,
        [anon_sym_super] = 280,
        [anon_sym_nil] = 280,
        [anon_sym_self] = 280,
        [anon_sym_AT] = 280,
        [anon_sym_DOLLAR] = 280,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [109] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 368,
        [anon_sym_end] = 370,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [110] = {
        [sym__statement] = 372,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 370,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [111] = {
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
    [112] = {
        [sym_identifier] = 376,
        [aux_sym_identifier_repeat1] = 354,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [113] = {
        [sym__statement] = 378,
        [sym__declaration] = 378,
        [sym_method_declaration] = 378,
        [sym_class_declaration] = 378,
        [sym_module_declaration] = 378,
        [sym__call] = 378,
        [sym__command] = 378,
        [sym__function_call] = 378,
        [sym__expression] = 378,
        [sym__argument] = 378,
        [sym__primary] = 378,
        [sym__variable] = 378,
        [sym_identifier] = 378,
        [aux_sym_class_declaration_repeat1] = 380,
        [aux_sym_identifier_repeat1] = 378,
        [anon_sym_end] = 378,
        [anon_sym_undef] = 378,
        [anon_sym_alias] = 378,
        [anon_sym_def] = 378,
        [anon_sym_class] = 378,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_module] = 378,
        [anon_sym_LPAREN] = 378,
        [anon_sym_super] = 378,
        [anon_sym_nil] = 378,
        [anon_sym_self] = 378,
        [anon_sym_AT] = 378,
        [anon_sym_DOLLAR] = 378,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 378,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [114] = {
        [sym__statement] = 382,
        [sym__declaration] = 382,
        [sym_method_declaration] = 382,
        [sym_class_declaration] = 382,
        [sym_module_declaration] = 382,
        [sym__call] = 382,
        [sym__command] = 382,
        [sym__function_call] = 382,
        [sym__expression] = 382,
        [sym__argument] = 382,
        [sym__primary] = 382,
        [sym__variable] = 382,
        [sym_identifier] = 382,
        [aux_sym_identifier_repeat1] = 382,
        [anon_sym_end] = 382,
        [anon_sym_undef] = 382,
        [anon_sym_alias] = 382,
        [anon_sym_def] = 382,
        [anon_sym_class] = 382,
        [anon_sym_module] = 382,
        [anon_sym_LPAREN] = 382,
        [anon_sym_super] = 382,
        [anon_sym_nil] = 382,
        [anon_sym_self] = 382,
        [anon_sym_AT] = 382,
        [anon_sym_DOLLAR] = 382,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 382,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [115] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_end] = 386,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [116] = {
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
    [117] = {
        [anon_sym_end] = 390,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [118] = {
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
    [119] = {
        [sym__terminator] = 394,
        [aux_sym_program_repeat1] = 394,
        [anon_sym_end] = 394,
        [anon_sym_if] = 394,
        [anon_sym_while] = 394,
        [anon_sym_unless] = 394,
        [anon_sym_until] = 394,
        [sym_comment] = 44,
        [sym__line_break] = 394,
        [anon_sym_SEMI] = 394,
    },
    [120] = {
        [anon_sym_end] = 386,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [121] = {
        [anon_sym_end] = 362,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [122] = {
        [sym__terminator] = 396,
        [aux_sym_program_repeat1] = 396,
        [anon_sym_end] = 396,
        [anon_sym_if] = 396,
        [anon_sym_while] = 396,
        [anon_sym_unless] = 396,
        [anon_sym_until] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [123] = {
        [sym__argument_declaration] = 398,
        [sym__argument_list] = 398,
        [sym_identifier] = 398,
        [aux_sym_identifier_repeat1] = 398,
        [anon_sym_LPAREN] = 398,
        [anon_sym_STAR] = 398,
        [anon_sym_AMP] = 398,
        [anon_sym_AT] = 398,
        [anon_sym_DOLLAR] = 398,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [124] = {
        [sym__argument_declaration] = 400,
        [sym__argument_list] = 402,
        [sym_identifier] = 404,
        [sym__terminator] = 406,
        [aux_sym_identifier_repeat1] = 408,
        [anon_sym_LPAREN] = 410,
        [anon_sym_STAR] = 412,
        [anon_sym_AMP] = 414,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 416,
        [sym_comment] = 44,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [125] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 418,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [126] = {
        [sym__argument_declaration] = 170,
        [sym__argument_list] = 170,
        [sym_identifier] = 170,
        [aux_sym_identifier_repeat1] = 170,
        [anon_sym_LPAREN] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_AMP] = 170,
        [anon_sym_AT] = 170,
        [anon_sym_DOLLAR] = 170,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [127] = {
        [sym__argument_declaration] = 280,
        [sym__argument_list] = 280,
        [sym_identifier] = 280,
        [aux_sym_identifier_repeat1] = 280,
        [anon_sym_LPAREN] = 280,
        [anon_sym_STAR] = 280,
        [anon_sym_AMP] = 280,
        [anon_sym_AT] = 280,
        [anon_sym_DOLLAR] = 280,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [128] = {
        [sym__statement] = 420,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 422,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [129] = {
        [sym__terminator] = 424,
        [sym_comment] = 44,
        [sym__line_break] = 426,
        [anon_sym_SEMI] = 428,
    },
    [130] = {
        [sym__terminator] = 430,
        [aux_sym__argument_list_repeat1] = 432,
        [anon_sym_COMMA] = 434,
        [anon_sym_STAR] = 436,
        [anon_sym_AMP] = 438,
        [sym_comment] = 44,
        [sym__line_break] = 430,
        [anon_sym_SEMI] = 430,
    },
    [131] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 440,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [132] = {
        [sym__argument_list] = 442,
        [sym_identifier] = 444,
        [aux_sym_identifier_repeat1] = 446,
        [anon_sym_RPAREN] = 406,
        [anon_sym_STAR] = 448,
        [anon_sym_AMP] = 450,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [133] = {
        [sym_identifier] = 454,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [134] = {
        [sym_identifier] = 460,
        [aux_sym_identifier_repeat1] = 462,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [135] = {
        [sym__terminator] = 170,
        [aux_sym__argument_list_repeat1] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_AMP] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [136] = {
        [sym__terminator] = 466,
        [sym_comment] = 44,
        [sym__line_break] = 466,
        [anon_sym_SEMI] = 466,
    },
    [137] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 468,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [138] = {
        [sym__terminator] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 170,
        [anon_sym_SEMI] = 170,
    },
    [139] = {
        [sym__terminator] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [140] = {
        [sym__terminator] = 466,
        [anon_sym_AMP] = 470,
        [sym_comment] = 44,
        [sym__line_break] = 466,
        [anon_sym_SEMI] = 466,
    },
    [141] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 472,
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
        [sym__terminator] = 280,
        [anon_sym_AMP] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [144] = {
        [sym_identifier] = 474,
        [aux_sym_identifier_repeat1] = 462,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [145] = {
        [sym__terminator] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 476,
        [anon_sym_SEMI] = 476,
    },
    [146] = {
        [anon_sym_RPAREN] = 478,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [147] = {
        [aux_sym__argument_list_repeat1] = 480,
        [anon_sym_RPAREN] = 430,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 484,
        [anon_sym_AMP] = 486,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [148] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 488,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [149] = {
        [sym_identifier] = 490,
        [aux_sym_identifier_repeat1] = 492,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 494,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [150] = {
        [sym_identifier] = 496,
        [aux_sym_identifier_repeat1] = 498,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [151] = {
        [aux_sym__argument_list_repeat1] = 170,
        [anon_sym_RPAREN] = 170,
        [anon_sym_COMMA] = 170,
        [anon_sym_STAR] = 170,
        [anon_sym_AMP] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [152] = {
        [anon_sym_RPAREN] = 466,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [153] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [154] = {
        [anon_sym_RPAREN] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [155] = {
        [anon_sym_RPAREN] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [156] = {
        [anon_sym_RPAREN] = 466,
        [anon_sym_AMP] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [157] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 506,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [158] = {
        [anon_sym_RPAREN] = 170,
        [anon_sym_AMP] = 170,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [159] = {
        [anon_sym_RPAREN] = 280,
        [anon_sym_AMP] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [160] = {
        [sym_identifier] = 508,
        [aux_sym_identifier_repeat1] = 498,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [161] = {
        [anon_sym_RPAREN] = 476,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [162] = {
        [aux_sym__argument_list_repeat1] = 280,
        [anon_sym_RPAREN] = 280,
        [anon_sym_COMMA] = 280,
        [anon_sym_STAR] = 280,
        [anon_sym_AMP] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [163] = {
        [anon_sym_RPAREN] = 466,
        [anon_sym_STAR] = 510,
        [anon_sym_AMP] = 504,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [164] = {
        [sym_identifier] = 512,
        [aux_sym_identifier_repeat1] = 446,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 452,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [165] = {
        [sym_identifier] = 514,
        [aux_sym_identifier_repeat1] = 492,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 494,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [166] = {
        [sym_identifier] = 516,
        [aux_sym_identifier_repeat1] = 498,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [167] = {
        [anon_sym_RPAREN] = 518,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [168] = {
        [anon_sym_RPAREN] = 518,
        [anon_sym_AMP] = 520,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [169] = {
        [sym_identifier] = 522,
        [aux_sym_identifier_repeat1] = 498,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [170] = {
        [anon_sym_RPAREN] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [171] = {
        [aux_sym__argument_list_repeat1] = 526,
        [anon_sym_RPAREN] = 528,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 528,
        [anon_sym_AMP] = 528,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [172] = {
        [anon_sym_RPAREN] = 530,
        [anon_sym_STAR] = 530,
        [anon_sym_AMP] = 530,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [173] = {
        [sym_identifier] = 532,
        [aux_sym_identifier_repeat1] = 492,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 494,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [174] = {
        [anon_sym_RPAREN] = 476,
        [anon_sym_AMP] = 534,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [175] = {
        [sym_identifier] = 536,
        [aux_sym_identifier_repeat1] = 498,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 500,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [176] = {
        [anon_sym_RPAREN] = 538,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [177] = {
        [sym__statement] = 540,
        [sym__declaration] = 540,
        [sym_method_declaration] = 540,
        [sym_class_declaration] = 540,
        [sym_module_declaration] = 540,
        [sym__call] = 540,
        [sym__command] = 540,
        [sym__function_call] = 540,
        [sym__expression] = 540,
        [sym__argument] = 540,
        [sym__primary] = 540,
        [sym__variable] = 540,
        [sym_identifier] = 540,
        [aux_sym_identifier_repeat1] = 540,
        [anon_sym_end] = 540,
        [anon_sym_undef] = 540,
        [anon_sym_alias] = 540,
        [anon_sym_def] = 540,
        [anon_sym_class] = 540,
        [anon_sym_module] = 540,
        [anon_sym_LPAREN] = 540,
        [anon_sym_super] = 540,
        [anon_sym_nil] = 540,
        [anon_sym_self] = 540,
        [anon_sym_AT] = 540,
        [anon_sym_DOLLAR] = 540,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 540,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [178] = {
        [sym__terminator] = 280,
        [aux_sym__argument_list_repeat1] = 280,
        [anon_sym_COMMA] = 280,
        [anon_sym_STAR] = 280,
        [anon_sym_AMP] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [179] = {
        [sym__terminator] = 466,
        [anon_sym_STAR] = 542,
        [anon_sym_AMP] = 470,
        [sym_comment] = 44,
        [sym__line_break] = 466,
        [anon_sym_SEMI] = 466,
    },
    [180] = {
        [sym_identifier] = 544,
        [aux_sym_identifier_repeat1] = 408,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 416,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [181] = {
        [sym_identifier] = 546,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [182] = {
        [sym_identifier] = 548,
        [aux_sym_identifier_repeat1] = 462,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [183] = {
        [sym__terminator] = 518,
        [sym_comment] = 44,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [184] = {
        [sym__terminator] = 518,
        [anon_sym_AMP] = 550,
        [sym_comment] = 44,
        [sym__line_break] = 518,
        [anon_sym_SEMI] = 518,
    },
    [185] = {
        [sym_identifier] = 552,
        [aux_sym_identifier_repeat1] = 462,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [186] = {
        [sym__terminator] = 524,
        [sym_comment] = 44,
        [sym__line_break] = 524,
        [anon_sym_SEMI] = 524,
    },
    [187] = {
        [sym__terminator] = 528,
        [aux_sym__argument_list_repeat1] = 554,
        [anon_sym_COMMA] = 434,
        [anon_sym_STAR] = 528,
        [anon_sym_AMP] = 528,
        [sym_comment] = 44,
        [sym__line_break] = 528,
        [anon_sym_SEMI] = 528,
    },
    [188] = {
        [sym__terminator] = 530,
        [anon_sym_STAR] = 530,
        [anon_sym_AMP] = 530,
        [sym_comment] = 44,
        [sym__line_break] = 530,
        [anon_sym_SEMI] = 530,
    },
    [189] = {
        [sym_identifier] = 556,
        [aux_sym_identifier_repeat1] = 456,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 458,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [190] = {
        [sym__terminator] = 476,
        [anon_sym_AMP] = 558,
        [sym_comment] = 44,
        [sym__line_break] = 476,
        [anon_sym_SEMI] = 476,
    },
    [191] = {
        [sym_identifier] = 560,
        [aux_sym_identifier_repeat1] = 462,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 464,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [192] = {
        [sym__terminator] = 538,
        [sym_comment] = 44,
        [sym__line_break] = 538,
        [anon_sym_SEMI] = 538,
    },
    [193] = {
        [sym__statement] = 562,
        [sym__declaration] = 562,
        [sym_method_declaration] = 562,
        [sym_class_declaration] = 562,
        [sym_module_declaration] = 562,
        [sym__call] = 562,
        [sym__command] = 562,
        [sym__function_call] = 562,
        [sym__expression] = 562,
        [sym__argument] = 562,
        [sym__primary] = 562,
        [sym__variable] = 562,
        [sym_identifier] = 562,
        [aux_sym_identifier_repeat1] = 562,
        [anon_sym_end] = 562,
        [anon_sym_undef] = 562,
        [anon_sym_alias] = 562,
        [anon_sym_def] = 562,
        [anon_sym_class] = 562,
        [anon_sym_module] = 562,
        [anon_sym_LPAREN] = 562,
        [anon_sym_super] = 562,
        [anon_sym_nil] = 562,
        [anon_sym_self] = 562,
        [anon_sym_AT] = 562,
        [anon_sym_DOLLAR] = 562,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 562,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [194] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym__variable] = 230,
        [sym_identifier] = 230,
        [sym__terminator] = 232,
        [aux_sym_identifier_repeat1] = 230,
        [anon_sym_end] = 230,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_def] = 230,
        [anon_sym_class] = 230,
        [anon_sym_module] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [anon_sym_AT] = 230,
        [anon_sym_DOLLAR] = 230,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 230,
        [sym_comment] = 44,
        [sym__line_break] = 44,
        [anon_sym_SEMI] = 232,
    },
    [195] = {
        [sym__statement] = 230,
        [sym__declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_class_declaration] = 230,
        [sym_module_declaration] = 230,
        [sym__call] = 230,
        [sym__command] = 230,
        [sym__function_call] = 230,
        [sym__expression] = 230,
        [sym__argument] = 230,
        [sym__primary] = 230,
        [sym__variable] = 230,
        [sym_identifier] = 230,
        [aux_sym_identifier_repeat1] = 230,
        [anon_sym_end] = 230,
        [anon_sym_undef] = 230,
        [anon_sym_alias] = 230,
        [anon_sym_def] = 230,
        [anon_sym_class] = 230,
        [anon_sym_module] = 230,
        [anon_sym_LPAREN] = 230,
        [anon_sym_super] = 230,
        [anon_sym_nil] = 230,
        [anon_sym_self] = 230,
        [anon_sym_AT] = 230,
        [anon_sym_DOLLAR] = 230,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 230,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [196] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_end] = 566,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [197] = {
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
    [198] = {
        [anon_sym_end] = 570,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [199] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_end] = 572,
        [anon_sym_if] = 572,
        [anon_sym_while] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_until] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [200] = {
        [sym__terminator] = 574,
        [aux_sym_program_repeat1] = 574,
        [anon_sym_end] = 574,
        [anon_sym_if] = 574,
        [anon_sym_while] = 574,
        [anon_sym_unless] = 574,
        [anon_sym_until] = 574,
        [sym_comment] = 44,
        [sym__line_break] = 574,
        [anon_sym_SEMI] = 574,
    },
    [201] = {
        [sym_identifier] = 398,
        [sym__function_name] = 398,
        [aux_sym_identifier_repeat1] = 398,
        [anon_sym_PIPE] = 398,
        [anon_sym_AT] = 398,
        [anon_sym_DOLLAR] = 398,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 398,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 398,
        [sym__line_break] = 44,
    },
    [202] = {
        [sym_identifier] = 296,
        [sym__function_name] = 332,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_PIPE] = 296,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 296,
        [sym__line_break] = 44,
    },
    [203] = {
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 576,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [204] = {
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
    [205] = {
        [sym_identifier] = 280,
        [sym__function_name] = 280,
        [aux_sym_identifier_repeat1] = 280,
        [anon_sym_PIPE] = 280,
        [anon_sym_AT] = 280,
        [anon_sym_DOLLAR] = 280,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 280,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 280,
        [sym__line_break] = 44,
    },
    [206] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [anon_sym_end] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [207] = {
        [sym__terminator] = 578,
        [aux_sym_program_repeat1] = 578,
        [anon_sym_end] = 578,
        [anon_sym_if] = 578,
        [anon_sym_while] = 578,
        [anon_sym_unless] = 578,
        [anon_sym_until] = 578,
        [sym_comment] = 44,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [208] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [209] = {
        [sym__statement] = 580,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_PIPE] = 582,
        [anon_sym_end] = 332,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [210] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 584,
        [anon_sym_end] = 586,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [211] = {
        [sym__statement] = 588,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 586,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [212] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 590,
        [anon_sym_end] = 592,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [213] = {
        [sym__terminator] = 594,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_end] = 594,
        [anon_sym_if] = 594,
        [anon_sym_while] = 594,
        [anon_sym_unless] = 594,
        [anon_sym_until] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 594,
        [anon_sym_SEMI] = 594,
    },
    [214] = {
        [anon_sym_end] = 596,
        [sym_comment] = 44,
        [sym__line_break] = 44,
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
        [sym__terminator] = 600,
        [aux_sym_program_repeat1] = 600,
        [anon_sym_end] = 600,
        [anon_sym_if] = 600,
        [anon_sym_while] = 600,
        [anon_sym_unless] = 600,
        [anon_sym_until] = 600,
        [sym_comment] = 44,
        [sym__line_break] = 600,
        [anon_sym_SEMI] = 600,
    },
    [217] = {
        [anon_sym_end] = 592,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [218] = {
        [anon_sym_end] = 602,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [219] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [anon_sym_RPAREN] = 330,
        [sym_comment] = 44,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [220] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [anon_sym_RPAREN] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [221] = {
        [sym__statement] = 604,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 606,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_LT] = 608,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [222] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 610,
        [anon_sym_end] = 612,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [223] = {
        [sym__terminator] = 350,
        [aux_sym_program_repeat1] = 350,
        [anon_sym_if] = 350,
        [anon_sym_while] = 350,
        [anon_sym_unless] = 350,
        [anon_sym_until] = 350,
        [anon_sym_RPAREN] = 350,
        [sym_comment] = 44,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [224] = {
        [sym_identifier] = 614,
        [aux_sym_identifier_repeat1] = 354,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [225] = {
        [sym__statement] = 616,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_class_declaration_repeat1] = 618,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 620,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [226] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 622,
        [anon_sym_end] = 624,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [227] = {
        [sym__statement] = 626,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 624,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [228] = {
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
    [229] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 630,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [230] = {
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
    [231] = {
        [anon_sym_end] = 632,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [232] = {
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
    [233] = {
        [sym__terminator] = 394,
        [aux_sym_program_repeat1] = 394,
        [anon_sym_if] = 394,
        [anon_sym_while] = 394,
        [anon_sym_unless] = 394,
        [anon_sym_until] = 394,
        [anon_sym_RPAREN] = 394,
        [sym_comment] = 44,
        [sym__line_break] = 394,
        [anon_sym_SEMI] = 394,
    },
    [234] = {
        [anon_sym_end] = 630,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [235] = {
        [anon_sym_end] = 620,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [236] = {
        [sym__terminator] = 396,
        [aux_sym_program_repeat1] = 396,
        [anon_sym_if] = 396,
        [anon_sym_while] = 396,
        [anon_sym_unless] = 396,
        [anon_sym_until] = 396,
        [anon_sym_RPAREN] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [237] = {
        [sym__argument_declaration] = 634,
        [sym__argument_list] = 402,
        [sym_identifier] = 404,
        [sym__terminator] = 406,
        [aux_sym_identifier_repeat1] = 408,
        [anon_sym_LPAREN] = 410,
        [anon_sym_STAR] = 412,
        [anon_sym_AMP] = 414,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 416,
        [sym_comment] = 44,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [238] = {
        [sym__statement] = 636,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 638,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [239] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 640,
        [anon_sym_end] = 642,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [240] = {
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
    [241] = {
        [anon_sym_end] = 644,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [242] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [anon_sym_if] = 572,
        [anon_sym_while] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_until] = 572,
        [anon_sym_RPAREN] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [243] = {
        [sym__terminator] = 574,
        [aux_sym_program_repeat1] = 574,
        [anon_sym_if] = 574,
        [anon_sym_while] = 574,
        [anon_sym_unless] = 574,
        [anon_sym_until] = 574,
        [anon_sym_RPAREN] = 574,
        [sym_comment] = 44,
        [sym__line_break] = 574,
        [anon_sym_SEMI] = 574,
    },
    [244] = {
        [sym_identifier] = 200,
        [sym__function_name] = 226,
        [aux_sym_identifier_repeat1] = 126,
        [anon_sym_PIPE] = 200,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 142,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 200,
        [sym__line_break] = 44,
    },
    [245] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [anon_sym_RPAREN] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [246] = {
        [sym__terminator] = 578,
        [aux_sym_program_repeat1] = 578,
        [anon_sym_if] = 578,
        [anon_sym_while] = 578,
        [anon_sym_unless] = 578,
        [anon_sym_until] = 578,
        [anon_sym_RPAREN] = 578,
        [sym_comment] = 44,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [247] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [anon_sym_RPAREN] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [248] = {
        [sym__statement] = 646,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_PIPE] = 648,
        [anon_sym_end] = 226,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [249] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 652,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [250] = {
        [sym__statement] = 654,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 652,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [251] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 656,
        [anon_sym_end] = 658,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [252] = {
        [sym__terminator] = 594,
        [aux_sym_program_repeat1] = 594,
        [anon_sym_if] = 594,
        [anon_sym_while] = 594,
        [anon_sym_unless] = 594,
        [anon_sym_until] = 594,
        [anon_sym_RPAREN] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 594,
        [anon_sym_SEMI] = 594,
    },
    [253] = {
        [anon_sym_end] = 660,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [254] = {
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
    [255] = {
        [sym__terminator] = 600,
        [aux_sym_program_repeat1] = 600,
        [anon_sym_if] = 600,
        [anon_sym_while] = 600,
        [anon_sym_unless] = 600,
        [anon_sym_until] = 600,
        [anon_sym_RPAREN] = 600,
        [sym_comment] = 44,
        [sym__line_break] = 600,
        [anon_sym_SEMI] = 600,
    },
    [256] = {
        [anon_sym_end] = 658,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [257] = {
        [anon_sym_RPAREN] = 662,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [258] = {
        [aux_sym__call_arguments_repeat1] = 228,
        [anon_sym_do] = 228,
        [anon_sym_COMMA] = 228,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [259] = {
        [aux_sym__call_arguments_repeat1] = 236,
        [anon_sym_do] = 236,
        [anon_sym_COMMA] = 236,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [260] = {
        [aux_sym__call_arguments_repeat1] = 280,
        [anon_sym_do] = 280,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [261] = {
        [anon_sym_do] = 664,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [262] = {
        [sym__argument] = 666,
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
    [263] = {
        [aux_sym__call_arguments_repeat1] = 668,
        [anon_sym_do] = 670,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [264] = {
        [anon_sym_do] = 672,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [265] = {
        [sym__terminator] = 188,
        [aux_sym_program_repeat1] = 674,
        [anon_sym_if] = 192,
        [anon_sym_while] = 192,
        [anon_sym_unless] = 192,
        [anon_sym_until] = 192,
        [anon_sym_RPAREN] = 676,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [266] = {
        [sym__terminator] = 216,
        [aux_sym_program_repeat1] = 216,
        [ts_builtin_sym_end] = 216,
        [anon_sym_if] = 216,
        [anon_sym_while] = 216,
        [anon_sym_unless] = 216,
        [anon_sym_until] = 216,
        [sym_comment] = 44,
        [sym__line_break] = 216,
        [anon_sym_SEMI] = 216,
    },
    [267] = {
        [anon_sym_RPAREN] = 678,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [268] = {
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
    [269] = {
        [sym__terminator] = 236,
        [aux_sym_program_repeat1] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [sym_comment] = 44,
        [sym__line_break] = 236,
        [anon_sym_SEMI] = 236,
    },
    [270] = {
        [sym__statement] = 680,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 682,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [271] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 686,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [272] = {
        [sym__terminator] = 294,
        [aux_sym_program_repeat1] = 294,
        [ts_builtin_sym_end] = 294,
        [anon_sym_if] = 294,
        [anon_sym_while] = 294,
        [anon_sym_unless] = 294,
        [anon_sym_until] = 294,
        [sym_comment] = 44,
        [sym__line_break] = 294,
        [anon_sym_SEMI] = 294,
    },
    [273] = {
        [anon_sym_end] = 688,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [274] = {
        [sym__terminator] = 330,
        [aux_sym_program_repeat1] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 44,
        [sym__line_break] = 330,
        [anon_sym_SEMI] = 330,
    },
    [275] = {
        [sym__terminator] = 334,
        [aux_sym_program_repeat1] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_if] = 334,
        [anon_sym_while] = 334,
        [anon_sym_unless] = 334,
        [anon_sym_until] = 334,
        [sym_comment] = 44,
        [sym__line_break] = 334,
        [anon_sym_SEMI] = 334,
    },
    [276] = {
        [sym__statement] = 690,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 692,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_LT] = 694,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [277] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 696,
        [anon_sym_end] = 698,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [278] = {
        [sym__terminator] = 350,
        [aux_sym_program_repeat1] = 350,
        [ts_builtin_sym_end] = 350,
        [anon_sym_if] = 350,
        [anon_sym_while] = 350,
        [anon_sym_unless] = 350,
        [anon_sym_until] = 350,
        [sym_comment] = 44,
        [sym__line_break] = 350,
        [anon_sym_SEMI] = 350,
    },
    [279] = {
        [sym_identifier] = 700,
        [aux_sym_identifier_repeat1] = 354,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 356,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [280] = {
        [sym__statement] = 702,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_class_declaration_repeat1] = 704,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 706,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_COLON_COLON] = 364,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [281] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 708,
        [anon_sym_end] = 710,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [282] = {
        [sym__statement] = 712,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 710,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [283] = {
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
    [284] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 714,
        [anon_sym_end] = 716,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [285] = {
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
    [286] = {
        [anon_sym_end] = 718,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [287] = {
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
    [288] = {
        [sym__terminator] = 394,
        [aux_sym_program_repeat1] = 394,
        [ts_builtin_sym_end] = 394,
        [anon_sym_if] = 394,
        [anon_sym_while] = 394,
        [anon_sym_unless] = 394,
        [anon_sym_until] = 394,
        [sym_comment] = 44,
        [sym__line_break] = 394,
        [anon_sym_SEMI] = 394,
    },
    [289] = {
        [anon_sym_end] = 716,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [290] = {
        [anon_sym_end] = 706,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [291] = {
        [sym__terminator] = 396,
        [aux_sym_program_repeat1] = 396,
        [ts_builtin_sym_end] = 396,
        [anon_sym_if] = 396,
        [anon_sym_while] = 396,
        [anon_sym_unless] = 396,
        [anon_sym_until] = 396,
        [sym_comment] = 44,
        [sym__line_break] = 396,
        [anon_sym_SEMI] = 396,
    },
    [292] = {
        [sym__argument_declaration] = 720,
        [sym__argument_list] = 402,
        [sym_identifier] = 404,
        [sym__terminator] = 406,
        [aux_sym_identifier_repeat1] = 408,
        [anon_sym_LPAREN] = 410,
        [anon_sym_STAR] = 412,
        [anon_sym_AMP] = 414,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 416,
        [sym_comment] = 44,
        [sym__line_break] = 406,
        [anon_sym_SEMI] = 406,
    },
    [293] = {
        [sym__statement] = 722,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 724,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [294] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 726,
        [anon_sym_end] = 728,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [295] = {
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
    [296] = {
        [anon_sym_end] = 730,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [297] = {
        [sym__terminator] = 572,
        [aux_sym_program_repeat1] = 572,
        [ts_builtin_sym_end] = 572,
        [anon_sym_if] = 572,
        [anon_sym_while] = 572,
        [anon_sym_unless] = 572,
        [anon_sym_until] = 572,
        [sym_comment] = 44,
        [sym__line_break] = 572,
        [anon_sym_SEMI] = 572,
    },
    [298] = {
        [sym__terminator] = 574,
        [aux_sym_program_repeat1] = 574,
        [ts_builtin_sym_end] = 574,
        [anon_sym_if] = 574,
        [anon_sym_while] = 574,
        [anon_sym_unless] = 574,
        [anon_sym_until] = 574,
        [sym_comment] = 44,
        [sym__line_break] = 574,
        [anon_sym_SEMI] = 574,
    },
    [299] = {
        [sym_identifier] = 78,
        [sym__function_name] = 732,
        [aux_sym_identifier_repeat1] = 22,
        [anon_sym_PIPE] = 78,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 42,
        [sym_comment] = 44,
        [anon_sym_DOT_DOT] = 78,
        [sym__line_break] = 44,
    },
    [300] = {
        [sym__terminator] = 398,
        [aux_sym_program_repeat1] = 398,
        [ts_builtin_sym_end] = 398,
        [anon_sym_if] = 398,
        [anon_sym_while] = 398,
        [anon_sym_unless] = 398,
        [anon_sym_until] = 398,
        [sym_comment] = 44,
        [sym__line_break] = 398,
        [anon_sym_SEMI] = 398,
    },
    [301] = {
        [sym__terminator] = 234,
        [aux_sym_program_repeat1] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_if] = 234,
        [anon_sym_while] = 234,
        [anon_sym_unless] = 234,
        [anon_sym_until] = 234,
        [sym_comment] = 44,
        [sym__line_break] = 234,
        [anon_sym_SEMI] = 234,
    },
    [302] = {
        [sym__terminator] = 578,
        [aux_sym_program_repeat1] = 578,
        [ts_builtin_sym_end] = 578,
        [anon_sym_if] = 578,
        [anon_sym_while] = 578,
        [anon_sym_unless] = 578,
        [anon_sym_until] = 578,
        [sym_comment] = 44,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [303] = {
        [sym__terminator] = 280,
        [aux_sym_program_repeat1] = 280,
        [ts_builtin_sym_end] = 280,
        [anon_sym_if] = 280,
        [anon_sym_while] = 280,
        [anon_sym_unless] = 280,
        [anon_sym_until] = 280,
        [sym_comment] = 44,
        [sym__line_break] = 280,
        [anon_sym_SEMI] = 280,
    },
    [304] = {
        [sym__statement] = 734,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_PIPE] = 736,
        [anon_sym_end] = 732,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [305] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 738,
        [anon_sym_end] = 740,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [306] = {
        [sym__statement] = 742,
        [sym__declaration] = 246,
        [sym_method_declaration] = 248,
        [sym_class_declaration] = 248,
        [sym_module_declaration] = 248,
        [sym__call] = 250,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 246,
        [sym__argument] = 252,
        [sym__primary] = 254,
        [sym__variable] = 256,
        [sym_identifier] = 258,
        [aux_sym_identifier_repeat1] = 260,
        [anon_sym_end] = 740,
        [anon_sym_undef] = 264,
        [anon_sym_alias] = 266,
        [anon_sym_def] = 268,
        [anon_sym_class] = 270,
        [anon_sym_module] = 272,
        [anon_sym_LPAREN] = 274,
        [anon_sym_super] = 38,
        [anon_sym_nil] = 258,
        [anon_sym_self] = 258,
        [anon_sym_AT] = 40,
        [anon_sym_DOLLAR] = 40,
        [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_STAR_SLASH] = 276,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [307] = {
        [sym__terminator] = 282,
        [aux_sym_program_repeat1] = 744,
        [anon_sym_end] = 746,
        [anon_sym_if] = 288,
        [anon_sym_while] = 288,
        [anon_sym_unless] = 288,
        [anon_sym_until] = 288,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [308] = {
        [sym__terminator] = 594,
        [aux_sym_program_repeat1] = 594,
        [ts_builtin_sym_end] = 594,
        [anon_sym_if] = 594,
        [anon_sym_while] = 594,
        [anon_sym_unless] = 594,
        [anon_sym_until] = 594,
        [sym_comment] = 44,
        [sym__line_break] = 594,
        [anon_sym_SEMI] = 594,
    },
    [309] = {
        [anon_sym_end] = 748,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [310] = {
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
    [311] = {
        [sym__terminator] = 600,
        [aux_sym_program_repeat1] = 600,
        [ts_builtin_sym_end] = 600,
        [anon_sym_if] = 600,
        [anon_sym_while] = 600,
        [anon_sym_unless] = 600,
        [anon_sym_until] = 600,
        [sym_comment] = 44,
        [sym__line_break] = 600,
        [anon_sym_SEMI] = 600,
    },
    [312] = {
        [anon_sym_end] = 746,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [313] = {
        [sym__statement] = 750,
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
    [314] = {
        [ts_builtin_sym_end] = 752,
        [sym_comment] = 44,
        [sym__line_break] = 44,
    },
    [315] = {
        [sym__expression] = 732,
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
    [316] = {
        [sym__terminator] = 48,
        [aux_sym_program_repeat1] = 754,
        [ts_builtin_sym_end] = 240,
        [anon_sym_if] = 54,
        [anon_sym_while] = 54,
        [anon_sym_unless] = 54,
        [anon_sym_until] = 54,
        [sym_comment] = 44,
        [sym__line_break] = 56,
        [anon_sym_SEMI] = 58,
    },
    [317] = {
        [ts_builtin_sym_end] = 242,
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
    [48] = {.count = 1}, SHIFT(313, 0),
    [50] = {.count = 1}, SHIFT(314, 0),
    [52] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [54] = {.count = 1}, SHIFT(315, 0),
    [56] = {.count = 1}, SHIFT(55, 0),
    [58] = {.count = 1}, SHIFT(56, 0),
    [60] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [62] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [64] = {.count = 1}, SHIFT(304, 0),
    [66] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [68] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [70] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [76] = {.count = 1}, SHIFT(303, 0),
    [78] = {.count = 1}, SHIFT(300, 0),
    [80] = {.count = 1}, SHIFT(302, 0),
    [82] = {.count = 1}, SHIFT(201, 0),
    [84] = {.count = 1}, SHIFT(299, 0),
    [86] = {.count = 1}, SHIFT(203, 0),
    [88] = {.count = 1}, SHIFT(204, 0),
    [90] = {.count = 1}, SHIFT(123, 0),
    [92] = {.count = 1}, SHIFT(292, 0),
    [94] = {.count = 1}, SHIFT(125, 0),
    [96] = {.count = 1}, SHIFT(126, 0),
    [98] = {.count = 1}, SHIFT(276, 0),
    [100] = {.count = 1}, SHIFT(99, 0),
    [102] = {.count = 1}, SHIFT(100, 0),
    [104] = {.count = 1}, SHIFT(270, 0),
    [106] = {.count = 1}, SHIFT(62, 0),
    [108] = {.count = 1}, SHIFT(63, 0),
    [110] = {.count = 1}, SHIFT(265, 0),
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
    [140] = {.count = 1}, SHIFT(266, 0),
    [142] = {.count = 1}, SHIFT(48, 0),
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
    [178] = {.count = 1}, SHIFT(261, 0),
    [180] = {.count = 1}, SHIFT(262, 0),
    [182] = {.count = 1}, SHIFT(260, 0),
    [184] = {.count = 1}, SHIFT(32, 0),
    [186] = {.count = 1}, SHIFT(47, 0),
    [188] = {.count = 1}, SHIFT(51, 0),
    [190] = {.count = 1}, SHIFT(257, 0),
    [192] = {.count = 1}, SHIFT(53, 0),
    [194] = {.count = 1}, SHIFT(258, 0),
    [196] = {.count = 1}, SHIFT(248, 0),
    [198] = {.count = 1}, SHIFT(247, 0),
    [200] = {.count = 1}, SHIFT(245, 0),
    [202] = {.count = 1}, SHIFT(246, 0),
    [204] = {.count = 1}, SHIFT(244, 0),
    [206] = {.count = 1}, SHIFT(237, 0),
    [208] = {.count = 1}, SHIFT(221, 0),
    [210] = {.count = 1}, SHIFT(61, 0),
    [212] = {.count = 1}, SHIFT(49, 0),
    [214] = {.count = 1}, SHIFT(50, 0),
    [216] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [218] = {.count = 1}, SHIFT(52, 0),
    [220] = {.count = 1}, SHIFT(54, 0),
    [222] = {.count = 1}, SHIFT(59, 0),
    [224] = {.count = 1}, SHIFT(58, 0),
    [226] = {.count = 1}, SHIFT(57, 0),
    [228] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [230] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [232] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [234] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [236] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [238] = {.count = 1}, SHIFT(60, 0),
    [240] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [242] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [244] = {.count = 1}, SHIFT(65, 0),
    [246] = {.count = 1}, SHIFT(66, 0),
    [248] = {.count = 1}, SHIFT(67, 0),
    [250] = {.count = 1}, SHIFT(68, 0),
    [252] = {.count = 1}, SHIFT(69, 0),
    [254] = {.count = 1}, SHIFT(70, 0),
    [256] = {.count = 1}, SHIFT(71, 0),
    [258] = {.count = 1}, SHIFT(72, 0),
    [260] = {.count = 1}, SHIFT(73, 0),
    [262] = {.count = 1}, SHIFT(74, 0),
    [264] = {.count = 1}, SHIFT(75, 0),
    [266] = {.count = 1}, SHIFT(76, 0),
    [268] = {.count = 1}, SHIFT(77, 0),
    [270] = {.count = 1}, SHIFT(78, 0),
    [272] = {.count = 1}, SHIFT(79, 0),
    [274] = {.count = 1}, SHIFT(80, 0),
    [276] = {.count = 1}, SHIFT(81, 0),
    [278] = {.count = 1}, SHIFT(64, 0),
    [280] = {.count = 1}, REDUCE(sym_identifier, 2, 0),
    [282] = {.count = 1}, SHIFT(90, 0),
    [284] = {.count = 1}, SHIFT(218, 0),
    [286] = {.count = 1}, SHIFT(219, 0),
    [288] = {.count = 1}, SHIFT(93, 0),
    [290] = {.count = 1}, SHIFT(209, 0),
    [292] = {.count = 1}, SHIFT(208, 0),
    [294] = {.count = 1}, REDUCE(sym_module_declaration, 3, 0),
    [296] = {.count = 1}, SHIFT(206, 0),
    [298] = {.count = 1}, SHIFT(207, 0),
    [300] = {.count = 1}, SHIFT(202, 0),
    [302] = {.count = 1}, SHIFT(124, 0),
    [304] = {.count = 1}, SHIFT(98, 0),
    [306] = {.count = 1}, SHIFT(87, 0),
    [308] = {.count = 1}, SHIFT(82, 0),
    [310] = {.count = 1}, SHIFT(83, 0),
    [312] = {.count = 1}, SHIFT(84, 0),
    [314] = {.count = 1}, SHIFT(85, 0),
    [316] = {.count = 1}, SHIFT(86, 0),
    [318] = {.count = 1}, SHIFT(88, 0),
    [320] = {.count = 1}, SHIFT(89, 0),
    [322] = {.count = 1}, SHIFT(91, 0),
    [324] = {.count = 1}, SHIFT(92, 0),
    [326] = {.count = 1}, SHIFT(96, 0),
    [328] = {.count = 1}, SHIFT(95, 0),
    [330] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [332] = {.count = 1}, SHIFT(94, 0),
    [334] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [336] = {.count = 1}, SHIFT(97, 0),
    [338] = {.count = 1}, SHIFT(102, 0),
    [340] = {.count = 1}, SHIFT(103, 0),
    [342] = {.count = 1}, SHIFT(104, 0),
    [344] = {.count = 1}, SHIFT(101, 0),
    [346] = {.count = 1}, SHIFT(121, 0),
    [348] = {.count = 1}, SHIFT(122, 0),
    [350] = {.count = 1}, REDUCE(sym_class_declaration, 3, 0),
    [352] = {.count = 1}, SHIFT(105, 0),
    [354] = {.count = 1}, SHIFT(106, 0),
    [356] = {.count = 1}, SHIFT(107, 0),
    [358] = {.count = 1}, SHIFT(109, 0),
    [360] = {.count = 1}, SHIFT(110, 0),
    [362] = {.count = 1}, SHIFT(111, 0),
    [364] = {.count = 1}, SHIFT(112, 0),
    [366] = {.count = 1}, SHIFT(108, 0),
    [368] = {.count = 1}, SHIFT(120, 0),
    [370] = {.count = 1}, SHIFT(116, 0),
    [372] = {.count = 1}, SHIFT(115, 0),
    [374] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [376] = {.count = 1}, SHIFT(113, 0),
    [378] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [380] = {.count = 1}, SHIFT(114, 0),
    [382] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [384] = {.count = 1}, SHIFT(117, 0),
    [386] = {.count = 1}, SHIFT(118, 0),
    [388] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [390] = {.count = 1}, SHIFT(119, 0),
    [392] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [394] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [396] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [398] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [400] = {.count = 1}, SHIFT(128, 0),
    [402] = {.count = 1}, SHIFT(129, 0),
    [404] = {.count = 1}, SHIFT(130, 0),
    [406] = {.count = 1}, REDUCE(sym__argument_list, 0, 0),
    [408] = {.count = 1}, SHIFT(131, 0),
    [410] = {.count = 1}, SHIFT(132, 0),
    [412] = {.count = 1}, SHIFT(133, 0),
    [414] = {.count = 1}, SHIFT(134, 0),
    [416] = {.count = 1}, SHIFT(135, 0),
    [418] = {.count = 1}, SHIFT(127, 0),
    [420] = {.count = 1}, SHIFT(196, 0),
    [422] = {.count = 1}, SHIFT(197, 0),
    [424] = {.count = 1}, SHIFT(193, 0),
    [426] = {.count = 1}, SHIFT(194, 0),
    [428] = {.count = 1}, SHIFT(195, 0),
    [430] = {.count = 1}, REDUCE(sym__argument_list, 1, 0),
    [432] = {.count = 1}, SHIFT(179, 0),
    [434] = {.count = 1}, SHIFT(180, 0),
    [436] = {.count = 1}, SHIFT(181, 0),
    [438] = {.count = 1}, SHIFT(182, 0),
    [440] = {.count = 1}, SHIFT(178, 0),
    [442] = {.count = 1}, SHIFT(146, 0),
    [444] = {.count = 1}, SHIFT(147, 0),
    [446] = {.count = 1}, SHIFT(148, 0),
    [448] = {.count = 1}, SHIFT(149, 0),
    [450] = {.count = 1}, SHIFT(150, 0),
    [452] = {.count = 1}, SHIFT(151, 0),
    [454] = {.count = 1}, SHIFT(140, 0),
    [456] = {.count = 1}, SHIFT(141, 0),
    [458] = {.count = 1}, SHIFT(142, 0),
    [460] = {.count = 1}, SHIFT(136, 0),
    [462] = {.count = 1}, SHIFT(137, 0),
    [464] = {.count = 1}, SHIFT(138, 0),
    [466] = {.count = 1}, REDUCE(sym__argument_list, 2, 0),
    [468] = {.count = 1}, SHIFT(139, 0),
    [470] = {.count = 1}, SHIFT(144, 0),
    [472] = {.count = 1}, SHIFT(143, 0),
    [474] = {.count = 1}, SHIFT(145, 0),
    [476] = {.count = 1}, REDUCE(sym__argument_list, 4, 0),
    [478] = {.count = 1}, SHIFT(177, 0),
    [480] = {.count = 1}, SHIFT(163, 0),
    [482] = {.count = 1}, SHIFT(164, 0),
    [484] = {.count = 1}, SHIFT(165, 0),
    [486] = {.count = 1}, SHIFT(166, 0),
    [488] = {.count = 1}, SHIFT(162, 0),
    [490] = {.count = 1}, SHIFT(156, 0),
    [492] = {.count = 1}, SHIFT(157, 0),
    [494] = {.count = 1}, SHIFT(158, 0),
    [496] = {.count = 1}, SHIFT(152, 0),
    [498] = {.count = 1}, SHIFT(153, 0),
    [500] = {.count = 1}, SHIFT(154, 0),
    [502] = {.count = 1}, SHIFT(155, 0),
    [504] = {.count = 1}, SHIFT(160, 0),
    [506] = {.count = 1}, SHIFT(159, 0),
    [508] = {.count = 1}, SHIFT(161, 0),
    [510] = {.count = 1}, SHIFT(173, 0),
    [512] = {.count = 1}, SHIFT(171, 0),
    [514] = {.count = 1}, SHIFT(168, 0),
    [516] = {.count = 1}, SHIFT(167, 0),
    [518] = {.count = 1}, REDUCE(sym__argument_list, 3, 0),
    [520] = {.count = 1}, SHIFT(169, 0),
    [522] = {.count = 1}, SHIFT(170, 0),
    [524] = {.count = 1}, REDUCE(sym__argument_list, 5, 0),
    [526] = {.count = 1}, SHIFT(172, 0),
    [528] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 2, 0),
    [530] = {.count = 1}, REDUCE(aux_sym__argument_list_repeat1, 3, 0),
    [532] = {.count = 1}, SHIFT(174, 0),
    [534] = {.count = 1}, SHIFT(175, 0),
    [536] = {.count = 1}, SHIFT(176, 0),
    [538] = {.count = 1}, REDUCE(sym__argument_list, 6, 0),
    [540] = {.count = 1}, REDUCE(sym__argument_declaration, 3, 0),
    [542] = {.count = 1}, SHIFT(189, 0),
    [544] = {.count = 1}, SHIFT(187, 0),
    [546] = {.count = 1}, SHIFT(184, 0),
    [548] = {.count = 1}, SHIFT(183, 0),
    [550] = {.count = 1}, SHIFT(185, 0),
    [552] = {.count = 1}, SHIFT(186, 0),
    [554] = {.count = 1}, SHIFT(188, 0),
    [556] = {.count = 1}, SHIFT(190, 0),
    [558] = {.count = 1}, SHIFT(191, 0),
    [560] = {.count = 1}, SHIFT(192, 0),
    [562] = {.count = 1}, REDUCE(sym__argument_declaration, 2, 0),
    [564] = {.count = 1}, SHIFT(198, 0),
    [566] = {.count = 1}, SHIFT(199, 0),
    [568] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [570] = {.count = 1}, SHIFT(200, 0),
    [572] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [574] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [576] = {.count = 1}, SHIFT(205, 0),
    [578] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [580] = {.count = 1}, SHIFT(210, 0),
    [582] = {.count = 1}, SHIFT(211, 0),
    [584] = {.count = 1}, SHIFT(217, 0),
    [586] = {.count = 1}, SHIFT(213, 0),
    [588] = {.count = 1}, SHIFT(212, 0),
    [590] = {.count = 1}, SHIFT(214, 0),
    [592] = {.count = 1}, SHIFT(215, 0),
    [594] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [596] = {.count = 1}, SHIFT(216, 0),
    [598] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [600] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [602] = {.count = 1}, SHIFT(220, 0),
    [604] = {.count = 1}, SHIFT(222, 0),
    [606] = {.count = 1}, SHIFT(223, 0),
    [608] = {.count = 1}, SHIFT(224, 0),
    [610] = {.count = 1}, SHIFT(235, 0),
    [612] = {.count = 1}, SHIFT(236, 0),
    [614] = {.count = 1}, SHIFT(225, 0),
    [616] = {.count = 1}, SHIFT(226, 0),
    [618] = {.count = 1}, SHIFT(227, 0),
    [620] = {.count = 1}, SHIFT(228, 0),
    [622] = {.count = 1}, SHIFT(234, 0),
    [624] = {.count = 1}, SHIFT(230, 0),
    [626] = {.count = 1}, SHIFT(229, 0),
    [628] = {.count = 1}, SHIFT(231, 0),
    [630] = {.count = 1}, SHIFT(232, 0),
    [632] = {.count = 1}, SHIFT(233, 0),
    [634] = {.count = 1}, SHIFT(238, 0),
    [636] = {.count = 1}, SHIFT(239, 0),
    [638] = {.count = 1}, SHIFT(240, 0),
    [640] = {.count = 1}, SHIFT(241, 0),
    [642] = {.count = 1}, SHIFT(242, 0),
    [644] = {.count = 1}, SHIFT(243, 0),
    [646] = {.count = 1}, SHIFT(249, 0),
    [648] = {.count = 1}, SHIFT(250, 0),
    [650] = {.count = 1}, SHIFT(256, 0),
    [652] = {.count = 1}, SHIFT(252, 0),
    [654] = {.count = 1}, SHIFT(251, 0),
    [656] = {.count = 1}, SHIFT(253, 0),
    [658] = {.count = 1}, SHIFT(254, 0),
    [660] = {.count = 1}, SHIFT(255, 0),
    [662] = {.count = 1}, SHIFT(259, 0),
    [664] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [666] = {.count = 1}, SHIFT(263, 0),
    [668] = {.count = 1}, SHIFT(264, 0),
    [670] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [672] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [674] = {.count = 1}, SHIFT(267, 0),
    [676] = {.count = 1}, SHIFT(268, 0),
    [678] = {.count = 1}, SHIFT(269, 0),
    [680] = {.count = 1}, SHIFT(271, 0),
    [682] = {.count = 1}, SHIFT(272, 0),
    [684] = {.count = 1}, SHIFT(273, 0),
    [686] = {.count = 1}, SHIFT(274, 0),
    [688] = {.count = 1}, SHIFT(275, 0),
    [690] = {.count = 1}, SHIFT(277, 0),
    [692] = {.count = 1}, SHIFT(278, 0),
    [694] = {.count = 1}, SHIFT(279, 0),
    [696] = {.count = 1}, SHIFT(290, 0),
    [698] = {.count = 1}, SHIFT(291, 0),
    [700] = {.count = 1}, SHIFT(280, 0),
    [702] = {.count = 1}, SHIFT(281, 0),
    [704] = {.count = 1}, SHIFT(282, 0),
    [706] = {.count = 1}, SHIFT(283, 0),
    [708] = {.count = 1}, SHIFT(289, 0),
    [710] = {.count = 1}, SHIFT(285, 0),
    [712] = {.count = 1}, SHIFT(284, 0),
    [714] = {.count = 1}, SHIFT(286, 0),
    [716] = {.count = 1}, SHIFT(287, 0),
    [718] = {.count = 1}, SHIFT(288, 0),
    [720] = {.count = 1}, SHIFT(293, 0),
    [722] = {.count = 1}, SHIFT(294, 0),
    [724] = {.count = 1}, SHIFT(295, 0),
    [726] = {.count = 1}, SHIFT(296, 0),
    [728] = {.count = 1}, SHIFT(297, 0),
    [730] = {.count = 1}, SHIFT(298, 0),
    [732] = {.count = 1}, SHIFT(301, 0),
    [734] = {.count = 1}, SHIFT(305, 0),
    [736] = {.count = 1}, SHIFT(306, 0),
    [738] = {.count = 1}, SHIFT(312, 0),
    [740] = {.count = 1}, SHIFT(308, 0),
    [742] = {.count = 1}, SHIFT(307, 0),
    [744] = {.count = 1}, SHIFT(309, 0),
    [746] = {.count = 1}, SHIFT(310, 0),
    [748] = {.count = 1}, SHIFT(311, 0),
    [750] = {.count = 1}, SHIFT(316, 0),
    [752] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [754] = {.count = 1}, SHIFT(317, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
