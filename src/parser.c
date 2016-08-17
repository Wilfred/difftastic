#include "tree_sitter/parser.h"

#define STATE_COUNT 123
#define SYMBOL_COUNT 56

enum {
    sym_source_file = ts_builtin_sym_start,
    sym_package_clause,
    sym_import_declaration,
    sym_import_spec,
    sym__top_level_declaration,
    sym__declaration,
    sym_const_declaration,
    sym_const_spec,
    sym_var_declaration,
    sym_var_spec,
    sym_function_declaration,
    sym_parameters,
    sym__parameter_list,
    sym_parameter_declaration,
    sym_block,
    sym_method_declaration,
    sym_type_declaration,
    sym_identifier_list,
    sym_expression_list,
    sym__type,
    sym__expression,
    sym_unary_expression,
    sym_binary_expression,
    sym__primary_expression,
    sym__string_literal,
    sym_int_literal,
    sym_float_literal,
    aux_sym_source_file_repeat1,
    aux_sym_source_file_repeat2,
    aux_sym_import_declaration_repeat1,
    aux_sym_const_declaration_repeat1,
    aux_sym_var_declaration_repeat1,
    aux_sym_identifier_list_repeat1,
    aux_sym_expression_list_repeat1,
    anon_sym_package,
    anon_sym_import,
    anon_sym_LPAREN,
    aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH,
    anon_sym_RPAREN,
    anon_sym_DOT,
    anon_sym_const,
    anon_sym_EQ,
    anon_sym_var,
    anon_sym_func,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    sym_identifier,
    sym_raw_string_literal,
    sym_interpreted_string_literal,
    aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH,
    aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH,
    aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH,
    sym_comment,
};

static const char *ts_symbol_names[] = {
    [sym_source_file] = "source_file",
    [sym_package_clause] = "package_clause",
    [sym_import_declaration] = "import_declaration",
    [sym_import_spec] = "import_spec",
    [sym__top_level_declaration] = "_top_level_declaration",
    [sym__declaration] = "_declaration",
    [sym_const_declaration] = "const_declaration",
    [sym_const_spec] = "const_spec",
    [sym_var_declaration] = "var_declaration",
    [sym_var_spec] = "var_spec",
    [sym_function_declaration] = "function_declaration",
    [sym_parameters] = "parameters",
    [sym__parameter_list] = "_parameter_list",
    [sym_parameter_declaration] = "parameter_declaration",
    [sym_block] = "block",
    [sym_method_declaration] = "method_declaration",
    [sym_type_declaration] = "type_declaration",
    [sym_identifier_list] = "identifier_list",
    [sym_expression_list] = "expression_list",
    [sym__type] = "_type",
    [sym__expression] = "_expression",
    [sym_unary_expression] = "unary_expression",
    [sym_binary_expression] = "binary_expression",
    [sym__primary_expression] = "_primary_expression",
    [sym__string_literal] = "_string_literal",
    [sym_int_literal] = "int_literal",
    [sym_float_literal] = "float_literal",
    [aux_sym_source_file_repeat1] = "source_file_repeat1",
    [aux_sym_source_file_repeat2] = "source_file_repeat2",
    [aux_sym_import_declaration_repeat1] = "import_declaration_repeat1",
    [aux_sym_const_declaration_repeat1] = "const_declaration_repeat1",
    [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
    [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
    [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_package] = "package",
    [anon_sym_import] = "import",
    [anon_sym_LPAREN] = "(",
    [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = "/(\n|;)/",
    [anon_sym_RPAREN] = ")",
    [anon_sym_DOT] = ".",
    [anon_sym_const] = "const",
    [anon_sym_EQ] = "=",
    [anon_sym_var] = "var",
    [anon_sym_func] = "func",
    [anon_sym_COMMA] = ",",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [sym_identifier] = "identifier",
    [sym_raw_string_literal] = "raw_string_literal",
    [sym_interpreted_string_literal] = "interpreted_string_literal",
    [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = "/[1-9]([0-9]*|)/",
    [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = "/0([0-7]*|)/",
    [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = "/0(x|X)[0-7]*/",
    [sym_comment] = "comment",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_source_file] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_package_clause] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_import_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_import_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__top_level_declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_const_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_const_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_function_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_parameters] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__parameter_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_parameter_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_identifier_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_expression_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__type] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_unary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__primary_expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__string_literal] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_int_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_float_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_source_file_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_source_file_repeat2] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_import_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_const_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_var_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_expression_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = true, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_package] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_import] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_const] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_var] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_func] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_raw_string_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpreted_string_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_comment] = {.visible = true, .named = true, .structural = false, .extra = true},
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
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '0')
                ADVANCE(14);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(18);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(22);
            if (lookahead == 'c')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(29);
            if (lookahead == 'i')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(39);
            if (lookahead == 'v')
                ADVANCE(46);
            if (lookahead == '{')
                ADVANCE(49);
            if (lookahead == '}')
                ADVANCE(50);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 3:
            if (lookahead == '\"')
                ADVANCE(4);
            if (lookahead == '\\')
                ADVANCE(5);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(3);
            LEX_ERROR();
        case 4:
            if (lookahead == '\"')
                ADVANCE(4);
            if (lookahead == '\\')
                ADVANCE(5);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_interpreted_string_literal);
        case 5:
            if (lookahead == '\"')
                ADVANCE(4);
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(6);
            if (lookahead == '\\')
                ADVANCE(5);
            if (lookahead == 'x')
                ADVANCE(6);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                ('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '\\') ||
                (lookahead == 'x')))
                ADVANCE(3);
            LEX_ERROR();
        case 6:
            if (lookahead == '\"')
                ADVANCE(4);
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(7);
            if (lookahead == '\\')
                ADVANCE(5);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                ('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '\\')))
                ADVANCE(3);
            LEX_ERROR();
        case 7:
            if (lookahead == '\"')
                ADVANCE(4);
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(3);
            if (lookahead == '\\')
                ADVANCE(5);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                ('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '\\')))
                ADVANCE(3);
            LEX_ERROR();
        case 8:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 9:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 10:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 11:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 12:
            if (lookahead == '/')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(13);
            ACCEPT_TOKEN(sym_comment);
        case 14:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(15);
            if (lookahead == 'X')
                ADVANCE(16);
            if (lookahead == 'x')
                ADVANCE(16);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 15:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(15);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 16:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(17);
            LEX_ERROR();
        case 17:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(17);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(18);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 19:
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 20:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 22:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == '`')
                ADVANCE(23);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(22);
            LEX_ERROR();
        case 23:
            if (lookahead == '\n')
                ADVANCE(22);
            if (lookahead == '`')
                ADVANCE(23);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(22);
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(25);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(26);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 's')
                ADVANCE(27);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(28);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_const);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'u')
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(31);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(32);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_func);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'm')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'p')
                ADVANCE(35);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(38);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_import);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(41);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'k')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'g')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(45);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_package);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_var);
        case 49:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 50:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 51:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(51);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'p')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (lookahead == 'a')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (lookahead == 'c')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == 'k')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            if (lookahead == 'a')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            if (lookahead == 'g')
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            if (lookahead == 'e')
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            ACCEPT_TOKEN(anon_sym_package);
        case 59:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(59);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 60:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(60);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(70);
            if (lookahead == 'v')
                ADVANCE(76);
            LEX_ERROR();
        case 61:
            if (lookahead == 'o')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            if (lookahead == 'n')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (lookahead == 's')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            if (lookahead == 't')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            ACCEPT_TOKEN(anon_sym_const);
        case 66:
            if (lookahead == 'u')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 'n')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 'c')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            ACCEPT_TOKEN(anon_sym_func);
        case 70:
            if (lookahead == 'm')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            if (lookahead == 'p')
                ADVANCE(72);
            LEX_ERROR();
        case 72:
            if (lookahead == 'o')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            if (lookahead == 'r')
                ADVANCE(74);
            LEX_ERROR();
        case 74:
            if (lookahead == 't')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            ACCEPT_TOKEN(anon_sym_import);
        case 76:
            if (lookahead == 'a')
                ADVANCE(77);
            LEX_ERROR();
        case 77:
            if (lookahead == 'r')
                ADVANCE(78);
            LEX_ERROR();
        case 78:
            ACCEPT_TOKEN(anon_sym_var);
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 80:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(80);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'v')
                ADVANCE(76);
            LEX_ERROR();
        case 81:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(22);
            LEX_ERROR();
        case 82:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(82);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 83:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(83);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 84:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                ('g' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(29);
            if (lookahead == 'v')
                ADVANCE(46);
            if (lookahead == '{')
                ADVANCE(49);
            LEX_ERROR();
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 87:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 88:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'v')
                ADVANCE(76);
            if (lookahead == '{')
                ADVANCE(49);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '}')
                ADVANCE(50);
            LEX_ERROR();
        case 90:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 93:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(93);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 94:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 95:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(95);
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '0')
                ADVANCE(14);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(22);
            LEX_ERROR();
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(96);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 97:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'v')
                ADVANCE(76);
            LEX_ERROR();
        case 98:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'v')
                ADVANCE(76);
            LEX_ERROR();
        case 99:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(22);
            LEX_ERROR();
        case 101:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '`')
                ADVANCE(22);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 51,
    [1] = 59,
    [2] = 60,
    [3] = 79,
    [4] = 60,
    [5] = 60,
    [6] = 80,
    [7] = 80,
    [8] = 80,
    [9] = 80,
    [10] = 59,
    [11] = 81,
    [12] = 82,
    [13] = 82,
    [14] = 79,
    [15] = 83,
    [16] = 84,
    [17] = 85,
    [18] = 86,
    [19] = 86,
    [20] = 84,
    [21] = 87,
    [22] = 86,
    [23] = 86,
    [24] = 84,
    [25] = 79,
    [26] = 86,
    [27] = 87,
    [28] = 88,
    [29] = 80,
    [30] = 85,
    [31] = 89,
    [32] = 88,
    [33] = 80,
    [34] = 86,
    [35] = 88,
    [36] = 88,
    [37] = 80,
    [38] = 80,
    [39] = 90,
    [40] = 85,
    [41] = 91,
    [42] = 90,
    [43] = 79,
    [44] = 91,
    [45] = 90,
    [46] = 92,
    [47] = 90,
    [48] = 93,
    [49] = 80,
    [50] = 80,
    [51] = 94,
    [52] = 95,
    [53] = 94,
    [54] = 92,
    [55] = 96,
    [56] = 96,
    [57] = 96,
    [58] = 96,
    [59] = 96,
    [60] = 92,
    [61] = 95,
    [62] = 96,
    [63] = 92,
    [64] = 95,
    [65] = 92,
    [66] = 85,
    [67] = 93,
    [68] = 97,
    [69] = 95,
    [70] = 97,
    [71] = 80,
    [72] = 98,
    [73] = 98,
    [74] = 98,
    [75] = 98,
    [76] = 98,
    [77] = 80,
    [78] = 95,
    [79] = 98,
    [80] = 80,
    [81] = 95,
    [82] = 80,
    [83] = 80,
    [84] = 90,
    [85] = 85,
    [86] = 92,
    [87] = 90,
    [88] = 93,
    [89] = 80,
    [90] = 80,
    [91] = 99,
    [92] = 95,
    [93] = 99,
    [94] = 92,
    [95] = 95,
    [96] = 92,
    [97] = 85,
    [98] = 93,
    [99] = 99,
    [100] = 95,
    [101] = 80,
    [102] = 95,
    [103] = 80,
    [104] = 60,
    [105] = 60,
    [106] = 100,
    [107] = 101,
    [108] = 60,
    [109] = 60,
    [110] = 92,
    [111] = 92,
    [112] = 93,
    [113] = 60,
    [114] = 101,
    [115] = 92,
    [116] = 92,
    [117] = 60,
    [118] = 100,
    [119] = 93,
    [120] = 59,
    [121] = 59,
    [122] = 80,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_source_file] = 2,
        [sym_package_clause] = 4,
        [anon_sym_package] = 6,
        [sym_comment] = 8,
    },
    [1] = {
        [ts_builtin_sym_end] = 10,
        [sym_comment] = 8,
    },
    [2] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat1] = 20,
        [aux_sym_source_file_repeat2] = 22,
        [ts_builtin_sym_end] = 24,
        [anon_sym_import] = 26,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [sym_comment] = 8,
    },
    [3] = {
        [sym_identifier] = 34,
        [sym_comment] = 8,
    },
    [4] = {
        [sym_import_declaration] = 36,
        [sym__top_level_declaration] = 36,
        [sym__declaration] = 36,
        [sym_const_declaration] = 36,
        [sym_var_declaration] = 36,
        [sym_function_declaration] = 36,
        [sym_method_declaration] = 36,
        [sym_type_declaration] = 36,
        [aux_sym_source_file_repeat1] = 36,
        [aux_sym_source_file_repeat2] = 36,
        [ts_builtin_sym_end] = 36,
        [anon_sym_import] = 36,
        [anon_sym_const] = 36,
        [anon_sym_var] = 36,
        [anon_sym_func] = 36,
        [sym_comment] = 8,
    },
    [5] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 38,
        [sym__declaration] = 38,
        [sym_const_declaration] = 38,
        [sym_var_declaration] = 38,
        [sym_function_declaration] = 38,
        [sym_method_declaration] = 38,
        [sym_type_declaration] = 38,
        [aux_sym_source_file_repeat1] = 40,
        [aux_sym_source_file_repeat2] = 38,
        [ts_builtin_sym_end] = 38,
        [anon_sym_import] = 26,
        [anon_sym_const] = 38,
        [anon_sym_var] = 38,
        [anon_sym_func] = 38,
        [sym_comment] = 8,
    },
    [6] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 42,
        [ts_builtin_sym_end] = 44,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [sym_comment] = 8,
    },
    [7] = {
        [sym__top_level_declaration] = 46,
        [sym__declaration] = 46,
        [sym_const_declaration] = 46,
        [sym_var_declaration] = 46,
        [sym_function_declaration] = 46,
        [sym_method_declaration] = 46,
        [sym_type_declaration] = 46,
        [aux_sym_source_file_repeat2] = 46,
        [ts_builtin_sym_end] = 46,
        [anon_sym_const] = 46,
        [anon_sym_var] = 46,
        [anon_sym_func] = 46,
        [sym_comment] = 8,
    },
    [8] = {
        [sym__top_level_declaration] = 48,
        [sym__declaration] = 48,
        [sym_const_declaration] = 48,
        [sym_var_declaration] = 48,
        [sym_function_declaration] = 48,
        [sym_method_declaration] = 48,
        [sym_type_declaration] = 48,
        [aux_sym_source_file_repeat2] = 48,
        [ts_builtin_sym_end] = 48,
        [anon_sym_const] = 48,
        [anon_sym_var] = 48,
        [anon_sym_func] = 48,
        [sym_comment] = 8,
    },
    [9] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 50,
        [ts_builtin_sym_end] = 52,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 52,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 54,
        [sym__string_literal] = 56,
        [anon_sym_LPAREN] = 58,
        [anon_sym_DOT] = 60,
        [sym_identifier] = 60,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 64,
        [sym_identifier_list] = 66,
        [anon_sym_LPAREN] = 68,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [13] = {
        [sym_var_spec] = 72,
        [sym_identifier_list] = 74,
        [anon_sym_LPAREN] = 76,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [14] = {
        [sym_identifier] = 78,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_parameters] = 80,
        [anon_sym_LPAREN] = 82,
        [sym_comment] = 8,
    },
    [16] = {
        [sym__top_level_declaration] = 84,
        [sym__declaration] = 84,
        [sym_const_declaration] = 84,
        [sym_var_declaration] = 84,
        [sym_function_declaration] = 84,
        [sym_parameters] = 86,
        [sym_block] = 88,
        [sym_method_declaration] = 84,
        [sym_type_declaration] = 84,
        [sym__type] = 86,
        [aux_sym_source_file_repeat2] = 84,
        [ts_builtin_sym_end] = 84,
        [anon_sym_LPAREN] = 90,
        [anon_sym_const] = 84,
        [anon_sym_var] = 84,
        [anon_sym_func] = 84,
        [anon_sym_LBRACE] = 92,
        [sym_identifier] = 94,
        [sym_comment] = 8,
    },
    [17] = {
        [sym__parameter_list] = 96,
        [sym_parameter_declaration] = 98,
        [anon_sym_RPAREN] = 100,
        [sym_identifier] = 102,
        [sym_comment] = 8,
    },
    [18] = {
        [anon_sym_RPAREN] = 104,
        [anon_sym_COMMA] = 106,
        [sym_comment] = 8,
    },
    [19] = {
        [anon_sym_RPAREN] = 108,
        [anon_sym_COMMA] = 108,
        [sym_comment] = 8,
    },
    [20] = {
        [sym__top_level_declaration] = 110,
        [sym__declaration] = 110,
        [sym_const_declaration] = 110,
        [sym_var_declaration] = 110,
        [sym_function_declaration] = 110,
        [sym_parameters] = 110,
        [sym_block] = 110,
        [sym_method_declaration] = 110,
        [sym_type_declaration] = 110,
        [sym__type] = 110,
        [aux_sym_source_file_repeat2] = 110,
        [ts_builtin_sym_end] = 110,
        [anon_sym_LPAREN] = 110,
        [anon_sym_const] = 110,
        [anon_sym_var] = 110,
        [anon_sym_func] = 110,
        [anon_sym_LBRACE] = 110,
        [sym_identifier] = 110,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__type] = 112,
        [anon_sym_RPAREN] = 108,
        [anon_sym_COMMA] = 108,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [22] = {
        [anon_sym_RPAREN] = 116,
        [anon_sym_COMMA] = 116,
        [sym_comment] = 8,
    },
    [23] = {
        [anon_sym_RPAREN] = 118,
        [anon_sym_COMMA] = 118,
        [sym_comment] = 8,
    },
    [24] = {
        [sym__top_level_declaration] = 120,
        [sym__declaration] = 120,
        [sym_const_declaration] = 120,
        [sym_var_declaration] = 120,
        [sym_function_declaration] = 120,
        [sym_parameters] = 120,
        [sym_block] = 120,
        [sym_method_declaration] = 120,
        [sym_type_declaration] = 120,
        [sym__type] = 120,
        [aux_sym_source_file_repeat2] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_LPAREN] = 120,
        [anon_sym_const] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_LBRACE] = 120,
        [sym_identifier] = 120,
        [sym_comment] = 8,
    },
    [25] = {
        [sym_parameter_declaration] = 122,
        [sym_identifier] = 124,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_RPAREN] = 126,
        [anon_sym_COMMA] = 126,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 112,
        [anon_sym_RPAREN] = 126,
        [anon_sym_COMMA] = 126,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [28] = {
        [sym__top_level_declaration] = 128,
        [sym__declaration] = 128,
        [sym_const_declaration] = 128,
        [sym_var_declaration] = 128,
        [sym_function_declaration] = 128,
        [sym_block] = 130,
        [sym_method_declaration] = 128,
        [sym_type_declaration] = 128,
        [aux_sym_source_file_repeat2] = 128,
        [ts_builtin_sym_end] = 128,
        [anon_sym_const] = 128,
        [anon_sym_var] = 128,
        [anon_sym_func] = 128,
        [anon_sym_LBRACE] = 92,
        [sym_comment] = 8,
    },
    [29] = {
        [sym__top_level_declaration] = 128,
        [sym__declaration] = 128,
        [sym_const_declaration] = 128,
        [sym_var_declaration] = 128,
        [sym_function_declaration] = 128,
        [sym_method_declaration] = 128,
        [sym_type_declaration] = 128,
        [aux_sym_source_file_repeat2] = 128,
        [ts_builtin_sym_end] = 128,
        [anon_sym_const] = 128,
        [anon_sym_var] = 128,
        [anon_sym_func] = 128,
        [sym_comment] = 8,
    },
    [30] = {
        [sym__parameter_list] = 132,
        [sym_parameter_declaration] = 98,
        [anon_sym_RPAREN] = 134,
        [sym_identifier] = 102,
        [sym_comment] = 8,
    },
    [31] = {
        [anon_sym_RBRACE] = 136,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_block] = 118,
        [sym_method_declaration] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_const] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [anon_sym_LBRACE] = 118,
        [sym_comment] = 8,
    },
    [33] = {
        [sym__top_level_declaration] = 138,
        [sym__declaration] = 138,
        [sym_const_declaration] = 138,
        [sym_var_declaration] = 138,
        [sym_function_declaration] = 138,
        [sym_method_declaration] = 138,
        [sym_type_declaration] = 138,
        [aux_sym_source_file_repeat2] = 138,
        [ts_builtin_sym_end] = 138,
        [anon_sym_const] = 138,
        [anon_sym_var] = 138,
        [anon_sym_func] = 138,
        [sym_comment] = 8,
    },
    [34] = {
        [anon_sym_RPAREN] = 140,
        [anon_sym_COMMA] = 106,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__top_level_declaration] = 110,
        [sym__declaration] = 110,
        [sym_const_declaration] = 110,
        [sym_var_declaration] = 110,
        [sym_function_declaration] = 110,
        [sym_block] = 110,
        [sym_method_declaration] = 110,
        [sym_type_declaration] = 110,
        [aux_sym_source_file_repeat2] = 110,
        [ts_builtin_sym_end] = 110,
        [anon_sym_const] = 110,
        [anon_sym_var] = 110,
        [anon_sym_func] = 110,
        [anon_sym_LBRACE] = 110,
        [sym_comment] = 8,
    },
    [36] = {
        [sym__top_level_declaration] = 120,
        [sym__declaration] = 120,
        [sym_const_declaration] = 120,
        [sym_var_declaration] = 120,
        [sym_function_declaration] = 120,
        [sym_block] = 120,
        [sym_method_declaration] = 120,
        [sym_type_declaration] = 120,
        [aux_sym_source_file_repeat2] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_const] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_LBRACE] = 120,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__top_level_declaration] = 142,
        [sym__declaration] = 142,
        [sym_const_declaration] = 142,
        [sym_var_declaration] = 142,
        [sym_function_declaration] = 142,
        [sym_method_declaration] = 142,
        [sym_type_declaration] = 142,
        [aux_sym_source_file_repeat2] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_const] = 142,
        [anon_sym_var] = 142,
        [anon_sym_func] = 142,
        [sym_comment] = 8,
    },
    [38] = {
        [sym__top_level_declaration] = 144,
        [sym__declaration] = 144,
        [sym_const_declaration] = 144,
        [sym_var_declaration] = 144,
        [sym_function_declaration] = 144,
        [sym_method_declaration] = 144,
        [sym_type_declaration] = 144,
        [aux_sym_source_file_repeat2] = 144,
        [ts_builtin_sym_end] = 144,
        [anon_sym_const] = 144,
        [anon_sym_var] = 144,
        [anon_sym_func] = 144,
        [sym_comment] = 8,
    },
    [39] = {
        [sym__type] = 146,
        [anon_sym_EQ] = 148,
        [sym_identifier] = 150,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_var_spec] = 152,
        [sym_identifier_list] = 154,
        [aux_sym_var_declaration_repeat1] = 156,
        [anon_sym_RPAREN] = 158,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__type] = 160,
        [aux_sym_identifier_list_repeat1] = 162,
        [anon_sym_EQ] = 160,
        [anon_sym_COMMA] = 164,
        [sym_identifier] = 160,
        [sym_comment] = 8,
    },
    [42] = {
        [sym__type] = 166,
        [anon_sym_EQ] = 166,
        [sym_identifier] = 166,
        [sym_comment] = 8,
    },
    [43] = {
        [sym_identifier] = 168,
        [sym_comment] = 8,
    },
    [44] = {
        [sym__type] = 170,
        [aux_sym_identifier_list_repeat1] = 172,
        [anon_sym_EQ] = 170,
        [anon_sym_COMMA] = 164,
        [sym_identifier] = 170,
        [sym_comment] = 8,
    },
    [45] = {
        [sym__type] = 174,
        [anon_sym_EQ] = 174,
        [sym_identifier] = 174,
        [sym_comment] = 8,
    },
    [46] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 176,
        [sym_comment] = 8,
    },
    [47] = {
        [sym__type] = 178,
        [anon_sym_EQ] = 180,
        [sym_identifier] = 182,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_RPAREN] = 184,
        [sym_comment] = 8,
    },
    [49] = {
        [sym__top_level_declaration] = 186,
        [sym__declaration] = 186,
        [sym_const_declaration] = 186,
        [sym_var_declaration] = 186,
        [sym_function_declaration] = 186,
        [sym_method_declaration] = 186,
        [sym_type_declaration] = 186,
        [aux_sym_source_file_repeat2] = 186,
        [ts_builtin_sym_end] = 186,
        [anon_sym_const] = 186,
        [anon_sym_var] = 186,
        [anon_sym_func] = 186,
        [sym_comment] = 8,
    },
    [50] = {
        [sym__top_level_declaration] = 188,
        [sym__declaration] = 188,
        [sym_const_declaration] = 188,
        [sym_var_declaration] = 188,
        [sym_function_declaration] = 188,
        [sym_method_declaration] = 188,
        [sym_type_declaration] = 188,
        [aux_sym_source_file_repeat2] = 188,
        [ts_builtin_sym_end] = 188,
        [anon_sym_const] = 188,
        [anon_sym_var] = 188,
        [anon_sym_func] = 188,
        [sym_comment] = 8,
    },
    [51] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 190,
        [anon_sym_EQ] = 192,
        [sym_comment] = 8,
    },
    [52] = {
        [sym_expression_list] = 194,
        [sym__expression] = 196,
        [sym_unary_expression] = 198,
        [sym_binary_expression] = 198,
        [sym__primary_expression] = 198,
        [sym__string_literal] = 200,
        [sym_int_literal] = 200,
        [sym_float_literal] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 204,
        [sym_comment] = 8,
    },
    [53] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [anon_sym_EQ] = 118,
        [sym_comment] = 8,
    },
    [54] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 206,
        [sym_comment] = 8,
    },
    [55] = {
        [aux_sym_expression_list_repeat1] = 208,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 210,
        [anon_sym_COMMA] = 212,
        [sym_comment] = 8,
    },
    [56] = {
        [aux_sym_expression_list_repeat1] = 214,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 214,
        [anon_sym_COMMA] = 214,
        [sym_comment] = 8,
    },
    [57] = {
        [aux_sym_expression_list_repeat1] = 216,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 216,
        [anon_sym_COMMA] = 216,
        [sym_comment] = 8,
    },
    [58] = {
        [aux_sym_expression_list_repeat1] = 218,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 218,
        [anon_sym_COMMA] = 218,
        [sym_comment] = 8,
    },
    [59] = {
        [aux_sym_expression_list_repeat1] = 220,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 220,
        [anon_sym_COMMA] = 220,
        [sym_comment] = 8,
    },
    [60] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 222,
        [sym_comment] = 8,
    },
    [61] = {
        [sym__expression] = 224,
        [sym_unary_expression] = 198,
        [sym_binary_expression] = 198,
        [sym__primary_expression] = 198,
        [sym__string_literal] = 200,
        [sym_int_literal] = 200,
        [sym_float_literal] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 204,
        [sym_comment] = 8,
    },
    [62] = {
        [aux_sym_expression_list_repeat1] = 226,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 228,
        [anon_sym_COMMA] = 212,
        [sym_comment] = 8,
    },
    [63] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 230,
        [sym_comment] = 8,
    },
    [64] = {
        [sym_expression_list] = 232,
        [sym__expression] = 196,
        [sym_unary_expression] = 198,
        [sym_binary_expression] = 198,
        [sym__primary_expression] = 198,
        [sym__string_literal] = 200,
        [sym_int_literal] = 200,
        [sym_float_literal] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 204,
        [sym_comment] = 8,
    },
    [65] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 234,
        [sym_comment] = 8,
    },
    [66] = {
        [sym_var_spec] = 152,
        [sym_identifier_list] = 154,
        [aux_sym_var_declaration_repeat1] = 236,
        [anon_sym_RPAREN] = 238,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [67] = {
        [anon_sym_RPAREN] = 240,
        [sym_comment] = 8,
    },
    [68] = {
        [sym__top_level_declaration] = 190,
        [sym__declaration] = 190,
        [sym_const_declaration] = 190,
        [sym_var_declaration] = 190,
        [sym_function_declaration] = 190,
        [sym_method_declaration] = 190,
        [sym_type_declaration] = 190,
        [aux_sym_source_file_repeat2] = 190,
        [ts_builtin_sym_end] = 190,
        [anon_sym_const] = 190,
        [anon_sym_EQ] = 242,
        [anon_sym_var] = 190,
        [anon_sym_func] = 190,
        [sym_comment] = 8,
    },
    [69] = {
        [sym_expression_list] = 244,
        [sym__expression] = 246,
        [sym_unary_expression] = 248,
        [sym_binary_expression] = 248,
        [sym__primary_expression] = 248,
        [sym__string_literal] = 250,
        [sym_int_literal] = 250,
        [sym_float_literal] = 250,
        [sym_identifier] = 250,
        [sym_raw_string_literal] = 252,
        [sym_interpreted_string_literal] = 252,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 8,
    },
    [70] = {
        [sym__top_level_declaration] = 118,
        [sym__declaration] = 118,
        [sym_const_declaration] = 118,
        [sym_var_declaration] = 118,
        [sym_function_declaration] = 118,
        [sym_method_declaration] = 118,
        [sym_type_declaration] = 118,
        [aux_sym_source_file_repeat2] = 118,
        [ts_builtin_sym_end] = 118,
        [anon_sym_const] = 118,
        [anon_sym_EQ] = 118,
        [anon_sym_var] = 118,
        [anon_sym_func] = 118,
        [sym_comment] = 8,
    },
    [71] = {
        [sym__top_level_declaration] = 206,
        [sym__declaration] = 206,
        [sym_const_declaration] = 206,
        [sym_var_declaration] = 206,
        [sym_function_declaration] = 206,
        [sym_method_declaration] = 206,
        [sym_type_declaration] = 206,
        [aux_sym_source_file_repeat2] = 206,
        [ts_builtin_sym_end] = 206,
        [anon_sym_const] = 206,
        [anon_sym_var] = 206,
        [anon_sym_func] = 206,
        [sym_comment] = 8,
    },
    [72] = {
        [sym__top_level_declaration] = 210,
        [sym__declaration] = 210,
        [sym_const_declaration] = 210,
        [sym_var_declaration] = 210,
        [sym_function_declaration] = 210,
        [sym_method_declaration] = 210,
        [sym_type_declaration] = 210,
        [aux_sym_source_file_repeat2] = 210,
        [aux_sym_expression_list_repeat1] = 256,
        [ts_builtin_sym_end] = 210,
        [anon_sym_const] = 210,
        [anon_sym_var] = 210,
        [anon_sym_func] = 210,
        [anon_sym_COMMA] = 258,
        [sym_comment] = 8,
    },
    [73] = {
        [sym__top_level_declaration] = 214,
        [sym__declaration] = 214,
        [sym_const_declaration] = 214,
        [sym_var_declaration] = 214,
        [sym_function_declaration] = 214,
        [sym_method_declaration] = 214,
        [sym_type_declaration] = 214,
        [aux_sym_source_file_repeat2] = 214,
        [aux_sym_expression_list_repeat1] = 214,
        [ts_builtin_sym_end] = 214,
        [anon_sym_const] = 214,
        [anon_sym_var] = 214,
        [anon_sym_func] = 214,
        [anon_sym_COMMA] = 214,
        [sym_comment] = 8,
    },
    [74] = {
        [sym__top_level_declaration] = 216,
        [sym__declaration] = 216,
        [sym_const_declaration] = 216,
        [sym_var_declaration] = 216,
        [sym_function_declaration] = 216,
        [sym_method_declaration] = 216,
        [sym_type_declaration] = 216,
        [aux_sym_source_file_repeat2] = 216,
        [aux_sym_expression_list_repeat1] = 216,
        [ts_builtin_sym_end] = 216,
        [anon_sym_const] = 216,
        [anon_sym_var] = 216,
        [anon_sym_func] = 216,
        [anon_sym_COMMA] = 216,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__top_level_declaration] = 218,
        [sym__declaration] = 218,
        [sym_const_declaration] = 218,
        [sym_var_declaration] = 218,
        [sym_function_declaration] = 218,
        [sym_method_declaration] = 218,
        [sym_type_declaration] = 218,
        [aux_sym_source_file_repeat2] = 218,
        [aux_sym_expression_list_repeat1] = 218,
        [ts_builtin_sym_end] = 218,
        [anon_sym_const] = 218,
        [anon_sym_var] = 218,
        [anon_sym_func] = 218,
        [anon_sym_COMMA] = 218,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__top_level_declaration] = 220,
        [sym__declaration] = 220,
        [sym_const_declaration] = 220,
        [sym_var_declaration] = 220,
        [sym_function_declaration] = 220,
        [sym_method_declaration] = 220,
        [sym_type_declaration] = 220,
        [aux_sym_source_file_repeat2] = 220,
        [aux_sym_expression_list_repeat1] = 220,
        [ts_builtin_sym_end] = 220,
        [anon_sym_const] = 220,
        [anon_sym_var] = 220,
        [anon_sym_func] = 220,
        [anon_sym_COMMA] = 220,
        [sym_comment] = 8,
    },
    [77] = {
        [sym__top_level_declaration] = 222,
        [sym__declaration] = 222,
        [sym_const_declaration] = 222,
        [sym_var_declaration] = 222,
        [sym_function_declaration] = 222,
        [sym_method_declaration] = 222,
        [sym_type_declaration] = 222,
        [aux_sym_source_file_repeat2] = 222,
        [ts_builtin_sym_end] = 222,
        [anon_sym_const] = 222,
        [anon_sym_var] = 222,
        [anon_sym_func] = 222,
        [sym_comment] = 8,
    },
    [78] = {
        [sym__expression] = 260,
        [sym_unary_expression] = 248,
        [sym_binary_expression] = 248,
        [sym__primary_expression] = 248,
        [sym__string_literal] = 250,
        [sym_int_literal] = 250,
        [sym_float_literal] = 250,
        [sym_identifier] = 250,
        [sym_raw_string_literal] = 252,
        [sym_interpreted_string_literal] = 252,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 8,
    },
    [79] = {
        [sym__top_level_declaration] = 228,
        [sym__declaration] = 228,
        [sym_const_declaration] = 228,
        [sym_var_declaration] = 228,
        [sym_function_declaration] = 228,
        [sym_method_declaration] = 228,
        [sym_type_declaration] = 228,
        [aux_sym_source_file_repeat2] = 228,
        [aux_sym_expression_list_repeat1] = 262,
        [ts_builtin_sym_end] = 228,
        [anon_sym_const] = 228,
        [anon_sym_var] = 228,
        [anon_sym_func] = 228,
        [anon_sym_COMMA] = 258,
        [sym_comment] = 8,
    },
    [80] = {
        [sym__top_level_declaration] = 230,
        [sym__declaration] = 230,
        [sym_const_declaration] = 230,
        [sym_var_declaration] = 230,
        [sym_function_declaration] = 230,
        [sym_method_declaration] = 230,
        [sym_type_declaration] = 230,
        [aux_sym_source_file_repeat2] = 230,
        [ts_builtin_sym_end] = 230,
        [anon_sym_const] = 230,
        [anon_sym_var] = 230,
        [anon_sym_func] = 230,
        [sym_comment] = 8,
    },
    [81] = {
        [sym_expression_list] = 264,
        [sym__expression] = 246,
        [sym_unary_expression] = 248,
        [sym_binary_expression] = 248,
        [sym__primary_expression] = 248,
        [sym__string_literal] = 250,
        [sym_int_literal] = 250,
        [sym_float_literal] = 250,
        [sym_identifier] = 250,
        [sym_raw_string_literal] = 252,
        [sym_interpreted_string_literal] = 252,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 8,
    },
    [82] = {
        [sym__top_level_declaration] = 234,
        [sym__declaration] = 234,
        [sym_const_declaration] = 234,
        [sym_var_declaration] = 234,
        [sym_function_declaration] = 234,
        [sym_method_declaration] = 234,
        [sym_type_declaration] = 234,
        [aux_sym_source_file_repeat2] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_const] = 234,
        [anon_sym_var] = 234,
        [anon_sym_func] = 234,
        [sym_comment] = 8,
    },
    [83] = {
        [sym__top_level_declaration] = 266,
        [sym__declaration] = 266,
        [sym_const_declaration] = 266,
        [sym_var_declaration] = 266,
        [sym_function_declaration] = 266,
        [sym_method_declaration] = 266,
        [sym_type_declaration] = 266,
        [aux_sym_source_file_repeat2] = 266,
        [ts_builtin_sym_end] = 266,
        [anon_sym_const] = 266,
        [anon_sym_var] = 266,
        [anon_sym_func] = 266,
        [sym_comment] = 8,
    },
    [84] = {
        [sym__type] = 268,
        [anon_sym_EQ] = 270,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [85] = {
        [sym_const_spec] = 274,
        [sym_identifier_list] = 276,
        [aux_sym_const_declaration_repeat1] = 278,
        [anon_sym_RPAREN] = 280,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [86] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 282,
        [sym_comment] = 8,
    },
    [87] = {
        [sym__type] = 284,
        [anon_sym_EQ] = 286,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [88] = {
        [anon_sym_RPAREN] = 288,
        [sym_comment] = 8,
    },
    [89] = {
        [sym__top_level_declaration] = 290,
        [sym__declaration] = 290,
        [sym_const_declaration] = 290,
        [sym_var_declaration] = 290,
        [sym_function_declaration] = 290,
        [sym_method_declaration] = 290,
        [sym_type_declaration] = 290,
        [aux_sym_source_file_repeat2] = 290,
        [ts_builtin_sym_end] = 290,
        [anon_sym_const] = 290,
        [anon_sym_var] = 290,
        [anon_sym_func] = 290,
        [sym_comment] = 8,
    },
    [90] = {
        [sym__top_level_declaration] = 292,
        [sym__declaration] = 292,
        [sym_const_declaration] = 292,
        [sym_var_declaration] = 292,
        [sym_function_declaration] = 292,
        [sym_method_declaration] = 292,
        [sym_type_declaration] = 292,
        [aux_sym_source_file_repeat2] = 292,
        [ts_builtin_sym_end] = 292,
        [anon_sym_const] = 292,
        [anon_sym_var] = 292,
        [anon_sym_func] = 292,
        [sym_comment] = 8,
    },
    [91] = {
        [anon_sym_EQ] = 294,
        [sym_comment] = 8,
    },
    [92] = {
        [sym_expression_list] = 296,
        [sym__expression] = 196,
        [sym_unary_expression] = 198,
        [sym_binary_expression] = 198,
        [sym__primary_expression] = 198,
        [sym__string_literal] = 200,
        [sym_int_literal] = 200,
        [sym_float_literal] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 204,
        [sym_comment] = 8,
    },
    [93] = {
        [anon_sym_EQ] = 118,
        [sym_comment] = 8,
    },
    [94] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 298,
        [sym_comment] = 8,
    },
    [95] = {
        [sym_expression_list] = 300,
        [sym__expression] = 196,
        [sym_unary_expression] = 198,
        [sym_binary_expression] = 198,
        [sym__primary_expression] = 198,
        [sym__string_literal] = 200,
        [sym_int_literal] = 200,
        [sym_float_literal] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 204,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 204,
        [sym_comment] = 8,
    },
    [96] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 302,
        [sym_comment] = 8,
    },
    [97] = {
        [sym_const_spec] = 274,
        [sym_identifier_list] = 276,
        [aux_sym_const_declaration_repeat1] = 304,
        [anon_sym_RPAREN] = 306,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [98] = {
        [anon_sym_RPAREN] = 308,
        [sym_comment] = 8,
    },
    [99] = {
        [anon_sym_EQ] = 310,
        [sym_comment] = 8,
    },
    [100] = {
        [sym_expression_list] = 312,
        [sym__expression] = 246,
        [sym_unary_expression] = 248,
        [sym_binary_expression] = 248,
        [sym__primary_expression] = 248,
        [sym__string_literal] = 250,
        [sym_int_literal] = 250,
        [sym_float_literal] = 250,
        [sym_identifier] = 250,
        [sym_raw_string_literal] = 252,
        [sym_interpreted_string_literal] = 252,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 8,
    },
    [101] = {
        [sym__top_level_declaration] = 298,
        [sym__declaration] = 298,
        [sym_const_declaration] = 298,
        [sym_var_declaration] = 298,
        [sym_function_declaration] = 298,
        [sym_method_declaration] = 298,
        [sym_type_declaration] = 298,
        [aux_sym_source_file_repeat2] = 298,
        [ts_builtin_sym_end] = 298,
        [anon_sym_const] = 298,
        [anon_sym_var] = 298,
        [anon_sym_func] = 298,
        [sym_comment] = 8,
    },
    [102] = {
        [sym_expression_list] = 314,
        [sym__expression] = 246,
        [sym_unary_expression] = 248,
        [sym_binary_expression] = 248,
        [sym__primary_expression] = 248,
        [sym__string_literal] = 250,
        [sym_int_literal] = 250,
        [sym_float_literal] = 250,
        [sym_identifier] = 250,
        [sym_raw_string_literal] = 252,
        [sym_interpreted_string_literal] = 252,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 254,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 254,
        [sym_comment] = 8,
    },
    [103] = {
        [sym__top_level_declaration] = 302,
        [sym__declaration] = 302,
        [sym_const_declaration] = 302,
        [sym_var_declaration] = 302,
        [sym_function_declaration] = 302,
        [sym_method_declaration] = 302,
        [sym_type_declaration] = 302,
        [aux_sym_source_file_repeat2] = 302,
        [ts_builtin_sym_end] = 302,
        [anon_sym_const] = 302,
        [anon_sym_var] = 302,
        [anon_sym_func] = 302,
        [sym_comment] = 8,
    },
    [104] = {
        [sym_import_declaration] = 316,
        [sym__top_level_declaration] = 316,
        [sym__declaration] = 316,
        [sym_const_declaration] = 316,
        [sym_var_declaration] = 316,
        [sym_function_declaration] = 316,
        [sym_method_declaration] = 316,
        [sym_type_declaration] = 316,
        [aux_sym_source_file_repeat1] = 316,
        [aux_sym_source_file_repeat2] = 316,
        [ts_builtin_sym_end] = 316,
        [anon_sym_import] = 316,
        [anon_sym_const] = 316,
        [anon_sym_var] = 316,
        [anon_sym_func] = 316,
        [sym_comment] = 8,
    },
    [105] = {
        [sym_import_declaration] = 318,
        [sym__top_level_declaration] = 318,
        [sym__declaration] = 318,
        [sym_const_declaration] = 318,
        [sym_var_declaration] = 318,
        [sym_function_declaration] = 318,
        [sym_method_declaration] = 318,
        [sym_type_declaration] = 318,
        [aux_sym_source_file_repeat1] = 318,
        [aux_sym_source_file_repeat2] = 318,
        [ts_builtin_sym_end] = 318,
        [anon_sym_import] = 318,
        [anon_sym_const] = 318,
        [anon_sym_var] = 318,
        [anon_sym_func] = 318,
        [sym_comment] = 8,
    },
    [106] = {
        [sym_import_spec] = 320,
        [sym__string_literal] = 322,
        [aux_sym_import_declaration_repeat1] = 324,
        [anon_sym_RPAREN] = 326,
        [anon_sym_DOT] = 328,
        [sym_identifier] = 328,
        [sym_raw_string_literal] = 330,
        [sym_interpreted_string_literal] = 330,
        [sym_comment] = 8,
    },
    [107] = {
        [sym__string_literal] = 332,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [108] = {
        [sym_import_declaration] = 218,
        [sym__top_level_declaration] = 218,
        [sym__declaration] = 218,
        [sym_const_declaration] = 218,
        [sym_var_declaration] = 218,
        [sym_function_declaration] = 218,
        [sym_method_declaration] = 218,
        [sym_type_declaration] = 218,
        [aux_sym_source_file_repeat1] = 218,
        [aux_sym_source_file_repeat2] = 218,
        [ts_builtin_sym_end] = 218,
        [anon_sym_import] = 218,
        [anon_sym_const] = 218,
        [anon_sym_var] = 218,
        [anon_sym_func] = 218,
        [sym_comment] = 8,
    },
    [109] = {
        [sym_import_declaration] = 334,
        [sym__top_level_declaration] = 334,
        [sym__declaration] = 334,
        [sym_const_declaration] = 334,
        [sym_var_declaration] = 334,
        [sym_function_declaration] = 334,
        [sym_method_declaration] = 334,
        [sym_type_declaration] = 334,
        [aux_sym_source_file_repeat1] = 334,
        [aux_sym_source_file_repeat2] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_import] = 334,
        [anon_sym_const] = 334,
        [anon_sym_var] = 334,
        [anon_sym_func] = 334,
        [sym_comment] = 8,
    },
    [110] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 336,
        [sym_comment] = 8,
    },
    [111] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 318,
        [sym_comment] = 8,
    },
    [112] = {
        [anon_sym_RPAREN] = 338,
        [sym_comment] = 8,
    },
    [113] = {
        [sym_import_declaration] = 340,
        [sym__top_level_declaration] = 340,
        [sym__declaration] = 340,
        [sym_const_declaration] = 340,
        [sym_var_declaration] = 340,
        [sym_function_declaration] = 340,
        [sym_method_declaration] = 340,
        [sym_type_declaration] = 340,
        [aux_sym_source_file_repeat1] = 340,
        [aux_sym_source_file_repeat2] = 340,
        [ts_builtin_sym_end] = 340,
        [anon_sym_import] = 340,
        [anon_sym_const] = 340,
        [anon_sym_var] = 340,
        [anon_sym_func] = 340,
        [sym_comment] = 8,
    },
    [114] = {
        [sym__string_literal] = 342,
        [sym_raw_string_literal] = 330,
        [sym_interpreted_string_literal] = 330,
        [sym_comment] = 8,
    },
    [115] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 218,
        [sym_comment] = 8,
    },
    [116] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 334,
        [sym_comment] = 8,
    },
    [117] = {
        [sym_import_declaration] = 344,
        [sym__top_level_declaration] = 344,
        [sym__declaration] = 344,
        [sym_const_declaration] = 344,
        [sym_var_declaration] = 344,
        [sym_function_declaration] = 344,
        [sym_method_declaration] = 344,
        [sym_type_declaration] = 344,
        [aux_sym_source_file_repeat1] = 344,
        [aux_sym_source_file_repeat2] = 344,
        [ts_builtin_sym_end] = 344,
        [anon_sym_import] = 344,
        [anon_sym_const] = 344,
        [anon_sym_var] = 344,
        [anon_sym_func] = 344,
        [sym_comment] = 8,
    },
    [118] = {
        [sym_import_spec] = 320,
        [sym__string_literal] = 322,
        [aux_sym_import_declaration_repeat1] = 346,
        [anon_sym_RPAREN] = 348,
        [anon_sym_DOT] = 328,
        [sym_identifier] = 328,
        [sym_raw_string_literal] = 330,
        [sym_interpreted_string_literal] = 330,
        [sym_comment] = 8,
    },
    [119] = {
        [anon_sym_RPAREN] = 350,
        [sym_comment] = 8,
    },
    [120] = {
        [ts_builtin_sym_end] = 352,
        [sym_comment] = 8,
    },
    [121] = {
        [ts_builtin_sym_end] = 354,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__top_level_declaration] = 356,
        [sym__declaration] = 356,
        [sym_const_declaration] = 356,
        [sym_var_declaration] = 356,
        [sym_function_declaration] = 356,
        [sym_method_declaration] = 356,
        [sym_type_declaration] = 356,
        [aux_sym_source_file_repeat2] = 356,
        [ts_builtin_sym_end] = 356,
        [anon_sym_const] = 356,
        [anon_sym_var] = 356,
        [anon_sym_func] = 356,
        [sym_comment] = 8,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT_EXTRA(),
    [10] = {.count = 1}, ACCEPT_INPUT(),
    [12] = {.count = 1}, SHIFT(5, 0),
    [14] = {.count = 1}, SHIFT(6, 0),
    [16] = {.count = 1}, SHIFT(7, 0),
    [18] = {.count = 1}, SHIFT(8, 0),
    [20] = {.count = 1}, SHIFT(9, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, REDUCE(sym_source_file, 1, 0),
    [26] = {.count = 1}, SHIFT(11, 0),
    [28] = {.count = 1}, SHIFT(12, 0),
    [30] = {.count = 1}, SHIFT(13, 0),
    [32] = {.count = 1}, SHIFT(14, 0),
    [34] = {.count = 1}, SHIFT(4, 0),
    [36] = {.count = 1}, REDUCE(sym_package_clause, 2, 0),
    [38] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 1, 0),
    [40] = {.count = 1}, SHIFT(122, 0),
    [42] = {.count = 1}, SHIFT(121, 0),
    [44] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [46] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [50] = {.count = 1}, SHIFT(120, 0),
    [52] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [54] = {.count = 1}, SHIFT(104, 0),
    [56] = {.count = 1}, SHIFT(105, 0),
    [58] = {.count = 1}, SHIFT(106, 0),
    [60] = {.count = 1}, SHIFT(107, 0),
    [62] = {.count = 1}, SHIFT(108, 0),
    [64] = {.count = 1}, SHIFT(83, 0),
    [66] = {.count = 1}, SHIFT(84, 0),
    [68] = {.count = 1}, SHIFT(85, 0),
    [70] = {.count = 1}, SHIFT(41, 0),
    [72] = {.count = 1}, SHIFT(38, 0),
    [74] = {.count = 1}, SHIFT(39, 0),
    [76] = {.count = 1}, SHIFT(40, 0),
    [78] = {.count = 1}, SHIFT(15, 0),
    [80] = {.count = 1}, SHIFT(16, 0),
    [82] = {.count = 1}, SHIFT(17, 0),
    [84] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [86] = {.count = 1}, SHIFT(28, 0),
    [88] = {.count = 1}, SHIFT(29, 0),
    [90] = {.count = 1}, SHIFT(30, 0),
    [92] = {.count = 1}, SHIFT(31, 0),
    [94] = {.count = 1}, SHIFT(32, 0),
    [96] = {.count = 1}, SHIFT(18, 0),
    [98] = {.count = 1}, SHIFT(19, 0),
    [100] = {.count = 1}, SHIFT(20, 0),
    [102] = {.count = 1}, SHIFT(21, 0),
    [104] = {.count = 1}, SHIFT(24, 0),
    [106] = {.count = 1}, SHIFT(25, 0),
    [108] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [110] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [112] = {.count = 1}, SHIFT(22, 0),
    [114] = {.count = 1}, SHIFT(23, 0),
    [116] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [118] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [120] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [122] = {.count = 1}, SHIFT(26, 0),
    [124] = {.count = 1}, SHIFT(27, 0),
    [126] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [128] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [130] = {.count = 1}, SHIFT(37, 0),
    [132] = {.count = 1}, SHIFT(34, 0),
    [134] = {.count = 1}, SHIFT(35, 0),
    [136] = {.count = 1}, SHIFT(33, 0),
    [138] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [140] = {.count = 1}, SHIFT(36, 0),
    [142] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [144] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [146] = {.count = 1}, SHIFT(68, 0),
    [148] = {.count = 1}, SHIFT(69, 0),
    [150] = {.count = 1}, SHIFT(70, 0),
    [152] = {.count = 1}, SHIFT(46, 0),
    [154] = {.count = 1}, SHIFT(47, 0),
    [156] = {.count = 1}, SHIFT(48, 0),
    [158] = {.count = 1}, SHIFT(49, 0),
    [160] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [162] = {.count = 1}, SHIFT(42, 0),
    [164] = {.count = 1}, SHIFT(43, 0),
    [166] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [168] = {.count = 1}, SHIFT(44, 0),
    [170] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [172] = {.count = 1}, SHIFT(45, 0),
    [174] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [176] = {.count = 1}, SHIFT(66, 0),
    [178] = {.count = 1}, SHIFT(51, 0),
    [180] = {.count = 1}, SHIFT(52, 0),
    [182] = {.count = 1}, SHIFT(53, 0),
    [184] = {.count = 1}, SHIFT(50, 0),
    [186] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [188] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [190] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [192] = {.count = 1}, SHIFT(64, 0),
    [194] = {.count = 1}, SHIFT(54, 0),
    [196] = {.count = 1}, SHIFT(55, 0),
    [198] = {.count = 1}, SHIFT(56, 0),
    [200] = {.count = 1}, SHIFT(57, 0),
    [202] = {.count = 1}, SHIFT(58, 0),
    [204] = {.count = 1}, SHIFT(59, 0),
    [206] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [208] = {.count = 1}, SHIFT(60, 0),
    [210] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [212] = {.count = 1}, SHIFT(61, 0),
    [214] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [216] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [218] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [220] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [222] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [224] = {.count = 1}, SHIFT(62, 0),
    [226] = {.count = 1}, SHIFT(63, 0),
    [228] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [230] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [232] = {.count = 1}, SHIFT(65, 0),
    [234] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [236] = {.count = 1}, SHIFT(67, 0),
    [238] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [240] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [242] = {.count = 1}, SHIFT(81, 0),
    [244] = {.count = 1}, SHIFT(71, 0),
    [246] = {.count = 1}, SHIFT(72, 0),
    [248] = {.count = 1}, SHIFT(73, 0),
    [250] = {.count = 1}, SHIFT(74, 0),
    [252] = {.count = 1}, SHIFT(75, 0),
    [254] = {.count = 1}, SHIFT(76, 0),
    [256] = {.count = 1}, SHIFT(77, 0),
    [258] = {.count = 1}, SHIFT(78, 0),
    [260] = {.count = 1}, SHIFT(79, 0),
    [262] = {.count = 1}, SHIFT(80, 0),
    [264] = {.count = 1}, SHIFT(82, 0),
    [266] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [268] = {.count = 1}, SHIFT(99, 0),
    [270] = {.count = 1}, SHIFT(100, 0),
    [272] = {.count = 1}, SHIFT(93, 0),
    [274] = {.count = 1}, SHIFT(86, 0),
    [276] = {.count = 1}, SHIFT(87, 0),
    [278] = {.count = 1}, SHIFT(88, 0),
    [280] = {.count = 1}, SHIFT(89, 0),
    [282] = {.count = 1}, SHIFT(97, 0),
    [284] = {.count = 1}, SHIFT(91, 0),
    [286] = {.count = 1}, SHIFT(92, 0),
    [288] = {.count = 1}, SHIFT(90, 0),
    [290] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [292] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [294] = {.count = 1}, SHIFT(95, 0),
    [296] = {.count = 1}, SHIFT(94, 0),
    [298] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [300] = {.count = 1}, SHIFT(96, 0),
    [302] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [304] = {.count = 1}, SHIFT(98, 0),
    [306] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [308] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [310] = {.count = 1}, SHIFT(102, 0),
    [312] = {.count = 1}, SHIFT(101, 0),
    [314] = {.count = 1}, SHIFT(103, 0),
    [316] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [318] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [320] = {.count = 1}, SHIFT(110, 0),
    [322] = {.count = 1}, SHIFT(111, 0),
    [324] = {.count = 1}, SHIFT(112, 0),
    [326] = {.count = 1}, SHIFT(113, 0),
    [328] = {.count = 1}, SHIFT(114, 0),
    [330] = {.count = 1}, SHIFT(115, 0),
    [332] = {.count = 1}, SHIFT(109, 0),
    [334] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [336] = {.count = 1}, SHIFT(118, 0),
    [338] = {.count = 1}, SHIFT(117, 0),
    [340] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [342] = {.count = 1}, SHIFT(116, 0),
    [344] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [346] = {.count = 1}, SHIFT(119, 0),
    [348] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [350] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [352] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [354] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [356] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
