#include "tree_sitter/parser.h"

#define STATE_COUNT 863
#define SYMBOL_COUNT 89

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__declaration,
    sym_method_declaration,
    sym_argument_list,
    sym_class_declaration,
    sym_module_declaration,
    sym_while_statement,
    sym_until_statement,
    sym_if_statement,
    sym_unless_statement,
    sym_condition,
    sym__statement_block,
    sym__do_block,
    sym_then_block,
    sym__then_else_block,
    sym__then_elsif_else_block,
    sym__call,
    sym__call_arguments,
    sym__command,
    sym__function_call,
    sym__expression,
    sym__argument,
    sym__primary,
    sym_scope_resolution_expression,
    sym_subscript_expression,
    sym__variable,
    sym__function_name,
    sym__terminator,
    aux_sym_program_repeat1,
    aux_sym_argument_list_repeat1,
    aux_sym_class_declaration_repeat1,
    aux_sym__then_elsif_else_block_repeat1,
    aux_sym__call_arguments_repeat1,
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
    anon_sym_then,
    anon_sym_else,
    anon_sym_elsif,
    anon_sym_super,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_nil,
    anon_sym_self,
    sym_identifier,
    sym_comment,
    sym_symbol,
    anon_sym_DOT_DOT,
    anon_sym_CARET,
    anon_sym_LT_EQ_GT,
    anon_sym_EQ_EQ,
    anon_sym_EQ_EQ_EQ,
    anon_sym_EQ_TILDE,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_LT_EQ,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_STAR_STAR,
    anon_sym_LT_LT,
    anon_sym_GT_GT,
    anon_sym_TILDE,
    anon_sym_PLUS_AT,
    anon_sym_DASH_AT,
    anon_sym_LBRACK_RBRACK,
    anon_sym_LBRACK_RBRACK_EQ,
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
    [sym_while_statement] = "while_statement",
    [sym_until_statement] = "until_statement",
    [sym_if_statement] = "if_statement",
    [sym_unless_statement] = "unless_statement",
    [sym_condition] = "condition",
    [sym__statement_block] = "_statement_block",
    [sym__do_block] = "_do_block",
    [sym_then_block] = "then_block",
    [sym__then_else_block] = "_then_else_block",
    [sym__then_elsif_else_block] = "_then_elsif_else_block",
    [sym__call] = "_call",
    [sym__call_arguments] = "_call_arguments",
    [sym__command] = "_command",
    [sym__function_call] = "_function_call",
    [sym__expression] = "_expression",
    [sym__argument] = "_argument",
    [sym__primary] = "_primary",
    [sym_scope_resolution_expression] = "scope_resolution_expression",
    [sym_subscript_expression] = "subscript_expression",
    [sym__variable] = "_variable",
    [sym__function_name] = "_function_name",
    [sym__terminator] = "_terminator",
    [aux_sym_program_repeat1] = "program_repeat1",
    [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym__then_elsif_else_block_repeat1] = "_then_elsif_else_block_repeat1",
    [aux_sym__call_arguments_repeat1] = "_call_arguments_repeat1",
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
    [anon_sym_then] = "then",
    [anon_sym_else] = "else",
    [anon_sym_elsif] = "elsif",
    [anon_sym_super] = "super",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_nil] = "nil",
    [anon_sym_self] = "self",
    [sym_identifier] = "identifier",
    [sym_comment] = "comment",
    [sym_symbol] = "symbol",
    [anon_sym_DOT_DOT] = "..",
    [anon_sym_CARET] = "^",
    [anon_sym_LT_EQ_GT] = "<=>",
    [anon_sym_EQ_EQ] = "==",
    [anon_sym_EQ_EQ_EQ] = "===",
    [anon_sym_EQ_TILDE] = "=~",
    [anon_sym_GT] = ">",
    [anon_sym_GT_EQ] = ">=",
    [anon_sym_LT_EQ] = "<=",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_TILDE] = "~",
    [anon_sym_PLUS_AT] = "+@",
    [anon_sym_DASH_AT] = "-@",
    [anon_sym_LBRACK_RBRACK] = "[]",
    [anon_sym_LBRACK_RBRACK_EQ] = "[]=",
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
    [sym_while_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_until_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_if_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unless_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_condition] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__do_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_then_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__then_else_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__then_elsif_else_block] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__call] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__call_arguments] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__command] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__function_call] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__argument] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__primary] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_scope_resolution_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_subscript_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__variable] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__function_name] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__terminator] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_program_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_argument_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_class_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__then_elsif_else_block_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__call_arguments_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_then] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_else] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_elsif] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_super] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_nil] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_self] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_comment] = {.visible = true, .named = true, .structural = false, .extra = true},
    [sym_symbol] = {.visible = true, .named = true, .structural = true, .extra = false},
    [anon_sym_DOT_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_TILDE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PERCENT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_TILDE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS_AT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH_AT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK_RBRACK_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '%')
                ADVANCE(6);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(10);
            if (lookahead == '+')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(19);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(34);
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(54);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == '[')
                ADVANCE(57);
            if (lookahead == ']')
                ADVANCE(60);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(72);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(103);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(124);
            if (lookahead == '~')
                ADVANCE(125);
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
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 6:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 7:
            ACCEPT_TOKEN(anon_sym_AMP);
        case 8:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 9:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 10:
            if (lookahead == '*')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 11:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
        case 12:
            if (lookahead == '@')
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 13:
            ACCEPT_TOKEN(anon_sym_PLUS_AT);
        case 14:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 15:
            if (lookahead == '@')
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 16:
            ACCEPT_TOKEN(anon_sym_DASH_AT);
        case 17:
            if (lookahead == '.')
                ADVANCE(18);
            LEX_ERROR();
        case 18:
            ACCEPT_TOKEN(anon_sym_DOT_DOT);
        case 19:
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 20:
            if (lookahead == '%')
                ADVANCE(21);
            if (lookahead == '&')
                ADVANCE(21);
            if (lookahead == '*')
                ADVANCE(22);
            if (lookahead == '+')
                ADVANCE(23);
            if (lookahead == '-')
                ADVANCE(23);
            if (lookahead == '.')
                ADVANCE(24);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(21);
            if (lookahead == '|')
                ADVANCE(21);
            if (lookahead == '~')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            ACCEPT_TOKEN(sym_symbol);
        case 22:
            if (lookahead == '*')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 23:
            if (lookahead == '@')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 24:
            if (lookahead == '.')
                ADVANCE(21);
            LEX_ERROR();
        case 25:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 26:
            if (lookahead == '<')
                ADVANCE(21);
            if (lookahead == '=')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_symbol);
        case 27:
            if (lookahead == '>')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 28:
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '~')
                ADVANCE(21);
            LEX_ERROR();
        case 29:
            if (lookahead == '=')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 30:
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '>')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_symbol);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(sym_symbol);
        case 32:
            if (lookahead == ']')
                ADVANCE(29);
            LEX_ERROR();
        case 33:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 34:
            if (lookahead == '<')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_TOKEN(anon_sym_LT);
        case 35:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 36:
            if (lookahead == '>')
                ADVANCE(37);
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 37:
            ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
        case 38:
            if (lookahead == '=')
                ADVANCE(39);
            if (lookahead == 'b')
                ADVANCE(41);
            if (lookahead == '~')
                ADVANCE(53);
            LEX_ERROR();
        case 39:
            if (lookahead == '=')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 40:
            ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
        case 41:
            if (lookahead == 'e')
                ADVANCE(42);
            LEX_ERROR();
        case 42:
            if (lookahead == 'g')
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            if (lookahead == 'i')
                ADVANCE(44);
            LEX_ERROR();
        case 44:
            if (lookahead == 'n')
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (lookahead == '\n')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == '=')
                ADVANCE(47);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(52);
            LEX_ERROR();
        case 47:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == 'e')
                ADVANCE(48);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'e')))
                ADVANCE(52);
            LEX_ERROR();
        case 48:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == 'n')
                ADVANCE(49);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'n')))
                ADVANCE(52);
            LEX_ERROR();
        case 49:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(50);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == 'd')))
                ADVANCE(52);
            LEX_ERROR();
        case 50:
            if (lookahead == '\n')
                ADVANCE(51);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(52);
            LEX_ERROR();
        case 51:
            if (lookahead == '\n')
                ADVANCE(46);
            if (lookahead == '=')
                ADVANCE(47);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=')))
                ADVANCE(52);
            ACCEPT_TOKEN(sym_comment);
        case 52:
            if (lookahead == '\n')
                ADVANCE(46);
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(52);
            LEX_ERROR();
        case 53:
            ACCEPT_TOKEN(anon_sym_EQ_TILDE);
        case 54:
            if (lookahead == '=')
                ADVANCE(55);
            if (lookahead == '>')
                ADVANCE(56);
            ACCEPT_TOKEN(anon_sym_GT);
        case 55:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 56:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 57:
            if (lookahead == ']')
                ADVANCE(58);
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 58:
            if (lookahead == '=')
                ADVANCE(59);
            ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
        case 59:
            ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK_EQ);
        case 60:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 61:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_alias);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_class);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_def);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_do);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(77);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(79);
            if (lookahead == 'i')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_else);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_elsif);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_end);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_if);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(88);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_module);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_nil);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(96);
            if (lookahead == 'u')
                ADVANCE(99);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(97);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(98);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_self);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'p')
                ADVANCE(100);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(101);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'r')
                ADVANCE(102);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_super);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(104);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(105);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(106);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_then);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(108);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(112);
            if (lookahead == 't')
                ADVANCE(116);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(110);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(111);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_undef);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(113);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(114);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(115);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_unless);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(117);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(118);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_until);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'h')
                ADVANCE(120);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(121);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(122);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(123);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(anon_sym_while);
        case 124:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 125:
            ACCEPT_TOKEN(anon_sym_TILDE);
        case 126:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 127:
            if (lookahead == 'b')
                ADVANCE(41);
            LEX_ERROR();
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 129:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 131:
            if (lookahead == 'f')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_if);
        case 133:
            if (lookahead == 'n')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 'l')
                ADVANCE(135);
            if (lookahead == 't')
                ADVANCE(139);
            LEX_ERROR();
        case 135:
            if (lookahead == 'e')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 's')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 's')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            ACCEPT_TOKEN(anon_sym_unless);
        case 139:
            if (lookahead == 'i')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 'l')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_until);
        case 142:
            if (lookahead == 'h')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'i')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if (lookahead == 'l')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'e')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            ACCEPT_TOKEN(anon_sym_while);
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'o')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(anon_sym_do);
        case 150:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 151:
            if (lookahead == ':')
                ADVANCE(25);
            LEX_ERROR();
        case 152:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '%')
                ADVANCE(6);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(10);
            if (lookahead == '+')
                ADVANCE(12);
            if (lookahead == '-')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(19);
            if (lookahead == '<')
                ADVANCE(34);
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(54);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == '[')
                ADVANCE(154);
            if (lookahead == '^')
                ADVANCE(61);
            if (lookahead == '|')
                ADVANCE(124);
            if (lookahead == '~')
                ADVANCE(125);
            LEX_ERROR();
        case 154:
            if (lookahead == ']')
                ADVANCE(58);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(96);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(160);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            LEX_ERROR();
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'o')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(168);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(170);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(171);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(72);
            if (lookahead == 'e')
                ADVANCE(168);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 170:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 171:
            ACCEPT_TOKEN(anon_sym_LT);
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 173:
            if (lookahead == 'n')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'd')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_end);
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('e' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(173);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '<')
                ADVANCE(171);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(170);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(170);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 185:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(170);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 187:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(187);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(127);
            LEX_ERROR();
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == ']')
                ADVANCE(60);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(156);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == ']')
                ADVANCE(60);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(156);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 't')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'h')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 'e')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'n')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            ACCEPT_TOKEN(anon_sym_then);
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 't')
                ADVANCE(196);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'l')
                ADVANCE(203);
            if (lookahead == 'n')
                ADVANCE(174);
            LEX_ERROR();
        case 203:
            if (lookahead == 's')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            ACCEPT_TOKEN(anon_sym_else);
        case 206:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(206);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(207);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(208);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(209);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(207);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(103);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 211:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(211);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(202);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 212:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(212);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'e')
                ADVANCE(202);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 213:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(213);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == 'l')
                ADVANCE(215);
            if (lookahead == 'n')
                ADVANCE(174);
            LEX_ERROR();
        case 215:
            if (lookahead == 's')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'e')
                ADVANCE(205);
            if (lookahead == 'i')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'f')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            ACCEPT_TOKEN(anon_sym_elsif);
        case 219:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(219);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 't')
                ADVANCE(103);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == 'e')
                ADVANCE(214);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '[')
                ADVANCE(152);
            if (lookahead == 'e')
                ADVANCE(214);
            if (lookahead == 'i')
                ADVANCE(131);
            if (lookahead == 'u')
                ADVANCE(133);
            if (lookahead == 'w')
                ADVANCE(142);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '$')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(127);
            if (lookahead == '@')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'b') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(168);
            if (lookahead == 'i')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(86);
            if (lookahead == 'n')
                ADVANCE(92);
            if (lookahead == 's')
                ADVANCE(95);
            if (lookahead == 'u')
                ADVANCE(107);
            if (lookahead == 'w')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(124);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 126,
    [1] = 129,
    [2] = 130,
    [3] = 130,
    [4] = 130,
    [5] = 147,
    [6] = 147,
    [7] = 130,
    [8] = 150,
    [9] = 150,
    [10] = 153,
    [11] = 153,
    [12] = 155,
    [13] = 155,
    [14] = 155,
    [15] = 155,
    [16] = 153,
    [17] = 157,
    [18] = 158,
    [19] = 158,
    [20] = 158,
    [21] = 159,
    [22] = 150,
    [23] = 147,
    [24] = 147,
    [25] = 161,
    [26] = 162,
    [27] = 162,
    [28] = 157,
    [29] = 158,
    [30] = 163,
    [31] = 162,
    [32] = 162,
    [33] = 164,
    [34] = 164,
    [35] = 164,
    [36] = 147,
    [37] = 164,
    [38] = 165,
    [39] = 165,
    [40] = 153,
    [41] = 153,
    [42] = 155,
    [43] = 155,
    [44] = 155,
    [45] = 155,
    [46] = 153,
    [47] = 157,
    [48] = 162,
    [49] = 158,
    [50] = 158,
    [51] = 158,
    [52] = 165,
    [53] = 166,
    [54] = 167,
    [55] = 169,
    [56] = 167,
    [57] = 172,
    [58] = 172,
    [59] = 172,
    [60] = 147,
    [61] = 172,
    [62] = 176,
    [63] = 176,
    [64] = 164,
    [65] = 153,
    [66] = 153,
    [67] = 155,
    [68] = 155,
    [69] = 155,
    [70] = 155,
    [71] = 153,
    [72] = 157,
    [73] = 158,
    [74] = 158,
    [75] = 158,
    [76] = 176,
    [77] = 166,
    [78] = 167,
    [79] = 172,
    [80] = 172,
    [81] = 177,
    [82] = 178,
    [83] = 172,
    [84] = 155,
    [85] = 179,
    [86] = 177,
    [87] = 172,
    [88] = 172,
    [89] = 172,
    [90] = 178,
    [91] = 176,
    [92] = 180,
    [93] = 167,
    [94] = 158,
    [95] = 181,
    [96] = 167,
    [97] = 166,
    [98] = 158,
    [99] = 181,
    [100] = 166,
    [101] = 167,
    [102] = 172,
    [103] = 172,
    [104] = 178,
    [105] = 172,
    [106] = 172,
    [107] = 172,
    [108] = 172,
    [109] = 178,
    [110] = 172,
    [111] = 172,
    [112] = 178,
    [113] = 172,
    [114] = 164,
    [115] = 176,
    [116] = 177,
    [117] = 182,
    [118] = 155,
    [119] = 176,
    [120] = 164,
    [121] = 176,
    [122] = 164,
    [123] = 182,
    [124] = 183,
    [125] = 183,
    [126] = 166,
    [127] = 167,
    [128] = 184,
    [129] = 158,
    [130] = 185,
    [131] = 166,
    [132] = 186,
    [133] = 158,
    [134] = 185,
    [135] = 166,
    [136] = 185,
    [137] = 166,
    [138] = 185,
    [139] = 166,
    [140] = 182,
    [141] = 167,
    [142] = 158,
    [143] = 187,
    [144] = 182,
    [145] = 186,
    [146] = 158,
    [147] = 187,
    [148] = 182,
    [149] = 187,
    [150] = 182,
    [151] = 187,
    [152] = 182,
    [153] = 172,
    [154] = 172,
    [155] = 178,
    [156] = 172,
    [157] = 172,
    [158] = 167,
    [159] = 172,
    [160] = 178,
    [161] = 172,
    [162] = 172,
    [163] = 172,
    [164] = 178,
    [165] = 188,
    [166] = 188,
    [167] = 188,
    [168] = 189,
    [169] = 189,
    [170] = 157,
    [171] = 158,
    [172] = 189,
    [173] = 189,
    [174] = 164,
    [175] = 189,
    [176] = 182,
    [177] = 189,
    [178] = 189,
    [179] = 158,
    [180] = 190,
    [181] = 191,
    [182] = 192,
    [183] = 192,
    [184] = 157,
    [185] = 158,
    [186] = 189,
    [187] = 192,
    [188] = 192,
    [189] = 164,
    [190] = 192,
    [191] = 182,
    [192] = 192,
    [193] = 192,
    [194] = 158,
    [195] = 190,
    [196] = 191,
    [197] = 192,
    [198] = 193,
    [199] = 194,
    [200] = 192,
    [201] = 191,
    [202] = 193,
    [203] = 192,
    [204] = 192,
    [205] = 193,
    [206] = 189,
    [207] = 189,
    [208] = 189,
    [209] = 172,
    [210] = 172,
    [211] = 167,
    [212] = 167,
    [213] = 172,
    [214] = 172,
    [215] = 178,
    [216] = 172,
    [217] = 172,
    [218] = 172,
    [219] = 172,
    [220] = 178,
    [221] = 172,
    [222] = 172,
    [223] = 195,
    [224] = 195,
    [225] = 195,
    [226] = 200,
    [227] = 200,
    [228] = 157,
    [229] = 158,
    [230] = 200,
    [231] = 200,
    [232] = 164,
    [233] = 200,
    [234] = 182,
    [235] = 200,
    [236] = 200,
    [237] = 158,
    [238] = 190,
    [239] = 191,
    [240] = 200,
    [241] = 193,
    [242] = 200,
    [243] = 200,
    [244] = 200,
    [245] = 201,
    [246] = 172,
    [247] = 206,
    [248] = 210,
    [249] = 206,
    [250] = 211,
    [251] = 211,
    [252] = 211,
    [253] = 147,
    [254] = 211,
    [255] = 212,
    [256] = 212,
    [257] = 153,
    [258] = 153,
    [259] = 155,
    [260] = 155,
    [261] = 155,
    [262] = 155,
    [263] = 153,
    [264] = 157,
    [265] = 158,
    [266] = 158,
    [267] = 158,
    [268] = 212,
    [269] = 166,
    [270] = 167,
    [271] = 172,
    [272] = 211,
    [273] = 178,
    [274] = 211,
    [275] = 211,
    [276] = 212,
    [277] = 180,
    [278] = 167,
    [279] = 158,
    [280] = 181,
    [281] = 167,
    [282] = 166,
    [283] = 167,
    [284] = 172,
    [285] = 211,
    [286] = 178,
    [287] = 211,
    [288] = 211,
    [289] = 172,
    [290] = 211,
    [291] = 178,
    [292] = 172,
    [293] = 211,
    [294] = 178,
    [295] = 211,
    [296] = 164,
    [297] = 212,
    [298] = 182,
    [299] = 212,
    [300] = 212,
    [301] = 183,
    [302] = 166,
    [303] = 167,
    [304] = 184,
    [305] = 182,
    [306] = 167,
    [307] = 172,
    [308] = 211,
    [309] = 178,
    [310] = 211,
    [311] = 211,
    [312] = 167,
    [313] = 172,
    [314] = 178,
    [315] = 211,
    [316] = 172,
    [317] = 211,
    [318] = 178,
    [319] = 188,
    [320] = 211,
    [321] = 211,
    [322] = 167,
    [323] = 167,
    [324] = 172,
    [325] = 211,
    [326] = 178,
    [327] = 211,
    [328] = 211,
    [329] = 172,
    [330] = 211,
    [331] = 178,
    [332] = 211,
    [333] = 211,
    [334] = 195,
    [335] = 201,
    [336] = 211,
    [337] = 211,
    [338] = 167,
    [339] = 172,
    [340] = 211,
    [341] = 178,
    [342] = 211,
    [343] = 211,
    [344] = 188,
    [345] = 211,
    [346] = 195,
    [347] = 195,
    [348] = 195,
    [349] = 200,
    [350] = 200,
    [351] = 157,
    [352] = 158,
    [353] = 200,
    [354] = 200,
    [355] = 164,
    [356] = 200,
    [357] = 182,
    [358] = 200,
    [359] = 200,
    [360] = 158,
    [361] = 190,
    [362] = 191,
    [363] = 200,
    [364] = 193,
    [365] = 200,
    [366] = 200,
    [367] = 200,
    [368] = 213,
    [369] = 211,
    [370] = 219,
    [371] = 220,
    [372] = 219,
    [373] = 221,
    [374] = 221,
    [375] = 221,
    [376] = 147,
    [377] = 221,
    [378] = 222,
    [379] = 222,
    [380] = 153,
    [381] = 153,
    [382] = 155,
    [383] = 155,
    [384] = 155,
    [385] = 155,
    [386] = 153,
    [387] = 157,
    [388] = 158,
    [389] = 158,
    [390] = 158,
    [391] = 222,
    [392] = 166,
    [393] = 167,
    [394] = 172,
    [395] = 221,
    [396] = 178,
    [397] = 221,
    [398] = 221,
    [399] = 222,
    [400] = 180,
    [401] = 167,
    [402] = 158,
    [403] = 181,
    [404] = 167,
    [405] = 166,
    [406] = 167,
    [407] = 172,
    [408] = 221,
    [409] = 178,
    [410] = 221,
    [411] = 221,
    [412] = 172,
    [413] = 221,
    [414] = 178,
    [415] = 172,
    [416] = 221,
    [417] = 178,
    [418] = 221,
    [419] = 164,
    [420] = 222,
    [421] = 182,
    [422] = 222,
    [423] = 222,
    [424] = 183,
    [425] = 166,
    [426] = 167,
    [427] = 184,
    [428] = 182,
    [429] = 167,
    [430] = 172,
    [431] = 221,
    [432] = 178,
    [433] = 221,
    [434] = 221,
    [435] = 167,
    [436] = 172,
    [437] = 178,
    [438] = 221,
    [439] = 172,
    [440] = 221,
    [441] = 178,
    [442] = 188,
    [443] = 221,
    [444] = 221,
    [445] = 167,
    [446] = 167,
    [447] = 172,
    [448] = 221,
    [449] = 178,
    [450] = 221,
    [451] = 221,
    [452] = 172,
    [453] = 221,
    [454] = 178,
    [455] = 221,
    [456] = 221,
    [457] = 195,
    [458] = 201,
    [459] = 221,
    [460] = 221,
    [461] = 167,
    [462] = 172,
    [463] = 221,
    [464] = 178,
    [465] = 221,
    [466] = 221,
    [467] = 188,
    [468] = 221,
    [469] = 195,
    [470] = 213,
    [471] = 221,
    [472] = 201,
    [473] = 221,
    [474] = 167,
    [475] = 155,
    [476] = 195,
    [477] = 195,
    [478] = 195,
    [479] = 200,
    [480] = 200,
    [481] = 157,
    [482] = 158,
    [483] = 200,
    [484] = 200,
    [485] = 164,
    [486] = 200,
    [487] = 182,
    [488] = 200,
    [489] = 200,
    [490] = 158,
    [491] = 190,
    [492] = 191,
    [493] = 200,
    [494] = 193,
    [495] = 200,
    [496] = 200,
    [497] = 200,
    [498] = 219,
    [499] = 221,
    [500] = 201,
    [501] = 177,
    [502] = 213,
    [503] = 201,
    [504] = 155,
    [505] = 221,
    [506] = 201,
    [507] = 221,
    [508] = 213,
    [509] = 172,
    [510] = 221,
    [511] = 178,
    [512] = 221,
    [513] = 221,
    [514] = 167,
    [515] = 172,
    [516] = 178,
    [517] = 221,
    [518] = 153,
    [519] = 153,
    [520] = 221,
    [521] = 221,
    [522] = 158,
    [523] = 190,
    [524] = 191,
    [525] = 222,
    [526] = 193,
    [527] = 222,
    [528] = 222,
    [529] = 222,
    [530] = 223,
    [531] = 172,
    [532] = 167,
    [533] = 172,
    [534] = 221,
    [535] = 178,
    [536] = 221,
    [537] = 221,
    [538] = 178,
    [539] = 213,
    [540] = 201,
    [541] = 211,
    [542] = 167,
    [543] = 172,
    [544] = 211,
    [545] = 178,
    [546] = 211,
    [547] = 211,
    [548] = 167,
    [549] = 172,
    [550] = 178,
    [551] = 211,
    [552] = 153,
    [553] = 211,
    [554] = 211,
    [555] = 211,
    [556] = 158,
    [557] = 190,
    [558] = 191,
    [559] = 212,
    [560] = 193,
    [561] = 212,
    [562] = 212,
    [563] = 212,
    [564] = 223,
    [565] = 172,
    [566] = 167,
    [567] = 172,
    [568] = 211,
    [569] = 178,
    [570] = 211,
    [571] = 211,
    [572] = 178,
    [573] = 177,
    [574] = 201,
    [575] = 155,
    [576] = 211,
    [577] = 201,
    [578] = 172,
    [579] = 167,
    [580] = 172,
    [581] = 172,
    [582] = 178,
    [583] = 172,
    [584] = 172,
    [585] = 188,
    [586] = 172,
    [587] = 195,
    [588] = 213,
    [589] = 172,
    [590] = 201,
    [591] = 172,
    [592] = 167,
    [593] = 172,
    [594] = 172,
    [595] = 178,
    [596] = 172,
    [597] = 172,
    [598] = 167,
    [599] = 172,
    [600] = 178,
    [601] = 172,
    [602] = 153,
    [603] = 172,
    [604] = 172,
    [605] = 158,
    [606] = 190,
    [607] = 191,
    [608] = 176,
    [609] = 193,
    [610] = 176,
    [611] = 176,
    [612] = 176,
    [613] = 223,
    [614] = 172,
    [615] = 167,
    [616] = 172,
    [617] = 172,
    [618] = 178,
    [619] = 172,
    [620] = 172,
    [621] = 178,
    [622] = 178,
    [623] = 164,
    [624] = 164,
    [625] = 165,
    [626] = 180,
    [627] = 167,
    [628] = 158,
    [629] = 181,
    [630] = 167,
    [631] = 166,
    [632] = 167,
    [633] = 172,
    [634] = 164,
    [635] = 178,
    [636] = 164,
    [637] = 164,
    [638] = 172,
    [639] = 164,
    [640] = 178,
    [641] = 172,
    [642] = 164,
    [643] = 178,
    [644] = 164,
    [645] = 164,
    [646] = 165,
    [647] = 182,
    [648] = 165,
    [649] = 165,
    [650] = 183,
    [651] = 166,
    [652] = 167,
    [653] = 184,
    [654] = 182,
    [655] = 167,
    [656] = 172,
    [657] = 164,
    [658] = 178,
    [659] = 164,
    [660] = 164,
    [661] = 167,
    [662] = 172,
    [663] = 178,
    [664] = 164,
    [665] = 172,
    [666] = 164,
    [667] = 178,
    [668] = 188,
    [669] = 164,
    [670] = 164,
    [671] = 167,
    [672] = 167,
    [673] = 172,
    [674] = 164,
    [675] = 178,
    [676] = 164,
    [677] = 164,
    [678] = 172,
    [679] = 164,
    [680] = 178,
    [681] = 164,
    [682] = 164,
    [683] = 195,
    [684] = 201,
    [685] = 164,
    [686] = 164,
    [687] = 167,
    [688] = 172,
    [689] = 164,
    [690] = 178,
    [691] = 164,
    [692] = 164,
    [693] = 188,
    [694] = 164,
    [695] = 195,
    [696] = 213,
    [697] = 164,
    [698] = 201,
    [699] = 164,
    [700] = 167,
    [701] = 172,
    [702] = 164,
    [703] = 178,
    [704] = 164,
    [705] = 164,
    [706] = 167,
    [707] = 172,
    [708] = 178,
    [709] = 164,
    [710] = 153,
    [711] = 164,
    [712] = 164,
    [713] = 158,
    [714] = 190,
    [715] = 191,
    [716] = 165,
    [717] = 193,
    [718] = 165,
    [719] = 165,
    [720] = 165,
    [721] = 223,
    [722] = 172,
    [723] = 167,
    [724] = 172,
    [725] = 164,
    [726] = 178,
    [727] = 164,
    [728] = 164,
    [729] = 178,
    [730] = 182,
    [731] = 162,
    [732] = 162,
    [733] = 158,
    [734] = 190,
    [735] = 191,
    [736] = 162,
    [737] = 193,
    [738] = 162,
    [739] = 162,
    [740] = 162,
    [741] = 147,
    [742] = 194,
    [743] = 161,
    [744] = 147,
    [745] = 166,
    [746] = 167,
    [747] = 172,
    [748] = 130,
    [749] = 178,
    [750] = 130,
    [751] = 130,
    [752] = 150,
    [753] = 180,
    [754] = 167,
    [755] = 158,
    [756] = 181,
    [757] = 167,
    [758] = 166,
    [759] = 167,
    [760] = 172,
    [761] = 130,
    [762] = 178,
    [763] = 130,
    [764] = 130,
    [765] = 172,
    [766] = 130,
    [767] = 178,
    [768] = 172,
    [769] = 130,
    [770] = 178,
    [771] = 130,
    [772] = 164,
    [773] = 150,
    [774] = 182,
    [775] = 150,
    [776] = 150,
    [777] = 183,
    [778] = 166,
    [779] = 167,
    [780] = 184,
    [781] = 182,
    [782] = 167,
    [783] = 172,
    [784] = 130,
    [785] = 178,
    [786] = 130,
    [787] = 130,
    [788] = 167,
    [789] = 172,
    [790] = 178,
    [791] = 130,
    [792] = 172,
    [793] = 130,
    [794] = 178,
    [795] = 188,
    [796] = 130,
    [797] = 130,
    [798] = 167,
    [799] = 167,
    [800] = 172,
    [801] = 130,
    [802] = 178,
    [803] = 130,
    [804] = 130,
    [805] = 172,
    [806] = 130,
    [807] = 178,
    [808] = 130,
    [809] = 130,
    [810] = 195,
    [811] = 201,
    [812] = 130,
    [813] = 130,
    [814] = 167,
    [815] = 172,
    [816] = 130,
    [817] = 178,
    [818] = 130,
    [819] = 130,
    [820] = 188,
    [821] = 130,
    [822] = 195,
    [823] = 213,
    [824] = 130,
    [825] = 201,
    [826] = 130,
    [827] = 167,
    [828] = 172,
    [829] = 130,
    [830] = 178,
    [831] = 130,
    [832] = 130,
    [833] = 167,
    [834] = 172,
    [835] = 178,
    [836] = 130,
    [837] = 153,
    [838] = 130,
    [839] = 130,
    [840] = 130,
    [841] = 158,
    [842] = 190,
    [843] = 191,
    [844] = 150,
    [845] = 193,
    [846] = 150,
    [847] = 150,
    [848] = 150,
    [849] = 223,
    [850] = 172,
    [851] = 167,
    [852] = 172,
    [853] = 130,
    [854] = 178,
    [855] = 130,
    [856] = 130,
    [857] = 178,
    [858] = 177,
    [859] = 129,
    [860] = 155,
    [861] = 130,
    [862] = 129,
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
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym__call] = 10,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 6,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [ts_builtin_sym_end] = 20,
        [anon_sym_undef] = 22,
        [anon_sym_alias] = 24,
        [anon_sym_if] = 26,
        [anon_sym_while] = 28,
        [anon_sym_unless] = 30,
        [anon_sym_until] = 32,
        [anon_sym_def] = 34,
        [anon_sym_LPAREN] = 36,
        [anon_sym_class] = 38,
        [anon_sym_COLON_COLON] = 40,
        [anon_sym_module] = 42,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [1] = {
        [ts_builtin_sym_end] = 50,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [2] = {
        [sym__terminator] = 52,
        [aux_sym_program_repeat1] = 54,
        [ts_builtin_sym_end] = 56,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [3] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [4] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [ts_builtin_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [5] = {
        [anon_sym_do] = 68,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [6] = {
        [anon_sym_do] = 70,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [7] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [ts_builtin_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [8] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [ts_builtin_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 76,
        [anon_sym_LBRACK] = 78,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [9] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [ts_builtin_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [10] = {
        [sym__function_name] = 82,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 84,
        [anon_sym_CARET] = 84,
        [anon_sym_LT_EQ_GT] = 84,
        [anon_sym_EQ_EQ] = 84,
        [anon_sym_EQ_EQ_EQ] = 84,
        [anon_sym_EQ_TILDE] = 84,
        [anon_sym_GT] = 84,
        [anon_sym_GT_EQ] = 84,
        [anon_sym_LT_EQ] = 84,
        [anon_sym_PLUS] = 84,
        [anon_sym_DASH] = 84,
        [anon_sym_SLASH] = 84,
        [anon_sym_PERCENT] = 84,
        [anon_sym_STAR_STAR] = 84,
        [anon_sym_LT_LT] = 84,
        [anon_sym_GT_GT] = 84,
        [anon_sym_TILDE] = 84,
        [anon_sym_PLUS_AT] = 84,
        [anon_sym_DASH_AT] = 84,
        [anon_sym_LBRACK_RBRACK] = 84,
        [anon_sym_LBRACK_RBRACK_EQ] = 84,
        [sym__line_break] = 48,
    },
    [11] = {
        [sym__function_name] = 86,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [12] = {
        [sym_condition] = 90,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [13] = {
        [sym_condition] = 106,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [14] = {
        [sym_condition] = 122,
        [sym__expression] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 48,
        [sym_symbol] = 126,
        [sym__line_break] = 48,
    },
    [15] = {
        [sym_condition] = 138,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [16] = {
        [sym__function_name] = 140,
        [anon_sym_PIPE] = 142,
        [anon_sym_STAR] = 142,
        [anon_sym_AMP] = 142,
        [anon_sym_LT] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 142,
        [anon_sym_CARET] = 142,
        [anon_sym_LT_EQ_GT] = 142,
        [anon_sym_EQ_EQ] = 142,
        [anon_sym_EQ_EQ_EQ] = 142,
        [anon_sym_EQ_TILDE] = 142,
        [anon_sym_GT] = 142,
        [anon_sym_GT_EQ] = 142,
        [anon_sym_LT_EQ] = 142,
        [anon_sym_PLUS] = 142,
        [anon_sym_DASH] = 142,
        [anon_sym_SLASH] = 142,
        [anon_sym_PERCENT] = 142,
        [anon_sym_STAR_STAR] = 142,
        [anon_sym_LT_LT] = 142,
        [anon_sym_GT_GT] = 142,
        [anon_sym_TILDE] = 142,
        [anon_sym_PLUS_AT] = 142,
        [anon_sym_DASH_AT] = 142,
        [anon_sym_LBRACK_RBRACK] = 142,
        [anon_sym_LBRACK_RBRACK_EQ] = 142,
        [sym__line_break] = 48,
    },
    [17] = {
        [sym__statement] = 144,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 174,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [18] = {
        [sym_identifier] = 184,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [19] = {
        [sym_identifier] = 186,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [20] = {
        [sym_identifier] = 188,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [21] = {
        [sym__call_arguments] = 190,
        [sym__command] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym_scope_resolution_expression] = 198,
        [sym_subscript_expression] = 198,
        [sym__variable] = 198,
        [anon_sym_do] = 200,
        [anon_sym_LPAREN] = 202,
        [anon_sym_COLON_COLON] = 204,
        [anon_sym_super] = 206,
        [anon_sym_nil] = 208,
        [anon_sym_self] = 208,
        [sym_identifier] = 208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [22] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [ts_builtin_sym_end] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [23] = {
        [anon_sym_do] = 212,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [24] = {
        [anon_sym_do] = 214,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [25] = {
        [aux_sym__call_arguments_repeat1] = 216,
        [anon_sym_do] = 214,
        [anon_sym_COMMA] = 218,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [26] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COMMA] = 74,
        [anon_sym_COLON_COLON] = 220,
        [anon_sym_LBRACK] = 222,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [27] = {
        [aux_sym__call_arguments_repeat1] = 80,
        [anon_sym_do] = 80,
        [anon_sym_COMMA] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [28] = {
        [sym__statement] = 224,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 226,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [29] = {
        [sym_identifier] = 228,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [30] = {
        [sym__call_arguments] = 190,
        [sym__command] = 192,
        [sym__argument] = 194,
        [sym__primary] = 196,
        [sym_scope_resolution_expression] = 198,
        [sym_subscript_expression] = 198,
        [sym__variable] = 198,
        [anon_sym_LPAREN] = 202,
        [anon_sym_COLON_COLON] = 204,
        [anon_sym_super] = 206,
        [anon_sym_nil] = 208,
        [anon_sym_self] = 208,
        [sym_identifier] = 208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [31] = {
        [aux_sym__call_arguments_repeat1] = 210,
        [anon_sym_do] = 210,
        [anon_sym_COMMA] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [32] = {
        [aux_sym__call_arguments_repeat1] = 230,
        [anon_sym_do] = 230,
        [anon_sym_COMMA] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [33] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 234,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 238,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [34] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_RPAREN] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [35] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_RPAREN] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [36] = {
        [anon_sym_do] = 240,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [37] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_RPAREN] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [38] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_RPAREN] = 74,
        [anon_sym_COLON_COLON] = 242,
        [anon_sym_LBRACK] = 244,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [39] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_RPAREN] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [40] = {
        [sym__function_name] = 246,
        [anon_sym_PIPE] = 248,
        [anon_sym_STAR] = 248,
        [anon_sym_AMP] = 248,
        [anon_sym_LT] = 248,
        [sym_identifier] = 248,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 248,
        [anon_sym_CARET] = 248,
        [anon_sym_LT_EQ_GT] = 248,
        [anon_sym_EQ_EQ] = 248,
        [anon_sym_EQ_EQ_EQ] = 248,
        [anon_sym_EQ_TILDE] = 248,
        [anon_sym_GT] = 248,
        [anon_sym_GT_EQ] = 248,
        [anon_sym_LT_EQ] = 248,
        [anon_sym_PLUS] = 248,
        [anon_sym_DASH] = 248,
        [anon_sym_SLASH] = 248,
        [anon_sym_PERCENT] = 248,
        [anon_sym_STAR_STAR] = 248,
        [anon_sym_LT_LT] = 248,
        [anon_sym_GT_GT] = 248,
        [anon_sym_TILDE] = 248,
        [anon_sym_PLUS_AT] = 248,
        [anon_sym_DASH_AT] = 248,
        [anon_sym_LBRACK_RBRACK] = 248,
        [anon_sym_LBRACK_RBRACK_EQ] = 248,
        [sym__line_break] = 48,
    },
    [41] = {
        [sym__function_name] = 250,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [42] = {
        [sym_condition] = 252,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [43] = {
        [sym_condition] = 254,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [44] = {
        [sym_condition] = 256,
        [sym__expression] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 48,
        [sym_symbol] = 126,
        [sym__line_break] = 48,
    },
    [45] = {
        [sym_condition] = 258,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [46] = {
        [sym__function_name] = 260,
        [anon_sym_PIPE] = 142,
        [anon_sym_STAR] = 142,
        [anon_sym_AMP] = 142,
        [anon_sym_LT] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 142,
        [anon_sym_CARET] = 142,
        [anon_sym_LT_EQ_GT] = 142,
        [anon_sym_EQ_EQ] = 142,
        [anon_sym_EQ_EQ_EQ] = 142,
        [anon_sym_EQ_TILDE] = 142,
        [anon_sym_GT] = 142,
        [anon_sym_GT_EQ] = 142,
        [anon_sym_LT_EQ] = 142,
        [anon_sym_PLUS] = 142,
        [anon_sym_DASH] = 142,
        [anon_sym_SLASH] = 142,
        [anon_sym_PERCENT] = 142,
        [anon_sym_STAR_STAR] = 142,
        [anon_sym_LT_LT] = 142,
        [anon_sym_GT_GT] = 142,
        [anon_sym_TILDE] = 142,
        [anon_sym_PLUS_AT] = 142,
        [anon_sym_DASH_AT] = 142,
        [anon_sym_LBRACK_RBRACK] = 142,
        [anon_sym_LBRACK_RBRACK_EQ] = 142,
        [sym__line_break] = 48,
    },
    [47] = {
        [sym__statement] = 262,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 264,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [48] = {
        [aux_sym__call_arguments_repeat1] = 266,
        [anon_sym_do] = 266,
        [anon_sym_COMMA] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [49] = {
        [sym_identifier] = 268,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [50] = {
        [sym_identifier] = 270,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [51] = {
        [sym_identifier] = 272,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [52] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_RPAREN] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [53] = {
        [sym__terminator] = 274,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [54] = {
        [sym__statement] = 280,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 294,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [55] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_argument_list] = 322,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym__statement_block] = 322,
        [sym__do_block] = 322,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [sym__terminator] = 322,
        [aux_sym_class_declaration_repeat1] = 322,
        [anon_sym_do] = 322,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_STAR] = 322,
        [anon_sym_AMP] = 322,
        [anon_sym_class] = 320,
        [anon_sym_LT] = 322,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 322,
    },
    [56] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
    },
    [57] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 326,
        [anon_sym_end] = 328,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [58] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [59] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [60] = {
        [anon_sym_do] = 332,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [61] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [62] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 334,
        [anon_sym_LBRACK] = 336,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [63] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [64] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [anon_sym_RPAREN] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [65] = {
        [sym__function_name] = 340,
        [anon_sym_PIPE] = 342,
        [anon_sym_STAR] = 342,
        [anon_sym_AMP] = 342,
        [anon_sym_LT] = 342,
        [sym_identifier] = 342,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 342,
        [anon_sym_CARET] = 342,
        [anon_sym_LT_EQ_GT] = 342,
        [anon_sym_EQ_EQ] = 342,
        [anon_sym_EQ_EQ_EQ] = 342,
        [anon_sym_EQ_TILDE] = 342,
        [anon_sym_GT] = 342,
        [anon_sym_GT_EQ] = 342,
        [anon_sym_LT_EQ] = 342,
        [anon_sym_PLUS] = 342,
        [anon_sym_DASH] = 342,
        [anon_sym_SLASH] = 342,
        [anon_sym_PERCENT] = 342,
        [anon_sym_STAR_STAR] = 342,
        [anon_sym_LT_LT] = 342,
        [anon_sym_GT_GT] = 342,
        [anon_sym_TILDE] = 342,
        [anon_sym_PLUS_AT] = 342,
        [anon_sym_DASH_AT] = 342,
        [anon_sym_LBRACK_RBRACK] = 342,
        [anon_sym_LBRACK_RBRACK_EQ] = 342,
        [sym__line_break] = 48,
    },
    [66] = {
        [sym__function_name] = 344,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [67] = {
        [sym_condition] = 346,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [68] = {
        [sym_condition] = 348,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [69] = {
        [sym_condition] = 350,
        [sym__expression] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 48,
        [sym_symbol] = 126,
        [sym__line_break] = 48,
    },
    [70] = {
        [sym_condition] = 352,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [71] = {
        [sym__function_name] = 354,
        [anon_sym_PIPE] = 142,
        [anon_sym_STAR] = 142,
        [anon_sym_AMP] = 142,
        [anon_sym_LT] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 142,
        [anon_sym_CARET] = 142,
        [anon_sym_LT_EQ_GT] = 142,
        [anon_sym_EQ_EQ] = 142,
        [anon_sym_EQ_EQ_EQ] = 142,
        [anon_sym_EQ_TILDE] = 142,
        [anon_sym_GT] = 142,
        [anon_sym_GT_EQ] = 142,
        [anon_sym_LT_EQ] = 142,
        [anon_sym_PLUS] = 142,
        [anon_sym_DASH] = 142,
        [anon_sym_SLASH] = 142,
        [anon_sym_PERCENT] = 142,
        [anon_sym_STAR_STAR] = 142,
        [anon_sym_LT_LT] = 142,
        [anon_sym_GT_GT] = 142,
        [anon_sym_TILDE] = 142,
        [anon_sym_PLUS_AT] = 142,
        [anon_sym_DASH_AT] = 142,
        [anon_sym_LBRACK_RBRACK] = 142,
        [anon_sym_LBRACK_RBRACK_EQ] = 142,
        [sym__line_break] = 48,
    },
    [72] = {
        [sym__statement] = 356,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 358,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [73] = {
        [sym_identifier] = 360,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [74] = {
        [sym_identifier] = 362,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [75] = {
        [sym_identifier] = 364,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [76] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [anon_sym_end] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [77] = {
        [sym__terminator] = 366,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [78] = {
        [sym__statement] = 368,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 370,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [79] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 372,
        [anon_sym_end] = 374,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [80] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [81] = {
        [sym__statement] = 376,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [82] = {
        [anon_sym_end] = 378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [83] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_end] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [sym_comment] = 48,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [84] = {
        [sym__expression] = 382,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_LPAREN] = 310,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [85] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [sym__terminator] = 322,
        [aux_sym_program_repeat1] = 322,
        [aux_sym__then_elsif_else_block_repeat1] = 322,
        [ts_builtin_sym_end] = 322,
        [anon_sym_end] = 322,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_RPAREN] = 322,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_else] = 322,
        [anon_sym_elsif] = 322,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 322,
    },
    [86] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
    },
    [87] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 48,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [88] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 48,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [89] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 388,
        [anon_sym_end] = 390,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [90] = {
        [anon_sym_end] = 392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [91] = {
        [sym__terminator] = 230,
        [aux_sym_program_repeat1] = 230,
        [anon_sym_end] = 230,
        [anon_sym_if] = 230,
        [anon_sym_while] = 230,
        [anon_sym_unless] = 230,
        [anon_sym_until] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [92] = {
        [sym__terminator] = 394,
        [anon_sym_LT] = 396,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [93] = {
        [sym__statement] = 398,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 400,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [94] = {
        [sym_identifier] = 402,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [95] = {
        [sym__terminator] = 404,
        [aux_sym_class_declaration_repeat1] = 406,
        [anon_sym_COLON_COLON] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [96] = {
        [sym__statement] = 410,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 412,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [97] = {
        [sym__terminator] = 414,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [98] = {
        [sym_identifier] = 416,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [99] = {
        [sym__terminator] = 418,
        [aux_sym_class_declaration_repeat1] = 420,
        [anon_sym_COLON_COLON] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 418,
        [anon_sym_SEMI] = 418,
    },
    [100] = {
        [sym__terminator] = 422,
        [sym_comment] = 48,
        [sym__line_break] = 422,
        [anon_sym_SEMI] = 422,
    },
    [101] = {
        [sym__statement] = 424,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 426,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [102] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 428,
        [anon_sym_end] = 430,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [103] = {
        [sym__terminator] = 432,
        [aux_sym_program_repeat1] = 432,
        [anon_sym_end] = 432,
        [anon_sym_if] = 432,
        [anon_sym_while] = 432,
        [anon_sym_unless] = 432,
        [anon_sym_until] = 432,
        [sym_comment] = 48,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 432,
    },
    [104] = {
        [anon_sym_end] = 434,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [105] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [106] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [sym_comment] = 48,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [107] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 440,
        [anon_sym_end] = 426,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [108] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [sym_comment] = 48,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [109] = {
        [anon_sym_end] = 430,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [110] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 444,
        [anon_sym_end] = 446,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [111] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [112] = {
        [anon_sym_end] = 412,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [113] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [114] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 452,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 454,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [115] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 266,
        [anon_sym_end] = 266,
        [anon_sym_if] = 266,
        [anon_sym_while] = 266,
        [anon_sym_unless] = 266,
        [anon_sym_until] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [116] = {
        [sym__statement] = 456,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [117] = {
        [anon_sym_RPAREN] = 458,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [118] = {
        [sym__expression] = 460,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_LPAREN] = 172,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [119] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [anon_sym_end] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [120] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [anon_sym_RPAREN] = 384,
        [sym_comment] = 48,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [121] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [122] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 466,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 390,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [123] = {
        [anon_sym_RPAREN] = 392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [124] = {
        [sym_argument_list] = 468,
        [sym__terminator] = 470,
        [anon_sym_LPAREN] = 472,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [125] = {
        [sym_argument_list] = 478,
        [sym__terminator] = 478,
        [anon_sym_LPAREN] = 478,
        [anon_sym_STAR] = 478,
        [anon_sym_AMP] = 478,
        [sym_identifier] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [126] = {
        [sym__terminator] = 480,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [127] = {
        [sym__statement] = 482,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 484,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [128] = {
        [sym_argument_list] = 486,
        [anon_sym_RPAREN] = 480,
        [anon_sym_STAR] = 488,
        [anon_sym_AMP] = 488,
        [sym_identifier] = 490,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [129] = {
        [sym_identifier] = 492,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [130] = {
        [sym__terminator] = 494,
        [aux_sym_argument_list_repeat1] = 496,
        [anon_sym_COMMA] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 494,
        [anon_sym_SEMI] = 494,
    },
    [131] = {
        [sym__terminator] = 500,
        [sym_comment] = 48,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [132] = {
        [anon_sym_STAR] = 502,
        [anon_sym_AMP] = 502,
        [sym_identifier] = 504,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [133] = {
        [sym_identifier] = 506,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [134] = {
        [sym__terminator] = 508,
        [aux_sym_argument_list_repeat1] = 510,
        [anon_sym_COMMA] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 508,
        [anon_sym_SEMI] = 508,
    },
    [135] = {
        [sym__terminator] = 512,
        [sym_comment] = 48,
        [sym__line_break] = 512,
        [anon_sym_SEMI] = 512,
    },
    [136] = {
        [sym__terminator] = 512,
        [aux_sym_argument_list_repeat1] = 514,
        [anon_sym_COMMA] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 512,
        [anon_sym_SEMI] = 512,
    },
    [137] = {
        [sym__terminator] = 516,
        [sym_comment] = 48,
        [sym__line_break] = 516,
        [anon_sym_SEMI] = 516,
    },
    [138] = {
        [sym__terminator] = 500,
        [aux_sym_argument_list_repeat1] = 518,
        [anon_sym_COMMA] = 498,
        [sym_comment] = 48,
        [sym__line_break] = 500,
        [anon_sym_SEMI] = 500,
    },
    [139] = {
        [sym__terminator] = 520,
        [sym_comment] = 48,
        [sym__line_break] = 520,
        [anon_sym_SEMI] = 520,
    },
    [140] = {
        [anon_sym_RPAREN] = 522,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [141] = {
        [sym__statement] = 524,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 526,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [142] = {
        [sym_identifier] = 528,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [143] = {
        [aux_sym_argument_list_repeat1] = 530,
        [anon_sym_RPAREN] = 494,
        [anon_sym_COMMA] = 532,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [144] = {
        [anon_sym_RPAREN] = 500,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [145] = {
        [anon_sym_STAR] = 534,
        [anon_sym_AMP] = 534,
        [sym_identifier] = 536,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [146] = {
        [sym_identifier] = 538,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [147] = {
        [aux_sym_argument_list_repeat1] = 540,
        [anon_sym_RPAREN] = 508,
        [anon_sym_COMMA] = 532,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [148] = {
        [anon_sym_RPAREN] = 512,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [149] = {
        [aux_sym_argument_list_repeat1] = 542,
        [anon_sym_RPAREN] = 512,
        [anon_sym_COMMA] = 532,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [150] = {
        [anon_sym_RPAREN] = 516,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [151] = {
        [aux_sym_argument_list_repeat1] = 544,
        [anon_sym_RPAREN] = 500,
        [anon_sym_COMMA] = 532,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [152] = {
        [anon_sym_RPAREN] = 520,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [153] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 546,
        [anon_sym_end] = 548,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [154] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [155] = {
        [anon_sym_end] = 552,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [156] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [157] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [sym_comment] = 48,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [158] = {
        [sym__statement] = 558,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 548,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [159] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 560,
        [anon_sym_end] = 552,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [160] = {
        [anon_sym_end] = 562,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [161] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_end] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [162] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 566,
        [anon_sym_end] = 526,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [163] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [sym_comment] = 48,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [164] = {
        [anon_sym_end] = 548,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [165] = {
        [sym__statement_block] = 570,
        [sym__do_block] = 572,
        [sym__terminator] = 574,
        [anon_sym_do] = 576,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [166] = {
        [sym__statement_block] = 578,
        [sym__do_block] = 578,
        [sym__terminator] = 578,
        [anon_sym_do] = 578,
        [sym_comment] = 48,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [167] = {
        [sym__statement_block] = 72,
        [sym__do_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_do] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [168] = {
        [sym__statement_block] = 74,
        [sym__do_block] = 74,
        [sym__terminator] = 74,
        [anon_sym_do] = 74,
        [anon_sym_COLON_COLON] = 580,
        [anon_sym_LBRACK] = 582,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [169] = {
        [sym__statement_block] = 80,
        [sym__do_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_do] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [170] = {
        [sym__statement] = 584,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 586,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [171] = {
        [sym_identifier] = 588,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [172] = {
        [sym__statement_block] = 210,
        [sym__do_block] = 210,
        [sym__terminator] = 210,
        [anon_sym_do] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [173] = {
        [sym__statement_block] = 230,
        [sym__do_block] = 230,
        [sym__terminator] = 230,
        [anon_sym_do] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [174] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 590,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 592,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [175] = {
        [sym__statement_block] = 266,
        [sym__do_block] = 266,
        [sym__terminator] = 266,
        [anon_sym_do] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [176] = {
        [anon_sym_RPAREN] = 594,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [177] = {
        [sym__statement_block] = 462,
        [sym__do_block] = 462,
        [sym__terminator] = 462,
        [anon_sym_do] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [178] = {
        [sym__statement_block] = 464,
        [sym__do_block] = 464,
        [sym__terminator] = 464,
        [anon_sym_do] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [179] = {
        [sym_identifier] = 596,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [180] = {
        [sym__argument] = 598,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 608,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [181] = {
        [aux_sym__call_arguments_repeat1] = 612,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 616,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [182] = {
        [aux_sym__call_arguments_repeat1] = 74,
        [anon_sym_COMMA] = 74,
        [anon_sym_COLON_COLON] = 618,
        [anon_sym_LBRACK] = 620,
        [anon_sym_RBRACK] = 74,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [183] = {
        [aux_sym__call_arguments_repeat1] = 80,
        [anon_sym_COMMA] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_LBRACK] = 80,
        [anon_sym_RBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [184] = {
        [sym__statement] = 622,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 624,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [185] = {
        [sym_identifier] = 626,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [186] = {
        [sym__statement_block] = 628,
        [sym__do_block] = 628,
        [sym__terminator] = 628,
        [anon_sym_do] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [187] = {
        [aux_sym__call_arguments_repeat1] = 210,
        [anon_sym_COMMA] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_LBRACK] = 210,
        [anon_sym_RBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [188] = {
        [aux_sym__call_arguments_repeat1] = 230,
        [anon_sym_COMMA] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_LBRACK] = 230,
        [anon_sym_RBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [189] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 630,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 632,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [190] = {
        [aux_sym__call_arguments_repeat1] = 266,
        [anon_sym_COMMA] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_LBRACK] = 266,
        [anon_sym_RBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [191] = {
        [anon_sym_RPAREN] = 634,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [192] = {
        [aux_sym__call_arguments_repeat1] = 462,
        [anon_sym_COMMA] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_LBRACK] = 462,
        [anon_sym_RBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [193] = {
        [aux_sym__call_arguments_repeat1] = 464,
        [anon_sym_COMMA] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_LBRACK] = 464,
        [anon_sym_RBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [194] = {
        [sym_identifier] = 636,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [195] = {
        [sym__argument] = 638,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 640,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [196] = {
        [aux_sym__call_arguments_repeat1] = 642,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 644,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [197] = {
        [aux_sym__call_arguments_repeat1] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_LBRACK] = 628,
        [anon_sym_RBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [198] = {
        [anon_sym_RBRACK] = 646,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [199] = {
        [sym__argument] = 648,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [200] = {
        [aux_sym__call_arguments_repeat1] = 650,
        [anon_sym_COMMA] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_LBRACK] = 650,
        [anon_sym_RBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [201] = {
        [aux_sym__call_arguments_repeat1] = 652,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 654,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [202] = {
        [anon_sym_RBRACK] = 656,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [203] = {
        [aux_sym__call_arguments_repeat1] = 658,
        [anon_sym_COMMA] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_LBRACK] = 658,
        [anon_sym_RBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [204] = {
        [aux_sym__call_arguments_repeat1] = 660,
        [anon_sym_COMMA] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_LBRACK] = 660,
        [anon_sym_RBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [205] = {
        [anon_sym_RBRACK] = 662,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [206] = {
        [sym__statement_block] = 650,
        [sym__do_block] = 650,
        [sym__terminator] = 650,
        [anon_sym_do] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [207] = {
        [sym__statement_block] = 658,
        [sym__do_block] = 658,
        [sym__terminator] = 658,
        [anon_sym_do] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [208] = {
        [sym__statement_block] = 660,
        [sym__do_block] = 660,
        [sym__terminator] = 660,
        [anon_sym_do] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [209] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [210] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [211] = {
        [sym__statement] = 668,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 670,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [212] = {
        [sym__statement] = 672,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 674,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [213] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 676,
        [anon_sym_end] = 678,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [214] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [anon_sym_end] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [sym_comment] = 48,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [215] = {
        [anon_sym_end] = 682,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [216] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [217] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_end] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [sym_comment] = 48,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [218] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 688,
        [anon_sym_end] = 690,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [219] = {
        [sym__terminator] = 692,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_end] = 692,
        [anon_sym_if] = 692,
        [anon_sym_while] = 692,
        [anon_sym_unless] = 692,
        [anon_sym_until] = 692,
        [sym_comment] = 48,
        [sym__line_break] = 692,
        [anon_sym_SEMI] = 692,
    },
    [220] = {
        [anon_sym_end] = 694,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [221] = {
        [sym__terminator] = 696,
        [aux_sym_program_repeat1] = 696,
        [anon_sym_end] = 696,
        [anon_sym_if] = 696,
        [anon_sym_while] = 696,
        [anon_sym_unless] = 696,
        [anon_sym_until] = 696,
        [sym_comment] = 48,
        [sym__line_break] = 696,
        [anon_sym_SEMI] = 696,
    },
    [222] = {
        [sym__terminator] = 698,
        [aux_sym_program_repeat1] = 698,
        [anon_sym_end] = 698,
        [anon_sym_if] = 698,
        [anon_sym_while] = 698,
        [anon_sym_unless] = 698,
        [anon_sym_until] = 698,
        [sym_comment] = 48,
        [sym__line_break] = 698,
        [anon_sym_SEMI] = 698,
    },
    [223] = {
        [sym_then_block] = 700,
        [sym__then_else_block] = 702,
        [sym__terminator] = 704,
        [anon_sym_then] = 704,
        [sym_comment] = 48,
        [sym__line_break] = 706,
        [anon_sym_SEMI] = 708,
    },
    [224] = {
        [sym_then_block] = 578,
        [sym__then_else_block] = 578,
        [sym__terminator] = 578,
        [anon_sym_then] = 578,
        [sym_comment] = 48,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [225] = {
        [sym_then_block] = 72,
        [sym__then_else_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_then] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [226] = {
        [sym_then_block] = 74,
        [sym__then_else_block] = 74,
        [sym__terminator] = 74,
        [anon_sym_COLON_COLON] = 710,
        [anon_sym_then] = 74,
        [anon_sym_LBRACK] = 712,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [227] = {
        [sym_then_block] = 80,
        [sym__then_else_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [228] = {
        [sym__statement] = 714,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 716,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [229] = {
        [sym_identifier] = 718,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [230] = {
        [sym_then_block] = 210,
        [sym__then_else_block] = 210,
        [sym__terminator] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_then] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [231] = {
        [sym_then_block] = 230,
        [sym__then_else_block] = 230,
        [sym__terminator] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_then] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [232] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 720,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 722,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [233] = {
        [sym_then_block] = 266,
        [sym__then_else_block] = 266,
        [sym__terminator] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_then] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [234] = {
        [anon_sym_RPAREN] = 724,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [235] = {
        [sym_then_block] = 462,
        [sym__then_else_block] = 462,
        [sym__terminator] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_then] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [236] = {
        [sym_then_block] = 464,
        [sym__then_else_block] = 464,
        [sym__terminator] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_then] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [237] = {
        [sym_identifier] = 726,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [238] = {
        [sym__argument] = 728,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 730,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [239] = {
        [aux_sym__call_arguments_repeat1] = 732,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 734,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [240] = {
        [sym_then_block] = 628,
        [sym__then_else_block] = 628,
        [sym__terminator] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_then] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [241] = {
        [anon_sym_RBRACK] = 736,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [242] = {
        [sym_then_block] = 650,
        [sym__then_else_block] = 650,
        [sym__terminator] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_then] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [243] = {
        [sym_then_block] = 658,
        [sym__then_else_block] = 658,
        [sym__terminator] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_then] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [244] = {
        [sym_then_block] = 660,
        [sym__then_else_block] = 660,
        [sym__terminator] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_then] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [245] = {
        [anon_sym_end] = 738,
        [anon_sym_else] = 740,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [246] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_end] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [sym_comment] = 48,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [247] = {
        [sym__statement] = 744,
        [sym__declaration] = 746,
        [sym_method_declaration] = 748,
        [sym_class_declaration] = 748,
        [sym_module_declaration] = 748,
        [sym_while_statement] = 746,
        [sym_until_statement] = 746,
        [sym_if_statement] = 746,
        [sym_unless_statement] = 746,
        [sym__call] = 750,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 746,
        [sym__argument] = 752,
        [sym__primary] = 754,
        [sym_scope_resolution_expression] = 756,
        [sym_subscript_expression] = 756,
        [sym__variable] = 756,
        [anon_sym_end] = 758,
        [anon_sym_undef] = 760,
        [anon_sym_alias] = 762,
        [anon_sym_if] = 764,
        [anon_sym_while] = 766,
        [anon_sym_unless] = 768,
        [anon_sym_until] = 770,
        [anon_sym_def] = 772,
        [anon_sym_LPAREN] = 774,
        [anon_sym_class] = 776,
        [anon_sym_COLON_COLON] = 778,
        [anon_sym_module] = 780,
        [anon_sym_else] = 758,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 782,
        [anon_sym_self] = 782,
        [sym_identifier] = 782,
        [sym_comment] = 48,
        [sym_symbol] = 752,
        [sym__line_break] = 48,
    },
    [248] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym_then_block] = 322,
        [sym__then_else_block] = 322,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [sym__terminator] = 322,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_then] = 322,
        [anon_sym_else] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 322,
    },
    [249] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_else] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
    },
    [250] = {
        [sym__terminator] = 784,
        [aux_sym_program_repeat1] = 786,
        [anon_sym_end] = 788,
        [anon_sym_if] = 790,
        [anon_sym_while] = 790,
        [anon_sym_unless] = 790,
        [anon_sym_until] = 790,
        [anon_sym_else] = 788,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [251] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_else] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [252] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_else] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [253] = {
        [anon_sym_do] = 792,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [254] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_else] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [255] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 794,
        [anon_sym_else] = 74,
        [anon_sym_LBRACK] = 796,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [256] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_else] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [257] = {
        [sym__function_name] = 798,
        [anon_sym_PIPE] = 800,
        [anon_sym_STAR] = 800,
        [anon_sym_AMP] = 800,
        [anon_sym_LT] = 800,
        [sym_identifier] = 800,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 800,
        [anon_sym_CARET] = 800,
        [anon_sym_LT_EQ_GT] = 800,
        [anon_sym_EQ_EQ] = 800,
        [anon_sym_EQ_EQ_EQ] = 800,
        [anon_sym_EQ_TILDE] = 800,
        [anon_sym_GT] = 800,
        [anon_sym_GT_EQ] = 800,
        [anon_sym_LT_EQ] = 800,
        [anon_sym_PLUS] = 800,
        [anon_sym_DASH] = 800,
        [anon_sym_SLASH] = 800,
        [anon_sym_PERCENT] = 800,
        [anon_sym_STAR_STAR] = 800,
        [anon_sym_LT_LT] = 800,
        [anon_sym_GT_GT] = 800,
        [anon_sym_TILDE] = 800,
        [anon_sym_PLUS_AT] = 800,
        [anon_sym_DASH_AT] = 800,
        [anon_sym_LBRACK_RBRACK] = 800,
        [anon_sym_LBRACK_RBRACK_EQ] = 800,
        [sym__line_break] = 48,
    },
    [258] = {
        [sym__function_name] = 802,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [259] = {
        [sym_condition] = 804,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [260] = {
        [sym_condition] = 806,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [261] = {
        [sym_condition] = 808,
        [sym__expression] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 48,
        [sym_symbol] = 126,
        [sym__line_break] = 48,
    },
    [262] = {
        [sym_condition] = 810,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [263] = {
        [sym__function_name] = 812,
        [anon_sym_PIPE] = 142,
        [anon_sym_STAR] = 142,
        [anon_sym_AMP] = 142,
        [anon_sym_LT] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 142,
        [anon_sym_CARET] = 142,
        [anon_sym_LT_EQ_GT] = 142,
        [anon_sym_EQ_EQ] = 142,
        [anon_sym_EQ_EQ_EQ] = 142,
        [anon_sym_EQ_TILDE] = 142,
        [anon_sym_GT] = 142,
        [anon_sym_GT_EQ] = 142,
        [anon_sym_LT_EQ] = 142,
        [anon_sym_PLUS] = 142,
        [anon_sym_DASH] = 142,
        [anon_sym_SLASH] = 142,
        [anon_sym_PERCENT] = 142,
        [anon_sym_STAR_STAR] = 142,
        [anon_sym_LT_LT] = 142,
        [anon_sym_GT_GT] = 142,
        [anon_sym_TILDE] = 142,
        [anon_sym_PLUS_AT] = 142,
        [anon_sym_DASH_AT] = 142,
        [anon_sym_LBRACK_RBRACK] = 142,
        [anon_sym_LBRACK_RBRACK_EQ] = 142,
        [sym__line_break] = 48,
    },
    [264] = {
        [sym__statement] = 814,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 816,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [265] = {
        [sym_identifier] = 818,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [266] = {
        [sym_identifier] = 820,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [267] = {
        [sym_identifier] = 822,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [268] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [anon_sym_end] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_else] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [269] = {
        [sym__terminator] = 824,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [270] = {
        [sym__statement] = 826,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 828,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [271] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 830,
        [anon_sym_end] = 832,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [272] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [anon_sym_else] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [273] = {
        [anon_sym_end] = 834,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [274] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_end] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [anon_sym_else] = 380,
        [sym_comment] = 48,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [275] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [anon_sym_else] = 386,
        [sym_comment] = 48,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [276] = {
        [sym__terminator] = 230,
        [aux_sym_program_repeat1] = 230,
        [anon_sym_end] = 230,
        [anon_sym_if] = 230,
        [anon_sym_while] = 230,
        [anon_sym_unless] = 230,
        [anon_sym_until] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_else] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [277] = {
        [sym__terminator] = 836,
        [anon_sym_LT] = 838,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [278] = {
        [sym__statement] = 840,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 842,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [279] = {
        [sym_identifier] = 844,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [280] = {
        [sym__terminator] = 846,
        [aux_sym_class_declaration_repeat1] = 848,
        [anon_sym_COLON_COLON] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [281] = {
        [sym__statement] = 850,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 852,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [282] = {
        [sym__terminator] = 854,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [283] = {
        [sym__statement] = 856,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 858,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [284] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 860,
        [anon_sym_end] = 862,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [285] = {
        [sym__terminator] = 432,
        [aux_sym_program_repeat1] = 432,
        [anon_sym_end] = 432,
        [anon_sym_if] = 432,
        [anon_sym_while] = 432,
        [anon_sym_unless] = 432,
        [anon_sym_until] = 432,
        [anon_sym_else] = 432,
        [sym_comment] = 48,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 432,
    },
    [286] = {
        [anon_sym_end] = 864,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [287] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_else] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [288] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [anon_sym_else] = 438,
        [sym_comment] = 48,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [289] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 866,
        [anon_sym_end] = 858,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [290] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [anon_sym_else] = 442,
        [sym_comment] = 48,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [291] = {
        [anon_sym_end] = 862,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [292] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 868,
        [anon_sym_end] = 870,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [293] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_else] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [294] = {
        [anon_sym_end] = 852,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [295] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_else] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [296] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 872,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 874,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [297] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 266,
        [anon_sym_end] = 266,
        [anon_sym_if] = 266,
        [anon_sym_while] = 266,
        [anon_sym_unless] = 266,
        [anon_sym_until] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_else] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [298] = {
        [anon_sym_RPAREN] = 876,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [299] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [anon_sym_end] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_else] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [300] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_else] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [301] = {
        [sym_argument_list] = 878,
        [sym__terminator] = 880,
        [anon_sym_LPAREN] = 882,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [302] = {
        [sym__terminator] = 884,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [303] = {
        [sym__statement] = 886,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 888,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [304] = {
        [sym_argument_list] = 890,
        [anon_sym_RPAREN] = 884,
        [anon_sym_STAR] = 488,
        [anon_sym_AMP] = 488,
        [sym_identifier] = 490,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [305] = {
        [anon_sym_RPAREN] = 892,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [306] = {
        [sym__statement] = 894,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 896,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [307] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 898,
        [anon_sym_end] = 900,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [308] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [anon_sym_else] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [309] = {
        [anon_sym_end] = 902,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [310] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [anon_sym_else] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [311] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [anon_sym_else] = 556,
        [sym_comment] = 48,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [312] = {
        [sym__statement] = 904,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 900,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [313] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 906,
        [anon_sym_end] = 902,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [314] = {
        [anon_sym_end] = 908,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [315] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_end] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [anon_sym_else] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [316] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 910,
        [anon_sym_end] = 896,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [317] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [anon_sym_else] = 568,
        [sym_comment] = 48,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [318] = {
        [anon_sym_end] = 900,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [319] = {
        [sym__statement_block] = 912,
        [sym__do_block] = 914,
        [sym__terminator] = 916,
        [anon_sym_do] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [320] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [anon_sym_else] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [321] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [anon_sym_else] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [322] = {
        [sym__statement] = 920,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 922,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [323] = {
        [sym__statement] = 924,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 926,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [324] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 928,
        [anon_sym_end] = 930,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [325] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [anon_sym_end] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [anon_sym_else] = 680,
        [sym_comment] = 48,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [326] = {
        [anon_sym_end] = 932,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [327] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [anon_sym_else] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [328] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_end] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [anon_sym_else] = 686,
        [sym_comment] = 48,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [329] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 934,
        [anon_sym_end] = 936,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [330] = {
        [sym__terminator] = 692,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_end] = 692,
        [anon_sym_if] = 692,
        [anon_sym_while] = 692,
        [anon_sym_unless] = 692,
        [anon_sym_until] = 692,
        [anon_sym_else] = 692,
        [sym_comment] = 48,
        [sym__line_break] = 692,
        [anon_sym_SEMI] = 692,
    },
    [331] = {
        [anon_sym_end] = 938,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [332] = {
        [sym__terminator] = 696,
        [aux_sym_program_repeat1] = 696,
        [anon_sym_end] = 696,
        [anon_sym_if] = 696,
        [anon_sym_while] = 696,
        [anon_sym_unless] = 696,
        [anon_sym_until] = 696,
        [anon_sym_else] = 696,
        [sym_comment] = 48,
        [sym__line_break] = 696,
        [anon_sym_SEMI] = 696,
    },
    [333] = {
        [sym__terminator] = 698,
        [aux_sym_program_repeat1] = 698,
        [anon_sym_end] = 698,
        [anon_sym_if] = 698,
        [anon_sym_while] = 698,
        [anon_sym_unless] = 698,
        [anon_sym_until] = 698,
        [anon_sym_else] = 698,
        [sym_comment] = 48,
        [sym__line_break] = 698,
        [anon_sym_SEMI] = 698,
    },
    [334] = {
        [sym_then_block] = 940,
        [sym__then_else_block] = 942,
        [sym__terminator] = 704,
        [anon_sym_then] = 704,
        [sym_comment] = 48,
        [sym__line_break] = 706,
        [anon_sym_SEMI] = 708,
    },
    [335] = {
        [anon_sym_end] = 944,
        [anon_sym_else] = 946,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [336] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_end] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [anon_sym_else] = 742,
        [sym_comment] = 48,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [337] = {
        [sym__terminator] = 948,
        [aux_sym_program_repeat1] = 948,
        [anon_sym_end] = 948,
        [anon_sym_if] = 948,
        [anon_sym_while] = 948,
        [anon_sym_unless] = 948,
        [anon_sym_until] = 948,
        [anon_sym_else] = 948,
        [sym_comment] = 48,
        [sym__line_break] = 948,
        [anon_sym_SEMI] = 948,
    },
    [338] = {
        [sym__statement] = 950,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 952,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [339] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 954,
        [anon_sym_end] = 956,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [340] = {
        [sym__terminator] = 958,
        [aux_sym_program_repeat1] = 958,
        [anon_sym_end] = 958,
        [anon_sym_if] = 958,
        [anon_sym_while] = 958,
        [anon_sym_unless] = 958,
        [anon_sym_until] = 958,
        [anon_sym_else] = 958,
        [sym_comment] = 48,
        [sym__line_break] = 958,
        [anon_sym_SEMI] = 958,
    },
    [341] = {
        [anon_sym_end] = 960,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [342] = {
        [sym__terminator] = 962,
        [aux_sym_program_repeat1] = 962,
        [anon_sym_end] = 962,
        [anon_sym_if] = 962,
        [anon_sym_while] = 962,
        [anon_sym_unless] = 962,
        [anon_sym_until] = 962,
        [anon_sym_else] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 962,
        [anon_sym_SEMI] = 962,
    },
    [343] = {
        [sym__terminator] = 964,
        [aux_sym_program_repeat1] = 964,
        [anon_sym_end] = 964,
        [anon_sym_if] = 964,
        [anon_sym_while] = 964,
        [anon_sym_unless] = 964,
        [anon_sym_until] = 964,
        [anon_sym_else] = 964,
        [sym_comment] = 48,
        [sym__line_break] = 964,
        [anon_sym_SEMI] = 964,
    },
    [344] = {
        [sym__statement_block] = 966,
        [sym__do_block] = 914,
        [sym__terminator] = 916,
        [anon_sym_do] = 918,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [345] = {
        [sym__terminator] = 968,
        [aux_sym_program_repeat1] = 968,
        [anon_sym_end] = 968,
        [anon_sym_if] = 968,
        [anon_sym_while] = 968,
        [anon_sym_unless] = 968,
        [anon_sym_until] = 968,
        [anon_sym_else] = 968,
        [sym_comment] = 48,
        [sym__line_break] = 968,
        [anon_sym_SEMI] = 968,
    },
    [346] = {
        [sym_then_block] = 970,
        [sym__then_elsif_else_block] = 972,
        [sym__terminator] = 974,
        [anon_sym_then] = 974,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 978,
    },
    [347] = {
        [sym_then_block] = 578,
        [sym__then_elsif_else_block] = 578,
        [sym__terminator] = 578,
        [anon_sym_then] = 578,
        [sym_comment] = 48,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [348] = {
        [sym_then_block] = 72,
        [sym__then_elsif_else_block] = 72,
        [sym__terminator] = 72,
        [anon_sym_then] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [349] = {
        [sym_then_block] = 74,
        [sym__then_elsif_else_block] = 74,
        [sym__terminator] = 74,
        [anon_sym_COLON_COLON] = 980,
        [anon_sym_then] = 74,
        [anon_sym_LBRACK] = 982,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [350] = {
        [sym_then_block] = 80,
        [sym__then_elsif_else_block] = 80,
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [351] = {
        [sym__statement] = 984,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 986,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [352] = {
        [sym_identifier] = 988,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [353] = {
        [sym_then_block] = 210,
        [sym__then_elsif_else_block] = 210,
        [sym__terminator] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_then] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [354] = {
        [sym_then_block] = 230,
        [sym__then_elsif_else_block] = 230,
        [sym__terminator] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_then] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [355] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 990,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 992,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [356] = {
        [sym_then_block] = 266,
        [sym__then_elsif_else_block] = 266,
        [sym__terminator] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_then] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [357] = {
        [anon_sym_RPAREN] = 994,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [358] = {
        [sym_then_block] = 462,
        [sym__then_elsif_else_block] = 462,
        [sym__terminator] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_then] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [359] = {
        [sym_then_block] = 464,
        [sym__then_elsif_else_block] = 464,
        [sym__terminator] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_then] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [360] = {
        [sym_identifier] = 996,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [361] = {
        [sym__argument] = 998,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1000,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [362] = {
        [aux_sym__call_arguments_repeat1] = 1002,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1004,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [363] = {
        [sym_then_block] = 628,
        [sym__then_elsif_else_block] = 628,
        [sym__terminator] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_then] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [364] = {
        [anon_sym_RBRACK] = 1006,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [365] = {
        [sym_then_block] = 650,
        [sym__then_elsif_else_block] = 650,
        [sym__terminator] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_then] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [366] = {
        [sym_then_block] = 658,
        [sym__then_elsif_else_block] = 658,
        [sym__terminator] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_then] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [367] = {
        [sym_then_block] = 660,
        [sym__then_elsif_else_block] = 660,
        [sym__terminator] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_then] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [368] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1008,
        [anon_sym_end] = 1010,
        [anon_sym_else] = 1012,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [369] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [anon_sym_end] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_else] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [370] = {
        [sym__statement] = 1018,
        [sym__declaration] = 1020,
        [sym_method_declaration] = 1022,
        [sym_class_declaration] = 1022,
        [sym_module_declaration] = 1022,
        [sym_while_statement] = 1020,
        [sym_until_statement] = 1020,
        [sym_if_statement] = 1020,
        [sym_unless_statement] = 1020,
        [sym__call] = 1024,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 1020,
        [sym__argument] = 1026,
        [sym__primary] = 1028,
        [sym_scope_resolution_expression] = 1030,
        [sym_subscript_expression] = 1030,
        [sym__variable] = 1030,
        [aux_sym__then_elsif_else_block_repeat1] = 758,
        [anon_sym_end] = 758,
        [anon_sym_undef] = 1032,
        [anon_sym_alias] = 1034,
        [anon_sym_if] = 1036,
        [anon_sym_while] = 1038,
        [anon_sym_unless] = 1040,
        [anon_sym_until] = 1042,
        [anon_sym_def] = 1044,
        [anon_sym_LPAREN] = 1046,
        [anon_sym_class] = 1048,
        [anon_sym_COLON_COLON] = 1050,
        [anon_sym_module] = 1052,
        [anon_sym_else] = 758,
        [anon_sym_elsif] = 758,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 1054,
        [anon_sym_self] = 1054,
        [sym_identifier] = 1054,
        [sym_comment] = 48,
        [sym_symbol] = 1026,
        [sym__line_break] = 48,
    },
    [371] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym_then_block] = 322,
        [sym__then_elsif_else_block] = 322,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [sym__terminator] = 322,
        [aux_sym__then_elsif_else_block_repeat1] = 320,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_then] = 322,
        [anon_sym_else] = 320,
        [anon_sym_elsif] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
        [anon_sym_SEMI] = 322,
    },
    [372] = {
        [sym__statement] = 320,
        [sym__declaration] = 320,
        [sym_method_declaration] = 320,
        [sym_class_declaration] = 320,
        [sym_module_declaration] = 320,
        [sym_while_statement] = 320,
        [sym_until_statement] = 320,
        [sym_if_statement] = 320,
        [sym_unless_statement] = 320,
        [sym__call] = 320,
        [sym__command] = 320,
        [sym__function_call] = 320,
        [sym__expression] = 320,
        [sym__argument] = 320,
        [sym__primary] = 320,
        [sym_scope_resolution_expression] = 320,
        [sym_subscript_expression] = 320,
        [sym__variable] = 320,
        [aux_sym__then_elsif_else_block_repeat1] = 320,
        [anon_sym_end] = 320,
        [anon_sym_undef] = 320,
        [anon_sym_alias] = 320,
        [anon_sym_if] = 320,
        [anon_sym_while] = 320,
        [anon_sym_unless] = 320,
        [anon_sym_until] = 320,
        [anon_sym_def] = 320,
        [anon_sym_LPAREN] = 320,
        [anon_sym_class] = 320,
        [anon_sym_COLON_COLON] = 320,
        [anon_sym_module] = 320,
        [anon_sym_else] = 320,
        [anon_sym_elsif] = 320,
        [anon_sym_super] = 320,
        [anon_sym_nil] = 320,
        [anon_sym_self] = 320,
        [sym_identifier] = 320,
        [sym_comment] = 48,
        [sym_symbol] = 320,
        [sym__line_break] = 48,
    },
    [373] = {
        [sym__terminator] = 1056,
        [aux_sym_program_repeat1] = 1058,
        [aux_sym__then_elsif_else_block_repeat1] = 788,
        [anon_sym_end] = 788,
        [anon_sym_if] = 1060,
        [anon_sym_while] = 1060,
        [anon_sym_unless] = 1060,
        [anon_sym_until] = 1060,
        [anon_sym_else] = 788,
        [anon_sym_elsif] = 788,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [374] = {
        [sym__terminator] = 64,
        [aux_sym_program_repeat1] = 64,
        [aux_sym__then_elsif_else_block_repeat1] = 64,
        [anon_sym_end] = 64,
        [anon_sym_if] = 64,
        [anon_sym_while] = 64,
        [anon_sym_unless] = 64,
        [anon_sym_until] = 64,
        [anon_sym_else] = 64,
        [anon_sym_elsif] = 64,
        [sym_comment] = 48,
        [sym__line_break] = 64,
        [anon_sym_SEMI] = 64,
    },
    [375] = {
        [sym__terminator] = 66,
        [aux_sym_program_repeat1] = 66,
        [aux_sym__then_elsif_else_block_repeat1] = 66,
        [anon_sym_end] = 66,
        [anon_sym_if] = 66,
        [anon_sym_while] = 66,
        [anon_sym_unless] = 66,
        [anon_sym_until] = 66,
        [anon_sym_else] = 66,
        [anon_sym_elsif] = 66,
        [sym_comment] = 48,
        [sym__line_break] = 66,
        [anon_sym_SEMI] = 66,
    },
    [376] = {
        [anon_sym_do] = 1062,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [377] = {
        [sym__terminator] = 72,
        [aux_sym_program_repeat1] = 72,
        [aux_sym__then_elsif_else_block_repeat1] = 72,
        [anon_sym_end] = 72,
        [anon_sym_if] = 72,
        [anon_sym_while] = 72,
        [anon_sym_unless] = 72,
        [anon_sym_until] = 72,
        [anon_sym_else] = 72,
        [anon_sym_elsif] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [378] = {
        [sym__terminator] = 74,
        [aux_sym_program_repeat1] = 74,
        [aux_sym__then_elsif_else_block_repeat1] = 74,
        [anon_sym_end] = 74,
        [anon_sym_if] = 74,
        [anon_sym_while] = 74,
        [anon_sym_unless] = 74,
        [anon_sym_until] = 74,
        [anon_sym_COLON_COLON] = 1064,
        [anon_sym_else] = 74,
        [anon_sym_elsif] = 74,
        [anon_sym_LBRACK] = 1066,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [379] = {
        [sym__terminator] = 80,
        [aux_sym_program_repeat1] = 80,
        [aux_sym__then_elsif_else_block_repeat1] = 80,
        [anon_sym_end] = 80,
        [anon_sym_if] = 80,
        [anon_sym_while] = 80,
        [anon_sym_unless] = 80,
        [anon_sym_until] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_else] = 80,
        [anon_sym_elsif] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [380] = {
        [sym__function_name] = 1068,
        [anon_sym_PIPE] = 1070,
        [anon_sym_STAR] = 1070,
        [anon_sym_AMP] = 1070,
        [anon_sym_LT] = 1070,
        [sym_identifier] = 1070,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 1070,
        [anon_sym_CARET] = 1070,
        [anon_sym_LT_EQ_GT] = 1070,
        [anon_sym_EQ_EQ] = 1070,
        [anon_sym_EQ_EQ_EQ] = 1070,
        [anon_sym_EQ_TILDE] = 1070,
        [anon_sym_GT] = 1070,
        [anon_sym_GT_EQ] = 1070,
        [anon_sym_LT_EQ] = 1070,
        [anon_sym_PLUS] = 1070,
        [anon_sym_DASH] = 1070,
        [anon_sym_SLASH] = 1070,
        [anon_sym_PERCENT] = 1070,
        [anon_sym_STAR_STAR] = 1070,
        [anon_sym_LT_LT] = 1070,
        [anon_sym_GT_GT] = 1070,
        [anon_sym_TILDE] = 1070,
        [anon_sym_PLUS_AT] = 1070,
        [anon_sym_DASH_AT] = 1070,
        [anon_sym_LBRACK_RBRACK] = 1070,
        [anon_sym_LBRACK_RBRACK_EQ] = 1070,
        [sym__line_break] = 48,
    },
    [381] = {
        [sym__function_name] = 1072,
        [anon_sym_PIPE] = 88,
        [anon_sym_STAR] = 88,
        [anon_sym_AMP] = 88,
        [anon_sym_LT] = 88,
        [sym_identifier] = 88,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 88,
        [anon_sym_CARET] = 88,
        [anon_sym_LT_EQ_GT] = 88,
        [anon_sym_EQ_EQ] = 88,
        [anon_sym_EQ_EQ_EQ] = 88,
        [anon_sym_EQ_TILDE] = 88,
        [anon_sym_GT] = 88,
        [anon_sym_GT_EQ] = 88,
        [anon_sym_LT_EQ] = 88,
        [anon_sym_PLUS] = 88,
        [anon_sym_DASH] = 88,
        [anon_sym_SLASH] = 88,
        [anon_sym_PERCENT] = 88,
        [anon_sym_STAR_STAR] = 88,
        [anon_sym_LT_LT] = 88,
        [anon_sym_GT_GT] = 88,
        [anon_sym_TILDE] = 88,
        [anon_sym_PLUS_AT] = 88,
        [anon_sym_DASH_AT] = 88,
        [anon_sym_LBRACK_RBRACK] = 88,
        [anon_sym_LBRACK_RBRACK_EQ] = 88,
        [sym__line_break] = 48,
    },
    [382] = {
        [sym_condition] = 1074,
        [sym__expression] = 92,
        [sym__argument] = 94,
        [sym__primary] = 96,
        [sym_scope_resolution_expression] = 98,
        [sym_subscript_expression] = 98,
        [sym__variable] = 98,
        [anon_sym_LPAREN] = 100,
        [anon_sym_COLON_COLON] = 102,
        [anon_sym_nil] = 104,
        [anon_sym_self] = 104,
        [sym_identifier] = 104,
        [sym_comment] = 48,
        [sym_symbol] = 94,
        [sym__line_break] = 48,
    },
    [383] = {
        [sym_condition] = 1076,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [384] = {
        [sym_condition] = 1078,
        [sym__expression] = 124,
        [sym__argument] = 126,
        [sym__primary] = 128,
        [sym_scope_resolution_expression] = 130,
        [sym_subscript_expression] = 130,
        [sym__variable] = 130,
        [anon_sym_LPAREN] = 132,
        [anon_sym_COLON_COLON] = 134,
        [anon_sym_nil] = 136,
        [anon_sym_self] = 136,
        [sym_identifier] = 136,
        [sym_comment] = 48,
        [sym_symbol] = 126,
        [sym__line_break] = 48,
    },
    [385] = {
        [sym_condition] = 1080,
        [sym__expression] = 108,
        [sym__argument] = 110,
        [sym__primary] = 112,
        [sym_scope_resolution_expression] = 114,
        [sym_subscript_expression] = 114,
        [sym__variable] = 114,
        [anon_sym_LPAREN] = 116,
        [anon_sym_COLON_COLON] = 118,
        [anon_sym_nil] = 120,
        [anon_sym_self] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 48,
        [sym_symbol] = 110,
        [sym__line_break] = 48,
    },
    [386] = {
        [sym__function_name] = 1082,
        [anon_sym_PIPE] = 142,
        [anon_sym_STAR] = 142,
        [anon_sym_AMP] = 142,
        [anon_sym_LT] = 142,
        [sym_identifier] = 142,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 142,
        [anon_sym_CARET] = 142,
        [anon_sym_LT_EQ_GT] = 142,
        [anon_sym_EQ_EQ] = 142,
        [anon_sym_EQ_EQ_EQ] = 142,
        [anon_sym_EQ_TILDE] = 142,
        [anon_sym_GT] = 142,
        [anon_sym_GT_EQ] = 142,
        [anon_sym_LT_EQ] = 142,
        [anon_sym_PLUS] = 142,
        [anon_sym_DASH] = 142,
        [anon_sym_SLASH] = 142,
        [anon_sym_PERCENT] = 142,
        [anon_sym_STAR_STAR] = 142,
        [anon_sym_LT_LT] = 142,
        [anon_sym_GT_GT] = 142,
        [anon_sym_TILDE] = 142,
        [anon_sym_PLUS_AT] = 142,
        [anon_sym_DASH_AT] = 142,
        [anon_sym_LBRACK_RBRACK] = 142,
        [anon_sym_LBRACK_RBRACK_EQ] = 142,
        [sym__line_break] = 48,
    },
    [387] = {
        [sym__statement] = 1084,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 1086,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [388] = {
        [sym_identifier] = 1088,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [389] = {
        [sym_identifier] = 1090,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [390] = {
        [sym_identifier] = 1092,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [391] = {
        [sym__terminator] = 210,
        [aux_sym_program_repeat1] = 210,
        [aux_sym__then_elsif_else_block_repeat1] = 210,
        [anon_sym_end] = 210,
        [anon_sym_if] = 210,
        [anon_sym_while] = 210,
        [anon_sym_unless] = 210,
        [anon_sym_until] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_else] = 210,
        [anon_sym_elsif] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [392] = {
        [sym__terminator] = 1094,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [393] = {
        [sym__statement] = 1096,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1098,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [394] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1100,
        [anon_sym_end] = 1102,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [395] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [aux_sym__then_elsif_else_block_repeat1] = 338,
        [anon_sym_end] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [anon_sym_else] = 338,
        [anon_sym_elsif] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [396] = {
        [anon_sym_end] = 1104,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [397] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [aux_sym__then_elsif_else_block_repeat1] = 380,
        [anon_sym_end] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [anon_sym_else] = 380,
        [anon_sym_elsif] = 380,
        [sym_comment] = 48,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [398] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [aux_sym__then_elsif_else_block_repeat1] = 386,
        [anon_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [anon_sym_else] = 386,
        [anon_sym_elsif] = 386,
        [sym_comment] = 48,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [399] = {
        [sym__terminator] = 230,
        [aux_sym_program_repeat1] = 230,
        [aux_sym__then_elsif_else_block_repeat1] = 230,
        [anon_sym_end] = 230,
        [anon_sym_if] = 230,
        [anon_sym_while] = 230,
        [anon_sym_unless] = 230,
        [anon_sym_until] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_else] = 230,
        [anon_sym_elsif] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [400] = {
        [sym__terminator] = 1106,
        [anon_sym_LT] = 1108,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [401] = {
        [sym__statement] = 1110,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1112,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [402] = {
        [sym_identifier] = 1114,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [403] = {
        [sym__terminator] = 1116,
        [aux_sym_class_declaration_repeat1] = 1118,
        [anon_sym_COLON_COLON] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [404] = {
        [sym__statement] = 1120,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1122,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [405] = {
        [sym__terminator] = 1124,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [406] = {
        [sym__statement] = 1126,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1128,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [407] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1130,
        [anon_sym_end] = 1132,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [408] = {
        [sym__terminator] = 432,
        [aux_sym_program_repeat1] = 432,
        [aux_sym__then_elsif_else_block_repeat1] = 432,
        [anon_sym_end] = 432,
        [anon_sym_if] = 432,
        [anon_sym_while] = 432,
        [anon_sym_unless] = 432,
        [anon_sym_until] = 432,
        [anon_sym_else] = 432,
        [anon_sym_elsif] = 432,
        [sym_comment] = 48,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 432,
    },
    [409] = {
        [anon_sym_end] = 1134,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [410] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [aux_sym__then_elsif_else_block_repeat1] = 436,
        [anon_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_else] = 436,
        [anon_sym_elsif] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [411] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [aux_sym__then_elsif_else_block_repeat1] = 438,
        [anon_sym_end] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [anon_sym_else] = 438,
        [anon_sym_elsif] = 438,
        [sym_comment] = 48,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [412] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1136,
        [anon_sym_end] = 1128,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [413] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [aux_sym__then_elsif_else_block_repeat1] = 442,
        [anon_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [anon_sym_else] = 442,
        [anon_sym_elsif] = 442,
        [sym_comment] = 48,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [414] = {
        [anon_sym_end] = 1132,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [415] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1138,
        [anon_sym_end] = 1140,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [416] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [aux_sym__then_elsif_else_block_repeat1] = 448,
        [anon_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_else] = 448,
        [anon_sym_elsif] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [417] = {
        [anon_sym_end] = 1122,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [418] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [aux_sym__then_elsif_else_block_repeat1] = 450,
        [anon_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_else] = 450,
        [anon_sym_elsif] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [419] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 1142,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 1144,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [420] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 266,
        [aux_sym__then_elsif_else_block_repeat1] = 266,
        [anon_sym_end] = 266,
        [anon_sym_if] = 266,
        [anon_sym_while] = 266,
        [anon_sym_unless] = 266,
        [anon_sym_until] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_else] = 266,
        [anon_sym_elsif] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [421] = {
        [anon_sym_RPAREN] = 1146,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [422] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [aux_sym__then_elsif_else_block_repeat1] = 462,
        [anon_sym_end] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_else] = 462,
        [anon_sym_elsif] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [423] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [aux_sym__then_elsif_else_block_repeat1] = 464,
        [anon_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_else] = 464,
        [anon_sym_elsif] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [424] = {
        [sym_argument_list] = 1148,
        [sym__terminator] = 1150,
        [anon_sym_LPAREN] = 1152,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [425] = {
        [sym__terminator] = 1154,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [426] = {
        [sym__statement] = 1156,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1158,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [427] = {
        [sym_argument_list] = 1160,
        [anon_sym_RPAREN] = 1154,
        [anon_sym_STAR] = 488,
        [anon_sym_AMP] = 488,
        [sym_identifier] = 490,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [428] = {
        [anon_sym_RPAREN] = 1162,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [429] = {
        [sym__statement] = 1164,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1166,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [430] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1168,
        [anon_sym_end] = 1170,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [431] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [aux_sym__then_elsif_else_block_repeat1] = 550,
        [anon_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [anon_sym_else] = 550,
        [anon_sym_elsif] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [432] = {
        [anon_sym_end] = 1172,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [433] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [aux_sym__then_elsif_else_block_repeat1] = 554,
        [anon_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [anon_sym_else] = 554,
        [anon_sym_elsif] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [434] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [aux_sym__then_elsif_else_block_repeat1] = 556,
        [anon_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [anon_sym_else] = 556,
        [anon_sym_elsif] = 556,
        [sym_comment] = 48,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [435] = {
        [sym__statement] = 1174,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1170,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [436] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1176,
        [anon_sym_end] = 1172,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [437] = {
        [anon_sym_end] = 1178,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [438] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [aux_sym__then_elsif_else_block_repeat1] = 564,
        [anon_sym_end] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [anon_sym_else] = 564,
        [anon_sym_elsif] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [439] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1180,
        [anon_sym_end] = 1166,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [440] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [aux_sym__then_elsif_else_block_repeat1] = 568,
        [anon_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [anon_sym_else] = 568,
        [anon_sym_elsif] = 568,
        [sym_comment] = 48,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [441] = {
        [anon_sym_end] = 1170,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [442] = {
        [sym__statement_block] = 1182,
        [sym__do_block] = 1184,
        [sym__terminator] = 1186,
        [anon_sym_do] = 1188,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [443] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [aux_sym__then_elsif_else_block_repeat1] = 664,
        [anon_sym_end] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [anon_sym_else] = 664,
        [anon_sym_elsif] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [444] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [aux_sym__then_elsif_else_block_repeat1] = 666,
        [anon_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [anon_sym_else] = 666,
        [anon_sym_elsif] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [445] = {
        [sym__statement] = 1190,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1192,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [446] = {
        [sym__statement] = 1194,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1196,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [447] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1198,
        [anon_sym_end] = 1200,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [448] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [aux_sym__then_elsif_else_block_repeat1] = 680,
        [anon_sym_end] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [anon_sym_else] = 680,
        [anon_sym_elsif] = 680,
        [sym_comment] = 48,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [449] = {
        [anon_sym_end] = 1202,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [450] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [aux_sym__then_elsif_else_block_repeat1] = 684,
        [anon_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [anon_sym_else] = 684,
        [anon_sym_elsif] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [451] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [aux_sym__then_elsif_else_block_repeat1] = 686,
        [anon_sym_end] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [anon_sym_else] = 686,
        [anon_sym_elsif] = 686,
        [sym_comment] = 48,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [452] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1204,
        [anon_sym_end] = 1206,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [453] = {
        [sym__terminator] = 692,
        [aux_sym_program_repeat1] = 692,
        [aux_sym__then_elsif_else_block_repeat1] = 692,
        [anon_sym_end] = 692,
        [anon_sym_if] = 692,
        [anon_sym_while] = 692,
        [anon_sym_unless] = 692,
        [anon_sym_until] = 692,
        [anon_sym_else] = 692,
        [anon_sym_elsif] = 692,
        [sym_comment] = 48,
        [sym__line_break] = 692,
        [anon_sym_SEMI] = 692,
    },
    [454] = {
        [anon_sym_end] = 1208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [455] = {
        [sym__terminator] = 696,
        [aux_sym_program_repeat1] = 696,
        [aux_sym__then_elsif_else_block_repeat1] = 696,
        [anon_sym_end] = 696,
        [anon_sym_if] = 696,
        [anon_sym_while] = 696,
        [anon_sym_unless] = 696,
        [anon_sym_until] = 696,
        [anon_sym_else] = 696,
        [anon_sym_elsif] = 696,
        [sym_comment] = 48,
        [sym__line_break] = 696,
        [anon_sym_SEMI] = 696,
    },
    [456] = {
        [sym__terminator] = 698,
        [aux_sym_program_repeat1] = 698,
        [aux_sym__then_elsif_else_block_repeat1] = 698,
        [anon_sym_end] = 698,
        [anon_sym_if] = 698,
        [anon_sym_while] = 698,
        [anon_sym_unless] = 698,
        [anon_sym_until] = 698,
        [anon_sym_else] = 698,
        [anon_sym_elsif] = 698,
        [sym_comment] = 48,
        [sym__line_break] = 698,
        [anon_sym_SEMI] = 698,
    },
    [457] = {
        [sym_then_block] = 1210,
        [sym__then_else_block] = 1212,
        [sym__terminator] = 704,
        [anon_sym_then] = 704,
        [sym_comment] = 48,
        [sym__line_break] = 706,
        [anon_sym_SEMI] = 708,
    },
    [458] = {
        [anon_sym_end] = 1214,
        [anon_sym_else] = 1216,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [459] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [aux_sym__then_elsif_else_block_repeat1] = 742,
        [anon_sym_end] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [anon_sym_else] = 742,
        [anon_sym_elsif] = 742,
        [sym_comment] = 48,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [460] = {
        [sym__terminator] = 948,
        [aux_sym_program_repeat1] = 948,
        [aux_sym__then_elsif_else_block_repeat1] = 948,
        [anon_sym_end] = 948,
        [anon_sym_if] = 948,
        [anon_sym_while] = 948,
        [anon_sym_unless] = 948,
        [anon_sym_until] = 948,
        [anon_sym_else] = 948,
        [anon_sym_elsif] = 948,
        [sym_comment] = 48,
        [sym__line_break] = 948,
        [anon_sym_SEMI] = 948,
    },
    [461] = {
        [sym__statement] = 1218,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1220,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [462] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1222,
        [anon_sym_end] = 1224,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [463] = {
        [sym__terminator] = 958,
        [aux_sym_program_repeat1] = 958,
        [aux_sym__then_elsif_else_block_repeat1] = 958,
        [anon_sym_end] = 958,
        [anon_sym_if] = 958,
        [anon_sym_while] = 958,
        [anon_sym_unless] = 958,
        [anon_sym_until] = 958,
        [anon_sym_else] = 958,
        [anon_sym_elsif] = 958,
        [sym_comment] = 48,
        [sym__line_break] = 958,
        [anon_sym_SEMI] = 958,
    },
    [464] = {
        [anon_sym_end] = 1226,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [465] = {
        [sym__terminator] = 962,
        [aux_sym_program_repeat1] = 962,
        [aux_sym__then_elsif_else_block_repeat1] = 962,
        [anon_sym_end] = 962,
        [anon_sym_if] = 962,
        [anon_sym_while] = 962,
        [anon_sym_unless] = 962,
        [anon_sym_until] = 962,
        [anon_sym_else] = 962,
        [anon_sym_elsif] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 962,
        [anon_sym_SEMI] = 962,
    },
    [466] = {
        [sym__terminator] = 964,
        [aux_sym_program_repeat1] = 964,
        [aux_sym__then_elsif_else_block_repeat1] = 964,
        [anon_sym_end] = 964,
        [anon_sym_if] = 964,
        [anon_sym_while] = 964,
        [anon_sym_unless] = 964,
        [anon_sym_until] = 964,
        [anon_sym_else] = 964,
        [anon_sym_elsif] = 964,
        [sym_comment] = 48,
        [sym__line_break] = 964,
        [anon_sym_SEMI] = 964,
    },
    [467] = {
        [sym__statement_block] = 1228,
        [sym__do_block] = 1184,
        [sym__terminator] = 1186,
        [anon_sym_do] = 1188,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [468] = {
        [sym__terminator] = 968,
        [aux_sym_program_repeat1] = 968,
        [aux_sym__then_elsif_else_block_repeat1] = 968,
        [anon_sym_end] = 968,
        [anon_sym_if] = 968,
        [anon_sym_while] = 968,
        [anon_sym_unless] = 968,
        [anon_sym_until] = 968,
        [anon_sym_else] = 968,
        [anon_sym_elsif] = 968,
        [sym_comment] = 48,
        [sym__line_break] = 968,
        [anon_sym_SEMI] = 968,
    },
    [469] = {
        [sym_then_block] = 1230,
        [sym__then_elsif_else_block] = 1232,
        [sym__terminator] = 974,
        [anon_sym_then] = 974,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 978,
    },
    [470] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1234,
        [anon_sym_end] = 1236,
        [anon_sym_else] = 1238,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [471] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [aux_sym__then_elsif_else_block_repeat1] = 1016,
        [anon_sym_end] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_else] = 1016,
        [anon_sym_elsif] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [472] = {
        [anon_sym_end] = 1240,
        [anon_sym_else] = 1242,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [473] = {
        [sym__terminator] = 1244,
        [aux_sym_program_repeat1] = 1244,
        [aux_sym__then_elsif_else_block_repeat1] = 1244,
        [anon_sym_end] = 1244,
        [anon_sym_if] = 1244,
        [anon_sym_while] = 1244,
        [anon_sym_unless] = 1244,
        [anon_sym_until] = 1244,
        [anon_sym_else] = 1244,
        [anon_sym_elsif] = 1244,
        [sym_comment] = 48,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [474] = {
        [sym__statement] = 1246,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1240,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [475] = {
        [sym_condition] = 1248,
        [sym__expression] = 1250,
        [sym__argument] = 1252,
        [sym__primary] = 1254,
        [sym_scope_resolution_expression] = 1256,
        [sym_subscript_expression] = 1256,
        [sym__variable] = 1256,
        [anon_sym_LPAREN] = 1258,
        [anon_sym_COLON_COLON] = 1260,
        [anon_sym_nil] = 1262,
        [anon_sym_self] = 1262,
        [sym_identifier] = 1262,
        [sym_comment] = 48,
        [sym_symbol] = 1252,
        [sym__line_break] = 48,
    },
    [476] = {
        [sym__terminator] = 1264,
        [anon_sym_then] = 1264,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 978,
    },
    [477] = {
        [sym__terminator] = 578,
        [anon_sym_then] = 578,
        [sym_comment] = 48,
        [sym__line_break] = 578,
        [anon_sym_SEMI] = 578,
    },
    [478] = {
        [sym__terminator] = 72,
        [anon_sym_then] = 72,
        [sym_comment] = 48,
        [sym__line_break] = 72,
        [anon_sym_SEMI] = 72,
    },
    [479] = {
        [sym__terminator] = 74,
        [anon_sym_COLON_COLON] = 1266,
        [anon_sym_then] = 74,
        [anon_sym_LBRACK] = 1268,
        [sym_comment] = 48,
        [sym__line_break] = 74,
        [anon_sym_SEMI] = 74,
    },
    [480] = {
        [sym__terminator] = 80,
        [anon_sym_COLON_COLON] = 80,
        [anon_sym_then] = 80,
        [anon_sym_LBRACK] = 80,
        [sym_comment] = 48,
        [sym__line_break] = 80,
        [anon_sym_SEMI] = 80,
    },
    [481] = {
        [sym__statement] = 1270,
        [sym__declaration] = 146,
        [sym_method_declaration] = 148,
        [sym_class_declaration] = 148,
        [sym_module_declaration] = 148,
        [sym_while_statement] = 146,
        [sym_until_statement] = 146,
        [sym_if_statement] = 146,
        [sym_unless_statement] = 146,
        [sym__call] = 150,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 146,
        [sym__argument] = 152,
        [sym__primary] = 154,
        [sym_scope_resolution_expression] = 156,
        [sym_subscript_expression] = 156,
        [sym__variable] = 156,
        [anon_sym_undef] = 158,
        [anon_sym_alias] = 160,
        [anon_sym_if] = 162,
        [anon_sym_while] = 164,
        [anon_sym_unless] = 166,
        [anon_sym_until] = 168,
        [anon_sym_def] = 170,
        [anon_sym_LPAREN] = 172,
        [anon_sym_RPAREN] = 1272,
        [anon_sym_class] = 176,
        [anon_sym_COLON_COLON] = 178,
        [anon_sym_module] = 180,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 182,
        [anon_sym_self] = 182,
        [sym_identifier] = 182,
        [sym_comment] = 48,
        [sym_symbol] = 152,
        [sym__line_break] = 48,
    },
    [482] = {
        [sym_identifier] = 1274,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [483] = {
        [sym__terminator] = 210,
        [anon_sym_COLON_COLON] = 210,
        [anon_sym_then] = 210,
        [anon_sym_LBRACK] = 210,
        [sym_comment] = 48,
        [sym__line_break] = 210,
        [anon_sym_SEMI] = 210,
    },
    [484] = {
        [sym__terminator] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_then] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [485] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 1276,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 1278,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [486] = {
        [sym__terminator] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_then] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [487] = {
        [anon_sym_RPAREN] = 1280,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [488] = {
        [sym__terminator] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_then] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [489] = {
        [sym__terminator] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_then] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [490] = {
        [sym_identifier] = 1282,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [491] = {
        [sym__argument] = 1284,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1286,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [492] = {
        [aux_sym__call_arguments_repeat1] = 1288,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1290,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [493] = {
        [sym__terminator] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_then] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [494] = {
        [anon_sym_RBRACK] = 1292,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [495] = {
        [sym__terminator] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_then] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [496] = {
        [sym__terminator] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_then] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [497] = {
        [sym__terminator] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_then] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [498] = {
        [sym__statement] = 1294,
        [sym__declaration] = 1020,
        [sym_method_declaration] = 1022,
        [sym_class_declaration] = 1022,
        [sym_module_declaration] = 1022,
        [sym_while_statement] = 1020,
        [sym_until_statement] = 1020,
        [sym_if_statement] = 1020,
        [sym_unless_statement] = 1020,
        [sym__call] = 1024,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 1020,
        [sym__argument] = 1026,
        [sym__primary] = 1028,
        [sym_scope_resolution_expression] = 1030,
        [sym_subscript_expression] = 1030,
        [sym__variable] = 1030,
        [aux_sym__then_elsif_else_block_repeat1] = 1296,
        [anon_sym_end] = 1298,
        [anon_sym_undef] = 1032,
        [anon_sym_alias] = 1034,
        [anon_sym_if] = 1036,
        [anon_sym_while] = 1038,
        [anon_sym_unless] = 1040,
        [anon_sym_until] = 1042,
        [anon_sym_def] = 1044,
        [anon_sym_LPAREN] = 1046,
        [anon_sym_class] = 1048,
        [anon_sym_COLON_COLON] = 1050,
        [anon_sym_module] = 1052,
        [anon_sym_else] = 1298,
        [anon_sym_elsif] = 1014,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 1054,
        [anon_sym_self] = 1054,
        [sym_identifier] = 1054,
        [sym_comment] = 48,
        [sym_symbol] = 1026,
        [sym__line_break] = 48,
    },
    [499] = {
        [sym__terminator] = 1056,
        [aux_sym_program_repeat1] = 1300,
        [aux_sym__then_elsif_else_block_repeat1] = 1302,
        [anon_sym_end] = 1304,
        [anon_sym_if] = 1060,
        [anon_sym_while] = 1060,
        [anon_sym_unless] = 1060,
        [anon_sym_until] = 1060,
        [anon_sym_else] = 1304,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [500] = {
        [anon_sym_end] = 1304,
        [anon_sym_else] = 1304,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [501] = {
        [sym__statement] = 1306,
        [sym__declaration] = 1020,
        [sym_method_declaration] = 1022,
        [sym_class_declaration] = 1022,
        [sym_module_declaration] = 1022,
        [sym_while_statement] = 1020,
        [sym_until_statement] = 1020,
        [sym_if_statement] = 1020,
        [sym_unless_statement] = 1020,
        [sym__call] = 1024,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 1020,
        [sym__argument] = 1026,
        [sym__primary] = 1028,
        [sym_scope_resolution_expression] = 1030,
        [sym_subscript_expression] = 1030,
        [sym__variable] = 1030,
        [anon_sym_undef] = 1032,
        [anon_sym_alias] = 1034,
        [anon_sym_if] = 1036,
        [anon_sym_while] = 1038,
        [anon_sym_unless] = 1040,
        [anon_sym_until] = 1042,
        [anon_sym_def] = 1044,
        [anon_sym_LPAREN] = 1046,
        [anon_sym_class] = 1048,
        [anon_sym_COLON_COLON] = 1050,
        [anon_sym_module] = 1052,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 1054,
        [anon_sym_self] = 1054,
        [sym_identifier] = 1054,
        [sym_comment] = 48,
        [sym_symbol] = 1026,
        [sym__line_break] = 48,
    },
    [502] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1308,
        [anon_sym_end] = 1310,
        [anon_sym_else] = 1310,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [503] = {
        [anon_sym_end] = 1310,
        [anon_sym_else] = 1310,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [504] = {
        [sym__expression] = 1312,
        [sym__argument] = 1026,
        [sym__primary] = 1028,
        [sym_scope_resolution_expression] = 1030,
        [sym_subscript_expression] = 1030,
        [sym__variable] = 1030,
        [anon_sym_LPAREN] = 1046,
        [anon_sym_COLON_COLON] = 1050,
        [anon_sym_nil] = 1054,
        [anon_sym_self] = 1054,
        [sym_identifier] = 1054,
        [sym_comment] = 48,
        [sym_symbol] = 1026,
        [sym__line_break] = 48,
    },
    [505] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [aux_sym__then_elsif_else_block_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [anon_sym_else] = 384,
        [anon_sym_elsif] = 384,
        [sym_comment] = 48,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [506] = {
        [anon_sym_end] = 1314,
        [anon_sym_else] = 1314,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [507] = {
        [sym__terminator] = 1056,
        [aux_sym_program_repeat1] = 1316,
        [aux_sym__then_elsif_else_block_repeat1] = 390,
        [anon_sym_end] = 390,
        [anon_sym_if] = 1060,
        [anon_sym_while] = 1060,
        [anon_sym_unless] = 1060,
        [anon_sym_until] = 1060,
        [anon_sym_else] = 390,
        [anon_sym_elsif] = 390,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [508] = {
        [aux_sym__then_elsif_else_block_repeat1] = 392,
        [anon_sym_end] = 392,
        [anon_sym_else] = 392,
        [anon_sym_elsif] = 392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [509] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1318,
        [anon_sym_end] = 1320,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [510] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [aux_sym__then_elsif_else_block_repeat1] = 1322,
        [anon_sym_end] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_else] = 1322,
        [anon_sym_elsif] = 1322,
        [sym_comment] = 48,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [511] = {
        [anon_sym_end] = 1324,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [512] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [aux_sym__then_elsif_else_block_repeat1] = 1326,
        [anon_sym_end] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_else] = 1326,
        [anon_sym_elsif] = 1326,
        [sym_comment] = 48,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [513] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [aux_sym__then_elsif_else_block_repeat1] = 1328,
        [anon_sym_end] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_else] = 1328,
        [anon_sym_elsif] = 1328,
        [sym_comment] = 48,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [514] = {
        [sym__statement] = 1330,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1320,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [515] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1332,
        [anon_sym_end] = 1324,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [516] = {
        [anon_sym_end] = 1334,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [517] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [aux_sym__then_elsif_else_block_repeat1] = 1336,
        [anon_sym_end] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_else] = 1336,
        [anon_sym_elsif] = 1336,
        [sym_comment] = 48,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [518] = {
        [sym__function_name] = 1312,
        [anon_sym_PIPE] = 1070,
        [anon_sym_STAR] = 1070,
        [anon_sym_AMP] = 1070,
        [anon_sym_LT] = 1070,
        [sym_identifier] = 1070,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 1070,
        [anon_sym_CARET] = 1070,
        [anon_sym_LT_EQ_GT] = 1070,
        [anon_sym_EQ_EQ] = 1070,
        [anon_sym_EQ_EQ_EQ] = 1070,
        [anon_sym_EQ_TILDE] = 1070,
        [anon_sym_GT] = 1070,
        [anon_sym_GT_EQ] = 1070,
        [anon_sym_LT_EQ] = 1070,
        [anon_sym_PLUS] = 1070,
        [anon_sym_DASH] = 1070,
        [anon_sym_SLASH] = 1070,
        [anon_sym_PERCENT] = 1070,
        [anon_sym_STAR_STAR] = 1070,
        [anon_sym_LT_LT] = 1070,
        [anon_sym_GT_GT] = 1070,
        [anon_sym_TILDE] = 1070,
        [anon_sym_PLUS_AT] = 1070,
        [anon_sym_DASH_AT] = 1070,
        [anon_sym_LBRACK_RBRACK] = 1070,
        [anon_sym_LBRACK_RBRACK_EQ] = 1070,
        [sym__line_break] = 48,
    },
    [519] = {
        [sym__function_name] = 478,
        [anon_sym_PIPE] = 478,
        [anon_sym_STAR] = 478,
        [anon_sym_AMP] = 478,
        [anon_sym_LT] = 478,
        [sym_identifier] = 478,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 478,
        [anon_sym_CARET] = 478,
        [anon_sym_LT_EQ_GT] = 478,
        [anon_sym_EQ_EQ] = 478,
        [anon_sym_EQ_EQ_EQ] = 478,
        [anon_sym_EQ_TILDE] = 478,
        [anon_sym_GT] = 478,
        [anon_sym_GT_EQ] = 478,
        [anon_sym_LT_EQ] = 478,
        [anon_sym_PLUS] = 478,
        [anon_sym_DASH] = 478,
        [anon_sym_SLASH] = 478,
        [anon_sym_PERCENT] = 478,
        [anon_sym_STAR_STAR] = 478,
        [anon_sym_LT_LT] = 478,
        [anon_sym_GT_GT] = 478,
        [anon_sym_TILDE] = 478,
        [anon_sym_PLUS_AT] = 478,
        [anon_sym_DASH_AT] = 478,
        [anon_sym_LBRACK_RBRACK] = 478,
        [anon_sym_LBRACK_RBRACK_EQ] = 478,
        [sym__line_break] = 48,
    },
    [520] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [aux_sym__then_elsif_else_block_repeat1] = 478,
        [anon_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [anon_sym_else] = 478,
        [anon_sym_elsif] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [521] = {
        [sym__terminator] = 1338,
        [aux_sym_program_repeat1] = 1338,
        [aux_sym__then_elsif_else_block_repeat1] = 1338,
        [anon_sym_end] = 1338,
        [anon_sym_if] = 1338,
        [anon_sym_while] = 1338,
        [anon_sym_unless] = 1338,
        [anon_sym_until] = 1338,
        [anon_sym_else] = 1338,
        [anon_sym_elsif] = 1338,
        [sym_comment] = 48,
        [sym__line_break] = 1338,
        [anon_sym_SEMI] = 1338,
    },
    [522] = {
        [sym_identifier] = 1340,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [523] = {
        [sym__argument] = 1342,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1344,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [524] = {
        [aux_sym__call_arguments_repeat1] = 1346,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1348,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [525] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [aux_sym__then_elsif_else_block_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_else] = 628,
        [anon_sym_elsif] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [526] = {
        [anon_sym_RBRACK] = 1350,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [527] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [aux_sym__then_elsif_else_block_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_else] = 650,
        [anon_sym_elsif] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [528] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [aux_sym__then_elsif_else_block_repeat1] = 658,
        [anon_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_else] = 658,
        [anon_sym_elsif] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [529] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [aux_sym__then_elsif_else_block_repeat1] = 660,
        [anon_sym_end] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_else] = 660,
        [anon_sym_elsif] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [530] = {
        [sym__statement] = 1352,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_PIPE] = 1354,
        [anon_sym_end] = 1312,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [531] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1356,
        [anon_sym_end] = 1358,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [532] = {
        [sym__statement] = 1360,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1358,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [533] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1362,
        [anon_sym_end] = 1364,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [534] = {
        [sym__terminator] = 1366,
        [aux_sym_program_repeat1] = 1366,
        [aux_sym__then_elsif_else_block_repeat1] = 1366,
        [anon_sym_end] = 1366,
        [anon_sym_if] = 1366,
        [anon_sym_while] = 1366,
        [anon_sym_unless] = 1366,
        [anon_sym_until] = 1366,
        [anon_sym_else] = 1366,
        [anon_sym_elsif] = 1366,
        [sym_comment] = 48,
        [sym__line_break] = 1366,
        [anon_sym_SEMI] = 1366,
    },
    [535] = {
        [anon_sym_end] = 1368,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [536] = {
        [sym__terminator] = 1370,
        [aux_sym_program_repeat1] = 1370,
        [aux_sym__then_elsif_else_block_repeat1] = 1370,
        [anon_sym_end] = 1370,
        [anon_sym_if] = 1370,
        [anon_sym_while] = 1370,
        [anon_sym_unless] = 1370,
        [anon_sym_until] = 1370,
        [anon_sym_else] = 1370,
        [anon_sym_elsif] = 1370,
        [sym_comment] = 48,
        [sym__line_break] = 1370,
        [anon_sym_SEMI] = 1370,
    },
    [537] = {
        [sym__terminator] = 1372,
        [aux_sym_program_repeat1] = 1372,
        [aux_sym__then_elsif_else_block_repeat1] = 1372,
        [anon_sym_end] = 1372,
        [anon_sym_if] = 1372,
        [anon_sym_while] = 1372,
        [anon_sym_unless] = 1372,
        [anon_sym_until] = 1372,
        [anon_sym_else] = 1372,
        [anon_sym_elsif] = 1372,
        [sym_comment] = 48,
        [sym__line_break] = 1372,
        [anon_sym_SEMI] = 1372,
    },
    [538] = {
        [anon_sym_end] = 1364,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [539] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1374,
        [anon_sym_end] = 1374,
        [anon_sym_else] = 1374,
        [anon_sym_elsif] = 1374,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [540] = {
        [anon_sym_end] = 1376,
        [anon_sym_else] = 1378,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [541] = {
        [sym__terminator] = 1244,
        [aux_sym_program_repeat1] = 1244,
        [anon_sym_end] = 1244,
        [anon_sym_if] = 1244,
        [anon_sym_while] = 1244,
        [anon_sym_unless] = 1244,
        [anon_sym_until] = 1244,
        [anon_sym_else] = 1244,
        [sym_comment] = 48,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [542] = {
        [sym__statement] = 1380,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1376,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [543] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1382,
        [anon_sym_end] = 1384,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [544] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_end] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_else] = 1322,
        [sym_comment] = 48,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [545] = {
        [anon_sym_end] = 1386,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [546] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_end] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_else] = 1326,
        [sym_comment] = 48,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [547] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [anon_sym_end] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_else] = 1328,
        [sym_comment] = 48,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [548] = {
        [sym__statement] = 1388,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1384,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [549] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1390,
        [anon_sym_end] = 1386,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [550] = {
        [anon_sym_end] = 1392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [551] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [anon_sym_end] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_else] = 1336,
        [sym_comment] = 48,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [552] = {
        [sym__function_name] = 1394,
        [anon_sym_PIPE] = 800,
        [anon_sym_STAR] = 800,
        [anon_sym_AMP] = 800,
        [anon_sym_LT] = 800,
        [sym_identifier] = 800,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 800,
        [anon_sym_CARET] = 800,
        [anon_sym_LT_EQ_GT] = 800,
        [anon_sym_EQ_EQ] = 800,
        [anon_sym_EQ_EQ_EQ] = 800,
        [anon_sym_EQ_TILDE] = 800,
        [anon_sym_GT] = 800,
        [anon_sym_GT_EQ] = 800,
        [anon_sym_LT_EQ] = 800,
        [anon_sym_PLUS] = 800,
        [anon_sym_DASH] = 800,
        [anon_sym_SLASH] = 800,
        [anon_sym_PERCENT] = 800,
        [anon_sym_STAR_STAR] = 800,
        [anon_sym_LT_LT] = 800,
        [anon_sym_GT_GT] = 800,
        [anon_sym_TILDE] = 800,
        [anon_sym_PLUS_AT] = 800,
        [anon_sym_DASH_AT] = 800,
        [anon_sym_LBRACK_RBRACK] = 800,
        [anon_sym_LBRACK_RBRACK_EQ] = 800,
        [sym__line_break] = 48,
    },
    [553] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [anon_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [anon_sym_else] = 384,
        [sym_comment] = 48,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [554] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [anon_sym_else] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [555] = {
        [sym__terminator] = 1338,
        [aux_sym_program_repeat1] = 1338,
        [anon_sym_end] = 1338,
        [anon_sym_if] = 1338,
        [anon_sym_while] = 1338,
        [anon_sym_unless] = 1338,
        [anon_sym_until] = 1338,
        [anon_sym_else] = 1338,
        [sym_comment] = 48,
        [sym__line_break] = 1338,
        [anon_sym_SEMI] = 1338,
    },
    [556] = {
        [sym_identifier] = 1396,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [557] = {
        [sym__argument] = 1398,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1400,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [558] = {
        [aux_sym__call_arguments_repeat1] = 1402,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1404,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [559] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_else] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [560] = {
        [anon_sym_RBRACK] = 1406,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [561] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_else] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [562] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_else] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [563] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_end] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_else] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [564] = {
        [sym__statement] = 1408,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_PIPE] = 1410,
        [anon_sym_end] = 1394,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [565] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1412,
        [anon_sym_end] = 1414,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [566] = {
        [sym__statement] = 1416,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1414,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [567] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1418,
        [anon_sym_end] = 1420,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [568] = {
        [sym__terminator] = 1366,
        [aux_sym_program_repeat1] = 1366,
        [anon_sym_end] = 1366,
        [anon_sym_if] = 1366,
        [anon_sym_while] = 1366,
        [anon_sym_unless] = 1366,
        [anon_sym_until] = 1366,
        [anon_sym_else] = 1366,
        [sym_comment] = 48,
        [sym__line_break] = 1366,
        [anon_sym_SEMI] = 1366,
    },
    [569] = {
        [anon_sym_end] = 1422,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [570] = {
        [sym__terminator] = 1370,
        [aux_sym_program_repeat1] = 1370,
        [anon_sym_end] = 1370,
        [anon_sym_if] = 1370,
        [anon_sym_while] = 1370,
        [anon_sym_unless] = 1370,
        [anon_sym_until] = 1370,
        [anon_sym_else] = 1370,
        [sym_comment] = 48,
        [sym__line_break] = 1370,
        [anon_sym_SEMI] = 1370,
    },
    [571] = {
        [sym__terminator] = 1372,
        [aux_sym_program_repeat1] = 1372,
        [anon_sym_end] = 1372,
        [anon_sym_if] = 1372,
        [anon_sym_while] = 1372,
        [anon_sym_unless] = 1372,
        [anon_sym_until] = 1372,
        [anon_sym_else] = 1372,
        [sym_comment] = 48,
        [sym__line_break] = 1372,
        [anon_sym_SEMI] = 1372,
    },
    [572] = {
        [anon_sym_end] = 1420,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [573] = {
        [sym__statement] = 1424,
        [sym__declaration] = 746,
        [sym_method_declaration] = 748,
        [sym_class_declaration] = 748,
        [sym_module_declaration] = 748,
        [sym_while_statement] = 746,
        [sym_until_statement] = 746,
        [sym_if_statement] = 746,
        [sym_unless_statement] = 746,
        [sym__call] = 750,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 746,
        [sym__argument] = 752,
        [sym__primary] = 754,
        [sym_scope_resolution_expression] = 756,
        [sym_subscript_expression] = 756,
        [sym__variable] = 756,
        [anon_sym_undef] = 760,
        [anon_sym_alias] = 762,
        [anon_sym_if] = 764,
        [anon_sym_while] = 766,
        [anon_sym_unless] = 768,
        [anon_sym_until] = 770,
        [anon_sym_def] = 772,
        [anon_sym_LPAREN] = 774,
        [anon_sym_class] = 776,
        [anon_sym_COLON_COLON] = 778,
        [anon_sym_module] = 780,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 782,
        [anon_sym_self] = 782,
        [sym_identifier] = 782,
        [sym_comment] = 48,
        [sym_symbol] = 752,
        [sym__line_break] = 48,
    },
    [574] = {
        [anon_sym_end] = 1374,
        [anon_sym_else] = 1374,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [575] = {
        [sym__expression] = 1394,
        [sym__argument] = 752,
        [sym__primary] = 754,
        [sym_scope_resolution_expression] = 756,
        [sym_subscript_expression] = 756,
        [sym__variable] = 756,
        [anon_sym_LPAREN] = 774,
        [anon_sym_COLON_COLON] = 778,
        [anon_sym_nil] = 782,
        [anon_sym_self] = 782,
        [sym_identifier] = 782,
        [sym_comment] = 48,
        [sym_symbol] = 752,
        [sym__line_break] = 48,
    },
    [576] = {
        [sym__terminator] = 784,
        [aux_sym_program_repeat1] = 1426,
        [anon_sym_end] = 390,
        [anon_sym_if] = 790,
        [anon_sym_while] = 790,
        [anon_sym_unless] = 790,
        [anon_sym_until] = 790,
        [anon_sym_else] = 390,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [577] = {
        [anon_sym_end] = 392,
        [anon_sym_else] = 392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [578] = {
        [sym__terminator] = 948,
        [aux_sym_program_repeat1] = 948,
        [anon_sym_end] = 948,
        [anon_sym_if] = 948,
        [anon_sym_while] = 948,
        [anon_sym_unless] = 948,
        [anon_sym_until] = 948,
        [sym_comment] = 48,
        [sym__line_break] = 948,
        [anon_sym_SEMI] = 948,
    },
    [579] = {
        [sym__statement] = 1428,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1430,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [580] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1432,
        [anon_sym_end] = 1434,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [581] = {
        [sym__terminator] = 958,
        [aux_sym_program_repeat1] = 958,
        [anon_sym_end] = 958,
        [anon_sym_if] = 958,
        [anon_sym_while] = 958,
        [anon_sym_unless] = 958,
        [anon_sym_until] = 958,
        [sym_comment] = 48,
        [sym__line_break] = 958,
        [anon_sym_SEMI] = 958,
    },
    [582] = {
        [anon_sym_end] = 1436,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [583] = {
        [sym__terminator] = 962,
        [aux_sym_program_repeat1] = 962,
        [anon_sym_end] = 962,
        [anon_sym_if] = 962,
        [anon_sym_while] = 962,
        [anon_sym_unless] = 962,
        [anon_sym_until] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 962,
        [anon_sym_SEMI] = 962,
    },
    [584] = {
        [sym__terminator] = 964,
        [aux_sym_program_repeat1] = 964,
        [anon_sym_end] = 964,
        [anon_sym_if] = 964,
        [anon_sym_while] = 964,
        [anon_sym_unless] = 964,
        [anon_sym_until] = 964,
        [sym_comment] = 48,
        [sym__line_break] = 964,
        [anon_sym_SEMI] = 964,
    },
    [585] = {
        [sym__statement_block] = 1438,
        [sym__do_block] = 572,
        [sym__terminator] = 574,
        [anon_sym_do] = 576,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [586] = {
        [sym__terminator] = 968,
        [aux_sym_program_repeat1] = 968,
        [anon_sym_end] = 968,
        [anon_sym_if] = 968,
        [anon_sym_while] = 968,
        [anon_sym_unless] = 968,
        [anon_sym_until] = 968,
        [sym_comment] = 48,
        [sym__line_break] = 968,
        [anon_sym_SEMI] = 968,
    },
    [587] = {
        [sym_then_block] = 1440,
        [sym__then_elsif_else_block] = 1442,
        [sym__terminator] = 974,
        [anon_sym_then] = 974,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 978,
    },
    [588] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1444,
        [anon_sym_end] = 1446,
        [anon_sym_else] = 1448,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [589] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [anon_sym_end] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_until] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [590] = {
        [anon_sym_end] = 1450,
        [anon_sym_else] = 1452,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [591] = {
        [sym__terminator] = 1244,
        [aux_sym_program_repeat1] = 1244,
        [anon_sym_end] = 1244,
        [anon_sym_if] = 1244,
        [anon_sym_while] = 1244,
        [anon_sym_unless] = 1244,
        [anon_sym_until] = 1244,
        [sym_comment] = 48,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [592] = {
        [sym__statement] = 1454,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1450,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [593] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1456,
        [anon_sym_end] = 1458,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [594] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_end] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_until] = 1322,
        [sym_comment] = 48,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [595] = {
        [anon_sym_end] = 1460,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [596] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_end] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_until] = 1326,
        [sym_comment] = 48,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [597] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [anon_sym_end] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_until] = 1328,
        [sym_comment] = 48,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [598] = {
        [sym__statement] = 1462,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1458,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [599] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1464,
        [anon_sym_end] = 1460,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [600] = {
        [anon_sym_end] = 1466,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [601] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [anon_sym_end] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_until] = 1336,
        [sym_comment] = 48,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [602] = {
        [sym__function_name] = 382,
        [anon_sym_PIPE] = 342,
        [anon_sym_STAR] = 342,
        [anon_sym_AMP] = 342,
        [anon_sym_LT] = 342,
        [sym_identifier] = 342,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 342,
        [anon_sym_CARET] = 342,
        [anon_sym_LT_EQ_GT] = 342,
        [anon_sym_EQ_EQ] = 342,
        [anon_sym_EQ_EQ_EQ] = 342,
        [anon_sym_EQ_TILDE] = 342,
        [anon_sym_GT] = 342,
        [anon_sym_GT_EQ] = 342,
        [anon_sym_LT_EQ] = 342,
        [anon_sym_PLUS] = 342,
        [anon_sym_DASH] = 342,
        [anon_sym_SLASH] = 342,
        [anon_sym_PERCENT] = 342,
        [anon_sym_STAR_STAR] = 342,
        [anon_sym_LT_LT] = 342,
        [anon_sym_GT_GT] = 342,
        [anon_sym_TILDE] = 342,
        [anon_sym_PLUS_AT] = 342,
        [anon_sym_DASH_AT] = 342,
        [anon_sym_LBRACK_RBRACK] = 342,
        [anon_sym_LBRACK_RBRACK_EQ] = 342,
        [sym__line_break] = 48,
    },
    [603] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [604] = {
        [sym__terminator] = 1338,
        [aux_sym_program_repeat1] = 1338,
        [anon_sym_end] = 1338,
        [anon_sym_if] = 1338,
        [anon_sym_while] = 1338,
        [anon_sym_unless] = 1338,
        [anon_sym_until] = 1338,
        [sym_comment] = 48,
        [sym__line_break] = 1338,
        [anon_sym_SEMI] = 1338,
    },
    [605] = {
        [sym_identifier] = 1468,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [606] = {
        [sym__argument] = 1470,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1472,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [607] = {
        [aux_sym__call_arguments_repeat1] = 1474,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1476,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [608] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_end] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [609] = {
        [anon_sym_RBRACK] = 1478,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [610] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [611] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [612] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_end] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [613] = {
        [sym__statement] = 1480,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_PIPE] = 1482,
        [anon_sym_end] = 382,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [614] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1484,
        [anon_sym_end] = 1486,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [615] = {
        [sym__statement] = 1488,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1486,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [616] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1490,
        [anon_sym_end] = 1492,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [617] = {
        [sym__terminator] = 1366,
        [aux_sym_program_repeat1] = 1366,
        [anon_sym_end] = 1366,
        [anon_sym_if] = 1366,
        [anon_sym_while] = 1366,
        [anon_sym_unless] = 1366,
        [anon_sym_until] = 1366,
        [sym_comment] = 48,
        [sym__line_break] = 1366,
        [anon_sym_SEMI] = 1366,
    },
    [618] = {
        [anon_sym_end] = 1494,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [619] = {
        [sym__terminator] = 1370,
        [aux_sym_program_repeat1] = 1370,
        [anon_sym_end] = 1370,
        [anon_sym_if] = 1370,
        [anon_sym_while] = 1370,
        [anon_sym_unless] = 1370,
        [anon_sym_until] = 1370,
        [sym_comment] = 48,
        [sym__line_break] = 1370,
        [anon_sym_SEMI] = 1370,
    },
    [620] = {
        [sym__terminator] = 1372,
        [aux_sym_program_repeat1] = 1372,
        [anon_sym_end] = 1372,
        [anon_sym_if] = 1372,
        [anon_sym_while] = 1372,
        [anon_sym_unless] = 1372,
        [anon_sym_until] = 1372,
        [sym_comment] = 48,
        [sym__line_break] = 1372,
        [anon_sym_SEMI] = 1372,
    },
    [621] = {
        [anon_sym_end] = 1492,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [622] = {
        [anon_sym_end] = 1496,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [623] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [anon_sym_RPAREN] = 380,
        [sym_comment] = 48,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [624] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [anon_sym_RPAREN] = 386,
        [sym_comment] = 48,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [625] = {
        [sym__terminator] = 230,
        [aux_sym_program_repeat1] = 230,
        [anon_sym_if] = 230,
        [anon_sym_while] = 230,
        [anon_sym_unless] = 230,
        [anon_sym_until] = 230,
        [anon_sym_RPAREN] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [626] = {
        [sym__terminator] = 1498,
        [anon_sym_LT] = 1500,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [627] = {
        [sym__statement] = 1502,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1504,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [628] = {
        [sym_identifier] = 1506,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [629] = {
        [sym__terminator] = 1508,
        [aux_sym_class_declaration_repeat1] = 1510,
        [anon_sym_COLON_COLON] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [630] = {
        [sym__statement] = 1512,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1514,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [631] = {
        [sym__terminator] = 1516,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [632] = {
        [sym__statement] = 1518,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1520,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [633] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1522,
        [anon_sym_end] = 1524,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [634] = {
        [sym__terminator] = 432,
        [aux_sym_program_repeat1] = 432,
        [anon_sym_if] = 432,
        [anon_sym_while] = 432,
        [anon_sym_unless] = 432,
        [anon_sym_until] = 432,
        [anon_sym_RPAREN] = 432,
        [sym_comment] = 48,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 432,
    },
    [635] = {
        [anon_sym_end] = 1526,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [636] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [anon_sym_RPAREN] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [637] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [anon_sym_RPAREN] = 438,
        [sym_comment] = 48,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [638] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1528,
        [anon_sym_end] = 1520,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [639] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [anon_sym_RPAREN] = 442,
        [sym_comment] = 48,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [640] = {
        [anon_sym_end] = 1524,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [641] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1530,
        [anon_sym_end] = 1532,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [642] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [anon_sym_RPAREN] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [643] = {
        [anon_sym_end] = 1514,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [644] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [anon_sym_RPAREN] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [645] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 1534,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 1536,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [646] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 266,
        [anon_sym_if] = 266,
        [anon_sym_while] = 266,
        [anon_sym_unless] = 266,
        [anon_sym_until] = 266,
        [anon_sym_RPAREN] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [647] = {
        [anon_sym_RPAREN] = 1538,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [648] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [anon_sym_RPAREN] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [649] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_RPAREN] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [650] = {
        [sym_argument_list] = 1540,
        [sym__terminator] = 1542,
        [anon_sym_LPAREN] = 1544,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [651] = {
        [sym__terminator] = 1546,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [652] = {
        [sym__statement] = 1548,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1550,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [653] = {
        [sym_argument_list] = 1552,
        [anon_sym_RPAREN] = 1546,
        [anon_sym_STAR] = 488,
        [anon_sym_AMP] = 488,
        [sym_identifier] = 490,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [654] = {
        [anon_sym_RPAREN] = 1554,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [655] = {
        [sym__statement] = 1556,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1558,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [656] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1560,
        [anon_sym_end] = 1562,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [657] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [anon_sym_RPAREN] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [658] = {
        [anon_sym_end] = 1564,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [659] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [anon_sym_RPAREN] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [660] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [anon_sym_RPAREN] = 556,
        [sym_comment] = 48,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [661] = {
        [sym__statement] = 1566,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1562,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [662] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1568,
        [anon_sym_end] = 1564,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [663] = {
        [anon_sym_end] = 1570,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [664] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [anon_sym_RPAREN] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [665] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1572,
        [anon_sym_end] = 1558,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [666] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [anon_sym_RPAREN] = 568,
        [sym_comment] = 48,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [667] = {
        [anon_sym_end] = 1562,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [668] = {
        [sym__statement_block] = 1574,
        [sym__do_block] = 1576,
        [sym__terminator] = 1578,
        [anon_sym_do] = 1580,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [669] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [anon_sym_RPAREN] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [670] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [anon_sym_RPAREN] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [671] = {
        [sym__statement] = 1582,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1584,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [672] = {
        [sym__statement] = 1586,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1588,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [673] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1590,
        [anon_sym_end] = 1592,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [674] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [anon_sym_RPAREN] = 680,
        [sym_comment] = 48,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [675] = {
        [anon_sym_end] = 1594,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [676] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [anon_sym_RPAREN] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [677] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [anon_sym_RPAREN] = 686,
        [sym_comment] = 48,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [678] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1596,
        [anon_sym_end] = 1598,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [679] = {
        [sym__terminator] = 692,
        [aux_sym_program_repeat1] = 692,
        [anon_sym_if] = 692,
        [anon_sym_while] = 692,
        [anon_sym_unless] = 692,
        [anon_sym_until] = 692,
        [anon_sym_RPAREN] = 692,
        [sym_comment] = 48,
        [sym__line_break] = 692,
        [anon_sym_SEMI] = 692,
    },
    [680] = {
        [anon_sym_end] = 1600,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [681] = {
        [sym__terminator] = 696,
        [aux_sym_program_repeat1] = 696,
        [anon_sym_if] = 696,
        [anon_sym_while] = 696,
        [anon_sym_unless] = 696,
        [anon_sym_until] = 696,
        [anon_sym_RPAREN] = 696,
        [sym_comment] = 48,
        [sym__line_break] = 696,
        [anon_sym_SEMI] = 696,
    },
    [682] = {
        [sym__terminator] = 698,
        [aux_sym_program_repeat1] = 698,
        [anon_sym_if] = 698,
        [anon_sym_while] = 698,
        [anon_sym_unless] = 698,
        [anon_sym_until] = 698,
        [anon_sym_RPAREN] = 698,
        [sym_comment] = 48,
        [sym__line_break] = 698,
        [anon_sym_SEMI] = 698,
    },
    [683] = {
        [sym_then_block] = 1602,
        [sym__then_else_block] = 1604,
        [sym__terminator] = 704,
        [anon_sym_then] = 704,
        [sym_comment] = 48,
        [sym__line_break] = 706,
        [anon_sym_SEMI] = 708,
    },
    [684] = {
        [anon_sym_end] = 1606,
        [anon_sym_else] = 1608,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [685] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [anon_sym_RPAREN] = 742,
        [sym_comment] = 48,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [686] = {
        [sym__terminator] = 948,
        [aux_sym_program_repeat1] = 948,
        [anon_sym_if] = 948,
        [anon_sym_while] = 948,
        [anon_sym_unless] = 948,
        [anon_sym_until] = 948,
        [anon_sym_RPAREN] = 948,
        [sym_comment] = 48,
        [sym__line_break] = 948,
        [anon_sym_SEMI] = 948,
    },
    [687] = {
        [sym__statement] = 1610,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1612,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [688] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1614,
        [anon_sym_end] = 1616,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [689] = {
        [sym__terminator] = 958,
        [aux_sym_program_repeat1] = 958,
        [anon_sym_if] = 958,
        [anon_sym_while] = 958,
        [anon_sym_unless] = 958,
        [anon_sym_until] = 958,
        [anon_sym_RPAREN] = 958,
        [sym_comment] = 48,
        [sym__line_break] = 958,
        [anon_sym_SEMI] = 958,
    },
    [690] = {
        [anon_sym_end] = 1618,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [691] = {
        [sym__terminator] = 962,
        [aux_sym_program_repeat1] = 962,
        [anon_sym_if] = 962,
        [anon_sym_while] = 962,
        [anon_sym_unless] = 962,
        [anon_sym_until] = 962,
        [anon_sym_RPAREN] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 962,
        [anon_sym_SEMI] = 962,
    },
    [692] = {
        [sym__terminator] = 964,
        [aux_sym_program_repeat1] = 964,
        [anon_sym_if] = 964,
        [anon_sym_while] = 964,
        [anon_sym_unless] = 964,
        [anon_sym_until] = 964,
        [anon_sym_RPAREN] = 964,
        [sym_comment] = 48,
        [sym__line_break] = 964,
        [anon_sym_SEMI] = 964,
    },
    [693] = {
        [sym__statement_block] = 1620,
        [sym__do_block] = 1576,
        [sym__terminator] = 1578,
        [anon_sym_do] = 1580,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [694] = {
        [sym__terminator] = 968,
        [aux_sym_program_repeat1] = 968,
        [anon_sym_if] = 968,
        [anon_sym_while] = 968,
        [anon_sym_unless] = 968,
        [anon_sym_until] = 968,
        [anon_sym_RPAREN] = 968,
        [sym_comment] = 48,
        [sym__line_break] = 968,
        [anon_sym_SEMI] = 968,
    },
    [695] = {
        [sym_then_block] = 1622,
        [sym__then_elsif_else_block] = 1624,
        [sym__terminator] = 974,
        [anon_sym_then] = 974,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 978,
    },
    [696] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1626,
        [anon_sym_end] = 1628,
        [anon_sym_else] = 1630,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [697] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_until] = 1016,
        [anon_sym_RPAREN] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [698] = {
        [anon_sym_end] = 1632,
        [anon_sym_else] = 1634,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [699] = {
        [sym__terminator] = 1244,
        [aux_sym_program_repeat1] = 1244,
        [anon_sym_if] = 1244,
        [anon_sym_while] = 1244,
        [anon_sym_unless] = 1244,
        [anon_sym_until] = 1244,
        [anon_sym_RPAREN] = 1244,
        [sym_comment] = 48,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [700] = {
        [sym__statement] = 1636,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1632,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [701] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1638,
        [anon_sym_end] = 1640,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [702] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_until] = 1322,
        [anon_sym_RPAREN] = 1322,
        [sym_comment] = 48,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [703] = {
        [anon_sym_end] = 1642,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [704] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_until] = 1326,
        [anon_sym_RPAREN] = 1326,
        [sym_comment] = 48,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [705] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_until] = 1328,
        [anon_sym_RPAREN] = 1328,
        [sym_comment] = 48,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [706] = {
        [sym__statement] = 1644,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1640,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [707] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1646,
        [anon_sym_end] = 1642,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [708] = {
        [anon_sym_end] = 1648,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [709] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_until] = 1336,
        [anon_sym_RPAREN] = 1336,
        [sym_comment] = 48,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [710] = {
        [sym__function_name] = 460,
        [anon_sym_PIPE] = 248,
        [anon_sym_STAR] = 248,
        [anon_sym_AMP] = 248,
        [anon_sym_LT] = 248,
        [sym_identifier] = 248,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 248,
        [anon_sym_CARET] = 248,
        [anon_sym_LT_EQ_GT] = 248,
        [anon_sym_EQ_EQ] = 248,
        [anon_sym_EQ_EQ_EQ] = 248,
        [anon_sym_EQ_TILDE] = 248,
        [anon_sym_GT] = 248,
        [anon_sym_GT_EQ] = 248,
        [anon_sym_LT_EQ] = 248,
        [anon_sym_PLUS] = 248,
        [anon_sym_DASH] = 248,
        [anon_sym_SLASH] = 248,
        [anon_sym_PERCENT] = 248,
        [anon_sym_STAR_STAR] = 248,
        [anon_sym_LT_LT] = 248,
        [anon_sym_GT_GT] = 248,
        [anon_sym_TILDE] = 248,
        [anon_sym_PLUS_AT] = 248,
        [anon_sym_DASH_AT] = 248,
        [anon_sym_LBRACK_RBRACK] = 248,
        [anon_sym_LBRACK_RBRACK_EQ] = 248,
        [sym__line_break] = 48,
    },
    [711] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [anon_sym_RPAREN] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [712] = {
        [sym__terminator] = 1338,
        [aux_sym_program_repeat1] = 1338,
        [anon_sym_if] = 1338,
        [anon_sym_while] = 1338,
        [anon_sym_unless] = 1338,
        [anon_sym_until] = 1338,
        [anon_sym_RPAREN] = 1338,
        [sym_comment] = 48,
        [sym__line_break] = 1338,
        [anon_sym_SEMI] = 1338,
    },
    [713] = {
        [sym_identifier] = 1650,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [714] = {
        [sym__argument] = 1652,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1654,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [715] = {
        [aux_sym__call_arguments_repeat1] = 1656,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1658,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [716] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [anon_sym_RPAREN] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [717] = {
        [anon_sym_RBRACK] = 1660,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [718] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_RPAREN] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [719] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_RPAREN] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [720] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [anon_sym_RPAREN] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [721] = {
        [sym__statement] = 1662,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_PIPE] = 1664,
        [anon_sym_end] = 460,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [722] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1666,
        [anon_sym_end] = 1668,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [723] = {
        [sym__statement] = 1670,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1668,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [724] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1672,
        [anon_sym_end] = 1674,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [725] = {
        [sym__terminator] = 1366,
        [aux_sym_program_repeat1] = 1366,
        [anon_sym_if] = 1366,
        [anon_sym_while] = 1366,
        [anon_sym_unless] = 1366,
        [anon_sym_until] = 1366,
        [anon_sym_RPAREN] = 1366,
        [sym_comment] = 48,
        [sym__line_break] = 1366,
        [anon_sym_SEMI] = 1366,
    },
    [726] = {
        [anon_sym_end] = 1676,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [727] = {
        [sym__terminator] = 1370,
        [aux_sym_program_repeat1] = 1370,
        [anon_sym_if] = 1370,
        [anon_sym_while] = 1370,
        [anon_sym_unless] = 1370,
        [anon_sym_until] = 1370,
        [anon_sym_RPAREN] = 1370,
        [sym_comment] = 48,
        [sym__line_break] = 1370,
        [anon_sym_SEMI] = 1370,
    },
    [728] = {
        [sym__terminator] = 1372,
        [aux_sym_program_repeat1] = 1372,
        [anon_sym_if] = 1372,
        [anon_sym_while] = 1372,
        [anon_sym_unless] = 1372,
        [anon_sym_until] = 1372,
        [anon_sym_RPAREN] = 1372,
        [sym_comment] = 48,
        [sym__line_break] = 1372,
        [anon_sym_SEMI] = 1372,
    },
    [729] = {
        [anon_sym_end] = 1674,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [730] = {
        [anon_sym_RPAREN] = 1678,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [731] = {
        [aux_sym__call_arguments_repeat1] = 462,
        [anon_sym_do] = 462,
        [anon_sym_COMMA] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [732] = {
        [aux_sym__call_arguments_repeat1] = 464,
        [anon_sym_do] = 464,
        [anon_sym_COMMA] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [733] = {
        [sym_identifier] = 1680,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [734] = {
        [sym__argument] = 1682,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1684,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [735] = {
        [aux_sym__call_arguments_repeat1] = 1686,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1688,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [736] = {
        [aux_sym__call_arguments_repeat1] = 628,
        [anon_sym_do] = 628,
        [anon_sym_COMMA] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [737] = {
        [anon_sym_RBRACK] = 1690,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [738] = {
        [aux_sym__call_arguments_repeat1] = 650,
        [anon_sym_do] = 650,
        [anon_sym_COMMA] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [739] = {
        [aux_sym__call_arguments_repeat1] = 658,
        [anon_sym_do] = 658,
        [anon_sym_COMMA] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [740] = {
        [aux_sym__call_arguments_repeat1] = 660,
        [anon_sym_do] = 660,
        [anon_sym_COMMA] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [741] = {
        [anon_sym_do] = 1692,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [742] = {
        [sym__argument] = 1694,
        [sym__primary] = 196,
        [sym_scope_resolution_expression] = 198,
        [sym_subscript_expression] = 198,
        [sym__variable] = 198,
        [anon_sym_LPAREN] = 202,
        [anon_sym_COLON_COLON] = 204,
        [anon_sym_nil] = 208,
        [anon_sym_self] = 208,
        [sym_identifier] = 208,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [743] = {
        [aux_sym__call_arguments_repeat1] = 1696,
        [anon_sym_do] = 654,
        [anon_sym_COMMA] = 218,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [744] = {
        [anon_sym_do] = 656,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [745] = {
        [sym__terminator] = 1698,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [746] = {
        [sym__statement] = 1700,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1702,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [747] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1704,
        [anon_sym_end] = 1706,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [748] = {
        [sym__terminator] = 338,
        [aux_sym_program_repeat1] = 338,
        [ts_builtin_sym_end] = 338,
        [anon_sym_if] = 338,
        [anon_sym_while] = 338,
        [anon_sym_unless] = 338,
        [anon_sym_until] = 338,
        [sym_comment] = 48,
        [sym__line_break] = 338,
        [anon_sym_SEMI] = 338,
    },
    [749] = {
        [anon_sym_end] = 1708,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [750] = {
        [sym__terminator] = 380,
        [aux_sym_program_repeat1] = 380,
        [ts_builtin_sym_end] = 380,
        [anon_sym_if] = 380,
        [anon_sym_while] = 380,
        [anon_sym_unless] = 380,
        [anon_sym_until] = 380,
        [sym_comment] = 48,
        [sym__line_break] = 380,
        [anon_sym_SEMI] = 380,
    },
    [751] = {
        [sym__terminator] = 386,
        [aux_sym_program_repeat1] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_if] = 386,
        [anon_sym_while] = 386,
        [anon_sym_unless] = 386,
        [anon_sym_until] = 386,
        [sym_comment] = 48,
        [sym__line_break] = 386,
        [anon_sym_SEMI] = 386,
    },
    [752] = {
        [sym__terminator] = 230,
        [aux_sym_program_repeat1] = 230,
        [ts_builtin_sym_end] = 230,
        [anon_sym_if] = 230,
        [anon_sym_while] = 230,
        [anon_sym_unless] = 230,
        [anon_sym_until] = 230,
        [anon_sym_COLON_COLON] = 230,
        [anon_sym_LBRACK] = 230,
        [sym_comment] = 48,
        [sym__line_break] = 230,
        [anon_sym_SEMI] = 230,
    },
    [753] = {
        [sym__terminator] = 1710,
        [anon_sym_LT] = 1712,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [754] = {
        [sym__statement] = 1714,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1716,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [755] = {
        [sym_identifier] = 1718,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [756] = {
        [sym__terminator] = 1720,
        [aux_sym_class_declaration_repeat1] = 1722,
        [anon_sym_COLON_COLON] = 408,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [757] = {
        [sym__statement] = 1724,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1726,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [758] = {
        [sym__terminator] = 1728,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [759] = {
        [sym__statement] = 1730,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1732,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [760] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1734,
        [anon_sym_end] = 1736,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [761] = {
        [sym__terminator] = 432,
        [aux_sym_program_repeat1] = 432,
        [ts_builtin_sym_end] = 432,
        [anon_sym_if] = 432,
        [anon_sym_while] = 432,
        [anon_sym_unless] = 432,
        [anon_sym_until] = 432,
        [sym_comment] = 48,
        [sym__line_break] = 432,
        [anon_sym_SEMI] = 432,
    },
    [762] = {
        [anon_sym_end] = 1738,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [763] = {
        [sym__terminator] = 436,
        [aux_sym_program_repeat1] = 436,
        [ts_builtin_sym_end] = 436,
        [anon_sym_if] = 436,
        [anon_sym_while] = 436,
        [anon_sym_unless] = 436,
        [anon_sym_until] = 436,
        [sym_comment] = 48,
        [sym__line_break] = 436,
        [anon_sym_SEMI] = 436,
    },
    [764] = {
        [sym__terminator] = 438,
        [aux_sym_program_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_if] = 438,
        [anon_sym_while] = 438,
        [anon_sym_unless] = 438,
        [anon_sym_until] = 438,
        [sym_comment] = 48,
        [sym__line_break] = 438,
        [anon_sym_SEMI] = 438,
    },
    [765] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1740,
        [anon_sym_end] = 1732,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [766] = {
        [sym__terminator] = 442,
        [aux_sym_program_repeat1] = 442,
        [ts_builtin_sym_end] = 442,
        [anon_sym_if] = 442,
        [anon_sym_while] = 442,
        [anon_sym_unless] = 442,
        [anon_sym_until] = 442,
        [sym_comment] = 48,
        [sym__line_break] = 442,
        [anon_sym_SEMI] = 442,
    },
    [767] = {
        [anon_sym_end] = 1736,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [768] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1742,
        [anon_sym_end] = 1744,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [769] = {
        [sym__terminator] = 448,
        [aux_sym_program_repeat1] = 448,
        [ts_builtin_sym_end] = 448,
        [anon_sym_if] = 448,
        [anon_sym_while] = 448,
        [anon_sym_unless] = 448,
        [anon_sym_until] = 448,
        [sym_comment] = 48,
        [sym__line_break] = 448,
        [anon_sym_SEMI] = 448,
    },
    [770] = {
        [anon_sym_end] = 1726,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [771] = {
        [sym__terminator] = 450,
        [aux_sym_program_repeat1] = 450,
        [ts_builtin_sym_end] = 450,
        [anon_sym_if] = 450,
        [anon_sym_while] = 450,
        [anon_sym_unless] = 450,
        [anon_sym_until] = 450,
        [sym_comment] = 48,
        [sym__line_break] = 450,
        [anon_sym_SEMI] = 450,
    },
    [772] = {
        [sym__terminator] = 232,
        [aux_sym_program_repeat1] = 1746,
        [anon_sym_if] = 236,
        [anon_sym_while] = 236,
        [anon_sym_unless] = 236,
        [anon_sym_until] = 236,
        [anon_sym_RPAREN] = 1748,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [773] = {
        [sym__terminator] = 266,
        [aux_sym_program_repeat1] = 266,
        [ts_builtin_sym_end] = 266,
        [anon_sym_if] = 266,
        [anon_sym_while] = 266,
        [anon_sym_unless] = 266,
        [anon_sym_until] = 266,
        [anon_sym_COLON_COLON] = 266,
        [anon_sym_LBRACK] = 266,
        [sym_comment] = 48,
        [sym__line_break] = 266,
        [anon_sym_SEMI] = 266,
    },
    [774] = {
        [anon_sym_RPAREN] = 1750,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [775] = {
        [sym__terminator] = 462,
        [aux_sym_program_repeat1] = 462,
        [ts_builtin_sym_end] = 462,
        [anon_sym_if] = 462,
        [anon_sym_while] = 462,
        [anon_sym_unless] = 462,
        [anon_sym_until] = 462,
        [anon_sym_COLON_COLON] = 462,
        [anon_sym_LBRACK] = 462,
        [sym_comment] = 48,
        [sym__line_break] = 462,
        [anon_sym_SEMI] = 462,
    },
    [776] = {
        [sym__terminator] = 464,
        [aux_sym_program_repeat1] = 464,
        [ts_builtin_sym_end] = 464,
        [anon_sym_if] = 464,
        [anon_sym_while] = 464,
        [anon_sym_unless] = 464,
        [anon_sym_until] = 464,
        [anon_sym_COLON_COLON] = 464,
        [anon_sym_LBRACK] = 464,
        [sym_comment] = 48,
        [sym__line_break] = 464,
        [anon_sym_SEMI] = 464,
    },
    [777] = {
        [sym_argument_list] = 1752,
        [sym__terminator] = 1754,
        [anon_sym_LPAREN] = 1756,
        [anon_sym_STAR] = 474,
        [anon_sym_AMP] = 474,
        [sym_identifier] = 476,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [778] = {
        [sym__terminator] = 1758,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [779] = {
        [sym__statement] = 1760,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1762,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [780] = {
        [sym_argument_list] = 1764,
        [anon_sym_RPAREN] = 1758,
        [anon_sym_STAR] = 488,
        [anon_sym_AMP] = 488,
        [sym_identifier] = 490,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [781] = {
        [anon_sym_RPAREN] = 1766,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [782] = {
        [sym__statement] = 1768,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1770,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [783] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1772,
        [anon_sym_end] = 1774,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [784] = {
        [sym__terminator] = 550,
        [aux_sym_program_repeat1] = 550,
        [ts_builtin_sym_end] = 550,
        [anon_sym_if] = 550,
        [anon_sym_while] = 550,
        [anon_sym_unless] = 550,
        [anon_sym_until] = 550,
        [sym_comment] = 48,
        [sym__line_break] = 550,
        [anon_sym_SEMI] = 550,
    },
    [785] = {
        [anon_sym_end] = 1776,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [786] = {
        [sym__terminator] = 554,
        [aux_sym_program_repeat1] = 554,
        [ts_builtin_sym_end] = 554,
        [anon_sym_if] = 554,
        [anon_sym_while] = 554,
        [anon_sym_unless] = 554,
        [anon_sym_until] = 554,
        [sym_comment] = 48,
        [sym__line_break] = 554,
        [anon_sym_SEMI] = 554,
    },
    [787] = {
        [sym__terminator] = 556,
        [aux_sym_program_repeat1] = 556,
        [ts_builtin_sym_end] = 556,
        [anon_sym_if] = 556,
        [anon_sym_while] = 556,
        [anon_sym_unless] = 556,
        [anon_sym_until] = 556,
        [sym_comment] = 48,
        [sym__line_break] = 556,
        [anon_sym_SEMI] = 556,
    },
    [788] = {
        [sym__statement] = 1778,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1774,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [789] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1780,
        [anon_sym_end] = 1776,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [790] = {
        [anon_sym_end] = 1782,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [791] = {
        [sym__terminator] = 564,
        [aux_sym_program_repeat1] = 564,
        [ts_builtin_sym_end] = 564,
        [anon_sym_if] = 564,
        [anon_sym_while] = 564,
        [anon_sym_unless] = 564,
        [anon_sym_until] = 564,
        [sym_comment] = 48,
        [sym__line_break] = 564,
        [anon_sym_SEMI] = 564,
    },
    [792] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1784,
        [anon_sym_end] = 1770,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [793] = {
        [sym__terminator] = 568,
        [aux_sym_program_repeat1] = 568,
        [ts_builtin_sym_end] = 568,
        [anon_sym_if] = 568,
        [anon_sym_while] = 568,
        [anon_sym_unless] = 568,
        [anon_sym_until] = 568,
        [sym_comment] = 48,
        [sym__line_break] = 568,
        [anon_sym_SEMI] = 568,
    },
    [794] = {
        [anon_sym_end] = 1774,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [795] = {
        [sym__statement_block] = 1786,
        [sym__do_block] = 1788,
        [sym__terminator] = 1790,
        [anon_sym_do] = 1792,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [796] = {
        [sym__terminator] = 664,
        [aux_sym_program_repeat1] = 664,
        [ts_builtin_sym_end] = 664,
        [anon_sym_if] = 664,
        [anon_sym_while] = 664,
        [anon_sym_unless] = 664,
        [anon_sym_until] = 664,
        [sym_comment] = 48,
        [sym__line_break] = 664,
        [anon_sym_SEMI] = 664,
    },
    [797] = {
        [sym__terminator] = 666,
        [aux_sym_program_repeat1] = 666,
        [ts_builtin_sym_end] = 666,
        [anon_sym_if] = 666,
        [anon_sym_while] = 666,
        [anon_sym_unless] = 666,
        [anon_sym_until] = 666,
        [sym_comment] = 48,
        [sym__line_break] = 666,
        [anon_sym_SEMI] = 666,
    },
    [798] = {
        [sym__statement] = 1794,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1796,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [799] = {
        [sym__statement] = 1798,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1800,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [800] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1802,
        [anon_sym_end] = 1804,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [801] = {
        [sym__terminator] = 680,
        [aux_sym_program_repeat1] = 680,
        [ts_builtin_sym_end] = 680,
        [anon_sym_if] = 680,
        [anon_sym_while] = 680,
        [anon_sym_unless] = 680,
        [anon_sym_until] = 680,
        [sym_comment] = 48,
        [sym__line_break] = 680,
        [anon_sym_SEMI] = 680,
    },
    [802] = {
        [anon_sym_end] = 1806,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [803] = {
        [sym__terminator] = 684,
        [aux_sym_program_repeat1] = 684,
        [ts_builtin_sym_end] = 684,
        [anon_sym_if] = 684,
        [anon_sym_while] = 684,
        [anon_sym_unless] = 684,
        [anon_sym_until] = 684,
        [sym_comment] = 48,
        [sym__line_break] = 684,
        [anon_sym_SEMI] = 684,
    },
    [804] = {
        [sym__terminator] = 686,
        [aux_sym_program_repeat1] = 686,
        [ts_builtin_sym_end] = 686,
        [anon_sym_if] = 686,
        [anon_sym_while] = 686,
        [anon_sym_unless] = 686,
        [anon_sym_until] = 686,
        [sym_comment] = 48,
        [sym__line_break] = 686,
        [anon_sym_SEMI] = 686,
    },
    [805] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1808,
        [anon_sym_end] = 1810,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [806] = {
        [sym__terminator] = 692,
        [aux_sym_program_repeat1] = 692,
        [ts_builtin_sym_end] = 692,
        [anon_sym_if] = 692,
        [anon_sym_while] = 692,
        [anon_sym_unless] = 692,
        [anon_sym_until] = 692,
        [sym_comment] = 48,
        [sym__line_break] = 692,
        [anon_sym_SEMI] = 692,
    },
    [807] = {
        [anon_sym_end] = 1812,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [808] = {
        [sym__terminator] = 696,
        [aux_sym_program_repeat1] = 696,
        [ts_builtin_sym_end] = 696,
        [anon_sym_if] = 696,
        [anon_sym_while] = 696,
        [anon_sym_unless] = 696,
        [anon_sym_until] = 696,
        [sym_comment] = 48,
        [sym__line_break] = 696,
        [anon_sym_SEMI] = 696,
    },
    [809] = {
        [sym__terminator] = 698,
        [aux_sym_program_repeat1] = 698,
        [ts_builtin_sym_end] = 698,
        [anon_sym_if] = 698,
        [anon_sym_while] = 698,
        [anon_sym_unless] = 698,
        [anon_sym_until] = 698,
        [sym_comment] = 48,
        [sym__line_break] = 698,
        [anon_sym_SEMI] = 698,
    },
    [810] = {
        [sym_then_block] = 1814,
        [sym__then_else_block] = 1816,
        [sym__terminator] = 704,
        [anon_sym_then] = 704,
        [sym_comment] = 48,
        [sym__line_break] = 706,
        [anon_sym_SEMI] = 708,
    },
    [811] = {
        [anon_sym_end] = 1818,
        [anon_sym_else] = 1820,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [812] = {
        [sym__terminator] = 742,
        [aux_sym_program_repeat1] = 742,
        [ts_builtin_sym_end] = 742,
        [anon_sym_if] = 742,
        [anon_sym_while] = 742,
        [anon_sym_unless] = 742,
        [anon_sym_until] = 742,
        [sym_comment] = 48,
        [sym__line_break] = 742,
        [anon_sym_SEMI] = 742,
    },
    [813] = {
        [sym__terminator] = 948,
        [aux_sym_program_repeat1] = 948,
        [ts_builtin_sym_end] = 948,
        [anon_sym_if] = 948,
        [anon_sym_while] = 948,
        [anon_sym_unless] = 948,
        [anon_sym_until] = 948,
        [sym_comment] = 48,
        [sym__line_break] = 948,
        [anon_sym_SEMI] = 948,
    },
    [814] = {
        [sym__statement] = 1822,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1824,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [815] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1826,
        [anon_sym_end] = 1828,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [816] = {
        [sym__terminator] = 958,
        [aux_sym_program_repeat1] = 958,
        [ts_builtin_sym_end] = 958,
        [anon_sym_if] = 958,
        [anon_sym_while] = 958,
        [anon_sym_unless] = 958,
        [anon_sym_until] = 958,
        [sym_comment] = 48,
        [sym__line_break] = 958,
        [anon_sym_SEMI] = 958,
    },
    [817] = {
        [anon_sym_end] = 1830,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [818] = {
        [sym__terminator] = 962,
        [aux_sym_program_repeat1] = 962,
        [ts_builtin_sym_end] = 962,
        [anon_sym_if] = 962,
        [anon_sym_while] = 962,
        [anon_sym_unless] = 962,
        [anon_sym_until] = 962,
        [sym_comment] = 48,
        [sym__line_break] = 962,
        [anon_sym_SEMI] = 962,
    },
    [819] = {
        [sym__terminator] = 964,
        [aux_sym_program_repeat1] = 964,
        [ts_builtin_sym_end] = 964,
        [anon_sym_if] = 964,
        [anon_sym_while] = 964,
        [anon_sym_unless] = 964,
        [anon_sym_until] = 964,
        [sym_comment] = 48,
        [sym__line_break] = 964,
        [anon_sym_SEMI] = 964,
    },
    [820] = {
        [sym__statement_block] = 1832,
        [sym__do_block] = 1788,
        [sym__terminator] = 1790,
        [anon_sym_do] = 1792,
        [sym_comment] = 48,
        [sym__line_break] = 276,
        [anon_sym_SEMI] = 278,
    },
    [821] = {
        [sym__terminator] = 968,
        [aux_sym_program_repeat1] = 968,
        [ts_builtin_sym_end] = 968,
        [anon_sym_if] = 968,
        [anon_sym_while] = 968,
        [anon_sym_unless] = 968,
        [anon_sym_until] = 968,
        [sym_comment] = 48,
        [sym__line_break] = 968,
        [anon_sym_SEMI] = 968,
    },
    [822] = {
        [sym_then_block] = 1834,
        [sym__then_elsif_else_block] = 1836,
        [sym__terminator] = 974,
        [anon_sym_then] = 974,
        [sym_comment] = 48,
        [sym__line_break] = 976,
        [anon_sym_SEMI] = 978,
    },
    [823] = {
        [aux_sym__then_elsif_else_block_repeat1] = 1838,
        [anon_sym_end] = 1840,
        [anon_sym_else] = 1842,
        [anon_sym_elsif] = 1014,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [824] = {
        [sym__terminator] = 1016,
        [aux_sym_program_repeat1] = 1016,
        [ts_builtin_sym_end] = 1016,
        [anon_sym_if] = 1016,
        [anon_sym_while] = 1016,
        [anon_sym_unless] = 1016,
        [anon_sym_until] = 1016,
        [sym_comment] = 48,
        [sym__line_break] = 1016,
        [anon_sym_SEMI] = 1016,
    },
    [825] = {
        [anon_sym_end] = 1844,
        [anon_sym_else] = 1846,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [826] = {
        [sym__terminator] = 1244,
        [aux_sym_program_repeat1] = 1244,
        [ts_builtin_sym_end] = 1244,
        [anon_sym_if] = 1244,
        [anon_sym_while] = 1244,
        [anon_sym_unless] = 1244,
        [anon_sym_until] = 1244,
        [sym_comment] = 48,
        [sym__line_break] = 1244,
        [anon_sym_SEMI] = 1244,
    },
    [827] = {
        [sym__statement] = 1848,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1844,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [828] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1850,
        [anon_sym_end] = 1852,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [829] = {
        [sym__terminator] = 1322,
        [aux_sym_program_repeat1] = 1322,
        [ts_builtin_sym_end] = 1322,
        [anon_sym_if] = 1322,
        [anon_sym_while] = 1322,
        [anon_sym_unless] = 1322,
        [anon_sym_until] = 1322,
        [sym_comment] = 48,
        [sym__line_break] = 1322,
        [anon_sym_SEMI] = 1322,
    },
    [830] = {
        [anon_sym_end] = 1854,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [831] = {
        [sym__terminator] = 1326,
        [aux_sym_program_repeat1] = 1326,
        [ts_builtin_sym_end] = 1326,
        [anon_sym_if] = 1326,
        [anon_sym_while] = 1326,
        [anon_sym_unless] = 1326,
        [anon_sym_until] = 1326,
        [sym_comment] = 48,
        [sym__line_break] = 1326,
        [anon_sym_SEMI] = 1326,
    },
    [832] = {
        [sym__terminator] = 1328,
        [aux_sym_program_repeat1] = 1328,
        [ts_builtin_sym_end] = 1328,
        [anon_sym_if] = 1328,
        [anon_sym_while] = 1328,
        [anon_sym_unless] = 1328,
        [anon_sym_until] = 1328,
        [sym_comment] = 48,
        [sym__line_break] = 1328,
        [anon_sym_SEMI] = 1328,
    },
    [833] = {
        [sym__statement] = 1856,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1852,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [834] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1858,
        [anon_sym_end] = 1854,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [835] = {
        [anon_sym_end] = 1860,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [836] = {
        [sym__terminator] = 1336,
        [aux_sym_program_repeat1] = 1336,
        [ts_builtin_sym_end] = 1336,
        [anon_sym_if] = 1336,
        [anon_sym_while] = 1336,
        [anon_sym_unless] = 1336,
        [anon_sym_until] = 1336,
        [sym_comment] = 48,
        [sym__line_break] = 1336,
        [anon_sym_SEMI] = 1336,
    },
    [837] = {
        [sym__function_name] = 1862,
        [anon_sym_PIPE] = 84,
        [anon_sym_STAR] = 84,
        [anon_sym_AMP] = 84,
        [anon_sym_LT] = 84,
        [sym_identifier] = 84,
        [sym_comment] = 48,
        [anon_sym_DOT_DOT] = 84,
        [anon_sym_CARET] = 84,
        [anon_sym_LT_EQ_GT] = 84,
        [anon_sym_EQ_EQ] = 84,
        [anon_sym_EQ_EQ_EQ] = 84,
        [anon_sym_EQ_TILDE] = 84,
        [anon_sym_GT] = 84,
        [anon_sym_GT_EQ] = 84,
        [anon_sym_LT_EQ] = 84,
        [anon_sym_PLUS] = 84,
        [anon_sym_DASH] = 84,
        [anon_sym_SLASH] = 84,
        [anon_sym_PERCENT] = 84,
        [anon_sym_STAR_STAR] = 84,
        [anon_sym_LT_LT] = 84,
        [anon_sym_GT_GT] = 84,
        [anon_sym_TILDE] = 84,
        [anon_sym_PLUS_AT] = 84,
        [anon_sym_DASH_AT] = 84,
        [anon_sym_LBRACK_RBRACK] = 84,
        [anon_sym_LBRACK_RBRACK_EQ] = 84,
        [sym__line_break] = 48,
    },
    [838] = {
        [sym__terminator] = 384,
        [aux_sym_program_repeat1] = 384,
        [ts_builtin_sym_end] = 384,
        [anon_sym_if] = 384,
        [anon_sym_while] = 384,
        [anon_sym_unless] = 384,
        [anon_sym_until] = 384,
        [sym_comment] = 48,
        [sym__line_break] = 384,
        [anon_sym_SEMI] = 384,
    },
    [839] = {
        [sym__terminator] = 478,
        [aux_sym_program_repeat1] = 478,
        [ts_builtin_sym_end] = 478,
        [anon_sym_if] = 478,
        [anon_sym_while] = 478,
        [anon_sym_unless] = 478,
        [anon_sym_until] = 478,
        [sym_comment] = 48,
        [sym__line_break] = 478,
        [anon_sym_SEMI] = 478,
    },
    [840] = {
        [sym__terminator] = 1338,
        [aux_sym_program_repeat1] = 1338,
        [ts_builtin_sym_end] = 1338,
        [anon_sym_if] = 1338,
        [anon_sym_while] = 1338,
        [anon_sym_unless] = 1338,
        [anon_sym_until] = 1338,
        [sym_comment] = 48,
        [sym__line_break] = 1338,
        [anon_sym_SEMI] = 1338,
    },
    [841] = {
        [sym_identifier] = 1864,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [842] = {
        [sym__argument] = 1866,
        [sym__primary] = 600,
        [sym_scope_resolution_expression] = 602,
        [sym_subscript_expression] = 602,
        [sym__variable] = 602,
        [anon_sym_LPAREN] = 604,
        [anon_sym_COLON_COLON] = 606,
        [anon_sym_RBRACK] = 1868,
        [anon_sym_nil] = 610,
        [anon_sym_self] = 610,
        [sym_identifier] = 610,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [843] = {
        [aux_sym__call_arguments_repeat1] = 1870,
        [anon_sym_COMMA] = 614,
        [anon_sym_RBRACK] = 1872,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [844] = {
        [sym__terminator] = 628,
        [aux_sym_program_repeat1] = 628,
        [ts_builtin_sym_end] = 628,
        [anon_sym_if] = 628,
        [anon_sym_while] = 628,
        [anon_sym_unless] = 628,
        [anon_sym_until] = 628,
        [anon_sym_COLON_COLON] = 628,
        [anon_sym_LBRACK] = 628,
        [sym_comment] = 48,
        [sym__line_break] = 628,
        [anon_sym_SEMI] = 628,
    },
    [845] = {
        [anon_sym_RBRACK] = 1874,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [846] = {
        [sym__terminator] = 650,
        [aux_sym_program_repeat1] = 650,
        [ts_builtin_sym_end] = 650,
        [anon_sym_if] = 650,
        [anon_sym_while] = 650,
        [anon_sym_unless] = 650,
        [anon_sym_until] = 650,
        [anon_sym_COLON_COLON] = 650,
        [anon_sym_LBRACK] = 650,
        [sym_comment] = 48,
        [sym__line_break] = 650,
        [anon_sym_SEMI] = 650,
    },
    [847] = {
        [sym__terminator] = 658,
        [aux_sym_program_repeat1] = 658,
        [ts_builtin_sym_end] = 658,
        [anon_sym_if] = 658,
        [anon_sym_while] = 658,
        [anon_sym_unless] = 658,
        [anon_sym_until] = 658,
        [anon_sym_COLON_COLON] = 658,
        [anon_sym_LBRACK] = 658,
        [sym_comment] = 48,
        [sym__line_break] = 658,
        [anon_sym_SEMI] = 658,
    },
    [848] = {
        [sym__terminator] = 660,
        [aux_sym_program_repeat1] = 660,
        [ts_builtin_sym_end] = 660,
        [anon_sym_if] = 660,
        [anon_sym_while] = 660,
        [anon_sym_unless] = 660,
        [anon_sym_until] = 660,
        [anon_sym_COLON_COLON] = 660,
        [anon_sym_LBRACK] = 660,
        [sym_comment] = 48,
        [sym__line_break] = 660,
        [anon_sym_SEMI] = 660,
    },
    [849] = {
        [sym__statement] = 1876,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_PIPE] = 1878,
        [anon_sym_end] = 1862,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [850] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1880,
        [anon_sym_end] = 1882,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [851] = {
        [sym__statement] = 1884,
        [sym__declaration] = 282,
        [sym_method_declaration] = 284,
        [sym_class_declaration] = 284,
        [sym_module_declaration] = 284,
        [sym_while_statement] = 282,
        [sym_until_statement] = 282,
        [sym_if_statement] = 282,
        [sym_unless_statement] = 282,
        [sym__call] = 286,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 282,
        [sym__argument] = 288,
        [sym__primary] = 290,
        [sym_scope_resolution_expression] = 292,
        [sym_subscript_expression] = 292,
        [sym__variable] = 292,
        [anon_sym_end] = 1882,
        [anon_sym_undef] = 296,
        [anon_sym_alias] = 298,
        [anon_sym_if] = 300,
        [anon_sym_while] = 302,
        [anon_sym_unless] = 304,
        [anon_sym_until] = 306,
        [anon_sym_def] = 308,
        [anon_sym_LPAREN] = 310,
        [anon_sym_class] = 312,
        [anon_sym_COLON_COLON] = 314,
        [anon_sym_module] = 316,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 318,
        [anon_sym_self] = 318,
        [sym_identifier] = 318,
        [sym_comment] = 48,
        [sym_symbol] = 288,
        [sym__line_break] = 48,
    },
    [852] = {
        [sym__terminator] = 324,
        [aux_sym_program_repeat1] = 1886,
        [anon_sym_end] = 1888,
        [anon_sym_if] = 330,
        [anon_sym_while] = 330,
        [anon_sym_unless] = 330,
        [anon_sym_until] = 330,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [853] = {
        [sym__terminator] = 1366,
        [aux_sym_program_repeat1] = 1366,
        [ts_builtin_sym_end] = 1366,
        [anon_sym_if] = 1366,
        [anon_sym_while] = 1366,
        [anon_sym_unless] = 1366,
        [anon_sym_until] = 1366,
        [sym_comment] = 48,
        [sym__line_break] = 1366,
        [anon_sym_SEMI] = 1366,
    },
    [854] = {
        [anon_sym_end] = 1890,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [855] = {
        [sym__terminator] = 1370,
        [aux_sym_program_repeat1] = 1370,
        [ts_builtin_sym_end] = 1370,
        [anon_sym_if] = 1370,
        [anon_sym_while] = 1370,
        [anon_sym_unless] = 1370,
        [anon_sym_until] = 1370,
        [sym_comment] = 48,
        [sym__line_break] = 1370,
        [anon_sym_SEMI] = 1370,
    },
    [856] = {
        [sym__terminator] = 1372,
        [aux_sym_program_repeat1] = 1372,
        [ts_builtin_sym_end] = 1372,
        [anon_sym_if] = 1372,
        [anon_sym_while] = 1372,
        [anon_sym_unless] = 1372,
        [anon_sym_until] = 1372,
        [sym_comment] = 48,
        [sym__line_break] = 1372,
        [anon_sym_SEMI] = 1372,
    },
    [857] = {
        [anon_sym_end] = 1888,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [858] = {
        [sym__statement] = 1892,
        [sym__declaration] = 6,
        [sym_method_declaration] = 8,
        [sym_class_declaration] = 8,
        [sym_module_declaration] = 8,
        [sym_while_statement] = 6,
        [sym_until_statement] = 6,
        [sym_if_statement] = 6,
        [sym_unless_statement] = 6,
        [sym__call] = 10,
        [sym__command] = 12,
        [sym__function_call] = 12,
        [sym__expression] = 6,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_undef] = 22,
        [anon_sym_alias] = 24,
        [anon_sym_if] = 26,
        [anon_sym_while] = 28,
        [anon_sym_unless] = 30,
        [anon_sym_until] = 32,
        [anon_sym_def] = 34,
        [anon_sym_LPAREN] = 36,
        [anon_sym_class] = 38,
        [anon_sym_COLON_COLON] = 40,
        [anon_sym_module] = 42,
        [anon_sym_super] = 44,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [859] = {
        [ts_builtin_sym_end] = 1894,
        [sym_comment] = 48,
        [sym__line_break] = 48,
    },
    [860] = {
        [sym__expression] = 1862,
        [sym__argument] = 14,
        [sym__primary] = 16,
        [sym_scope_resolution_expression] = 18,
        [sym_subscript_expression] = 18,
        [sym__variable] = 18,
        [anon_sym_LPAREN] = 36,
        [anon_sym_COLON_COLON] = 40,
        [anon_sym_nil] = 46,
        [anon_sym_self] = 46,
        [sym_identifier] = 46,
        [sym_comment] = 48,
        [sym_symbol] = 14,
        [sym__line_break] = 48,
    },
    [861] = {
        [sym__terminator] = 52,
        [aux_sym_program_repeat1] = 1896,
        [ts_builtin_sym_end] = 390,
        [anon_sym_if] = 58,
        [anon_sym_while] = 58,
        [anon_sym_unless] = 58,
        [anon_sym_until] = 58,
        [sym_comment] = 48,
        [sym__line_break] = 60,
        [anon_sym_SEMI] = 62,
    },
    [862] = {
        [ts_builtin_sym_end] = 392,
        [sym_comment] = 48,
        [sym__line_break] = 48,
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
    [20] = {.count = 1}, REDUCE(sym_program, 0, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, SHIFT(11, 0),
    [26] = {.count = 1}, SHIFT(12, 0),
    [28] = {.count = 1}, SHIFT(13, 0),
    [30] = {.count = 1}, SHIFT(14, 0),
    [32] = {.count = 1}, SHIFT(15, 0),
    [34] = {.count = 1}, SHIFT(16, 0),
    [36] = {.count = 1}, SHIFT(17, 0),
    [38] = {.count = 1}, SHIFT(18, 0),
    [40] = {.count = 1}, SHIFT(19, 0),
    [42] = {.count = 1}, SHIFT(20, 0),
    [44] = {.count = 1}, SHIFT(21, 0),
    [46] = {.count = 1}, SHIFT(22, 0),
    [48] = {.count = 1}, SHIFT_EXTRA(),
    [50] = {.count = 1}, ACCEPT_INPUT(),
    [52] = {.count = 1}, SHIFT(858, 0),
    [54] = {.count = 1}, SHIFT(859, 0),
    [56] = {.count = 1}, REDUCE(sym_program, 1, 0),
    [58] = {.count = 1}, SHIFT(860, 0),
    [60] = {.count = 1}, SHIFT(85, 0),
    [62] = {.count = 1}, SHIFT(86, 0),
    [64] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [66] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [68] = {.count = 1}, SHIFT(849, 0),
    [70] = {.count = 1}, REDUCE(sym__call, 1, 0),
    [72] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [74] = {.count = 1}, REDUCE(sym__argument, 1, 0),
    [76] = {.count = 1}, SHIFT(841, 0),
    [78] = {.count = 1}, SHIFT(842, 0),
    [80] = {.count = 1}, REDUCE(sym__primary, 1, 0),
    [82] = {.count = 1}, SHIFT(840, 0),
    [84] = {.count = 1}, SHIFT(839, 0),
    [86] = {.count = 1}, SHIFT(837, 0),
    [88] = {.count = 1}, SHIFT(519, 0),
    [90] = {.count = 1}, SHIFT(822, 0),
    [92] = {.count = 1}, SHIFT(347, 0),
    [94] = {.count = 1}, SHIFT(348, 0),
    [96] = {.count = 1}, SHIFT(349, 0),
    [98] = {.count = 1}, SHIFT(350, 0),
    [100] = {.count = 1}, SHIFT(351, 0),
    [102] = {.count = 1}, SHIFT(352, 0),
    [104] = {.count = 1}, SHIFT(353, 0),
    [106] = {.count = 1}, SHIFT(820, 0),
    [108] = {.count = 1}, SHIFT(166, 0),
    [110] = {.count = 1}, SHIFT(167, 0),
    [112] = {.count = 1}, SHIFT(168, 0),
    [114] = {.count = 1}, SHIFT(169, 0),
    [116] = {.count = 1}, SHIFT(170, 0),
    [118] = {.count = 1}, SHIFT(171, 0),
    [120] = {.count = 1}, SHIFT(172, 0),
    [122] = {.count = 1}, SHIFT(810, 0),
    [124] = {.count = 1}, SHIFT(224, 0),
    [126] = {.count = 1}, SHIFT(225, 0),
    [128] = {.count = 1}, SHIFT(226, 0),
    [130] = {.count = 1}, SHIFT(227, 0),
    [132] = {.count = 1}, SHIFT(228, 0),
    [134] = {.count = 1}, SHIFT(229, 0),
    [136] = {.count = 1}, SHIFT(230, 0),
    [138] = {.count = 1}, SHIFT(795, 0),
    [140] = {.count = 1}, SHIFT(777, 0),
    [142] = {.count = 1}, SHIFT(125, 0),
    [144] = {.count = 1}, SHIFT(772, 0),
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
    [172] = {.count = 1}, SHIFT(47, 0),
    [174] = {.count = 1}, SHIFT(773, 0),
    [176] = {.count = 1}, SHIFT(49, 0),
    [178] = {.count = 1}, SHIFT(50, 0),
    [180] = {.count = 1}, SHIFT(51, 0),
    [182] = {.count = 1}, SHIFT(52, 0),
    [184] = {.count = 1}, SHIFT(753, 0),
    [186] = {.count = 1}, SHIFT(752, 0),
    [188] = {.count = 1}, SHIFT(745, 0),
    [190] = {.count = 1}, SHIFT(23, 0),
    [192] = {.count = 1}, SHIFT(24, 0),
    [194] = {.count = 1}, SHIFT(25, 0),
    [196] = {.count = 1}, SHIFT(26, 0),
    [198] = {.count = 1}, SHIFT(27, 0),
    [200] = {.count = 1}, REDUCE(sym__function_call, 1, 0),
    [202] = {.count = 1}, SHIFT(28, 0),
    [204] = {.count = 1}, SHIFT(29, 0),
    [206] = {.count = 1}, SHIFT(30, 0),
    [208] = {.count = 1}, SHIFT(31, 0),
    [210] = {.count = 1}, REDUCE(sym__variable, 1, 0),
    [212] = {.count = 1}, REDUCE(sym__command, 2, 0),
    [214] = {.count = 1}, REDUCE(sym__call_arguments, 1, 0),
    [216] = {.count = 1}, SHIFT(741, 0),
    [218] = {.count = 1}, SHIFT(742, 0),
    [220] = {.count = 1}, SHIFT(733, 0),
    [222] = {.count = 1}, SHIFT(734, 0),
    [224] = {.count = 1}, SHIFT(33, 0),
    [226] = {.count = 1}, SHIFT(48, 0),
    [228] = {.count = 1}, SHIFT(32, 0),
    [230] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 2, 0),
    [232] = {.count = 1}, SHIFT(116, 0),
    [234] = {.count = 1}, SHIFT(730, 0),
    [236] = {.count = 1}, SHIFT(118, 0),
    [238] = {.count = 1}, SHIFT(731, 0),
    [240] = {.count = 1}, SHIFT(721, 0),
    [242] = {.count = 1}, SHIFT(713, 0),
    [244] = {.count = 1}, SHIFT(714, 0),
    [246] = {.count = 1}, SHIFT(712, 0),
    [248] = {.count = 1}, SHIFT(711, 0),
    [250] = {.count = 1}, SHIFT(710, 0),
    [252] = {.count = 1}, SHIFT(695, 0),
    [254] = {.count = 1}, SHIFT(693, 0),
    [256] = {.count = 1}, SHIFT(683, 0),
    [258] = {.count = 1}, SHIFT(668, 0),
    [260] = {.count = 1}, SHIFT(650, 0),
    [262] = {.count = 1}, SHIFT(645, 0),
    [264] = {.count = 1}, SHIFT(646, 0),
    [266] = {.count = 1}, REDUCE(sym__primary, 2, 0),
    [268] = {.count = 1}, SHIFT(626, 0),
    [270] = {.count = 1}, SHIFT(625, 0),
    [272] = {.count = 1}, SHIFT(53, 0),
    [274] = {.count = 1}, SHIFT(54, 0),
    [276] = {.count = 1}, SHIFT(55, 0),
    [278] = {.count = 1}, SHIFT(56, 0),
    [280] = {.count = 1}, SHIFT(57, 0),
    [282] = {.count = 1}, SHIFT(58, 0),
    [284] = {.count = 1}, SHIFT(59, 0),
    [286] = {.count = 1}, SHIFT(60, 0),
    [288] = {.count = 1}, SHIFT(61, 0),
    [290] = {.count = 1}, SHIFT(62, 0),
    [292] = {.count = 1}, SHIFT(63, 0),
    [294] = {.count = 1}, SHIFT(64, 0),
    [296] = {.count = 1}, SHIFT(65, 0),
    [298] = {.count = 1}, SHIFT(66, 0),
    [300] = {.count = 1}, SHIFT(67, 0),
    [302] = {.count = 1}, SHIFT(68, 0),
    [304] = {.count = 1}, SHIFT(69, 0),
    [306] = {.count = 1}, SHIFT(70, 0),
    [308] = {.count = 1}, SHIFT(71, 0),
    [310] = {.count = 1}, SHIFT(72, 0),
    [312] = {.count = 1}, SHIFT(73, 0),
    [314] = {.count = 1}, SHIFT(74, 0),
    [316] = {.count = 1}, SHIFT(75, 0),
    [318] = {.count = 1}, SHIFT(76, 0),
    [320] = {.count = 1}, REDUCE(sym__terminator, 1, 0),
    [322] = {.count = 1}, REDUCE_EXTRA(sym__line_break),
    [324] = {.count = 1}, SHIFT(81, 0),
    [326] = {.count = 1}, SHIFT(622, 0),
    [328] = {.count = 1}, SHIFT(623, 0),
    [330] = {.count = 1}, SHIFT(84, 0),
    [332] = {.count = 1}, SHIFT(613, 0),
    [334] = {.count = 1}, SHIFT(605, 0),
    [336] = {.count = 1}, SHIFT(606, 0),
    [338] = {.count = 1}, REDUCE(sym_module_declaration, 4, 0),
    [340] = {.count = 1}, SHIFT(604, 0),
    [342] = {.count = 1}, SHIFT(603, 0),
    [344] = {.count = 1}, SHIFT(602, 0),
    [346] = {.count = 1}, SHIFT(587, 0),
    [348] = {.count = 1}, SHIFT(585, 0),
    [350] = {.count = 1}, SHIFT(223, 0),
    [352] = {.count = 1}, SHIFT(165, 0),
    [354] = {.count = 1}, SHIFT(124, 0),
    [356] = {.count = 1}, SHIFT(114, 0),
    [358] = {.count = 1}, SHIFT(115, 0),
    [360] = {.count = 1}, SHIFT(92, 0),
    [362] = {.count = 1}, SHIFT(91, 0),
    [364] = {.count = 1}, SHIFT(77, 0),
    [366] = {.count = 1}, SHIFT(78, 0),
    [368] = {.count = 1}, SHIFT(79, 0),
    [370] = {.count = 1}, SHIFT(80, 0),
    [372] = {.count = 1}, SHIFT(82, 0),
    [374] = {.count = 1}, SHIFT(83, 0),
    [376] = {.count = 1}, SHIFT(89, 0),
    [378] = {.count = 1}, SHIFT(88, 0),
    [380] = {.count = 1}, REDUCE(sym_module_declaration, 5, 0),
    [382] = {.count = 1}, SHIFT(87, 0),
    [384] = {.count = 1}, REDUCE(sym__statement, 3, 0),
    [386] = {.count = 1}, REDUCE(sym_module_declaration, 6, 0),
    [388] = {.count = 1}, SHIFT(90, 0),
    [390] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 2, 0),
    [392] = {.count = 1}, REDUCE(aux_sym_program_repeat1, 3, 0),
    [394] = {.count = 1}, SHIFT(93, 0),
    [396] = {.count = 1}, SHIFT(94, 0),
    [398] = {.count = 1}, SHIFT(110, 0),
    [400] = {.count = 1}, SHIFT(111, 0),
    [402] = {.count = 1}, SHIFT(95, 0),
    [404] = {.count = 1}, SHIFT(96, 0),
    [406] = {.count = 1}, SHIFT(97, 0),
    [408] = {.count = 1}, SHIFT(98, 0),
    [410] = {.count = 1}, SHIFT(107, 0),
    [412] = {.count = 1}, SHIFT(108, 0),
    [414] = {.count = 1}, SHIFT(101, 0),
    [416] = {.count = 1}, SHIFT(99, 0),
    [418] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 2, 0),
    [420] = {.count = 1}, SHIFT(100, 0),
    [422] = {.count = 1}, REDUCE(aux_sym_class_declaration_repeat1, 3, 0),
    [424] = {.count = 1}, SHIFT(102, 0),
    [426] = {.count = 1}, SHIFT(103, 0),
    [428] = {.count = 1}, SHIFT(104, 0),
    [430] = {.count = 1}, SHIFT(105, 0),
    [432] = {.count = 1}, REDUCE(sym_class_declaration, 7, 0),
    [434] = {.count = 1}, SHIFT(106, 0),
    [436] = {.count = 1}, REDUCE(sym_class_declaration, 8, 0),
    [438] = {.count = 1}, REDUCE(sym_class_declaration, 9, 0),
    [440] = {.count = 1}, SHIFT(109, 0),
    [442] = {.count = 1}, REDUCE(sym_class_declaration, 6, 0),
    [444] = {.count = 1}, SHIFT(112, 0),
    [446] = {.count = 1}, SHIFT(113, 0),
    [448] = {.count = 1}, REDUCE(sym_class_declaration, 4, 0),
    [450] = {.count = 1}, REDUCE(sym_class_declaration, 5, 0),
    [452] = {.count = 1}, SHIFT(117, 0),
    [454] = {.count = 1}, SHIFT(119, 0),
    [456] = {.count = 1}, SHIFT(122, 0),
    [458] = {.count = 1}, SHIFT(121, 0),
    [460] = {.count = 1}, SHIFT(120, 0),
    [462] = {.count = 1}, REDUCE(sym__primary, 3, 0),
    [464] = {.count = 1}, REDUCE(sym__primary, 4, 0),
    [466] = {.count = 1}, SHIFT(123, 0),
    [468] = {.count = 1}, SHIFT(126, 0),
    [470] = {.count = 1}, SHIFT(127, 0),
    [472] = {.count = 1}, SHIFT(128, 0),
    [474] = {.count = 1}, SHIFT(129, 0),
    [476] = {.count = 1}, SHIFT(130, 0),
    [478] = {.count = 1}, REDUCE(sym__function_name, 1, 0),
    [480] = {.count = 1}, SHIFT(141, 0),
    [482] = {.count = 1}, SHIFT(162, 0),
    [484] = {.count = 1}, SHIFT(163, 0),
    [486] = {.count = 1}, SHIFT(140, 0),
    [488] = {.count = 1}, SHIFT(142, 0),
    [490] = {.count = 1}, SHIFT(143, 0),
    [492] = {.count = 1}, SHIFT(138, 0),
    [494] = {.count = 1}, REDUCE(sym_argument_list, 1, 0),
    [496] = {.count = 1}, SHIFT(131, 0),
    [498] = {.count = 1}, SHIFT(132, 0),
    [500] = {.count = 1}, REDUCE(sym_argument_list, 2, 0),
    [502] = {.count = 1}, SHIFT(133, 0),
    [504] = {.count = 1}, SHIFT(134, 0),
    [506] = {.count = 1}, SHIFT(136, 0),
    [508] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 2, 0),
    [510] = {.count = 1}, SHIFT(135, 0),
    [512] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 3, 0),
    [514] = {.count = 1}, SHIFT(137, 0),
    [516] = {.count = 1}, REDUCE(aux_sym_argument_list_repeat1, 4, 0),
    [518] = {.count = 1}, SHIFT(139, 0),
    [520] = {.count = 1}, REDUCE(sym_argument_list, 3, 0),
    [522] = {.count = 1}, SHIFT(158, 0),
    [524] = {.count = 1}, SHIFT(153, 0),
    [526] = {.count = 1}, SHIFT(154, 0),
    [528] = {.count = 1}, SHIFT(151, 0),
    [530] = {.count = 1}, SHIFT(144, 0),
    [532] = {.count = 1}, SHIFT(145, 0),
    [534] = {.count = 1}, SHIFT(146, 0),
    [536] = {.count = 1}, SHIFT(147, 0),
    [538] = {.count = 1}, SHIFT(149, 0),
    [540] = {.count = 1}, SHIFT(148, 0),
    [542] = {.count = 1}, SHIFT(150, 0),
    [544] = {.count = 1}, SHIFT(152, 0),
    [546] = {.count = 1}, SHIFT(155, 0),
    [548] = {.count = 1}, SHIFT(156, 0),
    [550] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [552] = {.count = 1}, SHIFT(157, 0),
    [554] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [556] = {.count = 1}, REDUCE(sym_method_declaration, 7, 0),
    [558] = {.count = 1}, SHIFT(159, 0),
    [560] = {.count = 1}, SHIFT(160, 0),
    [562] = {.count = 1}, SHIFT(161, 0),
    [564] = {.count = 1}, REDUCE(sym_method_declaration, 8, 0),
    [566] = {.count = 1}, SHIFT(164, 0),
    [568] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [570] = {.count = 1}, SHIFT(209, 0),
    [572] = {.count = 1}, SHIFT(210, 0),
    [574] = {.count = 1}, SHIFT(211, 0),
    [576] = {.count = 1}, SHIFT(212, 0),
    [578] = {.count = 1}, REDUCE(sym_condition, 1, 0),
    [580] = {.count = 1}, SHIFT(179, 0),
    [582] = {.count = 1}, SHIFT(180, 0),
    [584] = {.count = 1}, SHIFT(174, 0),
    [586] = {.count = 1}, SHIFT(175, 0),
    [588] = {.count = 1}, SHIFT(173, 0),
    [590] = {.count = 1}, SHIFT(176, 0),
    [592] = {.count = 1}, SHIFT(177, 0),
    [594] = {.count = 1}, SHIFT(178, 0),
    [596] = {.count = 1}, SHIFT(208, 0),
    [598] = {.count = 1}, SHIFT(181, 0),
    [600] = {.count = 1}, SHIFT(182, 0),
    [602] = {.count = 1}, SHIFT(183, 0),
    [604] = {.count = 1}, SHIFT(184, 0),
    [606] = {.count = 1}, SHIFT(185, 0),
    [608] = {.count = 1}, SHIFT(186, 0),
    [610] = {.count = 1}, SHIFT(187, 0),
    [612] = {.count = 1}, SHIFT(205, 0),
    [614] = {.count = 1}, SHIFT(199, 0),
    [616] = {.count = 1}, SHIFT(206, 0),
    [618] = {.count = 1}, SHIFT(194, 0),
    [620] = {.count = 1}, SHIFT(195, 0),
    [622] = {.count = 1}, SHIFT(189, 0),
    [624] = {.count = 1}, SHIFT(190, 0),
    [626] = {.count = 1}, SHIFT(188, 0),
    [628] = {.count = 1}, REDUCE(sym_subscript_expression, 3, 0),
    [630] = {.count = 1}, SHIFT(191, 0),
    [632] = {.count = 1}, SHIFT(192, 0),
    [634] = {.count = 1}, SHIFT(193, 0),
    [636] = {.count = 1}, SHIFT(204, 0),
    [638] = {.count = 1}, SHIFT(196, 0),
    [640] = {.count = 1}, SHIFT(197, 0),
    [642] = {.count = 1}, SHIFT(198, 0),
    [644] = {.count = 1}, SHIFT(200, 0),
    [646] = {.count = 1}, SHIFT(203, 0),
    [648] = {.count = 1}, SHIFT(201, 0),
    [650] = {.count = 1}, REDUCE(sym_subscript_expression, 4, 0),
    [652] = {.count = 1}, SHIFT(202, 0),
    [654] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 2, 0),
    [656] = {.count = 1}, REDUCE(aux_sym__call_arguments_repeat1, 3, 0),
    [658] = {.count = 1}, REDUCE(sym_subscript_expression, 5, 0),
    [660] = {.count = 1}, REDUCE(sym_scope_resolution_expression, 3, 0),
    [662] = {.count = 1}, SHIFT(207, 0),
    [664] = {.count = 1}, REDUCE(sym_until_statement, 3, 0),
    [666] = {.count = 1}, REDUCE(sym__statement_block, 1, 0),
    [668] = {.count = 1}, SHIFT(218, 0),
    [670] = {.count = 1}, SHIFT(219, 0),
    [672] = {.count = 1}, SHIFT(213, 0),
    [674] = {.count = 1}, SHIFT(214, 0),
    [676] = {.count = 1}, SHIFT(215, 0),
    [678] = {.count = 1}, SHIFT(216, 0),
    [680] = {.count = 1}, REDUCE(sym__do_block, 2, 0),
    [682] = {.count = 1}, SHIFT(217, 0),
    [684] = {.count = 1}, REDUCE(sym__do_block, 3, 0),
    [686] = {.count = 1}, REDUCE(sym__do_block, 4, 0),
    [688] = {.count = 1}, SHIFT(220, 0),
    [690] = {.count = 1}, SHIFT(221, 0),
    [692] = {.count = 1}, REDUCE(sym__statement_block, 2, 0),
    [694] = {.count = 1}, SHIFT(222, 0),
    [696] = {.count = 1}, REDUCE(sym__statement_block, 3, 0),
    [698] = {.count = 1}, REDUCE(sym__statement_block, 4, 0),
    [700] = {.count = 1}, SHIFT(245, 0),
    [702] = {.count = 1}, SHIFT(246, 0),
    [704] = {.count = 1}, SHIFT(247, 0),
    [706] = {.count = 1}, SHIFT(248, 0),
    [708] = {.count = 1}, SHIFT(249, 0),
    [710] = {.count = 1}, SHIFT(237, 0),
    [712] = {.count = 1}, SHIFT(238, 0),
    [714] = {.count = 1}, SHIFT(232, 0),
    [716] = {.count = 1}, SHIFT(233, 0),
    [718] = {.count = 1}, SHIFT(231, 0),
    [720] = {.count = 1}, SHIFT(234, 0),
    [722] = {.count = 1}, SHIFT(235, 0),
    [724] = {.count = 1}, SHIFT(236, 0),
    [726] = {.count = 1}, SHIFT(244, 0),
    [728] = {.count = 1}, SHIFT(239, 0),
    [730] = {.count = 1}, SHIFT(240, 0),
    [732] = {.count = 1}, SHIFT(241, 0),
    [734] = {.count = 1}, SHIFT(242, 0),
    [736] = {.count = 1}, SHIFT(243, 0),
    [738] = {.count = 1}, SHIFT(578, 0),
    [740] = {.count = 1}, SHIFT(579, 0),
    [742] = {.count = 1}, REDUCE(sym_unless_statement, 3, 0),
    [744] = {.count = 1}, SHIFT(250, 0),
    [746] = {.count = 1}, SHIFT(251, 0),
    [748] = {.count = 1}, SHIFT(252, 0),
    [750] = {.count = 1}, SHIFT(253, 0),
    [752] = {.count = 1}, SHIFT(254, 0),
    [754] = {.count = 1}, SHIFT(255, 0),
    [756] = {.count = 1}, SHIFT(256, 0),
    [758] = {.count = 1}, REDUCE(sym_then_block, 1, 0),
    [760] = {.count = 1}, SHIFT(257, 0),
    [762] = {.count = 1}, SHIFT(258, 0),
    [764] = {.count = 1}, SHIFT(259, 0),
    [766] = {.count = 1}, SHIFT(260, 0),
    [768] = {.count = 1}, SHIFT(261, 0),
    [770] = {.count = 1}, SHIFT(262, 0),
    [772] = {.count = 1}, SHIFT(263, 0),
    [774] = {.count = 1}, SHIFT(264, 0),
    [776] = {.count = 1}, SHIFT(265, 0),
    [778] = {.count = 1}, SHIFT(266, 0),
    [780] = {.count = 1}, SHIFT(267, 0),
    [782] = {.count = 1}, SHIFT(268, 0),
    [784] = {.count = 1}, SHIFT(573, 0),
    [786] = {.count = 1}, SHIFT(574, 0),
    [788] = {.count = 1}, REDUCE(sym_then_block, 2, 0),
    [790] = {.count = 1}, SHIFT(575, 0),
    [792] = {.count = 1}, SHIFT(564, 0),
    [794] = {.count = 1}, SHIFT(556, 0),
    [796] = {.count = 1}, SHIFT(557, 0),
    [798] = {.count = 1}, SHIFT(555, 0),
    [800] = {.count = 1}, SHIFT(554, 0),
    [802] = {.count = 1}, SHIFT(552, 0),
    [804] = {.count = 1}, SHIFT(346, 0),
    [806] = {.count = 1}, SHIFT(344, 0),
    [808] = {.count = 1}, SHIFT(334, 0),
    [810] = {.count = 1}, SHIFT(319, 0),
    [812] = {.count = 1}, SHIFT(301, 0),
    [814] = {.count = 1}, SHIFT(296, 0),
    [816] = {.count = 1}, SHIFT(297, 0),
    [818] = {.count = 1}, SHIFT(277, 0),
    [820] = {.count = 1}, SHIFT(276, 0),
    [822] = {.count = 1}, SHIFT(269, 0),
    [824] = {.count = 1}, SHIFT(270, 0),
    [826] = {.count = 1}, SHIFT(271, 0),
    [828] = {.count = 1}, SHIFT(272, 0),
    [830] = {.count = 1}, SHIFT(273, 0),
    [832] = {.count = 1}, SHIFT(274, 0),
    [834] = {.count = 1}, SHIFT(275, 0),
    [836] = {.count = 1}, SHIFT(278, 0),
    [838] = {.count = 1}, SHIFT(279, 0),
    [840] = {.count = 1}, SHIFT(292, 0),
    [842] = {.count = 1}, SHIFT(293, 0),
    [844] = {.count = 1}, SHIFT(280, 0),
    [846] = {.count = 1}, SHIFT(281, 0),
    [848] = {.count = 1}, SHIFT(282, 0),
    [850] = {.count = 1}, SHIFT(289, 0),
    [852] = {.count = 1}, SHIFT(290, 0),
    [854] = {.count = 1}, SHIFT(283, 0),
    [856] = {.count = 1}, SHIFT(284, 0),
    [858] = {.count = 1}, SHIFT(285, 0),
    [860] = {.count = 1}, SHIFT(286, 0),
    [862] = {.count = 1}, SHIFT(287, 0),
    [864] = {.count = 1}, SHIFT(288, 0),
    [866] = {.count = 1}, SHIFT(291, 0),
    [868] = {.count = 1}, SHIFT(294, 0),
    [870] = {.count = 1}, SHIFT(295, 0),
    [872] = {.count = 1}, SHIFT(298, 0),
    [874] = {.count = 1}, SHIFT(299, 0),
    [876] = {.count = 1}, SHIFT(300, 0),
    [878] = {.count = 1}, SHIFT(302, 0),
    [880] = {.count = 1}, SHIFT(303, 0),
    [882] = {.count = 1}, SHIFT(304, 0),
    [884] = {.count = 1}, SHIFT(306, 0),
    [886] = {.count = 1}, SHIFT(316, 0),
    [888] = {.count = 1}, SHIFT(317, 0),
    [890] = {.count = 1}, SHIFT(305, 0),
    [892] = {.count = 1}, SHIFT(312, 0),
    [894] = {.count = 1}, SHIFT(307, 0),
    [896] = {.count = 1}, SHIFT(308, 0),
    [898] = {.count = 1}, SHIFT(309, 0),
    [900] = {.count = 1}, SHIFT(310, 0),
    [902] = {.count = 1}, SHIFT(311, 0),
    [904] = {.count = 1}, SHIFT(313, 0),
    [906] = {.count = 1}, SHIFT(314, 0),
    [908] = {.count = 1}, SHIFT(315, 0),
    [910] = {.count = 1}, SHIFT(318, 0),
    [912] = {.count = 1}, SHIFT(320, 0),
    [914] = {.count = 1}, SHIFT(321, 0),
    [916] = {.count = 1}, SHIFT(322, 0),
    [918] = {.count = 1}, SHIFT(323, 0),
    [920] = {.count = 1}, SHIFT(329, 0),
    [922] = {.count = 1}, SHIFT(330, 0),
    [924] = {.count = 1}, SHIFT(324, 0),
    [926] = {.count = 1}, SHIFT(325, 0),
    [928] = {.count = 1}, SHIFT(326, 0),
    [930] = {.count = 1}, SHIFT(327, 0),
    [932] = {.count = 1}, SHIFT(328, 0),
    [934] = {.count = 1}, SHIFT(331, 0),
    [936] = {.count = 1}, SHIFT(332, 0),
    [938] = {.count = 1}, SHIFT(333, 0),
    [940] = {.count = 1}, SHIFT(335, 0),
    [942] = {.count = 1}, SHIFT(336, 0),
    [944] = {.count = 1}, SHIFT(337, 0),
    [946] = {.count = 1}, SHIFT(338, 0),
    [948] = {.count = 1}, REDUCE(sym__then_else_block, 2, 0),
    [950] = {.count = 1}, SHIFT(339, 0),
    [952] = {.count = 1}, SHIFT(340, 0),
    [954] = {.count = 1}, SHIFT(341, 0),
    [956] = {.count = 1}, SHIFT(342, 0),
    [958] = {.count = 1}, REDUCE(sym__then_else_block, 3, 0),
    [960] = {.count = 1}, SHIFT(343, 0),
    [962] = {.count = 1}, REDUCE(sym__then_else_block, 4, 0),
    [964] = {.count = 1}, REDUCE(sym__then_else_block, 5, 0),
    [966] = {.count = 1}, SHIFT(345, 0),
    [968] = {.count = 1}, REDUCE(sym_while_statement, 3, 0),
    [970] = {.count = 1}, SHIFT(368, 0),
    [972] = {.count = 1}, SHIFT(369, 0),
    [974] = {.count = 1}, SHIFT(370, 0),
    [976] = {.count = 1}, SHIFT(371, 0),
    [978] = {.count = 1}, SHIFT(372, 0),
    [980] = {.count = 1}, SHIFT(360, 0),
    [982] = {.count = 1}, SHIFT(361, 0),
    [984] = {.count = 1}, SHIFT(355, 0),
    [986] = {.count = 1}, SHIFT(356, 0),
    [988] = {.count = 1}, SHIFT(354, 0),
    [990] = {.count = 1}, SHIFT(357, 0),
    [992] = {.count = 1}, SHIFT(358, 0),
    [994] = {.count = 1}, SHIFT(359, 0),
    [996] = {.count = 1}, SHIFT(367, 0),
    [998] = {.count = 1}, SHIFT(362, 0),
    [1000] = {.count = 1}, SHIFT(363, 0),
    [1002] = {.count = 1}, SHIFT(364, 0),
    [1004] = {.count = 1}, SHIFT(365, 0),
    [1006] = {.count = 1}, SHIFT(366, 0),
    [1008] = {.count = 1}, SHIFT(540, 0),
    [1010] = {.count = 1}, SHIFT(541, 0),
    [1012] = {.count = 1}, SHIFT(542, 0),
    [1014] = {.count = 1}, SHIFT(475, 0),
    [1016] = {.count = 1}, REDUCE(sym_if_statement, 3, 0),
    [1018] = {.count = 1}, SHIFT(373, 0),
    [1020] = {.count = 1}, SHIFT(374, 0),
    [1022] = {.count = 1}, SHIFT(375, 0),
    [1024] = {.count = 1}, SHIFT(376, 0),
    [1026] = {.count = 1}, SHIFT(377, 0),
    [1028] = {.count = 1}, SHIFT(378, 0),
    [1030] = {.count = 1}, SHIFT(379, 0),
    [1032] = {.count = 1}, SHIFT(380, 0),
    [1034] = {.count = 1}, SHIFT(381, 0),
    [1036] = {.count = 1}, SHIFT(382, 0),
    [1038] = {.count = 1}, SHIFT(383, 0),
    [1040] = {.count = 1}, SHIFT(384, 0),
    [1042] = {.count = 1}, SHIFT(385, 0),
    [1044] = {.count = 1}, SHIFT(386, 0),
    [1046] = {.count = 1}, SHIFT(387, 0),
    [1048] = {.count = 1}, SHIFT(388, 0),
    [1050] = {.count = 1}, SHIFT(389, 0),
    [1052] = {.count = 1}, SHIFT(390, 0),
    [1054] = {.count = 1}, SHIFT(391, 0),
    [1056] = {.count = 1}, SHIFT(501, 0),
    [1058] = {.count = 1}, SHIFT(539, 0),
    [1060] = {.count = 1}, SHIFT(504, 0),
    [1062] = {.count = 1}, SHIFT(530, 0),
    [1064] = {.count = 1}, SHIFT(522, 0),
    [1066] = {.count = 1}, SHIFT(523, 0),
    [1068] = {.count = 1}, SHIFT(521, 0),
    [1070] = {.count = 1}, SHIFT(520, 0),
    [1072] = {.count = 1}, SHIFT(518, 0),
    [1074] = {.count = 1}, SHIFT(469, 0),
    [1076] = {.count = 1}, SHIFT(467, 0),
    [1078] = {.count = 1}, SHIFT(457, 0),
    [1080] = {.count = 1}, SHIFT(442, 0),
    [1082] = {.count = 1}, SHIFT(424, 0),
    [1084] = {.count = 1}, SHIFT(419, 0),
    [1086] = {.count = 1}, SHIFT(420, 0),
    [1088] = {.count = 1}, SHIFT(400, 0),
    [1090] = {.count = 1}, SHIFT(399, 0),
    [1092] = {.count = 1}, SHIFT(392, 0),
    [1094] = {.count = 1}, SHIFT(393, 0),
    [1096] = {.count = 1}, SHIFT(394, 0),
    [1098] = {.count = 1}, SHIFT(395, 0),
    [1100] = {.count = 1}, SHIFT(396, 0),
    [1102] = {.count = 1}, SHIFT(397, 0),
    [1104] = {.count = 1}, SHIFT(398, 0),
    [1106] = {.count = 1}, SHIFT(401, 0),
    [1108] = {.count = 1}, SHIFT(402, 0),
    [1110] = {.count = 1}, SHIFT(415, 0),
    [1112] = {.count = 1}, SHIFT(416, 0),
    [1114] = {.count = 1}, SHIFT(403, 0),
    [1116] = {.count = 1}, SHIFT(404, 0),
    [1118] = {.count = 1}, SHIFT(405, 0),
    [1120] = {.count = 1}, SHIFT(412, 0),
    [1122] = {.count = 1}, SHIFT(413, 0),
    [1124] = {.count = 1}, SHIFT(406, 0),
    [1126] = {.count = 1}, SHIFT(407, 0),
    [1128] = {.count = 1}, SHIFT(408, 0),
    [1130] = {.count = 1}, SHIFT(409, 0),
    [1132] = {.count = 1}, SHIFT(410, 0),
    [1134] = {.count = 1}, SHIFT(411, 0),
    [1136] = {.count = 1}, SHIFT(414, 0),
    [1138] = {.count = 1}, SHIFT(417, 0),
    [1140] = {.count = 1}, SHIFT(418, 0),
    [1142] = {.count = 1}, SHIFT(421, 0),
    [1144] = {.count = 1}, SHIFT(422, 0),
    [1146] = {.count = 1}, SHIFT(423, 0),
    [1148] = {.count = 1}, SHIFT(425, 0),
    [1150] = {.count = 1}, SHIFT(426, 0),
    [1152] = {.count = 1}, SHIFT(427, 0),
    [1154] = {.count = 1}, SHIFT(429, 0),
    [1156] = {.count = 1}, SHIFT(439, 0),
    [1158] = {.count = 1}, SHIFT(440, 0),
    [1160] = {.count = 1}, SHIFT(428, 0),
    [1162] = {.count = 1}, SHIFT(435, 0),
    [1164] = {.count = 1}, SHIFT(430, 0),
    [1166] = {.count = 1}, SHIFT(431, 0),
    [1168] = {.count = 1}, SHIFT(432, 0),
    [1170] = {.count = 1}, SHIFT(433, 0),
    [1172] = {.count = 1}, SHIFT(434, 0),
    [1174] = {.count = 1}, SHIFT(436, 0),
    [1176] = {.count = 1}, SHIFT(437, 0),
    [1178] = {.count = 1}, SHIFT(438, 0),
    [1180] = {.count = 1}, SHIFT(441, 0),
    [1182] = {.count = 1}, SHIFT(443, 0),
    [1184] = {.count = 1}, SHIFT(444, 0),
    [1186] = {.count = 1}, SHIFT(445, 0),
    [1188] = {.count = 1}, SHIFT(446, 0),
    [1190] = {.count = 1}, SHIFT(452, 0),
    [1192] = {.count = 1}, SHIFT(453, 0),
    [1194] = {.count = 1}, SHIFT(447, 0),
    [1196] = {.count = 1}, SHIFT(448, 0),
    [1198] = {.count = 1}, SHIFT(449, 0),
    [1200] = {.count = 1}, SHIFT(450, 0),
    [1202] = {.count = 1}, SHIFT(451, 0),
    [1204] = {.count = 1}, SHIFT(454, 0),
    [1206] = {.count = 1}, SHIFT(455, 0),
    [1208] = {.count = 1}, SHIFT(456, 0),
    [1210] = {.count = 1}, SHIFT(458, 0),
    [1212] = {.count = 1}, SHIFT(459, 0),
    [1214] = {.count = 1}, SHIFT(460, 0),
    [1216] = {.count = 1}, SHIFT(461, 0),
    [1218] = {.count = 1}, SHIFT(462, 0),
    [1220] = {.count = 1}, SHIFT(463, 0),
    [1222] = {.count = 1}, SHIFT(464, 0),
    [1224] = {.count = 1}, SHIFT(465, 0),
    [1226] = {.count = 1}, SHIFT(466, 0),
    [1228] = {.count = 1}, SHIFT(468, 0),
    [1230] = {.count = 1}, SHIFT(470, 0),
    [1232] = {.count = 1}, SHIFT(471, 0),
    [1234] = {.count = 1}, SHIFT(472, 0),
    [1236] = {.count = 1}, SHIFT(473, 0),
    [1238] = {.count = 1}, SHIFT(474, 0),
    [1240] = {.count = 1}, SHIFT(510, 0),
    [1242] = {.count = 1}, SHIFT(514, 0),
    [1244] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 2, 0),
    [1246] = {.count = 1}, SHIFT(509, 0),
    [1248] = {.count = 1}, SHIFT(476, 0),
    [1250] = {.count = 1}, SHIFT(477, 0),
    [1252] = {.count = 1}, SHIFT(478, 0),
    [1254] = {.count = 1}, SHIFT(479, 0),
    [1256] = {.count = 1}, SHIFT(480, 0),
    [1258] = {.count = 1}, SHIFT(481, 0),
    [1260] = {.count = 1}, SHIFT(482, 0),
    [1262] = {.count = 1}, SHIFT(483, 0),
    [1264] = {.count = 1}, SHIFT(498, 0),
    [1266] = {.count = 1}, SHIFT(490, 0),
    [1268] = {.count = 1}, SHIFT(491, 0),
    [1270] = {.count = 1}, SHIFT(485, 0),
    [1272] = {.count = 1}, SHIFT(486, 0),
    [1274] = {.count = 1}, SHIFT(484, 0),
    [1276] = {.count = 1}, SHIFT(487, 0),
    [1278] = {.count = 1}, SHIFT(488, 0),
    [1280] = {.count = 1}, SHIFT(489, 0),
    [1282] = {.count = 1}, SHIFT(497, 0),
    [1284] = {.count = 1}, SHIFT(492, 0),
    [1286] = {.count = 1}, SHIFT(493, 0),
    [1288] = {.count = 1}, SHIFT(494, 0),
    [1290] = {.count = 1}, SHIFT(495, 0),
    [1292] = {.count = 1}, SHIFT(496, 0),
    [1294] = {.count = 1}, SHIFT(499, 0),
    [1296] = {.count = 1}, SHIFT(500, 0),
    [1298] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 3, 0),
    [1300] = {.count = 1}, SHIFT(502, 0),
    [1302] = {.count = 1}, SHIFT(503, 0),
    [1304] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 4, 0),
    [1306] = {.count = 1}, SHIFT(507, 0),
    [1308] = {.count = 1}, SHIFT(506, 0),
    [1310] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 5, 0),
    [1312] = {.count = 1}, SHIFT(505, 0),
    [1314] = {.count = 1}, REDUCE(aux_sym__then_elsif_else_block_repeat1, 6, 0),
    [1316] = {.count = 1}, SHIFT(508, 0),
    [1318] = {.count = 1}, SHIFT(511, 0),
    [1320] = {.count = 1}, SHIFT(512, 0),
    [1322] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 3, 0),
    [1324] = {.count = 1}, SHIFT(513, 0),
    [1326] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 4, 0),
    [1328] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 5, 0),
    [1330] = {.count = 1}, SHIFT(515, 0),
    [1332] = {.count = 1}, SHIFT(516, 0),
    [1334] = {.count = 1}, SHIFT(517, 0),
    [1336] = {.count = 1}, REDUCE(sym__then_elsif_else_block, 6, 0),
    [1338] = {.count = 1}, REDUCE(sym__statement, 2, 0),
    [1340] = {.count = 1}, SHIFT(529, 0),
    [1342] = {.count = 1}, SHIFT(524, 0),
    [1344] = {.count = 1}, SHIFT(525, 0),
    [1346] = {.count = 1}, SHIFT(526, 0),
    [1348] = {.count = 1}, SHIFT(527, 0),
    [1350] = {.count = 1}, SHIFT(528, 0),
    [1352] = {.count = 1}, SHIFT(531, 0),
    [1354] = {.count = 1}, SHIFT(532, 0),
    [1356] = {.count = 1}, SHIFT(538, 0),
    [1358] = {.count = 1}, SHIFT(534, 0),
    [1360] = {.count = 1}, SHIFT(533, 0),
    [1362] = {.count = 1}, SHIFT(535, 0),
    [1364] = {.count = 1}, SHIFT(536, 0),
    [1366] = {.count = 1}, REDUCE(sym__statement, 4, 0),
    [1368] = {.count = 1}, SHIFT(537, 0),
    [1370] = {.count = 1}, REDUCE(sym__statement, 5, 0),
    [1372] = {.count = 1}, REDUCE(sym__statement, 6, 0),
    [1374] = {.count = 1}, REDUCE(sym_then_block, 3, 0),
    [1376] = {.count = 1}, SHIFT(544, 0),
    [1378] = {.count = 1}, SHIFT(548, 0),
    [1380] = {.count = 1}, SHIFT(543, 0),
    [1382] = {.count = 1}, SHIFT(545, 0),
    [1384] = {.count = 1}, SHIFT(546, 0),
    [1386] = {.count = 1}, SHIFT(547, 0),
    [1388] = {.count = 1}, SHIFT(549, 0),
    [1390] = {.count = 1}, SHIFT(550, 0),
    [1392] = {.count = 1}, SHIFT(551, 0),
    [1394] = {.count = 1}, SHIFT(553, 0),
    [1396] = {.count = 1}, SHIFT(563, 0),
    [1398] = {.count = 1}, SHIFT(558, 0),
    [1400] = {.count = 1}, SHIFT(559, 0),
    [1402] = {.count = 1}, SHIFT(560, 0),
    [1404] = {.count = 1}, SHIFT(561, 0),
    [1406] = {.count = 1}, SHIFT(562, 0),
    [1408] = {.count = 1}, SHIFT(565, 0),
    [1410] = {.count = 1}, SHIFT(566, 0),
    [1412] = {.count = 1}, SHIFT(572, 0),
    [1414] = {.count = 1}, SHIFT(568, 0),
    [1416] = {.count = 1}, SHIFT(567, 0),
    [1418] = {.count = 1}, SHIFT(569, 0),
    [1420] = {.count = 1}, SHIFT(570, 0),
    [1422] = {.count = 1}, SHIFT(571, 0),
    [1424] = {.count = 1}, SHIFT(576, 0),
    [1426] = {.count = 1}, SHIFT(577, 0),
    [1428] = {.count = 1}, SHIFT(580, 0),
    [1430] = {.count = 1}, SHIFT(581, 0),
    [1432] = {.count = 1}, SHIFT(582, 0),
    [1434] = {.count = 1}, SHIFT(583, 0),
    [1436] = {.count = 1}, SHIFT(584, 0),
    [1438] = {.count = 1}, SHIFT(586, 0),
    [1440] = {.count = 1}, SHIFT(588, 0),
    [1442] = {.count = 1}, SHIFT(589, 0),
    [1444] = {.count = 1}, SHIFT(590, 0),
    [1446] = {.count = 1}, SHIFT(591, 0),
    [1448] = {.count = 1}, SHIFT(592, 0),
    [1450] = {.count = 1}, SHIFT(594, 0),
    [1452] = {.count = 1}, SHIFT(598, 0),
    [1454] = {.count = 1}, SHIFT(593, 0),
    [1456] = {.count = 1}, SHIFT(595, 0),
    [1458] = {.count = 1}, SHIFT(596, 0),
    [1460] = {.count = 1}, SHIFT(597, 0),
    [1462] = {.count = 1}, SHIFT(599, 0),
    [1464] = {.count = 1}, SHIFT(600, 0),
    [1466] = {.count = 1}, SHIFT(601, 0),
    [1468] = {.count = 1}, SHIFT(612, 0),
    [1470] = {.count = 1}, SHIFT(607, 0),
    [1472] = {.count = 1}, SHIFT(608, 0),
    [1474] = {.count = 1}, SHIFT(609, 0),
    [1476] = {.count = 1}, SHIFT(610, 0),
    [1478] = {.count = 1}, SHIFT(611, 0),
    [1480] = {.count = 1}, SHIFT(614, 0),
    [1482] = {.count = 1}, SHIFT(615, 0),
    [1484] = {.count = 1}, SHIFT(621, 0),
    [1486] = {.count = 1}, SHIFT(617, 0),
    [1488] = {.count = 1}, SHIFT(616, 0),
    [1490] = {.count = 1}, SHIFT(618, 0),
    [1492] = {.count = 1}, SHIFT(619, 0),
    [1494] = {.count = 1}, SHIFT(620, 0),
    [1496] = {.count = 1}, SHIFT(624, 0),
    [1498] = {.count = 1}, SHIFT(627, 0),
    [1500] = {.count = 1}, SHIFT(628, 0),
    [1502] = {.count = 1}, SHIFT(641, 0),
    [1504] = {.count = 1}, SHIFT(642, 0),
    [1506] = {.count = 1}, SHIFT(629, 0),
    [1508] = {.count = 1}, SHIFT(630, 0),
    [1510] = {.count = 1}, SHIFT(631, 0),
    [1512] = {.count = 1}, SHIFT(638, 0),
    [1514] = {.count = 1}, SHIFT(639, 0),
    [1516] = {.count = 1}, SHIFT(632, 0),
    [1518] = {.count = 1}, SHIFT(633, 0),
    [1520] = {.count = 1}, SHIFT(634, 0),
    [1522] = {.count = 1}, SHIFT(635, 0),
    [1524] = {.count = 1}, SHIFT(636, 0),
    [1526] = {.count = 1}, SHIFT(637, 0),
    [1528] = {.count = 1}, SHIFT(640, 0),
    [1530] = {.count = 1}, SHIFT(643, 0),
    [1532] = {.count = 1}, SHIFT(644, 0),
    [1534] = {.count = 1}, SHIFT(647, 0),
    [1536] = {.count = 1}, SHIFT(648, 0),
    [1538] = {.count = 1}, SHIFT(649, 0),
    [1540] = {.count = 1}, SHIFT(651, 0),
    [1542] = {.count = 1}, SHIFT(652, 0),
    [1544] = {.count = 1}, SHIFT(653, 0),
    [1546] = {.count = 1}, SHIFT(655, 0),
    [1548] = {.count = 1}, SHIFT(665, 0),
    [1550] = {.count = 1}, SHIFT(666, 0),
    [1552] = {.count = 1}, SHIFT(654, 0),
    [1554] = {.count = 1}, SHIFT(661, 0),
    [1556] = {.count = 1}, SHIFT(656, 0),
    [1558] = {.count = 1}, SHIFT(657, 0),
    [1560] = {.count = 1}, SHIFT(658, 0),
    [1562] = {.count = 1}, SHIFT(659, 0),
    [1564] = {.count = 1}, SHIFT(660, 0),
    [1566] = {.count = 1}, SHIFT(662, 0),
    [1568] = {.count = 1}, SHIFT(663, 0),
    [1570] = {.count = 1}, SHIFT(664, 0),
    [1572] = {.count = 1}, SHIFT(667, 0),
    [1574] = {.count = 1}, SHIFT(669, 0),
    [1576] = {.count = 1}, SHIFT(670, 0),
    [1578] = {.count = 1}, SHIFT(671, 0),
    [1580] = {.count = 1}, SHIFT(672, 0),
    [1582] = {.count = 1}, SHIFT(678, 0),
    [1584] = {.count = 1}, SHIFT(679, 0),
    [1586] = {.count = 1}, SHIFT(673, 0),
    [1588] = {.count = 1}, SHIFT(674, 0),
    [1590] = {.count = 1}, SHIFT(675, 0),
    [1592] = {.count = 1}, SHIFT(676, 0),
    [1594] = {.count = 1}, SHIFT(677, 0),
    [1596] = {.count = 1}, SHIFT(680, 0),
    [1598] = {.count = 1}, SHIFT(681, 0),
    [1600] = {.count = 1}, SHIFT(682, 0),
    [1602] = {.count = 1}, SHIFT(684, 0),
    [1604] = {.count = 1}, SHIFT(685, 0),
    [1606] = {.count = 1}, SHIFT(686, 0),
    [1608] = {.count = 1}, SHIFT(687, 0),
    [1610] = {.count = 1}, SHIFT(688, 0),
    [1612] = {.count = 1}, SHIFT(689, 0),
    [1614] = {.count = 1}, SHIFT(690, 0),
    [1616] = {.count = 1}, SHIFT(691, 0),
    [1618] = {.count = 1}, SHIFT(692, 0),
    [1620] = {.count = 1}, SHIFT(694, 0),
    [1622] = {.count = 1}, SHIFT(696, 0),
    [1624] = {.count = 1}, SHIFT(697, 0),
    [1626] = {.count = 1}, SHIFT(698, 0),
    [1628] = {.count = 1}, SHIFT(699, 0),
    [1630] = {.count = 1}, SHIFT(700, 0),
    [1632] = {.count = 1}, SHIFT(702, 0),
    [1634] = {.count = 1}, SHIFT(706, 0),
    [1636] = {.count = 1}, SHIFT(701, 0),
    [1638] = {.count = 1}, SHIFT(703, 0),
    [1640] = {.count = 1}, SHIFT(704, 0),
    [1642] = {.count = 1}, SHIFT(705, 0),
    [1644] = {.count = 1}, SHIFT(707, 0),
    [1646] = {.count = 1}, SHIFT(708, 0),
    [1648] = {.count = 1}, SHIFT(709, 0),
    [1650] = {.count = 1}, SHIFT(720, 0),
    [1652] = {.count = 1}, SHIFT(715, 0),
    [1654] = {.count = 1}, SHIFT(716, 0),
    [1656] = {.count = 1}, SHIFT(717, 0),
    [1658] = {.count = 1}, SHIFT(718, 0),
    [1660] = {.count = 1}, SHIFT(719, 0),
    [1662] = {.count = 1}, SHIFT(722, 0),
    [1664] = {.count = 1}, SHIFT(723, 0),
    [1666] = {.count = 1}, SHIFT(729, 0),
    [1668] = {.count = 1}, SHIFT(725, 0),
    [1670] = {.count = 1}, SHIFT(724, 0),
    [1672] = {.count = 1}, SHIFT(726, 0),
    [1674] = {.count = 1}, SHIFT(727, 0),
    [1676] = {.count = 1}, SHIFT(728, 0),
    [1678] = {.count = 1}, SHIFT(732, 0),
    [1680] = {.count = 1}, SHIFT(740, 0),
    [1682] = {.count = 1}, SHIFT(735, 0),
    [1684] = {.count = 1}, SHIFT(736, 0),
    [1686] = {.count = 1}, SHIFT(737, 0),
    [1688] = {.count = 1}, SHIFT(738, 0),
    [1690] = {.count = 1}, SHIFT(739, 0),
    [1692] = {.count = 1}, REDUCE(sym__call_arguments, 2, 0),
    [1694] = {.count = 1}, SHIFT(743, 0),
    [1696] = {.count = 1}, SHIFT(744, 0),
    [1698] = {.count = 1}, SHIFT(746, 0),
    [1700] = {.count = 1}, SHIFT(747, 0),
    [1702] = {.count = 1}, SHIFT(748, 0),
    [1704] = {.count = 1}, SHIFT(749, 0),
    [1706] = {.count = 1}, SHIFT(750, 0),
    [1708] = {.count = 1}, SHIFT(751, 0),
    [1710] = {.count = 1}, SHIFT(754, 0),
    [1712] = {.count = 1}, SHIFT(755, 0),
    [1714] = {.count = 1}, SHIFT(768, 0),
    [1716] = {.count = 1}, SHIFT(769, 0),
    [1718] = {.count = 1}, SHIFT(756, 0),
    [1720] = {.count = 1}, SHIFT(757, 0),
    [1722] = {.count = 1}, SHIFT(758, 0),
    [1724] = {.count = 1}, SHIFT(765, 0),
    [1726] = {.count = 1}, SHIFT(766, 0),
    [1728] = {.count = 1}, SHIFT(759, 0),
    [1730] = {.count = 1}, SHIFT(760, 0),
    [1732] = {.count = 1}, SHIFT(761, 0),
    [1734] = {.count = 1}, SHIFT(762, 0),
    [1736] = {.count = 1}, SHIFT(763, 0),
    [1738] = {.count = 1}, SHIFT(764, 0),
    [1740] = {.count = 1}, SHIFT(767, 0),
    [1742] = {.count = 1}, SHIFT(770, 0),
    [1744] = {.count = 1}, SHIFT(771, 0),
    [1746] = {.count = 1}, SHIFT(774, 0),
    [1748] = {.count = 1}, SHIFT(775, 0),
    [1750] = {.count = 1}, SHIFT(776, 0),
    [1752] = {.count = 1}, SHIFT(778, 0),
    [1754] = {.count = 1}, SHIFT(779, 0),
    [1756] = {.count = 1}, SHIFT(780, 0),
    [1758] = {.count = 1}, SHIFT(782, 0),
    [1760] = {.count = 1}, SHIFT(792, 0),
    [1762] = {.count = 1}, SHIFT(793, 0),
    [1764] = {.count = 1}, SHIFT(781, 0),
    [1766] = {.count = 1}, SHIFT(788, 0),
    [1768] = {.count = 1}, SHIFT(783, 0),
    [1770] = {.count = 1}, SHIFT(784, 0),
    [1772] = {.count = 1}, SHIFT(785, 0),
    [1774] = {.count = 1}, SHIFT(786, 0),
    [1776] = {.count = 1}, SHIFT(787, 0),
    [1778] = {.count = 1}, SHIFT(789, 0),
    [1780] = {.count = 1}, SHIFT(790, 0),
    [1782] = {.count = 1}, SHIFT(791, 0),
    [1784] = {.count = 1}, SHIFT(794, 0),
    [1786] = {.count = 1}, SHIFT(796, 0),
    [1788] = {.count = 1}, SHIFT(797, 0),
    [1790] = {.count = 1}, SHIFT(798, 0),
    [1792] = {.count = 1}, SHIFT(799, 0),
    [1794] = {.count = 1}, SHIFT(805, 0),
    [1796] = {.count = 1}, SHIFT(806, 0),
    [1798] = {.count = 1}, SHIFT(800, 0),
    [1800] = {.count = 1}, SHIFT(801, 0),
    [1802] = {.count = 1}, SHIFT(802, 0),
    [1804] = {.count = 1}, SHIFT(803, 0),
    [1806] = {.count = 1}, SHIFT(804, 0),
    [1808] = {.count = 1}, SHIFT(807, 0),
    [1810] = {.count = 1}, SHIFT(808, 0),
    [1812] = {.count = 1}, SHIFT(809, 0),
    [1814] = {.count = 1}, SHIFT(811, 0),
    [1816] = {.count = 1}, SHIFT(812, 0),
    [1818] = {.count = 1}, SHIFT(813, 0),
    [1820] = {.count = 1}, SHIFT(814, 0),
    [1822] = {.count = 1}, SHIFT(815, 0),
    [1824] = {.count = 1}, SHIFT(816, 0),
    [1826] = {.count = 1}, SHIFT(817, 0),
    [1828] = {.count = 1}, SHIFT(818, 0),
    [1830] = {.count = 1}, SHIFT(819, 0),
    [1832] = {.count = 1}, SHIFT(821, 0),
    [1834] = {.count = 1}, SHIFT(823, 0),
    [1836] = {.count = 1}, SHIFT(824, 0),
    [1838] = {.count = 1}, SHIFT(825, 0),
    [1840] = {.count = 1}, SHIFT(826, 0),
    [1842] = {.count = 1}, SHIFT(827, 0),
    [1844] = {.count = 1}, SHIFT(829, 0),
    [1846] = {.count = 1}, SHIFT(833, 0),
    [1848] = {.count = 1}, SHIFT(828, 0),
    [1850] = {.count = 1}, SHIFT(830, 0),
    [1852] = {.count = 1}, SHIFT(831, 0),
    [1854] = {.count = 1}, SHIFT(832, 0),
    [1856] = {.count = 1}, SHIFT(834, 0),
    [1858] = {.count = 1}, SHIFT(835, 0),
    [1860] = {.count = 1}, SHIFT(836, 0),
    [1862] = {.count = 1}, SHIFT(838, 0),
    [1864] = {.count = 1}, SHIFT(848, 0),
    [1866] = {.count = 1}, SHIFT(843, 0),
    [1868] = {.count = 1}, SHIFT(844, 0),
    [1870] = {.count = 1}, SHIFT(845, 0),
    [1872] = {.count = 1}, SHIFT(846, 0),
    [1874] = {.count = 1}, SHIFT(847, 0),
    [1876] = {.count = 1}, SHIFT(850, 0),
    [1878] = {.count = 1}, SHIFT(851, 0),
    [1880] = {.count = 1}, SHIFT(857, 0),
    [1882] = {.count = 1}, SHIFT(853, 0),
    [1884] = {.count = 1}, SHIFT(852, 0),
    [1886] = {.count = 1}, SHIFT(854, 0),
    [1888] = {.count = 1}, SHIFT(855, 0),
    [1890] = {.count = 1}, SHIFT(856, 0),
    [1892] = {.count = 1}, SHIFT(861, 0),
    [1894] = {.count = 1}, REDUCE(sym_program, 2, 0),
    [1896] = {.count = 1}, SHIFT(862, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_ruby);
